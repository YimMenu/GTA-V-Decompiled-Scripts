void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_128 = { -824.1719f, -187.654f, 36.5707f };
	Local_131 = { -1202.94f, -779.74f, 17.33f };
	Local_50 = { ScriptParam_0.f_1[0] };
	func_250();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_248();
		func_236();
	}
	if (iLocal_49 == 1)
	{
		if (!func_235(0) || !func_234(0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else if (iLocal_49 == 2)
	{
		if (!func_235(14) || !func_234(14))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (func_204(Local_50, 5, iLocal_134, 0, 0))
	{
		func_201(5);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_164)
		{
			if (!func_200())
			{
				if (func_199())
				{
					func_236();
				}
			}
			UNK1::_0x208784099002BC30("RE_SR", 0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				switch (iLocal_48)
				{
					case 0:
						if (iLocal_53)
						{
							iLocal_223 = 1;
							iLocal_48 = 1;
						}
						else
						{
							if (func_187())
							{
								func_236();
							}
							if (!bLocal_54)
							{
								func_186();
							}
							if (bLocal_54)
							{
								func_185();
							}
						}
						break;
					
					case 1:
						switch (iLocal_46)
						{
							case 0:
								if (!iLocal_137)
								{
									func_184();
									if (INTERIOR::IS_INTERIOR_READY(iLocal_153))
									{
										func_178();
										iLocal_137 = 1;
									}
								}
								else
								{
									if (iLocal_49 == 1)
									{
										UNK1::_0xAF66DCEE6609B148();
									}
									func_175();
									INTERIOR::UNPIN_INTERIOR(iLocal_153);
									if (func_174())
									{
										if (!iLocal_159)
										{
											if (iLocal_49 == 1)
											{
												if (func_173(&uLocal_232, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													iLocal_159 = 1;
												}
											}
											else if (iLocal_49 == 2)
											{
												if (func_173(&uLocal_232, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													iLocal_159 = 1;
												}
											}
										}
									}
									if (func_172())
									{
										if (UI::DOES_BLIP_EXIST(uLocal_193))
										{
											UI::REMOVE_BLIP(&uLocal_193);
										}
										PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_114)
										{
											if (!PED::IS_PED_INJURED(iLocal_114[iVar0]))
											{
												AI::TASK_COMBAT_PED(iLocal_114[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_114[iVar0], 1);
												if (!UI::DOES_BLIP_EXIST(uLocal_185[iVar0]))
												{
													uLocal_185[iVar0] = func_171(iLocal_114[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_49 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_117)
											{
												if (!PED::IS_PED_INJURED(iLocal_117[iVar0]))
												{
													AI::TASK_COWER(iLocal_117[iVar0], -1);
													PED::SET_PED_KEEP_TASK(iLocal_117[iVar0], 1);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_121)
											{
												if (!PED::IS_PED_INJURED(iLocal_121[iVar0]))
												{
													AI::TASK_COWER(iLocal_121[iVar0], -1);
													PED::SET_PED_KEEP_TASK(iLocal_121[iVar0], 1);
												}
												iVar0++;
											}
										}
										OBJECT::DELETE_OBJECT(&iLocal_167);
										bLocal_140 = true;
										iLocal_46 = 1;
										iLocal_47 = 3;
									}
									if (func_170())
									{
										func_163(1);
										SYSTEM::SETTIMERA(0);
										DECISIONEVENT::ADD_SHOCKING_EVENT_AT_POSITION(90, Local_194, 15000f);
										iLocal_46 = 1;
									}
								}
								break;
							
							case 1:
								PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
								func_175();
								iVar1 = 0;
								while (iVar1 < iLocal_117)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[iVar1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_117[iVar1], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_162();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_121)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_121[iVar1], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_162();
										}
									}
									iVar1++;
								}
								switch (iLocal_47)
								{
									case 0:
										if (func_170())
										{
											func_158();
											func_156();
										}
										break;
									
									case 1:
										func_155();
										func_156();
										break;
									
									case 2:
										func_154();
										func_153();
										func_152();
										if (SYSTEM::TIMERB() > 500)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
											{
												if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_167))
												{
													func_151();
													WEAPON::SET_CURRENT_PED_WEAPON(iLocal_114[0], -1569615261, 1);
													ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_167, iLocal_114[0], PED::GET_PED_BONE_INDEX(iLocal_114[0], 57005), 0.3f, 0f, 0f, 80f, -90f, 0f, 1, 1, 0, 0, 2, 1);
												}
											}
										}
										if (GAMEPLAY::IS_PROJECTILE_IN_AREA(Local_194 - Vector(20f, 20f, 20f), Local_194 + Vector(20f, 20f, 20f), 0))
										{
											if (!PED::IS_PED_INJURED(iLocal_117[1]))
											{
												AI::TASK_SMART_FLEE_COORD(iLocal_117[1], Local_103, 150f, -1, 0, 0);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[1], 0);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_117[1]));
											}
											if (!PED::IS_PED_INJURED(iLocal_117[2]))
											{
												AI::TASK_SMART_FLEE_COORD(iLocal_117[2], Local_103, 150f, -1, 0, 0);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[2], 0);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_117[2]));
											}
											iVar2 = 0;
											while (iVar2 <= (iLocal_113 - 1))
											{
												if (!PED::IS_PED_INJURED(iLocal_121[iVar2]))
												{
													ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_121[iVar2], 1, 1);
													AI::OPEN_SEQUENCE_TASK(&uLocal_152);
													if (iLocal_49 == 1)
													{
														AI::TASK_PLAY_ANIM(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
													}
													else if (iLocal_49 == 2)
													{
														AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
													}
													AI::TASK_SMART_FLEE_COORD(0, Local_103, 150f, -1, 0, 0);
													AI::CLOSE_SEQUENCE_TASK(uLocal_152);
													AI::TASK_PERFORM_SEQUENCE(iLocal_121[iVar2], uLocal_152);
													AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
													PED::SET_PED_KEEP_TASK(iLocal_121[iVar2], 1);
													PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[iVar2], 0);
													PED::SET_PED_CAN_BE_TARGETTED(iLocal_121[iVar2], 1);
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_121[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_150() || SYSTEM::TIMERA() > 20000)
										{
											if (!iLocal_164)
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_114[0], 0))
												{
													func_142(0, 1, 1, 0, 0, 0);
													func_135(0);
													UI::DISPLAY_HUD(1);
													UI::DISPLAY_RADAR(1);
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
													AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, 0f, 0, 0, 0);
													if (iLocal_49 == 1)
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
														{
															ENTITY::SET_ENTITY_VISIBLE(iLocal_167, 0, 0);
															ENTITY::SET_ENTITY_COLLISION(iLocal_167, 0, 0);
														}
													}
													else if (iLocal_49 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_117)
													{
														if (!PED::IS_PED_INJURED(iLocal_117[iVar1]))
														{
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[iVar1], 0);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_121)
													{
														if (!PED::IS_PED_INJURED(iLocal_121[iVar1]))
														{
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[iVar1], 0);
														}
														iVar1++;
													}
													if (!PED::IS_PED_INJURED(iLocal_117[0]))
													{
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[0], 1);
														AI::OPEN_SEQUENCE_TASK(&uLocal_152);
														AI::TASK_PLAY_ANIM(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
														AI::CLOSE_SEQUENCE_TASK(uLocal_152);
														AI::TASK_PERFORM_SEQUENCE(iLocal_117[0], uLocal_152);
														AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
														PED::SET_PED_KEEP_TASK(iLocal_117[0], 1);
													}
													if (!func_134())
													{
														func_118(&uLocal_232, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													iLocal_164 = 1;
												}
											}
										}
										if (!iLocal_139)
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p") > 0.7f || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p") > 0.6f && func_117(64)))
												{
													AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
													iLocal_139 = 1;
												}
											}
										}
										if (iLocal_49 == 1)
										{
											if (!func_170())
											{
												if (!iLocal_180)
												{
													iLocal_180 = 1;
												}
											}
											if (!bLocal_161)
											{
												func_116();
											}
											if (!PED::IS_PED_INJURED(iLocal_114[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, 0))
											{
												if (PED::IS_PED_IN_VEHICLE(iLocal_114[0], iLocal_175, 0))
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
													{
														OBJECT::DELETE_OBJECT(&iLocal_167);
														bLocal_161 = true;
													}
												}
											}
											if (func_115() && !iLocal_162)
											{
												if (UI::DOES_BLIP_EXIST(uLocal_185[0]))
												{
													UI::REMOVE_BLIP(&(uLocal_185[0]));
												}
												if (UI::DOES_BLIP_EXIST(uLocal_185[1]))
												{
													UI::REMOVE_BLIP(&(uLocal_185[1]));
												}
												if (!UI::DOES_BLIP_EXIST(uLocal_191))
												{
													uLocal_191 = func_113(iLocal_175, 1, 0);
												}
												bLocal_161 = true;
												if (!PED::IS_PED_INJURED(iLocal_184))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 17, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 6, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 1, 1);
													AI::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_184, iLocal_175, PLAYER::PLAYER_PED_ID(), 8, 16f, 786469, -1f, -1f, 1);
													PED::SET_PED_KEEP_TASK(iLocal_184, 1);
													iLocal_162 = 1;
												}
											}
											if (iLocal_162 && !iLocal_224)
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, 0) && !PED::IS_PED_INJURED(iLocal_184))
												{
													if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_175, Local_55[0], 20f, 20f, 10f, 0, 1, 0))
													{
														AI::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_184, iLocal_175, PLAYER::PLAYER_PED_ID(), 8, 19f, 786469, -1f, -1f, 1);
														iLocal_224 = 1;
													}
												}
											}
											if (func_112())
											{
												if (!PED::IS_PED_INJURED(iLocal_184))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, 0))
													{
														if (!iLocal_163)
														{
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 17, 1);
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 6, 1);
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 1, 1);
															AI::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_184, iLocal_175, PLAYER::PLAYER_PED_ID(), 8, 17f, 786469, -1f, -1f, 1);
															iLocal_163 = 1;
														}
														if (!PED::IS_PED_INJURED(iLocal_114[0]))
														{
															if (PED::IS_PED_IN_VEHICLE(iLocal_114[0], iLocal_175, 0))
															{
																if (UI::DOES_BLIP_EXIST(uLocal_185[0]))
																{
																	UI::REMOVE_BLIP(&(uLocal_185[0]));
																}
																if (UI::DOES_BLIP_EXIST(uLocal_185[1]))
																{
																	UI::REMOVE_BLIP(&(uLocal_185[1]));
																}
																if (!UI::DOES_BLIP_EXIST(uLocal_191))
																{
																	uLocal_191 = func_113(iLocal_175, 1, 0);
																}
																bLocal_161 = true;
															}
														}
													}
												}
												iVar3 = 0;
												while (iVar3 <= (iLocal_111 - 1))
												{
													if (!iLocal_141[iVar3])
													{
														if (!PED::IS_PED_INJURED(iLocal_114[iVar3]))
														{
															if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_114[iVar3], 0) && !PED::IS_PED_INJURED(iLocal_184))
															{
																AI::TASK_DRIVE_BY(iLocal_114[iVar3], PLAYER::PLAYER_PED_ID(), 0, 0.3f, 0.7f, 1.9f, -1f, 15, 0, -753768974);
																iLocal_141[iVar3] = 1;
															}
															else if (!UI::DOES_BLIP_EXIST(uLocal_192))
															{
																AI::TASK_COMBAT_PED(iLocal_114[iVar3], PLAYER::PLAYER_PED_ID(), 0, 16);
																PED::SET_PED_KEEP_TASK(iLocal_114[iVar3], 1);
																if (UI::DOES_BLIP_EXIST(uLocal_191))
																{
																	UI::REMOVE_BLIP(&uLocal_191);
																}
																if (!UI::DOES_BLIP_EXIST(uLocal_185[iVar3]))
																{
																	uLocal_185[iVar3] = func_171(iLocal_114[iVar3], 1, 145);
																}
																iLocal_141[iVar3] = 1;
															}
														}
													}
													if (!iLocal_144[iVar3])
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, 0))
														{
															if (!PED::IS_PED_INJURED(iLocal_114[iVar3]))
															{
																if ((PED::IS_PED_INJURED(iLocal_184) || VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_175, -1, 0)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_114[iVar3]))
																{
																	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_114[iVar3], 1, 1);
																	AI::OPEN_SEQUENCE_TASK(&uLocal_152);
																	AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																	AI::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																	AI::CLOSE_SEQUENCE_TASK(uLocal_152);
																	AI::TASK_PERFORM_SEQUENCE(iLocal_114[iVar3], uLocal_152);
																	AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
																	PED::SET_PED_KEEP_TASK(iLocal_114[iVar3], 1);
																	if (!PED::IS_PED_INJURED(iLocal_184))
																	{
																		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_184, 1, 1);
																		AI::OPEN_SEQUENCE_TASK(&uLocal_152);
																		AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																		AI::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																		AI::CLOSE_SEQUENCE_TASK(uLocal_152);
																		AI::TASK_PERFORM_SEQUENCE(iLocal_184, uLocal_152);
																		AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
																		PED::SET_PED_KEEP_TASK(iLocal_184, 1);
																	}
																	if (!UI::DOES_BLIP_EXIST(uLocal_192))
																	{
																		if (UI::DOES_BLIP_EXIST(uLocal_191))
																		{
																			UI::REMOVE_BLIP(&uLocal_191);
																		}
																		if (!UI::DOES_BLIP_EXIST(uLocal_185[iVar3]))
																		{
																			uLocal_185[iVar3] = func_171(iLocal_114[iVar3], 1, 145);
																		}
																	}
																	iLocal_144[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!PED::IS_PED_INJURED(iLocal_114[iVar3]))
															{
																ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_114[iVar3], 1, 1);
																AI::OPEN_SEQUENCE_TASK(&uLocal_152);
																AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																AI::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																AI::CLOSE_SEQUENCE_TASK(uLocal_152);
																AI::TASK_PERFORM_SEQUENCE(iLocal_114[iVar3], uLocal_152);
																AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
																PED::SET_PED_KEEP_TASK(iLocal_114[iVar3], 1);
															}
															if (!PED::IS_PED_INJURED(iLocal_184))
															{
																ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_184, 1, 1);
																AI::OPEN_SEQUENCE_TASK(&uLocal_152);
																AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																AI::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																AI::CLOSE_SEQUENCE_TASK(uLocal_152);
																AI::TASK_PERFORM_SEQUENCE(iLocal_184, uLocal_152);
																AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
																PED::SET_PED_KEEP_TASK(iLocal_184, 1);
															}
															if (!UI::DOES_BLIP_EXIST(uLocal_192))
															{
																if (UI::DOES_BLIP_EXIST(uLocal_191))
																{
																	UI::REMOVE_BLIP(&uLocal_191);
																}
																if (!UI::DOES_BLIP_EXIST(uLocal_185[iVar3]))
																{
																	uLocal_185[iVar3] = func_171(iLocal_114[iVar3], 1, 145);
																}
																iLocal_144[iVar3] = 1;
															}
														}
													}
													iVar3++;
												}
											}
											if (bLocal_161)
											{
												if (func_111())
												{
													func_110();
													func_107();
													iLocal_47 = 9;
												}
											}
										}
										else if (iLocal_49 == 2)
										{
											if (PED::IS_PED_INJURED(iLocal_114[0]))
											{
												if (UI::DOES_BLIP_EXIST(uLocal_185[0]))
												{
													func_106(&uLocal_232, 3);
													UI::REMOVE_BLIP(&(uLocal_185[0]));
												}
											}
											if (PED::IS_PED_INJURED(iLocal_114[1]))
											{
												if (UI::DOES_BLIP_EXIST(uLocal_185[1]))
												{
													func_106(&uLocal_232, 4);
													UI::REMOVE_BLIP(&(uLocal_185[1]));
												}
											}
											if (PED::IS_PED_INJURED(iLocal_114[0]))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
												{
													if (ENTITY::IS_ENTITY_ATTACHED(iLocal_167))
													{
														ENTITY::DETACH_ENTITY(iLocal_167, 1, 1);
													}
													OBJECT::DELETE_OBJECT(&iLocal_167);
													func_110();
													func_107();
													iLocal_47 = 9;
												}
											}
											else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[0], PLAYER::PLAYER_PED_ID(), 1))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
												{
													if (ENTITY::IS_ENTITY_ATTACHED(iLocal_167))
													{
														ENTITY::DETACH_ENTITY(iLocal_167, 1, 1);
													}
													OBJECT::DELETE_OBJECT(&iLocal_167);
													func_110();
													func_107();
													iLocal_47 = 9;
												}
											}
										}
										break;
									
									case 3:
										func_155();
										break;
									
									case 9:
										func_154();
										func_104();
										break;
									
									case 10:
										func_101(2);
										func_100(uLocal_193, &uLocal_229);
										if (iLocal_49 == 1)
										{
											if (!iLocal_160)
											{
												STREAMING::REQUEST_ANIM_DICT("random@robbery");
												if (!STREAMING::HAS_ANIM_DICT_LOADED("random@robbery"))
												{
													STREAMING::REQUEST_ANIM_DICT("random@robbery");
												}
												else if (!PED::IS_PED_INJURED(iLocal_117[0]))
												{
													ENTITY::SET_ENTITY_COORDS(iLocal_117[0], -818.5553f, -185.4815f, 36.5689f, 1, 0, 0, 1);
													ENTITY::SET_ENTITY_HEADING(iLocal_117[0], 47.0582f);
													AI::TASK_PLAY_ANIM(iLocal_117[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!PED::IS_PED_INJURED(iLocal_117[1]))
													{
														AI::TASK_SMART_FLEE_COORD(iLocal_117[1], Local_103, 150f, -1, 0, 0);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[1], 0);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_117[1]));
													}
													if (!PED::IS_PED_INJURED(iLocal_117[2]))
													{
														AI::TASK_SMART_FLEE_COORD(iLocal_117[2], Local_103, 150f, -1, 0, 0);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[2], 0);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_117[2]));
													}
													iVar4 = 0;
													while (iVar4 <= (iLocal_113 - 1))
													{
														if (!PED::IS_PED_INJURED(iLocal_121[iVar4]))
														{
															AI::OPEN_SEQUENCE_TASK(&uLocal_152);
															AI::TASK_PLAY_ANIM(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
															AI::TASK_SMART_FLEE_COORD(0, Local_103, 150f, -1, 0, 0);
															AI::CLOSE_SEQUENCE_TASK(uLocal_152);
															AI::TASK_PERFORM_SEQUENCE(iLocal_121[iVar4], uLocal_152);
															AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
															PED::SET_PED_KEEP_TASK(iLocal_121[iVar4], 1);
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[iVar4], 0);
															PED::SET_PED_CAN_BE_TARGETTED(iLocal_121[iVar4], 1);
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_121[iVar4]));
														}
														iVar4++;
													}
													iLocal_160 = 1;
												}
											}
											func_76(6, 3);
											func_76(7, 3);
										}
										else if (iLocal_49 == 2)
										{
											if (!iLocal_160)
											{
												STREAMING::REQUEST_ANIM_DICT("random@robbery");
												if (!STREAMING::HAS_ANIM_DICT_LOADED("random@robbery"))
												{
													STREAMING::REQUEST_ANIM_DICT("random@robbery");
												}
												else if (!PED::IS_PED_INJURED(iLocal_117[0]))
												{
													ENTITY::SET_ENTITY_COORDS(iLocal_117[0], -1197.455f, -776.0289f, 16.3254f, 1, 0, 0, 1);
													ENTITY::SET_ENTITY_HEADING(iLocal_117[0], 205.7753f);
													AI::TASK_PLAY_ANIM(iLocal_117[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!PED::IS_PED_INJURED(iLocal_117[1]))
													{
														AI::TASK_SMART_FLEE_COORD(iLocal_117[1], Local_103, 150f, -1, 0, 0);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[1], 0);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_117[1]));
													}
													if (!PED::IS_PED_INJURED(iLocal_117[2]))
													{
														AI::TASK_SMART_FLEE_COORD(iLocal_117[2], Local_103, 150f, -1, 0, 0);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[2], 0);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_117[2]));
													}
													iVar5 = 0;
													while (iVar5 <= (iLocal_113 - 1))
													{
														if (!PED::IS_PED_INJURED(iLocal_121[iVar5]))
														{
															AI::TASK_SMART_FLEE_COORD(iLocal_121[iVar5], Local_103, 150f, -1, 0, 0);
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[iVar5], 0);
															PED::SET_PED_CAN_BE_TARGETTED(iLocal_121[iVar5], 1);
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_121[iVar5]));
														}
														iVar5++;
													}
													iLocal_160 = 1;
												}
											}
											if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1201.43f, -776.86f, 17.99f, 6f, 1780022985, 0))
											{
												OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(1780022985, -1201.43f, -776.86f, 17.99f, 0, 0f, 0);
											}
										}
										if (func_174())
										{
										}
										if ((func_170() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_47 = 11;
										}
										if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_250()) > (fLocal_197 + 150f))
										{
											iLocal_47 = 12;
										}
										if (SYSTEM::TIMERA() > 120000)
										{
											iLocal_47 = 14;
										}
										if (PED::IS_PED_INJURED(iLocal_117[0]))
										{
											func_75(2);
											func_55();
										}
										else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_117[0], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_75(2);
											func_55();
										}
										break;
									
									case 11:
										func_1();
										break;
									
									case 12:
										func_75(2);
										func_55();
										break;
									
									case 7:
										func_55();
										break;
									
									case 14:
										func_75(2);
										func_55();
										break;
									
									case 13:
										if (!iLocal_225)
										{
											if (!PED::IS_PED_INJURED(iLocal_117[0]))
											{
												AI::CLEAR_PED_TASKS(iLocal_117[0]);
												if (iLocal_49 == 1)
												{
													func_118(&uLocal_232, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_49 == 2)
												{
													func_118(&uLocal_232, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												AI::TASK_USE_MOBILE_PHONE_TIMED(iLocal_117[0], 20000);
												PED::SET_PED_KEEP_TASK(iLocal_117[0], 1);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[0], 0);
												iLocal_225 = 1;
											}
										}
										if (!func_134())
										{
											iLocal_46 = 2;
										}
										break;
								}
								break;
							
							case 2:
								func_162();
								break;
						}
						break;
					}
			}
		}
		else
		{
			func_236();
		}
	}
}

