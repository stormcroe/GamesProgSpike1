using System;

namespace Spells
{
	public class HealingSpell:Spell
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="Spells.HealingSpell"/> class.
		/// </summary>
		/// <param name="name">Name.</param>
		public HealingSpell(string name): base(name)
		{

		}

		/// <summary>
		/// Cast this spell, having an effect on the surroundings.
		/// </summary>
		/// <returns>A description of the spell's effect.</returns>
		public override string Cast ()
		{
			return "Ahh... That feels better";
		}
	}

}

