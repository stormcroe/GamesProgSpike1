using System;

namespace Spells
{
	public class TeleportSpell: Spell
	{
		/// <summary>
		/// A random number for use upon casting the spell to see if it resolves
		/// </summary>
		private static readonly Random _random = new Random();

		/// <summary>
		/// Initializes a new instance of the <see cref="Spells.TeleportSpell"/> class.
		/// </summary>
		/// <param name="name">Name.</param>
		public TeleportSpell (string name) : base(name)
		{
		}

		/// <summary>
		/// Cast this spell, having an effect on the surroundings. Does fail 50% of the time though.
		/// </summary>
		/// <returns>A description of the spell's effect (or non-effect).</returns>
		public override string Cast ()
		{
			return _random.NextDouble () > .5 ? "Poof ... You find yourself somewhere else." : "Arrr ... I'm too tired to cast this.";

		}
	}
}

