using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Spells
{
	/// <summary>
	/// The Spellbook is a wizards companion, it stores many spells that a wizard cannot remembeer on his/her own.
	/// </summary>
    class SpellBook
    {
        /// <summary>
        /// List of all spells in spellbook
        /// </summary>
        private readonly List<Spell> _spell;
		/// <summary>
		/// Initializes a new instance of the <see cref="Spells.SpellBook"/> class.
		/// </summary>
        public SpellBook()
        {
			_spell = new List<Spell>();
        }
		/// <summary>
		/// Adds a spell to the last index in the list.
		/// </summary>
		/// <param name="s">Spell to be added</param>
        public void AddSpell(Spell s)
        {
			_spell.Add (s);
        }
		/// <summary>
		/// Removes the spell specified.
		/// </summary>
		/// <param name="s">Spell to be removed</param>
        public void RemoveSpell(Spell s)
        {
			_spell.Remove (s);
        }
		/// <summary>
		/// Gets or sets the <see cref="Spells.SpellBook"/> with the specified i.
		/// </summary>
		/// <param name="i">The index.</param>
        public Spell this[int i]
        {
            get
            {
                return _spell[i];
            }
			set 
			{
				_spell [i] = value;
			}
        }
		/// <summary>
		/// Gets the number of spells and returns it as a integer.
		/// </summary>
		/// <value>The number of spells in the spellbook.</value>
		public int SpellCount
		{
			get 
			{
				return _spell.Count ();
			}
		}
    }
}
