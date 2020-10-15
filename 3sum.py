nums = [-1, 0, 1, 2, -1, -4]
res = set()
length = len(nums)
nums.sort()

for i in range(length):
	if nums[i] > 0: break
	if i > 0 and nums[i] == nums[i-1]: continue

	l, r = i+1, length-1
	while l < r:
		total = nums[l]+nums[r]+nums[i]
		if  total == 0:
			res.add([nums[l], nums[r], nums[i]])
			l = l+1
			r = r-1
		elif total > 0:
			r = r-1
		else:
			l = l+1

print(res)