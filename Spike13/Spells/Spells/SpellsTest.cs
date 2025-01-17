using NUnit.Framework;
using System;

namespace Spells
{
	[TestFixture ()]
	public class SpellsTest
	{
		[Test ()]
		public void TestHealSpell ()
		{
            Spell s = new HealingSpell("Heal");
            Assert.IsTrue(s.Cast() == "Ahh... That feels better");
		}

        [Test()]
        public void TestTeleportSpell()
        {
            Spell s = new TeleportSpell("Teleport");
			Assert.IsTrue(s.Cast() == "Poof ... You find yourself somewhere else." || s.Cast() == "Arrr ... I'm too tired to cast this.");
        }

        [Test()]
        public void TestInvisibilitySpell()
        {
            Spell s = new InvisibilitySpell("Invisibility");
            Assert.IsTrue(s.Cast() == "Zipp... Where am I?");
			Assert.IsTrue(s.Cast() == "Pzzzit");

        }

		[Test()]
		public void TestSpellRename()
		{
			Spell s = new InvisibilitySpell("Invisibility");
			Assert.IsTrue (s.Name == "Invisibility");
			s.Name = "Greater Invisibility";
			Assert.IsFalse (s.Name == "Invisibility");
			Assert.IsTrue (s.Name == "Greater Invisibility");
		}
	}
}

