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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_244 = 8000;
	iLocal_247 = 8;
	iLocal_249 = 1;
	sLocal_257 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_258 = "RANDOM@ARRESTS";
	sLocal_259 = "RANDOM@ARRESTS@BUSTED";
	iLocal_263 = 1;
	Local_65 = { ScriptParam_0.f_1[0] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		bLocal_76 = true;
		func_209();
		func_179();
	}
	if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_65) < 10f)
	{
		iLocal_53 = 1;
	}
	else
	{
		iLocal_53 = 2;
	}
	if (func_136(Local_65, 15, iLocal_53, 0, 0))
	{
		func_131(15);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_48)
		{
			case 0:
				if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_130()) && !func_117())
				{
					if (func_114())
					{
						iLocal_48 = 1;
					}
				}
				else
				{
					func_179();
				}
				break;
			
			case 1:
				if (func_110())
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, 1, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					func_99(1);
					iLocal_48 = 2;
				}
				else if (!func_98(200f))
				{
					func_179();
				}
				break;
			
			case 2:
				if (func_98(1128792064))
				{
					func_1();
				}
				else
				{
					func_179();
				}
				break;
		}
	}
}

void func_1()
{
	GAMEPLAY::SET_BIT(&uVar0, 3);
	GAMEPLAY::SET_BIT(&uVar0, 4);
	iVar5 = 0;
	func_97();
	if (!PED::IS_PED_INJURED(iLocal_55))
	{
		PED::SET_PED_RESET_FLAG(iLocal_55, 129, 1);
	}
	if (func_96(iLocal_55))
	{
		if (PED::IS_PED_BEING_STUNNED(iLocal_55, 0))
		{
			bLocal_298 = true;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_54) && (iLocal_49 != 2 && iLocal_49 != 1))
	{
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			switch (iLocal_52)
			{
				case 0:
					GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (SYSTEM::TIMERA() > 10)
					{
						if (!bLocal_74)
						{
							if (AI::GET_SCRIPT_TASK_STATUS(iLocal_54, 1227113341) == 7)
							{
								AI::TASK_GO_TO_ENTITY(iLocal_54, iLocal_55, -1, 1f, 3f, 1073741824, 0);
							}
						}
					}
					if (SYSTEM::TIMERA() > 4000)
					{
						if (!bLocal_74)
						{
							if (AI::GET_SCRIPT_TASK_STATUS(iLocal_55, 1805844857) == 7)
							{
								if (AI::GET_SCRIPT_TASK_STATUS(iLocal_55, -2017877118) == 1)
								{
									AI::STOP_ANIM_PLAYBACK(iLocal_55, 2, 1);
								}
								AI::TASK_SMART_FLEE_PED(iLocal_55, iLocal_54, 150f, -1, 0, 0);
							}
						}
					}
					fVar4 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), 1);
					if (SYSTEM::TIMERA() > 8000 || fVar4 < 1.5f)
					{
						iVar5 = func_92();
						if (iVar5 == 1)
						{
							AI::TASK_GO_TO_ENTITY(iLocal_54, iLocal_55, -1, 1f, 0.01f, 1073741824, 0);
						}
					}
					if (SYSTEM::TIMERA() > 30000 && fVar4 < 10f)
					{
						iVar5 = 1;
					}
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iVar5 || iLocal_278 == 1)
						{
							if (!func_91())
							{
								if (func_76(&uLocal_78, "REARRAU", "REARR_PCUFF", 4, iLocal_254, 0, 0))
								{
								}
								bLocal_294 = (PED::IS_PED_RAGDOLL(iLocal_55) || AI::IS_PED_GETTING_UP(iLocal_55));
								if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_54, 453432689, 0))
								{
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_54, 453432689, -1, 0, 1);
								}
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, 453432689, 1);
								Local_68 = { ENTITY::GET_ENTITY_COORDS(iLocal_55, 1) };
								AI::CLEAR_PED_TASKS(iLocal_54);
								AI::OPEN_SEQUENCE_TASK(&uLocal_73);
								if (!bLocal_294 && fVar4 > 2f)
								{
									AI::TASK_SHOOT_AT_COORD(0, Local_68.x, Local_68.y, (Local_68.z + 4f), 1000, 1566631136);
								}
								AI::TASK_LOOK_AT_ENTITY(0, iLocal_55, -1, 2048, 2);
								AI::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iLocal_55, iLocal_55, 1f, 0, 3f, 1082130432, 1, 0, -957453492);
								AI::TASK_AIM_GUN_AT_ENTITY(0, iLocal_55, 5000, 0);
								AI::CLOSE_SEQUENCE_TASK(uLocal_73);
								AI::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_73);
								AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_54);
								PED::SET_PED_KEEP_TASK(iLocal_54, 1);
								SYSTEM::SETTIMERA(0);
								iLocal_246 = GAMEPLAY::GET_GAME_TIMER();
								if (bLocal_294)
								{
									AI::CLEAR_PED_TASKS(iLocal_55);
									WEAPON::SET_PED_DROPS_WEAPON(iLocal_55);
									iLocal_52 = 4;
								}
								else
								{
									iLocal_52 = 2;
								}
							}
							else if (!iLocal_278)
							{
								AI::TASK_GO_TO_ENTITY(iLocal_54, iLocal_55, -1, 1f, 0.01f, 1073741824, 0);
								iLocal_278 = 1;
							}
						}
						else
						{
							func_75();
						}
					}
					else
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_54))
							{
								AI::CLEAR_PED_TASKS(iLocal_54);
								iLocal_52 = 1;
								AI::TASK_STAND_STILL(iLocal_54, 500);
							}
						}
					}
					break;
				
				case 1:
					if (AI::GET_SCRIPT_TASK_STATUS(iLocal_54, -982327190) == 7)
					{
						AI::TASK_GO_TO_ENTITY(iLocal_54, iLocal_55, -1, 1f, 3f, 1073741824, 0);
						iLocal_52 = 0;
					}
					break;
				
				case 2:
					if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_246) > 1000)
					{
						Var1 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_55) * 3f) };
						AI::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_55, Var1, 2f, -1, 1f, 1024, 1193033728);
						iLocal_52 = 3;
					}
					break;
				
				case 3:
					if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_246) > 4500)
					{
						iLocal_52 = 4;
					}
					break;
				
				case 4:
					bLocal_74 = true;
					AI::OPEN_SEQUENCE_TASK(&uLocal_73);
					AI::TASK_PLAY_ANIM(0, sLocal_258, "idle_2_hands_up", 2f, -8f, -1, 0, 0, 0, 0, 0);
					AI::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					AI::CLOSE_SEQUENCE_TASK(uLocal_73);
					AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
					AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_55);
					PED::SET_PED_KEEP_TASK(iLocal_55, 1);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_55, 1);
					iLocal_52 = 5;
					break;
				
				case 5:
					if (iLocal_50 == 3)
					{
						if (AI::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 7)
						{
							AI::CLEAR_PED_TASKS(iLocal_54);
							if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_54, 453432689, 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_54, 453432689, -1, 0, 1);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, 453432689, 1);
							AI::OPEN_SEQUENCE_TASK(&uLocal_73);
							AI::TASK_AIM_GUN_AT_ENTITY(0, iLocal_55, -1, 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_73);
							AI::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_73);
							AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
							PED::SET_PED_KEEP_TASK(iLocal_54, 1);
							iLocal_52 = 6;
						}
					}
					break;
				
				case 6:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0) && !PED::IS_PED_INJURED(iLocal_56))
					{
						VEHICLE::_0xBE5C1255A1830FF5(iLocal_57, 1);
						if (AI::GET_SCRIPT_TASK_STATUS(iLocal_54, -2017877118) == 7)
						{
							if (AI::GET_SCRIPT_TASK_STATUS(iLocal_56, -1273030092) == 7)
							{
								if (VEHICLE::_0x639431E895B9AA57(iLocal_55, iLocal_57, 2, 0, 0))
								{
									if (!PED::IS_PED_INJURED(iLocal_55))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_55, iLocal_57))
										{
											if (!PED::IS_PED_IN_COMBAT(iLocal_55, 0))
											{
												if (AI::GET_SCRIPT_TASK_STATUS(iLocal_55, -1794415470) == 7)
												{
													AI::OPEN_SEQUENCE_TASK(&uLocal_73);
													AI::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, 0, 0, 0);
													AI::CLOSE_SEQUENCE_TASK(uLocal_73);
													AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
													AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_72, iLocal_71);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_71, iLocal_72);
												}
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_54))
									{
										PED::_0x570389D1C3DE3C6B(iLocal_54);
										if (!PED::IS_PED_IN_COMBAT(iLocal_54, 0))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
											{
												if (!func_91())
												{
													if (func_76(&uLocal_78, "REARRAU", "REARR_INCAR", 4, iLocal_254, 0, 0))
													{
														if (func_74(iLocal_54, iLocal_57) == 2)
														{
															if (PED::IS_PED_FACING_PED(iLocal_56, iLocal_55, 180f))
															{
																Local_295 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_295 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (PED::IS_PED_FACING_PED(iLocal_56, iLocal_55, 180f))
														{
															Local_295 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_295 = { -2.978f, 0.75f, 1f };
														}
														AI::OPEN_SEQUENCE_TASK(&uLocal_73);
														AI::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_57, Local_295), iLocal_55, 0.75f, 0, 0.5f, 4f, 1, 0, 0, -957453492, 60000);
														AI::TASK_AIM_GUN_AT_ENTITY(0, iLocal_55, -1, 0);
														AI::CLOSE_SEQUENCE_TASK(uLocal_73);
														AI::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_73);
														AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
														PED::SET_PED_KEEP_TASK(iLocal_54, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_57, 0);
														iLocal_244 = 8000;
														SYSTEM::SETTIMERB(0);
														iLocal_277 = GAMEPLAY::GET_GAME_TIMER();
														iLocal_52 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_73();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 35f, 35f, 35f, 0, 1, 0))
						{
							if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_277) > 8000)
							{
								if (!func_91())
								{
									AI::TASK_LOOK_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
									func_76(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
									iLocal_277 = GAMEPLAY::GET_GAME_TIMER();
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
						{
							if (iLocal_64)
							{
								if (func_74(iLocal_54, iLocal_57) == 2)
								{
									AI::TASK_ENTER_VEHICLE(iLocal_55, iLocal_57, -1, 2, 1f, 1, 0);
								}
								else
								{
									AI::TASK_ENTER_VEHICLE(iLocal_55, iLocal_57, -1, 1, 1f, 1, 0);
								}
								iLocal_52 = 8;
							}
							else if (iLocal_63)
							{
								fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), ENTITY::GET_ENTITY_COORDS(iLocal_57, 1), 1);
								if (fVar6 < 4f && iLocal_285 == 0)
								{
									AI::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_55, iLocal_57, 60000, 0.5f, Local_295.x, Local_295.y, 1f, 1);
									iLocal_285 = 1;
								}
								else if (fVar6 < 3f)
								{
									AI::CLEAR_PED_TASKS(iLocal_55);
									iLocal_64 = 1;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, sLocal_258, "kneeling_arrest_get_up", 3))
							{
								if (func_74(iLocal_54, iLocal_57) == 2)
								{
									Local_295 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_295 = { -1.578f, -0.5f, 1f };
								}
								AI::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_55, iLocal_57, 60000, 0.5f, Local_295.x, Local_295.y, 1f, 1);
								if (bLocal_298)
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_55, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								}
								else
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_55, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								}
								iLocal_63 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_56))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_55, iLocal_57))
							{
								if (UI::DOES_BLIP_EXIST(uLocal_58))
								{
									UI::REMOVE_BLIP(&uLocal_58);
								}
								if (UI::DOES_BLIP_EXIST(uLocal_59))
								{
									UI::REMOVE_BLIP(&uLocal_59);
								}
								if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_54, iLocal_57))
								{
									AI::TASK_VEHICLE_DRIVE_WANDER(iLocal_56, iLocal_57, 10f, 786603);
									PED::SET_PED_KEEP_TASK(iLocal_56, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 0);
									func_179();
								}
								else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_54, -1794415470) == 7)
								{
									AI::CLEAR_PED_TASKS(iLocal_54);
									AI::TASK_ENTER_VEHICLE(iLocal_54, iLocal_57, 20000, 0, 1f, 1, 0);
									PED::SET_PED_KEEP_TASK(iLocal_54, 1);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_59();
	if (PED::IS_PED_INJURED(iLocal_55))
	{
	}
	if (PED::IS_PED_INJURED(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			if (iLocal_49 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_49 == 1 || iLocal_49 == 3)
				{
					if (!func_91())
					{
						if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
						{
							func_76(&uLocal_78, "REARRAU", sLocal_274, 4, iLocal_254, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
				{
					AI::OPEN_SEQUENCE_TASK(&uLocal_73);
					AI::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, 0, 0, 0);
					AI::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					AI::CLOSE_SEQUENCE_TASK(uLocal_73);
					AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
					AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
				}
				else
				{
					AI::TASK_SMART_FLEE_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_55, 1);
				}
				SYSTEM::WAIT(0);
				if (iLocal_49 == 0)
				{
					iLocal_49 = 2;
				}
				func_179();
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_55))
	{
		if (!bLocal_61)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_52 == 5 || iLocal_52 == 6)
	{
		if (!bLocal_61)
		{
			if (iLocal_49 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()
{
	Var1 = { 40f, 40f, 20f };
	if (GAMEPLAY::GET_GAME_TIMER() > iLocal_255 + 1000)
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_254 = 1;
		}
		else
		{
			iLocal_254 = 0;
		}
		iLocal_255 = GAMEPLAY::GET_GAME_TIMER();
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		switch (iLocal_50)
		{
			case 0:
				if ((iLocal_243 == 3 || iLocal_52 == 5) || iLocal_52 == 6)
				{
					if (!func_91())
					{
						AI::CLEAR_PED_TASKS(iLocal_54);
						AI::OPEN_SEQUENCE_TASK(&uLocal_73);
						AI::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_55, 0), 10000, 0, 2);
						AI::TASK_PLAY_ANIM(0, sLocal_258, sVar0, 8f, -4f, -1, 0, 0, 0, 0, 0);
						AI::TASK_PLAY_ANIM(0, sLocal_258, sVar1, 16f, -8f, -1, 1, 0, 0, 0, 0);
						AI::CLOSE_SEQUENCE_TASK(uLocal_73);
						AI::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_73);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
						iLocal_50 = 1;
					}
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_258, sVar1, 3))
				{
					if (!PED::IS_PED_INJURED(iLocal_55))
					{
						if (!func_91())
						{
							if (func_76(&uLocal_78, "REARRAU", "REARR_PRAD1", 4, iLocal_254, 0, 0))
							{
								iLocal_50 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_91())
						{
							if (func_76(&uLocal_78, "REARRAU", "REARR_PRAD2", 4, iLocal_254, 0, 0))
							{
								iLocal_50 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_91())
				{
					if (func_10())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
						{
							VEHICLE::DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(iLocal_57, 0);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_57, 1);
						}
						AI::CLEAR_PED_TASKS(iLocal_54);
						AI::OPEN_SEQUENCE_TASK(&uLocal_73);
						AI::TASK_PLAY_ANIM(0, sLocal_258, sVar2, 8f, -1.5f, -1, 0, 0, 0, 0, 0);
						AI::CLOSE_SEQUENCE_TASK(uLocal_73);
						AI::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_73);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
						PED::_0x2208438012482A1A(iLocal_54, 0, 0);
						func_8();
						iLocal_50 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_74)
				{
					func_7();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) || !ENTITY::IS_ENTITY_DEAD(iLocal_55, 0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55))
					{
						if (!func_91())
						{
							func_76(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 35f, 35f, 35f, 0, 1, 0))
				{
					PED::SET_IK_TARGET(iLocal_54, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, iLocal_54, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (SYSTEM::TIMERB() > iLocal_244 || iLocal_262)
					{
						if (iLocal_49 == 3 || iLocal_49 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_55))
							{
								if (iLocal_244 == 8000 || iLocal_262)
								{
									if (bLocal_261)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!func_91())
								{
									AI::TASK_LOOK_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 500, 2048, 2);
									func_76(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
								}
							}
							else if (iLocal_244 == 8000)
							{
								if (!func_91())
								{
									func_76(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 20000;
								}
							}
							else if (!func_91())
							{
								func_76(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
								iLocal_244 = 8000;
							}
							SYSTEM::SETTIMERB(0);
						}
						else
						{
							if (PED::IS_PED_INJURED(iLocal_55))
							{
								if (!func_91())
								{
									func_76(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 30000;
								}
							}
							else if (!func_91())
							{
								AI::TASK_LOOK_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
								func_76(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
								iLocal_244 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(8, 22);
								iLocal_244 *= 30000;
							}
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if (iLocal_52 != 8)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_55))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_55, iLocal_57, 0))
							{
								func_73();
							}
						}
					}
					else
					{
						func_73();
					}
				}
				break;
			}
	}
}

void func_4()
{
	if (!iLocal_262)
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				sLocal_260 = "idle_a";
				break;
			
			case 1:
				sLocal_260 = "idle_b";
				break;
			
			case 2:
				sLocal_260 = "idle_c";
				break;
		}
		AI::OPEN_SEQUENCE_TASK(&uLocal_73);
		AI::TASK_PLAY_ANIM(0, sLocal_259, "enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		AI::TASK_PLAY_ANIM(0, sLocal_259, sLocal_260, 8f, -4f, -1, 0, 0, 0, 0, 0);
		AI::TASK_PLAY_ANIM(0, sLocal_259, "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
		AI::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
		AI::CLOSE_SEQUENCE_TASK(uLocal_73);
		AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
		AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
		iLocal_262 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, sLocal_259, "enter", 3))
	{
		if (func_5())
		{
			func_76(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, sLocal_259, "exit", 3))
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, sLocal_259, sLocal_260, 3))
	{
		func_76(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()
{
	if (GAMEPLAY::GET_GAME_TIMER() > iLocal_264 + 6000)
	{
		iLocal_264 = GAMEPLAY::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

void func_6()
{
	if (!iLocal_262)
	{
		AI::OPEN_SEQUENCE_TASK(&uLocal_73);
		AI::TASK_PLAY_ANIM(0, sLocal_258, "radio_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		AI::TASK_PLAY_ANIM(0, sLocal_258, "radio_chatter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		AI::TASK_PLAY_ANIM(0, sLocal_258, "radio_exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		AI::TASK_AIM_GUN_AT_ENTITY(0, iLocal_55, -1, 0);
		AI::CLOSE_SEQUENCE_TASK(uLocal_73);
		AI::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_73);
		AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
		iLocal_262 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_258, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_76(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_258, "radio_exit", 3))
	{
		iLocal_263 = 0;
		func_8();
	}
}

void func_7()
{
	switch (iLocal_51)
	{
		case 0:
			if (!bLocal_74)
			{
				if (iLocal_49 == 3)
				{
					iLocal_51 = 1;
				}
				else if (iLocal_49 == 0)
				{
					iLocal_51 = 1;
				}
				ENTITY::IS_ENTITY_DEAD(iLocal_54, 0);
				ENTITY::IS_ENTITY_DEAD(iLocal_55, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && ENTITY::DOES_ENTITY_EXIST(iLocal_55))
				{
					AI::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_54, iLocal_55, -1, 3f, 0f, 0f, 1f, 0);
				}
				SYSTEM::SETTIMERB(0);
			}
			break;
		
		case 1:
			if (UI::DOES_BLIP_EXIST(uLocal_58))
			{
				UI::REMOVE_BLIP(&uLocal_58);
			}
			iLocal_51 = 2;
			iLocal_244 = 8000;
			iLocal_291 = GAMEPLAY::GET_GAME_TIMER();
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
			{
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_291) > 20000)
				{
					if (!PED::IS_PED_INJURED(iLocal_56))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(iLocal_56, -1273030092) == 7)
						{
							AI::TASK_ENTER_VEHICLE(iLocal_54, iLocal_57, -1, 0, 1f, 1, 0);
							iLocal_51 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_56))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_54, iLocal_57))
					{
						AI::TASK_VEHICLE_DRIVE_WANDER(iLocal_56, iLocal_57, 10f, 786603);
						PED::SET_PED_KEEP_TASK(iLocal_56, 1);
						func_179();
					}
				}
			}
			break;
	}
}

