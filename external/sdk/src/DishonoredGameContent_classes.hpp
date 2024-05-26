/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: DishonoredGameContent_classes.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class DishonoredGameContent.DisContactType_Arrow
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Arrow : public UDisContactType_Projectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Arrow");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Arrow_Flare
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Arrow_Flare : public UDisContactType_Arrow
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Arrow_Flare");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Arrow_Sleep
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Arrow_Sleep : public UDisContactType_Arrow
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Arrow_Sleep");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Bullet
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Bullet : public UDisContactType_Projectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Bullet");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_BulletExplosive
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_BulletExplosive : public UDisContactType_Bullet
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_BulletExplosive");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Glass
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Glass : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Glass");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_BreakableGlass
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_BreakableGlass : public UDisContactType_Env_Glass
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_BreakableGlass");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Carpet
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Carpet : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Carpet");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Dirt
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Dirt : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Dirt");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Grass
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Grass : public UDisContactType_Env_Dirt
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Grass");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Gravel
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Gravel : public UDisContactType_Env_Dirt
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Gravel");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Metal
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Metal : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Metal");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Mud
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Mud : public UDisContactType_Env_Dirt
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Mud");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_RiverKrustShell
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_RiverKrustShell : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_RiverKrustShell");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Stone
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Stone : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Stone");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_StoneWet
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_StoneWet : public UDisContactType_Env_Stone
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_StoneWet");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Sword
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Sword : public UDisContactType_Env_Metal
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Sword");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_TallboyStilts
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_TallboyStilts : public UDisContactType_Env_Metal
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_TallboyStilts");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Tile
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Tile : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Tile");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_WallOfLight
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_WallOfLight : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_WallOfLight");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Water
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Water : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Water");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_WhaleOilBattery
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_WhaleOilBattery : public UDisContactType_Env_Metal
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_WhaleOilBattery");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Env_Wood
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Env_Wood : public UDisContactType_Environment
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Env_Wood");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Food
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Food : public UDisContactType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Food");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Grenade
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Grenade : public UDisContactType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Grenade");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_PotsPans
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_PotsPans : public UDisContactType_Env_Metal
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_PotsPans");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_RiverKrustSpit
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_RiverKrustSpit : public UDisContactType_Projectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_RiverKrustSpit");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_SpringRazor
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_SpringRazor : public UDisContactType_Projectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_SpringRazor");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_SpringRazorPlaced
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_SpringRazorPlaced : public UDisContactType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_SpringRazorPlaced");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_StickyGrenade
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_StickyGrenade : public UDisContactType_Grenade
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_StickyGrenade");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Sword
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Sword : public UDisContactType_Weapon
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Sword");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Sword_BigDamage
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Sword_BigDamage : public UDisContactType_Sword
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Sword_BigDamage");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Sword_Pinned
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Sword_Pinned : public UDisContactType_Sword
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Sword_Pinned");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_Sword_SmallDamage
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_Sword_SmallDamage : public UDisContactType_Sword
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_Sword_SmallDamage");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_ThrownApple
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_ThrownApple : public UDisContactType_Projectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_ThrownApple");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_ThrownRock
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_ThrownRock : public UDisContactType_Projectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_ThrownRock");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisContactType_WolfhoundBite
// 0x0000 (0x0054 - 0x0054)
class UDisContactType_WolfhoundBite : public UDisContactType_Weapon
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisContactType_WolfhoundBite");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisDamageType_Arrow
// 0x0000 (0x0088 - 0x0088)
class UDisDamageType_Arrow : public UDishonoredDamageType_Projectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisDamageType_Arrow");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisDamageType_Arrow_Flare
// 0x0000 (0x0088 - 0x0088)
class UDisDamageType_Arrow_Flare : public UDisDamageType_Arrow
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisDamageType_Arrow_Flare");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisDamageType_Arrow_Sleep
// 0x0000 (0x0088 - 0x0088)
class UDisDamageType_Arrow_Sleep : public UDisDamageType_Arrow
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisDamageType_Arrow_Sleep");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisDamageType_NPCSlash
// 0x0003 (0x0085 - 0x0088)
class UDisDamageType_NPCSlash : public UDishonoredDamageType
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisDamageType_NPCSlash");
		}

		return uClassPointer;
	};

};

// Class DishonoredGameContent.DisNPCAnimDefinitions
// 0x0000 (0x0044 - 0x0044)
class UDisNPCAnimDefinitions : public UDisAnimDefinitions
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class DishonoredGameContent.DisNPCAnimDefinitions");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/
