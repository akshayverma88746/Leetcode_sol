class Solution:
    def capitalizeTitle(self, title: str) -> str:
        s = []
        for word in title.split(" "):
            word = word.lower();
            if len(word)>2:
                word = word[0].upper() + word[1:]
            s.append(word)
        return " ".join(s)
        