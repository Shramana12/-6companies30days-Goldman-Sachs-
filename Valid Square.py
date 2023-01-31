class Solution:
    def validSquare(self, p1: List[int], p2: List[int], p3: List[int], p4: List[int]) -> bool:
        def getDist(p1,p2):
            return (p1[0]-p2[0]) ** 2 +(p1[1]-p2[1]) **2

        p_list=[p1,p2,p3,p4]
        p_list.sort()

        return getDist(p_list[0],p_list[3])==getDist(p_list[1],p_list[2]) and getDist(p_list[0],p_list[1])==getDist(p_list[0],p_list[2]) and getDist(p_list[0],p_list[3])