void func_1()
{
	if (func_170())
	{
		if (UI::DOES_BLIP_EXIST(uLocal_193))
		{
			UI::REMOVE_BLIP(&uLocal_193);
		}
		if (!iLocal_182)
		{
			if (!PED::IS_PED_INJURED(iLocal_117[0]))
			{
				func_142(1, 1, 1, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				UI::CLEAR_HELP(1);
				GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iLocal_117[0], 1), 20f, 0);
				UI::DISPLAY_HUD(0);
				UI::DISPLAY_RADAR(0);
				if (iLocal_49 == 1)
				{
					bLocal_181 = true;
				}
				else if (iLocal_49 == 2)
				{
				}
				iLocal_182 = 1;
			}
		}
	}
	if (!bLocal_181)
	{
		if (!PED::IS_PED_INJURED(iLocal_117[0]))
		{
			bLocal_181 = true;
		}
	}
	if (bLocal_181)
	{
		if (!iLocal_183)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
			if (UI::DOES_BLIP_EXIST(uLocal_193))
			{
				UI::REMOVE_BLIP(&uLocal_193);
			}
			Local_198 = { ENTITY::GET_ENTITY_COORDS(iLocal_117[0], 0) };
			if (iLocal_49 == 1)
			{
				Local_198 = { -820.77f, -186.514f, 36.569f };
				Local_204 = { 0f, 0f, -60f };
				fLocal_217 = 0.855f;
				sLocal_211 = "random@robbery";
				sLocal_212 = "return_bag_stand_b";
				sLocal_213 = "return_bag_stand_b_female";
				sLocal_214 = "return_bag_stand_b_bag";
				sLocal_215 = "return_bag_stand_b_cam";
			}
			else if (iLocal_49 == 2)
			{
				Local_198 = { -1198.295f, -776.533f, 16.326f };
				Local_204 = { 0f, 0f, -60.25f };
				fLocal_217 = 0.785f;
				sLocal_211 = "random@robbery";
				sLocal_212 = "return_bag_stand_c_rt";
				sLocal_213 = "return_bag_stand_c_rt_female";
				sLocal_214 = "return_bag_stand_c_rt_bag";
				sLocal_215 = "return_bag_stand_c_rt_cam";
			}
			uLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(Local_198, Local_204, 2);
			uLocal_210 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_210, uLocal_216, sLocal_215, sLocal_211);
			AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_216, sLocal_211, sLocal_212, 1000f, -2f, 5, 0, 1148846080, 0);
			PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
			AI::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_117[0]);
			AI::TASK_SYNCHRONIZED_SCENE(iLocal_117[0], uLocal_216, sLocal_211, sLocal_213, 1000f, -2f, 4, 0, 1148846080, 0);
			PED::_0x2208438012482A1A(iLocal_117[0], 0, 0);
			iLocal_167 = OBJECT::CREATE_OBJECT(1666748342, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_167, uLocal_216, sLocal_214, sLocal_211, 1000f, 1090519040, 0, 1148846080);
			if (!PED::IS_PED_INJURED(iLocal_117[0]))
			{
				func_54();
				CAM::SET_CAM_ACTIVE(uLocal_210, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_183 = 1;
			}
		}
	}
	if ((SYSTEM::TIMERA() > 1500 && iLocal_183) && !iLocal_158)
	{
		func_52();
		SYSTEM::WAIT(0);
		if (iLocal_49 == 1)
		{
			func_118(&uLocal_232, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_49 == 2)
		{
			func_118(&uLocal_232, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		iLocal_158 = 1;
	}
	if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_216) > fLocal_217 && iLocal_183)
	{
		if (!PED::IS_PED_INJURED(iLocal_117[0]))
		{
			PED::SET_PED_MONEY(iLocal_117[0], iLocal_189);
			AI::CLEAR_PED_TASKS(iLocal_117[0]);
			AI::OPEN_SEQUENCE_TASK(&uLocal_152);
			AI::TASK_PLAY_ANIM(0, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, 0f, 0, 0, 0);
			AI::CLOSE_SEQUENCE_TASK(uLocal_152);
			AI::TASK_PERFORM_SEQUENCE(iLocal_117[0], uLocal_152);
			AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
			PED::SET_PED_KEEP_TASK(iLocal_117[0], 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			OBJECT::DELETE_OBJECT(&iLocal_167);
		}
		AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 650, 0, 1, 0);
		func_142(0, 1, 1, 0, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 4);
		UI::DISPLAY_HUD(1);
		UI::DISPLAY_RADAR(1);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::_0xC819F3CBB62BF692(0, 0, 3, 0);
		CAM::DESTROY_CAM(uLocal_210, 0);
		func_51();
		func_50(830299938, 1);
		if (iLocal_49 == 1)
		{
			func_12(func_44(), 1, iLocal_189);
			func_2(0, func_44(), 1);
		}
		else if (iLocal_49 == 2)
		{
			func_12(func_44(), 1, iLocal_189);
			func_2(14, func_44(), 1);
		}
		func_75(3);
		func_55();
	}
}

