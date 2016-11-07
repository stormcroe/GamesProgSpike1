using System;

namespace Spells
{
	/// <summary>
	/// Spells, when cast have an effect on the surrounding environment. 
	/// There are many types of spells and each has an effect on the environment.
	/// </summary>
	public class Spell
	{
		/// <summary>
		/// The name of the spell.
		/// </summary>
		protected string _name;

		/// <summary>
		/// Initializes a new Spell.
		/// </summary>
		/// <param name="name">Name.</param>
		public Spell (string name)
		{
			_name = name;

		}

		/// <summary>
		/// Cast this spell, having an effect on the surroundings.
		/// </summary>
		/// <returns> A description of the spell's effect. </returns>
		public virtual string Cast()
		{
			return ("You cast " + _name + ". It doesn't seem to work...");
		}
		/// <summary>
		/// Gets or sets the name.
		/// </summary>
		/// <value>The name.</value>
		public string Name {
			get {
				return _name;
			}
			set {
				_name = value;
			}
		}
	}
}