void func_8()
{
	bLocal_261 = func_9();
	bLocal_261 = iLocal_263;
	iLocal_244 = 20000;
	iLocal_262 = 0;
}

int func_9()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	iVar12 = 741586030;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar12);
	if (STREAMING::HAS_MODEL_LOADED(iVar12))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 1, &Var0, 1, 1077936128, 0))
		{
			if (VEHICLE::_0xA4822F1CF23F4810(&Var0, &Var6, &uVar9, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_57 = VEHICLE::CREATE_VEHICLE(iVar12, Var6, 0, 1, 1, 0);
				iLocal_56 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_57, 6, -277793362, -1, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_56, 294, 1);
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_56, 453432689, 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_56, 453432689, -1, 0, 1);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_56, 453432689, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_56, iLocal_71);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_57, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_57, 1084227584);
				VEHICLE::_0x2B6747FAA9DB9D6B(iLocal_57, 1);
				VEHICLE::_0x25367DE49D64CF16(iLocal_57, 1);
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_57, 1) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Var0 };
				ENTITY::SET_ENTITY_HEADING(iLocal_57, GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(Var3.x, Var3.y));
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 1, &Var0, 1, 1077936128, 0);
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, 2528.563f, 2639.115f, 36.9446f, 1) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(2538.71f, 2592.007f, 36.9446f, Var0, 1) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				AI::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_56, iLocal_57, Var0, 4, 7f, 786471, 5f, -1f, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_57, 4f);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_57, 1);
				iLocal_77 = 1;
				VEHICLE::SET_RANDOM_TRAINS(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	if (iLocal_49 != 3)
	{
		iLocal_243 = 3;
	}
	switch (iLocal_243)
	{
		case 0:
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 7 || GAMEPLAY::GET_GAME_TIMER() > iLocal_246 + 15000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						AI::CLEAR_PED_TASKS(iLocal_54);
						AI::OPEN_SEQUENCE_TASK(&uLocal_73);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, 0))
						{
							AI::TASK_GO_TO_ENTITY(0, iLocal_55, -1, 3.5f, 2f, 1073741824, 0);
						}
						AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
						AI::CLOSE_SEQUENCE_TASK(uLocal_73);
						AI::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_73);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
						iLocal_243 = 1;
					}
				}
				else
				{
					iLocal_243 = 3;
				}
			}
			break;
		
		case 1:
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 1)
			{
				if (AI::GET_SEQUENCE_PROGRESS(iLocal_54) > 0)
				{
					if (!func_91())
					{
						if (iLocal_245 < 2)
						{
							func_76(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
							if (UI::DOES_BLIP_EXIST(uLocal_58))
							{
								UI::SET_BLIP_AS_FRIENDLY(uLocal_58, 1);
							}
						}
						else
						{
							func_76(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
						}
						iLocal_243 = 2;
					}
				}
			}
			else if (!func_91())
			{
				if (iLocal_245 < 2)
				{
					func_76(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
					if (UI::DOES_BLIP_EXIST(uLocal_58))
					{
						UI::SET_BLIP_AS_FRIENDLY(uLocal_58, 1);
					}
				}
				else
				{
					func_76(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
				}
				iLocal_243 = 2;
			}
			break;
		
		case 2:
			if (!func_91())
			{
				iLocal_243 = 3;
			}
			AI::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 100);
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()
{
	bVar0 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 1);
	bVar1 = func_58();
	if (bVar1)
	{
	}
	if (!PED::IS_PED_INJURED(iLocal_55))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_49 == 2 || bLocal_74 == 1)
				{
					switch (iLocal_247)
					{
						case 8:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							UI::SET_BLIP_AS_FRIENDLY(uLocal_59, 1);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, 0) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
							{
								AI::OPEN_SEQUENCE_TASK(&uLocal_73);
								AI::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, 0, 0, 0);
								AI::CLOSE_SEQUENCE_TASK(uLocal_73);
								AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
								AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
								iLocal_247 = 9;
							}
							else
							{
								iLocal_247 = 3;
							}
							break;
						
						case 9:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (AI::GET_SCRIPT_TASK_STATUS(iLocal_55, 242628503) == 7)
							{
								iLocal_247 = 0;
							}
							break;
						
						case 0:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, 0, 1, 0))
							{
								AUDIO::STOP_PED_SPEAKING(iLocal_55, 1);
								iLocal_247 = 3;
							}
							break;
						
						case 1:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_55, ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								iLocal_247 = 2;
							}
							else
							{
								AI::CLEAR_PED_TASKS(iLocal_55);
								AI::OPEN_SEQUENCE_TASK(&uLocal_73);
								AI::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 1000, 0, 2);
								AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 2f, -1, 3f, 0, 1193033728);
								AI::CLOSE_SEQUENCE_TASK(uLocal_73);
								AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
								AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
								iLocal_247 = 2;
							}
							break;
						
						case 2:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_55, ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								if (AI::GET_SCRIPT_TASK_STATUS(iLocal_55, 242628503) == 7 || func_76(&uLocal_78, "REARRAU", sLocal_271, 4, iLocal_254, 0, 0))
								{
									iLocal_247 = 6;
								}
							}
							else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_55, 242628503) == 7)
							{
								AI::OPEN_SEQUENCE_TASK(&uLocal_73);
								AI::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 1000, 0, 2);
								AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 2f, -1, 3f, 0, 1193033728);
								AI::CLOSE_SEQUENCE_TASK(uLocal_73);
								AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
								AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
							}
							break;
						
						case 3:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_247 = 4;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!func_91())
								{
									AI::CLEAR_PED_TASKS(iLocal_55);
									AI::OPEN_SEQUENCE_TASK(&uLocal_73);
									AI::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 8f, 2f, 1073741824, 0);
									AI::CLOSE_SEQUENCE_TASK(uLocal_73);
									AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
									AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
									iLocal_247 = 4;
								}
							}
							else
							{
								iLocal_247 = 6;
							}
							break;
						
						case 4:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_292 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_247 = 7;
							}
							break;
						
						case 7:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_55, PLAYER::PLAYER_PED_ID()))
							{
								AI::TASK_LOOK_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), -1, 2064, 2);
							}
							if (!PED::IS_PED_FACING_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 30f))
							{
								AI::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), -1);
							}
							if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_292) > 2000)
							{
								iLocal_247 = 5;
							}
							break;
						
						case 5:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, sLocal_258, "Thanks_Male_05", 3) || AI::GET_SCRIPT_TASK_STATUS(iLocal_55, 242628503) == 7)
							{
								if (!func_91())
								{
									if (iLocal_245 < 2)
									{
										func_76(&uLocal_78, "REARRAU", sLocal_266, 4, iLocal_254, 0, 0);
										AI::TASK_PLAY_ANIM(iLocal_55, sLocal_258, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										func_76(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
									}
									func_15(func_52(), 1, 250, 0, 0);
									AI::TASK_CLEAR_LOOK_AT(iLocal_55);
									iLocal_247 = 6;
								}
							}
							break;
						
						case 6:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_91())
							{
								AI::TASK_SMART_FLEE_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
								func_179();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_91())
				{
					func_76(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
				}
				AI::TASK_SMART_FLEE_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				func_179();
			}
		}
		else
		{
			func_13();
			AI::TASK_SMART_FLEE_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_49 = 1;
			}
			if (!func_91())
			{
				func_76(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
			}
			func_179();
		}
	}
}

