void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_67 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	StringCopy(&cLocal_240, "PMRAUD", 8);
	iLocal_252 = -1;
	iLocal_253 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_94(2);
		func_93();
	}
	func_87();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_86())
		{
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1)
		{
			iLocal_239 = MISC::GET_GAME_TIMER();
		}
		func_1();
	}
}

void func_1()
{
	switch (iLocal_36)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_37.f_10);
			if (Local_37.f_11 != 0)
			{
				STREAMING::REQUEST_MODEL(Local_37.f_11);
			}
			HUD::REQUEST_ADDITIONAL_TEXT("PRECOV", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_110348.f_222[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_110348.f_222[0], 0))
				{
					iLocal_244 = Global_110348.f_222[0];
					Global_110348.f_222[0] = 0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_244, 1, 1);
					Local_37.f_7 = ENTITY::GET_ENTITY_MODEL(iLocal_244);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_7);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_37.f_7, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_110348.f_225[0]))
				{
					iLocal_245 = Global_110348.f_225[0];
					Global_110348.f_225[0] = 0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_245, 1, 1);
					Local_37.f_8 = ENTITY::GET_ENTITY_MODEL(iLocal_245);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_245, iLocal_251);
					PED::SET_PED_MONEY(iLocal_245, 0);
					PED::SET_PED_ACCURACY(iLocal_245, 5);
					PED::SET_PED_KEEP_TASK(iLocal_245, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_245, 23, 1);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							PED::SET_PED_HELMET(iLocal_245, 1);
							PED::GIVE_PED_HELMET(iLocal_245, 1, 4096, -1);
						}
						else
						{
							PED::SET_PED_HELMET(iLocal_245, 0);
						}
					}
					if (Local_37.f_20)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_245, 453432689, 120, 0, 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_245, 324215364, 120, 1, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_8);
					ENTITY::SET_ENTITY_PROOFS(iLocal_245, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
					func_85(&uLocal_73, 3, iLocal_245, "ABIGAIL", 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_110348.f_225[1]))
				{
					iLocal_246 = Global_110348.f_225[1];
					Global_110348.f_225[1] = 0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_246, 1, 1);
					Local_37.f_9 = ENTITY::GET_ENTITY_MODEL(iLocal_246);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_246, iLocal_251);
					PED::SET_PED_MONEY(iLocal_246, 0);
					PED::SET_PED_ACCURACY(iLocal_246, 5);
					PED::SET_PED_KEEP_TASK(iLocal_246, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_246, 23, 1);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							PED::SET_PED_HELMET(iLocal_246, 1);
							PED::GIVE_PED_HELMET(iLocal_246, 1, 4096, -1);
						}
						else
						{
							PED::SET_PED_HELMET(iLocal_246, 0);
						}
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_9);
					ENTITY::SET_ENTITY_PROOFS(iLocal_246, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
				}
				if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_245) || !PED::IS_PED_INJURED(iLocal_245)) && (!ENTITY::DOES_ENTITY_EXIST(iLocal_246) || !PED::IS_PED_INJURED(iLocal_246)))
				{
					uLocal_249 = func_84(iLocal_244, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_37.f_12), 32);
					func_83(&cVar0, 7500, 1);
					func_82(&(Local_37.f_22), 10000);
					iLocal_238 = 0;
					iLocal_68 = 0;
					iLocal_69 = 0;
					if (Local_37.f_19 != -1)
					{
						iLocal_67 = (MISC::GET_GAME_TIMER() + Local_37.f_19);
					}
				}
				iLocal_36++;
			}
			break;
		
		case 1:
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_245) && PED::IS_PED_INJURED(iLocal_245)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_246) && PED::IS_PED_INJURED(iLocal_246))) || ((Local_37.f_17 && VEHICLE::IS_THIS_MODEL_A_BIKE(Local_37.f_7)) && !PED::IS_PED_IN_VEHICLE(iLocal_245, iLocal_244, 0))) || ((Local_37.f_17 && VEHICLE::IS_THIS_MODEL_A_BIKE(Local_37.f_7)) && !PED::IS_PED_IN_VEHICLE(iLocal_246, iLocal_244, 0))) || ((Local_37.f_18 && !PED::IS_PED_IN_VEHICLE(iLocal_245, iLocal_244, 0)) && func_81(iLocal_245)))
			{
				if (Local_37.f_17 && VEHICLE::IS_THIS_MODEL_A_BIKE(Local_37.f_7))
				{
					if (!PED::IS_PED_INJURED(iLocal_245) && PED::IS_PED_IN_VEHICLE(iLocal_245, iLocal_244, 0))
					{
						PED::KNOCK_PED_OFF_VEHICLE(iLocal_245);
					}
					if (!PED::IS_PED_INJURED(iLocal_246) && PED::IS_PED_IN_VEHICLE(iLocal_246, iLocal_244, 0))
					{
						PED::KNOCK_PED_OFF_VEHICLE(iLocal_246);
					}
				}
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_PRINTS();
				}
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				if (func_86())
				{
					func_79();
				}
				iLocal_238 = -1;
				if (STREAMING::HAS_MODEL_LOADED(Local_37.f_10) && (Local_37.f_11 == 0 || STREAMING::HAS_MODEL_LOADED(Local_37.f_11)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
					{
						Var8 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = OBJECT::CREATE_PICKUP(341217064, Var8, Local_37.f_28, -1, 1, Local_37.f_10);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_10);
						if (HUD::DOES_BLIP_EXIST(uLocal_249))
						{
							HUD::REMOVE_BLIP(&uLocal_249);
						}
						uLocal_249 = func_78(uLocal_247);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_246) && Local_37.f_11 != 0)
					{
						Var8 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_246, 1067030938, 1069547520) };
						uLocal_248 = OBJECT::CREATE_PICKUP(341217064, Var8, Local_37.f_29, -1, 1, Local_37.f_11);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_37.f_11);
						if (HUD::DOES_BLIP_EXIST(uLocal_250))
						{
							HUD::REMOVE_BLIP(&uLocal_250);
						}
						uLocal_250 = func_78(uLocal_248);
					}
					func_77(&uLocal_254, 0, 0);
					iLocal_242 = 1;
					iLocal_36++;
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_245, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_250))
					{
						HUD::REMOVE_BLIP(&uLocal_250);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_249))
					{
						uLocal_249 = func_84(PED::GET_VEHICLE_PED_IS_IN(iLocal_245, 0), 1, 0);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_249))
					{
						HUD::REMOVE_BLIP(&uLocal_249);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_250))
					{
						uLocal_250 = func_74(iLocal_245, 1, 145);
					}
				}
				func_46(&uLocal_254, iLocal_245, 0, 0, 1, 1, 1);
				if (iLocal_67 != -1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_67)
					{
						func_45();
					}
					else
					{
						iVar11 = func_44(MISC::ABSI((iLocal_67 - MISC::GET_GAME_TIMER())), 0, Local_37.f_19);
						if (iVar11 <= 10000)
						{
							func_40((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_40((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
				{
					if (func_39(PLAYER::PLAYER_PED_ID(), iLocal_245, 1) > 500f)
					{
						func_45();
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_249))
					{
						func_38(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_246))
				{
					if (func_39(PLAYER::PLAYER_PED_ID(), iLocal_246, 1) > 500f)
					{
						func_45();
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_250))
					{
						func_38(uLocal_250, iLocal_246, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!OBJECT::DOES_PICKUP_EXIST(uLocal_247) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_247))
			{
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_247))
				{
					OBJECT::REMOVE_PICKUP(uLocal_247);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_249))
				{
					HUD::REMOVE_BLIP(&uLocal_249);
				}
			}
			if (!OBJECT::DOES_PICKUP_EXIST(uLocal_248) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_248))
			{
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_248))
				{
					OBJECT::REMOVE_PICKUP(uLocal_248);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_250))
				{
					HUD::REMOVE_BLIP(&uLocal_250);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_249) && !HUD::DOES_BLIP_EXIST(uLocal_250))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_71)
					{
						func_83("LOSE_WANTED", 7500, 1);
						iLocal_71 = 1;
					}
				}
				else
				{
					HUD::CLEAR_PRINTS();
					func_37();
				}
			}
			else if ((OBJECT::DOES_PICKUP_EXIST(uLocal_247) && func_36(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_COORDS(uLocal_247), 1) > 500f) || (OBJECT::DOES_PICKUP_EXIST(uLocal_248) && func_36(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_COORDS(uLocal_248), 1) > 500f))
			{
				func_45();
			}
			else if (iLocal_242 && func_34())
			{
				HUD::CLEAR_PRINTS();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_37.f_12), 32);
				func_83(&cVar0, 7500, 1);
				iLocal_242 = 0;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245) && !PED::IS_PED_INJURED(iLocal_245))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_244) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_244, 0)) && !iLocal_68)
		{
			if (!func_33(iLocal_245, 242628503, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_243);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_244, 31, 10000);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_244, PLAYER::PLAYER_PED_ID(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_243);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_245, uLocal_243);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_243);
				iLocal_68 = 1;
			}
		}
		else if (((func_33(iLocal_245, 242628503, 1) && TASK::GET_SEQUENCE_PROGRESS(iLocal_245) < 1) && !iLocal_69) && (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_37, Local_37.f_3, Local_37.f_6, 0, 1, 0) || PED::HAS_PED_RECEIVED_EVENT(iLocal_245, 124)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_245, 125)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_245, 126)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_245, 23)) || func_32(Global_110348.f_35, 134217728)))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_245, iLocal_244, PLAYER::PLAYER_PED_ID(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
			iLocal_69 = 1;
		}
		else if ((!func_33(iLocal_245, 242628503, 1) && !func_33(iLocal_245, -1273030092, 1)) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_245, 0))
		{
			if (!func_33(iLocal_245, 1805844857, 1))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_245, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 1);
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(iLocal_245, iLocal_244, 1) && (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_244, 0, 3000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_244, 1, 3000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_244, 2, 8000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_244, 3, 8000)))
		{
			if (!func_33(iLocal_245, 451360105, 1))
			{
				TASK::TASK_LEAVE_VEHICLE(iLocal_245, iLocal_244, 0);
			}
		}
		if (Local_37.f_20)
		{
			if (!bLocal_70)
			{
				if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_245, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_244, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_245, 124)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_245, 125)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_245, 126))
				{
					bLocal_70 = true;
				}
			}
			if (bLocal_70)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_245, 242628503) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_245) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_245, -1273030092) == 1)
				{
					if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_245))
					{
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iLocal_245, 324215364);
						TASK::TASK_DRIVE_BY(iLocal_245, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_244) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_244, 0))
		{
			if (!iLocal_72)
			{
				if ((func_33(iLocal_245, 242628503, 1) && TASK::GET_SEQUENCE_PROGRESS(iLocal_245) == 1) || func_33(iLocal_245, -1273030092, 1))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TAKINGS", 0, -1))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_244, 0, 0, 0);
						iLocal_72 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_246) && !PED::IS_PED_INJURED(iLocal_246))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_246, 0) && !func_33(iLocal_246, 1805844857, 1))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_246, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245) && !PED::IS_PED_INJURED(iLocal_245))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iLocal_245) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_245, 0))
		{
			if (func_86())
			{
				func_79();
			}
		}
		else if (func_39(PLAYER::PLAYER_PED_ID(), iLocal_245, 1) < 15f)
		{
			switch (iLocal_238)
			{
				case 0:
					if (func_31())
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_30(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 1:
					if (func_31())
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 2:
					if (func_31() && (MISC::GET_GAME_TIMER() - iLocal_239) > 3500)
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_30(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 3:
					if (func_31() && (MISC::GET_GAME_TIMER() - iLocal_239) > 1500)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238 = (iLocal_238 - 1);
						}
					}
					break;
				}
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
	{
		if (PED::IS_PED_INJURED(iLocal_245))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_245))
				{
					iLocal_252 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_252) > 2000)
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_246))
	{
		if (PED::IS_PED_INJURED(iLocal_246))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_253 == -1)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_246))
				{
					iLocal_253 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_253) > 2000)
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_246, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_110348.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, cParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_5()
{
	return func_6(Global_110348.f_20, Global_110348.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_29(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_28();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_27(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_26();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_18();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_17())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_16())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_15();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_14();
		func_9();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_28();
	}
	return 0;
}

void func_9()
{
	if (!func_10())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_10()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (func_11(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)
{
	return func_12(iParam0, 20);
}

bool func_12(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_13()
{
	return -1;
}

void func_14()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_20805 = 1;
}

void func_15()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_16()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_18()
{
	if (func_25(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_19();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

int func_19()
{
	func_20();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_20()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
			if (func_21(iVar0) && (!func_25(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_21(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_25(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_26()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_28()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

struct<4> func_30(char* sParam0)
{
	StringCopy(&Var0, sParam0, 16);
	switch (func_19())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_31()
{
	if (func_86())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_33(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_86() && !func_35())
		{
			return 0;
		}
	}
	return 1;
}

int func_35()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

float func_36(int iParam0, struct<3> Param1, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

void func_37()
{
	func_94(1);
	func_93();
}

void func_38(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(uParam0, 1);
						HUD::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(uParam0, 0);
						HUD::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(uParam0, 1);
						HUD::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(uParam0, 0);
						HUD::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_39(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_40(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
}

void func_41(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_43(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_42(0, iVar0);
		Global_1378678.f_1135[iVar0] = uParam0;
		Global_1378678.f_1135.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = uParam3;
		Global_1378678.f_1135.f_183[iVar0] = uParam4;
		Global_1378678.f_1135.f_216[iVar0] = uParam5;
		Global_1378678.f_1135.f_227[iVar0] = fParam6;
		Global_1378678.f_1135.f_227[iVar0].f_1 = fParam7;
		Global_1378678.f_1135.f_258[iVar0] = iParam8;
		Global_1378678.f_1135.f_269[iVar0] = uParam9;
		Global_1378678.f_1135.f_312[iVar0] = iParam10;
		Global_1378678.f_1135.f_323[iVar0] = iParam11;
		Global_1378678.f_1135.f_334[iVar0] = iParam12;
		Global_1378678.f_1135.f_345[iVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[iVar0] = iParam14;
		Global_1378678.f_1135.f_367[iVar0] = iParam15;
		Global_1378678.f_1135.f_378[iVar0] = iParam16;
		Global_1378678.f_1135.f_389[iVar0] = iParam17;
		Global_1378678.f_1135.f_400[iVar0] = iParam18;
		Global_1378678.f_1135.f_411[iVar0] = iParam19;
		Global_1378678.f_1135.f_422[iVar0] = iParam20;
		Global_1378678.f_1135.f_433[iVar0] = iParam21;
		Global_1378678.f_1135.f_444[iVar0] = iParam22;
		Global_1378678.f_1135.f_455[iVar0] = iParam23;
		Global_1378678.f_1135.f_466[iVar0] = iParam24;
		Global_1378678.f_1135.f_205[iVar0] = iParam25;
		Global_1378678.f_1135.f_477[iVar0] = iParam26;
		Global_1378678.f_1135.f_488[iVar0] = iParam27;
		Global_1378678.f_1135.f_499[iVar0] = iParam28;
		Global_1378678.f_1135.f_510[iVar0] = iParam29;
		Global_1378678.f_1135.f_521[iVar0] = iParam30;
		Global_1378678.f_1135.f_532[iVar0] = iParam31;
		Global_1378678.f_1135.f_543[iVar0] = iParam32;
		Global_1378678.f_1135.f_554[iVar0] = iParam33;
	}
}

void func_42(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_43(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_45()
{
	func_94(2);
	func_93();
}

void func_46(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_47(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_47(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_73(iVar0))
	{
		func_72();
	}
	if (func_71(uParam1) && ENTITY::IS_ENTITY_VISIBLE(uParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(uParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_66(uParam0, bParam7, bParam9, 0))
			{
				func_62(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_51(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_73(iVar0))
							{
								func_82(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_50(1);
								}
							}
						}
					}
				}
			}
			else if (func_51(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_73(iVar0))
						{
							func_82(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_50(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_73(sParam5))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_77(uParam0, iVar0, 1);
				}
			}
			if (!func_66(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_49(uParam0))
				{
					func_48(uParam0);
				}
			}
		}
	}
	else
	{
		func_77(uParam0, iVar0, 0);
	}
}

void func_48(var uParam0)
{
	if (func_71(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_49(var uParam0)
{
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_50(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_51(char* sParam0)
{
	if (!func_52(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_73(sParam0)) || func_73("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_50(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_50(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_50(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_52(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_61(0))
	{
		return 0;
	}
	if (func_60())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1779901043) > 0)
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_59() || func_58(Global_4456448.f_232883)) || func_57())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_56(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(uVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(uVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_55(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_53(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_54(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_54(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_57()
{
	return Global_2450632.f_17;
}

bool func_58(int iParam0)
{
	return iParam0 == 51;
}

var func_59()
{
	return Global_2450632.f_16;
}

bool func_60()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_61(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_62(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	if (Global_1319117 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam1, 0))
	{
		func_77(uParam0, 0, 0);
	}
	if (func_65(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_63())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_63()
{
	return func_64(PLAYER::PLAYER_ID());
}

int func_64(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

bool func_65(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_66(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_70(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_49(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_70(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_69(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_70(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_68(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_67(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_67(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_68(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_49(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_52(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_72();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_67(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_69(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_70(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_72()
{
	MISC::SET_BIT(&Global_7357, 4);
}

bool func_73(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_74(var uParam0, bool bParam1, int iParam2)
{
	uVar0 = func_75(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_1798[iParam2].f_3));
	}
	return uVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_73(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_73(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

int func_78(var uParam0)
{
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_PICKUP(uParam0);
	HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return uVar0;
}

void func_79()
{
	Global_19671 = 0;
	func_80();
}

void func_80()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

int func_81(int iParam0)
{
	if (((((PED::HAS_PED_RECEIVED_EVENT(uParam0, 124) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 125)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 42)) || (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) && PED::HAS_PED_RECEIVED_EVENT(iParam0, 29))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	else
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	}
	return 0;
}

void func_82(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_83(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(cParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_84(var uParam0, bool bParam1, bool bParam2)
{
	return func_75(uParam0, !bParam1, bParam2);
}

void func_85(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = uParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_86()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_87()
{
	func_88(&Local_37);
	PED::ADD_RELATIONSHIP_GROUP("relThief", &iLocal_251);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_251);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_251, 1862763509);
	switch (func_19())
	{
		case 0:
			func_85(&uLocal_73, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_85(&uLocal_73, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_85(&uLocal_73, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
}

void func_88(var uParam0)
{
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	Var0.z = 0f;
	iVar3 = 0;
	iVar4 = 0;
	MISC::SET_BIT(&iVar3, 3);
	MISC::SET_BIT(&iVar3, 4);
	MISC::SET_BIT(&iVar4, 3);
	MISC::SET_BIT(&iVar4, 4);
	MISC::SET_BIT(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = 131961260;
			uParam0->f_10 = -1623160520;
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = -322270187;
			uParam0->f_9 = -322270187;
			uParam0->f_10 = 680380202;
			uParam0->f_11 = -1038739674;
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_92())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_89(func_92(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_89(func_92(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_89(func_92(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_89(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_90(func_91(Param1 - Vector(0f, 174.58f, 335.5574f)), func_91(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_90(func_91(Param1 - Vector(0f, -711.023f, 393.0992f)), func_91(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_90(func_91(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_91(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_90(func_91(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_91(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_90(func_91(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_91(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_90(func_91(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_91(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_90(func_91(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_91(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_90(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

Vector3 func_91(struct<3> Param0)
{
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.y = 0f;
		Param0.z = 0f;
	}
	return Param0;
}

int func_92()
{
	return Global_110348.f_20;
}

void func_93()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
	{
		if (!PED::IS_PED_INJURED(iLocal_245))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_245, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_245);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_246))
	{
		if (!PED::IS_PED_INJURED(iLocal_246))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_246, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_246);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_244);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_247))
	{
		OBJECT::REMOVE_PICKUP(uLocal_247);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_248))
	{
		OBJECT::REMOVE_PICKUP(uLocal_248);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_249))
	{
		HUD::REMOVE_BLIP(&uLocal_249);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_250))
	{
		HUD::REMOVE_BLIP(&uLocal_250);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_37.f_7, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_251);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_94(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

