using System;

namespace Spells
{
	class MainClass
	{
		/// <summary>
		/// Casts all spells in an array of spells.
		/// </summary>
		/// <param name="s">A Spellbook with many Spell Objects</param>

		public static void CastAll(SpellBook s)
		{
			for (int i = 0; i < s.SpellCount; i++) {
				Console.WriteLine( s [i].Cast ());
			}
		}

		static void Main (string[] args)
		{
			//Create a Spellbook called mySpells"
			SpellBook mySpells = new SpellBook ();

			//Add various spells
			mySpells.AddSpell (new TeleportSpell("Mitch's mighty mover"));
			mySpells.AddSpell (new HealingSpell("Paul's potent poultice"));
			mySpells.AddSpell (new InvisibilitySpell("David's dashing disappearance"));
			mySpells.AddSpell (new TeleportSpell("Stan's stunning shifter"));
			mySpells.AddSpell (new HealingSpell("Lachlan's lavish longevity"));
			
			//Casts all spells and waits for user.
			CastAll (mySpells);
			Console.Read ();
			
		}
	}
}
