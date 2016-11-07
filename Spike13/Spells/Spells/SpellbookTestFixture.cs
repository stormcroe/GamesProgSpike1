using NUnit.Framework;
using System;

namespace Spells
{
	[TestFixture ()]
	public class SpellbookTestFixture
	{
		[Test ()]
		public void TestAddSpell ()
		{
			SpellBook s = new SpellBook ();
			Spell u = new HealingSpell ("New Spell");

			s.AddSpell (u);
			Assert.IsTrue (u == s[0]);
		}

		[Test()]
		public void TestRemoveSpell()
		{
			SpellBook s = new SpellBook ();
			Spell u = new InvisibilitySpell ("New Spell");

			s.AddSpell (u);
			Assert.IsTrue(s.SpellCount != 0);
			s.RemoveSpell (s[0]);
			Assert.IsTrue (s.SpellCount == 0);
		}

		[Test()]
		public void TestGetSpellIndex()
		{
			SpellBook s = new SpellBook ();
			Spell u = new TeleportSpell("New Spell");
			s.AddSpell (u);

			Assert.IsTrue (u == s [0]);
				
		}
	}
}

