void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!MISC::IS_BIT_SET(uLocal_2, 1))
	{
		if (!MISC::IS_BIT_SET(uLocal_2, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_0, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_0, 1);
					ENTITY::SET_ENTITY_PROOFS(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_1, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_1, 1);
						ENTITY::SET_ENTITY_PROOFS(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					MISC::SET_BIT(&uLocal_2, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_0, 0))
			{
				fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					MISC::SET_BIT(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_0))
				{
					MISC::SET_BIT(&uLocal_2, 1);
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_2, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()
{
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_0);
	ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uLocal_1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

