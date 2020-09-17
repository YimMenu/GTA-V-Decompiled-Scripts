void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1986443536) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							uVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
							if (INTERIOR::IS_VALID_INTERIOR(uVar0))
							{
								if (INTERIOR::IS_INTERIOR_READY(uVar0))
								{
									if (INTERIOR::IS_INTERIOR_SCENE())
									{
										STREAMING::REQUEST_PTFX_ASSET();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(uLocal_4))
								{
									uLocal_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1090f, -1996f, 39f, 100f, -1639085878, 1, 0, 1);
								}
								if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_4))
									{
										uVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
										if (INTERIOR::IS_VALID_INTERIOR(uVar0))
										{
											if (INTERIOR::IS_INTERIOR_READY(uVar0))
											{
												if (INTERIOR::IS_INTERIOR_SCENE())
												{
													uLocal_3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_4))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, uParam0))
	{
	}
}

