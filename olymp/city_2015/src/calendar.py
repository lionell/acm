inp = raw_input().split(" ")
month = int(inp[0])
day = int(inp[1])
out = []
while (month <= 12):
    print month, day,
    day += 7
    if (month % 2 == 0 and day > 31):
        day -= 31;
        month += 1;
    if (month % 2 == 1 and day > 30):
        day -= 30;
        month += 1;
