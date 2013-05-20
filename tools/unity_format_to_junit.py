import sys
import re

if len(sys.argv) == 2:
    in_file = sys.argv[1]
    out_file = 'out_tests.xml'
elif len(sys.argv) > 2:
    in_file = sys.argv[1]
    out_file = sys.argv[2]
else:
    in_file = 'error-out.txt'
    out_file = 'out_tests.xml'

f = open(in_file)
line_count = 0
lines = []
results = {}
#Create list with all results
for line in f:
    line = line.strip()
    line_count = line_count + 1
    test_out = ''
    line = line.replace(" ", "")
    if re.search('TEST\(\S+,$', line) is not None:
        tmp_line = line
        next
    elif re.search('\S+\)$', line) is not None:
        tmp_line = ''
        next
    elif (re.search('\S+\):(PASS|FAIL|IGNORE)', line) is not None
          and tmp_line != ''):
        lines.append(tmp_line + line)
        tmp_line = ''
    elif (re.search('TEST\(\S+\):(PASS|FAIL|IGNORE)', line) is not None
          and tmp_line == ''):
        lines.append(line)
f.close()
for i in lines:
    s = re.search('TEST\((\S+,\S+)\):(PASS|FAIL|IGNORE)', i)
    testsute, testcase = s.group(1).split(',')
    result = s.group(2)
    #print '%s|%s|%s' % (testsute, testcase, result)
    if testsute not in results.keys():
        results[testsute] = [[testcase, result]]
    else:
        results[testsute].append([testcase, result])
total_failed = 0
total_passed = 0
total_skiped = 0
global_output = []
for i in results.keys():
    failed = 0
    passed = 0
    skiped = 0
    output = []
    for j in results[i]:
        tmp_line = '<testcase classname="%s" name="%s">' % (i, j[0])
        if j[1] == "PASS":
            passed = passed + 1
        elif j[1] == "FAIL":
            failed = failed + 1
            tmp_line = tmp_line + '<failure type="FAIL"/>'
        elif j[1] == "IGNORE":
            skiped = skiped + 1
            tmp_line = tmp_line + '<skipped/>'
        tmp_line = tmp_line + '</testcase>'
        output.append(tmp_line)
    output.insert(0, '<testsuite name="%s" failures="%s" '
                  'skips="%s" tests="%s">' %
                  (i, failed, skiped, passed + skiped + failed))
    output.append('</testsuite>')
    total_failed = total_failed + failed
    total_passed = total_passed + passed
    total_skiped = total_skiped + skiped
    for j in output:
        global_output.append(j)

if global_output == []:
    sys.exit("Bad or empty input file!")

global_output.insert(0, '<testsuites name="Unity unitests" failures="%s" '
                     'skips="%s"  tests="%s">' %
                     (total_failed, total_skiped,
                     total_skiped + total_passed + total_failed))

global_output.insert(0, '<?xml version="1.0" encoding="UTF-8"?>')
global_output.append('</testsuites>')
f = open(out_file, 'w')
for i in global_output:
    f.write('%s\n' % i)
f.close()

