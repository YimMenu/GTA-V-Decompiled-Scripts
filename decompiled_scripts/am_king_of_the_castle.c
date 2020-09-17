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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_376 = -1;
	iLocal_3181 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_756(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_741(ScriptParam_0);
	}
	else
	{
		func_709();
	}
	while (true)
	{
		func_708();
		if (func_701())
		{
			func_709();
		}
		if (func_698(29))
		{
			func_709();
		}
		if (func_696())
		{
			func_709();
		}
		if (func_695())
		{
			func_709();
		}
		iLocal_3181 = -1;
		if (GAMEPLAY::IS_BIT_SET(iLocal_3173, PLAYER::PLAYER_ID()))
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_3174, NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_693(PLAYER::PLAYER_ID()))
				{
					iLocal_3181 = NETWORK::PARTICIPANT_ID_TO_INT();
				}
				else if (func_692() && !func_691())
				{
					uVar2 = func_689();
					if (PED::IS_PED_A_PLAYER(uVar2))
					{
						iVar3 = NETWORK::_NETWORK_GET_PED_PLAYER(uVar2);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
						{
							iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
							iLocal_3181 = iVar4;
						}
					}
				}
			}
		}
		func_668();
		if (func_667() < 2)
		{
			if (func_664(2, 0, 1, 0, 0))
			{
				GAMEPLAY::SET_BIT(&iLocal_539, 24);
				func_622(0, -1);
				func_709();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_621(iVar0, -1);
			func_620(iVar0, -1);
			func_619(iVar0, uVar1);
			GAMEPLAY::CLEAR_BIT(&iLocal_539, 0);
			iVar0++;
		}
		func_571();
		func_539();
		func_536();
		func_516();
		switch (func_515(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_514() == 1)
				{
					func_506(141, func_513(0), 0, 0);
					func_505(1);
				}
				else if (func_514() == 4)
				{
					func_505(4);
				}
				break;
			
			case 1:
				if (func_514() == 1)
				{
					func_20();
				}
				else if (func_514() == 4)
				{
					func_19(&(Local_80.f_211));
					func_505(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_80.f_211)))
				{
					if (func_17(&(Local_80.f_211)))
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (bVar5)
				{
					func_505(4);
				}
				break;
			
			case 2:
				func_505(4);
			
			case 4:
				func_709();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_514())
			{
				case 0:
					func_16(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()
{
	func_12();
	switch (func_667())
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(Local_80.f_213, 0))
			{
				if (!func_18(&(Local_80.f_1.f_3)))
				{
					func_11(&(Local_80.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Local_80.f_213, 2))
			{
				iVar2 = Global_262145.f_11188;
				if (func_18(&(Local_80.f_1.f_1)))
				{
					if (func_9(&(Local_80.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_11189;
				if (func_18(&(Local_80.f_1.f_3)))
				{
					if (func_9(&(Local_80.f_1.f_3), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			if (bVar1)
			{
				func_10(2);
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Local_80.f_213, 1))
			{
				func_10(3);
			}
			break;
		
		case 3:
			func_10(4);
			break;
		
		case 4:
			func_16(4);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_2(iVar0);
		iVar0++;
	}
}

void func_2(int iParam0)
{
	iVar0 = func_8(iParam0);
	iVar1 = func_7(iParam0);
	bVar6 = func_18(&(Local_80.f_6[iParam0].f_70));
	if (iVar0 > -1)
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_3174, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_3173, iVar1))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_80.f_1.f_1)))
					{
						if (!func_18(&(Local_80.f_6[iParam0].f_70)))
						{
							func_11(&(Local_80.f_6[iParam0].f_70), 0, 1);
						}
						else if ((func_5(&(Local_80.f_6[iParam0].f_70), 1000, 0) && func_9(&(Local_80.f_1.f_1), 0, 0) <= Global_262145.f_11188) && func_667() != 2)
						{
							iVar7 = func_9(&(Local_80.f_6[iParam0].f_70), 0, 1);
							fVar3 = SYSTEM::TO_FLOAT(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_11192 * 1000));
							fVar4 = (SYSTEM::TO_FLOAT(Global_262145.f_11191) * fVar3);
							fVar2 = (fVar2 + fVar4);
							func_4(iParam0, iVar0, fVar2);
							bVar5 = true;
						}
					}
				}
				else if (bVar6)
				{
					bVar5 = true;
				}
			}
			else if (bVar6)
			{
				bVar5 = true;
			}
		}
		else if (bVar6)
		{
			bVar5 = true;
		}
	}
	else if (bVar6)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bVar6)
		{
			func_3(&(Local_80.f_6[iParam0].f_70));
			if (iVar0 > -1)
			{
				func_11(&(Local_80.f_6[iParam0].f_70), 0, 1);
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_4(int iParam0, int iParam1, float fParam2)
{
	Local_80.f_6[iParam0].f_3[iParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

float func_6(int iParam0, int iParam1)
{
	return Local_80.f_6[iParam0].f_3[iParam1];
}

int func_7(int iParam0)
{
	return Local_80.f_6[iParam0].f_2;
}

int func_8(int iParam0)
{
	return Local_80.f_6[iParam0].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

void func_10(int iParam0)
{
	Local_80.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_12()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (func_15(iVar0))
		{
			case 0:
				if (func_14(iVar0))
				{
					if (!func_18(&(Local_80.f_1.f_1)))
					{
						Local_80.f_1.f_3 = { Var1 };
						func_11(&(Local_80.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_80.f_6[iVar0].f_70)))
					{
						func_11(&(Local_80.f_6[iVar0].f_70), 0, 1);
					}
					func_13(iVar0, 1);
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_213, 2))
					{
						GAMEPLAY::SET_BIT(&(Local_80.f_213), 2);
					}
				}
				break;
			
			case 1:
				if (!func_14(iVar0))
				{
					func_13(iVar0, 2);
				}
				break;
			
			case 2:
				if (func_14(iVar0))
				{
					func_13(iVar0, 1);
				}
				break;
		}
		iVar0++;
	}
}

void func_13(int iParam0, int iParam1)
{
	Local_80.f_6[iParam0] = iParam1;
}

bool func_14(int iParam0)
{
	return Local_1225[iParam0].f_36;
}

int func_15(int iParam0)
{
	return Local_80.f_6[iParam0];
}

void func_16(int iParam0)
{
	Local_80 = iParam0;
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

bool func_18(var uParam0)
{
	return uParam0->f_1;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	func_487();
	func_486();
	func_484();
	if (func_482())
	{
		func_360(iVar0);
	}
	func_344(141, func_359(0), &uLocal_3186, SYSTEM::TO_FLOAT(Global_262145.f_11497), 1148846080, iLocal_3185);
	if (func_303(0, 1))
	{
		func_302();
	}
	switch (func_667())
	{
		case 0:
			break;
		
		case 1:
			func_301();
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_267(iVar0);
				func_266(iVar0);
				func_264(iVar0);
				if (iLocal_3181 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (!func_262(1, 0))
					{
						if (func_261(NETWORK::PARTICIPANT_ID_TO_INT(), iVar0))
						{
							if (func_260(PLAYER::PLAYER_ID()) == 141)
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 2))
								{
									GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 2);
									func_241(1);
								}
							}
							if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 5))
							{
								GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 5);
							}
							if (func_8(iVar0) == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 20))
								{
									GAMEPLAY::SET_BIT(&iLocal_539, 20);
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 4))
						{
							if (func_8(iVar0) == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 4);
							}
						}
					}
					else
					{
						if (GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 2))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 2);
						}
						if (GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 5))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 5);
						}
						if (GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 4))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 4);
						}
						if (GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 6))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 6);
						}
						if (GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 7))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 8))
					{
						if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_240())
							{
								if (iLocal_3181 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (!func_303(0, 0))
									{
										if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
										{
											if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
											{
												func_239("KOTC_1STHELP", 30000);
												func_238(0);
												AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												GAMEPLAY::SET_BIT(&iLocal_539, 8);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (func_237("KOTC_1STHELP"))
					{
						UI::CLEAR_HELP(1);
					}
					if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 8))
					{
						GAMEPLAY::SET_BIT(&iLocal_539, 8);
					}
				}
				if (iLocal_3181 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (func_236(iVar0) <= 500f)
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 9))
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							GAMEPLAY::SET_BIT(&iLocal_539, 9);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(iLocal_539, 9))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						GAMEPLAY::CLEAR_BIT(&iLocal_539, 9);
					}
				}
				if (iLocal_3181 != -1)
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_539, 14) && func_8(iVar0) != iLocal_3181)
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 21))
						{
							func_235(81);
							GAMEPLAY::SET_BIT(&iLocal_539, 21);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(iLocal_539, 21))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_539, 21);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 26))
					{
						func_209(141, 0f, 0f, 0, 0, 0, 0);
						GAMEPLAY::SET_BIT(&iLocal_539, 26);
					}
					if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 1))
					{
						if (iLocal_3181 != -1)
						{
							if (!func_303(0, 0))
							{
								if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[iLocal_3181].f_1))
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[iLocal_3181].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != iLocal_3181)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_208(PLAYER::PLAYER_ID(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_206(81, sVar1, PLAYER::GET_PLAYER_NAME(func_7(iVar0)), func_207(), -1, "KOTC_START", func_207());
											}
											else
											{
												func_205(81, "KOTC_START2", "KOTC_STRAP1", func_207(), -1, func_207(), 1, 0);
												GAMEPLAY::SET_BIT(&iLocal_539, 14);
												GAMEPLAY::SET_BIT(&iLocal_539, 15);
											}
										}
										else
										{
											func_205(81, "KOTC_START", "KOTC_STRAP3", func_207(), -1, func_207(), 1, 0);
										}
										GAMEPLAY::SET_BIT(&iLocal_539, 1);
									}
								}
							}
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 2))
					{
						if (func_204(81))
						{
							GAMEPLAY::SET_BIT(&iLocal_539, 2);
						}
					}
					else if (iLocal_3181 != -1)
					{
						if (func_8(iVar0) == iLocal_3181)
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 14))
							{
								if (!func_303(0, 0))
								{
									if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[iLocal_3181].f_1))
									{
										if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[iLocal_3181].f_1))
										{
											func_205(81, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2, 1, 0);
											GAMEPLAY::SET_BIT(&iLocal_539, 14);
										}
									}
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 15))
							{
								if (func_204(81))
								{
									GAMEPLAY::SET_BIT(&iLocal_539, 15);
								}
							}
						}
						else
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_539, 14))
							{
								GAMEPLAY::CLEAR_BIT(&iLocal_539, 14);
							}
							if (GAMEPLAY::IS_BIT_SET(iLocal_539, 15))
							{
								GAMEPLAY::CLEAR_BIT(&iLocal_539, 15);
							}
						}
					}
					else
					{
						if (GAMEPLAY::IS_BIT_SET(iLocal_539, 14))
						{
							GAMEPLAY::CLEAR_BIT(&iLocal_539, 14);
						}
						if (GAMEPLAY::IS_BIT_SET(iLocal_539, 15))
						{
							GAMEPLAY::CLEAR_BIT(&iLocal_539, 15);
						}
					}
				}
				else
				{
					func_203();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (iLocal_3181 != -1)
						{
							if (func_8(iVar0) == iLocal_3181)
							{
								if (!func_303(1, 0))
								{
									func_200("KOTC_KINGOB1", 0);
								}
								else
								{
									func_203();
								}
								if (GAMEPLAY::IS_BIT_SET(iLocal_539, 10))
								{
									if (iLocal_3181 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!func_240())
											{
												if (!func_303(0, 0))
												{
													if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
													{
														if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
														{
															if (GAMEPLAY::IS_BIT_SET(iLocal_539, 2))
															{
																if (!func_208(PLAYER::PLAYER_ID(), func_7(iVar0)))
																{
																	if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 10))
																	{
																		func_239("KOTC_YOUKNG", 30000);
																		func_238(1);
																		GAMEPLAY::SET_BIT(&iLocal_539, 6);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if (iLocal_3181 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 7))
									{
										if (func_199(NETWORK::PARTICIPANT_ID_TO_INT()))
										{
											if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												if (!func_240())
												{
													if (!func_303(0, 0))
													{
														if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
														{
															if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
															{
																if (GAMEPLAY::IS_BIT_SET(iLocal_539, 2))
																{
																	if (!func_208(PLAYER::PLAYER_ID(), func_7(iVar0)))
																	{
																		if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 7))
																		{
																			func_239("KOTC_OTHRKG", 30000);
																			func_238(1);
																			GAMEPLAY::SET_BIT(&iLocal_539, 7);
																		}
																	}
																	else if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 11))
																	{
																		func_170("KOTC_OTHRKGGN", func_198(), 1, "KOTC_KINGBLIP", func_171(PLAYER::PLAYER_ID(), -2, 0, 0, 0), -1);
																		func_238(1);
																		GAMEPLAY::SET_BIT(&iLocal_539, 11);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								if (((func_199(iLocal_3181) || GAMEPLAY::IS_BIT_SET(Local_378[iLocal_3181].f_4, 12)) && GAMEPLAY::IS_BIT_SET(iLocal_3174, func_8(iVar0))) && !func_303(1, 0))
								{
									if (func_208(PLAYER::PLAYER_ID(), func_7(iVar0)))
									{
										func_167("KOTC_PERMKNGb", func_7(iVar0), "KOTC_KINGNAME", 1, func_171(PLAYER::PLAYER_ID(), -2, 0, 0, 0), 0);
									}
									else
									{
										func_156("KOTC_PERMKNG", &(Local_544[func_8(iVar0)].f_2), 0, 1);
									}
								}
								else
								{
									func_203();
								}
							}
						}
						else
						{
							func_203();
						}
					}
					else if (iLocal_3181 != -1)
					{
						if (!func_303(1, 0))
						{
							if (func_261(NETWORK::PARTICIPANT_ID_TO_INT(), iVar0))
							{
								func_200("KOTC_KLLALL", 0);
							}
							else
							{
								func_200("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_203();
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 10))
						{
							if (iLocal_3181 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (func_199(NETWORK::PARTICIPANT_ID_TO_INT()))
								{
									if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										if (!func_240())
										{
											if (!func_303(0, 0))
											{
												if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
												{
													if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
													{
														if (func_155(iVar0))
														{
															func_239("KOTC_CONTS", 30000);
															func_238(1);
															GAMEPLAY::SET_BIT(&iLocal_539, 10);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						func_203();
					}
				}
				if (iLocal_3181 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_199(NETWORK::PARTICIPANT_ID_TO_INT()) && !func_303(1, 0))
						{
							func_200("KOTC_ENTER", 0);
						}
						else
						{
							func_203();
						}
					}
				}
				else
				{
					func_203();
				}
				func_128(iVar0);
				if (func_260(PLAYER::PLAYER_ID()) == 141)
				{
					func_89(iVar0);
				}
				func_88();
				iVar0++;
			}
			break;
		
		case 2:
			iVar3 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_86(iVar0);
				func_84(iVar0);
				iVar0++;
			}
			func_203();
			func_302();
			func_80();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_3181 != -1)
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_539, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_80.f_6[iVar0].f_74[iVar2] == iLocal_3181)
							{
								if (Local_80.f_6[iVar0].f_74[iVar2].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0:
											sVar5 = "KOTC1ST_STR";
											sVar4 = "KOTC_WIN1";
											bVar6 = true;
											break;
										
										case 1:
											sVar5 = "KOTC2ND_STR";
											bVar6 = true;
											break;
										
										case 2:
											sVar5 = "KOTC3RD_STR";
											bVar6 = true;
											break;
										}
									}
							}
							iVar2++;
						}
					}
				}
				func_128(iVar0);
				if (Local_80.f_6[iVar0].f_74[0] == -1)
				{
					bVar8 = true;
				}
				else if (!GAMEPLAY::IS_BIT_SET(iLocal_3174, Local_80.f_6[iVar0].f_74[0]))
				{
					bVar8 = true;
				}
				else if (Local_80.f_6[iVar0].f_74[0].f_3 <= 0f)
				{
					bVar8 = true;
				}
				iVar0++;
			}
			if (bVar6)
			{
				Local_364.f_5 = 1;
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 1) && func_79())
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 3))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_303(0, 0))
							{
								func_78("KOTC_NOENTRY");
							}
						}
						else if (bVar8)
						{
							if (iLocal_3181 != -1)
							{
								if (!func_303(0, 0))
								{
									if (!func_303(0, 0))
									{
										if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[iLocal_3181].f_1))
										{
											if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[iLocal_3181].f_1))
											{
												if (func_199(iLocal_3181))
												{
													func_205(68, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2, 1, 0);
												}
												else
												{
													func_78("KOTC_NOWIN");
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (iLocal_3181 != -1)
							{
								if (!func_303(0, 0))
								{
									if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[iLocal_3181].f_1))
									{
										if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[iLocal_3181].f_1))
										{
											if (func_199(iLocal_3181))
											{
												func_76(64, func_77(Local_80.f_6[iVar0].f_74[iVar7].f_3), sVar5, sVar4, 1, 15000, -1082130432, 2);
											}
											else
											{
												func_75(sVar5, func_77(Local_80.f_6[iVar0].f_74[iVar7].f_3));
											}
										}
									}
								}
							}
						}
						else if (iLocal_3181 != -1)
						{
							if (!func_303(0, 0))
							{
								if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[iLocal_3181].f_1))
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[iLocal_3181].f_1))
									{
										if (func_199(iLocal_3181))
										{
											sVar5 = "KOTC_OVER3";
											if (func_73(Local_80.f_6[iVar0].f_74[0].f_1, 1))
											{
												sVar9 = func_63(Local_80.f_6[iVar0].f_74[0].f_1);
											}
											else
											{
												sVar9 = PLAYER::GET_PLAYER_NAME(Local_80.f_6[iVar0].f_74[0].f_1);
											}
											func_44(72, func_77(Local_80.f_6[iVar0].f_74[0].f_3), sVar5, sVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											sVar5 = "KOTC_OVER3";
											func_32(sVar5, Local_80.f_6[iVar0].f_74[0].f_1, 1, func_77(Local_80.f_6[iVar0].f_74[0].f_3), 0, 0, 0, 1, 0);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
						{
							GAMEPLAY::SET_BIT(&iLocal_539, 3);
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_539, 3))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 4))
					{
						if (iLocal_3181 != -1)
						{
							if (((((((func_204(64) || func_204(72)) || func_204(68)) || !func_199(iLocal_3181)) || func_303(1, 1)) || UI::IS_PAUSE_MENU_ACTIVE()) || func_15(0) == 0) || iLocal_3181 == -1)
							{
								GAMEPLAY::SET_BIT(&iLocal_539, 4);
							}
						}
						else
						{
							GAMEPLAY::SET_BIT(&iLocal_539, 4);
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_539, 4))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_622(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_303(0, 0))
			{
				bVar10 = false;
			}
			if (func_15(0) == 0)
			{
				bVar10 = false;
			}
			if (iLocal_3181 == -1)
			{
				bVar10 = false;
			}
			if (func_21(&uLocal_1218, bVar10) && GAMEPLAY::IS_BIT_SET(iLocal_539, 4))
			{
				if (!func_240() || UI::IS_PAUSE_MENU_ACTIVE())
				{
					GAMEPLAY::SET_BIT(&iLocal_539, 17);
					if (GAMEPLAY::IS_BIT_SET(iLocal_539, 5))
					{
						GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 1);
						func_505(3);
					}
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

int func_21(var uParam0, bool bParam1)
{
	if (((*uParam0 > 0 && !func_240()) && !(func_31(PLAYER::PLAYER_ID(), 0) && (func_30(PLAYER::PLAYER_ID()) || func_28(PLAYER::PLAYER_ID())))) && !func_25(PLAYER::PLAYER_ID()))
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_18(&(uParam0->f_3)))
			{
				func_11(&(uParam0->f_3), 0, 0);
			}
			else if (func_5(&(uParam0->f_3), 1000, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 25);
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&(Global_2537071.f_4588), 0);
					func_11(&(uParam0->f_5), 0, 0);
				}
				func_11(&(uParam0->f_1), 0, 0);
				func_23(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_18(&(uParam0->f_5)))
			{
				if (func_5(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_22();
				func_23(uParam0, 2);
			}
			break;
		
		case 2:
			func_22();
			if (func_5(&(uParam0->f_1), 15000, 0))
			{
				if (func_237("AMEV_LBD_HELP"))
				{
					UI::CLEAR_HELP(1);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4588), 1);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4588), 1);
			return 1;
	}
	return 0;
}

