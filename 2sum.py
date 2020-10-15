nums = [3, 2, 3, 11]
target = 6
x = dict()
ans = []
for i in range(len(nums)):
    rem = target - nums[i]
    if rem in x:
    	ans.append(x[rem])
    	ans.append(i)
    	print(ans)
    x[nums[i]] = i

    