/* Fall 2011 Code Contest
 * @author Tyler Shopshire (tshopshi@calpoly.edu)
 * @author Michele Jenkins (mkjenkin@calpoly.edu)
 *
 */

public class Builder
{
    public static void main(String[] args)
    {
        int[] numLetters = new int[99];
        NumbersToEnglish n2e = new NumbersToEnglish();
                
        for (int i = 1; i < 100; i++)
        {
            String numEnglish = n2e.convert(i);
            System.out.print(numEnglish.length() + ",");
        }
        System.out.print("\n");
    }
    
}
