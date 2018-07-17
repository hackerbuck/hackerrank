    n = int(sys.stdin.readline())

    unsorted = []

    for _ in xrange(n):
        unsorted_item = sys.stdin.readline()
        unsorted.append(unsorted_item)

    unsorted.sort(key=int)
    print unsorted
