using System;

namespace Spells
{
	/// <summary>
	/// Invisibility Spell. Works once.
	/// </summary>
	public class InvisibilitySpell:Spell
	{
		/// <summary>
		/// Determines whether the spell has been cast.
		/// </summary>
		private Boolean _wasCast;

		/// <summary>
		/// Initializes a new instance of the <see cref="Spells.InvisibilitySpell"/> class.
		/// </summary>
		/// <param name="name">Name.</param>
		public InvisibilitySpell (string name) : base(name)
		{
			_wasCast = false;
		}

		/// <summary>
		/// Casts this specific spell, having an effect on the surroundings. Will only work once
		/// </summary>
		/// <returns>A description of the spell's effect.</returns>
		public override string Cast()
		{
			if (!_wasCast)
			{
				_wasCast = true;
				return "Zipp... Where am I?";
			}
			else
				return "Pzzzit";
		}
	}
}