void func_2(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 7;
			break;
		
		case 2:
			iVar0 = 6;
			break;
		
		default:
			return;
			break;
	}
	if (bParam2)
	{
		if (!func_11(iParam0, iVar0, 0))
		{
			func_10(iParam0, iVar0, 0);
		}
	}
	else if (func_11(iParam0, iVar0, 0))
	{
		func_3(iParam0, iVar0, 0);
	}
}

void func_3(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_9() == 0)
		{
			uVar0 = func_7(func_8(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar0, iParam1);
			func_4(func_8(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_5(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_5(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1312745;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_5(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_9()
{
	return Global_30768;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_9() == 0)
		{
			uVar0 = func_7(func_8(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&uVar0, iParam1);
			func_4(func_8(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_11(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_9() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_7(func_8(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	if (func_43(iParam0) == 3)
	{
		return 0;
	}
	if (func_43(iParam0) == 4)
	{
		return 0;
	}
	return func_13(func_43(iParam0), 0, iParam1, iParam2, 0);
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_42();
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
					func_41(99, 1);
					func_50(-656546900, iParam3);
					break;
				
				case 1:
					func_50(-2098183071, iParam3);
					break;
				
				case 2:
					func_50(1578119842, iParam3);
					break;
			}
			func_25(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_21(5))
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
							func_50(-1190521599, iParam3);
							break;
						
						case 1:
							func_50(490143716, iParam3);
							break;
						
						case 2:
							func_50(121069433, iParam3);
							break;
					}
					if (func_21(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_50(219506691, iParam3);
							break;
						
						case 1:
							func_50(1871505786, iParam3);
							break;
						
						case 2:
							func_50(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_50(27639974, iParam3);
							break;
						
						case 1:
							func_50(422258364, iParam3);
							break;
						
						case 2:
							func_50(316202960, iParam3);
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
							func_50(1806738963, iParam3);
							break;
						
						case 1:
							func_50(1576781520, iParam3);
							break;
						
						case 2:
							func_50(671882196, iParam3);
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
									func_50(408653638, iParam3);
									break;
								
								case 1:
									func_50(-424799277, iParam3);
									break;
								
								case 2:
									func_50(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_50(2038531975, iParam3);
									break;
								
								case 1:
									func_50(-572903575, iParam3);
									break;
								
								case 2:
									func_50(-953947924, iParam3);
									break;
							}
							if (func_21(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_50(-445823242, iParam3);
									break;
								
								case 1:
									func_50(-1386757215, iParam3);
									break;
								
								case 2:
									func_50(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_50(-1744069936, iParam3);
									break;
								
								case 1:
									func_50(799609312, iParam3);
									break;
								
								case 2:
									func_50(181688102, iParam3);
									break;
							}
							func_20(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_41(95, iParam3);
					break;
				
				case 1:
					func_41(97, iParam3);
					break;
				
				case 2:
					func_41(96, iParam3);
					break;
			}
			func_41(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_16(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_16(iVar1);
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
					func_50(-330339780, iParam3);
					break;
				
				case 1:
					func_50(1697564429, iParam3);
					break;
				
				case 2:
					func_50(1674823841, iParam3);
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
	func_15(iParam0);
	if (Global_41431 == 15)
	{
		func_14(0);
	}
	return 1;
}

void func_14(bool bParam0)
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

void func_15(int iParam0)
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

void func_16(int iParam0)
{
	if (iParam0 == 8)
	{
		func_19(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_19(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_19(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_19(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_4(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_4(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_4(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_4(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_4(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_4(8274, 0, -1, 1, 0);
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
	else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_18()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_18()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UI::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_17(iParam0));
		UI::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_17(int iParam0)
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

int func_18()
{
	iVar0 = 0;
	return iVar0;
}

int func_19(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
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

void func_20(int iParam0)
{
	func_41(93, iParam0);
	func_41(29, iParam0);
	func_41(30, iParam0);
}

bool func_21(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_22(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_22(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_22(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_22(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_GET_POSIX_TIME();
		iVar1 = func_7(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_GET_POSIX_TIME();
		iVar3 = func_7(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_GET_POSIX_TIME();
		iVar5 = func_7(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_GET_POSIX_TIME();
		iVar7 = func_7(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_GET_POSIX_TIME();
		iVar9 = func_7(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_GET_POSIX_TIME();
		iVar11 = func_7(8274, -1, 0);
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
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_18()].f_6174.f_10, iParam0);
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar1 = func_24(iParam0, iParam1);
	uVar2 = func_23(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_23(int iParam0)
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

int func_24(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_6();
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

int func_25(bool bParam0)
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
		func_40(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_26(27, 1);
	return 1;
}

int func_26(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_27(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1)
{
	if (func_39(14) && !func_38(iParam0))
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
	if (func_37(&Global_4270065))
	{
		if (func_35(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_28(&Global_4270065, iParam0))
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

int func_28(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	func_31(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_29(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_29(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_30(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_30(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_31(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_32(uParam0, iVar0);
		iVar0++;
	}
	func_33(uParam0, (Global_4270064 - 0.5f));
}

void func_32(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_33(var uParam0, float fParam1)
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

float func_34(var uParam0)
{
	return uParam0->f_80;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1) != -1;
}

int func_36(var uParam0, int iParam1)
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

bool func_37(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_38(int iParam0)
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

bool func_39(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_40(int iParam0, int iParam1)
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

void func_41(int iParam0, int iParam1)
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

void func_42()
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

int func_43(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_44()
{
	func_45();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_45()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_48(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_47(PLAYER::PLAYER_PED_ID());
			if (func_46(iVar0) && (!func_39(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_46(Global_111638.f_2358.f_539.f_4321))
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

bool func_46(int iParam0)
{
	return iParam0 < 3;
}

int func_47(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_46(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)
{
	return Global_1798[iParam0];
}

void func_50(int iParam0, int iParam1)
{
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_51()
{
	if (iLocal_49 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_117[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[0], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_117[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_117[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[1], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_117[1]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_121[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[0], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_121[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_121[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[1], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_121[1]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[2]))
		{
			if (!PED::IS_PED_INJURED(iLocal_121[2]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_121[2], -820.424f, -181.9059f, 36.5687f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_121[2], 167.7909f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[2], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_121[2]));
			}
		}
	}
}

void func_52()
{
	Global_19671 = 0;
	func_53();
}

void func_53()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

void func_54()
{
	if (iLocal_49 == 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f, 8f, 8f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -823.1281f, -187.9591f, 36.6189f, 8f, 8f, 8f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -831.9709f, -192.0823f, 36.5008f, 0, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1084227584);
			}
		}
		GAMEPLAY::CLEAR_AREA(-823.1281f, -187.9591f, 36.6189f, 3f, 1, 0, 0, 0);
	}
	else if (iLocal_49 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f, 8f, 8f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1201.017f, -777.5527f, 16.3398f, 8f, 8f, 8f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1205.936f, -781.2014f, 16.0088f, 0, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1084227584);
			}
		}
		GAMEPLAY::CLEAR_AREA(-1201.017f, -777.5527f, 16.3398f, 8f, 1, 0, 0, 0);
	}
}

void func_55()
{
	while (!func_74())
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1, 0);
	func_59(5, iLocal_134);
	func_56();
	func_236();
}

void func_56()
{
	func_57();
}

int func_57()
{
	if (func_58(0))
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

bool func_58(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

void func_59(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_71(iParam0))
	{
		func_70(iParam0, iParam1);
		if (!func_69(51))
		{
			func_65("RE_REWARD", 1, 0, 4000, 10000, func_68(), 0, 138, 0);
			func_64(51);
		}
		if (func_63(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_62(iParam0, iParam1) != 322)
		{
			func_60(func_62(iParam0, iParam1), Local_43.x, Local_43.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_75(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_75(7);
			}
			else
			{
				func_75(1);
			}
		}
	}
}

void func_60(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_19((891 + iParam0), 1, -1, 1);
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
		func_61();
	}
}

void func_61()
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
		func_40(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_9() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_57();
				}
			}
		}
	}
}

int func_62(int iParam0, int iParam1)
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

int func_63(int iParam0)
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

void func_64(int iParam0)
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

void func_65(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_66(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_66(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_67();
	}
}

void func_67()
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

int func_68()
{
	func_45();
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

int func_69(int iParam0)
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

void func_70(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_71(int iParam0)
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

int func_72()
{
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_73(Var0);
	return uVar16;
}

int func_73(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_74()
{
	return 1;
}

void func_75(int iParam0)
{
	Global_111624 = iParam0;
}

void func_76(int iParam0, int iParam1)
{
	if (iParam0 != 226)
	{
		if (Global_76622)
		{
			iVar0 = Global_2439138.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_111638.f_7256[iParam0];
		}
		if (iVar0 != iParam1 || GAMEPLAY::IS_BIT_SET(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				GAMEPLAY::SET_BIT(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
				Global_37690[iParam0] = iParam1;
			}
			else if (Global_76622)
			{
				Global_2439138.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_111638.f_7256[iParam0] = iParam1;
			}
			GAMEPLAY::SET_BIT(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			func_78(iParam0);
			if (GAMEPLAY::IS_BIT_SET(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_77(iParam0);
			}
		}
	}
}

void func_77(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		GAMEPLAY::SET_BIT(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_78(int iParam0)
{
	if (!func_98())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_97(iParam0) };
	if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 2))
	{
		func_83(iParam0, &Var0);
	}
	if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((GAMEPLAY::IS_BIT_SET(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] == 2) && fVar10 > 210f)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
		Global_37236[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1832807115) == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_37463[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98796.f_343 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						Global_98796.f_343 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_98796.f_343;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					GAMEPLAY::SET_BIT(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
					Global_37690[iParam0] = 3;
					GAMEPLAY::SET_BIT(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			GAMEPLAY::CLEAR_BIT(&(Global_37463[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_37227[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37690[iParam0];
	}
	else if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_111638.f_9080)
		{
			iVar9 = func_80(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(92439941) == 0)
	{
		if (func_79())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_111638.f_7256[iParam0];
	}
	if (Global_37917[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_37227[(iParam0 / 32)], (iParam0 % 32)) || (Global_37236[iParam0] == 0 && Global_37690[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37217)
		{
		}
		else
		{
			if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || GAMEPLAY::ABSF(OBJECT::_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			Global_37917[iParam0] = iVar9;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] != 2)
	{
		GAMEPLAY::SET_BIT(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
		func_77(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

int func_79()
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	switch (func_44())
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_111638.f_9080.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_80(int iParam0)
{
	iVar0 = func_44();
	if (func_81(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[5], 0) || GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[6], 0))
			{
				return 0;
			}
		}
		if (func_46(iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_93771[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[0], 0))
				{
					return 0;
				}
			}
			if (func_46(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_93771[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[5], 0))
				{
					return 0;
				}
			}
			if (func_46(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_93771[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[6], 0))
				{
					return 0;
				}
			}
			if (func_46(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_93771[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[2], 0))
				{
					return 0;
				}
				if (func_46(iVar0))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_93771[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[1], 0))
				{
					return 0;
				}
				if (func_46(iVar0))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_93771[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[3], 0))
				{
					return 0;
				}
			}
			if (func_46(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_93771[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_81(int iParam0)
{
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_82(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)));
				switch (iVar0)
				{
					case 516990260:
					case -845961253:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

var func_82(var uParam0)
{
	return uParam0;
}

void func_83(int iParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	uVar0 = func_86();
	iVar1 = func_85(uVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_84(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_84(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_84(iParam0))
			{
				if ((SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1139079984) == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(478649282) == 0) && !Global_111638.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111638.f_7256[iParam0] = 0;
							OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_111638.f_9080.f_99.f_58[4])
				{
					Global_111638.f_7256[iParam0] = 0;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (Global_111638.f_9080.f_99.f_58[4])
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			else if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1139079984) == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(478649282) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_84(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111638.f_7256[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_84(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1802680602) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1802680602) > 0)
			{
				Global_111638.f_7256[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[70].f_6) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1723330028) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_84(iParam0) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[26].f_6) == 0)
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_84(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[43].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_84(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[93].f_6) > 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_84(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[8].f_6) == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[10].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_84(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[47].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[70].f_6) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[48].f_6) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_89532[39].f_6) == 0)
			{
				if (!func_84(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_84(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_111638.f_7256[iParam0], 1, 1);
			}
			break;
	}
}

bool func_84(int iParam0)
{
	Var0 = { func_97(iParam0) };
	iVar7 = OBJECT::_0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_85(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_86()
{
	func_96(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_95(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_94(&uVar0, TIME::GET_CLOCK_HOURS());
	func_89(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_88(&uVar0, TIME::GET_CLOCK_MONTH());
	func_87(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_87(var uParam0, int iParam1)
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

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_89(var uParam0, int iParam1)
{
	iVar0 = func_93(*uParam0);
	iVar1 = func_91(*uParam0);
	if (iParam1 < 1 || iParam1 > func_90(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_90(int iParam0, int iParam1)
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

int func_91(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_92(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_92(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_93(int iParam0)
{
	return iParam0 & 15;
}

void func_94(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_95(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_96(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = -1844444717;
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = -1844444717;
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = -1844444717;
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = -1844444717;
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = -1844444717;
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = -1844444717;
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = -1663512092;
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = 145369505;
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = 868499217;
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = -1148826190;
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = 868499217;
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = -1148826190;
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = 868499217;
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = -1148826190;
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = 868499217;
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = -1148826190;
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = 868499217;
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = -1148826190;
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = 868499217;
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = -1148826190;
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = 868499217;
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = -1148826190;
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = 1780022985;
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = 1780022985;
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = 1780022985;
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = 1780022985;
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = -1922281023;
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = -1922281023;
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = -1922281023;
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = -1922281023;
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = -1922281023;
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = -1922281023;
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = 543652229;
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = 543652229;
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = 543652229;
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = 543652229;
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = 159994461;
			Var0 = { -817f, 179f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = -1686014385;
			Var0 = { -816f, 178f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = 30769481;
			Var0 = { -815f, 186f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = -1454760130;
			Var0 = { -797f, 177f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = 1245831483;
			Var0 = { -795f, 178f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = -1454760130;
			Var0 = { -793f, 181f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = 1245831483;
			Var0 = { -794f, 183f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = -1568354151;
			Var0 = { -849f, 179f, 70f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = 1019527301;
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = 520341586;
			Var0 = { -14f, -1441f, 31f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = 1413743677;
			Var0 = { -15f, -1427f, 31f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = 703855057;
			Var0 = { -25.28f, -1431.06f, 30.84f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = 308207762;
			Var0 = { 7.52f, 539.53f, 176.18f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = 132154435;
			Var0 = { 1973f, 3815f, 34f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = 67910261;
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = -607040053;
			Var0 = { -1150f, -1521f, 11f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = -550347177;
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = 270330101;
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = -550347177;
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = -822900180;
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = -822900180;
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = -822900180;
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = -822900180;
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = 486670049;
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = 245182344;
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = -681066206;
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = 551491569;
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = 933053701;
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = 426403179;
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = 1173348778;
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = -1428622127;
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = -1428622127;
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = -1428622127;
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = -353187150;
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = -1666470363;
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = 1145337974;
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = -1647153464;
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = -1647153464;
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = -2069558801;
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = -190780785;
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = -664582244;
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = -1116041313;
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = 668467214;
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = -1306074314;
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = -1375589668;
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = -1375589668;
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = -1032171637;
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = -52575179;
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = 338220432;
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = 1075555701;
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = -1032171637;
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = -52575179;
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = -1032171637;
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = -52575179;
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = -1652821467;
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = 1013329911;
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = -502195954;
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = -2051651622;
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = 464151082;
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = -1081024910;
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = -1081024910;
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = 1099436502;
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = -1627599682;
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = 1099436502;
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = -1627599682;
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = 1173348778;
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = -2045308299;
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = -42303174;
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = 913904359;
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = -495720969;
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = 668467214;
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = 1342464176;
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = 1436076651;
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = 1413743677;
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = -815851463;
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = -684382235;
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = 1378348636;
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = -2076287065;
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = -374527357;
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = -1517873911;
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = -90456267;
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = -1207991715;
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = -1207991715;
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = -566611162;
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = -551602996;
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = 1104171198;
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = -1425071302;
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = -1679881977;
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = -1045015371;
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = -1033001619;
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = -1023447729;
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = 73386408;
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = -1152174184;
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = 993120320;
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = 993120320;
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = 1425919976;
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = 9467943;
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = 1956494919;
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = -1501157055;
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = -1501157055;
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = -1765048490;
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = -403433025;
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = 1308911070;
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = -403433025;
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = 1308911070;
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = -403433025;
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = 1308911070;
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = -582278602;
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = 1343686600;
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = -26664553;
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = 914592203;
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = 97297972;
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = -8873588;
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = 97297972;
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = -8873588;
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = 97297972;
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = -8873588;
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = 97297972;
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = -8873588;
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = 97297972;
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = -8873588;
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = 97297972;
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = -8873588;
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = 97297972;
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = -8873588;
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = 97297972;
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = -8873588;
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = 97297972;
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = -8873588;
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = 97297972;
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = -8873588;
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = 97297972;
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = -8873588;
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = 452874391;
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = 452874391;
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = 546378757;
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = -1249591818;
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = 546378757;
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = -1249591818;
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = 1878909644;
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = 1709395619;
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = -1184592117;
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = -1156020871;
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = 2059227086;
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = 1417577297;
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = 2059227086;
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = 1417577297;
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = -1428622127;
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = 73386408;
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = -1152174184;
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = 73386408;
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = -1152174184;
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = 1755793225;
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = 239858268;
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = 1742849246;
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = -44475594;
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = 1183182250;
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = -44475594;
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = 1183182250;
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = -44475594;
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = 1183182250;
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = -44475594;
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = 1183182250;
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = -982531572;
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = -1049302886;
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = 1653418708;
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = 650392296;
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = -267139712;
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = 650392296;
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = -267139712;
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = 1127922797;
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = 73386408;
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = -1152174184;
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = -1468417022;
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_98()
{
	if ((func_9() == -1 || func_9() == 999) && !func_99() == 0)
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	return Global_30769;
}

void func_100(var uParam0, var uParam1)
{
	if (*uParam1 == -99)
	{
		*uParam1 = GAMEPLAY::GET_GAME_TIMER();
	}
	if (UI::DOES_BLIP_EXIST(uParam0))
	{
		iVar0 = (GAMEPLAY::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (UI::GET_BLIP_ALPHA(uParam0) != 255)
				{
					UI::SET_BLIP_ALPHA(uParam0, 255);
				}
			}
			else if (UI::GET_BLIP_ALPHA(uParam0) != 0)
			{
				UI::SET_BLIP_ALPHA(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (UI::GET_BLIP_ALPHA(uParam0) != 255)
			{
				UI::SET_BLIP_ALPHA(uParam0, 255);
			}
		}
	}
}

void func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_102(func_103(iParam0), -1);
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
					func_102(func_103(iParam0), -1);
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
					func_102(func_103(iParam0), -1);
					Global_111638.f_24990.f_4++;
					GAMEPLAY::SET_BIT(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_103(int iParam0)
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

void func_104()
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_110))
	{
		func_50(-1162787256, 1);
		if (!PED::IS_PED_INJURED(iLocal_117[0]))
		{
			uLocal_193 = func_171(iLocal_117[0], 0, 145);
		}
		func_105(&uLocal_229);
		fLocal_197 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_250());
		SYSTEM::SETTIMERA(0);
		iLocal_47 = 10;
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_110))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_110)) > 200f)
		{
			func_162();
		}
	}
}

void func_105(var uParam0)
{
	*uParam0 = -99;
}

void func_106(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_107()
{
	if (!OBJECT::DOES_PICKUP_EXIST(uLocal_110))
	{
		GAMEPLAY::SET_BIT(&uLocal_106, 3);
		GAMEPLAY::SET_BIT(&uLocal_106, 4);
		GAMEPLAY::SET_BIT(&uLocal_106, 1);
		if (!bLocal_161)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_114[0], 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[0]))
				{
					Local_107 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_114[0], 1067030938, 1069547520) };
				}
			}
			else
			{
				Local_107 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_114[0], 1), 1067030938, 1069547520) };
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
		{
			Local_107 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_175, 0), 1067030938, 1069547520) };
		}
		Local_107 = { Local_107.x, Local_107.y, (Local_107.z + 0.25f) };
		uLocal_110 = OBJECT::CREATE_PICKUP(341217064, Local_107, uLocal_106, iLocal_189, 1, 1666748342);
		uLocal_192 = func_108(uLocal_110);
		if (iLocal_49 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_111 - 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_114[iVar0]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_114[iVar0], 1, 1);
					AI::CLEAR_PED_TASKS(iLocal_114[iVar0]);
					AI::OPEN_SEQUENCE_TASK(&uLocal_152);
					AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					AI::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					AI::CLOSE_SEQUENCE_TASK(uLocal_152);
					AI::TASK_PERFORM_SEQUENCE(iLocal_114[iVar0], uLocal_152);
					AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
					PED::SET_PED_KEEP_TASK(iLocal_114[iVar0], 1);
				}
				iVar0++;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_114[0]))
			{
				AI::CLEAR_PED_SECONDARY_TASK(iLocal_114[0]);
				if (!AI::IS_PED_IN_WRITHE(iLocal_114[0]))
				{
					func_52();
					SYSTEM::WAIT(0);
					func_118(&uLocal_232, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_108(var uParam0)
{
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = UI::ADD_BLIP_FOR_PICKUP(uParam0);
	UI::SET_BLIP_SCALE(uVar0, func_109(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return uVar0;
}

float func_109(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_110()
{
	if (UI::DOES_BLIP_EXIST(uLocal_192))
	{
		UI::REMOVE_BLIP(&uLocal_192);
	}
	if (UI::DOES_BLIP_EXIST(uLocal_193))
	{
		UI::REMOVE_BLIP(&uLocal_193);
	}
	if (UI::DOES_BLIP_EXIST(uLocal_191))
	{
		UI::REMOVE_BLIP(&uLocal_191);
	}
	if (UI::DOES_BLIP_EXIST(uLocal_185[0]))
	{
		UI::REMOVE_BLIP(&(uLocal_185[0]));
	}
	if (UI::DOES_BLIP_EXIST(uLocal_185[1]))
	{
		UI::REMOVE_BLIP(&(uLocal_185[1]));
	}
}

int func_111()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[0]))
	{
		iLocal_149 = 1;
	}
	else if (PED::IS_PED_INJURED(iLocal_114[0]))
	{
		iLocal_149 = 1;
	}
	if (!bLocal_161)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114[1]))
		{
			iLocal_150 = 1;
		}
		else if (PED::IS_PED_INJURED(iLocal_114[1]))
		{
			iLocal_150 = 1;
		}
	}
	else
	{
		iLocal_150 = 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_184))
	{
		iLocal_151 = 1;
	}
	else if (PED::IS_PED_INJURED(iLocal_184) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_184, 0))
	{
		iLocal_151 = 1;
	}
	if ((iLocal_149 && iLocal_150) || iLocal_151)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_114[iVar0]) || ENTITY::IS_ENTITY_DEAD(iLocal_114[iVar0], 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_114[iVar0]))
			{
				if (PED::IS_PED_BEING_JACKED(iLocal_114[iVar0]))
				{
					if (PED::GET_PEDS_JACKER(iLocal_114[iVar0]) == PLAYER::PLAYER_PED_ID())
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_114[iVar0], 1, 1);
						AI::TASK_SMART_FLEE_PED(iLocal_114[iVar0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_114[iVar0], 1);
						SYSTEM::WAIT(0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_114[iVar0]));
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
	{
		if (!PED::IS_PED_INJURED(iLocal_184) || ENTITY::IS_ENTITY_DEAD(iLocal_184, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_184, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_184))
		{
			if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 911657153))
			{
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
	{
		if (!PED::IS_PED_INJURED(iLocal_184))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_184))
			{
				if (PED::GET_PEDS_JACKER(iLocal_184) == PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_184, 1, 1);
					AI::TASK_SMART_FLEE_PED(iLocal_184, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_184, 1);
					SYSTEM::WAIT(0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_184);
					return 1;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_175, 0) || ENTITY::IS_ENTITY_DEAD(iLocal_175, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_175, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_113(int iParam0, bool bParam1, bool bParam2)
{
	return func_114(iParam0, !bParam1, bParam2);
}

int func_114(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = UI::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_109(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		UI::SET_BLIP_SCALE(uVar0, func_109(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		UI::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_109(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_115()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_114[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_114[0], iLocal_175, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_114[1]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_114[1], iLocal_175, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_116()
{
	if (PED::IS_PED_INJURED(iLocal_114[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_167))
			{
				ENTITY::DETACH_ENTITY(iLocal_167, 1, 1);
			}
			OBJECT::DELETE_OBJECT(&iLocal_167);
			func_110();
			func_107();
			iLocal_47 = 9;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[0], PLAYER::PLAYER_PED_ID(), 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_167))
			{
				ENTITY::DETACH_ENTITY(iLocal_167, 1, 1);
			}
			OBJECT::DELETE_OBJECT(&iLocal_167);
			func_110();
			func_107();
			iLocal_47 = 9;
		}
	}
}

int func_117(int iParam0)
{
	iVar0 = (CONTROLS::GET_CONTROL_VALUE(2, 195) - 128);
	iVar1 = (CONTROLS::GET_CONTROL_VALUE(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_118(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_133(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_119(sParam2, iParam3, 0);
}

int func_119(char* sParam0, int iParam1, bool bParam2)
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
					func_132();
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
		if (func_131(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_130();
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
				func_129();
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
				if (func_128())
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
			if (func_127())
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
			func_126();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_125();
		func_120();
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
		func_132();
	}
	return 0;
}

void func_120()
{
	if (!func_121())
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

int func_121()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_124())
	{
		return 0;
	}
	if (func_122(PLAYER::PLAYER_ID()))
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

bool func_122(int iParam0)
{
	return func_123(iParam0, 20);
}

bool func_123(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_124()
{
	return -1;
}

void func_125()
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

void func_126()
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

int func_127()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_128()
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

void func_129()
{
	if (func_39(14))
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
		Global_19486 = func_44();
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

void func_130()
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

bool func_131(int iParam0, int iParam1)
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

void func_132()
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

void func_133(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
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

int func_134()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_135(bool bParam0)
{
	if (bParam0)
	{
		func_141();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_140(0))
		{
			func_136(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_136(int iParam0)
{
	if (func_139())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_138())
		{
			func_137(1, 1);
		}
		else
		{
			func_137(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_127())
	{
		Global_19486.f_1 = 3;
	}
}

void func_137(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_140(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_138()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_139()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

int func_140(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
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
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_141()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_142(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_149(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_127())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_148(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_149(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_148(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_146(PLAYER::PLAYER_ID())) && !func_144(PLAYER::PLAYER_ID(), 0)) && !func_143()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_146(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_143()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_144(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_145(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_145(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_146(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return 1;
	}
	if (func_147())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_147()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_148(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_149(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 13);
	}
}

int func_150()
{
	if (!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1]))
	{
		if (iLocal_49 == 1)
		{
			if (!iLocal_165)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_114[0], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_165 = 1;
				}
			}
			if (!iLocal_166)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_114[1], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_166 = 1;
				}
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!iLocal_165)
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_114[0], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_114[0], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_114[0], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					AI::TASK_SMART_FLEE_PED(iLocal_114[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					iLocal_165 = 1;
				}
			}
			if (!iLocal_166)
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_114[1], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_114[1], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_114[1], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					AI::TASK_SMART_FLEE_PED(iLocal_114[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					iLocal_166 = 1;
				}
			}
		}
	}
	if (iLocal_165 && iLocal_166)
	{
		return 1;
	}
	return 0;
}

void func_151()
{
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_167, 1) };
	Var3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_167, 2) };
	OBJECT::DELETE_OBJECT(&iLocal_167);
	iLocal_167 = OBJECT::CREATE_OBJECT(1666748342, Var0, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_167, Var3, 2, 1);
}

void func_152()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[0]))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_114[0], 0)) > 200f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_114[0]))
		{
			if (UI::DOES_BLIP_EXIST(uLocal_185[0]))
			{
				UI::REMOVE_BLIP(&(uLocal_185[0]));
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_114[0]));
			bLocal_147 = true;
		}
	}
	else
	{
		bLocal_147 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_175, 0)) > 200f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_175))
		{
			if (UI::DOES_BLIP_EXIST(uLocal_191))
			{
				UI::REMOVE_BLIP(&uLocal_191);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_175);
			bLocal_148 = true;
		}
	}
	else
	{
		bLocal_148 = true;
	}
	if (bLocal_161)
	{
		if (bLocal_148)
		{
			if (func_170())
			{
				iLocal_47 = 13;
			}
			else
			{
				SYSTEM::WAIT(0);
				iLocal_46 = 2;
			}
		}
	}
	else if (bLocal_147)
	{
		SYSTEM::WAIT(0);
		if (func_170())
		{
			iLocal_47 = 13;
		}
		else
		{
			iLocal_46 = 2;
		}
	}
}

void func_153()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_175, 0))
	{
		if (ENTITY::GET_ENTITY_HEALTH(iLocal_175) < 800)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_175, 0, 0);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_175, 10f);
		}
	}
}

void func_154()
{
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_114[iVar0]))
			{
				if (UI::DOES_BLIP_EXIST(uLocal_185[iVar0]))
				{
					UI::REMOVE_BLIP(&(uLocal_185[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_155()
{
	if (iLocal_49 == 1)
	{
		if (PED::IS_PED_INJURED(iLocal_114[0]) && PED::IS_PED_INJURED(iLocal_114[1]))
		{
			iLocal_47 = 7;
		}
	}
	else if (iLocal_49 == 2)
	{
		if (PED::IS_PED_INJURED(iLocal_114[0]) && PED::IS_PED_INJURED(iLocal_114[1]))
		{
			iLocal_47 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_114)
	{
		if (PED::IS_PED_INJURED(iLocal_114[iVar0]))
		{
			if (UI::DOES_BLIP_EXIST(uLocal_185[iVar0]))
			{
				UI::REMOVE_BLIP(&(uLocal_185[iVar0]));
			}
		}
		iVar0++;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_140)
		{
			iVar1 = 0;
			while (iVar1 <= (iLocal_111 - 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_114[iVar1]))
				{
					AI::TASK_COMBAT_PED(iLocal_114[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iVar1++;
			}
			bLocal_140 = true;
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_167))
			{
				iLocal_47 = 5;
			}
		}
	}
	if (!iLocal_154 && !bLocal_140)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE51A_SHOP");
		func_52();
		SYSTEM::WAIT(0);
		if (iLocal_49 == 1)
		{
			if (func_118(&uLocal_232, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				iLocal_154 = 1;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (func_118(&uLocal_232, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				iLocal_154 = 1;
			}
		}
	}
	if ((iLocal_154 && !iLocal_155) && !bLocal_140)
	{
		if (!func_134())
		{
			if (func_44() == 0)
			{
				func_118(&uLocal_232, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (func_44() == 1)
			{
				func_118(&uLocal_232, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (func_44() == 2)
			{
				func_118(&uLocal_232, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			iLocal_155 = 1;
		}
	}
	if (!bLocal_140)
	{
		if (!func_134())
		{
			if (iLocal_155 && !iLocal_156)
			{
				if (iLocal_49 == 1)
				{
					if (func_173(&uLocal_232, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						iLocal_156 = 1;
					}
				}
				else if (iLocal_49 == 2)
				{
					if (func_173(&uLocal_232, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						iLocal_156 = 1;
					}
				}
			}
		}
		if (iLocal_49 == 1)
		{
			if (!func_134())
			{
				if (!iLocal_157)
				{
					if (iLocal_49 == 1)
					{
						func_118(&uLocal_232, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_49 == 2)
					{
						func_118(&uLocal_232, "REROBAU", "REROB_LV", 4, 0, 0, 0);
					}
					iLocal_157 = 1;
				}
			}
		}
		else if (iLocal_49 == 2)
		{
			if (SYSTEM::TIMERA() > 4000)
			{
				if (!iLocal_157)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
					{
						if (!PED::IS_PED_INJURED(iLocal_117[0]))
						{
							iLocal_157 = 1;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_167) && !PED::IS_PED_INJURED(iLocal_114[0]))
			{
				if (!iLocal_178)
				{
					iLocal_178 = 1;
				}
			}
		}
		if (!iLocal_138)
		{
			if (iLocal_49 == 1)
			{
				if (SYSTEM::TIMERA() > 14100)
				{
					OBJECT::DELETE_OBJECT(&(uLocal_168[0]));
					OBJECT::DELETE_OBJECT(&(uLocal_168[1]));
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_114[0]))
						{
							AI::CLEAR_PED_TASKS(iLocal_114[0]);
							AI::OPEN_SEQUENCE_TASK(&uLocal_152);
							AI::TASK_CLEAR_LOOK_AT(0);
							AI::TASK_ENTER_VEHICLE(0, iLocal_175, -1, 0, 2f, 1, 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_152);
							AI::TASK_PERFORM_SEQUENCE(iLocal_114[0], uLocal_152);
							AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
						}
						if (!PED::IS_PED_INJURED(iLocal_114[1]))
						{
							PED::FORCE_PED_MOTION_STATE(iLocal_114[1], -530524, 1, 0, 0);
							AI::OPEN_SEQUENCE_TASK(&uLocal_152);
							AI::TASK_CLEAR_LOOK_AT(0);
							AI::TASK_ENTER_VEHICLE(0, iLocal_175, -1, 1, 2f, 1, 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_152);
							AI::TASK_PERFORM_SEQUENCE(iLocal_114[1], uLocal_152);
							AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
						}
						iLocal_47 = 2;
						iLocal_138 = 1;
					}
					else
					{
						if (!PED::IS_PED_INJURED(iLocal_114[0]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_114[0], 1, 1);
							AI::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_114[0]);
							AI::OPEN_SEQUENCE_TASK(&uLocal_152);
							AI::TASK_CLEAR_LOOK_AT(0);
							AI::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_152);
							AI::TASK_PERFORM_SEQUENCE(iLocal_114[0], uLocal_152);
							AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
						}
						if (!PED::IS_PED_INJURED(iLocal_114[1]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_114[1], 1, 1);
							AI::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_114[1]);
							AI::OPEN_SEQUENCE_TASK(&uLocal_152);
							AI::TASK_CLEAR_LOOK_AT(0);
							AI::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_152);
							AI::TASK_PERFORM_SEQUENCE(iLocal_114[1], uLocal_152);
							AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
						}
						iLocal_47 = 2;
						iLocal_138 = 1;
					}
				}
			}
			else if (iLocal_49 == 2)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_216) > 0.453f)
				{
					if (!PED::IS_PED_INJURED(iLocal_117[0]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[0], 1);
						AI::OPEN_SEQUENCE_TASK(&uLocal_152);
						AI::TASK_PLAY_ANIM(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
						AI::CLOSE_SEQUENCE_TASK(uLocal_152);
						AI::TASK_PERFORM_SEQUENCE(iLocal_117[0], uLocal_152);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
						PED::SET_PED_KEEP_TASK(iLocal_117[0], 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_114[0]))
					{
						AI::CLEAR_PED_TASKS(iLocal_114[0]);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_114[0], 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_114[0], 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_114[0], 17, 1);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_114[0], 1.6f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_114[0], 1, 1);
						AI::OPEN_SEQUENCE_TASK(&uLocal_152);
						AI::TASK_PLAY_ANIM(0, "random@robbery", "run", 2f, -2f, -1, 49, 0f, 0, 0, 0);
						AI::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_shoprobbery", 0, 0, 16);
						AI::TASK_CLEAR_LOOK_AT(0);
						AI::CLOSE_SEQUENCE_TASK(uLocal_152);
						AI::TASK_PERFORM_SEQUENCE(iLocal_114[0], uLocal_152);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
						PED::SET_PED_KEEP_TASK(iLocal_114[0], 1);
						SYSTEM::SETTIMERB(0);
					}
					if (!PED::IS_PED_INJURED(iLocal_114[1]))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_114[1], 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_114[1], 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_114[1], 17, 1);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_114[1], 1.6f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_114[1], 1, 1);
						AI::OPEN_SEQUENCE_TASK(&uLocal_152);
						AI::TASK_CLEAR_LOOK_AT(0);
						AI::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_shoprobbery2", 0, 0, 17);
						AI::CLOSE_SEQUENCE_TASK(uLocal_152);
						AI::TASK_PERFORM_SEQUENCE(iLocal_114[1], uLocal_152);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
						PED::SET_PED_KEEP_TASK(iLocal_114[1], 1);
					}
					iLocal_47 = 2;
					iLocal_138 = 1;
				}
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
	}
}

void func_156()
{
	switch (iLocal_227)
	{
		case 0:
			func_142(1, 1, 1, 0, 0, 0);
			GAMEPLAY::CLEAR_AREA_OF_PEDS(func_157(PLAYER::PLAYER_ID()), 10f, 0);
			uLocal_226 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
			CAM::SET_CAM_ACTIVE(uLocal_226, 1);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_226, uLocal_216, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_49 == 1)
			{
				INTERIOR::_0xAF348AFCB575A441("Hair_room");
			}
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			iLocal_228 = GAMEPLAY::GET_GAME_TIMER() + 3500;
			iLocal_227++;
			break;
		
		case 1:
			if (iLocal_228 < GAMEPLAY::GET_GAME_TIMER())
			{
				if (iLocal_49 == 1)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(115f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.1222f, 1065353216);
				}
				else if (iLocal_49 == 2)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(44.5236f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-18.1582f, 1065353216);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				CAM::SET_CAM_ACTIVE(uLocal_226, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				func_54();
				func_142(0, 1, 1, 0, 0, 0);
				iLocal_227++;
			}
			break;
		
		case 2:
			break;
	}
}

Vector3 func_157(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_158()
{
	if (!iLocal_136 && func_161(1, 0, 1))
	{
		if (UI::DOES_BLIP_EXIST(uLocal_193))
		{
			UI::REMOVE_BLIP(&uLocal_193);
		}
		func_142(1, 1, 1, 0, 0, 0);
		UI::CLEAR_HELP(1);
		UI::DISPLAY_HUD(0);
		UI::DISPLAY_RADAR(0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
		if (iLocal_49 == 1)
		{
			if (!iLocal_177)
			{
				uLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(Local_201, Local_207, 2);
				AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_216, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1148846080, 0);
				PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 1, 0);
				if (((!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1])) && !PED::IS_PED_INJURED(iLocal_117[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_167))
				{
					AI::TASK_SYNCHRONIZED_SCENE(iLocal_114[0], uLocal_216, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1148846080, 0);
					AI::TASK_SYNCHRONIZED_SCENE(iLocal_114[1], uLocal_216, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1148846080, 0);
					AI::TASK_SYNCHRONIZED_SCENE(iLocal_117[0], uLocal_216, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_167, uLocal_216, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1148846080);
				}
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_216, 0.06f);
				iLocal_177 = 1;
			}
		}
		else if (iLocal_49 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_117[0]))
			{
				AI::CLEAR_PED_TASKS(iLocal_117[0]);
				AI::TASK_PLAY_ANIM(iLocal_117[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, 0f, 0, 0, 0);
			}
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1195.062f, -773.2098f, 16.324f, 20f, 4);
			uLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(Local_201, Local_207, 2);
			if (((!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1])) && !PED::IS_PED_INJURED(iLocal_117[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_167))
			{
				AI::TASK_SYNCHRONIZED_SCENE(iLocal_114[0], uLocal_216, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1148846080, 0);
				AI::TASK_SYNCHRONIZED_SCENE(iLocal_117[0], uLocal_216, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1148846080, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_168[1]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_168[0], iLocal_117[0], PED::GET_PED_BONE_INDEX(iLocal_117[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_168[1], iLocal_117[0], PED::GET_PED_BONE_INDEX(iLocal_117[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_216, 0.05f);
			Local_201 = { -1199.369f, -776.1991f, 16.3235f };
			Local_207 = { 0f, 0f, -60f };
			uLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(Local_201, Local_207, 2);
			if (!PED::IS_PED_INJURED(iLocal_114[1]))
			{
				AI::TASK_SYNCHRONIZED_SCENE(iLocal_114[1], uLocal_216, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_216, 0.06f);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1200.455f, -777.6201f, 16.3244f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 305.3806f);
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			AI::OPEN_SEQUENCE_TASK(&uLocal_152);
			AI::TASK_PLAY_ANIM(0, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0.06f, 0, 0, 0);
			AI::TASK_PLAY_ANIM(0, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, 0f, 0, 0, 0);
			AI::CLOSE_SEQUENCE_TASK(uLocal_152);
			AI::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_152);
			AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
			PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		iLocal_136 = 1;
	}
	if (!iLocal_176)
	{
		func_159();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_185[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_114[iVar0]))
			{
				uLocal_185[iVar0] = func_171(iLocal_114[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_49 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_175)) || iLocal_49 == 2)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_47 = 1;
	}
}

void func_159()
{
	iVar0 = -808831384;
	if (!iLocal_179)
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_179 = 1;
		}
		else
		{
			STREAMING::REQUEST_MODEL(iVar0);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (func_160())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_171, -828.3692f, -194.4669f, 36.41385f, -824.5801f, -201.1353f, 39.39436f, 4.3125f, 0, 1, 0))
			{
				Local_172 = { -822.1784f, -205.811f, 36.3444f };
			}
			else
			{
				Local_172 = { -826.2828f, -197.8547f, 36.3995f };
			}
		}
		else
		{
			Local_172 = { -826.2828f, -197.8547f, 36.3995f };
		}
		iLocal_175 = VEHICLE::CREATE_VEHICLE(iVar0, Local_172, 31.9252f, 1, 1, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_175, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_175, 1084227584);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_175, 1, 1, 0);
		iLocal_184 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_175, 26, 611648169, -1, 1, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_184, 134, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_184, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_184, iLocal_190);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_184, 8, 0);
		PED::SET_PED_COMBAT_ABILITY(iLocal_184, 0);
		PED::SET_PED_ACCURACY(iLocal_184, 13);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_184, 453432689, -1, 1, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_184, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_184, 42, 1);
		iLocal_176 = 1;
	}
}

int func_160()
{
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iVar0, -829.3693f, -191.9869f, 36.4616f, 15f, 15f, 5f, 0, 1, 0))
		{
			uLocal_171 = iVar0;
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_171))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_171, 1, 0);
			}
			return 1;
		}
	}
	return 0;
}

int func_161(bool bParam0, bool bParam1, bool bParam2)
{
	if (GAMEPLAY::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_162()
{
	func_236();
}

int func_163(int iParam0)
{
	if (func_164())
	{
		Global_111628 = 1;
		Global_111625 = GAMEPLAY::GET_GAME_TIMER();
		if (func_63(Global_111627))
		{
			func_101(0);
		}
		UI::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_63(Global_111627))
		{
			UI::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

int func_164()
{
	switch (func_165(&Global_30827, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_165(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_169(0))
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
		if (!func_167(iParam2))
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
			func_166(uParam0, iParam4);
		}
	}
	return 2;
}

void func_166(var uParam0, int iParam1)
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

bool func_167(int iParam0)
{
	return func_168(iParam0, Global_41431);
}

int func_168(int iParam0, int iParam1)
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

int func_169(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_167(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_170()
{
	if (iLocal_49 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4598f, -175.8135f, 36.28367f, -823.0242f, -187.0462f, 40.53547f, 11.9375f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -823.3706f, -188.0602f, 36.62162f, -822.8361f, -187.7466f, 39.06914f, 1.5f, 0, 1, 0))
		{
			return 1;
		}
	}
	else if (iLocal_49 == 2)
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1203.899f, -776.9178f, 20.16803f, -1201.289f, -780.4698f, 15.61526f, 3.9375f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_171(var uParam0, bool bParam1, int iParam2)
{
	uVar0 = func_114(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && UI::DOES_BLIP_EXIST(uVar0)) && UI::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2].f_3)))
	{
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_1798[iParam2].f_3));
	}
	return uVar0;
}

int func_172()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -823.1281f, -187.9591f, 36.6189f, 12f, 12f, 12f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1201.017f, -777.5527f, 16.3398f, 12f, 12f, 12f, 0, 1, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_114[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (PED::_0x6CD5A433374D4CFB(iLocal_114[0], PLAYER::PLAYER_PED_ID()) || PED::_0x6CD5A433374D4CFB(iLocal_114[1], PLAYER::PLAYER_PED_ID()))
			{
				if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_114[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_114[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_114[1])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_114[1]))
				{
					if (iLocal_126 == -1)
					{
						iLocal_126 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_126 = -1;
				}
				if (iLocal_126 != -1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_126 + 1500)
				{
					return 1;
				}
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_AREA(-1, Local_194 - Vector(20f, 20f, 20f), Local_194 + Vector(20f, 20f, 20f)))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_114[0], 0) || ENTITY::IS_ENTITY_DEAD(iLocal_114[1], 0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_170())
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && func_170())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_114[0]) && !PED::IS_PED_INJURED(iLocal_114[1]))
	{
		if (((PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_114[1], 1) - Vector(12f, 12f, 12f), ENTITY::GET_ENTITY_COORDS(iLocal_114[1], 1) + Vector(12f, 12f, 12f), 0, 1) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) || GAMEPLAY::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_114[0], 1), 3f, 1)) || GAMEPLAY::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_114[1], 1), 3f, 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_117)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_117[iVar0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_121)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_121[iVar0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_173(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_133(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_119(sParam2, iParam4, 0);
}

int func_174()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -823.1281f, -187.9591f, 36.6189f, 4f, 4f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1201.017f, -777.5527f, 16.3398f, 4f, 4f, 4f, 0, 1, 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
		return 1;
	}
	return 0;
}

void func_175()
{
	if (!PED::IS_PED_INJURED(iLocal_117[1]))
	{
		if (PED::IS_PED_MALE(iLocal_117[1]))
		{
			func_176(iLocal_117[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			func_176(iLocal_117[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		AUDIO::PLAY_PAIN(iLocal_117[1], 26, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_121[1]))
	{
		func_176(iLocal_121[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		AUDIO::PLAY_PAIN(iLocal_121[1], 3, 0, 0);
	}
}

void func_176(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(uParam0, sParam1, sParam2, func_177(iParam3), 0);
}

int func_177(int iParam0)
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

void func_178()
{
	PED::SET_CREATE_RANDOM_COPS(0);
	PED::ADD_RELATIONSHIP_GROUP("ROBBERS", &iLocal_190);
	iVar0 = 0;
	while (iVar0 <= (iLocal_111 - 1))
	{
		iLocal_114[iVar0] = PED::CREATE_PED(26, iLocal_222, Local_55[iVar0], fLocal_62[iVar0], 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_114[iVar0], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_114[iVar0], iLocal_190);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_114[iVar0], 8, 0);
		PED::SET_PED_COMBAT_ABILITY(iLocal_114[iVar0], 0);
		PED::SET_PED_ACCURACY(iLocal_114[iVar0], 13);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_114[iVar0], 453432689, -1, 1, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_114[iVar0], 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_114[iVar0], 42, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_114[iVar0], 269, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_114[iVar0], 188, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_114[iVar0], 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_114[iVar0], 128, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_114[iVar0], 8, 1);
		iVar0++;
	}
	PED::SET_PED_NAME_DEBUG(iLocal_114[0], "pedRobber[0]");
	PED::SET_PED_NAME_DEBUG(iLocal_114[1], "pedRobber[1]");
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_190, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_190);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_190, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_190);
	if (func_44() == 0)
	{
		func_183(&uLocal_232, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_183(&uLocal_232, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_183(&uLocal_232, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	iLocal_167 = OBJECT::CREATE_OBJECT(iLocal_188, Local_97, 1, 1, 0);
	if (iLocal_49 == 1)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_128 - Vector(20f, 20f, 20f), Local_128 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(-808831384, 1);
		uLocal_168[0] = OBJECT::CREATE_OBJECT(-1170050911, Local_97, 1, 1, 0);
		uLocal_168[1] = OBJECT::CREATE_OBJECT(-1170050911, Local_97 - Vector(0.1f, 0f, 0f), 1, 1, 0);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_114[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_114[1], "G_M_Y_Korean_01_Korean_MINI_02");
		Local_201 = { -821.565f, -186.467f, 36.6f };
		Local_207 = { 0f, 0f, -59.96f };
		uLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(Local_201, Local_207, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_216, 1);
		AI::TASK_SYNCHRONIZED_SCENE(iLocal_114[1], uLocal_216, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1148846080, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_167, uLocal_216, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 1090519040, 0, 1148846080);
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			iLocal_117[iVar0] = PED::CREATE_PED(26, iLocal_219, Local_65[iVar0], fLocal_75[iVar0], 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_117[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_117[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_117[iVar0], 269, 1);
			iVar0++;
		}
		PED::SET_PED_NAME_DEBUG(iLocal_117[0], "pedWorker[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_117[1], "pedWorker[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_117[2], "pedWorker[2]");
		iLocal_121[0] = PED::CREATE_PED(26, iLocal_220, Local_79[0], fLocal_92[0], 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_121[0], 17, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[0], 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_121[0], 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_121[0], 269, 1);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_121[iVar0] = PED::CREATE_PED(26, iLocal_221, Local_79[iVar0], fLocal_92[iVar0], 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_121[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_121[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_121[iVar0], 269, 1);
			iVar0++;
		}
		PED::SET_PED_NAME_DEBUG(iLocal_121[0], "pedShopper[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_121[1], "pedShopper[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_121[2], "pedShopper[2]");
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[0], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[0], 2, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[0], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[0], 5, 0, 0, 0);
		AI::TASK_SYNCHRONIZED_SCENE(iLocal_117[0], uLocal_216, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1148846080, 0);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_117[0], "A_M_Y_BevHills_01_White_Mini_01");
		func_183(&uLocal_232, 5, iLocal_117[0], "REROBShopworker", 0, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[1], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[1], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[1], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[1], 5, 0, 0, 0);
		AI::TASK_COWER(iLocal_117[1], -1);
		PED::SET_PED_KEEP_TASK(iLocal_117[1], 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[2], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[2], 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[2], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_117[2], 5, 0, 0, 0);
		AI::TASK_COWER(iLocal_117[2], -1);
		PED::SET_PED_KEEP_TASK(iLocal_117[2], 1);
		uLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(-812.37f, -185.65f, 37.5804f, 0f, 0f, 30f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_216, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[0], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[0], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[0], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[0], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[0], 8, 0, 0, 0);
		AI::TASK_SYNCHRONIZED_SCENE(iLocal_121[0], uLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_PED_KEEP_TASK(iLocal_121[0], 1);
		uLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(-817.5606f, -190.8273f, 37.6114f, 0f, 0f, 25.8399f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_216, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[1], 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[1], 4, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[1], 8, 0, 0, 0);
		AI::TASK_SYNCHRONIZED_SCENE(iLocal_121[1], uLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_PED_KEEP_TASK(iLocal_121[1], 1);
		uLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(-816.1862f, -182.897f, 37.68f, 0f, 0f, 30f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_216, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[2], 2, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[2], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[2], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_121[2], 8, 0, 0, 0);
		AI::TASK_SYNCHRONIZED_SCENE(iLocal_121[2], uLocal_216, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_PED_KEEP_TASK(iLocal_121[2], 1);
		AI::TASK_AIM_GUN_AT_ENTITY(iLocal_114[0], iLocal_117[0], -1, 0);
		PATHFIND::SET_ROADS_IN_AREA(-871f, -246f, 0f, -798f, -163f, 50f, 0, 1);
		AI::ASSISTED_MOVEMENT_REQUEST_ROUTE("Hairdresser1");
		func_182(0, 1);
		func_181(0);
		SYSTEM::WAIT(500);
		func_179(0, 0, 0);
	}
	else if (iLocal_49 == 2)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_131 - Vector(20f, 20f, 20f), Local_131 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_167, Local_100, 2, 1);
		iLocal_117[0] = PED::CREATE_PED(26, iLocal_219, Local_65[0], fLocal_75[0], 1, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_117[0], "pedWorker[0]");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_117[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		func_183(&uLocal_232, 6, iLocal_117[0], "REROBShopworker2", 0, 1);
		iLocal_117[1] = PED::CREATE_PED(26, iLocal_218, Local_65[1], fLocal_75[1], 1, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_117[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_117[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_117[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_117[iVar0], 269, 1);
			iVar0++;
		}
		iLocal_121[0] = PED::CREATE_PED(26, iLocal_220, Local_79[0], fLocal_92[0], 1, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_121[0], "pedShopper[0]");
		iLocal_121[1] = PED::CREATE_PED(26, iLocal_221, Local_79[1], fLocal_92[1], 1, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_121[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_113 - 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_121[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_121[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_121[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_121[iVar0], 269, 1);
			iVar0++;
		}
		AI::TASK_PLAY_ANIM(iLocal_117[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_117[0], 1);
		AI::TASK_PLAY_ANIM(iLocal_117[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_117[1], 1);
		AI::TASK_COWER(iLocal_121[0], -1);
		PED::SET_PED_KEEP_TASK(iLocal_121[0], 1);
		AI::TASK_PLAY_ANIM(iLocal_121[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_121[1], 1);
		Local_201 = { -1192.01f, -768.929f, 16.358f };
		Local_207 = { 0f, 0f, -59.5f };
		uLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(Local_201, Local_207, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_216, 1);
		AI::TASK_SYNCHRONIZED_SCENE(iLocal_114[0], uLocal_216, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1148846080, 0);
		AI::TASK_SYNCHRONIZED_SCENE(iLocal_117[0], uLocal_216, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1148846080, 0);
		AI::TASK_PLAY_ANIM(iLocal_114[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, 0f, 0, 0, 0);
		func_182(14, 1);
		func_181(14);
		SYSTEM::WAIT(500);
		func_179(14, 0, 0);
	}
	func_183(&uLocal_232, 3, iLocal_114[0], "REROBRobber1", 0, 1);
	func_183(&uLocal_232, 4, iLocal_114[1], "REROBRobber2", 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1546450936);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1720428295);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(587703123);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(429425116);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(611648169);
}

void func_179(int iParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 3;
		}
	}
	iVar1 = func_180(iParam0, 0);
	if (iVar1 != 226)
	{
		func_76(iVar1, iVar0);
	}
	iVar1 = func_180(iParam0, 1);
	if (iVar1 != 226)
	{
		func_76(iVar1, iVar0);
	}
}

int func_180(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

void func_181(int iParam0)
{
	func_10(iParam0, 9, 1);
}

void func_182(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_11(iParam0, 4, 1))
		{
			func_10(iParam0, 4, 1);
			func_41(137, 1);
		}
	}
	else if (func_11(iParam0, 4, 1))
	{
		func_3(iParam0, 4, 1);
	}
}

void func_183(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_184()
{
	if (!iLocal_135)
	{
		iLocal_153 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_55[0]);
		INTERIOR::_LOAD_INTERIOR(iLocal_153);
		iLocal_135 = 1;
	}
}

void func_185()
{
	STREAMING::REQUEST_MODEL(iLocal_219);
	STREAMING::REQUEST_MODEL(iLocal_220);
	STREAMING::REQUEST_MODEL(iLocal_221);
	STREAMING::REQUEST_MODEL(iLocal_222);
	STREAMING::REQUEST_MODEL(-1170050911);
	STREAMING::REQUEST_MODEL(1666748342);
	AI::REQUEST_WAYPOINT_RECORDING("re_shoprobbery");
	AI::REQUEST_WAYPOINT_RECORDING("re_shoprobbery2");
	STREAMING::REQUEST_ANIM_DICT("random@robbery");
	STREAMING::REQUEST_ANIM_DICT("random@shop_robbery");
	AUDIO::PREPARE_MUSIC_EVENT("RE51A_SHOP");
	if ((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_219) && STREAMING::HAS_MODEL_LOADED(iLocal_220)) && STREAMING::HAS_MODEL_LOADED(iLocal_221)) && STREAMING::HAS_MODEL_LOADED(iLocal_222)) && STREAMING::HAS_MODEL_LOADED(-1170050911)) && STREAMING::HAS_MODEL_LOADED(1666748342)) && AI::GET_IS_WAYPOINT_RECORDING_LOADED("re_shoprobbery")) && AI::GET_IS_WAYPOINT_RECORDING_LOADED("re_shoprobbery2")) && STREAMING::HAS_ANIM_DICT_LOADED("random@robbery")) && STREAMING::HAS_ANIM_DICT_LOADED("random@shop_robbery")) && AUDIO::PREPARE_MUSIC_EVENT("RE51A_SHOP"))
	{
		iLocal_53 = 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_219);
		STREAMING::REQUEST_MODEL(iLocal_220);
		STREAMING::REQUEST_MODEL(iLocal_221);
		STREAMING::REQUEST_MODEL(iLocal_222);
		STREAMING::REQUEST_MODEL(-1170050911);
		STREAMING::REQUEST_MODEL(1666748342);
		STREAMING::REQUEST_ANIM_DICT("random@robbery");
		STREAMING::REQUEST_ANIM_DICT("random@shop_robbery");
		AUDIO::PREPARE_MUSIC_EVENT("RE51A_SHOP");
	}
}

void func_186()
{
	iLocal_141[0] = 0;
	iLocal_141[1] = 0;
	if (iLocal_49 == 1)
	{
		iLocal_219 = 1546450936;
		iLocal_220 = 1720428295;
		iLocal_221 = 1546450936;
		iLocal_222 = 611648169;
		iLocal_111 = 2;
		iLocal_112 = 3;
		iLocal_113 = 3;
		Local_55[0] = { -821.4461f, -184.8474f, 37.5668f };
		fLocal_62[0] = 252.381f;
		Local_55[1] = { -819.4664f, -186.8146f, 36.5671f };
		fLocal_62[1] = -153.9562f;
		Local_65[0] = { -821.941f, -183.3325f, 36.5689f };
		fLocal_75[0] = 203.3684f;
		Local_65[1] = { -813.6672f, -185.5652f, 36.5689f };
		fLocal_75[1] = 90.1761f;
		Local_65[2] = { -816.1049f, -183.9966f, 36.5689f };
		fLocal_75[2] = 192.7338f;
		Local_79[0] = { -813.008f, -184.931f, 37.869f };
		fLocal_92[0] = 337.68f;
		Local_79[1] = { -817.5606f, -190.8273f, 37.3114f };
		fLocal_92[1] = 25.8399f;
		Local_79[2] = { -816.1862f, -182.897f, 37.6304f };
		fLocal_92[2] = 30f;
		Local_97 = { -822.2148f, -184.0822f, 37.7027f };
		Local_100 = { -1.8236f, 0.6172f, 75.8024f };
		Local_103 = { -808.5918f, -180.0378f, 36.5689f };
		iLocal_188 = 1666748342;
		iLocal_189 = 2000;
		Local_194 = { -822.8538f, -187.7645f, 36.5792f };
	}
	else if (iLocal_49 == 2)
	{
		iLocal_218 = 587703123;
		iLocal_219 = 429425116;
		iLocal_220 = 587703123;
		iLocal_221 = 429425116;
		iLocal_222 = 228715206;
		iLocal_111 = 2;
		iLocal_112 = 2;
		iLocal_113 = 2;
		Local_55[0] = { -1193.045f, -769.304f, 16.321f };
		fLocal_62[0] = -85.5f;
		Local_55[1] = { -1199.045f, -778.8358f, 16.3277f };
		fLocal_62[1] = 329.1899f;
		Local_65[0] = { -1193.802f, -766.8922f, 16.331f };
		fLocal_75[0] = 221.3152f;
		Local_65[1] = { -1193.85f, -771.4392f, 16.3227f };
		fLocal_75[1] = 247.1149f;
		Local_79[0] = { -1184.359f, -767.0463f, 16.3468f };
		fLocal_92[0] = 103.3015f;
		Local_79[1] = { -1185.932f, -770.624f, 16.344f };
		fLocal_92[1] = 43.215f;
		Local_97 = { -1192.968f, -767.0651f, 17.2968f };
		Local_100 = { 0f, 0f, -128.52f };
		Local_103 = { -1180.457f, -763.9163f, 16.3267f };
		iLocal_188 = 1666748342;
		iLocal_189 = 2000;
		Local_194 = { -1201.006f, -777.4955f, 16.3235f };
	}
	bLocal_54 = true;
}

int func_187()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_198())
		{
			return 0;
		}
	}
	if (func_194())
	{
		return 1;
	}
	if (func_188(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_188(float fParam0, bool bParam1)
{
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_46(func_44()))
		{
			iVar36 = func_68();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_18569[iVar32], 2) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_18569[iVar32], 3))
				{
					func_189(iVar32, &Var0);
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

void func_189(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_190(uParam1, "Abigail1", func_192(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 1:
			func_190(uParam1, "Abigail2", func_192(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 2:
			func_190(uParam1, "Barry1", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 3:
			func_190(uParam1, "Barry2", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 4:
			func_190(uParam1, "Barry3", func_192(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 5:
			func_190(uParam1, "Barry3A", func_192(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 6:
			func_190(uParam1, "Barry3C", func_192(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 7:
			func_190(uParam1, "Barry4", func_192(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_191(iParam0), 0, 0);
			break;
		
		case 8:
			func_190(uParam1, "Dreyfuss1", func_192(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 9:
			func_190(uParam1, "Epsilon1", func_192(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 10:
			func_190(uParam1, "Epsilon2", func_192(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 11:
			func_190(uParam1, "Epsilon3", func_192(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 12:
			func_190(uParam1, "Epsilon4", func_192(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 13:
			func_190(uParam1, "Epsilon5", func_192(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 14:
			func_190(uParam1, "Epsilon6", func_192(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 15:
			func_190(uParam1, "Epsilon7", func_192(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 16:
			func_190(uParam1, "Epsilon8", func_192(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 17:
			func_190(uParam1, "Extreme1", func_192(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 18:
			func_190(uParam1, "Extreme2", func_192(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 19:
			func_190(uParam1, "Extreme3", func_192(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 20:
			func_190(uParam1, "Extreme4", func_192(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 21:
			func_190(uParam1, "Fanatic1", func_192(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_191(iParam0), 1, 0);
			break;
		
		case 22:
			func_190(uParam1, "Fanatic2", func_192(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_191(iParam0), 1, 0);
			break;
		
		case 23:
			func_190(uParam1, "Fanatic3", func_192(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_191(iParam0), 0, 1);
			break;
		
		case 24:
			func_190(uParam1, "Hao1", func_192(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_191(iParam0), 0, 1);
			break;
		
		case 25:
			func_190(uParam1, "Hunting1", func_192(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 26:
			func_190(uParam1, "Hunting2", func_192(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 27:
			func_190(uParam1, "Josh1", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 28:
			func_190(uParam1, "Josh2", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 29:
			func_190(uParam1, "Josh3", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 30:
			func_190(uParam1, "Josh4", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 31:
			func_190(uParam1, "Maude1", func_192(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 32:
			func_190(uParam1, "Minute1", func_192(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 33:
			func_190(uParam1, "Minute2", func_192(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 34:
			func_190(uParam1, "Minute3", func_192(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 35:
			func_190(uParam1, "MrsPhilips1", func_192(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 36:
			func_190(uParam1, "MrsPhilips2", func_192(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 37:
			func_190(uParam1, "Nigel1", func_192(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 38:
			func_190(uParam1, "Nigel1A", func_192(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 39:
			func_190(uParam1, "Nigel1B", func_192(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 40:
			func_190(uParam1, "Nigel1C", func_192(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 41:
			func_190(uParam1, "Nigel1D", func_192(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 42:
			func_190(uParam1, "Nigel2", func_192(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 43:
			func_190(uParam1, "Nigel3", func_192(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 44:
			func_190(uParam1, "Omega1", func_192(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 45:
			func_190(uParam1, "Omega2", func_192(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 46:
			func_190(uParam1, "Paparazzo1", func_192(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 47:
			func_190(uParam1, "Paparazzo2", func_192(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 48:
			func_190(uParam1, "Paparazzo3", func_192(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 49:
			func_190(uParam1, "Paparazzo3A", func_192(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 50:
			func_190(uParam1, "Paparazzo3B", func_192(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 51:
			func_190(uParam1, "Paparazzo4", func_192(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 52:
			func_190(uParam1, "Rampage1", func_192(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 54:
			func_190(uParam1, "Rampage3", func_192(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 55:
			func_190(uParam1, "Rampage4", func_192(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 56:
			func_190(uParam1, "Rampage5", func_192(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 53:
			func_190(uParam1, "Rampage2", func_192(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 57:
			func_190(uParam1, "TheLastOne", func_192(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 58:
			func_190(uParam1, "Tonya1", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 59:
			func_190(uParam1, "Tonya2", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 60:
			func_190(uParam1, "Tonya3", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 61:
			func_190(uParam1, "Tonya4", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 62:
			func_190(uParam1, "Tonya5", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_190(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_191(int iParam0)
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

struct<2> func_192(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_193(iParam0) };
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

struct<2> func_193(int iParam0)
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

int func_194()
{
	if (func_197() && !func_198())
	{
		return 1;
	}
	if (func_196() && func_195())
	{
		return 1;
	}
	return 0;
}

bool func_195()
{
	return Global_111356 > 0;
}

int func_196()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_197()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_198()
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

int func_199()
{
	if (!func_167(5))
	{
		return 1;
	}
	if (func_194())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_198())
		{
			return 0;
		}
	}
	if (func_188(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	if ((Global_111627 == func_72() && GAMEPLAY::GET_RANDOM_EVENT_FLAG()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_201(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_203(iParam0);
	GAMEPLAY::_0x65D2EBB47E1CEC21(0);
	GAMEPLAY::SET_RANDOM_EVENT_FLAG(1);
	Global_111624 = 0;
	func_202();
}

void func_202()
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

void func_203(int iParam0)
{
	Global_111627 = iParam0;
}

int func_204(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_72();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_233())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_198())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_58(0))
		{
			return 0;
		}
		if (func_194())
		{
			return 0;
		}
		if (func_232())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_46(func_44()))
		{
			if (func_188(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.z - Local_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_231(iParam3))
		{
			return 0;
		}
		if (func_46(func_44()))
		{
			if (func_230(func_44()) == 4 || func_230(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_46(func_44()))
		{
			if (!func_229(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_228(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_227())
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
		if (!func_218(4))
		{
			return 0;
		}
		if (!func_167(5))
		{
			return 0;
		}
		if (func_217(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_217(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_231(30) && !func_217(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_46(func_44()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111638.f_2358.f_539.f_2300[iVar4] };
				iVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_216(iVar8))
				{
					if (func_206(iVar4))
					{
						if (!func_205(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_44() != iVar4)
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

bool func_205(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

bool func_206(int iParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_207(iVar0);
}

int func_207(int iParam0)
{
	return func_208(iParam0, 1);
}

int func_208(int iParam0, int iParam1)
{
	if (!func_216(iParam0))
	{
		return 0;
	}
	func_209(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_209(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_210(func_86(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_210(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_215(iParam0, iParam1))
	{
		iVar0 = func_93(iParam1);
		iVar1 = func_91(iParam0);
		iVar2 = (func_91(iParam0) - func_91(iParam1));
		iVar3 = (func_93(iParam0) - func_93(iParam1));
		iVar4 = (func_214(iParam0) - func_214(iParam1));
		iVar5 = (func_85(iParam0) - func_85(iParam1));
		iVar6 = (func_213(iParam0) - func_213(iParam1));
		iVar7 = (func_212(iParam0) - func_212(iParam1));
	}
	else
	{
		iVar0 = func_93(iParam0);
		iVar1 = func_91(iParam1);
		iVar2 = (func_91(iParam1) - func_91(iParam0));
		iVar3 = (func_93(iParam1) - func_93(iParam0));
		iVar4 = (func_214(iParam1) - func_214(iParam0));
		iVar5 = (func_85(iParam1) - func_85(iParam0));
		iVar6 = (func_213(iParam1) - func_213(iParam0));
		iVar7 = (func_212(iParam1) - func_212(iParam0));
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
		iVar4 = (iVar4 + func_90(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_211(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_211(float fParam0, float fParam1, float fParam2)
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

int func_212(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_213(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_214(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_215(int iParam0, int iParam1)
{
	if (!func_216(iParam1) || !func_216(iParam0))
	{
		return 1;
	}
	iVar0 = func_91(iParam0);
	iVar1 = func_91(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_93(iParam0);
	iVar1 = func_93(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_214(iParam0);
	iVar1 = func_214(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	iVar1 = func_85(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_213(iParam0);
	iVar1 = func_213(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_213(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_85(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_91(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_93(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_214(iParam0);
	if (iVar5 < 1 || iVar5 > func_90(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_217(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_44();
				if (!func_46(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_226()) || Global_110685) || Global_30770) || func_225()) || func_131(8, -1)) || func_224()) || func_223()) || func_222()) || func_221()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_226()) || Global_30770) || func_225()) || func_131(8, -1)) || func_222()) || func_224()) || func_223()) || func_221()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_226()) || Global_110685) || Global_30770) || func_225()) || func_131(8, -1)) || func_222()) || func_224()) || func_223()) || func_221()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_226()) || Global_110685) || Global_30770) || func_225()) || func_131(8, -1)) || func_224()) || func_223()) || func_221()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_226() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_131(8, -1)) || func_221()) || func_220()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_131(8, -1) || func_224()) || func_223()) || func_220()) || func_219())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_226()) || Global_30770) || func_225()) || func_131(8, -1)) || func_223()) || func_222()) || func_221()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_226()) || func_223()) || Global_110685) || Global_30770) || func_225()) || Global_42596) || func_131(8, -1)) || func_222()) || func_220()) || func_221()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_226()) || Global_110685) || Global_30770) || func_225()) || func_131(8, -1)) || func_222()) || func_220()) || func_224()) || func_223()) || func_221())
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

var func_219()
{
	return Global_98783.f_1;
}

int func_220()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_221()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_222()
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

bool func_223()
{
	return Global_98796.f_346 > 0;
}

bool func_224()
{
	return Global_98796.f_345 > 0;
}

var func_225()
{
	return Global_1312877;
}

int func_226()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_227()
{
	func_129();
	if (Global_8161[Global_19486][0].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_228(int iParam0)
{
	return func_215(func_86(), iParam0);
}

int func_229(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = func_44();
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

int func_230(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_231(int iParam0)
{
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_233())
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

int func_232()
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

int func_233()
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

bool func_234(int iParam0)
{
	return func_11(iParam0, 0, 0);
}

bool func_235(int iParam0)
{
	return func_11(iParam0, 7, 1);
}

void func_236()
{
	if (iLocal_223)
	{
		func_135(0);
		AUDIO::CANCEL_MUSIC_EVENT("RE51A_SHOP");
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-871f, -246f, 0f, -798f, -163f, 50f, 1);
		AI::REMOVE_WAYPOINT_RECORDING("re_shoprobbery");
		AI::REMOVE_WAYPOINT_RECORDING("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_114[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_114[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_114[iVar0], 0))
				{
					AI::TASK_SMART_FLEE_COORD(iLocal_114[iVar0], Local_103, 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_114[iVar0], 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_114[iVar0]));
			}
			if (UI::DOES_BLIP_EXIST(uLocal_185[iVar0]))
			{
				UI::REMOVE_BLIP(&(uLocal_185[iVar0]));
			}
			iVar0++;
		}
		if (UI::DOES_BLIP_EXIST(uLocal_192))
		{
			UI::REMOVE_BLIP(&uLocal_192);
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_113 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_121[iVar0]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_121[iVar0], 1, 1);
					AI::OPEN_SEQUENCE_TASK(&uLocal_152);
					if (iLocal_49 == 1)
					{
						AI::TASK_PLAY_ANIM(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
					}
					else if (iLocal_49 == 2)
					{
						AI::CLEAR_PED_TASKS(iLocal_121[iVar0]);
						AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
					}
					AI::TASK_SMART_FLEE_COORD(0, Local_103, 150f, -1, 0, 0);
					AI::CLOSE_SEQUENCE_TASK(uLocal_152);
					AI::TASK_PERFORM_SEQUENCE(iLocal_121[iVar0], uLocal_152);
					AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
					PED::SET_PED_KEEP_TASK(iLocal_121[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_117[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_117[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_117[iVar0], 317, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_117[iVar0], 1, 1);
					if (iVar0 == 0)
					{
						if (!iLocal_183)
						{
							AI::CLEAR_PED_TASKS(iLocal_117[iVar0]);
							AI::TASK_SMART_FLEE_COORD(iLocal_117[iVar0], Local_103, 150f, -1, 0, 0);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[iVar0], 0);
						}
					}
					else
					{
						AI::OPEN_SEQUENCE_TASK(&uLocal_152);
						if (iLocal_49 == 2)
						{
							AI::CLEAR_PED_TASKS(iLocal_117[iVar0]);
							AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
						}
						AI::TASK_SMART_FLEE_COORD(0, Local_103, 150f, -1, 0, 0);
						AI::CLOSE_SEQUENCE_TASK(uLocal_152);
						AI::TASK_PERFORM_SEQUENCE(iLocal_117[iVar0], uLocal_152);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_152);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117[iVar0], 0);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_117[iVar0], 1);
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_184);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_167))
			{
				ENTITY::DETACH_ENTITY(iLocal_167, 1, 1);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_167);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_175);
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		UI::DISPLAY_HUD(1);
		UI::DISPLAY_RADAR(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PED::SET_CREATE_RANDOM_COPS(1);
		if (iLocal_49 == 1)
		{
			func_182(0, 0);
			func_179(0, 1, 0);
		}
		else if (iLocal_49 == 2)
		{
			func_182(14, 0);
			func_179(14, 1, 0);
		}
	}
	func_237(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_237(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_200())
	{
		func_241(iParam0);
		UI::SET_MISSION_NAME(0, 0);
		Global_111629 = GAMEPLAY::GET_GAME_TIMER();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_111627, 1), 64);
		if (func_71(Global_111627) > 0)
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
	func_238(&Global_30827);
	Global_111628 = 0;
	func_203(-1);
}

void func_238(var uParam0)
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

char* func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0)
{
	Global_41982 = (GAMEPLAY::GET_GAME_TIMER() + iParam0);
}

void func_241(int iParam0)
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_86();
	func_245(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = func_85(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_213(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_212(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_214(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_93(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_91(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_91(*uParam0);
	iVar1 = func_93(*uParam0);
	iVar2 = func_214(*uParam0);
	iVar3 = func_85(*uParam0);
	iVar4 = func_213(*uParam0);
	iVar5 = func_212(*uParam0);
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
	iVar6 = func_90(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_90(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_96(uParam0, iParam1);
	func_95(uParam0, iParam2);
	func_94(uParam0, iParam3);
	func_88(uParam0, iParam5);
	func_89(uParam0, iParam4);
	func_87(uParam0, iParam6);
}

int func_247(int iParam0)
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

void func_248()
{
	Global_19671 = 0;
	func_249();
}

void func_249()
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

Vector3 func_250()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_128, 1);
		iLocal_127 = 1;
		if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_131, 1) < fVar0)
		{
			fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_131, 1);
			iLocal_127 = 2;
		}
		if (iLocal_127 == 1)
		{
			iLocal_134 = 1;
			iLocal_49 = 1;
			return Local_128;
		}
		else if (iLocal_127 == 2)
		{
			iLocal_134 = 2;
			iLocal_49 = 2;
			return Local_131;
		}
	}
	return 0f, 0f, 0f;
}

