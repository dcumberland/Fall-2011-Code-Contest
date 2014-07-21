/* Fall 2011 Code Contest
 * @author Tyler Shopshire (tshopshi@calpoly.edu)
 * @author Michele Jenkins (mkjenkin@calpoly.edu)
 *
 */

public class NumbersToEnglish {
    static String[] unique = { "zero",  "one",   "two",  "three", "four",   "five",   "six",
        "seven", "eight", "nine", "ten",   "eleven", "twelve", "thirteen",
        "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    static String[] tens  = { "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    // convert a value < 100 to English.
    public static String convert(int num)  {
        if (num < 20)
            return unique[num];
        for (int v = 0; v < tens.length; v++) {
            String tDigit = tens[v];
            int dval = 20 + 10 * v; //Start  at 20
            if (dval + 10 > num) {
                if ((num % 10) != 0)
                    return tDigit + unique[num % 10];
                return tDigit;
            }        
        }
        return "Fail\n";
    }
    
}