void func_22()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 0))
	{
		if (((((!UI::IS_RADAR_HIDDEN() && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_795, 2)) && func_756(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73825) && !Global_58693) && !CAM::IS_SCREEN_FADED_OUT())
		{
			GAMEPLAY::SET_BIT(&(Global_2537071.f_4588), 1);
			func_239("AMEV_LBD_HELP", -1);
			func_238(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4588), 0);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2462222 = 1;
}

int func_25(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_27()
{
	return -1;
}

bool func_28(int iParam0)
{
	return func_29(iParam0, 19);
}

bool func_29(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_30(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_29(iParam0, 9);
	}
	return 0;
}

int func_31(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_32(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam2);
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_42(&Var1));
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		if (!bParam6)
		{
			iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2513218 = { func_41(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218))
			{
				iVar17 = 0;
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_40(&Var1) };
					}
					iVar0 = UI::_NOTIFICATION_SEND_CLAN_INVITE(iVar18, NETWORK::_0x7543BB439F63792B(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar17, 0, Global_2513148, &Var1, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = UI::_NOTIFICATION_SEND_APARTMENT_INVITE(iVar18, NETWORK::_0x7543BB439F63792B(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar17, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_33(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_39() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_36(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_34(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0] = iParam0;
		Global_1670846.f_5[iVar0].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0].f_7 = iParam7;
		Global_1670846.f_5[iVar0].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[0]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[1]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[2]), sParam11, 24);
	}
}

int func_34(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_35(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_35(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_36(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_37(-1, 0) == 8;
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

int func_37(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

int func_38()
{
	return Global_1312745;
}

bool func_39()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_40(char* sParam0)
{
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_41(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_42(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_43(&cVar0);
}

var func_43(char[4] cParam0)
{
	return cParam0;
}

int func_44(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_61(uParam0, uParam0->f_17);
	func_59(uParam0);
	if (func_58())
	{
		func_59(uParam0);
	}
	if (func_57(uParam0->f_1))
	{
		func_50();
		if (Global_2439138.f_2723[0].f_2 == 0)
		{
			Global_2439138.f_2723[0] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0].f_1 == 13 || Global_2439138.f_2723[0].f_1 == 53) || Global_2439138.f_2723[0].f_1 == 54) || Global_2439138.f_2723[0].f_1 == 58)
		{
			Global_2439138.f_2723[0].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1] = { Global_2439138.f_2723[iVar0] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_50();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_48(&(Global_2439138.f_2723[iVar0].f_69), 2);
				Global_2439138.f_2723[iVar0].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_47(uParam0->f_69, 128))
			{
				if (func_46(Global_2439138.f_2723[iVar0].f_1))
				{
					Global_2439138.f_2723[iVar0].f_2 = 5;
					func_48(&(Global_2439138.f_2723[iVar0].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48(var uParam0, int iParam1)
{
	func_49(uParam0, iParam1);
}

void func_49(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_50()
{
	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_51();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_51()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_55(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_52(&(Global_2439138.f_3047.f_1));
}

void func_52(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_76891)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_54(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_53(0);
}

void func_53(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_54(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

void func_55(var uParam0)
{
	func_56(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_56(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_57(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return Global_2450632.f_17;
}

void func_59(var uParam0)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_72 = func_207();
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_61(var uParam0, int iParam1)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_27() || !func_756(iParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_171(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_62(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_27();
	uParam1->f_18 = func_27();
	uParam1->f_19 = func_27();
	uParam1->f_20 = func_27();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

char* func_63(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_72(&(Global_1628237[iParam0].f_11.f_104));
		return sVar0;
	}
	if (Global_1628237[iParam0].f_11.f_120 != Global_1628237[PLAYER::PLAYER_ID()].f_11.f_120)
	{
		sVar0 = func_67(iParam0, 0);
		return sVar0;
	}
	if (((func_29(iParam0, 28) || func_29(PLAYER::PLAYER_ID(), 28)) || func_66(iParam0)) && !func_65(iParam0))
	{
		return func_67(iParam0, 0);
	}
	iVar1 = func_64(iParam0);
	if (iVar1 != func_27())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_67(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_27())
	{
		sVar0 = func_72(&(Global_1628237[iVar1].f_11.f_104));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_67(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_64(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_27();
}

int func_65(int iParam0)
{
	Var0 = { func_41(iParam0) };
	if (GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66(int iParam0)
{
	if (iParam0 != func_27())
	{
		Var0 = { func_41(iParam0) };
		if (GAMEPLAY::IS_ORBIS_VERSION() || GAMEPLAY::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_67(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(iParam0, 1))
		{
			return func_68();
		}
	}
	return UI::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_68()
{
	return UI::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_69(int iParam0, bool bParam1)
{
	return func_70(iParam0, bParam1, 1);
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_71(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_27() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 != func_27())
	{
		if (Global_1628237[iParam0].f_11 != func_27())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_72(var uParam0)
{
	return uParam0;
}

bool func_73(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_74(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_27();
}

int func_74(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (Global_1628237[iParam0].f_11 != func_27())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_75(char* sParam0, int iParam1)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_33(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_76(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

int func_77(var uParam0)
{
	iVar0 = SYSTEM::FLOOR(uParam0);
	iVar0 = (iVar0 / Global_262145.f_11191);
	iVar0 = (iVar0 * Global_262145.f_11191);
	return iVar0;
}

int func_78(char* sParam0)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_33(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_79()
{
	return GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 25);
}

void func_80()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_81(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_81(int iParam0, int iParam1)
{
	iVar0 = func_513(iParam0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_540, iVar0))
	{
		UI::SET_MINIMAP_COMPONENT(func_83(iParam0, 0), 0, func_82(iParam0, 1));
		if (iVar0 == 4)
		{
			UI::SET_MINIMAP_COMPONENT(func_83(iParam0, 1), 0, func_82(iParam0, 1));
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_540, iVar0);
	}
}

int func_82(int iParam0, bool bParam1)
{
	if (func_8(iParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 9;
	}
	else if (func_208(PLAYER::PLAYER_ID(), func_7(iParam0)))
	{
		return func_171(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
	}
	return 6;
}

int func_83(int iParam0, bool bParam1)
{
	switch (func_513(iParam0))
	{
		case 0:
			return 6;
		
		case 1:
			return 9;
		
		case 2:
			return 8;
		
		case 3:
			return 10;
		
		case 5:
			return 11;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		case 4:
			if (!bParam1)
			{
				return 7;
			}
			else
			{
				return 14;
			}
			break;
	}
	return 6;
}

void func_84(int iParam0)
{
	if (UI::DOES_BLIP_EXIST(func_85(iParam0)))
	{
		UI::REMOVE_BLIP(&(Local_1225[iParam0].f_28));
	}
}

var func_85(int iParam0)
{
	return Local_1225[iParam0].f_28;
}

void func_86(int iParam0)
{
	if (UI::DOES_BLIP_EXIST(func_87(iParam0)))
	{
		UI::REMOVE_BLIP(&(Local_1225[iParam0].f_27));
	}
}

var func_87(int iParam0)
{
	return Local_1225[iParam0].f_27;
}

void func_88()
{
	if (iLocal_3181 != -1)
	{
		if (func_199(iLocal_3181))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 16))
		{
			AUDIO::START_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
			GAMEPLAY::SET_BIT(&iLocal_539, 16);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_539, 16))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
		GAMEPLAY::CLEAR_BIT(&iLocal_539, 16);
	}
}

void func_89(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_199(NETWORK::PARTICIPANT_ID_TO_INT()) && !func_303(1, 1)) && iLocal_3181 == NETWORK::PARTICIPANT_ID_TO_INT()) && !func_113(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_112(PLAYER::PLAYER_ID())) && !func_111())
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 18))
		{
			if (iLocal_3185 == 0)
			{
				iLocal_3185 = 1;
			}
			func_100(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			func_95();
			GAMEPLAY::SET_BIT(&iLocal_539, 18);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_539, 18))
	{
		if (iLocal_3185)
		{
			iLocal_3185 = 0;
		}
		func_90();
		func_100(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		GAMEPLAY::CLEAR_BIT(&iLocal_539, 18);
	}
}

void func_90()
{
	if (func_94() && !func_93())
	{
		func_92();
	}
	func_91();
	Global_2405072.f_706 = 0;
}

void func_91()
{
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_92()
{
	if (func_93())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

int func_93()
{
	if ((Global_2405072.f_1744 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_1225.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_1225.f_518))
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	if ((Global_2405072.f_1745 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_706.f_518))
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 60)
		{
			func_98(func_513(iVar0), iVar1, &Var2, &uVar5, &uVar6);
			func_96(Var2, uVar5, uVar6);
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(struct<3> Param0, var uParam3, var uParam4)
{
	func_97(Param0, uParam3, uParam4);
}

void func_97(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2405072.f_1745)
	{
	}
	if (Global_2405072.f_706 < 100)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405072.f_706.f_1[Global_2405072.f_706] = { Param0 };
		Global_2405072.f_706.f_1[Global_2405072.f_706].f_3 = uParam3;
		Global_2405072.f_706.f_1[Global_2405072.f_706].f_4 = uParam4;
		Global_2405072.f_706++;
	}
}

void func_98(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221.708f, -1849.335f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1237.67f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1249.548f, -1817.355f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1248.685f, -1803.257f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1248.991f, -1791.148f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1255.678f, -1781.741f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1245.86f, -1762.165f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1245.333f, -1747.114f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1231.577f, -1747.278f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1220.947f, -1735.378f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1210.075f, -1736.36f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1198.247f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1181.951f, -1730.004f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -1170.59f, -1719.653f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1159.548f, -1712.506f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -1164.51f, -1729.84f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1153.682f, -1723.684f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -1144.7f, -1734.572f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1128.272f, -1755.871f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1140.422f, -1768.454f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1236.169f, -1851.284f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1250.026f, -1849.988f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1249.307f, -1832.01f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1262.08f, -1826.342f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1262.728f, -1810.021f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1260.259f, -1797.316f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1274.153f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1260.69f, -1766.211f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1266.035f, -1751.414f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1208.952f, -1720.76f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1195.125f, -1711.339f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1186.983f, -1699.157f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1174.999f, -1703.776f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1163.133f, -1699.905f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1150.336f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1144.078f, -1687.13f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1138.136f, -1707.854f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1140.055f, -1722.341f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1116.763f, -1746.22f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1108.207f, -1735.964f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1227.086f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1215.905f, -1861.876f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1206.479f, -1854.022f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1234.57f, -1863.302f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1261.542f, -1840.843f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1271.821f, -1799.404f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1284.195f, -1789.106f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1257.971f, -1736.858f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1247.267f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1234.988f, -1722.898f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1235.874f, -1703.238f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1231.588f, -1682.849f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1215.568f, -1695.777f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1132.415f, -1669.435f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1159.309f, -1677.777f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1129.18f, -1690.502f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1119.669f, -1702.988f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1120.063f, -1717.326f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1111.901f, -1758.692f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1122.059f, -1769.543f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692.861f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 1699.049f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 1686.15f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 1673.573f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 1668.303f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 1653.943f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 1642.184f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 1647.117f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 1643.251f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 1652.155f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 1647.521f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 1658.341f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 1654.557f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 1679.687f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 1648.26f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 1641.12f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 1632.839f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 1624.526f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 1709.47f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 1719.762f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 1715.411f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 1725.27f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 1664.762f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 1671.615f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 1680.824f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 1686.476f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 1724.498f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 1716.555f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 1718.658f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 1708.223f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 1696.666f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 1688.924f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 1654.409f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 1642.521f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 1663.522f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 1663.431f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 1660.156f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 1650.805f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 1619.019f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 1616.216f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 1611.567f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 1606.564f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 1595.997f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 1596.441f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 1587.161f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 1582.353f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 1725.676f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 1736.203f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 1746.135f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 1749.594f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 1758.513f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 1760.473f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 1770.153f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 1772.731f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 1782.038f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -348.5437f, 6102.846f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -354.9039f, 6112.223f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -341.2615f, 6111.447f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -383.5045f, 6120.464f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -391.13f, 6120.804f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -402.7893f, 6117.366f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -394.3771f, 6111.254f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -393.7008f, 6063.039f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { -390.5935f, 6052.42f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { -360.3093f, 6063.834f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -329.9387f, 6066.402f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -335.7858f, 6122.277f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -342.0471f, 6128.171f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -356.2828f, 6125.203f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -359.0895f, 6139.214f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -375.9839f, 6141.022f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -369.7337f, 6134.166f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { -350.0499f, 6083.418f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { -305.5597f, 6086.671f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { -321.8067f, 6105.211f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { -333.3944f, 6102.061f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { -328.1533f, 6111.544f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { -346.6402f, 6170.479f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -362.3921f, 6158.998f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -299.2778f, 6094.682f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -419.8507f, 6128.894f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -403.4776f, 6109.125f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -423.8823f, 6087.721f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -409.3334f, 6087.301f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -415.4413f, 6074.564f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -410.8875f, 6060.549f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -410.8336f, 6049.957f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -388.0199f, 6039.768f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -395.2367f, 6033.086f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -380.7711f, 6033.284f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692.3021f, 5591.033f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -697.7473f, 5566.13f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -780.6183f, 5563.971f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -768.7381f, 5595.103f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -730.2549f, 5635.994f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -723.6004f, 5622.383f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -718.595f, 5631.016f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -708.1818f, 5621.512f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -708.3126f, 5550.206f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -763.8516f, 5533.312f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -775.123f, 5542.04f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -781.6904f, 5555.604f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -731.1522f, 5650.561f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -721.4506f, 5664.842f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -719.6653f, 5647.082f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -708.6494f, 5641.488f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -719.377f, 5680.363f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -680.2346f, 5676.271f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -676.3746f, 5655.031f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -680.2036f, 5638.799f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -670.8715f, 5583.509f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -743.9585f, 5544.044f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -786.1422f, 5543.069f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -804.6185f, 5577.981f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -796.4553f, 5614.668f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -790.2338f, 5632.483f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504.708f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 2470.234f, 3832.214f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 2469.984f, 3815.587f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 2472.682f, 3802.595f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 2429.278f, 3803.292f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 2461.768f, 3786.931f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 2446.433f, 3784.864f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 2431.84f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 2426.948f, 3759.106f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 2413.091f, 3747.124f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 2435.193f, 3749.984f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 2447.66f, 3752.583f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 2458.258f, 3758.142f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 2467.802f, 3750.602f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 2473.253f, 3734.285f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { 2474.793f, 3718.189f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { 2494.569f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { 2336.604f, 3786.805f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 19:
					*uParam2 = { 2449.885f, 3769.517f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { 2486.191f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 2441.525f, 3726.493f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 2435.716f, 3718.48f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 2414.73f, 3734.144f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 2397.829f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 2413.961f, 3768.889f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 2418.116f, 3784.66f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 2402.416f, 3792.671f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 2392.174f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 2379.034f, 3800.104f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 2421.42f, 3819.218f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { 2433.665f, 3833.4f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { 2446.784f, 3840.43f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { 2477.133f, 3855.754f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { 2450.037f, 3811.51f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { 2485.065f, 3829.442f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { 2484.83f, 3814.141f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { 2566.085f, 3806.854f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { 2585.664f, 3806.854f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { 2620.499f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 2612.831f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 2439.931f, 3869.727f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 2415.056f, 3867.74f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 2405.057f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 2402.643f, 3831.987f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 2393.434f, 3820.804f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 2379.645f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 2362.336f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 2347.031f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 2390.352f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 2376.869f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 2397.29f, 3720.224f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 2389.842f, 3708.438f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 2414.263f, 3688.072f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 2425.977f, 3703.052f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 2457.983f, 3723.803f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 2500.671f, 3701.153f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393.9336f, 1106.463f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -410.0362f, 1109.404f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -428.784f, 1115.099f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -447.0386f, 1119.385f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -442.3369f, 1130.731f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -440.9719f, 1142.607f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -446.4467f, 1154.628f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -434.5363f, 1160.321f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -424.4414f, 1172.293f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -421.9871f, 1161.774f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -427.4456f, 1148.051f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -428.7997f, 1136.869f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -431.5406f, 1126.397f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -416.0247f, 1120.771f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -418.7003f, 1142.939f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -408.7494f, 1158.555f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -411.2803f, 1169.951f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -398.8847f, 1164.101f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -388.1964f, 1173.05f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -368.8524f, 1165.414f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -378.9884f, 1168.124f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -386.2831f, 1186.969f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -424.0227f, 1207.077f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -425.9954f, 1196.52f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -400.9391f, 1177.741f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -414.3408f, 1178.525f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -438.3099f, 1184.969f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -440.8298f, 1174.33f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -450.9589f, 1165.905f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -459.008f, 1156.905f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -466.6086f, 1151.548f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -463.0775f, 1140.172f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -453.6404f, 1141.622f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -468.3044f, 1126.492f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -457.6102f, 1126.904f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -385.6385f, 1102.252f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -383.8219f, 1093.566f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -390.1671f, 1092.119f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -390.9579f, 1075.828f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -386.3601f, 1084.166f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -343.6368f, 1155.187f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -350.9581f, 1163.98f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -359.8979f, 1158.566f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -399.4072f, 1196.483f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -400.8836f, 1210.983f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -381.3676f, 1203.004f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -377.298f, 1218.699f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -416.3955f, 1238.681f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -420.2233f, 1223.627f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -449.2621f, 1187.425f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -462.3227f, 1187.615f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -472.915f, 1142.98f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -476.2405f, 1120.76f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -480.6375f, 1107.113f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -467.9135f, 1119.13f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -472.083f, 1186.256f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 462.9742f, -1315.816f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 491.3282f, -1343.662f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 488.5634f, -1353.807f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 489.778f, -1362.178f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 491.692f, -1377.681f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 508.4521f, -1332.725f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 482.3437f, -1302.914f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 489.6881f, -1306.12f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 486.8906f, -1314.552f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 510.3459f, -1328.159f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 503.6635f, -1316.644f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 498.5652f, -1306.801f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 494.3388f, -1296.788f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 445.3724f, -1312.777f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 494.6642f, -1289.089f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 512.1788f, -1296.798f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 516.3178f, -1306.591f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 522.4741f, -1315.716f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 512.5676f, -1266.132f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 22:
					*uParam2 = { 503.5058f, -1408.527f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 494.4435f, -1405.518f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 480.3399f, -1404.552f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 486.9532f, -1397.729f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 478.9936f, -1390.911f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 491.3508f, -1387.024f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 423.8583f, -1342.402f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 436.9487f, -1354.909f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 418.0431f, -1351.691f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 420.5738f, -1360.155f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 427.6197f, -1367.648f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 464.2118f, -1407.325f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 473.348f, -1411.325f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 482.7524f, -1415.458f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 495.2037f, -1418.058f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 503.2256f, -1399.498f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 504.0861f, -1418.874f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 515.1004f, -1418.266f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 526.7444f, -1417.327f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 537.8759f, -1339.477f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 523.1588f, -1342.832f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 516.2181f, -1333.808f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 545.4319f, -1321.294f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 543.2325f, -1310.26f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 519.066f, -1293.935f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 523.58f, -1272.328f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 524.081f, -1260.682f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 516.2507f, -1253.02f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 513.244f, -1278.351f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 493.7339f, -1268.213f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 494.1401f, -1281.491f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 555.4178f, -1356.743f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 475.9386f, -1304.794f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 465.516f, -1301.604f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 440.8456f, -1321.148f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 421.228f, -1316.188f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432.451f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1434.54f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1425.965f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1431.833f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1436.571f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1441.14f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1526.297f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1518.497f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1495.287f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1482.5f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1465.16f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1451.507f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 13:
					*uParam2 = { -1461.18f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 15:
					*uParam2 = { -1470.511f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 17:
					*uParam2 = { -1598.528f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1583.425f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1561.721f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1624.61f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1635.546f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1615.593f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1623.266f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1485.756f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1464.841f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1450.809f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1462.326f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1491.87f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1476.808f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1443.964f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1422.558f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1425.595f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1411.395f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1415.572f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1459.738f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1573.812f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1589.462f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1599.631f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1605.247f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1610.489f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1609.133f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1600.147f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1595.336f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1571.039f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1581.063f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1502.428f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1533.281f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1533.984f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1598.389f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1613.303f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1632.785f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1636.258f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1429.691f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1408.523f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1403.501f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1417.563f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
	}
}

float func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11409;
				
				case 1:
					return Global_262145.f_11410;
				
				case 2:
					return Global_262145.f_11411;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11412;
				
				case 1:
					return Global_262145.f_11413;
				
				case 2:
					return Global_262145.f_11414;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11415;
				
				case 1:
					return Global_262145.f_11416;
				
				case 2:
					return Global_262145.f_11417;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11418;
				
				case 1:
					return Global_262145.f_11419;
				
				case 2:
					return Global_262145.f_11420;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11421;
				
				case 1:
					return Global_262145.f_11422;
				
				case 2:
					return Global_262145.f_11423;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11424;
				
				case 1:
					return Global_262145.f_11425;
				
				case 2:
					return Global_262145.f_11426;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11427;
				
				case 1:
					return Global_262145.f_11428;
				
				case 2:
					return Global_262145.f_11429;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11430;
				
				case 1:
					return Global_262145.f_11431;
				
				case 2:
					return Global_262145.f_11432;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_100(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_94())
		{
			func_92();
		}
		Global_2405072.f_706.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_90();
		func_103(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_101();
	}
}

void func_101()
{
	if (func_94() && !func_93())
	{
		func_92();
	}
	if (func_93())
	{
		func_102();
	}
	else
	{
		func_90();
		func_103(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_102()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

void func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_27())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2425662[Global_2439138.f_1894.f_703.f_16].f_404, 0) && func_104())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

int func_104()
{
	if ((((((func_110(PLAYER::PLAYER_ID()) == 229 || func_110(PLAYER::PLAYER_ID()) == 191) || func_109()) || func_111()) || func_108(PLAYER::PLAYER_ID())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_105(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_105(int iParam0)
{
	if (func_107(iParam0))
	{
		return 1;
	}
	if (func_106(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_106(int iParam0)
{
	return func_29(iParam0, 20);
}

int func_107(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

int func_108(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2513889;
	}
	else
	{
		uVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(uVar0);
			if (iVar1 == 1885233650 || iVar1 == -1667301416)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_109()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	if (func_31(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

bool func_111()
{
	return Global_1574405;
}

int func_112(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 14))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_127(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_25(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_126(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_125(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_124(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_123(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_122(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_121(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_120(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_119(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_118(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_117(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_116(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_115(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_114(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_116(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_119(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_27())
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_27())
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

void func_128(int iParam0)
{
	if (func_15(iParam0) != 0)
	{
		func_360(iParam0);
		func_129(iParam0);
	}
}

void func_129(int iParam0)
{
	if (iLocal_3181 == -1)
	{
		return;
	}
	if (func_303(0, 0))
	{
		return;
	}
	iVar6 = (Global_262145.f_11188 + 1000 - func_9(&(Local_80.f_1.f_1), 0, 0));
	if (iVar6 < 0)
	{
		iVar6 = 0;
	}
	if (func_15(iParam0) == 0)
	{
		return;
	}
	if (iVar6 > 30000)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 6;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_378[iLocal_3181].f_4, 12))
	{
		if (!func_199(iLocal_3181))
		{
			func_152(iVar6, iVar7, func_153());
			return;
		}
	}
	func_151(iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1225[iParam0].f_53[iVar0] = -1;
		Local_1225[iParam0].f_53[iVar0].f_1 = -1;
		Local_1225[iParam0].f_53[iVar0].f_2 = func_27();
		Local_1225[iParam0].f_53[iVar0].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1225[iParam0].f_53[iVar0] = Local_80.f_6[iParam0].f_74[iVar0];
		Local_1225[iParam0].f_53[iVar0].f_1 = Local_80.f_6[iParam0].f_74[iVar0].f_1;
		Local_1225[iParam0].f_53[iVar0].f_2 = Local_80.f_6[iParam0].f_74[iVar0].f_2;
		Local_1225[iParam0].f_53[iVar0].f_3 = SYSTEM::TO_FLOAT(func_77(Local_80.f_6[iParam0].f_74[iVar0].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_77(Local_1225[iParam0].f_53[iVar0].f_3);
		iVar8[iVar0] = 0;
		if (func_150(1))
		{
			if (Local_1225[iParam0].f_53[iVar0].f_1 != -1)
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_1225[iParam0].f_53[iVar0].f_1))
				{
					if (func_73(Local_1225[iParam0].f_53[iVar0].f_1, 1))
					{
						iVar8[iVar0] = func_171(Local_1225[iParam0].f_53[iVar0].f_1, -2, 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = func_77(func_148(iParam0, iLocal_3181));
	func_131(Local_1225[iParam0].f_53[0].f_1, Local_1225[iParam0].f_53[1].f_1, Local_1225[iParam0].f_53[2].f_1, uVar1[0], uVar1[1], uVar1[2], iVar5, iVar6, &uLocal_3184, iVar7, func_153(), 1, iVar8[0], iVar8[1], iVar8[2]);
	if (Local_1225[iParam0].f_53[0] == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 23))
		{
			if (func_130(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			GAMEPLAY::SET_BIT(&iLocal_539, 23);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_539, 23))
	{
		if (func_130(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_539, 23);
	}
}

bool func_130(bool bParam0)
{
	return func_69(PLAYER::PLAYER_ID(), bParam0);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)
{
	if (func_145(0) == 0)
	{
		return;
	}
	func_144();
	iVar1 = 0;
	if (((Global_2461747[0] != iParam0 || Global_2461747[1] != iParam1) || Global_2461747[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2461747[0] = iParam0;
	Global_2461747[1] = iParam1;
	Global_2461747[2] = iParam2;
	Global_2461747[3] = 0;
	Global_2461747[4] = 0;
	if (Global_2461747[0] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2461747[0]);
			Global_2461753[0] = { func_143(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_140(iParam3, &(Global_2461753[0]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[1] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2461747[1]);
			Global_2461753[1] = { func_143(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_140(iParam4, &(Global_2461753[1]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[2] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2461747[2]);
			Global_2461753[2] = { func_143(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_140(iParam5, &(Global_2461753[2]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_27())
			{
				if (func_136(PLAYER::PLAYER_ID()) == 0)
				{
					func_140(iParam6, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_136(PLAYER::PLAYER_ID()) == 0)
			{
				func_140(iParam6, "HUD_USCORE", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_136(PLAYER::PLAYER_ID()) == 0)
			{
				func_140(iParam6, "HUD_UBEST", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_135(sParam10))
	{
		sVar2 = sParam10;
	}
	func_132(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
	*uParam8 = 0;
}

void func_132(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_134(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_133(7, iVar0);
		Global_1378678.f_4562[iVar0] = uParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = uParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = uParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_133(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_134(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

int func_135(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_136(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_139() && !func_138()) || func_137(PLAYER::PLAYER_ID(), 21)) || func_137(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_18(&(Global_1574650.f_13)))
		{
			if (!func_5(&(Global_1574650.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1574650.f_13));
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 10))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 9);
}

bool func_137(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

bool func_138()
{
	return Global_1312418.f_1;
}

bool func_139()
{
	return Global_1312418;
}

void func_140(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_134(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_133(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = iParam3;
		Global_1378678.f_3944.f_172[iVar0] = iParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = iParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_142())
		{
			Global_1378678.f_1130 = 1;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_141())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

int func_141()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_143(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, UI::_GET_LABEL_TEXT("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, UI::_GET_LABEL_TEXT("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, UI::_GET_LABEL_TEXT("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, UI::_GET_LABEL_TEXT("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, UI::_GET_LABEL_TEXT("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_144()
{
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2462225 = 1;
}

int func_145(bool bParam0)
{
	if (func_147())
	{
		return 0;
	}
	if (func_146())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_756(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_146()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_196 != 0;
}

bool func_147()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 12);
}

float func_148(int iParam0, int iParam1)
{
	fVar0 = func_149(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return (fVar0 + fVar1);
}

float func_149(int iParam0, int iParam1)
{
	return Local_80.f_6[iParam0].f_36[iParam1];
}

bool func_150(bool bParam0)
{
	return func_73(PLAYER::PLAYER_ID(), bParam0);
}

void func_151(int iParam0)
{
	if (IntToFloat(iParam0) < GAMEPLAY::GET_FRAME_TIME())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 0))
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_2537071.f_4963)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2537071.f_4963));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			if (Global_2537071.f_4971 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2537071.f_4971);
				Global_2537071.f_4971 = -1;
			}
			Global_2537071.f_4961 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 0))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 4))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 2))
				{
					if (AUDIO::_0x109697E2FFBAC8A1())
					{
						if ((!GAMEPLAY::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_2537071.f_4963)))
						{
							StringCopy(&(Global_2537071.f_4963), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
							GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 1);
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !AUDIO::_0x0626A247D2405330())
						{
							StringCopy(&(Global_2537071.f_4963), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 3))
				{
					Global_2537071.f_4971 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2537071.f_4971, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 0))
			{
				Global_2537071.f_4961 = 0;
				Global_2537071.f_4971 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 2))
				{
					GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 2);
					GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 5);
				}
				else
				{
					GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4961), 5);
					GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4961), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 0))
		{
			Global_2537071.f_4961 = 0;
			Global_2537071.f_4971 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
			GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 2);
				GAMEPLAY::SET_BIT(&(Global_2537071.f_4961), 5);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4961), 2);
				GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4961), 5);
			}
		}
	}
}

void func_152(int iParam0, int iParam1, char* sParam2)
{
	if (func_145(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_135(sParam2))
	{
		sVar0 = sParam2;
	}
	func_132(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0, -1);
}

char* func_153()
{
	return "HUD_COUNTDOWN";
	switch (func_260(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_154())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_154()
{
	if (func_260(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_155(int iParam0)
{
	return Local_80.f_6[iParam0].f_72;
}

int func_156(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam1) > 63)
	{
		return 0;
	}
	if (func_166(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312585.f_54;
	func_160();
	Global_1312585 = 9;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	Global_1312585.f_54 = uVar0;
	func_159();
	func_158(bParam2);
	func_157();
	return 1;
}

void func_157()
{
	GAMEPLAY::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_159()
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_160()
{
	func_162();
	func_161(0);
}

void func_161(bool bParam0)
{
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_162()
{
	if (!func_165())
	{
	}
	if (func_164())
	{
		UI::_BEGIN_TEXT_COMMAND_UNK(&(Global_1312585.f_12));
		func_163();
		UI::_END_TEXT_COMMAND_UNK();
	}
}

void func_163()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312585.f_16));
			return;
		
		case 10:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312585.f_16));
			return;
		
		case 14:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_164()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_165()
{
	if (!func_164())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_163();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_166(char* sParam0, char* sParam1)
{
	if (!func_164())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_167(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_168(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312585 = 15;
		Global_1312585.f_56 = iParam3;
		Global_1312585.f_57 = iParam4;
		Global_1312585.f_54 = iParam1;
	}
}

int func_168(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam1) > 63)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam2) > 63)
	{
		return 0;
	}
	if (func_169(sParam0, sParam1, sParam2) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_160();
	Global_1312585 = 10;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	StringCopy(&(Global_1312585.f_32), sParam2, 64);
	Global_1312585.f_58 = uParam4;
	Global_1312585.f_56 = uParam4;
	func_159();
	func_158(bParam3);
	func_157();
	return 1;
}

bool func_169(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_164())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(sParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_16)))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam2) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_32));
}

void func_170(char* sParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam2);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam1);
	if (!iParam4 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam4);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam5);
}

int func_171(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_693(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_693(PLAYER::PLAYER_ID()) || (func_197() && func_692())) && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		uVar1 = func_196();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(uVar1))
			{
				if (NETWORK::_NETWORK_GET_PED_PLAYER(uVar1) != -1)
				{
					if (func_756(NETWORK::_NETWORK_GET_PED_PLAYER(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_194(iParam1, iParam0, 0);
							}
							else
							{
								return func_184(iParam0, NETWORK::_NETWORK_GET_PED_PLAYER(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_184(iParam0, NETWORK::_NETWORK_GET_PED_PLAYER(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_194(iParam1, iParam0, 0);
				}
				else
				{
					return func_172(0, -1, 0);
				}
			}
			else
			{
				return func_172(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_194(iParam1, iParam0, 0);
		}
		else
		{
			return func_184(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_184(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_172(bool bParam0, int iParam1, bool bParam2)
{
	return func_173(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_173(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_183() || (func_182() && func_180())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_179(iParam2, iVar0);
		}
		else
		{
			return func_179(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_178(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_177(1);
				}
				else
				{
					return func_177(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_174(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_174(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_177(1);
	}
	return func_177(0);
}

int func_174(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_176(iParam0, iParam1, iParam3);
	if (func_175(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_175(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_178(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_177(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_178(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 0);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 1);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_176(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_180()
{
	if (func_181())
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_181()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_182()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1518439287) > 0);
}

int func_183()
{
	if (func_181() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[PLAYER::PLAYER_ID()] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590535[iVar2] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_190())
			{
				iVar3 = func_189(iParam0);
				if (!iVar3 == -1)
				{
					return func_187(iVar3);
				}
			}
			if ((func_186(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_178(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_177(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_185(1);
			}
			else
			{
				return func_173(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_177(1);
			}
			else
			{
				return func_173(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_189(iParam0);
	if (!iVar4 == -1)
	{
		return func_187(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_185(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_186(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_187(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_188(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_188(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_189(int iParam0)
{
	if (!iParam0 == func_27())
	{
		if (func_73(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_64(iParam0)];
		}
	}
	return -1;
}

int func_190()
{
	if (((func_193() || func_192()) || func_58()) || func_191())
	{
		return 1;
	}
	return 0;
}

bool func_191()
{
	return Global_2450632.f_19;
}

var func_192()
{
	return Global_2450632.f_16;
}

var func_193()
{
	return Global_2450632.f_15;
}

int func_194(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_190())
	{
		iVar2 = func_189(iParam1);
		if (!iVar2 == -1)
		{
			return func_187(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_27())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_173(iParam1, !bParam2, iParam0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_195(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26) && !func_178(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_185(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_196()
{
	return Global_2359302.f_2;
}

bool func_197()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

char* func_198()
{
	iVar0 = func_64(PLAYER::PLAYER_ID());
	if (iVar0 != func_27())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_29(iVar0, 28) || func_29(PLAYER::PLAYER_ID(), 28)) || func_66(iVar0)) && !func_65(iVar0))
			{
				return func_67(iVar0, 0);
			}
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_67(iVar0, 0);
			}
		}
		sVar1 = func_72(&(Global_1628237[iVar0].f_11.f_104));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_67(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_199(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_378[iParam0].f_4, 2))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_378[iParam0].f_4, 3))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_200(char* sParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_201(sParam0))
	{
		return;
	}
	func_160();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_159();
	func_158(bParam1);
	func_157();
}

bool func_201(char* sParam0)
{
	if (!func_164())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_202(sParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_202(char* sParam0)
{
	if (!func_164())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_203()
{
	if (!func_164())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_160();
}

bool func_204(int iParam0)
{
	return Global_2439138.f_2723[0].f_1 == iParam0;
}

int func_205(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_48(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_206(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_45(&Var0);
}

int func_207()
{
	return 21;
}

int func_208(int iParam0, int iParam1)
{
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_64(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_209(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_2537071.f_4971 = -1;
	bVar0 = (func_31(PLAYER::PLAYER_ID(), 0) && func_30(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_233(func_234(iParam0), 1);
	}
	else
	{
		func_230(iParam0, -1);
		if (func_229(PLAYER::PLAYER_ID()))
		{
			Global_1574650.f_3 = iParam0;
		}
		else
		{
			func_228(iParam0);
		}
		Global_1574650.f_4 = -1;
		if (func_229(PLAYER::PLAYER_ID()))
		{
			GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 5);
		}
		if (((func_139() && !func_138()) || func_137(PLAYER::PLAYER_ID(), 21)) || func_137(PLAYER::PLAYER_ID(), 25))
		{
			GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 4);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 17);
		GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 20);
		if (func_227(iParam0))
		{
			func_226();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_222(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
		if (func_220(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_218(1);
				if (func_215(0))
				{
					GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 9);
				}
				if (!bParam6)
				{
					GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_213(1);
			GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 12);
		}
		if (bParam5)
		{
			func_212();
			GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_210(iParam0))
			{
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 21);
			}
		}
	}
	Global_2513109 = 1;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_211())
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	switch (func_154())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_212()
{
	GAMEPLAY::SET_BIT(&(Global_2537071.f_4962), 0);
}

void func_213(bool bParam0)
{
	if (bParam0)
	{
		Global_98796.f_8 = 1;
	}
	else
	{
		Global_98796.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_214(iVar0);
		iVar0++;
	}
}

void func_214(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

int func_215(int iParam0)
{
	uVar0 = func_216(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((GAMEPLAY::IS_BIT_SET(uVar0, 0) && GAMEPLAY::IS_BIT_SET(iVar0, 1)) && GAMEPLAY::IS_BIT_SET(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((GAMEPLAY::IS_BIT_SET(iVar0, 3) && GAMEPLAY::IS_BIT_SET(iVar0, 4)) && GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((GAMEPLAY::IS_BIT_SET(iVar0, 6) && GAMEPLAY::IS_BIT_SET(iVar0, 7)) && GAMEPLAY::IS_BIT_SET(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((GAMEPLAY::IS_BIT_SET(iVar0, 9) && GAMEPLAY::IS_BIT_SET(iVar0, 10)) && GAMEPLAY::IS_BIT_SET(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_217(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_217(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

void func_218(int iParam0)
{
	if (func_219() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_219()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_221(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_221(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

void func_222(float fParam0)
{
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_223())
	{
		return;
	}
	fVar0 = (Global_2537071.f_5119 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == SCRIPT::GET_ID_OF_THIS_THREAD() && GAMEPLAY::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_223()
{
	switch (func_225())
	{
		case 0:
			return func_224();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_224()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_225()
{
	return Global_30768;
}

void func_226()
{
	Global_2425662[PLAYER::PLAYER_ID()].f_200 = 0;
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4561), 1);
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_228(int iParam0)
{
	Global_1628237[PLAYER::PLAYER_ID()] = iParam0;
}

bool func_229(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 2);
}

void func_230(int iParam0, int iParam1)
{
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_232(0) || func_232(func_231(iVar0)))
		{
			GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 2);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 2);
		}
	}
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23634;
}

bool func_232(int iParam0)
{
	uVar0 = func_216(2480, -1, 0);
	return GAMEPLAY::IS_BIT_SET(uVar0, iParam0);
}

void func_233(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_208, iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_208), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_208, iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_208), iParam0);
	}
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

void func_235(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0].f_1 == iParam0)
		{
			Global_2439138.f_2723[iVar0].f_2 = 5;
			func_48(&(Global_2439138.f_2723[iVar0].f_69), 1);
		}
		iVar0++;
	}
}

float func_236(int iParam0)
{
	return Local_1225[iParam0].f_40;
}

bool func_237(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_238(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_240())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_239(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

bool func_240()
{
	return Global_2439138.f_2723[0].f_1 != 0;
}

void func_241(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
		{
			if (((!func_106(PLAYER::PLAYER_ID()) && !func_259(PLAYER::PLAYER_ID())) && !func_136(PLAYER::PLAYER_ID())) && !func_108(PLAYER::PLAYER_ID()))
			{
				if (func_139())
				{
					func_251(2, 0, 1);
					func_250();
				}
				if (func_232(0))
				{
					uVar0 = func_216(2480, -1, 0);
					GAMEPLAY::CLEAR_BIT(&uVar0, 0);
					func_250();
				}
				if (func_232(func_231(func_260(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_216(2480, -1, 0);
					GAMEPLAY::CLEAR_BIT(&uVar0, func_231(func_260(PLAYER::PLAYER_ID())));
					func_250();
				}
				if (func_249())
				{
					func_250();
				}
				if (func_260(PLAYER::PLAYER_ID()) > -1)
				{
					GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 7);
					if (func_248(PLAYER::PLAYER_ID()))
					{
						func_247();
					}
					func_244(func_246(func_260(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 7);
		func_242();
	}
}

void func_242()
{
	if (func_243())
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 17);
	}
}

bool func_243()
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 17);
}

void func_244(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_245()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_245()
{
	iVar0 = 0;
	return iVar0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_247()
{
	if (!func_243())
	{
		Global_2537071.f_6577 = NETWORK::GET_NETWORK_TIME();
		GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 17);
	}
}

int func_248(int iParam0)
{
	if (func_260(iParam0) == 236 || func_260(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_249()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_250()
{
	if (func_249())
	{
		Global_2439138.f_1156.f_16 = 1;
	}
}

void func_251(int iParam0, int iParam1, bool bParam2)
{
	if (func_139())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_258(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_258(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[PLAYER::PLAYER_ID()].f_8 = 0;
				func_257(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[PLAYER::PLAYER_ID()].f_8 = 0;
			func_257(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_256()) && !func_252(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		unk_0x35EEC6C2BC821A71(0, -1, -1, iParam0);
	}
}

int func_252(int iParam0)
{
	if (func_253(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_254(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_254(int iParam0)
{
	return func_255(iParam0);
}

bool func_255(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

bool func_256()
{
	return Global_2450632.f_740;
}

void func_257(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_139())
		{
			if (func_756(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_756(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

void func_258(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

bool func_259(int iParam0)
{
	if (func_229(iParam0))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 8);
}

int func_260(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

bool func_261(int iParam0, int iParam1)
{
	return Local_378[iParam0].f_1[iParam1];
}

int func_262(bool bParam0, bool bParam1)
{
	if (func_259(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_136(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_263(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_263(int iParam0)
{
	return func_36(iParam0, 0);
}

void func_264(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 22))
	{
		if (iLocal_3181 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (func_199(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_303(1, 1))
				{
					if (Local_80.f_6[iParam0].f_74[0] != -1)
					{
						if (Local_80.f_6[iParam0].f_74[0].f_3 > 0f)
						{
							if (Local_80.f_6[iParam0].f_74[0] != NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!func_208(PLAYER::PLAYER_ID(), Local_80.f_6[iParam0].f_74[0].f_1))
								{
									func_265();
									GAMEPLAY::SET_BIT(&iLocal_539, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_265()
{
	GAMEPLAY::SET_BIT(&(Global_2537071.f_1734), 19);
}

void func_266(int iParam0)
{
	if (iLocal_376 != func_8(iParam0))
	{
		iLocal_376 = func_8(iParam0);
		if (iLocal_376 > -1)
		{
			iLocal_377++;
			GAMEPLAY::SET_BIT(&iLocal_539, 25);
		}
	}
}

void func_267(int iParam0)
{
	if (func_667() == 1)
	{
		if (func_8(iParam0) == NETWORK::PARTICIPANT_ID_TO_INT() && !func_262(1, 0))
		{
			if (!func_221(PLAYER::PLAYER_ID()))
			{
				func_268(1);
			}
		}
		else if (func_221(PLAYER::PLAYER_ID()))
		{
			func_268(0);
		}
	}
}

void func_268(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 0))
		{
			Global_2462854 = func_260(PLAYER::PLAYER_ID());
			if (Global_2462854 == -1)
			{
				Global_2462854 = Global_1574650.f_4;
			}
			if (func_300(Global_2462854) == 0)
			{
				if (func_299(1) > 0)
				{
					func_298(26, -1);
				}
			}
			if (func_139())
			{
				func_251(2, 0, 1);
				func_250();
			}
			if (func_232(0))
			{
				uVar1 = func_216(2480, -1, 0);
				GAMEPLAY::CLEAR_BIT(&uVar1, 0);
				func_250();
			}
			if (func_232(func_231(func_260(PLAYER::PLAYER_ID()))))
			{
				uVar1 = func_216(2480, -1, 0);
				GAMEPLAY::CLEAR_BIT(&uVar1, func_231(func_260(PLAYER::PLAYER_ID())));
				func_250();
			}
			if (func_249())
			{
				func_250();
			}
			GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 0))
	{
		if ((!func_297() && !func_296()) && !func_295())
		{
			Global_2462854 = -1;
			func_294(26, -1);
		}
		else if (func_300(Global_2462854) == 0)
		{
			iVar0 = func_280(1);
			if (iVar0 > 0)
			{
				func_275(-2011184620, iVar0);
				func_271(1932, 1, -1);
				func_275(-390324340, 1);
			}
		}
		else if (func_269(26, -1))
		{
			Global_2462854 = -1;
			func_294(26, -1);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 0);
	}
}

bool func_269(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	uVar0 = func_270(iParam1);
	uVar1 = GAMEPLAY::GET_PROFILE_SETTING(uVar0);
	return GAMEPLAY::IS_BIT_SET(uVar1, iParam0);
}

int func_270(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_216(iParam0, func_217(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_274(iParam0))
	{
		func_273(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_272(iParam0, iVar0, iParam2, 1);
	}
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_217(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_217(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_217(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_217(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_217(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_217(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_217(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_217(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_217(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_217(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_217(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_217(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_217(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_217(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_217(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_217(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_217(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_217(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_217(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_217(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_217(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_217(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_217(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_217(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_217(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_217(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_217(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_217(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_217(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_217(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_217(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_217(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_217(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_217(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_217(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_217(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_217(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_217(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_217(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_217(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_217(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_217(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_217(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_217(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_217(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_217(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_217(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_217(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_217(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_217(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_217(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_217(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_217(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_217(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_217(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_217(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_217(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_217(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_217(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_217(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_217(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_217(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_217(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_217(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_217(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_217(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_217(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_217(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_217(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_217(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_217(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_217(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_217(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_217(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_217(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_217(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_217(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_217(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_217(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_217(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_217(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_217(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_217(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_217(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_217(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_217(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_217(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_217(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_217(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_217(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_217(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_217(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_217(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_217(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_217(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_217(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_217(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_217(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_217(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_217(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_217(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_217(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_217(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_217(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_217(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_217(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_217(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_274(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

void func_275(int iParam0, int iParam1)
{
	iVar0 = func_279(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_278(iParam0))
	{
		func_277(iParam0, iVar0);
	}
	else
	{
		func_276(iParam0, iVar0);
	}
}

void func_276(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = iParam1;
			break;
		
		case 1669900865:
			Global_1387912 = iParam1;
			break;
		
		case 54164875:
			Global_1387912 = iParam1;
			break;
		
		case -842450336:
			Global_1387913 = iParam1;
			break;
		
		case -1576871964:
			Global_1387914 = iParam1;
			break;
		
		case -1446982891:
			Global_1387915 = iParam1;
			break;
		
		case -1676857426:
			Global_1387916 = iParam1;
			break;
		
		case 1280806976:
			Global_1387917 = iParam1;
			break;
		
		case -1096682281:
			Global_1387918 = iParam1;
			break;
		
		case 1894078811:
			Global_1387919 = iParam1;
			break;
		
		case -1566025259:
			Global_1387920 = iParam1;
			break;
		
		case -621080327:
			Global_1387921 = iParam1;
			break;
		
		case 1021002722:
			Global_1387922 = iParam1;
			break;
		
		case -1670771646:
			Global_1387923 = iParam1;
			break;
		
		case -1992420464:
			Global_1387924 = iParam1;
			break;
		
		case -386175531:
			Global_1387925 = iParam1;
			break;
		
		case -203536263:
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_277(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_278(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 406381289:
			case 1669900865:
			case 54164875:
			case -842450336:
			case -1576871964:
			case -1446982891:
			case -1676857426:
			case 1280806976:
			case -1096682281:
			case 1894078811:
			case -1566025259:
			case -621080327:
			case 1021002722:
			case -1670771646:
			case -1992420464:
			case -386175531:
			case -203536263:
				return 1;
				break;
			}
	}
	return 0;
}

int func_279(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_280(int iParam0)
{
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2461737 == 0)
	{
		return 0;
	}
	if (func_295())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_293() || func_291()))
		{
			Global_2460684 = 1;
		}
	}
	Global_2461737 = 0;
	if (Global_1315704)
	{
		iVar0 = 1;
	}
	if (Global_2460684)
	{
		iVar0 = 1;
	}
	if (Global_2460683)
	{
		iVar0 = 1;
	}
	if (func_47(Global_110666.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2460606)
	{
		iVar0 = 1;
	}
	if (func_290(512))
	{
		iVar0 = 1;
	}
	if (func_289(128))
	{
		iVar0 = 1;
	}
	if (Global_1315728 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_288())
	{
		iVar0 = 0;
	}
	if (Global_2461176)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_286())
		{
			if (Global_4456448.f_197270 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_285())
	{
		iVar0 = 0;
	}
	if ((Global_2460684 || Global_2460683) || Global_1315704)
	{
		if (func_291())
		{
			iVar0 = 0;
		}
	}
	Global_2461176 = 0;
	Global_2460683 = 0;
	Global_2460684 = 0;
	Global_1315704 = 0;
	Global_2460606 = 0;
	func_283(&(Global_110666.f_1), 32);
	func_282(512);
	func_281(128);
	return iVar0;
}

void func_281(int iParam0)
{
	Global_110723 = (Global_110723 - (Global_110723 && iParam0));
}

void func_282(int iParam0)
{
	Global_110724 = (Global_110724 - (Global_110724 && iParam0));
}

void func_283(var uParam0, int iParam1)
{
	func_284(uParam0, iParam1);
}

void func_284(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_285()
{
	if (((Global_1574428 || Global_1574398) || func_36(PLAYER::PLAYER_ID(), 0)) || func_197())
	{
		return 1;
	}
	return 0;
}

int func_286()
{
	switch (func_287())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_287()
{
	return Global_2451426.f_1.f_2822;
}

bool func_288()
{
	return Global_1312854;
}

bool func_289(int iParam0)
{
	return (Global_110723 && iParam0) != 0;
}

bool func_290(int iParam0)
{
	return (Global_110724 && iParam0) != 0;
}

int func_291()
{
	if (func_300(Global_2462854))
	{
		return 0;
	}
	if (func_292(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0] == iParam1)
	{
		return func_221(iParam0);
	}
	return 0;
}

int func_293()
{
	if (func_300(Global_2462854))
	{
		return 0;
	}
	if (func_221(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_294(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			uVar1 = func_270(iParam1);
			iVar0 = GAMEPLAY::GET_PROFILE_SETTING(uVar1);
			if (GAMEPLAY::IS_BIT_SET(iVar0, iParam0))
			{
				GAMEPLAY::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

bool func_295()
{
	return GAMEPLAY::IS_BIT_SET(Global_1312425, 0);
}

bool func_296()
{
	return Global_1312846;
}

bool func_297()
{
	return Global_1312877;
}

void func_298(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			uVar1 = func_270(iParam1);
			iVar0 = GAMEPLAY::GET_PROFILE_SETTING(uVar1);
			if (!GAMEPLAY::IS_BIT_SET(iVar0, iParam0))
			{
				GAMEPLAY::SET_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_299(int iParam0)
{
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315728 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_288())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_286())
		{
			if (Global_4456448.f_197270 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_285())
	{
		iVar0 = 0;
	}
	Global_2461737 = 1;
	return iVar0;
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11389)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11391)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11388)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11392)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11393)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11394)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11390)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11395)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11396)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11397)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11398)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_301()
{
	if (func_303(0, 0))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_539, 25))
	{
		if (iLocal_376 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (Local_364.f_11 == 0)
			{
				Local_364.f_11 = NETWORK::_GET_POSIX_TIME();
			}
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_539, 25);
	}
}

void func_302()
{
	if (func_237("KOTC_1STHELP"))
	{
		UI::CLEAR_HELP(1);
	}
	if (func_237("KOTC_OTHRKG"))
	{
		UI::CLEAR_HELP(1);
	}
	if (func_237("KOTC_YOUKNG"))
	{
		UI::CLEAR_HELP(1);
	}
	if (func_237("KOTC_CONTS"))
	{
		UI::CLEAR_HELP(1);
	}
}

int func_303(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_539, 17))
	{
		return 1;
	}
	if (func_343(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_146())
	{
		return 1;
	}
	if (func_232(9))
	{
		return 1;
	}
	if (func_232(0))
	{
		return 1;
	}
	if (!func_318(0, 1, 1))
	{
		return 1;
	}
	if (func_311())
	{
		return 1;
	}
	if (func_306(4))
	{
		return 1;
	}
	if (func_305())
	{
		return 1;
	}
	if (func_262(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1662006)
	{
		return 1;
	}
	if (func_304(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0)
{
	if (!func_756(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0].f_35;
}

bool func_305()
{
	return Global_98796.f_346 > 0;
}

int func_306(int iParam0)
{
	if (func_305())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_310(iVar0) == iParam0)
			{
				if (func_307(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_307(int iParam0)
{
	return func_308(iParam0, 6, 1);
}

int func_308(int iParam0, int iParam1, bool bParam2)
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
		if (func_225() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_216(func_309(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_309(int iParam0)
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

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

int func_311()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0))
	{
		return 1;
	}
	if (func_313() && Global_1590535[PLAYER::PLAYER_ID()].f_98 != 3)
	{
		return 1;
	}
	if (func_312() && Global_1590535[PLAYER::PLAYER_ID()].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574650.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_312()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 5);
}

int func_313()
{
	if (((func_317() || func_316()) || func_315()) || func_314())
	{
		return 1;
	}
	return 0;
}

bool func_314()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 1);
}

bool func_315()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 2);
}

bool func_316()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 20);
}

bool func_317()
{
	return Global_2450632.f_598;
}

int func_318(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_342(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_137(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_137(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_252(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_341())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_340(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_339())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_106(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_331(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_330(PLAYER::PLAYER_ID()) != func_27() && func_330(PLAYER::PLAYER_ID()) == func_64(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_328(func_329()) && !func_248(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_297())
	{
		return 0;
	}
	if (func_146())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_254(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_326())
	{
		return 0;
	}
	if (func_137(PLAYER::PLAYER_ID(), 0) || func_137(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_137(PLAYER::PLAYER_ID(), 12) || func_137(PLAYER::PLAYER_ID(), 14)) || func_137(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_343(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_325() && !Global_2513487)
		{
			return 0;
		}
	}
	if (func_324(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_305())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (func_304(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_323())
	{
		return 0;
	}
	if (func_321(PLAYER::PLAYER_ID()) && Global_1590184.f_171)
	{
		return 0;
	}
	if (func_320())
	{
		return 0;
	}
	if (func_108(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2536130)
	{
		return 0;
	}
	if (Global_1694139)
	{
		return 0;
	}
	if (!func_107(PLAYER::PLAYER_ID()))
	{
		if (func_319(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_319(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0].f_12 != 0;
	}
	return 0;
}

bool func_320()
{
	return Global_1676377.f_474;
}

int func_321(int iParam0)
{
	if (func_322(Global_1590535[iParam0].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_323()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_324(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 11);
}

bool func_325()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_326()
{
	if (func_327() == 0)
	{
		return 1;
	}
	return 0;
}

int func_327()
{
	return Global_1312467.f_18;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_329()
{
	return Global_2439138.f_2723[0].f_1;
}

int func_330(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_331(int iParam0)
{
	iVar0 = 2;
	bVar1 = ((func_338(iParam0) && !func_229(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 8));
	bVar2 = func_106(iParam0);
	bVar3 = func_139();
	uVar4 = func_332();
	if ((bVar1 && (func_107(iParam0) || func_221(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_30(iParam0)) && !func_28(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

int func_332()
{
	if ((func_29(PLAYER::PLAYER_ID(), 21) || func_29(PLAYER::PLAYER_ID(), 22)) || func_336())
	{
		return 1;
	}
	if (func_334())
	{
		func_333(22);
		return 1;
	}
	return 0;
}

void func_333(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_4), iParam0);
}

int func_334()
{
	if (func_31(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_139() && !func_138()) || func_137(PLAYER::PLAYER_ID(), 21)) || func_137(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_335(27);
		}
	}
	return 0;
}

void func_335(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_4), iParam0);
}

int func_336()
{
	return func_337(358, -1);
}

int func_337(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_217(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_338(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

bool func_339()
{
	return Global_1590535[PLAYER::PLAYER_ID()] == 5;
}

int func_340(int iParam0)
{
	if (Global_2425662[iParam0].f_261.f_4 != 0 || Global_2425662[iParam0].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_341()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 0);
}

bool func_342(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_5, iParam1);
}

int func_343(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_344(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	Global_1574650.f_6 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param1);
	if (fVar0 < fParam5 && !func_229(PLAYER::PLAYER_ID()))
	{
		if ((iParam0 != 146 && !func_137(PLAYER::PLAYER_ID(), 21)) && !func_137(PLAYER::PLAYER_ID(), 25))
		{
			func_358(Param1, 1, 0);
		}
		if ((!*uParam4 || GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 3)) && func_756(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			func_222(func_357(iParam0));
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_356(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_355(iParam0);
				PLAYER::SET_MAX_WANTED_LEVEL(iVar1);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iVar1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar1, 1);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
				}
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 8);
			}
			GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 3);
			GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam6) && !func_229(PLAYER::PLAYER_ID()))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 3) && func_756(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_354();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(Global_262145.f_11401);
			GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 3);
			GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 3);
		}
	}
	else if ((*uParam4 || GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 3)) && func_756(PLAYER::PLAYER_ID(), 1, 1))
	{
		*uParam4 = 0;
		func_354();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 8);
		GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 3);
		GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 3);
		if (iParam0 != 146 && uParam7)
		{
			func_345();
		}
	}
}

void func_345()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_24), &Global_2409327, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_26), &Global_2409329, 19);
	func_352();
	func_348(1, 1, 0);
	func_346();
}

void func_346()
{
	func_347(0, 0);
}

void func_347(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_348(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_351();
	}
	if (!bParam2)
	{
		func_100(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_350(0);
	func_349();
}

void func_349()
{
	if (Global_2405072.f_487.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_350(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_351()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_352()
{
	func_353();
	Global_2405072.f_2254 = 0;
}

void func_353()
{
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_354()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		
		case 144:
			return 0;
		
		default:
	}
	return 5;
}

float func_356(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

float func_357(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
		case 236:
		case 150:
			return 0f;
		
		default:
	}
	return 1f;
}

void func_358(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { Param0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

Vector3 func_359(int iParam0)
{
	return Local_1225[iParam0].f_24;
}

void func_360(int iParam0)
{
	if (func_303(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1294[iVar0] = -1;
		Local_1294[iVar0].f_1 = func_27();
		Local_1294[iVar0].f_9 = 0;
		Local_1294[iVar0].f_31 = -1;
		if (Local_80.f_6[iParam0].f_74[iVar0] > -1)
		{
			Local_1294[iVar0] = Local_80.f_6[iParam0].f_74[iVar0];
			Local_1294[iVar0].f_1 = Local_80.f_6[iParam0].f_74[iVar0].f_1;
			Local_1294[iVar0].f_9 = func_77(Local_80.f_6[iParam0].f_74[iVar0].f_3);
		}
		iVar0++;
	}
	func_361(&Local_1294, &(Local_1225[iParam0].f_66), 27, &uLocal_2639, &uLocal_2755, -1, 0, 0);
}

void func_361(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_481(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_479() || iParam2 == 28)
	{
		if (func_432(uParam1, iParam2, uParam3, Global_1574185, 0, func_482(), iParam7))
		{
			func_431(1);
			if ((!func_430() && !func_429()) || GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 1))
			{
				if (func_428())
				{
					func_426();
				}
				else
				{
					GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_425(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_424(uParam1, 0, 0);
							if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
							{
								GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_756(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_36(iVar35, 0))
									{
										if ((func_423(iVar35) || Global_2425662[iVar35].f_236 != -1) || func_422(iVar35))
										{
											iVar44 = iVar35;
											if (func_74(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_419(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_416(PLAYER::PLAYER_ID(), 0) && func_110(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_415())
							{
								if (func_756(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_27();
								}
							}
							else
							{
								iVar35 = iParam0[iVar52]->f_1;
							}
							if ((func_414(iVar35) && func_411(iVar35, iParam2)) && func_756(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590535[iVar44].f_211.f_6;
								Var38 = { func_406(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*uParam4[iVar52] = { func_41(iVar35) };
								iVar37 = func_400(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574185++;
								if (iParam0[iVar52]->f_22 != -1f)
								{
									fVar45 = iParam0[iVar52]->f_22;
								}
								if (iParam0[iVar52]->f_31 != -1)
								{
									iVar46 = iParam0[iVar52]->f_31;
								}
								if (iParam0[iVar52]->f_41 != -1)
								{
									iVar47 = iParam0[iVar52]->f_41;
								}
								iVar43 = iParam0[iVar52]->f_9;
								if ((iParam0[iVar52]->f_9 != -1 || iParam0[iVar52]->f_22 != -1f) || iParam0[iVar52]->f_31 != -1)
								{
									if (!func_415())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_395(&iVar43, &fVar45, iParam0[iVar52]->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_394(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = iParam0[iVar52]->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_393(iVar35, 0);
								if (bVar34)
								{
									if (func_73(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44].f_1 = iVar53;
								if (iParam0[iVar52]->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, iParam0[iVar52]->f_39, 16);
								}
								if (func_392(iParam5))
								{
									func_391(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, iParam0[iVar52]->f_40, iVar48, bParam6);
								}
								else
								{
									func_391(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, iParam0[iVar52]->f_40, iVar48, bParam6);
								}
								GAMEPLAY::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_756(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_27();
							}
							if (func_414(iVar35))
							{
								if (func_756(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590535[iVar44].f_211.f_6;
									Var38 = { func_406(iVar35) };
									*uParam4[iVar52] = { func_41(iVar35) };
									iVar37 = func_400(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574185++;
									iVar51 = func_393(iVar35, 1);
									if (bVar34)
									{
										if (func_73(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44].f_1 = iVar53;
									func_374(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_371(uParam3, uParam1, iParam2);
						}
						func_3(&(uParam3->f_21));
						func_370();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_369(uParam3, uParam1);
							func_368(uParam1, 0, 1);
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 7);
						}
						func_369(uParam3, uParam1);
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_364(uParam3))
						{
							Global_1574406 = 1;
						}
						func_362(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
					{
						GRAPHICS::_SET_2D_LAYER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::_SET_2D_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_370();
			func_425(0);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 10))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_362(var uParam0)
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_363(0);
	}
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_364(var uParam0)
{
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_27() && func_756(iVar15, 0, 1))
	{
		Var2 = { func_41(iVar15) };
		iVar1 = func_367(uParam0, uParam0->f_37);
		if (func_366(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_365(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_365(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_365(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_365(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_365(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_365(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_365(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1] = iParam2;
}

bool func_366(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_367(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1];
}

void func_368(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "COLLAPSE"))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(iParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_369(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GAMEPLAY::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_370()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_371(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_27())
		{
			if (func_756(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0].f_1 != -1)
				{
					iVar1 = func_373(uParam0->f_38[iVar0], 0, iParam2);
					func_372(uParam1, uParam0->f_38[iVar0].f_1, iVar1, Global_1590535[iVar0].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_372(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_ICON"))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

int func_373(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_374(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	if (iParam4 >= func_390() && iParam4 < func_389())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam2, sVar1))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_388("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
			}
			func_388(sParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_388("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
			func_388("");
			if (uParam3->f_108 == 6)
			{
				func_388("");
			}
			else
			{
				func_388(&sParam5);
			}
			func_379(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			if (func_378(uParam3))
			{
				func_377("DPAD_FRIEND");
			}
			else if (func_376(uParam3))
			{
				func_377("DPAD_FRIEND");
			}
			else if (func_375(uParam3))
			{
				func_377("DPAD_CREW");
			}
			else
			{
				func_377("");
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

bool func_375(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_376(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 5);
}

void func_377(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

int func_378(var uParam0)
{
	if (func_376(uParam0) && func_375(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_379(var uParam0, int iParam1)
{
	if (func_387(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(121);
	}
	else if (func_383(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(122);
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && GAMEPLAY::IS_BIT_SET(Global_2425662[iParam1].f_413, 0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(123);
	}
	else
	{
		if (func_380())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_380()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_381() || func_193())
		{
			return 1;
		}
	}
	return 0;
}

int func_381()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_193();
	}
	return func_382(Global_4456448.f_194990);
}

int func_382(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_383(int iParam0)
{
	if ((func_756(iParam0, 0, 1) && func_384()) && func_69(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_384()
{
	if (func_338(PLAYER::PLAYER_ID()) || func_386())
	{
		if (!func_385(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_385(int iParam0)
{
	if (func_260(iParam0) == 236 || func_260(iParam0) == 150)
	{
		return func_107(iParam0);
	}
	return 0;
}

int func_386()
{
	switch (func_110(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_387(int iParam0)
{
	if (func_380())
	{
		if (func_756(iParam0, 0, 1))
		{
			return func_74(iParam0);
		}
	}
	if ((func_756(iParam0, 0, 1) && func_384()) && func_71(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_388(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_389()
{
	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_390()
{
	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_391(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	if (iParam3 >= func_390() && iParam3 < func_389())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam1, sVar1))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
				if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_388("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_377(sParam16);
				}
				else
				{
					func_388(&(uParam2->f_1));
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_388("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
				}
				if (func_415())
				{
					func_388("");
				}
				else if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 5 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 7 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_TWO_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 8 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_CASH");
					UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam10, 1);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_CASH");
						UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam10, 1);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_NG_CASH");
						UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam10, 1);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_377(&(uParam2->f_104));
					}
					else
					{
						func_388("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
					UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
				}
				else
				{
					func_388("");
				}
				if (uParam2->f_108 == 6)
				{
					func_388("");
				}
				else
				{
					func_388(&sParam4);
				}
				func_379(uParam2, iParam0);
				if (iParam12 == 1 || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_388("");
					func_388("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
				}
				if (func_378(uParam2))
				{
					func_377("DPAD_FRIEND");
				}
				else if (func_376(uParam2))
				{
					func_377("DPAD_FRIEND");
				}
				else if (func_375(uParam2))
				{
					func_377("DPAD_CREW");
				}
				else
				{
					func_377("");
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
	}
}

int func_392(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_393(int iParam0, bool bParam1)
{
	iVar0 = 116;
	if ((!bParam1 && func_338(iParam0)) && !func_106(iParam0))
	{
		iVar0 = func_207();
	}
	iVar1 = func_189(iParam0);
	if (!iVar1 == -1)
	{
		return func_187(iVar1);
	}
	return iVar0;
}

char* func_394(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_395(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_399(iParam3))
	{
		*fParam1 = (func_396(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_392(iParam3))
	{
		*fParam1 = (func_396(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_396(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_398(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_397(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_397(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_398(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_400(int iParam0)
{
	iVar0 = func_403(iParam0);
	if (iVar0 == -1)
	{
		func_401(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_401(int iParam0, bool bParam1)
{
	if (!func_756(iParam0, 0, 1))
	{
		return;
	}
	if (func_403(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_402(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_402(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_403(int iParam0)
{
	if (!func_756(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iVar0].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_404(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_404(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389078[iParam0].f_2), 64);
			UI::_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_405(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_405(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_27();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_406(int iParam0)
{
	if (func_756(iParam0, 0, 1))
	{
		Global_2513218 = { func_41(iParam0) };
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (func_366(Global_2513218))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2513218))
				{
					return Var0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_410(&Global_2513218))
		{
			Global_2513148 = { func_408(iParam0) };
			func_407(&Global_2513148, &Var0);
		}
	}
	return Var0;
}

void func_407(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_408(int iParam0)
{
	if (func_409(iParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID()];
	}
	Var0 = { func_41(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_409(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_410(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_411(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_229(iParam0) || func_413(iParam0)) || func_259(iParam0))
		{
			return 0;
		}
	}
	if (!func_412(iParam0))
	{
		return 0;
	}
	if ((!func_423(iParam0) && Global_2425662[iParam0].f_236 == -1) && !func_422(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_412(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_142, 22);
}

int func_413(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 9));
	}
	return 0;
}

int func_414(int iParam0)
{
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (func_36(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_415()
{
	switch (func_110(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_260(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_106(PLAYER::PLAYER_ID()))
	{
		switch (func_110(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_385(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_416(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 && func_417(Global_1628237[iParam0].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1)
	{
		if (func_417(Global_1628237[iParam0].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_418(iParam0, 0);
	return 0;
}

int func_418(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_419(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_756(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_36(iVar1, 0))
			{
				if ((func_423(iVar1) || Global_2425662[iVar1].f_236 != -1) || func_422(iVar1))
				{
					if (func_420(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_420(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_27())
	{
		if (!bParam2)
		{
			if (func_421(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_27())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_421(int iParam0, int iParam1)
{
	if (iParam1 != func_27())
	{
		if (iParam0 != func_27())
		{
			if (Global_1628237[iParam0].f_11 != func_27())
			{
				if (Global_1628237[iParam0].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_422(int iParam0)
{
	return Global_1590535[iParam0].f_196 != 0;
}

int func_423(int iParam0)
{
	if (func_756(iParam0, 0, 1))
	{
		if (func_756(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_110(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_424(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

void func_425(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_426()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 1))
	{
		if (func_240())
		{
			func_427();
		}
	}
}

void func_427()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0].f_2 = 5;
			func_48(&(Global_2439138.f_2723[iVar0].f_69), 1);
		}
		iVar0++;
	}
}

int func_428()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 0) && func_240())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 1) && func_240())
	{
		return 1;
	}
	return 0;
}

int func_429()
{
	if (func_240())
	{
		if (func_46(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_430()
{
	if (func_240())
	{
		if (func_60(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_431(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

int func_432(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_478(iParam1);
	fVar7 = func_477();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_476())
		{
			if (func_475() > 0 && Global_1574187)
			{
				UI::_0x25F87B30C382FCA7();
				UI::_0x55598D21339CB998(fVar7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					UI::HIDE_HELP_TEXT_THIS_FRAME();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_464())
		{
			func_463(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 26))
	{
		func_463(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_475() == 1)
		{
			func_462(bVar6, uParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_463(uParam0, uParam2, 0);
			GAMEPLAY::SET_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::HIDE_HELP_TEXT_THIS_FRAME();
		}
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_475() == 0 && !bParam5))
		{
			func_463(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_461();
				if (iParam1 == 27 || iParam1 == 28)
				{
					UI::_0x25F87B30C382FCA7();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_461();
					if (iParam1 == 27 || iParam1 == 28)
					{
						UI::_0x25F87B30C382FCA7();
					}
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				UI::_0x55598D21339CB998(fVar7);
				if (func_462(bVar6, uParam0, 0))
				{
					func_424(uParam0, 0, 0);
					uVar4 = func_459(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_457(iParam1) };
					if (bParam4)
					{
						func_454(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_448(uParam0, func_451(uParam2), func_449(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_442(uParam2);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam6))
						{
							sVar9 = sParam6;
						}
						func_440(uParam0, sVar9, func_441(), -1);
					}
					else if (func_380())
					{
						uParam2->f_34 = Global_1574186;
						func_454(uParam0, uVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_433(iParam1);
						uParam2->f_34 = Global_1574186;
						func_454(uParam0, uVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_433(iParam1);
						func_454(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					GAMEPLAY::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				UI::_0x55598D21339CB998(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						GAMEPLAY::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_433(int iParam0)
{
	iVar0 = -1;
	if (func_439())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_438(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_437(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_436(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_434())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_434()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_58();
	}
	return func_435(Global_4456448.f_194990);
}

int func_435(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_436(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 4;
}

bool func_437(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_438(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_439()
{
	return Global_4456448.f_1 == 0;
}

void func_440(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_377(sParam1);
		}
		else
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		func_377("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_441()
{
	switch (func_110(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_442(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_110(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_444())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_130(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_130(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_443(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_444()
{
	return (func_447() && func_445(func_446()));
}

int func_445(int iParam0)
{
	return func_71(iParam0, 1);
}

int func_446()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_35;
}

bool func_447()
{
	return Global_1590535[PLAYER::PLAYER_ID()] == 148;
}

void func_448(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_377(uParam1);
		}
		else if (func_260(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_BRACKT_C");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		func_377("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_449(var uParam0)
{
	iVar0 = func_260(PLAYER::PLAYER_ID());
	if (func_450())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_154())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_450()
{
	return Global_1590408;
}

char* func_451(var uParam0)
{
	iVar0 = func_260(PLAYER::PLAYER_ID());
	if (func_450())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_453() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_453() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_154())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_452() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_452()
{
	return Global_2537071.f_5048;
}

int func_453()
{
	if (func_260(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_454(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_388(uParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(uParam1);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			func_377(sParam1);
		}
		if (func_476() && iParam6)
		{
			if (func_456())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("LBD_DPD_CNT");
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			func_377(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (func_455(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(166);
			}
			else if (func_58())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(220);
			}
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_455(int iParam0)
{
	if (func_438(iParam0) || func_437(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_456()
{
	return Global_1574187;
}

struct<4> func_457(int iParam0)
{
	StringCopy(&Var0, "", 16);
	if (func_458(PLAYER::PLAYER_ID()) || func_436(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_380() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_458(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 5;
}

char* func_459(int iParam0, char* sParam1, bool bParam2)
{
	if (iParam0 == 20 && (!func_380() || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1)))
	{
		uVar0 = func_460();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_460()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_461()
{
	Global_42351 = 1;
}

bool func_462(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}

void func_463(var uParam0, var uParam1, bool bParam2)
{
	GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_370();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
			GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(uParam1->f_33, 0))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	UI::_0x55598D21339CB998(0f);
}

int func_464()
{
	if (func_474())
	{
		return 0;
	}
	if (func_339())
	{
		return 0;
	}
	if (!func_472())
	{
		return 0;
	}
	if (!func_326())
	{
		return 0;
	}
	if (func_471(8, -1))
	{
		return 0;
	}
	if (func_475() == 2)
	{
		return 0;
	}
	if (Global_2537071.f_4543)
	{
		return 0;
	}
	if (func_146())
	{
		return 0;
	}
	else if (!func_253(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0] > 0)
	{
		return 0;
	}
	if (((func_470(1) || func_468(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_467() && Global_1695468 == 2)
	{
		return 0;
	}
	if (func_693(PLAYER::PLAYER_ID()) && !func_467())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (Global_1662011)
	{
		return 0;
	}
	if (func_466(0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370230)
	{
		return 0;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (func_465(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return 0;
	}
	return 1;
}

bool func_465(int iParam0)
{
	if (iParam0 == func_27())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 6);
}

bool func_466(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_45, iParam0);
}

bool func_467()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1695469, 0));
}

int func_468(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_469(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((CONTROLS::IS_CONTROL_PRESSED(0, 166) || CONTROLS::IS_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 166) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_469(int iParam0)
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == 100416529 || iVar0 == 205991906) || iVar0 == -952879014) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_470(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_471(int iParam0, int iParam1)
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

int func_472()
{
	if (func_473())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (GAMEPLAY::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_473()
{
	return Global_1312440;
}

bool func_474()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_475()
{
	return Global_1377170.f_68;
}

int func_476()
{
	if (Global_1574186 > 16)
	{
		return 1;
	}
	return 0;
}

float func_477()
{
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_479()
{
	if (func_482())
	{
		return 1;
	}
	if (func_259(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_450())
	{
		return 1;
	}
	if (func_338(PLAYER::PLAYER_ID()))
	{
		switch (func_260(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_480(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_480(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_480(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_480(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 4);
}

int func_481(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_338(PLAYER::PLAYER_ID()) && !func_106(PLAYER::PLAYER_ID())) && !func_385(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_31(PLAYER::PLAYER_ID(), 0) && func_106(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_331(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_482()
{
	if (func_483(PLAYER::PLAYER_ID()))
	{
		return Global_1319101;
	}
	return 0;
}

int func_483(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_36(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_484()
{
	if (!func_18(&uLocal_542))
	{
		if (func_485(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_11(&uLocal_542, 0, 1);
		}
	}
}

int func_485(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_378[iParam0].f_4, 5))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_378[iParam0].f_4, 4))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_378[iParam0].f_4, 6))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_378[iParam0].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_486()
{
	if (func_303(1, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 8))
		{
			GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 8);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 8))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 8);
	}
	if (func_303(0, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 9))
		{
			GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 9))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 9);
	}
	if (func_303(1, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 10))
		{
			GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 10);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 10))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 10);
	}
	if (func_303(0, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 11))
		{
			GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 11);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 11))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 11);
	}
}

void func_487()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_494(iVar0);
		func_488(iVar0);
		switch (func_15(iVar0))
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
}

void func_488(int iParam0)
{
	if (func_303(0, 0) || iLocal_3181 == -1)
	{
		func_84(iParam0);
		func_86(iParam0);
		func_81(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_261(NETWORK::PARTICIPANT_ID_TO_INT(), iParam0))
		{
			func_86(iParam0);
		}
		else
		{
			func_490(iParam0);
		}
	}
	else
	{
		func_86(iParam0);
	}
	if (iLocal_3182 != func_82(iParam0, 1))
	{
		switch (iLocal_3183)
		{
			case 0:
				func_81(iParam0, -1);
				iLocal_3183++;
				break;
			
			case 1:
				func_489(iParam0);
				iLocal_3182 = func_82(iParam0, 1);
				iLocal_3183 = 0;
				break;
			}
	}
}

void func_489(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_540, func_513(iParam0)))
	{
		UI::SET_MINIMAP_COMPONENT(func_83(iParam0, 0), 1, func_82(iParam0, 1));
		if (func_513(iParam0) == 4)
		{
			UI::SET_MINIMAP_COMPONENT(func_83(iParam0, 1), 1, func_82(iParam0, 1));
		}
		GAMEPLAY::SET_BIT(&iLocal_540, func_513(iParam0));
	}
}

void func_490(int iParam0)
{
	if (!UI::DOES_BLIP_EXIST(func_87(iParam0)))
	{
		func_493(iParam0, UI::ADD_BLIP_FOR_COORD(func_359(iParam0)));
		UI::SET_BLIP_PRIORITY(func_87(iParam0), 12);
		if (UI::DOES_TEXT_LABEL_EXIST("KOTC_AREANAME"))
		{
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(func_87(iParam0), "KOTC_AREANAME");
		}
		UI::SET_BLIP_SPRITE(func_87(iParam0), 438);
		func_491(&(Local_1225[iParam0].f_27), func_82(iParam0, 1));
		if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 13))
		{
			UI::SET_BLIP_FLASHES(Local_1225[iParam0].f_27, 1);
			UI::SET_BLIP_FLASH_TIMER(Local_1225[iParam0].f_27, 7000);
			GAMEPLAY::SET_BIT(&iLocal_539, 13);
		}
		if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 12))
		{
			UI::FLASH_MINIMAP_DISPLAY();
			GAMEPLAY::SET_BIT(&iLocal_539, 12);
		}
		UI::_0x75A16C3DA34F1245(func_87(iParam0), 1);
		UI::_0xC4278F70131BAA6D(func_87(iParam0), 1);
	}
	else
	{
		func_491(&(Local_1225[iParam0].f_27), func_82(iParam0, 0));
		if (UI::DOES_BLIP_EXIST(func_87(iParam0)))
		{
			if (UI::DOES_TEXT_LABEL_EXIST("KOTC_AREANAME"))
			{
				UI::SET_BLIP_NAME_FROM_TEXT_FILE(func_87(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_491(var uParam0, int iParam1)
{
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		uVar0 = func_492(iParam1);
		UI::SET_BLIP_COLOUR(*uParam0, uVar0);
	}
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	UI::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_493(int iParam0, var uParam1)
{
	Local_1225[iParam0].f_27 = uParam1;
}

void func_494(int iParam0)
{
	fVar40 = 10f;
	fVar41 = 25f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_513(iParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		Var1[iVar0] = { func_504(iParam0, iVar0) };
		Var11[iVar0] = { func_503(iParam0, iVar0) };
		uVar21[iVar0] = func_502(iParam0, iVar0);
		func_501(iParam0, iVar0, &(Var25[iVar0]), &(uVar35[iVar0]));
		if (GAMEPLAY::IS_BIT_SET(iLocal_3174, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, Local_544[NETWORK::PARTICIPANT_ID_TO_INT()].f_1))
				{
					if (!func_303(1, 1))
					{
						if (iLocal_3181 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
							{
								if ((!func_500(Var1[iVar0]) && !func_500(Var11[iVar0])) && uVar21[iVar0] > 0f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1121[PLAYER::PLAYER_ID()].f_2, Var1[iVar0], Var11[iVar0], uVar21[iVar0], 0, 1, 0))
									{
										bVar39 = true;
									}
								}
								if (func_513(iParam0) == 7)
								{
									if (func_499(iParam0) < 0f)
									{
										if (func_499(iParam0) <= fVar40 && func_499(iParam0) >= (fVar40 * -1f))
										{
											if (func_498(iParam0) <= fVar41)
											{
												bVar39 = true;
											}
										}
									}
								}
								else if (!func_500(Var25[iVar0]))
								{
									if (func_497(iParam0, iVar0) < 0f)
									{
										if (func_497(iParam0, iVar0) >= (uVar35[iVar0] * -1f))
										{
											if (func_496(iParam0, iVar0) <= uVar35[iVar0])
											{
												bVar39 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	func_495(iParam0, bVar39);
}

void func_495(int iParam0, bool bParam1)
{
	Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_3), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_3), iParam0);
	}
}

float func_496(int iParam0, int iParam1)
{
	return Local_1225[iParam0].f_41[iParam1];
}

float func_497(int iParam0, int iParam1)
{
	return Local_1225[iParam0].f_45[iParam1];
}

float func_498(int iParam0)
{
	return Local_1225[iParam0].f_38;
}

float func_499(int iParam0)
{
	return Local_1225[iParam0].f_39;
}

int func_500(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_501(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_513(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.966f, 3777.477f, 51.767f };
					*fParam3 = 5.3f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 1:
			switch (func_513(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.315f, 3789.364f, 52.088f };
					*fParam3 = 3.35f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 2:
			switch (func_513(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

var func_502(int iParam0, int iParam1)
{
	return Local_1225[iParam0].f_20[iParam1];
}

Vector3 func_503(int iParam0, int iParam1)
{
	return Local_1225[iParam0].f_10[iParam1];
}

Vector3 func_504(int iParam0, int iParam1)
{
	return Local_1225[iParam0][iParam1];
}

void func_505(int iParam0)
{
	Local_378[NETWORK::PARTICIPANT_ID_TO_INT()] = iParam0;
}

void func_506(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_507("kwUfKUus6EuQyNSL8KpY-w");
					func_507("yMTOFLfO2UKwzKrmgPP7kg");
					func_507("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_507("tP5HSeCA0UiHnkRzakdO2Q");
					func_507("uEkrqoerQEmQ0uZRtp4rkw");
					func_507("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_507("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_507("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_507("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_507("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_507("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_507("uEkrqoerQEmQ0uZRtp4rkw");
					func_507("92t91kL3Wkqvl2Kc82cNSA");
					func_507("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_507("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_507("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_507("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_507("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_507("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_507("fOfm7nzMLkav0ldcSCNAzA");
					func_507("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_507("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_507("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_507("Ma78E44OMkGfYPmCPZXUNA");
					func_507("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_507("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_507("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_507("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_507("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_507("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_507("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_507("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_507("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_507("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_507("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_507("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_507("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_507("fOfm7nzMLkav0ldcSCNAzA");
							func_507("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_507("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_507("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_507("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_507("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_507("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_507("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_507("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_507("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_507("fOfm7nzMLkav0ldcSCNAzA");
							func_507("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_507("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_507("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_507("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_507("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_507("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_507("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_507("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_507("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_507("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_507("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_507("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_507("aGBjo2rKi0yMDLl3a2ATGA");
									func_507("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_507("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_507("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_507("f2lnL6wZPkGWUowu0yLm1Q");
									func_507("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_507("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_507("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_507("W-OJzHlM-0ym9PsIASYZtw");
									func_507("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_507("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_507("TjGz31AMYE6bGCjAIitu6w");
									func_507("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_507("QmlvLMLCwkOvoZlkAstYxw");
									func_507("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_507("BktATxH9R0Wp2x0kWSbqjw");
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_507("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_507("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_507("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_507("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_507("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_507("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_507("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_507("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_507(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1].f_12, 11))
		{
			if (func_508(&(Global_2359721[iVar1].f_15)) == iVar0)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1].f_13, 26))
				{
					GAMEPLAY::SET_BIT(&(Global_2359721[iVar1].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_508(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_510(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_509(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_509(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_510(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13];
		
		case 62:
			return Global_917806.f_9405[iVar13];
		
		default:
	}
	return Var0;
}

int func_510(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_512(uParam0->f_1))
	{
		if (func_511(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iVar0].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[iVar0].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[iVar0].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_511(var uParam0)
{
	if (Global_2398103)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_512(int iParam0)
{
	return iParam0 == 9999;
}

int func_513(int iParam0)
{
	return Local_80.f_6[iParam0].f_69;
}

int func_514()
{
	return Local_80;
}

int func_515(int iParam0)
{
	return Local_378[iParam0];
}

void func_516()
{
	iVar0 = -1;
	iVar1 = -1;
	if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_513(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_534(iVar2, iVar3, func_535(iVar2, iVar3));
					func_532(iVar2, iVar3, func_533(iVar2, iVar3));
					func_530(iVar2, func_531(iVar2));
					func_528(iVar2, iVar3, func_529(iVar2, iVar3));
					GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 0);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_527(iVar2) <= 1)
			{
				func_526(iVar2, 0);
			}
			else
			{
				func_526(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_155(iVar2))
			{
				GAMEPLAY::SET_BIT(&iLocal_539, 0);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_526(iVar2, 0);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_155(iVar2))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (iVar0 > -1)
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_3174, iVar0))
						{
							GAMEPLAY::SET_BIT(&iLocal_539, 0);
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_3173, iVar0))
						{
							GAMEPLAY::SET_BIT(&iLocal_539, 0);
						}
						if (GAMEPLAY::IS_BIT_SET(iLocal_3175, iVar0))
						{
							GAMEPLAY::SET_BIT(&iLocal_539, 0);
						}
						if (!func_261(iVar0, iVar2))
						{
							GAMEPLAY::SET_BIT(&iLocal_539, 0);
						}
					}
				}
			}
			else if (iVar0 > -1)
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3174, iVar0))
				{
					bVar5 = true;
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3173, iVar1))
				{
					bVar5 = true;
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_3175, iVar1))
				{
					bVar5 = true;
				}
				if (!func_261(iVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_525(iVar2, -1);
				func_524(iVar2, -1);
			}
			func_523(iVar2, uVar4);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_539, 0))
		{
			if (func_522(iVar2) > -1 && func_521(iVar2) > -1)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_525(iVar2, func_522(iVar2));
					func_524(iVar2, func_521(iVar2));
					func_523(iVar2, func_520(iVar2));
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_6[iVar2].f_203, func_522(iVar2)))
					{
						GAMEPLAY::SET_BIT(&(Local_80.f_6[iVar2].f_203), func_522(iVar2));
					}
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_517(iVar2);
		}
		iVar2++;
	}
}

void func_517(int iParam0)
{
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_80.f_6[iParam0].f_74[iVar1].f_3 > Local_80.f_6[iParam0].f_74[(iVar1 - 1)].f_3)
				{
					uVar16 = Local_80.f_6[iParam0].f_74[iVar1].f_3;
					uVar17 = Local_80.f_6[iParam0].f_74[iVar1];
					uVar18 = Local_80.f_6[iParam0].f_74[iVar1].f_1;
					Local_80.f_6[iParam0].f_74[iVar1].f_3 = Local_80.f_6[iParam0].f_74[(iVar1 - 1)].f_3;
					Local_80.f_6[iParam0].f_74[iVar1] = Local_80.f_6[iParam0].f_74[(iVar1 - 1)];
					Local_80.f_6[iParam0].f_74[iVar1].f_1 = Local_80.f_6[iParam0].f_74[(iVar1 - 1)].f_1;
					Local_80.f_6[iParam0].f_74[(iVar1 - 1)].f_3 = uVar16;
					Local_80.f_6[iParam0].f_74[(iVar1 - 1)] = uVar17;
					Local_80.f_6[iParam0].f_74[(iVar1 - 1)].f_1 = uVar18;
				}
				if ((iVar1 - 1) == 0 && Local_80.f_6[iParam0].f_74[(iVar1 - 1)].f_3 > 0f)
				{
					if (!Local_80.f_283 == Local_80.f_6[iParam0].f_74[(iVar1 - 1)])
					{
						Local_80.f_283 = Local_80.f_6[iParam0].f_74[(iVar1 - 1)];
						Var2.f_2 = 296878074;
						Var2.f_10 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_6[iParam0].f_74[(iVar1 - 1)].f_1);
						func_518(Var2, func_519(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_518(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_519(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_756(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

var func_520(int iParam0)
{
	return Local_1225[iParam0].f_31;
}

int func_521(int iParam0)
{
	return Local_1225[iParam0].f_35;
}

int func_522(int iParam0)
{
	return Local_1225[iParam0].f_34;
}

void func_523(int iParam0, var uParam1)
{
	Local_1225[iParam0].f_30 = uParam1;
}

void func_524(int iParam0, int iParam1)
{
	Local_80.f_6[iParam0].f_2 = iParam1;
}

void func_525(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_80.f_6[iParam0].f_1 = iParam1;
}

void func_526(int iParam0, int iParam1)
{
	Local_80.f_6[iParam0].f_72 = iParam1;
}

int func_527(int iParam0)
{
	return Local_1225[iParam0].f_37;
}

void func_528(int iParam0, int iParam1, var uParam2)
{
	Local_1225[iParam0].f_20[iParam1] = uParam2;
}

float func_529(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_513(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 6f;
				
				case 4:
					return 7f;
				
				case 1:
					return 8.25f;
				
				case 3:
					return 16.5f;
				
				case 5:
					return 9.65f;
				
				case 6:
					return 9.15f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_513(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 3.5f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_513(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 0f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
	}
	return 0f;
}

void func_530(int iParam0, struct<3> Param1)
{
	Local_1225[iParam0].f_24 = { Param1 };
}

Vector3 func_531(int iParam0)
{
	switch (func_513(iParam0))
	{
		case 0:
			return -1195.435f, -1788.217f, 14.6269f;
		
		case 2:
			return -379.8141f, 6087.215f, 43.2552f;
		
		case 4:
			return 2516.59f, 3784.677f, 52.0053f;
		
		case 1:
			return 1667.193f, -27.4697f, 183.774f;
		
		case 3:
			return -746.2f, 5594.6f, 41.7f;
		
		case 5:
			return -389.3f, 1135.7f, 322.6f;
		
		case 6:
			return 473.6f, -1339.1f, 35.2f;
		
		case 7:
			return -1459.651f, 179.275f, 53f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_532(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1225[iParam0].f_10[iParam1] = { Param2 };
}

Vector3 func_533(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_513(iParam0))
			{
				case 0:
					return -1178.575f, -1795.219f, 22.42828f;
				
				case 2:
					return -377.4193f, 6083.058f, 46.63536f;
				
				case 4:
					return 2518.118f, 3772.498f, 58.13546f;
				
				case 1:
					return 1673.975f, -24.62664f, 199.2563f;
				
				case 3:
					return -756.4877f, 5594.868f, 44.17008f;
				
				case 5:
					return -391.5381f, 1125.141f, 325.0288f;
				
				case 6:
					return 470.2388f, -1335.768f, 38.44154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_513(iParam0))
			{
				case 0:
					return -1180.375f, -1777.348f, 22.48125f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1676.203f, -25.81484f, 200.1802f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_513(iParam0))
			{
				case 0:
					return -1194.205f, -1806.82f, 22.48f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_534(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1225[iParam0][iParam1] = { Param2 };
}

Vector3 func_535(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_513(iParam0))
			{
				case 0:
					return -1212.381f, -1780.108f, 7.481341f;
				
				case 2:
					return -381.2328f, 6089.681f, 34.37778f;
				
				case 4:
					return 2516.82f, 3795.646f, 49.82948f;
				
				case 1:
					return 1660.532f, -27.94882f, 181.587f;
				
				case 3:
					return -736.0183f, 5595.02f, 40.53122f;
				
				case 5:
					return -386.508f, 1144.122f, 321.5792f;
				
				case 6:
					return 479.0627f, -1343.186f, 34.14154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_513(iParam0))
			{
				case 0:
					return -1209.83f, -1798.181f, 7.481341f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1669.613f, -27.26755f, 182.2874f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_513(iParam0))
			{
				case 0:
					return -1197.333f, -1769.584f, 7.474364f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_536()
{
	func_538();
	iLocal_3172++;
	func_537();
}

void func_537()
{
	if (iLocal_3172 >= (NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST() - 1))
	{
		iLocal_3172 = 0;
	}
}

void func_538()
{
	if (iLocal_3172 == 0)
	{
	}
}

void func_539()
{
	iVar0 = -1;
	iVar1 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Local_1121[iVar1] = func_27();
		Local_1121[iVar1].f_1 = -1;
		Local_1121[iVar1].f_2 = uVar3;
		GAMEPLAY::CLEAR_BIT(&iLocal_3173, iVar1);
		GAMEPLAY::CLEAR_BIT(&iLocal_3175, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_544[iVar0] = func_570();
		Local_544[iVar0].f_1 = -1;
		GAMEPLAY::CLEAR_BIT(&iLocal_3174, iVar0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar25 = 0;
			while (iVar25 < 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Local_80.f_6[iVar25].f_73), iVar0);
				iVar25++;
			}
		}
		Local_544[iVar0].f_2 = { Var4 };
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < 1)
	{
		func_569(iVar25, 0);
		func_568(iVar25, 0);
		func_567(iVar25, 0f);
		func_566(iVar25, 0f);
		func_565(iVar25, 0f);
		iVar28 = 0;
		while (iVar28 < 3)
		{
			func_564(iVar25, iVar28, 0f);
			func_563(iVar25, iVar28, 0f);
			func_562(iVar25, iVar28, 0f);
			iVar28++;
		}
		iVar25++;
	}
	bVar30 = true;
	bVar31 = true;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_544[iVar0] = iVar0;
			GAMEPLAY::SET_BIT(&iLocal_3174, iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_544[iVar0]);
			iVar1 = iVar2;
			if (func_756(iVar2, 0, 1))
			{
				Local_1121[iVar1] = iVar2;
				Local_544[iVar0].f_1 = iVar1;
				Local_1121[iVar1].f_1 = iVar0;
				Local_1121[iVar1].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_544[iVar0].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				iVar27++;
				if (func_485(iVar0))
				{
					iVar29++;
				}
				GAMEPLAY::SET_BIT(&iLocal_3173, iVar1);
				if ((ENTITY::IS_ENTITY_DEAD(Local_1121[iVar1].f_2, 0) || PED::IS_PED_INJURED(Local_1121[iVar1].f_2)) || !PLAYER::IS_PLAYER_PLAYING(Local_1121[iVar1]))
				{
					GAMEPLAY::SET_BIT(&iLocal_3175, iVar1);
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_378[iVar0].f_4, 0))
					{
						bVar30 = false;
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_378[iVar0].f_4, 1))
					{
						bVar31 = false;
					}
				}
				func_560(iVar1, 2);
				if (func_259(iVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_558(iVar0);
					}
				}
				if (func_136(iVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_558(iVar0);
					}
				}
				if (func_263(iVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_558(iVar0);
					}
				}
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_3174, iVar0);
			if (func_667() <= 1)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_558(iVar0);
				}
			}
		}
		iVar25 = 0;
		while (iVar25 < 1)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_80.f_213, 1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_557(iVar0, iVar25);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_3174, iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(iLocal_3173, iVar1))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_213, 1))
					{
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							func_556(iVar0, iVar1, iVar25, func_148(iVar25, iVar0));
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, iVar1))
					{
						if (iVar0 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							fVar36 = func_555(Local_1121[iVar1].f_2, func_359(iVar25), 0);
							fVar37 = func_555(Local_1121[iVar1].f_2, func_359(iVar25), 1);
							Var38 = { ENTITY::GET_ENTITY_COORDS(Local_1121[iVar1].f_2, 1) };
							fVar41 = (Local_1225[iVar25].f_24.f_2 - Var38.z);
							func_567(iVar25, fVar36);
							func_566(iVar25, fVar41);
							func_565(iVar25, fVar37);
							iVar28 = 0;
							while (iVar28 < 3)
							{
								Var20 = { 0f, 0f, 0f };
								fVar23 = 0f;
								func_501(iVar25, iVar28, &Var20, &fVar23);
								if (!func_500(Var20))
								{
									fVar42 = func_555(Local_1121[iVar1].f_2, Var20, 0);
									fVar43 = func_555(Local_1121[iVar1].f_2, Var20, 1);
									fVar44 = (Var20.z - Var38.z);
									func_564(iVar25, iVar28, fVar42);
									func_563(iVar25, iVar28, fVar44);
									func_562(iVar25, iVar28, fVar43);
								}
								iVar28++;
							}
						}
						if (func_261(iVar0, iVar25))
						{
							func_569(iVar25, 1);
							iVar26 = func_527(iVar25);
							iVar26++;
							func_568(iVar25, iVar26);
							if (func_8(iVar25) != iVar0 && func_7(iVar25) != iVar1)
							{
								if (func_522(iVar25) == -1)
								{
									func_621(iVar25, iVar0);
								}
								if (func_521(iVar25) == -1)
								{
									func_620(iVar25, iVar1);
								}
								func_619(iVar25, Local_1121[iVar1].f_2);
							}
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								GAMEPLAY::SET_BIT(&(Local_80.f_6[iVar25].f_73), iVar0);
							}
						}
					}
					if (iVar0 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, iVar1))
						{
							if (func_236(iVar25) <= IntToFloat(Global_262145.f_11497))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_378[iVar0].f_4, 12))
								{
									GAMEPLAY::SET_BIT(&(Local_378[iVar0].f_4), 12);
								}
							}
							else if (func_236(iVar25) >= IntToFloat(Global_262145.f_11498))
							{
								if (GAMEPLAY::IS_BIT_SET(Local_378[iVar0].f_4, 12))
								{
									GAMEPLAY::CLEAR_BIT(&(Local_378[iVar0].f_4), 12);
								}
							}
							if (!func_262(1, 0))
							{
								if (func_236(iVar25) <= IntToFloat(Global_262145.f_11497))
								{
									if (!GAMEPLAY::IS_BIT_SET(Local_378[iVar0].f_4, 3))
									{
										GAMEPLAY::SET_BIT(&(Local_378[iVar0].f_4), 3);
									}
								}
								else if (func_236(iVar25) >= IntToFloat(Global_262145.f_11498))
								{
									if (GAMEPLAY::IS_BIT_SET(Local_378[iVar0].f_4, 3))
									{
										GAMEPLAY::CLEAR_BIT(&(Local_378[iVar0].f_4), 3);
									}
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_378[iVar0].f_4, 3))
							{
								GAMEPLAY::CLEAR_BIT(&(Local_378[iVar0].f_4), 3);
							}
						}
					}
				}
				iVar24 = 6;
				if (PLAYER::PLAYER_ID() != Local_1121[iVar1])
				{
					if (func_208(PLAYER::PLAYER_ID(), Local_1121[iVar1]))
					{
						iVar24 = func_171(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, iVar1))
				{
					if (func_303(0, 0))
					{
						func_554(iVar1);
					}
					else if (func_7(iVar25) != iVar1)
					{
						func_554(iVar1);
					}
					else if (func_667() != 1)
					{
						func_554(iVar1);
					}
					else
					{
						func_549(iVar1);
						if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (func_199(NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								UI::GET_HUD_COLOUR(iVar24, &uVar32, &uVar33, &uVar34, &iVar35);
								iVar35 = 100;
								GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(Local_1121[iVar1].f_2, 1) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar32, uVar33, uVar34, iVar35, 1, 1, 2, 0, 0, 0, 0);
							}
						}
					}
				}
				if (func_756(Local_1121[iVar1], 1, 1))
				{
					if (func_547(Local_1121[iVar1]))
					{
						func_540(Local_1121[iVar1], func_492(iVar24), func_543(iVar0, iVar1, iVar25), 0);
					}
				}
			}
			iVar25++;
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar30)
		{
			GAMEPLAY::SET_BIT(&(Local_80.f_213), 0);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Local_80.f_213), 0);
		}
		if (bVar31)
		{
			GAMEPLAY::SET_BIT(&(Local_80.f_213), 1);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Local_80.f_213), 1);
		}
	}
	if (iVar29 > iLocal_541)
	{
		iLocal_541 = iVar29;
	}
	if (iVar27 > iLocal_3176)
	{
		iLocal_3176 = iVar27;
	}
	else
	{
		Local_80.f_216 = (iLocal_3176 - iVar27);
	}
}

void func_540(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (func_542(iParam0))
	{
		return;
	}
	if (func_541(&(Global_2416079.f_621[iParam0]), &(Global_2416079.f_984[iParam0]), &(Global_2416079.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[iParam0] = uParam1;
		}
	}
}

int func_541(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::SET_BIT(uParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::CLEAR_BIT(uParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_542(int iParam0)
{
	if (iParam0 == func_27())
	{
		return 1;
	}
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_223())
	{
		return 1;
	}
	return 0;
}

int func_543(int iParam0, int iParam1, int iParam2)
{
	if (func_303(0, 0))
	{
		return 0;
	}
	if (iParam0 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 0;
	}
	if (func_544(iParam1))
	{
		return 0;
	}
	if (iParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_544(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_139();
	}
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_241.f_136[func_546(10)][iParam0], func_545(10));
}

int func_545(int iParam0)
{
	return (iParam0 % 32);
}

int func_546(int iParam0)
{
	return (iParam0 / 32);
}

bool func_547(int iParam0)
{
	return func_548(&(Global_2416079.f_621[iParam0]));
}

int func_548(var uParam0)
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
	{
		if (!*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return 0;
		}
	}
	return 1;
}

void func_549(int iParam0)
{
	iVar0 = 6;
	if (iParam0 > -1)
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_3173, iParam0))
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, iParam0))
			{
				if (func_208(PLAYER::PLAYER_ID(), Local_1121[iParam0]))
				{
					iVar0 = func_171(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
				}
				func_552(Local_1121[iParam0], 439, 1, 0);
				if (func_547(Local_1121[iParam0]))
				{
					func_540(Local_1121[iParam0], func_492(iVar0), 1, 0);
				}
				func_550(Local_1121[iParam0], 1, 1, 0);
				GAMEPLAY::SET_BIT(&uLocal_3180, iParam0);
			}
		}
	}
}

void func_550(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_542(iParam0))
	{
		return;
	}
	if (func_541(&(Global_2416079.f_819[iParam0]), &(Global_2416079.f_1182[iParam0]), &(Global_2416079.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_551(iParam0, bParam2);
	}
}

void func_551(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_2416079.f_368), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2416079.f_368), iParam0);
	}
	if (UI::DOES_BLIP_EXIST(Global_2416079[iParam0]))
	{
		if (bParam1)
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2416079[iParam0], 0);
		}
		else
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2416079[iParam0], 1);
		}
	}
}

void func_552(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_542(iParam0))
	{
		return;
	}
	if (func_541(&(Global_2416079.f_588[iParam0]), &(Global_2416079.f_951[iParam0]), &(Global_2416079.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_553();
		}
	}
}

void func_553()
{
	Global_2416079.f_1614 = 1;
}

void func_554(int iParam0)
{
	iVar0 = 6;
	if (GAMEPLAY::IS_BIT_SET(uLocal_3180, iParam0))
	{
		if (iParam0 > -1)
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_3173, iParam0))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3175, iParam0))
				{
					if (PLAYER::PLAYER_ID() != Local_1121[iParam0])
					{
						if (func_208(PLAYER::PLAYER_ID(), Local_1121[iParam0]))
						{
							iVar0 = func_171(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
						}
					}
					func_552(Local_1121[iParam0], 439, 0, 0);
					if (func_547(Local_1121[iParam0]))
					{
						func_540(Local_1121[iParam0], func_492(iVar0), 0, 0);
					}
					func_550(Local_1121[iParam0], 0, 0, 0);
					GAMEPLAY::CLEAR_BIT(&iLocal_3180, iParam0);
				}
			}
		}
	}
}

var func_555(int iParam0, struct<3> Param1, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

void func_556(int iParam0, int iParam1, int iParam2, var uParam3)
{
	Local_80.f_6[iParam2].f_74[iParam0] = iParam0;
	Local_80.f_6[iParam2].f_74[iParam0].f_1 = iParam1;
	Local_80.f_6[iParam2].f_74[iParam0].f_2 = iParam1;
	Local_80.f_6[iParam2].f_74[iParam0].f_3 = uParam3;
}

void func_557(int iParam0, int iParam1)
{
	Local_80.f_6[iParam1].f_74[iParam0] = -1;
	Local_80.f_6[iParam1].f_74[iParam0].f_1 = -1;
	Local_80.f_6[iParam1].f_74[iParam0].f_2 = func_27();
	Local_80.f_6[iParam1].f_74[iParam0].f_3 = -1f;
}

void func_558(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_149(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_559(iVar0, iParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_80.f_217[iVar1] > 0f)
			{
				if (Local_80.f_250[iVar1] == iParam0)
				{
					Local_80.f_217[iVar1] = 0f;
					Local_80.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_559(int iParam0, int iParam1, float fParam2)
{
	Local_80.f_6[iParam0].f_36[iParam1] = fParam2;
}

void func_560(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1574650.f_18)))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_2, iParam0))
	{
		if (Global_1574650 < iParam1 && GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 1))
		{
			GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 0);
			return;
		}
		if (Global_1574650 != 0)
		{
			GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 1);
		}
		Global_1574650 = 0;
		Global_1574650.f_2 = 0;
	}
	GAMEPLAY::SET_BIT(&(Global_1574650.f_2), iParam0);
	bVar0 = true;
	if (func_229(iParam0))
	{
		bVar0 = false;
	}
	if (func_561(iParam0))
	{
		bVar0 = false;
	}
	if (func_36(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_259(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574650++;
	}
}

bool func_561(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 10);
}

void func_562(int iParam0, int iParam1, float fParam2)
{
	Local_1225[iParam0].f_49[iParam1] = fParam2;
}

void func_563(int iParam0, int iParam1, float fParam2)
{
	Local_1225[iParam0].f_45[iParam1] = fParam2;
}

void func_564(int iParam0, int iParam1, float fParam2)
{
	Local_1225[iParam0].f_41[iParam1] = fParam2;
}

void func_565(int iParam0, float fParam1)
{
	Local_1225[iParam0].f_40 = fParam1;
}

void func_566(int iParam0, float fParam1)
{
	Local_1225[iParam0].f_39 = fParam1;
}

void func_567(int iParam0, float fParam1)
{
	Local_1225[iParam0].f_38 = fParam1;
}

void func_568(int iParam0, int iParam1)
{
	Local_1225[iParam0].f_37 = iParam1;
}

void func_569(int iParam0, int iParam1)
{
	Local_1225[iParam0].f_36 = iParam1;
}

int func_570()
{
	return -1;
}

void func_571()
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 185)
		{
			func_572(iVar0);
		}
		if (iVar1 == 154)
		{
		}
		iVar0++;
	}
}

void func_572(int iParam0)
{
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var11, 13);
	if (ENTITY::DOES_ENTITY_EXIST(Var11))
	{
		if (ENTITY::IS_ENTITY_A_PED(Var11))
		{
			uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var11);
			if (PED::IS_PED_A_PLAYER(uVar0))
			{
				iVar2 = NETWORK::_NETWORK_GET_PED_PLAYER(uVar0);
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
				{
					iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var11.f_1))
					{
						if (ENTITY::IS_ENTITY_A_PED(Var11.f_1))
						{
							iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var11.f_1);
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar3 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar1);
								iVar8 = iVar3;
								if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
								{
									iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
									if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
									{
										iVar6 = iVar5;
									}
									if (iVar6 != -1)
									{
										if (iVar6 != iVar7)
										{
											iVar9 = 0;
											while (iVar9 < 1)
											{
												if (iVar6 == func_8(iVar9))
												{
													if (!func_262(1, 0))
													{
														if (iVar7 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 7))
															{
																GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 7);
															}
														}
													}
													if (Var11.f_5)
													{
														if (iVar6 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															if (iLocal_3179 < func_618())
															{
																iLocal_3179++;
																func_576(0, iVar1, "", -1859646258, 2131309714, func_617(), 1, -1, 0, 0, 0);
																Local_364.f_7 = (Local_364.f_7 + func_617());
															}
															else
															{
																iLocal_3179++;
															}
														}
														if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
														{
															fVar38 = func_149(iVar9, iVar6);
															fVar38 = (fVar38 + IntToFloat(Global_262145.f_11193));
															func_559(iVar9, iVar6, fVar38);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														if (!func_262(1, 0))
														{
															if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 6))
															{
																GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 6);
															}
															if (!GAMEPLAY::IS_BIT_SET(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4, 2))
															{
																GAMEPLAY::SET_BIT(&(Local_378[NETWORK::PARTICIPANT_ID_TO_INT()].f_4), 2);
																func_241(1);
															}
														}
														if (Var11.f_5)
														{
															if (iLocal_3177 < func_575())
															{
																iLocal_3177++;
																func_576(0, iVar1, "", -1859646258, 2131309714, func_574(), 1, -1, 0, 0, 0);
																Local_364.f_7 = (Local_364.f_7 + func_574());
															}
															else
															{
																iLocal_3177++;
															}
														}
													}
													if (iVar7 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														iLocal_3178++;
													}
													if (func_261(iVar6, iVar9))
													{
														if (Var11.f_5)
														{
															if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
															{
																if (func_522(iVar9) == -1)
																{
																	func_621(iVar9, iVar6);
																}
																if (func_521(iVar9) == -1)
																{
																	func_620(iVar9, iVar8);
																}
																GAMEPLAY::SET_BIT(&iLocal_539, 0);
															}
														}
													}
													else if (Var11.f_5)
													{
														if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
														{
															Var24.f_2 = 692650692;
															Var24.f_10 = iVar3;
															iVar10 = 0;
															while (iVar10 < 32)
															{
																if (GAMEPLAY::IS_BIT_SET(iLocal_3174, iVar10))
																{
																	if (GAMEPLAY::IS_BIT_SET(iLocal_3173, Local_544[iVar10].f_1))
																	{
																		if (!GAMEPLAY::IS_BIT_SET(Local_378[iVar10].f_4, 9) && !GAMEPLAY::IS_BIT_SET(Local_378[iVar10].f_4, 10))
																		{
																			if (func_199(iVar10))
																			{
																				func_518(Var24, func_573(Local_544[iVar10].f_1));
																			}
																		}
																	}
																}
																iVar10++;
															}
														}
													}
												}
												iVar9++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_573(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_574()
{
	return Global_262145.f_10998;
}

int func_575()
{
	return Global_262145.f_11000;
}

int func_576(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_577(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_577(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	iVar0 = func_587(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_583(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_578(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_578(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	Var0 = { func_581(iParam0, 1) };
	if (iParam0 == func_580(PLAYER::PLAYER_PED_ID()))
	{
		func_579(1);
	}
	func_583(Var0, iParam1, 0, sParam2, uParam3);
}

void func_579(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_580(var uParam0)
{
	return uParam0;
}

Vector3 func_581(int iParam0, bool bParam1)
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_582(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = Var3.z;
		}
	}
	GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.z + 0.18f);
	}
	else
	{
		fVar13 = (Var7.z + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_582(var uParam0)
{
	return uParam0;
}

void func_583(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0].f_6 == 0 || Global_2439138.f_1290[iVar0].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1] = { Param0 };
			Global_2439138.f_1290[iVar1].f_6 = 1;
			Global_2439138.f_1290[iVar1].f_4 = func_586(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_585();
			Global_2439138.f_1290[iVar1].f_10 = func_584();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_584()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_585()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_586(struct<3> Param0, var uParam3, var uParam4)
{
	fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_587(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_588(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_588(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_616(PLAYER::PLAYER_ID()) || func_615(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_434() || func_613(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_135(uParam2))
	{
	}
	if (func_612())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_610(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_609(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_606(0, &iVar1);
					break;
				
				case 3:
					func_606(1, &iVar1);
					break;
				
				case 1:
					func_603(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_271(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_595((func_602(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID()].f_39.f_2 != -1)
				{
					func_271(1165, iVar1, -1);
				}
				func_591(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_589((func_590(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_589((func_590(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_589(int iParam0)
{
	if (func_612())
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_211.f_5 = iParam0;
		func_277(-1804740956, iParam0);
	}
}

int func_590(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_756(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_279(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_279(-1804740956);
		}
	}
	return 0;
}

void func_591(int iParam0)
{
	Var0 = { func_41(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_593(func_594(&Var0));
			if (iVar13 == 0)
			{
				func_592(&Global_1387915, iParam0);
				func_276(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_592(&Global_1387916, iParam0);
				func_276(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_592(&Global_1387917, iParam0);
				func_276(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_592(&Global_1387918, iParam0);
				func_276(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_592(&Global_1387919, iParam0);
				func_276(1894078811, Global_1387919);
			}
		}
	}
}

void func_592(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_593(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_594(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_595(int iParam0, int iParam1, int iParam2)
{
	if (func_612())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_217(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_217(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_601(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_6 = func_599(iParam0, 1);
		}
		func_272(639, iParam0, -1, 1);
		func_273(640, func_599(iParam0, 1), -1, 1, 0);
		Global_1388060[func_217(-1)] = iParam0;
		func_596(-1109644434, 7, 0);
	}
}

void func_596(int iParam0, int iParam1, int iParam2)
{
	if (func_598(iParam1, iParam2))
	{
		iVar0 = func_597();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_597()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_598(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_599(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_600(iParam0, 0);
}

int func_600(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_601(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_602(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_217(-1)];
			}
			else if (func_601(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_217(-1)];
	}
	return 0;
}

void func_603(int iParam0)
{
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_178(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_605(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_604(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_604(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_604(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_605(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_41(iParam0) };
		Global_2513231 = { func_41(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_606(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_756(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_605(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_756(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_607(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_605(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_604(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_604(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_607(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_608(iParam0), func_608(iParam1));
	return 0f;
}

Vector3 func_608(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_609(int iParam0)
{
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_604(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_610(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_602(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_602(PLAYER::PLAYER_ID());
		}
	}
	if (func_611(8000, 0, 0) > 0)
	{
		if (func_611(8000, 0, 0) < (iParam0 + func_602(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_611(8000, 0, 0) - func_602(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_611(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_612()
{
	return 1;
}

int func_613(int iParam0)
{
	return func_614(func_110(iParam0));
}

int func_614(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_615(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_616(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

int func_617()
{
	return Global_262145.f_10999;
}

int func_618()
{
	return Global_262145.f_11001;
}

void func_619(int iParam0, var uParam1)
{
	Local_1225[iParam0].f_31 = uParam1;
}

void func_620(int iParam0, int iParam1)
{
	Local_1225[iParam0].f_35 = iParam1;
}

void func_621(int iParam0, int iParam1)
{
	Local_1225[iParam0].f_34 = iParam1;
}

void func_622(int iParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_539, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_259(PLAYER::PLAYER_ID()))
			{
				if (!func_136(PLAYER::PLAYER_ID()))
				{
					if (func_485(NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						if (iParam1 <= 2)
						{
							if (func_199(NETWORK::PARTICIPANT_ID_TO_INT()) || func_485(NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_649(func_663(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_648(1);
						}
						if (iVar1 > 0)
						{
							func_647();
							func_576(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
							Local_364.f_7 = (Local_364.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_636(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (func_635())
							{
								func_624(-212607085, iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_364.f_6 = (Local_364.f_6 + iVar0);
							if (!Global_262145.f_11404)
							{
								if (Local_364.f_6 > 0)
								{
									func_623(16, Local_364.f_6);
								}
							}
							Global_2462880 = iVar0;
						}
					}
					else
					{
						func_648(0);
					}
				}
				else
				{
					func_648(0);
				}
			}
			else
			{
				func_648(0);
			}
		}
		else
		{
			func_648(0);
		}
		GAMEPLAY::SET_BIT(&iLocal_539, 5);
	}
}

void func_623(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!GAMEPLAY::IS_PC_VERSION() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

void func_624(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_635())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_625(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_625(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_625(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_625(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_625(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_635())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_38()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_632(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0].f_66.f_8 = 1;
					Global_4263954[*uParam0].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_631(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_626(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_626(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_627(iParam0);
	}
}

void func_627(int iParam0)
{
	bVar0 = false;
	if (!func_635())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_630(iParam0))
		{
			if (!bVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			UNK3::_NETWORK_SHOP_END_SERVICE(Global_4263954[iParam0].f_66);
		}
		func_628(&(Global_4263954[iParam0]));
	}
}

void func_628(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_629(&(uParam0->f_14));
	func_629(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_629(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_630(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_631(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_632(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_635())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = uParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = uParam2;
			Global_4263954[iVar0].f_66.f_7 = uParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = uParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_633(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_633(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_573(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_634();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_634()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_635()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

void func_636(int iParam0, int iParam1)
{
	if (*iParam0 > 0)
	{
		if (!func_646())
		{
			if (func_150(0))
			{
				if (!func_130(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_645()))
					{
						if (func_644() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_644());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_642(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_641("GB_BCUT_TICK1", func_645(), iVar0, 0, 0, 1);
						}
						func_640(20);
						func_637(func_645(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_637(int iParam0, int iParam1, int iParam2)
{
	if (func_756(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_639(iParam0);
		func_638(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_573(iParam0));
	}
}

void func_638(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_639(int iParam0)
{
	return Global_1628237[iParam0].f_533;
}

void func_640(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_641(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		UI::_SET_NOTIFACTION_COLOR_NEXT(func_171(iParam1, -2, 1, 0, 0));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_42(&Var1));
		if (!iParam3 == 0)
		{
			UI::_SET_NOTIFACTION_COLOR_NEXT(iParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		func_33(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_642(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_643(1);
	}
	else
	{
		iVar1 = func_643(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_643(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_644()
{
	return Global_262145.f_12389;
}

int func_645()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

bool func_646()
{
	return func_74(PLAYER::PLAYER_ID());
}

void func_647()
{
	Global_2462221 = 1;
}

void func_648(bool bParam0)
{
	if (bParam0)
	{
		if (func_215(1))
		{
			GAMEPLAY::SET_BIT(&Global_1574675, 1);
		}
	}
	else if (func_215(2))
	{
		GAMEPLAY::SET_BIT(&Global_1574675, 2);
	}
}

void func_649(float fParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = ((func_9(&uLocal_542, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_11435)
	{
		iVar0 = Global_262145.f_11435;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = (func_662() * iVar0);
	*uParam2 = (func_661() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_11188 / 60) / 1000);
		if (iVar1 > func_660())
		{
			iVar1 = func_660();
		}
		iVar2 = iLocal_541;
		if (iVar2 > func_659())
		{
			iVar2 = func_659();
		}
		*uParam1 = SYSTEM::ROUND((IntToFloat(func_652(func_658(), func_657(), iVar1, fParam0, func_656(), func_655(), func_654(), iVar2)) * Global_262145.f_11462));
		*uParam2 = (*uParam2 + SYSTEM::ROUND((IntToFloat(func_652(func_651(), func_650(), iVar1, fParam0, func_656(), func_655(), func_654(), iVar2)) * Global_262145.f_11463)));
	}
}

int func_650()
{
	return Global_262145.f_10995;
}

int func_651()
{
	return Global_262145.f_10997;
}

int func_652(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_653(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_653(int iParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_654()
{
	return Global_262145.f_11004;
}

float func_655()
{
	return Global_262145.f_11003;
}

float func_656()
{
	return Global_262145.f_11002;
}

int func_657()
{
	return Global_262145.f_10994;
}

int func_658()
{
	return Global_262145.f_10996;
}

int func_659()
{
	return Global_262145.f_11347;
}

int func_660()
{
	return Global_262145.f_11346;
}

int func_661()
{
	return Global_262145.f_10993;
}

int func_662()
{
	return Global_262145.f_10992;
}

float func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11005;
		
		case 1:
			return Global_262145.f_11006;
		
		case 2:
			return Global_262145.f_11007;
		
		default:
	}
	return 0f;
}

int func_664(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_31(PLAYER::PLAYER_ID(), 0) || func_416(PLAYER::PLAYER_ID(), 0))
	{
		if (func_30(PLAYER::PLAYER_ID()) || func_106(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (bParam2)
		{
			func_666(sParam3, sParam4, 1);
		}
		if (func_269(26, -1))
		{
			func_294(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1574650.f_18)))
	{
		if (!func_5(&(Global_1574650.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1574650.f_18));
	}
	if (func_665())
	{
		if (bParam2)
		{
			func_666(sParam3, sParam4, 0);
		}
		if (func_269(26, -1))
		{
			func_294(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_666(sParam3, sParam4, 1);
		}
		if (func_269(26, -1))
		{
			func_294(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_665()
{
	return GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 0);
}

void func_666(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 2) && !func_229(PLAYER::PLAYER_ID())) && !func_259(PLAYER::PLAYER_ID()))
	{
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_205(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 2);
	}
}

int func_667()
{
	return Local_80.f_1;
}

void func_668()
{
	if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 6))
	{
		func_687();
		GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 6);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 7))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 4) || GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 16))
		{
			if (((!UI::IS_RADAR_HIDDEN() && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_240()) && func_756(PLAYER::PLAYER_ID(), 1, 1))
			{
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 7);
				func_239("FME_PASINT", 30000);
				func_238(1);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 17))
		{
			if (func_139() && !func_138())
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 17);
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 16);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 23))
	{
		if (((((!UI::IS_RADAR_HIDDEN() && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_795, 2)) && func_756(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73825) && !Global_58693) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_685())
			{
				func_239("AMEV_GA_RP", -1);
				if (func_110(PLAYER::PLAYER_ID()) != 200)
				{
					func_238(1);
				}
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 23);
			}
		}
	}
	if (UI::IS_PAUSE_MENU_ACTIVE() && UI::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_221(PLAYER::PLAYER_ID()))
		{
			if (!UI::_0x84698AB38D0C6636(1344549371))
			{
				UI::_ADD_FRONTEND_MENU_CONTEXT(1344549371);
			}
		}
		else if (UI::_0x84698AB38D0C6636(1344549371))
		{
			UI::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 9))
	{
		if (((((!UI::IS_RADAR_HIDDEN() && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_240()) && func_756(PLAYER::PLAYER_ID(), 1, 1)) && !func_137(PLAYER::PLAYER_ID(), 21)) && !func_137(PLAYER::PLAYER_ID(), 25))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 9);
			func_684(0);
			func_239("FME_TBL00", -1);
			func_238(1);
		}
	}
	if (func_338(PLAYER::PLAYER_ID()))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 18))
		{
			if ((func_137(PLAYER::PLAYER_ID(), 21) && GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 20)) && !GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 19))
			{
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 18);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 18))
		{
			if (((((!UI::IS_RADAR_HIDDEN() && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_240()) && func_756(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_2537071.f_5057)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 18);
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 19);
				func_239("AMTT_RPAS", -1);
				func_238(1);
			}
		}
	}
	if (((((func_338(PLAYER::PLAYER_ID()) && !func_229(PLAYER::PLAYER_ID())) && func_260(PLAYER::PLAYER_ID()) != 146) && !func_259(PLAYER::PLAYER_ID())) && !func_136(PLAYER::PLAYER_ID())) && !func_678())
	{
		if (func_220(func_260(PLAYER::PLAYER_ID())))
		{
			unk_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 22))
		{
			GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 22);
		}
		if (func_107(PLAYER::PLAYER_ID()) || func_211())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 10))
			{
				if (func_676(func_260(PLAYER::PLAYER_ID())))
				{
					if (func_215(0) && !Global_2391045)
					{
						GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_218(1);
						GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 14);
					}
				}
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 10);
			}
		}
		if (func_221(PLAYER::PLAYER_ID()))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 11))
			{
				if (!Global_98796.f_8)
				{
					GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 12);
					func_213(1);
				}
				if (!func_675())
				{
					GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 13);
					func_212();
				}
				if (!Global_2391045)
				{
					GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 14);
					if (func_215(0) && !Global_2391045)
					{
						GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 9);
					}
					func_218(1);
				}
				GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 11);
			}
		}
		else
		{
			func_673(0);
		}
	}
	else
	{
		func_673(1);
	}
	func_669();
	if (func_210(func_260(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 21))
	{
		GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 21);
	}
	if (((func_139() && !func_138()) || func_137(PLAYER::PLAYER_ID(), 21)) || func_137(PLAYER::PLAYER_ID(), 25))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 10))
		{
			GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 10);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 10))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 10);
	}
}

void func_669()
{
	if (func_240())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_204(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 26))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 26);
				}
				func_670(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 26))
	{
		func_3(&(Global_1574650.f_22));
		GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 26);
	}
}

void func_670(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1574650.f_22)))
	{
		func_11(&(Global_1574650.f_22), 0, 0);
	}
	else if (func_5(&(Global_1574650.f_22), iParam1, 0))
	{
		if (func_475() > 0)
		{
			func_235(iParam0);
			if (func_237("AMEV_LBD_HELP"))
			{
				UI::CLEAR_HELP(1);
			}
			func_3(&(Global_1574650.f_22));
		}
	}
	else
	{
		func_672(0);
		func_671();
	}
}

void func_671()
{
	Global_2537071.f_4532 = 0;
}

void func_672(int iParam0)
{
	Global_1377170.f_68 = iParam0;
}

void func_673(int iParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 11) || (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 10) && iParam0)) || (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 22) && iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 12))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 12);
			func_213(0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 13))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 13);
			func_674();
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 14) && !func_31(PLAYER::PLAYER_ID(), 0))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 14);
			func_218(0);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 11);
		GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 10);
		GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 22);
	}
}

void func_674()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4962), 0);
}

bool func_675()
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_4962, 0);
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_221(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_211() || func_677(func_154()));
		
		default:
	}
	return 0;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_678()
{
	if (((((((((func_317() || func_316()) || func_315()) || func_146()) || (func_312() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_681() && !func_680())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_679() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_679()
{
	return Global_968397;
}

bool func_680()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 27);
}

int func_681()
{
	if (func_683() || func_682())
	{
		return Global_1590535[PLAYER::PLAYER_ID()].f_98 == 8;
	}
	return 0;
}

var func_682()
{
	return Global_2450632.f_635;
}

bool func_683()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_684(int iParam0)
{
	iVar0 = func_216(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 0))
		{
			GAMEPLAY::SET_BIT(&iVar0, 0);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 1))
		{
			GAMEPLAY::SET_BIT(&iVar0, 1);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 2))
		{
			GAMEPLAY::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 3))
		{
			GAMEPLAY::SET_BIT(&iVar0, 3);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 4))
		{
			GAMEPLAY::SET_BIT(&iVar0, 4);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			GAMEPLAY::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			GAMEPLAY::SET_BIT(&iVar0, 6);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 7))
		{
			GAMEPLAY::SET_BIT(&iVar0, 7);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 8))
		{
			GAMEPLAY::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 9))
		{
			GAMEPLAY::SET_BIT(&iVar0, 9);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 10))
		{
			GAMEPLAY::SET_BIT(&iVar0, 10);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 11))
		{
			GAMEPLAY::SET_BIT(&iVar0, 11);
		}
	}
	func_273(2534, iVar0, -1, 1, 0);
}

int func_685()
{
	if (!func_18(&(Global_1574650.f_15)))
	{
		func_11(&(Global_1574650.f_15), 0, 0);
		Global_1574650.f_17 = 0;
	}
	else if (func_5(&(Global_1574650.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574650.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574650.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_756(iVar0, 1, 1) && func_686(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_608(PLAYER::PLAYER_ID()), func_608(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574650.f_17++;
		if (Global_1574650.f_17 >= 32)
		{
			Global_1574650.f_17 = 0;
			func_3(&(Global_1574650.f_15));
		}
	}
	return 0;
}

int func_686(int iParam0, int iParam1)
{
	if (func_225() != 0)
	{
		return 0;
	}
	if (!func_601(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590535[iVar0] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_687()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_354();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 8);
	func_688();
}

void func_688()
{
	if (Global_1671757)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1671758, 0))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2546092, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1671758, 1))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2546092, 1);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1671758, 5))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2546092, 5);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-355737150))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-580979506))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(745417724))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-811770997))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 1, 0, 0);
		}
		Global_1671758 = 0;
	}
	Global_1671757 = 0;
}

var func_689()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_690()))
	{
		return func_690();
	}
	return func_196();
}

var func_690()
{
	return Global_2359302.f_3;
}

bool func_691()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 11);
}

bool func_692()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 4);
}

int func_693(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_694())
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

bool func_694()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_695()
{
	return Global_1574650.f_24;
}

int func_696()
{
	if (Global_2537071.f_4959)
	{
		return 0;
	}
	uVar2 = NETWORK::_0x89023FBBF9200E9F();
	if (func_18(&(Local_80.f_1.f_1)))
	{
		iVar0 = func_697(&uVar2, &(Local_80.f_1.f_1));
		iVar1 = Global_262145.f_11188;
	}
	else if (func_18(&(Local_80.f_1.f_3)))
	{
		iVar0 = func_697(&uVar2, &(Local_80.f_1.f_3));
		iVar1 = Global_262145.f_11189;
	}
	else
	{
		return 0;
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_697(var uParam0, var uParam1)
{
	return GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, *uParam1));
}

bool func_698(int iParam0)
{
	return !func_699(iParam0);
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_137(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_137(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_137(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_700(4))
			{
				return 0;
			}
			if (func_137(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_700(4))
			{
				return 0;
			}
			if (func_137(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_700(4))
			{
				return 0;
			}
			if (func_137(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_700(4))
			{
				return 0;
			}
			if (func_137(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_700(4))
			{
				return 0;
			}
			if (func_137(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_700(4))
			{
				return 0;
			}
			if (func_137(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_700(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_756(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2425662[iVar0].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_701()
{
	func_705(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_704())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_703())
	{
		return 1;
	}
	if (func_702(159))
	{
		if (!func_317())
		{
			return 1;
		}
	}
	if (func_702(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_223() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_223()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_702(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_703()
{
	return Global_2460680;
}

bool func_704()
{
	return Global_2450632.f_593;
}

void func_705(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_706(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_706(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_756(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_707(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_707(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_708()
{
	SYSTEM::WAIT(0);
}

void func_709()
{
	func_203();
	func_740(141);
	func_720(141, 0, GAMEPLAY::IS_BIT_SET(iLocal_539, 5));
	func_302();
	func_241(0);
	if (GAMEPLAY::IS_BIT_SET(iLocal_539, 16))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
		GAMEPLAY::CLEAR_BIT(&iLocal_539, 16);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_80();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_717(iVar0);
		iVar0++;
	}
	func_349();
	func_715();
	func_714(0);
	func_233(29, 0);
	if (func_701())
	{
		Local_364.f_5 = 5;
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_539, 24))
	{
		Local_364.f_5 = 6;
	}
	else if (Local_364.f_5 != 1)
	{
		Local_364.f_5 = 2;
	}
	Local_364 = Local_80.f_214;
	Local_364.f_1 = Local_80.f_215;
	Local_364.f_4 = Local_80.f_216;
	Local_364.f_3 = iLocal_541;
	Local_364.f_10 = (NETWORK::_GET_POSIX_TIME() - Local_364.f_9);
	if (!Global_262145.f_11404)
	{
		if (Local_364.f_6 > 0)
		{
			if (Local_364.f_5 == 1)
			{
				func_713();
			}
		}
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_711(Local_364, iLocal_377, iLocal_3179, iLocal_3178, func_77(func_148(0, NETWORK::PARTICIPANT_ID_TO_INT())), -1, -1);
	}
	func_710();
}

void func_710()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_711(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17)
{
	uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76622)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, func_712()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = uParam13;
			unk_0xBAA2F0490E146BE8(&Var14);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = uParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = uParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x3DE3AA516FB126A4(&Var28);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = SYSTEM::TO_FLOAT(uParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x6A60E43998228229(&Var52);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_penned_in"))
		{
			unk_0x1A7CE7CD3E653485(&Param0);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x419615486BBF1956(&Var66);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x84DFC579C2FC214C(&Var79);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x0A9C7F36E5D7B683(&Var93);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = uParam15;
			unk_0x164C5FF663790845(&Var107);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xEDBF6C9B0D2C65C8(&Var123);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x8C9D11605E59D955(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x6551B1F7F6CD46EA(&Var150);
			}
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x2CD90358F67D0AA8(&Var164);
		}
	}
}

char* func_712()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_713()
{
	GAMEPLAY::SET_BIT(&(Global_2537071.f_1734), 18);
}

void func_714(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_1734, 9))
		{
			GAMEPLAY::SET_BIT(&(Global_2537071.f_1734), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1734, 9))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1734), 9);
	}
}

void func_715()
{
	if (Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_716();
	}
}

void func_716()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413899 = { Var0 };
	Global_2413899.f_6 = -1;
}

void func_717(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_719(iParam0))
	{
		func_718(iVar0);
		iVar0++;
	}
	func_349();
	func_715();
	func_358(func_359(iParam0), 0, 0);
}

void func_718(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2405072.f_365[iParam0].f_9)
		{
			Global_2405072.f_365[iParam0] = { Var0 };
		}
	}
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		case 1:
			return 3;
		
		case 3:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

void func_720(int iParam0, bool bParam1, var uParam2)
{
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 13))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 13);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 14))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 14);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 21))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1574650.f_1), 21);
	}
	func_736();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_735(func_260(PLAYER::PLAYER_ID()));
		func_233(func_234(iParam0), 0);
	}
	else
	{
		if ((uParam2 && PLAYER::PLAYER_ID() != -1) && func_734(PLAYER::PLAYER_ID()) >= 12)
		{
			func_733(2546, -1);
			iVar1 = func_216(2546, -1, 0);
			if (iVar1 == 2)
			{
				GAMEPLAY::SET_BIT(&Global_1574676, 0);
			}
			else if (iVar1 == 4)
			{
				GAMEPLAY::SET_BIT(&Global_1574676, 1);
			}
			else if (iVar1 == 6)
			{
				GAMEPLAY::SET_BIT(&Global_1574676, 2);
			}
			else if (iVar1 == 8)
			{
				GAMEPLAY::SET_BIT(&Global_1574676, 3);
			}
			else if (iVar1 == 10)
			{
				GAMEPLAY::SET_BIT(&Global_1574676, 4);
			}
			else if (iVar1 == 12)
			{
				GAMEPLAY::SET_BIT(&Global_1574676, 5);
			}
		}
		func_732();
		func_731();
		func_730();
		if ((!func_30(PLAYER::PLAYER_ID()) && !func_28(PLAYER::PLAYER_ID())) && !func_111())
		{
			func_345();
		}
		func_729();
		if (!GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 0) && !GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 1))
		{
			func_687();
		}
		func_728();
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1746), 2);
		func_727();
		func_726();
	}
	if (UI::_0x84698AB38D0C6636(1344549371))
	{
		UI::OBJECT_DECAL_TOGGLE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_137(PLAYER::PLAYER_ID(), 21)) && !func_137(PLAYER::PLAYER_ID(), 25)) && !func_31(PLAYER::PLAYER_ID(), 0))
		{
			func_218(0);
			func_213(0);
			if (!bParam1)
			{
				func_725();
			}
		}
	}
	if (uParam2 && !bParam1)
	{
		if (func_269(26, -1))
		{
			Global_2462854 = -1;
			func_294(26, -1);
		}
	}
	if (!func_721())
	{
		Global_2513109 = 1;
	}
}

int func_721()
{
	if ((((((!func_455(PLAYER::PLAYER_ID()) && !func_436(PLAYER::PLAYER_ID())) && func_260(PLAYER::PLAYER_ID()) != 146) && !func_724()) && !func_723()) && !func_722(Global_4456448.f_232883)) && !func_191())
	{
		return 0;
	}
	return 1;
}

bool func_722(int iParam0)
{
	return iParam0 == 57;
}

int func_723()
{
	if (Global_4456448.f_194990 == Global_262145.f_9596)
	{
		return 1;
	}
	return 0;
}

int func_724()
{
	if ((Global_4456448 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_232883 > 0) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 15)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 18)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 19)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 29)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 28)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_725()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar0].f_12, 11))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar0].f_13, 26))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2359721[iVar0].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_726()
{
	Global_1628237[PLAYER::PLAYER_ID()].f_7 = 0;
}

void func_727()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4961, 1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4961), 1);
	}
	if (Global_2537071.f_4961 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
		Global_2537071.f_4961 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
		if (!GAMEPLAY::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2537071.f_4971 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2537071.f_4971);
				Global_2537071.f_4971 = -1;
			}
		}
	}
}

void func_728()
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574650 = { Var0 };
}

void func_729()
{
	Global_1319101 = uVar0;
}

void func_730()
{
	Global_2537071.f_4962 = 0;
}

void func_731()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_1 = 0;
	}
}

void func_732()
{
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1628237[iVar0] = -1;
	}
}

void func_733(int iParam0, int iParam1)
{
	iVar0 = func_216(iParam0, func_217(iParam1), 0);
	iVar0++;
	if (!func_274(iParam0))
	{
		func_273(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_272(iParam0, iVar0, iParam1, 1);
	}
}

int func_734(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

int func_735(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_221(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_736()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1735, 3) || GAMEPLAY::IS_BIT_SET(Global_2537071.f_1735, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1735, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1735), 5);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1735, 3))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1735), 3);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_1735, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1735), 4);
	}
	func_739(0);
	func_738(0);
	func_737(0);
}

void func_737(int iParam0)
{
	if (Global_2537071.f_4520 != iParam0)
	{
		Global_2537071.f_4520 = iParam0;
	}
}

void func_738(bool bParam0)
{
	if (Global_2537071.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2537071.f_4519 = bParam0;
	}
}

void func_739(int iParam0)
{
	if (Global_2537071.f_4517 != iParam0)
	{
		Global_2537071.f_4517 = iParam0;
	}
}

void func_740(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_741(struct<21> Param0)
{
	uVar3 = func_755(Param0);
	func_754(uVar3, Param0);
	func_753(0, -1, 0);
	func_751(141);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_80, 284);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_378, 161);
	if (!func_750())
	{
		func_709();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		func_233(29, 1);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = func_746();
			func_743(func_745(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_742(iVar1, iVar0);
				iVar1++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_80.f_214), &(Local_80.f_215));
		}
		Local_364.f_2 = NETWORK::_0xCF61D4B4702EE9EB();
		Local_364.f_9 = NETWORK::_GET_POSIX_TIME();
		Local_364.f_8 = NETWORK::_GET_POSIX_TIME();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_80.f_250[iVar2] = -1;
			iVar2++;
		}
		func_505(0);
	}
	else
	{
		func_709();
	}
}

void func_742(int iParam0, int iParam1)
{
	Local_80.f_6[iParam0].f_69 = iParam1;
}

void func_743(int iParam0)
{
	Var0.x = 1982372647;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.z = iParam0;
	iVar3 = func_744(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

var func_744(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_756(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_36(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_745(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

var func_746()
{
	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_749(iVar10) && !func_747(141, iVar10, 0, 0))
		{
			iVar1[iVar0] = iVar10;
			iVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar0)];
	return uVar11;
}

int func_747(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_748(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2506618.f_136[iVar0] == iVar1 && Global_2506618.f_136[iVar0].f_1 == func_745(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_749(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11194)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_11195)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_11196)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_11197)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_11198)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_11199)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_11200)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_11201)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_750()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_704())
		{
			return 0;
		}
		if (func_702(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_751(int iParam0)
{
	func_728();
	func_752();
	func_730();
	Global_1574650.f_4 = iParam0;
	Global_1574650.f_5 = iParam0;
	func_230(iParam0, -1);
	func_258(&(Global_1574650.f_18), 0, 0);
	Global_2537071.f_4588 = 0;
	Global_2461747[0] = func_27();
	Global_2461747[1] = func_27();
	Global_2461747[2] = func_27();
	Global_2461747[3] = func_27();
	Global_2461747[4] = func_27();
	func_726();
	if (!func_328(func_329()))
	{
		func_427();
	}
	if (func_139() && !func_138())
	{
		GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 16);
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1574650.f_1), 17);
	}
}

void func_752()
{
	Global_1574675 = uVar0;
}

int func_753(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_710();
			}
			else
			{
				return 0;
			}
		}
		if (!func_288())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_710();
					}
					else
					{
						return 0;
					}
				}
				if (func_704())
				{
					if (!bParam2)
					{
						func_710();
					}
					else
					{
						return 0;
					}
				}
				if (func_702(157))
				{
					if (!bParam2)
					{
						func_710();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_710();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_710();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_710();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_754(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_710();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

int func_756(int iParam0, bool bParam1, bool bParam2)
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

