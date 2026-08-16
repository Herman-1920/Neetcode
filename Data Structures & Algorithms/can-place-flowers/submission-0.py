class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        size = len(flowerbed)
        i = 0

        while i < size and n > 0:
            left_empty = (i == 0) or (flowerbed[i - 1] == 0)
            right_empty = (i == size - 1) or (flowerbed[i + 1] == 0)

            if flowerbed[i] == 0 and left_empty and right_empty:
                flowerbed[i] = 1 
                n -= 1
            i += 1

        return n <= 0