void func_13()
{
	Global_19671 = 0;
	func_14();
}

void func_14()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_51(iParam0) == 3)
	{
		return;
	}
	if (func_51(iParam0) == 4)
	{
		return;
	}
	func_16(func_51(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 1762386298;
					break;
				
				case 1:
					iVar1 = -544246134;
					break;
				
				case 2:
					iVar1 = -1147816992;
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 138536943;
					break;
				
				case 1:
					iVar1 = 691239862;
					break;
				
				case 2:
					iVar1 = -1133981805;
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_50();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_49(99, 1);
					func_48(-656546900, iParam3);
					break;
				
				case 1:
					func_48(-2098183071, iParam3);
					break;
				
				case 2:
					func_48(1578119842, iParam3);
					break;
			}
			func_32(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_27(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_48(-1190521599, iParam3);
							break;
						
						case 1:
							func_48(490143716, iParam3);
							break;
						
						case 2:
							func_48(121069433, iParam3);
							break;
					}
					if (func_27(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_48(219506691, iParam3);
							break;
						
						case 1:
							func_48(1871505786, iParam3);
							break;
						
						case 2:
							func_48(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_48(27639974, iParam3);
							break;
						
						case 1:
							func_48(422258364, iParam3);
							break;
						
						case 2:
							func_48(316202960, iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_48(1806738963, iParam3);
							break;
						
						case 1:
							func_48(1576781520, iParam3);
							break;
						
						case 2:
							func_48(671882196, iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_48(408653638, iParam3);
									break;
								
								case 1:
									func_48(-424799277, iParam3);
									break;
								
								case 2:
									func_48(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_48(2038531975, iParam3);
									break;
								
								case 1:
									func_48(-572903575, iParam3);
									break;
								
								case 2:
									func_48(-953947924, iParam3);
									break;
							}
							if (func_27(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_48(-445823242, iParam3);
									break;
								
								case 1:
									func_48(-1386757215, iParam3);
									break;
								
								case 2:
									func_48(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_48(-1744069936, iParam3);
									break;
								
								case 1:
									func_48(799609312, iParam3);
									break;
								
								case 2:
									func_48(181688102, iParam3);
									break;
							}
							func_26(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_49(95, iParam3);
					break;
				
				case 1:
					func_49(97, iParam3);
					break;
				
				case 2:
					func_49(96, iParam3);
					break;
			}
			func_49(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_48(-330339780, iParam3);
					break;
				
				case 1:
					func_48(1697564429, iParam3);
					break;
				
				case 2:
					func_48(1674823841, iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1] = iParam1;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2]++;
		Global_111638.f_20559.f_233[iVar2].f_1++;
		if (Global_111638.f_20559.f_233[iVar2].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_41431 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(52740893, iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(1153264002, iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(-1921710979, iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	if (iParam0 == 8)
	{
		func_25(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_25(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_25(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_25(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_22(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_22(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_22(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_22(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_22(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_22(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			GAMEPLAY::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_21()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_21()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UI::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_20(iParam0));
		UI::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_21()
{
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_23(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_23(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312745;
}

int func_25(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_26(int iParam0)
{
	func_49(93, iParam0);
	func_49(29, iParam0);
	func_49(30, iParam0);
}

bool func_27(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_29(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_29(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_29(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_29(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_GET_POSIX_TIME();
		iVar1 = func_28(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_GET_POSIX_TIME();
		iVar3 = func_28(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_GET_POSIX_TIME();
		iVar5 = func_28(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_GET_POSIX_TIME();
		iVar7 = func_28(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_GET_POSIX_TIME();
		iVar9 = func_28(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_GET_POSIX_TIME();
		iVar11 = func_28(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_21()].f_6174.f_10, iParam0);
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_23(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_32(bool bParam0)
{
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(-656546900, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(-2098183071, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(1578119842, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(-422142831, &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(-422142831, iVar1, 1);
		func_47(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_33(27, 1);
	return 1;
}

int func_33(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_34(iParam0, iParam1);
}

int func_34(int iParam0, int iParam1)
{
	if (func_46(14) && !func_45(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_44(&Global_4270065))
	{
		if (func_42(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_35(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_35(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_46(14) && !func_45(iParam1))
	{
		return 0;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	func_38(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_36(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_36(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_46(14) && !func_45(iParam1))
	{
		return 0;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_37(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_37(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_38(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_39(uParam0, iVar0);
		iVar0++;
	}
	func_40(uParam0, (Global_4270064 - 0.5f));
}

void func_39(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_40(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_41(var uParam0)
{
	return uParam0->f_80;
}

bool func_42(var uParam0, int iParam1)
{
	return func_43(uParam0, iParam1) != -1;
}

int func_43(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_44(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_46(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_47(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_48(int iParam0, int iParam1)
{
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_49(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

void func_50()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(52740893, &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		STATS::STAT_GET_INT(1153264002, &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		STATS::STAT_GET_INT(-1921710979, &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_51(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_52()
{
	func_53();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_53()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_56(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_55(PLAYER::PLAYER_PED_ID());
			if (func_54(iVar0) && (!func_46(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_54(Global_111638.f_2358.f_539.f_4321))
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

bool func_54(int iParam0)
{
	return iParam0 < 3;
}

int func_55(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_56(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_56(int iParam0)
{
	if (func_54(iParam0))
	{
		return func_57(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_57(int iParam0)
{
	return Global_1798[iParam0];
}

int func_58()
{
	fVar0 = 50f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, iLocal_55, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_55, 0), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == 368603149 || ENTITY::GET_ENTITY_MODEL(iVar1) == 1581098148)
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == 368603149 || ENTITY::GET_ENTITY_MODEL(iVar1) == 1581098148)
		{
			return 1;
		}
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_55, 0), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		return 1;
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	if (!PED::IS_PED_INJURED(iLocal_55))
	{
		bVar0 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55);
		uVar1 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 1);
		if (((uVar1 || func_72()) || func_70()) || bVar0)
		{
			func_69();
			if (bLocal_74)
			{
				if (((bVar0 || uVar1) && !PED::IS_PED_RAGDOLL(iLocal_55)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_55, 0))
				{
					AI::CLEAR_PED_TASKS(iLocal_55);
					PED::SET_PED_TO_RAGDOLL(iLocal_55, 500, 2000, 0, 0, 0, 0);
					AI::TASK_COWER(iLocal_55, -1);
					PED::SET_PED_KEEP_TASK(iLocal_55, 1);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_55, 0) && !PED::IS_PED_RAGDOLL(iLocal_55))
				{
					AI::CLEAR_PED_TASKS(iLocal_55);
					AI::TASK_COWER(iLocal_55, -1);
					PED::SET_PED_KEEP_TASK(iLocal_55, 1);
				}
				func_65(0);
				if (!func_91())
				{
					if (!PED::IS_PED_INJURED(iLocal_54) && iLocal_286 == 0)
					{
						if (func_76(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0))
						{
							iLocal_286 = 1;
						}
					}
				}
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 3;
			}
		}
	}
	else
	{
		if (UI::DOES_BLIP_EXIST(uLocal_59))
		{
			UI::REMOVE_BLIP(&uLocal_59);
			func_64(&uLocal_78, 2);
		}
		func_69();
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (bLocal_74)
			{
				func_65(1);
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 3;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (bLocal_61)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_179();
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		iVar2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_56) < 190) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_RAGDOLL(iLocal_56)))
				{
					iVar2 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_57) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_54) < 190) || func_63()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || func_62()) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_RAGDOLL(iLocal_54))) || iVar2 == 1)
		{
			func_65(1);
			if (iLocal_49 == 3 || iLocal_49 == 1)
			{
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 2;
			}
		}
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (iLocal_287 == 0)
			{
				iLocal_287 = 1;
				iLocal_290 = GAMEPLAY::GET_GAME_TIMER();
			}
			if (iLocal_49 == 3 || iLocal_49 == 1)
			{
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 2;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_55);
		}
		if (UI::DOES_BLIP_EXIST(uLocal_58))
		{
			UI::REMOVE_BLIP(&uLocal_58);
			func_64(&uLocal_78, 1);
		}
	}
	if (iLocal_287)
	{
		if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_290) > 5000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			iLocal_287 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_54) && !PED::IS_PED_INJURED(iLocal_55))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_54) < 190 && ENTITY::GET_ENTITY_HEALTH(iLocal_55) < 190)
			{
				func_69();
				func_65(1);
				iLocal_49 = 1;
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, iLocal_54, 110f, 110f, 40f, 0, 1, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 20f, 20f, 20f, 0, 1, 0))
			{
				func_60();
				SYSTEM::WAIT(0);
				func_76(&uLocal_78, "REARRAU", "REARR_PORUN", 4, iLocal_254, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55, 40f, 40f, 40f, 0, 1, 0))
			{
				func_60();
				SYSTEM::WAIT(0);
				func_76(&uLocal_78, "REARRAU", sLocal_267, 4, iLocal_254, 0, 0);
			}
			func_179();
		}
	}
	if (PED::IS_PED_INJURED(iLocal_54) && PED::IS_PED_INJURED(iLocal_55))
	{
		func_179();
	}
	if (PED::IS_PED_INJURED(iLocal_55))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 100f, 100f, 40f, 0, 1, 0))
			{
				func_179();
			}
		}
	}
}

void func_60()
{
	Global_19671 = 0;
	func_61();
}

void func_61()
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

bool func_62()
{
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == 1886712733)
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_54))
				{
					bVar0 = true;
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_57))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_77)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_63()
{
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (GAMEPLAY::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (PED::IS_PED_INJURED(iLocal_55))
		{
			return 1;
		}
		else if (!GAMEPLAY::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_55, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return 1;
		}
	}
	if (GRAPHICS::_0x2F09F7976C512404(PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_54) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_54))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, 1))
				{
					if (iVar6 != -1569615261)
					{
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_55) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_55))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, 1))
				{
					if (iVar6 != -1569615261)
					{
						if (bLocal_74)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f) };
	if (((GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, -37975472, 1) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, -1813897027, 1)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, 741814745, 1)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, 1945616459, 1))
	{
		return 1;
	}
	return 0;
}

void func_64(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_65(int iParam0)
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_54);
		if (!bLocal_61)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_54, 1);
			if (UI::DOES_BLIP_EXIST(uLocal_58))
			{
				UI::SET_BLIP_AS_FRIENDLY(uLocal_58, 0);
			}
			if (iParam0 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_55))
				{
					if (AI::GET_SCRIPT_TASK_STATUS(iLocal_55, 1805844857) == 7)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							AI::OPEN_SEQUENCE_TASK(&uLocal_73);
							AI::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							AI::TASK_SMART_FLEE_PED(0, iLocal_54, 150f, -1, 0, 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_73);
							AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
							AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
							PED::FORCE_PED_MOTION_STATE(iLocal_55, -530524, 0, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_55, 1);
						}
						else
						{
							AI::CLEAR_PED_TASKS(iLocal_55);
							AI::TASK_SMART_FLEE_PED(iLocal_55, iLocal_54, 150f, -1, 0, 0);
						}
					}
				}
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_55, 0) && !PED::IS_PED_INJURED(iLocal_55)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
					{
						if (!func_91())
						{
							func_76(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
						}
					}
				}
			}
			AI::CLEAR_PED_TASKS(iLocal_54);
			AI::OPEN_SEQUENCE_TASK(&uLocal_73);
			AI::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			AI::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			AI::CLOSE_SEQUENCE_TASK(uLocal_73);
			AI::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_73);
			AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
			PED::SET_PED_KEEP_TASK(iLocal_54, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_54, 1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_57, 1);
			}
			func_67();
			SYSTEM::WAIT(0);
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_54))
				{
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				func_66();
			}
			bLocal_61 = true;
		}
	}
}

void func_66()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			AI::OPEN_SEQUENCE_TASK(&uLocal_73);
			AI::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			AI::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			AI::CLOSE_SEQUENCE_TASK(uLocal_73);
			AI::TASK_PERFORM_SEQUENCE(iLocal_56, uLocal_73);
			AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
			PED::SET_PED_KEEP_TASK(iLocal_56, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_56, 1, 0);
		}
	}
}

void func_67()
{
	Global_19671 = 0;
	func_68();
}

void func_68()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

void func_69()
{
	if (!PED::IS_PED_INJURED(iLocal_55))
	{
		if (UI::DOES_BLIP_EXIST(uLocal_59))
		{
			UI::SET_BLIP_AS_FRIENDLY(uLocal_59, 0);
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_55);
	}
}

int func_70()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
	{
		if (bLocal_74)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54))
			{
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_276) > 1000)
				{
					func_71();
				}
			}
		}
	}
	if (iLocal_275 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_71()
{
	if (!func_91())
	{
		if (iLocal_275 < 3)
		{
			AI::TASK_LOOK_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
			func_76(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
		}
	}
	iLocal_275++;
	iLocal_276 = GAMEPLAY::GET_GAME_TIMER();
}

int func_72()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_55))
		{
			if (bLocal_74)
			{
				if (iLocal_52 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), Local_68) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (bLocal_74)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_55))
			{
				if (iLocal_52 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), Local_68) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_74)
			{
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_276) > 1000)
				{
					func_71();
				}
			}
		}
	}
	if (iLocal_275 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_73()
{
	if (!iLocal_75)
	{
		switch (iLocal_245)
		{
			case 0:
				if (!bLocal_61)
				{
					if (SYSTEM::TIMERA() > 80000)
					{
						if (!PED::IS_PED_INJURED(iLocal_54))
						{
							if (!PED::IS_PED_INJURED(iLocal_55))
							{
								func_60();
								SYSTEM::WAIT(0);
								func_76(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
							}
						}
						iLocal_245 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_91())
				{
					if (!PED::IS_PED_INJURED(iLocal_55))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							AI::OPEN_SEQUENCE_TASK(&uLocal_73);
							AI::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							AI::TASK_SMART_FLEE_PED(0, iLocal_54, 150f, -1, 0, 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_73);
							AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
							AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
							PED::FORCE_PED_MOTION_STATE(iLocal_55, -530524, 0, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_55, 1);
						}
						else
						{
							AI::TASK_SMART_FLEE_PED(iLocal_55, iLocal_54, 150f, -1, 0, 0);
						}
						PED::SET_PED_KEEP_TASK(iLocal_55, 1);
						ENTITY::SET_ENTITY_HEALTH(iLocal_55, 101, 0);
						func_76(&uLocal_78, "REARRAU", sLocal_269, 4, iLocal_254, 0, 0);
						iLocal_245 = 2;
					}
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						AI::CLEAR_PED_TASKS(iLocal_54);
						iLocal_245 = 2;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					if (!PED::IS_PED_INJURED(iLocal_55))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, iLocal_71);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_71, iLocal_72);
						AI::TASK_COMBAT_PED(iLocal_54, iLocal_55, 0, 16);
					}
					else
					{
						AI::TASK_WANDER_STANDARD(iLocal_54, 1193033728, 0);
						func_179();
					}
					PED::SET_PED_KEEP_TASK(iLocal_54, 1);
				}
				iLocal_75 = 1;
				break;
			}
	}
}

int func_74(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, -1f, -0.5f, 0f) };
		Var12 = { Var6 - Var0 };
		if (SYSTEM::VMAG(Var9) < SYSTEM::VMAG(Var12))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_75()
{
	if (!func_91())
	{
		if (!iLocal_293)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 30f, 30f, 30f, 0, 1, 0))
			{
				func_76(&uLocal_78, "REARRAU", "REARR_PSTOP", 4, iLocal_254, 0, 0);
				iLocal_293 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (SYSTEM::TIMERB() > 8000)
		{
			if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 99) > 50)
			{
				func_76(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
			{
				func_76(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				func_76(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			}
			else
			{
				func_76(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
		}
	}
}

bool func_76(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_90(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_77(sParam2, iParam3, 0);
}

int func_77(char* sParam0, int iParam1, bool bParam2)
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
					func_61();
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
		if (func_89(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_88();
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
			GAMEPLAY::CLEAR_BIT(&Global_7356, 20);
			GAMEPLAY::CLEAR_BIT(&Global_7357, 17);
			GAMEPLAY::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_87();
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
				if (func_86())
				{
					return 0;
				}
				if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
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
			if (func_85())
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
				if (GAMEPLAY::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_84();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_83();
		func_78();
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
		func_61();
	}
	return 0;
}

void func_78()
{
	if (!func_79())
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

int func_79()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_82())
	{
		return 0;
	}
	if (func_80(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_80(int iParam0)
{
	return func_81(iParam0, 20);
}

bool func_81(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_82()
{
	return -1;
}

void func_83()
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

void func_84()
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
	GAMEPLAY::CLEAR_BIT(&Global_7357, 16);
}

int func_85()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_86()
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

void func_87()
{
	if (func_46(14))
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
		Global_19486 = func_52();
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

void func_88()
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

bool func_89(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_90(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_91()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_92()
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, iLocal_54, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_95())
	{
		if (!func_93(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(float fParam0)
{
	if (GAMEPLAY::_0x8BDC7BFC57A81E76(ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), &uVar0, &Var1))
	{
		if (func_94(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_94(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

int func_95()
{
	return 0;
}

int func_96(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_97()
{
	if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_253) > 500)
	{
		if ((iLocal_49 != 1 && iLocal_49 != 3) && iLocal_49 != 2)
		{
			if (UI::DOES_BLIP_EXIST(uLocal_59))
			{
				UI::SET_BLIP_AS_FRIENDLY(uLocal_59, iLocal_248);
				if (iLocal_248 == 1)
				{
					iLocal_248 = 0;
				}
				else
				{
					iLocal_248 = 1;
				}
			}
		}
		else
		{
			bLocal_288 = true;
		}
		if (!bLocal_61)
		{
			if (UI::DOES_BLIP_EXIST(uLocal_58))
			{
				UI::SET_BLIP_AS_FRIENDLY(uLocal_58, iLocal_249);
				if (iLocal_249 == 1)
				{
					iLocal_249 = 0;
				}
				else
				{
					iLocal_249 = 1;
				}
			}
		}
		else
		{
			bLocal_288 = true;
		}
		iLocal_253 = GAMEPLAY::GET_GAME_TIMER();
	}
	if (!bLocal_289 == bLocal_288)
	{
		if (bLocal_288)
		{
			if (UI::DOES_BLIP_EXIST(uLocal_59))
			{
				UI::_0x75A16C3DA34F1245(uLocal_59, 1);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_58))
			{
				UI::_0x75A16C3DA34F1245(uLocal_58, 1);
			}
		}
		else
		{
			if (UI::DOES_BLIP_EXIST(uLocal_59))
			{
				UI::_0x75A16C3DA34F1245(uLocal_59, 0);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_58))
			{
				UI::_0x75A16C3DA34F1245(uLocal_58, 0);
			}
		}
		bLocal_289 = bLocal_288;
	}
}

int func_98(float fParam0)
{
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_279, Local_282, 194.75f, 0, 1, 0))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iLocal_55))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_99(int iParam0)
{
	if (func_104())
	{
		Global_111628 = 1;
		Global_111625 = GAMEPLAY::GET_GAME_TIMER();
		if (func_103(Global_111627))
		{
			func_100(0);
		}
		UI::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_103(Global_111627))
		{
			UI::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_101(func_102(iParam0), -1);
					Global_111638.f_24990.f_2++;
					GAMEPLAY::SET_BIT(&Global_111634, 0);
				}
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(Global_111634, 1))
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_101(func_102(iParam0), -1);
					Global_111638.f_24990.f_3++;
					GAMEPLAY::SET_BIT(&Global_111634, 1);
				}
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_111634, 2))
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_101(func_102(iParam0), -1);
					Global_111638.f_24990.f_4++;
					GAMEPLAY::SET_BIT(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_101(var uParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_102(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_104()
{
	switch (func_105(&Global_30827, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_105(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_109(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_107(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_106(uParam0, iParam4);
		}
	}
	return 2;
}

void func_106(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_107(int iParam0)
{
	return func_108(iParam0, Global_41431);
}

int func_108(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_107(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_110()
{
	fVar0 = 50f;
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55, fVar0, fVar0, fVar0, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_279, Local_282, 194.75f, 0, 1, 0))
			{
				if (!UI::DOES_BLIP_EXIST(uLocal_59))
				{
					uLocal_59 = func_111(iLocal_55, 0, 145);
				}
				if (!UI::DOES_BLIP_EXIST(uLocal_58))
				{
					uLocal_58 = func_111(iLocal_54, 0, 145);
				}
				UI::_0x75A16C3DA34F1245(uLocal_59, 0);
				UI::_0x75A16C3DA34F1245(uLocal_58, 0);
				SYSTEM::SETTIMERA(0);
				return 1;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (!UI::DOES_BLIP_EXIST(uLocal_58))
				{
					uLocal_58 = func_111(iLocal_54, 0, 145);
				}
			}
			if (UI::DOES_BLIP_EXIST(uLocal_59))
			{
				UI::REMOVE_BLIP(&uLocal_59);
			}
			return 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			if (!UI::DOES_BLIP_EXIST(uLocal_59))
			{
				uLocal_59 = func_111(iLocal_55, 0, 145);
			}
		}
		if (UI::DOES_BLIP_EXIST(uLocal_58))
		{
			UI::REMOVE_BLIP(&uLocal_58);
		}
		return 1;
	}
	return 0;
}

var func_111(var uParam0, bool bParam1, int iParam2)
{
	uVar0 = func_112(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && UI::DOES_BLIP_EXIST(uVar0)) && UI::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2].f_3)))
	{
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_1798[iParam2].f_3));
	}
	return uVar0;
}

int func_112(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = UI::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			UI::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			UI::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		UI::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_113(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_114()
{
	iVar0 = -277793362;
	if (iLocal_53 == 1)
	{
		Var2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar8 = 218.3434f;
		Var5 = { 2431.685f, 4945.31f, 44.6996f };
		fVar9 = 220.0087f;
		Local_279 = { 2378.284f, 4863.027f, 32.50883f };
		Local_282 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_256 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_265 = "arrestcriminal";
		sLocal_266 = "REARR_CTHANK";
		sLocal_267 = "REARR_CORUN";
		sLocal_268 = "REARR_CWTF";
		sLocal_269 = "REARR_CTURN";
		sLocal_270 = "REARR_CHELP";
		sLocal_271 = "REARR_HATE";
		sLocal_272 = "REARR_CRAND";
		sLocal_273 = "REARR_CRAND";
		sLocal_274 = "REARR_CRAND";
		iVar1 = 2064532783;
	}
	else if (iLocal_53 == 2)
	{
		Var2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar8 = 90.5639f;
		Var5 = { 2586.005f, 2541.41f, 31.0379f };
		fVar9 = 75.5943f;
		Local_279 = { 2543.135f, 2683.917f, 0.307461f };
		Local_282 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_256 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_265 = "arrestcriminal2";
		sLocal_266 = "REARR_THANK2";
		sLocal_267 = "REARR_CORUN2";
		sLocal_268 = "REARR_CWTF2";
		sLocal_269 = "REARR_CTURN2";
		sLocal_270 = "REARR_CHELP2";
		sLocal_271 = "REARR_HATE2";
		sLocal_272 = "REARR_CRAND2";
		sLocal_273 = "REARR_CRAND2";
		sLocal_274 = "REARR_CRAND2";
		iVar1 = -39239064;
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(-935625561);
	STREAMING::REQUEST_ANIM_DICT(sLocal_258);
	STREAMING::REQUEST_ANIM_DICT(sLocal_259);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_MODEL_LOADED(-935625561)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_258)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_259)) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_54 = PED::CREATE_PED(6, iVar0, Var2, fVar8, 1, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_54, 294, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_54, 1, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_54, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 1);
		func_116(&uLocal_78, 1, iLocal_54, "ArrestCop", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_54, 1, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_54, 1);
		iLocal_55 = PED::CREATE_PED(26, iVar1, Var5, fVar9, 1, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_55, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_55, 42, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_55, 281, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, 1);
		func_116(&uLocal_78, 2, iLocal_55, sLocal_265, 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_55, 1, 1);
		if (iLocal_53 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 4, 0, 0, 0);
		}
		func_115();
		if (func_52() == 0)
		{
			func_116(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_52() == 1)
		{
			func_116(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_52() == 2)
		{
			func_116(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_54, 453432689, 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_54, 453432689, -1, 0, 1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, 453432689, 1);
		uLocal_60 = OBJECT::CREATE_OBJECT(-935625561, Local_65.x, Local_65.y, (Local_65.z + 100f), 1, 1, 0);
		ENTITY::SET_ENTITY_VISIBLE(uLocal_60, 0, 0);
		if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_65) < 10f)
		{
			iLocal_53 = 1;
			AI::OPEN_SEQUENCE_TASK(&uLocal_73);
			AI::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_250, 1193033728);
			AI::TASK_SMART_FLEE_PED(0, iLocal_54, 150f, -1, 0, 0);
			AI::CLOSE_SEQUENCE_TASK(uLocal_73);
			AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
			PED::SET_PED_KEEP_TASK(iLocal_55, 1);
			AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_53 = 2;
			AI::OPEN_SEQUENCE_TASK(&uLocal_73);
			AI::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_250, 1193033728);
			AI::TASK_SMART_FLEE_PED(0, iLocal_54, 150f, -1, 0, 0);
			AI::CLOSE_SEQUENCE_TASK(uLocal_73);
			AI::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_73);
			PED::SET_PED_KEEP_TASK(iLocal_55, 1);
			AI::CLEAR_SEQUENCE_TASK(&uLocal_73);
		}
		if (iLocal_53 == 1)
		{
		}
		AI::TASK_GO_TO_ENTITY(iLocal_54, iLocal_55, -1, 1f, 3f, 1073741824, 0);
		PED::SET_PED_KEEP_TASK(iLocal_54, 1);
		return 1;
	}
	return 0;
}

void func_115()
{
	Local_250.x = 0f;
	Local_250.y = 10f;
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_54, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 13, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 11, 0);
	PED::SET_PED_COMBAT_RANGE(iLocal_54, 0);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_55, 3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 17, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 6, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 11, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_55, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_55, 1, 0);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_COP", &iLocal_71);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_CRIM", &iLocal_72);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, iLocal_71);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_55, iLocal_72);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_72, iLocal_71);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_71, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_72, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_72, -1533126372);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_54, sLocal_257);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_55, sLocal_256);
}

