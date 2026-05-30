#User function Template for python3

class Solution:
    def armstrongNumber (self, n):
        num_str=str(n)
        power=len(num_str)
        total=sum(int(digit)**power for digit in num_str)
        if n==total:
            return True
        else:
            return False

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna