def containsDuplicate(self, nums: List[int]) -> bool:
        return sorted(nums) != sorted(set(nums))
    