void func_116(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_117()
{
	if (!func_107(5))
	{
		return 1;
	}
	if (func_126())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_118(float fParam0, bool bParam1)
{
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_54(func_52()))
		{
			iVar36 = func_124();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_18569[iVar32], 2) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_18569[iVar32], 3))
				{
					func_119(iVar32, &Var0);
					fVar35 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_119(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_120(uParam1, "Abigail1", func_122(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 1:
			func_120(uParam1, "Abigail2", func_122(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 2:
			func_120(uParam1, "Barry1", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 3:
			func_120(uParam1, "Barry2", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 4:
			func_120(uParam1, "Barry3", func_122(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 5:
			func_120(uParam1, "Barry3A", func_122(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 6:
			func_120(uParam1, "Barry3C", func_122(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 7:
			func_120(uParam1, "Barry4", func_122(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_121(iParam0), 0, 0);
			break;
		
		case 8:
			func_120(uParam1, "Dreyfuss1", func_122(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 9:
			func_120(uParam1, "Epsilon1", func_122(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 10:
			func_120(uParam1, "Epsilon2", func_122(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 11:
			func_120(uParam1, "Epsilon3", func_122(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 12:
			func_120(uParam1, "Epsilon4", func_122(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 13:
			func_120(uParam1, "Epsilon5", func_122(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 14:
			func_120(uParam1, "Epsilon6", func_122(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 15:
			func_120(uParam1, "Epsilon7", func_122(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 16:
			func_120(uParam1, "Epsilon8", func_122(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 17:
			func_120(uParam1, "Extreme1", func_122(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 18:
			func_120(uParam1, "Extreme2", func_122(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 19:
			func_120(uParam1, "Extreme3", func_122(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 20:
			func_120(uParam1, "Extreme4", func_122(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 21:
			func_120(uParam1, "Fanatic1", func_122(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 22:
			func_120(uParam1, "Fanatic2", func_122(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 23:
			func_120(uParam1, "Fanatic3", func_122(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_121(iParam0), 0, 1);
			break;
		
		case 24:
			func_120(uParam1, "Hao1", func_122(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_121(iParam0), 0, 1);
			break;
		
		case 25:
			func_120(uParam1, "Hunting1", func_122(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 26:
			func_120(uParam1, "Hunting2", func_122(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 27:
			func_120(uParam1, "Josh1", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 28:
			func_120(uParam1, "Josh2", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 29:
			func_120(uParam1, "Josh3", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 30:
			func_120(uParam1, "Josh4", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 31:
			func_120(uParam1, "Maude1", func_122(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 32:
			func_120(uParam1, "Minute1", func_122(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 33:
			func_120(uParam1, "Minute2", func_122(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 34:
			func_120(uParam1, "Minute3", func_122(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 35:
			func_120(uParam1, "MrsPhilips1", func_122(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 36:
			func_120(uParam1, "MrsPhilips2", func_122(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 37:
			func_120(uParam1, "Nigel1", func_122(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 38:
			func_120(uParam1, "Nigel1A", func_122(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 39:
			func_120(uParam1, "Nigel1B", func_122(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 40:
			func_120(uParam1, "Nigel1C", func_122(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 41:
			func_120(uParam1, "Nigel1D", func_122(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 42:
			func_120(uParam1, "Nigel2", func_122(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 43:
			func_120(uParam1, "Nigel3", func_122(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 44:
			func_120(uParam1, "Omega1", func_122(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 45:
			func_120(uParam1, "Omega2", func_122(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 46:
			func_120(uParam1, "Paparazzo1", func_122(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 47:
			func_120(uParam1, "Paparazzo2", func_122(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 48:
			func_120(uParam1, "Paparazzo3", func_122(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 49:
			func_120(uParam1, "Paparazzo3A", func_122(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 50:
			func_120(uParam1, "Paparazzo3B", func_122(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 51:
			func_120(uParam1, "Paparazzo4", func_122(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 52:
			func_120(uParam1, "Rampage1", func_122(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 54:
			func_120(uParam1, "Rampage3", func_122(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 55:
			func_120(uParam1, "Rampage4", func_122(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 56:
			func_120(uParam1, "Rampage5", func_122(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 53:
			func_120(uParam1, "Rampage2", func_122(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 57:
			func_120(uParam1, "TheLastOne", func_122(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 58:
			func_120(uParam1, "Tonya1", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 59:
			func_120(uParam1, "Tonya2", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 60:
			func_120(uParam1, "Tonya3", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 61:
			func_120(uParam1, "Tonya4", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 62:
			func_120(uParam1, "Tonya5", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_120(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_122(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_123(iParam0) };
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_123(int iParam0)
{
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_124()
{
	func_53();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_125()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_126()
{
	if (func_129() && !func_125())
	{
		return 1;
	}
	if (func_128() && func_127())
	{
		return 1;
	}
	return 0;
}

bool func_127()
{
	return Global_111356 > 0;
}

int func_128()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_130()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_126())
	{
		return 1;
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_133(iParam0);
	GAMEPLAY::_0x65D2EBB47E1CEC21(0);
	GAMEPLAY::SET_RANDOM_EVENT_FLAG(1);
	Global_111624 = 0;
	func_132();
}

void func_132()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_133(int iParam0)
{
	Global_111627 = iParam0;
}

int func_134()
{
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_135(Var0);
	return uVar16;
}

int func_135(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (GAMEPLAY::GET_HASH_KEY(&cParam0))
	{
		case -60745600:
			return 23;
			break;
		
		case 1149455824:
			return 0;
			break;
		
		case 1889800404:
			return 15;
			break;
		
		case 737712801:
			return 1;
			break;
		
		case 976199832:
			return 26;
			break;
		
		case 1531173018:
			return 29;
			break;
		
		case 1154171352:
			return 24;
			break;
		
		case -1325807529:
			return 2;
			break;
		
		case -2118978003:
			return 17;
			break;
		
		case -1363545320:
			return 11;
			break;
		
		case -129069433:
			return 16;
			break;
		
		case 1158398451:
			return 18;
			break;
		
		case -1669765523:
			return 12;
			break;
		
		case -1538568960:
			return 3;
			break;
		
		case -396020015:
			return 27;
			break;
		
		case 786118124:
			return 20;
			break;
		
		case -770891250:
			return 19;
			break;
		
		case 190582896:
			return 4;
			break;
		
		case -911763748:
			return 13;
			break;
		
		case -881321240:
			return 28;
			break;
		
		case 1337652317:
			return 7;
			break;
		
		case 1492712482:
			return 25;
			break;
		
		case -1612307213:
			return 10;
			break;
		
		case -201963189:
			return 22;
			break;
		
		case -1176354303:
			return 21;
			break;
		
		case 1735157309:
			return 9;
			break;
		
		case -1631807569:
			return 5;
			break;
		
		case 847041036:
			return 6;
			break;
		
		case -167923910:
			return 14;
			break;
		
		case 59976311:
			return 30;
			break;
		
		case 996703443:
			return 31;
			break;
		
		case -2088549946:
			return 32;
			break;
		
		case -1148693293:
			return 33;
			break;
	}
	return -1;
}

int func_136(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_134();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_178())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_125())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_177(0))
		{
			return 0;
		}
		if (func_126())
		{
			return 0;
		}
		if (func_176())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_54(func_52()))
		{
			if (func_118(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.z - Local_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_175(iParam3))
		{
			return 0;
		}
		if (func_54(func_52()))
		{
			if (func_174(func_52()) == 4 || func_174(func_52()) == 5)
			{
				return 0;
			}
		}
		if (func_54(func_52()))
		{
			if (!func_173(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_172(Global_111638.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_171())
		{
			return 0;
		}
		if (GAMEPLAY::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (GAMEPLAY::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_162(4))
		{
			return 0;
		}
		if (!func_107(5))
		{
			return 0;
		}
		if (func_161(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_161(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_175(30) && !func_161(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_54(func_52()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111638.f_2358.f_539.f_2300[iVar4] };
				iVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_160(iVar8))
				{
					if (func_138(iVar4))
					{
						if (!func_137(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_52() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_137(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

bool func_138(int iParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_139(iVar0);
}

int func_139(int iParam0)
{
	return func_140(iParam0, 1);
}

int func_140(int iParam0, int iParam1)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	func_141(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_141(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_142(func_153(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_142(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_152(iParam0, iParam1))
	{
		iVar0 = func_151(iParam1);
		iVar1 = func_149(iParam0);
		iVar2 = (func_149(iParam0) - func_149(iParam1));
		iVar3 = (func_151(iParam0) - func_151(iParam1));
		iVar4 = (func_148(iParam0) - func_148(iParam1));
		iVar5 = (func_147(iParam0) - func_147(iParam1));
		iVar6 = (func_146(iParam0) - func_146(iParam1));
		iVar7 = (func_145(iParam0) - func_145(iParam1));
	}
	else
	{
		iVar0 = func_151(iParam0);
		iVar1 = func_149(iParam1);
		iVar2 = (func_149(iParam1) - func_149(iParam0));
		iVar3 = (func_151(iParam1) - func_151(iParam0));
		iVar4 = (func_148(iParam1) - func_148(iParam0));
		iVar5 = (func_147(iParam1) - func_147(iParam0));
		iVar6 = (func_146(iParam1) - func_146(iParam0));
		iVar7 = (func_145(iParam1) - func_145(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_144(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_143(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_143(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_145(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_146(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_147(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_148(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_149(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_150(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_150(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_151(int iParam0)
{
	return iParam0 & 15;
}

int func_152(int iParam0, int iParam1)
{
	if (!func_160(iParam1) || !func_160(iParam0))
	{
		return 1;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	func_159(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_158(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_157(&uVar0, TIME::GET_CLOCK_HOURS());
	func_156(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_155(&uVar0, TIME::GET_CLOCK_MONTH());
	func_154(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, int iParam1)
{
	iVar0 = func_151(*uParam0);
	iVar1 = func_149(*uParam0);
	if (iParam1 < 1 || iParam1 > func_144(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_160(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_146(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_147(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_149(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_151(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_148(iParam0);
	if (iVar5 < 1 || iVar5 > func_144(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_52();
				if (!func_54(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_170()) || Global_110685) || Global_30770) || func_169()) || func_89(8, -1)) || func_168()) || func_167()) || func_166()) || func_165()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_170()) || Global_30770) || func_169()) || func_89(8, -1)) || func_166()) || func_168()) || func_167()) || func_165()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_170()) || Global_110685) || Global_30770) || func_169()) || func_89(8, -1)) || func_166()) || func_168()) || func_167()) || func_165()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_170()) || Global_110685) || Global_30770) || func_169()) || func_89(8, -1)) || func_168()) || func_167()) || func_165()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_170() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_89(8, -1)) || func_165()) || func_164()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_89(8, -1) || func_168()) || func_167()) || func_164()) || func_163())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_170()) || Global_30770) || func_169()) || func_89(8, -1)) || func_167()) || func_166()) || func_165()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_170()) || func_167()) || Global_110685) || Global_30770) || func_169()) || Global_42596) || func_89(8, -1)) || func_166()) || func_164()) || func_165()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_170()) || Global_110685) || Global_30770) || func_169()) || func_89(8, -1)) || func_166()) || func_164()) || func_168()) || func_167()) || func_165())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_163()
{
	return Global_98783.f_1;
}

int func_164()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_165()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

bool func_167()
{
	return Global_98796.f_346 > 0;
}

bool func_168()
{
	return Global_98796.f_345 > 0;
}

var func_169()
{
	return Global_1312877;
}

int func_170()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_171()
{
	func_87();
	if (Global_8161[Global_19486][0].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_172(int iParam0)
{
	return func_152(func_153(), iParam0);
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = func_52();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_174(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_175(int iParam0)
{
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_178())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = GAMEPLAY::IS_BIT_SET(Global_111638.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = GAMEPLAY::IS_BIT_SET(Global_111638.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_176()
{
	if (Global_30918)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_177(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

int func_178()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(1571103992, &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, iVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_179()
{
	if (GAMEPLAY::GET_RANDOM_EVENT_FLAG())
	{
		switch (iLocal_49)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_208(6);
				func_193();
				break;
			
			case 3:
				func_208(5);
				func_193();
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			if (!PED::IS_PED_INJURED(iLocal_55) && !ENTITY::IS_ENTITY_DEAD(iLocal_55, 0))
			{
				ENTITY::IS_ENTITY_DEAD(iLocal_54, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
				{
					AI::TASK_SMART_FLEE_COORD(iLocal_55, ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), 9000f, -1, 0, 0);
				}
				else
				{
					AI::TASK_SMART_FLEE_COORD(iLocal_55, ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), 9000f, -1, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, 0);
				PED::SET_PED_KEEP_TASK(iLocal_55, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				PED::SET_PED_KEEP_TASK(iLocal_54, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 0);
				PED::SET_PED_AS_COP(iLocal_54, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_54, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_66();
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 0);
				PED::SET_PED_AS_COP(iLocal_56, 1);
			}
		}
		if (func_192())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, iLocal_71);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_71, iLocal_72);
		}
		if (iLocal_77)
		{
			VEHICLE::SET_RANDOM_TRAINS(1);
		}
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_287)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	func_180(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_180(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_192())
	{
		func_185(iParam0);
		UI::SET_MISSION_NAME(0, 0);
		Global_111629 = GAMEPLAY::GET_GAME_TIMER();
		func_184(30000);
		StringCopy(&cVar0, func_183(Global_111627, 1), 64);
		if (func_182(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		STATS::_0x71862B1D855F32E1(&cVar0, Global_111624, (GAMEPLAY::GET_GAME_TIMER() - Global_111625), 0);
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_111634, 0) && Global_111638.f_24990.f_2 < 3)
	{
		GAMEPLAY::CLEAR_BIT(&Global_111634, 0);
	}
	func_181(&Global_30827);
	Global_111628 = 0;
	func_133(-1);
}

void func_181(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

int func_182(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_183(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_184(int iParam0)
{
	Global_41982 = (GAMEPLAY::GET_GAME_TIMER() + iParam0);
}

void func_185(int iParam0)
{
	func_186(iParam0, 0, func_191(iParam0));
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_153();
	func_189(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_188(iParam0, &uVar0);
	Var1 = { func_187(&uVar0) };
}

struct<16> func_187(var uParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = func_147(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_146(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_145(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_148(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_151(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_149(*uParam0), 64);
	return Var0;
}

void func_188(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_149(*uParam0);
	iVar1 = func_151(*uParam0);
	iVar2 = func_148(*uParam0);
	iVar3 = func_147(*uParam0);
	iVar4 = func_146(*uParam0);
	iVar5 = func_145(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_144(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_144(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_190(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_190(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_159(uParam0, iParam1);
	func_158(uParam0, iParam2);
	func_157(uParam0, iParam3);
	func_155(uParam0, iParam5);
	func_156(uParam0, iParam4);
	func_154(uParam0, iParam6);
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_192()
{
	if ((Global_111627 == func_134() && GAMEPLAY::GET_RANDOM_EVENT_FLAG()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_193()
{
	if (!bLocal_76)
	{
		func_207();
	}
	func_196(15, iLocal_53);
	func_194();
}

void func_194()
{
	func_195();
}

int func_195()
{
	if (func_177(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

void func_196(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_182(iParam0))
	{
		func_206(iParam0, iParam1);
		if (!func_205(51))
		{
			func_202("RE_REWARD", 1, 0, 4000, 10000, func_124(), 0, 138, 0);
			func_201(51);
		}
		if (func_103(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_200(iParam0, iParam1) != 322)
		{
			func_197(func_200(iParam0, iParam1), Local_44.x, Local_44.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_208(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_208(7);
			}
			else
			{
				func_208(1);
			}
		}
	}
}

void func_197(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_25((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0].f_6 == 11 || Global_111638.f_10189[iParam0].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0].f_5 = 1;
		Global_111638.f_10189[iParam0].f_10 = uParam1;
		Global_111638.f_10189[iParam0].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(-2044299740, 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(86701099, 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(-375571184, 50, 0);
		}
	}
	if (bVar0)
	{
		func_198();
	}
}

void func_198()
{
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					STATS::_0x11FF1C80276097ED(-2122623864, Global_111361, 0);
					GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	STATS::STAT_SET_INT(-1055525200, Global_111374, 1);
	STATS::STAT_SET_INT(-419750212, Global_111357, 1);
	STATS::STAT_SET_INT(1331385274, Global_111375, 1);
	STATS::STAT_SET_INT(542355616, Global_111358, 1);
	STATS::STAT_SET_INT(1561233577, Global_111376, 1);
	STATS::STAT_SET_INT(558499468, Global_111359, 1);
	STATS::STAT_SET_INT(-852659719, Global_111377, 1);
	STATS::STAT_SET_INT(-20401960, Global_111360, 1);
	STATS::STAT_SET_INT(-2122623864, iVar9, 1);
	STATS::STAT_SET_INT(-215705366, Global_111364, 1);
	STATS::STAT_SET_INT(-131898641, (Global_111380 + Global_111379), 1);
	STATS::STAT_SET_INT(-2086369560, (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	STATS::STAT_SET_FLOAT(1215094015, Global_111638.f_10189.f_3853, 1);
	STATS::STAT_SET_INT(1813094653, Global_111381, 1);
	STATS::STAT_SET_INT(-1205712980, Global_111382, 1);
	STATS::STAT_SET_INT(480408826, Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_47(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_199() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_195();
				}
			}
		}
	}
}

int func_199()
{
	return Global_30768;
}

int func_200(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_201(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_202(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_203(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_203(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (GAMEPLAY::GET_GAME_TIMER() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((GAMEPLAY::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_204();
	}
}

void func_204()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		iVar0++;
	}
}

int func_205(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_206(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_207()
{
	return 1;
}

void func_208(int iParam0)
{
	Global_111624 = iParam0;
}

void func_209()
{
	if (!bLocal_74 && iLocal_51 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_54) && !PED::IS_PED_INJURED(iLocal_55))
		{
			AI::TASK_GO_STRAIGHT_TO_COORD(iLocal_54, ENTITY::GET_ENTITY_COORDS(iLocal_55, 1), 3f, 20000, 1193033728, 1056964608);
			PED::SET_PED_KEEP_TASK(iLocal_54, 1);
			SYSTEM::WAIT(0);
		}
	}
}

