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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_538(&uLocal_8006, &uLocal_8020);
	}
	func_537(&uLocal_52);
	Global_1316784 = -1;
	while (true)
	{
		if (func_536())
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			Global_1316764 = Global_1316765;
		}
		func_7(&uLocal_52, &uLocal_8006, &uLocal_8020);
		func_1();
	}
}

void func_1()
{
	if (func_6() == PLAYER::PLAYER_ID())
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!func_5(&uLocal_8053))
			{
				func_4(&uLocal_8053, 0, 0);
			}
			if (func_5(&uLocal_8053) && func_3(&uLocal_8053, 3000, 0))
			{
				NETWORK::_0x741A3D8380319A81();
				func_2(&uLocal_8053);
			}
		}
	}
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

int func_6()
{
	return Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8;
}

void func_7(var uParam0, var uParam1, var uParam2)
{
	func_535(uParam0);
	func_523(uParam0);
	func_522();
	func_519(uParam0);
	func_512(uParam0, uParam1);
	func_511();
	Var11.f_5 = 2;
	Var11.f_5.f_1 = 1;
	Var11.f_5.f_3 = 1065353216;
	Var11.f_5.f_5 = 1065353216;
	Var11.f_5.f_6 = -1;
	Var11.f_5.f_7 = 4;
	Var11.f_5.f_7.f_1.f_9 = 1082130432;
	Var11.f_5.f_7.f_1.f_10 = -1065353216;
	Var11.f_5.f_7.f_1.f_12 = 2;
	Var11.f_5.f_7.f_1.f_12.f_1.f_11 = 1073741824;
	Var11.f_5.f_7.f_1.f_12.f_1.f_12 = 1073741824;
	Var11.f_5.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
	Var11.f_5.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
	Var11.f_5.f_7.f_1.f_41 = 2;
	Var11.f_5.f_7.f_1.f_41.f_1 = 1065353216;
	Var11.f_5.f_7.f_1.f_41.f_1.f_11 = -1;
	Var11.f_5.f_7.f_1.f_41.f_1.f_13 = 1065353216;
	Var11.f_5.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
	Var11.f_5.f_7.f_1.f_68 = 1;
	Var11.f_5.f_7.f_1.f_68.f_1 = 1073741824;
	Var11.f_5.f_7.f_1.f_68.f_1.f_1 = 1073741824;
	Var11.f_5.f_7.f_1.f_68.f_1.f_3 = -1082130432;
	Var11.f_5.f_7.f_1.f_79.f_9 = 1082130432;
	Var11.f_5.f_7.f_1.f_79.f_10 = -1065353216;
	Var11.f_5.f_7.f_1.f_79.f_12 = 2;
	Var11.f_5.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_41 = 2;
	Var11.f_5.f_7.f_1.f_79.f_41.f_1 = 1065353216;
	Var11.f_5.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
	Var11.f_5.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
	Var11.f_5.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
	Var11.f_5.f_7.f_1.f_79.f_68 = 1;
	Var11.f_5.f_7.f_1.f_79.f_68.f_1 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
	Var11.f_5.f_7.f_1.f_79.f_79.f_9 = 1082130432;
	Var11.f_5.f_7.f_1.f_79.f_79.f_10 = -1065353216;
	Var11.f_5.f_7.f_1.f_79.f_79.f_12 = 2;
	Var11.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_41 = 2;
	Var11.f_5.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
	Var11.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
	Var11.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var11.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var11.f_5.f_7.f_1.f_79.f_79.f_68 = 1;
	Var11.f_5.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var11.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var11.f_5.f_324 = 2;
	Var11.f_5.f_324.f_1.f_18 = 1082130432;
	Var11.f_5.f_324.f_1.f_19 = -1065353216;
	Var11.f_5.f_324.f_1.f_20 = 1;
	Var11.f_5.f_324.f_1.f_21 = 2;
	Var11.f_5.f_324.f_1.f_21.f_1 = 1065353216;
	Var11.f_5.f_324.f_1.f_21.f_1.f_11 = -1;
	Var11.f_5.f_324.f_1.f_21.f_1.f_13 = 1065353216;
	Var11.f_5.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
	Var11.f_5.f_324.f_1.f_48.f_18 = 1082130432;
	Var11.f_5.f_324.f_1.f_48.f_19 = -1065353216;
	Var11.f_5.f_324.f_1.f_48.f_20 = 1;
	Var11.f_5.f_324.f_1.f_48.f_21 = 2;
	Var11.f_5.f_324.f_1.f_48.f_21.f_1 = 1065353216;
	Var11.f_5.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
	Var11.f_5.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
	Var11.f_5.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
	Var11.f_426 = 2;
	Var11.f_426.f_1.f_19 = 11;
	Var11.f_426.f_1.f_31 = 11;
	Var11.f_426.f_1.f_43 = 11;
	Var11.f_426.f_1.f_55 = 11;
	Var11.f_426.f_1.f_67 = 11;
	Var11.f_426.f_1.f_79.f_19 = 11;
	Var11.f_426.f_1.f_79.f_31 = 11;
	Var11.f_426.f_1.f_79.f_43 = 11;
	Var11.f_426.f_1.f_79.f_55 = 11;
	Var11.f_426.f_1.f_79.f_67 = 11;
	Var11.f_592 = 4;
	Var11.f_597 = 4;
	func_510(uParam1);
	if (Global_1316765 == 3 || Global_1316765 == 4)
	{
		if ((((((!uParam0->f_7945 && func_509(PLAYER::PLAYER_PED_ID())) || (!uParam0->f_7945 && func_508(PLAYER::PLAYER_PED_ID()))) || (!uParam0->f_7945 && func_507(PLAYER::PLAYER_PED_ID()))) || (uParam0->f_7945 && func_506(CAM::GET_FINAL_RENDERED_CAM_COORD()))) || (uParam0->f_7945 && func_505(CAM::GET_FINAL_RENDERED_CAM_COORD()))) || (uParam0->f_7945 && func_504(CAM::GET_FINAL_RENDERED_CAM_COORD())))
		{
			bVar7 = true;
		}
		else if ((((!uParam0->f_7945 && func_503(PLAYER::PLAYER_PED_ID())) || (!uParam0->f_7945 && func_502(PLAYER::PLAYER_PED_ID()))) || (uParam0->f_7945 && func_501(CAM::GET_FINAL_RENDERED_CAM_COORD()))) || (uParam0->f_7945 && func_500(CAM::GET_FINAL_RENDERED_CAM_COORD())))
		{
			bVar8 = true;
		}
		if ((!uParam0->f_7945 && func_499(PLAYER::PLAYER_PED_ID())) || (uParam0->f_7945 && func_498(CAM::GET_FINAL_RENDERED_CAM_COORD())))
		{
			bVar9 = true;
		}
		else
		{
			bVar10 = true;
		}
	}
	switch (Global_1316765)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (uParam1->f_4 <= uParam0->f_7739)
				{
					iVar4 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_7950);
					if (iVar4 > 30000)
					{
						uParam0->f_7739 = -1;
					}
					break;
				}
			}
			iVar4 = 0;
			func_488();
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && uParam1->f_4 <= uParam0->f_7739)
			{
				if (uParam1->f_10 == -1)
				{
					if (Global_1316786 == 4)
					{
						if (func_487(func_6()) && Global_1316800 > 50f)
						{
							uParam1->f_10 = 2;
						}
						else if (func_486())
						{
							uParam1->f_10 = 1;
						}
						else if (Global_1316800 <= 40f)
						{
							uParam1->f_10 = MISC::GET_RANDOM_INT_IN_RANGE(4, 8);
							if (uParam1->f_10 == 6)
							{
								if (!func_485(1))
								{
									uParam1->f_10 = 7;
								}
							}
						}
						else if (((Global_1316800 > 80f && Global_1316778) && func_481()) && !func_480(PLAYER::PLAYER_ID()))
						{
							uParam1->f_10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
						}
						else
						{
							uParam1->f_10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						}
						Global_1316792 = uParam1->f_10;
					}
				}
				if (uParam1->f_9 == -1)
				{
					if (Global_1316786 == 4)
					{
						if (func_487(func_6()))
						{
							uParam1->f_9 = 1;
						}
						else
						{
							if (func_479(func_6()))
							{
								uParam1->f_9 = 8;
							}
							else
							{
								uParam1->f_9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
								if (uParam1->f_9 == 2 && Global_1316792 == 6)
								{
									uParam1->f_9 = 3;
								}
								if (uParam1->f_9 == 5 && Global_1316792 == 2)
								{
									uParam1->f_9 = 3;
								}
							}
							Global_1316791 = uParam1->f_9;
						}
					}
				}
				if (uParam1->f_5 == -1)
				{
					if (Global_1316786 != 4)
					{
						uParam1->f_5 = 4;
					}
					else if (func_478(func_6()) > 50f)
					{
						Global_1316789 = (Global_1316789 + MISC::GET_RANDOM_INT_IN_RANGE(1, 3));
						uParam1->f_5 = (Global_1316789 % 3);
					}
					else
					{
						uParam1->f_5 = 3;
					}
				}
				if (uParam1->f_6 == -1)
				{
					if (Global_1316786 != 4)
					{
						uParam1->f_6 = 4;
					}
					else if (func_478(func_6()) > 50f)
					{
						Global_1316787 = (Global_1316787 + MISC::GET_RANDOM_INT_IN_RANGE(1, 3));
						uParam1->f_6 = (Global_1316787 % 3);
					}
					else
					{
						uParam1->f_6 = 3;
					}
				}
				if (uParam1->f_7 == -1)
				{
					uParam1->f_7 = Global_1316793;
				}
				if (uParam1->f_8 == -1)
				{
					Global_1316794++;
					uParam1->f_8 = (Global_1316794 % 2);
				}
				if (uParam1->f_11 == -1)
				{
					uParam1->f_11 = func_477(func_6());
				}
				if (uParam1->f_12 == -1)
				{
					Global_1316797++;
					uParam1->f_12 = (Global_1316797 % 3);
				}
			}
			Global_1316790 = uParam1->f_5;
			Global_1316788 = uParam1->f_6;
			Global_1316791 = uParam1->f_9;
			Global_1316792 = uParam1->f_10;
			Global_1316793 = uParam1->f_7;
			Global_1316795 = uParam1->f_8;
			Global_1316782 = uParam1->f_11;
			Global_1316796 = uParam1->f_12;
			uVar618 = Global_1316806;
			Global_1316806 = 0;
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				iVar619 = 0;
				while (iVar619 < 7)
				{
					switch (iVar619)
					{
						case 1:
							iVar620 = 22;
							break;
						
						case 2:
							iVar620 = 23;
							break;
						
						case 3:
							iVar620 = 24;
							break;
						
						case 4:
							iVar620 = 25;
							break;
						
						case 5:
							iVar620 = 26;
							break;
						
						case 6:
							iVar620 = 27;
							break;
					}
					if (func_476(func_6(), iVar619))
					{
						if (MISC::IS_BIT_SET(uVar618, iVar620))
						{
							if (!MISC::IS_BIT_SET(Global_1316806, iVar620))
							{
								MISC::SET_BIT(&Global_1316806, iVar620);
							}
						}
						else if (MISC::IS_BIT_SET(Global_1316806, iVar620))
						{
							MISC::CLEAR_BIT(&Global_1316806, iVar620);
						}
					}
					else if (MISC::IS_BIT_SET(Global_1316806, iVar620))
					{
						MISC::CLEAR_BIT(&Global_1316806, iVar620);
					}
					iVar619++;
				}
			}
			AUDIO::_0xA8A7D434AFB4B97B("DLC_BTL_Nightclub_SCL", 3);
			uParam0->f_7561 = 0;
			func_2(&(uParam0->f_7562));
			func_474(uParam1);
			uParam0->f_7568 = 0;
			if (Global_1370522)
			{
				uParam0->f_7568 = 1;
			}
			if (func_480(PLAYER::PLAYER_ID()) || func_480(func_6()))
			{
				uParam0->f_7568 = 1;
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_2(&(uParam1->f_1));
				}
			}
			if (func_479(func_6()))
			{
				uParam0->f_7560 = 1;
				uParam0->f_7252 = -1;
				uParam0->f_7568 = 1;
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_2(&(uParam1->f_1));
				}
			}
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < 37)
			{
				uParam0->f_7255[iVar4 + 125] = -1;
				iVar4++;
			}
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < 125)
			{
				uParam0[iVar4]->f_16 = iVar4;
				uParam0->f_7255[iVar4] = iVar4;
				uParam0[iVar4]->f_17 = 0;
				uParam0[iVar4]->f_28 = 0;
				uParam0[iVar4]->f_6 = -1;
				iVar4++;
			}
			uParam0->f_7551 = 1;
			if ((!func_473() || !func_472()) || !func_471())
			{
				break;
			}
			uParam0->f_7943 = func_470(uParam0->f_7252);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (uParam1->f_4 <= uParam0->f_7739)
				{
					uParam1->f_4 = uParam0->f_7739 + 1;
				}
			}
			if (func_465(uParam0, uParam1))
			{
				uParam0->f_7739 = uParam1->f_4;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 6)
				{
					uParam0->f_7905 = iVar4;
					func_464(uParam0);
					func_463(uParam0);
					iVar4++;
				}
				uParam0->f_7905 = 0;
				func_462(2);
			}
			break;
		
		case 2:
			uParam0->f_7548 = 0;
			uParam0->f_7557 = 0;
			Global_1316766 = 0;
			func_462(3);
			break;
		
		case 3:
			iVar4 = uParam0->f_7548;
			while ((iVar4 < (uParam0->f_7548 + uParam0->f_7549) || uParam0->f_7551) && iVar4 < 162)
			{
				func_458(uParam0, iVar4);
				if (((uParam0->f_7255[iVar4] != -1 && func_453(func_454(iVar4, 0))) && !MISC::IS_BIT_SET(uParam0->f_7573[iVar4], 0)) && !MISC::IS_BIT_SET(uParam0->f_7573[iVar4], 2))
				{
					uParam0->f_7557++;
					if (uParam0->f_7557 > func_452())
					{
						func_451(uParam0, uParam0->f_7255[iVar4]);
					}
				}
				iVar4++;
			}
			uParam0->f_7548 = (uParam0->f_7548 + uParam0->f_7549);
			if (uParam0->f_7548 < 162 && !uParam0->f_7551)
			{
				break;
			}
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < 125)
			{
				if (uParam0[iVar4]->f_16 != -1)
				{
					if (func_454(uParam0[iVar4]->f_16, 0) == -1)
					{
						func_451(uParam0, iVar4);
					}
					else
					{
						if (bVar9)
						{
							if (MISC::IS_BIT_SET(uParam0->f_7573[uParam0[iVar4]->f_16], 3))
							{
								uParam0->f_7254++;
								func_451(uParam0, iVar4);
								Jump @3223; //curOff = 3052
							}
						}
						if (bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_7573[uParam0[iVar4]->f_16], 2))
							{
								uParam0->f_7254++;
								func_451(uParam0, iVar4);
								Jump @3223; //curOff = 3106
							}
						}
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_7573[uParam0[iVar4]->f_16], 1))
							{
								uParam0->f_7254++;
								func_451(uParam0, iVar4);
								Jump @3223; //curOff = 3160
							}
						}
						if (bVar8)
						{
							if (MISC::IS_BIT_SET(uParam0->f_7573[uParam0[iVar4]->f_16], 0))
							{
								uParam0->f_7254++;
								func_451(uParam0, iVar4);
							}
						}
					}
				}
				iVar4++;
			}
			uParam0->f_7548 = 0;
			func_462(4);
			break;
		
		case 4:
			iVar4 = 0;
			iVar5 = 0;
			iVar4 = 0;
			while (iVar4 < 125)
			{
				if (uParam0[iVar4]->f_16 == -1)
				{
					while (iVar5 < 162)
					{
						if (((uParam0->f_7255[iVar5] == -1 && ((((uParam0->f_7573[iVar5] == 0 || (bVar7 && MISC::IS_BIT_SET(uParam0->f_7573[iVar5], 0))) || (bVar8 && MISC::IS_BIT_SET(uParam0->f_7573[iVar5], 1))) || (bVar9 && MISC::IS_BIT_SET(uParam0->f_7573[iVar5], 2))) || (bVar10 && MISC::IS_BIT_SET(uParam0->f_7573[iVar5], 3)))) && func_454(iVar5, 0) != -1) && (((!func_453(func_454(iVar5, 0)) || uParam0->f_7557 < func_452()) || MISC::IS_BIT_SET(uParam0->f_7573[iVar5], 0)) || MISC::IS_BIT_SET(uParam0->f_7573[iVar5], 2)))
						{
							uParam0[iVar4]->f_16 = iVar5;
							uParam0->f_7255[iVar5] = iVar4;
							if ((func_450(func_454(iVar5, 0)) && !MISC::IS_BIT_SET(uParam0->f_7573[iVar5], 0)) && !MISC::IS_BIT_SET(uParam0->f_7573[iVar5], 2))
							{
								uParam0->f_7557++;
							}
							iVar5++;
						}
						else
						{
							iVar5++;
						}
					}
					if (iVar5 >= 162)
					{
					}
					else
					{
						iVar4++;
					}
					uParam0->f_7548 = 0;
					iVar4 = 0;
					iVar5 = 0;
					iVar4 = 0;
					while (iVar4 < 162)
					{
						if (uParam0->f_7255[iVar4] != -1)
						{
							iVar5++;
						}
						iVar4++;
					}
					if (iVar5 == 125)
					{
						iVar5 = 1;
						iVar6 = 0;
						iVar5 = 0;
						while (iVar5 < 125)
						{
							bVar621 = false;
							iVar4 = 0;
							while (iVar4 < 125)
							{
								if (func_449(uParam0[iVar4]->f_16, iVar5) && !func_449(uParam0[iVar4]->f_16, (iVar5 - 1)))
								{
									while (iVar6 < 162)
									{
										if ((((uParam0->f_7255[iVar6] == -1 && !func_449(iVar6, iVar5)) && ((((uParam0->f_7573[iVar6] == 0 || (bVar7 && MISC::IS_BIT_SET(uParam0->f_7573[iVar6], 0))) || (bVar8 && MISC::IS_BIT_SET(uParam0->f_7573[iVar6], 1))) || (bVar9 && MISC::IS_BIT_SET(uParam0->f_7573[iVar6], 2))) || (bVar10 && MISC::IS_BIT_SET(uParam0->f_7573[iVar6], 3)))) && func_454(iVar6, 0) != -1) && !func_453(func_454(iVar6, 0)))
										{
											func_451(uParam0, iVar4);
											uParam0[iVar4]->f_16 = iVar6;
											uParam0->f_7255[iVar6] = iVar4;
											bVar621 = true;
											iVar6++;
										}
										else
										{
											iVar6++;
										}
									}
									if (iVar6 >= 162)
									{
										if (bVar621)
										{
											func_451(uParam0, iVar4);
										}
									else
									{
										}
										else
										{
											iVar4++;
										}
										if (iVar6 >= 162)
										{
										}
										else
										{
											iVar5++;
										}
										func_446(uParam0);
										func_462(5);
										break;
									
									case 5:
										Var622.f_1 = 12;
										Var622.f_38 = 9;
										Var622.f_38.f_1 = -1;
										Var622.f_38.f_1.f_2 = -1;
										Var622.f_38.f_1.f_2.f_2 = -1;
										Var622.f_38.f_1.f_2.f_2.f_2 = -1;
										Var622.f_38.f_1.f_2.f_2.f_2.f_2 = -1;
										Var622.f_38.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
										Var622.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
										Var622.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
										Var622.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
										Var622.f_57 = -1569615261;
										iVar4 = 0;
										iVar5 = 0;
										iVar6 = 0;
										iVar4 = 0;
										while (iVar4 < 125)
										{
											if (uParam0[iVar4]->f_16 < 0 || (uParam0[iVar4]->f_16 >= 0 && !MISC::IS_BIT_SET(uParam0->f_7573[uParam0[iVar4]->f_16], 8)))
											{
												if (uParam0[iVar4]->f_16 > -1)
												{
													func_441(uParam0[iVar4]->f_16, &(uParam0[iVar4]->f_8), &(uParam0[iVar4]->f_9), 0);
													uParam0[iVar4]->f_39 = func_454(uParam0[iVar4]->f_16, 0);
													uParam0[iVar4]->f_45 = { func_435(uParam0[iVar4]->f_16, uParam0[iVar4]->f_8, 0) };
													uParam0[iVar4]->f_48 = func_430(uParam0[iVar4]->f_16, uParam0[iVar4]->f_8, 0);
													uParam0[iVar4]->f_40 = func_427(uParam0[iVar4]->f_16, 0);
													if (func_426(uParam0[iVar4]->f_16, uParam0->f_7554, uParam0->f_7555, uParam0->f_7556))
													{
														uParam0[iVar4]->f_39 = -1;
													}
													if (uParam0[iVar4]->f_39 != -1 && ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar4]) == 0)
													{
														func_381(uParam0[iVar4]->f_39, &Var622);
														if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar4]) == 0)
														{
															Var0 = { func_379(uParam0[iVar4]->f_16) };
															uVar3 = func_377(uParam0[iVar4]->f_16);
															if (SYSTEM::VMAG(Var0) > 0f)
															{
																if (func_363(uParam0, &Var622, uParam0[iVar4], Var0, uVar3, uParam1))
																{
																	if (uParam0[iVar4]->f_39 == 14)
																	{
																		uParam0->f_7946 = iVar4;
																	}
																	if (uParam0[iVar4]->f_39 == 10)
																	{
																		uParam0->f_7947 = iVar4;
																	}
																	if (uParam0[iVar4]->f_39 == 62)
																	{
																		uParam0->f_7948 = iVar4;
																	}
																	if (uParam0[iVar4]->f_39 == 17)
																	{
																		uParam0->f_7949 = iVar4;
																	}
																	if (uParam0[iVar4]->f_39 == 55)
																	{
																		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam0)[iVar4], "KERRY");
																	}
																	else if (uParam0[iVar4]->f_39 == 53)
																	{
																		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam0)[iVar4], "POPPY");
																	}
																	else if (uParam0[iVar4]->f_39 == 54)
																	{
																		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam0)[iVar4], "JIMMYBOSTON");
																	}
																	else if (uParam0[iVar4]->f_39 == 56)
																	{
																		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam0)[iVar4], "MIRANDA");
																	}
																	iVar6++;
																	if (iVar6 >= func_362())
																	{
																		break;
																	}
																}
															}
														}
													}
													else
													{
														if (uParam0[iVar4]->f_39 == -1)
														{
														}
														if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar4]))
														{
														}
													}
												}
											}
											iVar4++;
										}
										if (iVar6 >= func_362())
										{
											break;
										}
										iVar4 = 0;
										while (iVar4 < 125)
										{
											if (uParam0[iVar4]->f_16 < 0 || (uParam0[iVar4]->f_16 >= 0 && !MISC::IS_BIT_SET(uParam0->f_7573[uParam0[iVar4]->f_16], 8)))
											{
												func_361(uParam0[iVar4]);
											}
											iVar4++;
										}
										func_462(6);
										break;
									
									case 6:
										iVar5 = 0;
										iVar5 = 0;
										while (iVar5 < 125)
										{
											if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar5]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar5], 0))
											{
												if (uParam0[iVar5]->f_8 != -1)
												{
													uParam0[iVar5]->f_6 = uParam0[iVar5]->f_8;
													if (func_360(uParam0[iVar5]->f_6))
													{
														AUDIO::_0x0653B735BFBDFE87((*uParam0)[iVar5], 0);
														AUDIO::_0x29DA3CA8D8B2692D((*uParam0)[iVar5], 0);
													}
												}
												func_357(uParam0[iVar5]);
											}
											iVar5++;
										}
										func_356(uParam0, 114, 77);
										if (Global_1316786 == 3)
										{
											func_356(uParam0, 39, 0);
										}
										if (Global_1316786 == 0 || Global_1316786 == 1)
										{
											func_355(uParam0, 0, -1602.278f, -3012.723f, -73.7746f);
										}
										func_354(uParam0);
										uParam0->f_7548 = 0;
										func_462(1);
										break;
									
									case 1:
										iVar4 = uParam0->f_7548;
										while (iVar4 < 125)
										{
											if (uParam0[iVar4]->f_6 != -1)
											{
												Var11.f_587 = uParam0[iVar4]->f_6;
												func_353(&Var11);
												Var11 = { func_379(uParam0[iVar4]->f_16) };
												Var11.f_3 = func_377(uParam0[iVar4]->f_16);
												func_349(uParam0[iVar4]->f_6, &Var11);
												if (!func_348(&Var11, uParam0[iVar4]) && ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar4]))
												{
													if (!func_341(uParam0, &Var11, uParam0[iVar4]))
													{
														uParam0->f_7548 = iVar4;
														break;
													}
												}
											}
											iVar4++;
										}
										if (uParam0->f_7947 != -1 && !uParam0[uParam0->f_7947]->f_17)
										{
											func_338(uParam0[uParam0->f_7947]);
										}
										if (uParam0->f_7948 != -1 && !uParam0[uParam0->f_7948]->f_17)
										{
											func_338(uParam0[uParam0->f_7948]);
										}
										func_462(7);
										break;
									
									case 7:
										if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
										{
											iVar4 = 0;
											iVar4 = 0;
											while (iVar4 < 6)
											{
												uParam0->f_7905 = iVar4;
												func_464(uParam0);
												func_463(uParam0);
												iVar4++;
											}
											uParam0->f_7905 = 0;
										}
										else
										{
											func_464(uParam0);
											func_463(uParam0);
											uParam0->f_7905++;
											if (uParam0->f_7905 >= 6)
											{
												uParam0->f_7905 = 0;
											}
										}
										if ((uParam0->f_7560 && !func_337()) && !Global_2405072.f_2672)
										{
											func_336(1);
											if (!func_334())
											{
												func_254(uParam0);
											}
										}
										break;
									
									case 8:
										func_252(uParam0);
										break;
									
									case 9:
										func_537(uParam0);
										if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
										{
											uParam1->f_5 = -1;
											uParam1->f_6 = -1;
											uParam1->f_7 = -1;
											uParam1->f_8 = -1;
											uParam1->f_9 = -1;
											uParam1->f_10 = -1;
											uParam1->f_11 = -1;
											uParam1->f_12 = -1;
										}
										break;
								}
								if ((Global_1316765 != 0 && Global_1316765 != 8) && Global_1316765 != 9)
								{
									func_20(uParam0, uParam2, &Var11);
								}
								if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
								{
									uParam1->f_13 = Global_1316806;
								}
								else
								{
									Global_1316806 = uParam1->f_13;
								}
								func_16(uParam0);
								func_11(uParam0);
								func_8(uParam0);
							}

void func_8(var uParam0)
{
	iVar0 = 1;
	if (Global_1316765 == 7 && Global_1316766 == 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 125)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar1], 0))
			{
				if (!func_9(uParam0[iVar1]->f_6))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar1], -2017877118) != 1)
					{
						iVar0 = 0;
					}
				}
				else if (func_9(uParam0[iVar1]->f_6))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar1], 1785177548) != 1)
					{
						iVar0 = 0;
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 1)
		{
			if (!func_5(&(uParam0->f_7558)))
			{
				func_4(&(uParam0->f_7558), 1, 0);
			}
			else if (func_3(&(uParam0->f_7558), 500, 1))
			{
				Global_1316766 = 1;
				uParam0->f_7551 = 0;
				func_2(&(uParam0->f_7558));
			}
		}
	}
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 110:
		case 105:
		case 106:
		case 113:
			return 1;
		
		default:
	}
	if (func_10(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return 1;
		
		default:
	}
	return 0;
}

void func_11(var uParam0)
{
	if (Global_1316765 == 0)
	{
		return;
	}
	if (func_15() || uParam0->f_7560)
	{
		if (!uParam0->f_7736)
		{
			iVar0 = 0;
			while (iVar0 < 125)
			{
				bVar2 = true;
				if (Global_1316786 == 4 && !func_13(uParam0[iVar0]->f_16))
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], 0))
					{
						ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], false, 0);
						iVar1 = 0;
						while (iVar1 < 4)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]->f_1[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uParam0[iVar0]->f_1[iVar1], 0))
							{
								ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0]->f_1[iVar1], false, 0);
							}
							iVar1++;
						}
					}
				}
				iVar0++;
			}
			uParam0->f_7736 = 1;
			uParam0->f_7945 = 1;
			if (func_15() && Global_1316786 == 4)
			{
				func_4(&(uParam0->f_7737), 0, 0);
			}
		}
		else if (func_5(&(uParam0->f_7737)) && func_3(&(uParam0->f_7737), 89000, 0))
		{
			iVar0 = 0;
			while (iVar0 < 125)
			{
				if ((func_12(uParam0[iVar0]->f_16) && ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0])) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], 0))
				{
					ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], true, 0);
					iVar1 = 0;
					while (iVar1 < 4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]->f_1[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uParam0[iVar0]->f_1[iVar1], 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0]->f_1[iVar1], true, 0);
						}
						iVar1++;
					}
				}
				iVar0++;
			}
			func_2(&(uParam0->f_7737));
		}
	}
	else if (uParam0->f_7736)
	{
		func_2(&(uParam0->f_7737));
		iVar0 = 0;
		while (iVar0 < 125)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], 0))
			{
				ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], true, 0);
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]->f_1[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uParam0[iVar0]->f_1[iVar1], 0)) && !((iVar1 < 2 && uParam0[iVar0]->f_6 == 113) && uParam0[iVar0]->f_10 != 8))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0]->f_1[iVar1], true, 0);
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		uParam0->f_7736 = 0;
		uParam0->f_7945 = 0;
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 10:
		case 23:
		case 24:
		case 32:
		case 33:
		case 50:
		case 51:
		case 54:
		case 56:
		case 59:
		case 62:
		case 63:
		case 64:
		case 69:
		case 80:
		case 82:
		case 83:
		case 86:
		case 87:
		case 95:
		case 96:
		case 97:
		case 103:
		case 104:
		case 105:
		case 106:
		case 113:
		case 116:
		case 118:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_13(int iParam0)
{
	if (func_15())
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 8:
			case 11:
			case 12:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
			case 36:
			case 37:
			case 38:
			case 39:
			case 50:
			case 53:
			case 55:
			case 60:
			case 65:
			case 67:
			case 68:
			case 72:
			case 73:
			case 75:
			case 77:
			case 78:
			case 79:
			case 81:
			case 88:
			case 89:
			case 90:
			case 91:
			case 92:
			case 110:
			case 114:
			case 115:
			case 119:
				return 0;
			
			default:
		}
		return 1;
	}
	if ((((func_14(func_454(iParam0, 0)) || iParam0 == 31) || iParam0 == 34) || iParam0 == 43) || iParam0 == 119)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	if (Global_1316777)
	{
		switch (iParam0)
		{
			case 35:
			case 36:
			case 37:
			case 38:
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 47:
			case 48:
			case 49:
			case 50:
			case 51:
				return 1;
			}
		
		default:
	}
	return 0;
}

bool func_15()
{
	return MISC::IS_BIT_SET(Global_1676377.f_3, 22);
}

void func_16(var uParam0)
{
	if (uParam0->f_7943 > 0)
	{
		iVar0 = 0;
		fVar1 = (IntToFloat(uParam0->f_7943) / 1000f);
		if (uParam0->f_7947 != -1)
		{
			Var2 = { func_18(uParam0[uParam0->f_7947]->f_6, uParam0[uParam0->f_7947]->f_10) };
			while ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var2) && fVar1 > 0f) && iVar0 < 50)
			{
				fVar1 = (fVar1 - ENTITY::GET_ANIM_DURATION(func_17(uParam0[uParam0->f_7947]->f_6, uParam0[uParam0->f_7947]->f_10), &Var2));
				uParam0[uParam0->f_7947]->f_10++;
				iVar0++;
				Var2 = { func_18(uParam0[uParam0->f_7947]->f_6, uParam0[uParam0->f_7947]->f_10) };
			}
			uParam0->f_7943 = SYSTEM::FLOOR((fVar1 * 1000f));
			if (fVar1 <= 0f)
			{
				func_338(uParam0[uParam0->f_7947]);
				uParam0[uParam0->f_7947]->f_10 = (uParam0[uParam0->f_7947]->f_10 - 1);
				if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7947]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7947], 0))
				{
					TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7947]);
				}
				uParam0[uParam0->f_7947]->f_17 = 0;
				uParam0->f_7421[uParam0->f_7947] = 1;
				uParam0->f_7942 = (func_470(uParam0->f_7252) + uParam0->f_7943);
				uParam0->f_7944 = 1;
			}
			if (uParam0->f_7948 != -1)
			{
				uParam0[uParam0->f_7948]->f_10 = uParam0[uParam0->f_7947]->f_10;
				if (fVar1 <= 0f)
				{
					func_338(uParam0[uParam0->f_7948]);
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7948]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7948], 0))
					{
						TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7948]);
					}
					uParam0[uParam0->f_7948]->f_17 = 0;
					uParam0->f_7421[uParam0->f_7948] = 1;
				}
			}
		}
	}
}

char* func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
		case 10:
			return "anim@amb@nightclub@djs@tale_of_us@";
		
		case 7:
			return "anim@amb@nightclub@djs@solomun@";
		
		case 8:
			return "anim@amb@nightclub@djs@dixon@";
		
		case 11:
			return "anim@amb@nightclub@djs@black_madonna@";
		
		default:
	}
	return "";
}

struct<16> func_18(int iParam0, int iParam1)
{
	StringCopy(&Var0, "", 64);
	switch (iParam0)
	{
		case 9:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				StringConCat(&Var0, func_19(iParam0, iParam1), 64);
				StringConCat(&Var0, "_cc", 64);
			}
			break;
		
		case 10:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				StringConCat(&Var0, func_19(iParam0, iParam1), 64);
				StringConCat(&Var0, "_mm", 64);
			}
			break;
		
		case 7:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				StringConCat(&Var0, func_19(iParam0, iParam1), 64);
				StringConCat(&Var0, "_sol", 64);
			}
			break;
		
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				StringConCat(&Var0, func_19(iParam0, iParam1), 64);
				StringConCat(&Var0, "_dix", 64);
			}
			break;
		
		case 11:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				StringConCat(&Var0, func_19(iParam0, iParam1), 64);
				StringConCat(&Var0, "_blamadon", 64);
			}
			break;
	}
	return Var0;
}

char* func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return "POSE_A_LOOP_INTRO";
				
				case 1:
					return "POSE_A_LOOP_MEDIUM";
				
				case 2:
					return "POSE_A_IDLE_C";
				
				case 3:
					return "POSE_A_IDLE_A";
				
				case 4:
					return "POSE_A_LOOP_LARGE";
				
				case 5:
					return "POSE_A_TRANS_POSE_C";
				
				case 6:
					return "POSE_C_IDLE_A";
				
				case 7:
					return "POSE_C_IDLE_B";
				
				case 8:
					return "POSE_C_TRANS_DANCE_B";
				
				case 9:
					return "DANCE_B_IDLE_C";
				
				case 10:
					return "DANCE_B_TRANS_POSE_C";
				
				case 11:
					return "POSE_C_LOOP_SMALL";
				
				case 12:
					return "POSE_C_LOOP_SMALL";
				
				case 13:
					return "POSE_C_TRANS_POSE_B";
				
				case 14:
					return "POSE_B_LONG_TRANS_DRINK_DOWN";
				
				case 15:
					return "DRINK_DOWN_LONG_TRANS_POSE_B";
				
				case 16:
					return "POSE_B_IDLE_F";
				
				case 17:
					return "POSE_B_IDLE_G";
				
				case 18:
					return "POSE_B_IDLE_D";
				
				case 19:
					return "POSE_B_IDLE_H";
				
				case 20:
					return "POSE_B_IDLE_E";
				
				case 21:
					return "POSE_B_LOOP_SMALL";
				
				case 22:
					return "POSE_B_IDLE_F";
				
				case 23:
					return "POSE_B_IDLE_B";
				
				case 24:
					return "POSE_B_LOOP_SMALL";
				
				case 25:
					return "POSE_B_IDLE_C";
				
				case 26:
					return "POSE_B_LOOP_TINY";
				
				case 27:
					return "POSE_B_IDLE_C";
				
				case 28:
					return "POSE_B_TRANS_POSE_C";
				
				case 29:
					return "POSE_C_LOOP_SMALL";
				
				case 30:
					return "POSE_C_IDLE_A";
				
				case 31:
					return "POSE_C_LONG_TRANS_POSE_B";
				
				case 32:
					return "POSE_B_IDLE_J";
				
				case 33:
					return "POSE_B_IDLE_B";
				
				case 34:
					return "POSE_B_IDLE_D";
				
				case 35:
					return "POSE_B_IDLE_I";
				
				case 36:
					return "POSE_B_LONG_TRANS_DANCE_A";
				
				case 37:
					return "DANCE_A_LOOP_TRANS_POSE_B";
				
				case 38:
					return "POSE_B_TRANS_POSE_C";
				
				case 39:
					return "POSE_C_LOOP_TINY";
				
				case 40:
					return "POSE_C_IDLE_A";
				
				case 41:
					return "POSE_C_IDLE_B";
				
				case 42:
					return "POSE_C_IDLE_F";
				
				case 43:
					return "POSE_C_IDLE_A";
				
				case 44:
					return "POSE_C_IDLE_B";
				
				case 45:
					return "POSE_C_LOOP_TINY";
				
				case 46:
					return "POSE_C_TRANS_POSE_E";
				
				case 47:
					return "POSE_E_LOOP_TINY";
				
				case 48:
					return "POSE_E_IDLE_A";
				
				case 49:
					return "POSE_E_LOOP_TINY";
				
				case 50:
					return "POSE_E_IDLE_B";
				
				case 51:
					return "POSE_E_LOOP_TINY";
				
				case 52:
					return "POSE_E_IDLE_E";
				
				case 53:
					return "POSE_E_IDLE_D";
				
				case 54:
					return "POSE_E_TRANS_POSE_C";
				
				case 55:
					return "POSE_C_IDLE_B";
				
				case 56:
					return "POSE_C_TRANS_POSE_E";
				
				case 57:
					return "POSE_E_IDLE_C";
				
				case 58:
					return "POSE_E_LOOP_MEDIUM";
				
				case 59:
					return "POSE_E_IDLE_A";
				
				case 60:
					return "POSE_E_TRANS_POSE_C";
				
				case 61:
					return "POSE_C_IDLE_E";
				
				case 62:
					return "POSE_C_IDLE_F";
				
				case 63:
					return "POSE_C_LOOP_SMALL";
				
				case 64:
					return "POSE_C_LOOP_SMALL";
				
				case 65:
					return "POSE_C_LOOP_SMALL";
				
				case 66:
					return "POSE_C_IDLE_C";
				
				case 67:
					return "POSE_C_LOOP_SMALL";
				
				case 68:
					return "POSE_C_LOOP_SMALL";
				
				case 69:
					return "POSE_C_TRANS_POSE_A";
				
				case 70:
					return "POSE_A_IDLE_H";
				
				case 71:
					return "POSE_A_IDLE_C";
				
				case 72:
					return "POSE_A_IDLE_G";
				
				case 73:
					return "POSE_A_LOOP_LARGE";
				
				case 74:
					return "POSE_A_IDLE_C";
				
				case 75:
					return "POSE_A_LOOP_MEDIUM";
				
				case 76:
					return "POSE_A_LOOP_LARGE";
				
				case 77:
					return "POSE_A_LOOP_SMALL";
				
				case 78:
					return "POSE_A_IDLE_D";
				
				case 79:
					return "POSE_A_IDLE_F";
				
				case 80:
					return "POSE_A_IDLE_A";
				
				case 81:
					return "POSE_A_IDLE_B";
				
				case 82:
					return "POSE_A_TRANS_DRINK_DOWN";
				
				case 83:
					return "DRINK_DOWN_TRANS_POSE_B";
				
				case 84:
					return "POSE_B_IDLE_D";
				
				case 85:
					return "POSE_B_IDLE_K";
				
				case 86:
					return "POSE_B_IDLE_G";
				
				case 87:
					return "POSE_B_IDLE_H";
				
				case 88:
					return "POSE_B_LOOP_SMALL";
				
				case 89:
					return "POSE_B_IDLE_D";
				
				case 90:
					return "POSE_B_LOOP_SMALL";
				
				case 91:
					return "POSE_B_IDLE_A";
				
				case 92:
					return "POSE_B_IDLE_I";
				
				case 93:
					return "POSE_B_IDLE_J";
				
				case 94:
					return "POSE_B_IDLE_G";
				
				case 95:
					return "POSE_B_LOOP_TINY";
				
				case 96:
					return "POSE_B_LONG_TRANS_DANCE_A";
				
				case 97:
					return "DANCE_A_LOOP_TRANS_POSE_B";
				
				case 98:
					return "POSE_B_IDLE_C";
				
				case 99:
					return "POSE_B_IDLE_E";
				
				default:
			}
			switch (iParam1)
			{
				case 100:
					return "POSE_B_LONG_TRANS_POSE_A";
				
				case 101:
					return "POSE_A_IDLE_D";
				
				case 102:
					return "POSE_A_IDLE_A";
				
				case 103:
					return "POSE_A_IDLE_C";
				
				case 104:
					return "POSE_A_TRANS_POSE_E";
				
				case 105:
					return "POSE_E_LOOP_TINY";
				
				case 106:
					return "POSE_E_LOOP_MEDIUM";
				
				case 107:
					return "POSE_E_LOOP_TINY";
				
				case 108:
					return "POSE_E_IDLE_E";
				
				case 109:
					return "POSE_E_LOOP_TINY";
				
				case 110:
					return "POSE_E_IDLE_A";
				
				case 111:
					return "POSE_E_LOOP_TINY";
				
				case 112:
					return "POSE_E_LOOP_SMALL";
				
				case 113:
					return "POSE_E_LOOP_TINY";
				
				case 114:
					return "POSE_E_TRANS_POSE_C";
				
				case 115:
					return "POSE_C_LOOP_SMALL";
				
				case 116:
					return "POSE_C_IDLE_B";
				
				case 117:
					return "POSE_C_IDLE_F";
				
				case 118:
					return "POSE_C_IDLE_A";
				
				case 119:
					return "POSE_C_IDLE_B";
				
				case 120:
					return "POSE_C_LOOP_SMALL";
				
				case 121:
					return "POSE_C_IDLE_B";
				
				case 122:
					return "POSE_C_TRANS_POSE_A";
				
				case 123:
					return "POSE_A_IDLE_F";
				
				case 124:
					return "POSE_A_LOOP_MEDIUM";
				
				case 125:
					return "POSE_A_IDLE_C";
				
				case 126:
					return "POSE_A_IDLE_A";
				
				case 127:
					return "POSE_A_LOOP_LARGE";
				
				case 128:
					return "POSE_A_TRANS_POSE_C";
				
				case 129:
					return "POSE_C_LOOP_SMALL";
				
				case 130:
					return "POSE_C_TRANS_POSE_D";
				
				case 131:
					return "POSE_D_IDLE_B";
				
				case 132:
					return "POSE_D_IDLE_A";
				
				case 133:
					return "POSE_D_LOOP_SMALL";
				
				case 134:
					return "POSE_D_TRANS_POSE_E";
				
				case 135:
					return "POSE_E_TRANS_POSE_C";
				
				case 136:
					return "POSE_C_TRANS_POSE_B";
				
				case 137:
					return "POSE_B_LOOP_SMALL";
				
				case 138:
					return "POSE_B_IDLE_B";
				
				case 139:
					return "POSE_B_IDLE_G";
				
				case 140:
					return "POSE_B_IDLE_A";
				
				case 141:
					return "POSE_B_IDLE_E";
				
				case 142:
					return "POSE_B_IDLE_H";
				
				case 143:
					return "POSE_B_IDLE_K";
				
				case 144:
					return "POSE_B_IDLE_F";
				
				case 145:
					return "POSE_B_IDLE_G";
				
				case 146:
					return "POSE_B_TRANS_POSE_C";
				
				case 147:
					return "POSE_C_LOOP_SMALL";
				
				case 148:
					return "POSE_C_IDLE_C";
				
				case 149:
					return "POSE_C_LONG_TRANS_POSE_E";
				
				case 150:
					return "POSE_E_LOOP_SMALL";
				
				case 151:
					return "POSE_E_LOOP_TINY";
				
				case 152:
					return "POSE_E_TRANS_POSE_C";
				
				case 153:
					return "POSE_C_TRANS_DANCE_B";
				
				case 154:
					return "DANCE_B_IDLE_A";
				
				case 155:
					return "DANCE_B_IDLE_B";
				
				case 156:
					return "DANCE_B_IDLE_C";
				
				case 157:
					return "DANCE_B_TRANS_POSE_C";
				
				case 158:
					return "POSE_C_IDLE_F";
				
				case 159:
					return "POSE_C_IDLE_B";
				
				case 160:
					return "POSE_C_TRANS_POSE_A";
				
				case 161:
					return "POSE_A_IDLE_B";
				
				case 162:
					return "POSE_A_IDLE_G";
				
				case 163:
					return "POSE_A_LOOP_SMALL";
				
				case 164:
					return "POSE_A_IDLE_D";
				
				case 165:
					return "POSE_A_IDLE_H";
				
				case 166:
					return "POSE_A_IDLE_B";
				
				case 167:
					return "POSE_A_IDLE_A";
				
				case 168:
					return "POSE_A_IDLE_C";
				
				case 169:
					return "POSE_A_LOOP_LARGE";
				
				case 170:
					return "POSE_A_LOOP_MEDIUM";
				
				case 171:
					return "POSE_A_LOOP_LARGE";
				
				case 172:
					return "POSE_A_IDLE_C";
				
				case 173:
					return "POSE_A_LOOP_TINY";
				
				case 174:
					return "POSE_A_IDLE_F";
				
				case 175:
					return "POSE_A_TRANS_DRINK_DOWN";
				
				case 176:
					return "DRINK_DOWN_TRANS_POSE_B";
				
				case 177:
					return "POSE_B_IDLE_H";
				
				case 178:
					return "POSE_B_IDLE_K";
				
				case 179:
					return "POSE_B_LOOP_LARGE";
				
				case 180:
					return "POSE_B_IDLE_B";
				
				case 181:
					return "POSE_B_LOOP_LARGE";
				
				case 182:
					return "POSE_B_IDLE_I";
				
				case 183:
					return "POSE_B_IDLE_J";
				
				case 184:
					return "POSE_B_IDLE_D";
				
				case 185:
					return "POSE_B_LOOP_SMALL";
				
				case 186:
					return "POSE_B_IDLE_C";
				
				case 187:
					return "POSE_B_LOOP_SMALL";
				
				case 188:
					return "POSE_B_IDLE_D";
				
				case 189:
					return "POSE_B_LOOP_LARGE";
				
				case 190:
					return "POSE_B_LONG_TRANS_DANCE_A";
				
				case 191:
					return "DANCE_A_LOOP_TRANS_POSE_B";
				
				case 192:
					return "POSE_B_LOOP_SMALL";
				
				case 193:
					return "POSE_B_IDLE_F";
				
				case 194:
					return "POSE_B_IDLE_A";
				
				case 195:
					return "POSE_B_LOOP_LARGE";
				
				case 196:
					return "POSE_B_TRANS_POSE_C";
				
				case 197:
					return "POSE_C_TRANS_POSE_E";
				
				case 198:
					return "POSE_E_LOOP_SMALL";
				
				case 199:
					return "POSE_E_IDLE_A";
				
				default:
			}
			switch (iParam1)
			{
				case 200:
					return "POSE_E_IDLE_D";
				
				case 201:
					return "POSE_E_LOOP_LARGE";
				
				case 202:
					return "POSE_E_IDLE_E";
				
				case 203:
					return "POSE_E_TRANS_POSE_C";
				
				case 204:
					return "POSE_C_LOOP_SMALL";
				
				case 205:
					return "POSE_C_LOOP_SMALL";
				
				case 206:
					return "POSE_C_IDLE_B";
				
				case 207:
					return "POSE_C_LOOP_SMALL";
				
				case 208:
					return "POSE_C_IDLE_F";
				
				case 209:
					return "POSE_C_LOOP_SMALL";
				
				case 210:
					return "POSE_C_IDLE_E";
				
				case 211:
					return "POSE_C_LOOP_SMALL";
				
				case 212:
					return "POSE_C_TRANS_POSE_B";
				
				case 213:
					return "POSE_B_LOOP_TINY";
				
				case 214:
					return "POSE_B_LOOP_SMALL";
				
				case 215:
					return "POSE_B_IDLE_A";
				
				case 216:
					return "POSE_B_LOOP_SMALL";
				
				case 217:
					return "POSE_B_IDLE_D";
				
				case 218:
					return "POSE_B_LOOP_SMALL";
				
				case 219:
					return "POSE_B_LOOP_TINY";
				
				case 220:
					return "POSE_B_IDLE_G";
				
				case 221:
					return "POSE_B_IDLE_C";
				
				case 222:
					return "POSE_B_IDLE_A";
				
				case 223:
					return "POSE_B_TRANS_POSE_A";
				
				case 224:
					return "POSE_A_TRANS_DRINK_DOWN";
				
				case 225:
					return "DRINK_DOWN_TRANS_POSE_B";
				
				case 226:
					return "POSE_B_TRANS_POSE_C";
				
				case 227:
					return "POSE_C_TRANS_POSE_D";
				
				case 228:
					return "POSE_D_IDLE_B";
				
				case 229:
					return "POSE_D_IDLE_A";
				
				case 230:
					return "POSE_D_LOOP_SMALL";
				
				case 231:
					return "POSE_D_TRANS_POSE_E";
				
				case 232:
					return "POSE_E_LOOP_TINY";
				
				case 233:
					return "POSE_E_LOOP_MEDIUM";
				
				case 234:
					return "POSE_E_LOOP_TINY";
				
				case 235:
					return "POSE_E_IDLE_B";
				
				case 236:
					return "POSE_E_LOOP_TINY";
				
				case 237:
					return "POSE_E_IDLE_C";
				
				case 238:
					return "POSE_E_LOOP_TINY";
				
				case 239:
					return "POSE_E_TRANS_POSE_C";
				
				case 240:
					return "POSE_C_IDLE_C";
				
				case 241:
					return "POSE_C_IDLE_A";
				
				case 242:
					return "POSE_C_IDLE_B";
				
				case 243:
					return "POSE_C_LOOP_SMALL";
				
				case 244:
					return "POSE_C_IDLE_E";
				
				case 245:
					return "POSE_C_TRANS_POSE_A";
				
				case 246:
					return "POSE_A_IDLE_C";
				
				case 247:
					return "POSE_A_LOOP_MEDIUM";
				
				case 248:
					return "POSE_A_IDLE_G";
				
				case 249:
					return "POSE_A_LOOP_LARGE";
				
				case 250:
					return "POSE_A_LOOP_MEDIUM";
				
				case 251:
					return "POSE_A_IDLE_C";
				
				case 252:
					return "POSE_A_LOOP_TINY";
				
				case 253:
					return "POSE_A_IDLE_D";
				
				case 254:
					return "POSE_A_LOOP_TINY";
				
				case 255:
					return "POSE_A_TRANS_POSE_C";
				
				case 256:
					return "POSE_C_IDLE_D";
				
				case 257:
					return "POSE_C_IDLE_A";
				
				case 258:
					return "POSE_C_LOOP_SMALL";
				
				case 259:
					return "POSE_C_IDLE_B";
				
				case 260:
					return "POSE_C_IDLE_A";
				
				case 261:
					return "POSE_C_LONG_TRANS_POSE_E";
				
				case 262:
					return "POSE_E_LOOP_TINY";
				
				case 263:
					return "POSE_E_IDLE_A";
				
				case 264:
					return "POSE_E_LOOP_TINY";
				
				case 265:
					return "POSE_E_LOOP_MEDIUM";
				
				case 266:
					return "POSE_E_LOOP_TINY";
				
				case 267:
					return "POSE_E_LOOP_TINY";
				
				case 268:
					return "POSE_E_IDLE_A";
				
				case 269:
					return "POSE_E_LOOP_TINY";
				
				case 270:
					return "POSE_E_LOOP_TINY";
				
				case 271:
					return "POSE_E_LOOP_SMALL";
				
				case 272:
					return "POSE_E_LOOP_TINY";
				
				case 273:
					return "POSE_E_LOOP_TINY";
				
				case 274:
					return "POSE_E_IDLE_B";
				
				case 275:
					return "POSE_E_LOOP_TINY";
				
				case 276:
					return "POSE_E_LOOP_TINY";
				
				case 277:
					return "POSE_E_TRANS_POSE_C";
				
				case 278:
					return "POSE_C_LOOP_SMALL";
				
				case 279:
					return "POSE_C_IDLE_E";
				
				case 280:
					return "POSE_C_LOOP_SMALL";
				
				case 281:
					return "POSE_C_LOOP_TINY";
				
				case 282:
					return "POSE_C_TRANS_POSE_D";
				
				case 283:
					return "POSE_D_LOOP_SMALL";
				
				case 284:
					return "POSE_D_IDLE_B";
				
				case 285:
					return "POSE_D_LOOP_SMALL";
				
				case 286:
					return "POSE_D_TRANS_POSE_E";
				
				case 287:
					return "POSE_E_LOOP_MEDIUM";
				
				case 288:
					return "POSE_E_TRANS_POSE_C";
				
				case 289:
					return "POSE_C_LOOP_SMALL";
				
				case 290:
					return "POSE_C_LOOP_SMALL";
				
				case 291:
					return "POSE_C_LOOP_TINY";
				
				case 292:
					return "POSE_C_IDLE_A";
				
				case 293:
					return "POSE_C_IDLE_D";
				
				case 294:
					return "POSE_C_IDLE_B";
				
				case 295:
					return "POSE_C_LOOP_SMALL";
				
				case 296:
					return "POSE_C_LOOP_TINY";
				
				case 297:
					return "POSE_C_IDLE_E";
				
				case 298:
					return "POSE_C_IDLE_B";
				
				case 299:
					return "POSE_C_LOOP_SMALL";
				
				default:
			}
			switch (iParam1)
			{
				case 300:
					return "POSE_C_LONG_TRANS_POSE_B";
				
				case 301:
					return "POSE_B_IDLE_J";
				
				case 302:
					return "POSE_B_LOOP_MEDIUM";
				
				case 303:
					return "POSE_B_IDLE_D";
				
				case 304:
					return "POSE_B_LOOP_SMALL";
				
				case 305:
					return "POSE_B_IDLE_B";
				
				case 306:
					return "POSE_B_TRANS_POSE_C";
				
				case 307:
					return "POSE_C_IDLE_F";
				
				case 308:
					return "POSE_C_TRANS_POSE_B";
				
				case 309:
					return "POSE_B_IDLE_H";
				
				case 310:
					return "POSE_B_IDLE_A";
				
				case 311:
					return "POSE_B_TRANS_POSE_C";
				
				case 312:
					return "POSE_C_IDLE_D";
				
				case 313:
					return "POSE_C_TRANS_DANCE_B";
				
				case 314:
					return "DANCE_B_IDLE_C";
				
				case 315:
					return "DANCE_B_IDLE_D";
				
				case 316:
					return "DANCE_B_TRANS_DRINK_DOWN";
				
				case 317:
					return "DRINK_DOWN_TRANS_POSE_B";
				
				case 318:
					return "POSE_B_IDLE_B";
				
				case 319:
					return "POSE_B_LOOP_LARGE";
				
				case 320:
					return "POSE_B_IDLE_E";
				
				case 321:
					return "POSE_B_LOOP_SMALL";
				
				case 322:
					return "POSE_B_LOOP_TINY";
				
				case 323:
					return "POSE_B_IDLE_C";
				
				case 324:
					return "POSE_B_LOOP_SMALL";
				
				case 325:
					return "POSE_B_IDLE_D";
				
				case 326:
					return "POSE_B_IDLE_K";
				
				case 327:
					return "POSE_B_LOOP_TINY";
				
				case 328:
					return "POSE_B_IDLE_G";
				
				case 329:
					return "POSE_B_IDLE_H";
				
				case 330:
					return "POSE_B_TRANS_POSE_A";
				
				case 331:
					return "POSE_A_LOOP_LARGE";
				
				case 332:
					return "POSE_A_IDLE_F";
				
				case 333:
					return "POSE_A_TRANS_DRINK_DOWN";
				
				case 334:
					return "DRINK_DOWN_TRANS_POSE_B";
				
				case 335:
					return "POSE_B_LOOP_LARGE";
				
				case 336:
					return "POSE_B_LOOP_TINY";
				
				case 337:
					return "POSE_B_LOOP_SMALL";
				
				case 338:
					return "POSE_B_LOOP_TINY";
				
				case 339:
					return "POSE_B_LONG_TRANS_DANCE_A";
				
				case 340:
					return "DANCE_A_LOOP_TRANS_POSE_B";
				
				case 341:
					return "POSE_B_TRANS_POSE_C";
				
				case 342:
					return "POSE_C_LOOP_SMALL";
				
				case 343:
					return "POSE_C_IDLE_F";
				
				case 344:
					return "POSE_C_LOOP_TINY";
				
				case 345:
					return "POSE_C_IDLE_A";
				
				case 346:
					return "POSE_C_IDLE_E";
				
				case 347:
					return "POSE_C_IDLE_D";
				
				case 348:
					return "POSE_C_IDLE_B";
				
				case 349:
					return "POSE_C_TRANS_POSE_B";
				
				case 350:
					return "POSE_B_LOOP_MEDIUM";
				
				case 351:
					return "POSE_B_IDLE_A";
				
				case 352:
					return "POSE_B_LOOP_TINY";
				
				case 353:
					return "POSE_B_LOOP_MEDIUM";
				
				case 354:
					return "POSE_B_LOOP_TINY";
				
				case 355:
					return "POSE_B_TRANS_POSE_C";
				
				case 356:
					return "POSE_C_IDLE_B";
				
				case 357:
					return "POSE_C_IDLE_D";
				
				case 358:
					return "POSE_C_TRANS_POSE_E";
				
				case 359:
					return "POSE_E_LOOP_TINY";
				
				case 360:
					return "POSE_E_LOOP_MEDIUM";
				
				case 361:
					return "POSE_E_LOOP_TINY";
				
				case 362:
					return "POSE_E_IDLE_E";
				
				case 363:
					return "POSE_E_LOOP_SMALL";
				
				case 364:
					return "POSE_E_IDLE_C";
				
				case 365:
					return "POSE_E_IDLE_B";
				
				case 366:
					return "POSE_E_TRANS_POSE_C";
				
				case 367:
					return "POSE_C_IDLE_B";
				
				case 368:
					return "POSE_C_LONG_TRANS_POSE_E";
				
				case 369:
					return "POSE_E_TRANS_POSE_C";
				
				case 370:
					return "POSE_C_IDLE_B";
				
				case 371:
					return "POSE_C_IDLE_A";
				
				case 372:
					return "POSE_C_LOOP_SMALL";
				
				case 373:
					return "POSE_C_LOOP_TINY";
				
				case 374:
					return "POSE_C_IDLE_E";
				
				case 375:
					return "POSE_C_LOOP_TINY";
				
				case 376:
					return "POSE_C_LOOP_TINY";
				
				case 377:
					return "POSE_C_TRANS_POSE_B";
				
				case 378:
					return "POSE_B_TRANS_POSE_C";
				
				case 379:
					return "POSE_C_LOOP_SMALL";
				
				case 380:
					return "POSE_C_LONG_TRANS_POSE_B";
				
				case 381:
					return "POSE_B_IDLE_A";
				
				case 382:
					return "POSE_B_LOOP_SMALL";
				
				case 383:
					return "POSE_B_LOOP_SMALL";
				
				case 384:
					return "POSE_B_IDLE_J";
				
				case 385:
					return "POSE_B_LOOP_TINY";
				
				case 386:
					return "POSE_B_LOOP_SMALL";
				
				case 387:
					return "POSE_B_IDLE_E";
				
				case 388:
					return "POSE_B_LOOP_TINY";
				
				case 389:
					return "POSE_B_LONG_TRANS_DANCE_A";
				
				case 390:
					return "DANCE_A_LOOP_TRANS_POSE_B";
				
				case 391:
					return "POSE_B_TRANS_POSE_C";
				
				case 392:
					return "POSE_C_LOOP_SMALL";
				
				case 393:
					return "POSE_C_LOOP_TINY";
				
				case 394:
					return "POSE_C_LOOP_SMALL";
				
				case 395:
					return "POSE_C_LOOP_TINY";
				
				case 396:
					return "POSE_C_IDLE_C";
				
				case 397:
					return "POSE_C_LOOP_SMALL";
				
				case 398:
					return "POSE_C_LOOP_TINY";
				
				case 399:
					return "POSE_C_TRANS_DANCE_B";
				
				default:
			}
			switch (iParam1)
			{
				case 400:
					return "DANCE_B_LOOP";
				
				case 401:
					return "DANCE_B_IDLE_C";
				
				case 402:
					return "DANCE_B_LOOP";
				
				case 403:
					return "DANCE_B_TRANS_DRINK_DOWN";
				
				case 404:
					return "DRINK_DOWN_LONG_TRANS_POSE_B";
				
				case 405:
					return "POSE_B_IDLE_A";
				
				case 406:
					return "POSE_B_LOOP_LARGE";
				
				case 407:
					return "POSE_B_IDLE_E";
				
				case 408:
					return "POSE_B_IDLE_C";
				
				case 409:
					return "POSE_B_IDLE_D";
				
				case 410:
					return "POSE_B_IDLE_B";
				
				case 411:
					return "POSE_B_IDLE_J";
				
				case 412:
					return "POSE_B_LOOP_SMALL";
				
				case 413:
					return "POSE_B_LOOP_MEDIUM";
				
				case 414:
					return "POSE_B_LOOP_TINY";
				
				case 415:
					return "POSE_B_IDLE_K";
				
				case 416:
					return "POSE_B_IDLE_G";
				
				case 417:
					return "POSE_B_IDLE_I";
				
				case 418:
					return "POSE_B_LOOP_LARGE";
				
				case 419:
					return "POSE_B_LOOP_SMALL";
				
				case 420:
					return "POSE_B_LOOP_LARGE";
				
				case 421:
					return "POSE_B_LOOP_SMALL";
				
				case 422:
					return "POSE_B_IDLE_H";
				
				case 423:
					return "POSE_B_IDLE_G";
				
				case 424:
					return "POSE_B_TRANS_POSE_C";
				
				case 425:
					return "POSE_C_IDLE_B";
				
				case 426:
					return "POSE_C_IDLE_D";
				
				case 427:
					return "POSE_C_IDLE_A";
				
				case 428:
					return "POSE_C_IDLE_B";
				
				case 429:
					return "POSE_C_LOOP_SMALL";
				
				case 430:
					return "POSE_C_LOOP_TINY";
				
				case 431:
					return "POSE_C_TRANS_POSE_A";
				
				case 432:
					return "POSE_A_LOOP_TINY";
				
				case 433:
					return "POSE_A_IDLE_B";
				
				case 434:
					return "POSE_A_IDLE_E";
				
				case 435:
					return "POSE_A_LOOP_MEDIUM";
				
				case 436:
					return "POSE_A_LOOP_SMALL";
				
				case 437:
					return "POSE_A_LOOP_LARGE";
				
				case 438:
					return "POSE_A_IDLE_H";
				
				case 439:
					return "POSE_A_LOOP_MEDIUM";
				
				case 440:
					return "POSE_A_LOOP_SMALL";
				
				case 441:
					return "POSE_A_LOOP_TINY";
				
				case 442:
					return "POSE_A_LOOP_MEDIUM";
				
				case 443:
					return "POSE_A_IDLE_A";
				
				case 444:
					return "POSE_A_IDLE_G";
				
				case 445:
					return "POSE_A_IDLE_D";
				
				case 446:
					return "POSE_A_IDLE_C";
				
				case 447:
					return "POSE_A_IDLE_F";
				
				case 448:
					return "POSE_A_LOOP_TINY";
				
				case 449:
					return "POSE_A_LOOP_TINY";
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return "SOL_START";
				
				case 1:
					return "SOL_IDLE_LEFT_E";
				
				case 2:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 3:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 4:
					return "SOL_SYNC_H";
				
				case 5:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 6:
					return "SOL_IDLE_CTR_MID_H";
				
				case 7:
					return "SOL_SYNC_F";
				
				case 8:
					return "SOL_IDLE_CTR_WIDE_C";
				
				case 9:
					return "SOL_IDLE_CTR_WIDE_B";
				
				case 10:
					return "SOL_DANCE_G";
				
				case 11:
					return "SOL_IDLE_LEFT_D";
				
				case 12:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 13:
					return "SOL_DANCE_L";
				
				case 14:
					return "SOL_IDLE_CTR_MID_A";
				
				case 15:
					return "SOL_IDLE_CTR_MID_C";
				
				case 16:
					return "SOL_IDLE_CTR_MID_D";
				
				case 17:
					return "SOL_IDLE_CTR_MID_I";
				
				case 18:
					return "SOL_IDLE_CTR_MID_A";
				
				case 19:
					return "SOL_IDLE_CTR_MID_B";
				
				case 20:
					return "SOL_IDLE_CTR_MID_C";
				
				case 21:
					return "SOL_IDLE_CTR_MID_E";
				
				case 22:
					return "SOL_IDLE_CTR_MID_D";
				
				case 23:
					return "SOL_TRANS_CTRNRW_TO_NRW_A";
				
				case 24:
					return "SOL_DANCE_C";
				
				case 25:
					return "SOL_IDLE_CTR_MID_F";
				
				case 26:
					return "SOL_DANCE_D";
				
				case 27:
					return "SOL_TRANS_CTRNRW_TO_NRW_A";
				
				case 28:
					return "SOL_IDLE_CTR_NAROW_A";
				
				case 29:
					return "SOL_TRANS_CTRNRW_TO_OUT_A";
				
				case 30:
					return "SOL_TRANS_OUT_TO_RT_A";
				
				case 31:
					return "SOL_IDLE_RT_A";
				
				case 32:
					return "SOL_IDLE_RT_A";
				
				case 33:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 34:
					return "SOL_TRANS_CTRNRW_TO_WIDE_A";
				
				case 35:
					return "SOL_IDLE_CTR_WIDE_C";
				
				case 36:
					return "SOL_TRANS_CTRWIDE_TO_MID_A";
				
				case 37:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 38:
					return "SOL_SYNC_D";
				
				case 39:
					return "SOL_IDLE_CTR_MID_A";
				
				case 40:
					return "SOL_IDLE_CTR_MID_B";
				
				case 41:
					return "SOL_IDLE_CTR_MID_A";
				
				case 42:
					return "SOL_IDLE_CTR_MID_G";
				
				case 43:
					return "SOL_IDLE_CTR_MID_H";
				
				case 44:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 45:
					return "SOL_TRANS_LFT_TO_CTRNRW_A";
				
				case 46:
					return "SOL_TRANS_CTRNRW_TO_WIDE_A";
				
				case 47:
					return "SOL_TRANS_CTRWIDE_TO_MID_A";
				
				case 48:
					return "SOL_IDLE_CTR_MID_D";
				
				case 49:
					return "SOL_IDLE_CTR_MID_E";
				
				case 50:
					return "SOL_IDLE_CTR_MID_F";
				
				case 51:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 52:
					return "SOL_IDLE_LEFT_E";
				
				case 53:
					return "SOL_IDLE_LEFT_B";
				
				case 54:
					return "SOL_IDLE_LEFT_A";
				
				case 55:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 56:
					return "SOL_IDLE_CTR_MID_B";
				
				case 57:
					return "SOL_IDLE_CTR_MID_F";
				
				case 58:
					return "SOL_DANCE_I";
				
				case 59:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 60:
					return "SOL_IDLE_LEFT_HP_A";
				
				case 61:
					return "SOL_TRANS_LFTHP_TO_CTRMID_A";
				
				case 62:
					return "SOL_TRANS_CTRMID_TO_WIDE_A";
				
				case 63:
					return "SOL_DANCE_G";
				
				case 64:
					return "SOL_IDLE_LEFT_D";
				
				case 65:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 66:
					return "SOL_DANCE_H";
				
				case 67:
					return "SOL_IDLE_CTR_MID_B";
				
				case 68:
					return "SOL_IDLE_CTR_MID_B";
				
				case 69:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 70:
					return "SOL_DANCE_E";
				
				case 71:
					return "SOL_DANCE_F";
				
				case 72:
					return "SOL_SYNC_D";
				
				case 73:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 74:
					return "SOL_IDLE_RT_D";
				
				case 75:
					return "SOL_SYNC_H";
				
				case 76:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 77:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 78:
					return "SOL_IDLE_LEFT_D";
				
				case 79:
					return "SOL_IDLE_LEFT_A";
				
				case 80:
					return "SOL_DANCE_B";
				
				case 81:
					return "SOL_TRANS_CTRMID_TO_WIDE_A";
				
				case 82:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 83:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 84:
					return "SOL_IDLE_CTR_WIDE_C";
				
				case 85:
					return "SOL_TRANS_CTRWIDE_TO_MID_A";
				
				case 86:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 87:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 88:
					return "SOL_IDLE_LEFT_HP_A";
				
				case 89:
					return "SOL_TRANS_LFTHP_TO_CTRMID_A";
				
				case 90:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 91:
					return "SOL_DANCE_B";
				
				case 92:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 93:
					return "SOL_IDLE_LEFT_A";
				
				case 94:
					return "SOL_IDLE_LEFT_A";
				
				case 95:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 96:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 97:
					return "SOL_TRANS_RT_TO_FARRT_A";
				
				case 98:
					return "SOL_DANCE_J";
				
				case 99:
					return "SOL_TRANS_CTRNRW_TO_NRW_A";
				
				case 100:
					return "SOL_IDLE_CTR_NAROW_A";
				
				default:
			}
			switch (iParam1)
			{
				case 101:
					return "SOL_DANCE_C";
				
				case 102:
					return "SOL_SYNC_G";
				
				case 103:
					return "SOL_IDLE_CTR_MID_D";
				
				case 104:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 105:
					return "SOL_SYNC_D";
				
				case 106:
					return "SOL_IDLE_CTR_MID_F";
				
				case 107:
					return "SOL_IDLE_CTR_MID_B";
				
				case 108:
					return "SOL_IDLE_CTR_MID_E";
				
				case 109:
					return "SOL_IDLE_CTR_MID_F";
				
				case 110:
					return "SOL_DANCE_L";
				
				case 111:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 112:
					return "SOL_IDLE_LEFT_D";
				
				case 113:
					return "SOL_IDLE_LEFT_C";
				
				case 114:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 115:
					return "SOL_TRANS_CTRMID_TO_WIDE_A";
				
				case 116:
					return "SOL_IDLE_CTR_WIDE_B";
				
				case 117:
					return "SOL_DANCE_G";
				
				case 118:
					return "SOL_IDLE_LEFT_A";
				
				case 119:
					return "SOL_IDLE_LEFT_A";
				
				case 120:
					return "SOL_IDLE_LEFT_C";
				
				case 121:
					return "SOL_IDLE_LEFT_B";
				
				case 122:
					return "SOL_IDLE_LEFT_A";
				
				case 123:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 124:
					return "SOL_TRANS_CTRMID_TO_WIDE_A";
				
				case 125:
					return "SOL_DANCE_G";
				
				case 126:
					return "SOL_DANCE_B";
				
				case 127:
					return "SOL_IDLE_CTR_MID_A";
				
				case 128:
					return "SOL_IDLE_CTR_MID_A";
				
				case 129:
					return "SOL_IDLE_CTR_MID_C";
				
				case 130:
					return "SOL_IDLE_CTR_MID_B";
				
				case 131:
					return "SOL_IDLE_CTR_MID_B";
				
				case 132:
					return "SOL_IDLE_CTR_MID_A";
				
				case 133:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 134:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 135:
					return "SOL_TRANS_LFTHP_TO_OUT_A";
				
				case 136:
					return "SOL_TRANS_OUT_TO_RT_A";
				
				case 137:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 138:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 139:
					return "SOL_TRANS_CTRMID_TO_WIDE_A";
				
				case 140:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 141:
					return "SOL_SYNC_A";
				
				case 142:
					return "SOL_SYNC_B";
				
				case 143:
					return "SOL_IDLE_LEFT_B";
				
				case 144:
					return "SOL_IDLE_LEFT_A";
				
				case 145:
					return "SOL_DANCE_B";
				
				case 146:
					return "SOL_IDLE_CTR_MID_B";
				
				case 147:
					return "SOL_IDLE_CTR_MID_C";
				
				case 148:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 149:
					return "SOL_IDLE_LEFT_B";
				
				case 150:
					return "SOL_SYNC_B";
				
				case 151:
					return "SOL_IDLE_LEFT_B";
				
				case 152:
					return "SOL_DANCE_B";
				
				case 153:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 154:
					return "NEW_SOL_DANCE_A";
				
				case 155:
					return "SOL_IDLE_LEFT_HP_A";
				
				case 156:
					return "SOL_TRANS_LFTHP_TO_CTRMID_A";
				
				case 157:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 158:
					return "SOL_TRANS_RT_TO_FARRT_A";
				
				case 159:
					return "SOL_DANCE_J";
				
				case 160:
					return "SOL_IDLE_CTR_MID_B";
				
				case 161:
					return "SOL_IDLE_CTR_MID_B";
				
				case 162:
					return "SOL_IDLE_CTR_MID_E";
				
				case 163:
					return "SOL_IDLE_CTR_MID_C";
				
				case 164:
					return "SOL_IDLE_CTR_MID_B";
				
				case 165:
					return "SOL_IDLE_CTR_MID_B";
				
				case 166:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 167:
					return "SOL_DANCE_E";
				
				case 168:
					return "SOL_IDLE_RT_A";
				
				case 169:
					return "SOL_IDLE_RT_C";
				
				case 170:
					return "SOL_IDLE_RT_B";
				
				case 171:
					return "SOL_IDLE_RT_C";
				
				case 172:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 173:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 174:
					return "SOL_IDLE_CTR_MID_A";
				
				case 175:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 176:
					return "SOL_SYNC_B";
				
				case 177:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 178:
					return "SOL_IDLE_CTR_MID_B";
				
				case 179:
					return "SOL_IDLE_CTR_MID_G";
				
				case 180:
					return "SOL_IDLE_CTR_MID_B";
				
				case 181:
					return "SOL_IDLE_CTR_MID_B";
				
				case 182:
					return "SOL_DANCE_K";
				
				case 183:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 184:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 185:
					return "SOL_IDLE_LEFT_HP_A";
				
				case 186:
					return "SOL_TRANS_LFTHP_TO_CTRMID_A";
				
				case 187:
					return "SOL_IDLE_CTR_MID_B";
				
				case 188:
					return "SOL_DANCE_I";
				
				case 189:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 190:
					return "SOL_DANCE_L";
				
				case 191:
					return "SOL_SYNC_F";
				
				case 192:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 193:
					return "SOL_IDLE_CTR_WIDE_C";
				
				case 194:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 195:
					return "SOL_IDLE_CTR_WIDE_B";
				
				case 196:
					return "SOL_DANCE_G";
				
				case 197:
					return "SOL_IDLE_LEFT_C";
				
				case 198:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 199:
					return "SOL_IDLE_CTR_MID_D";
				
				case 200:
					return "SOL_IDLE_CTR_MID_C";
				
				default:
			}
			switch (iParam1)
			{
				case 201:
					return "SOL_IDLE_CTR_MID_D";
				
				case 202:
					return "SOL_IDLE_CTR_MID_E";
				
				case 203:
					return "SOL_IDLE_CTR_MID_C";
				
				case 204:
					return "SOL_TRANS_CTRNRW_TO_NRW_A";
				
				case 205:
					return "SOL_DANCE_C";
				
				case 206:
					return "SOL_IDLE_CTR_MID_F";
				
				case 207:
					return "SOL_DANCE_I";
				
				case 208:
					return "SOL_IDLE_LEFT_A";
				
				case 209:
					return "SOL_TRANS_LFT_TO_CTRNRW_A";
				
				case 210:
					return "SOL_IDLE_CTR_NAROW_A";
				
				case 211:
					return "SOL_TRANS_CTRNRW_TO_OUT_A";
				
				case 212:
					return "SOL_TRANS_OUT_TO_RT_A";
				
				case 213:
					return "SOL_IDLE_RT_A";
				
				case 214:
					return "SOL_IDLE_RT_B";
				
				case 215:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 216:
					return "SOL_TRANS_CTRNRW_TO_WIDE_A";
				
				case 217:
					return "SOL_TRANS_CTRWIDE_TO_MID_A";
				
				case 218:
					return "SOL_SYNC_C";
				
				case 219:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 220:
					return "SOL_IDLE_CTR_NAROW_A";
				
				case 221:
					return "SOL_TRANS_CTRNRW_TO_WIDE_A";
				
				case 222:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 223:
					return "SOL_TRANS_CTRWIDE_TO_MID_A";
				
				case 224:
					return "SOL_IDLE_CTR_MID_C";
				
				case 225:
					return "SOL_IDLE_CTR_MID_A";
				
				case 226:
					return "SOL_IDLE_CTR_MID_G";
				
				case 227:
					return "SOL_SYNC_C";
				
				case 228:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 229:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 230:
					return "SOL_IDLE_CTR_MID_A";
				
				case 231:
					return "SOL_IDLE_CTR_MID_B";
				
				case 232:
					return "SOL_IDLE_CTR_MID_C";
				
				case 233:
					return "SOL_TRANS_CTRMID_TO_WIDE_A";
				
				case 234:
					return "SOL_DANCE_G";
				
				case 235:
					return "SOL_IDLE_LEFT_E";
				
				case 236:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 237:
					return "SOL_DANCE_H";
				
				case 238:
					return "SOL_IDLE_CTR_MID_B";
				
				case 239:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 240:
					return "SOL_IDLE_RT_C";
				
				case 241:
					return "SOL_DANCE_E";
				
				case 242:
					return "SOL_DANCE_F";
				
				case 243:
					return "SOL_IDLE_RT_D";
				
				case 244:
					return "SOL_SYNC_D";
				
				case 245:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 246:
					return "NEW_SOL_DANCE_A";
				
				case 247:
					return "SOL_IDLE_LEFT_HP_A";
				
				case 248:
					return "SOL_TRANS_LFTHP_TO_CTRMID_A";
				
				case 249:
					return "SOL_IDLE_CTR_MID_B";
				
				case 250:
					return "SOL_IDLE_CTR_MID_B";
				
				case 251:
					return "SOL_TRANS_CTRMID_TO_WIDE_A";
				
				case 252:
					return "SOL_DANCE_G";
				
				case 253:
					return "SOL_IDLE_LEFT_E";
				
				case 254:
					return "SOL_IDLE_LEFT_D";
				
				case 255:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 256:
					return "SOL_DANCE_H";
				
				case 257:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 258:
					return "SOL_DANCE_E";
				
				case 259:
					return "SOL_DANCE_F";
				
				case 260:
					return "SOL_SYNC_D";
				
				case 261:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 262:
					return "SOL_SYNC_H";
				
				case 263:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 264:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 265:
					return "SOL_SYNC_B";
				
				case 266:
					return "SOL_IDLE_LEFT_A";
				
				case 267:
					return "SOL_DANCE_B";
				
				case 268:
					return "SOL_IDLE_CTR_MID_A";
				
				case 269:
					return "SOL_TRANS_CTRMID_TO_WIDE_A";
				
				case 270:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 271:
					return "SOL_DANCE_G";
				
				case 272:
					return "SOL_IDLE_LEFT_B";
				
				case 273:
					return "SOL_IDLE_LEFT_A";
				
				case 274:
					return "SOL_DANCE_B";
				
				case 275:
					return "SOL_IDLE_CTR_MID_A";
				
				case 276:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 277:
					return "SOL_IDLE_LEFT_B";
				
				case 278:
					return "SOL_SYNC_B";
				
				case 279:
					return "SOL_IDLE_LEFT_B";
				
				case 280:
					return "SOL_TRANS_LFT_TO_CTRNRW_A";
				
				case 281:
					return "SOL_TRANS_CTRNRW_TO_WIDE_A";
				
				case 282:
					return "SOL_TRANS_CTRWIDE_TO_MID_A";
				
				case 283:
					return "SOL_IDLE_CTR_MID_D";
				
				case 284:
					return "SOL_IDLE_CTR_MID_E";
				
				case 285:
					return "SOL_IDLE_CTR_MID_F";
				
				case 286:
					return "SOL_DANCE_I";
				
				case 287:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 288:
					return "SOL_IDLE_CTR_MID_G";
				
				case 289:
					return "SOL_IDLE_CTR_MID_B";
				
				case 290:
					return "SOL_IDLE_CTR_MID_B";
				
				case 291:
					return "SOL_IDLE_CTR_MID_F";
				
				case 292:
					return "SOL_SYNC_C";
				
				case 293:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 294:
					return "SOL_TRANS_CTRNRW_TO_WIDE_A";
				
				case 295:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 296:
					return "SOL_IDLE_CTR_WIDE_B";
				
				case 297:
					return "SOL_IDLE_CTR_WIDE_C";
				
				case 298:
					return "SOL_IDLE_CTR_WIDE_B";
				
				case 299:
					return "SOL_DANCE_G";
				
				case 300:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				default:
			}
			switch (iParam1)
			{
				case 301:
					return "SOL_IDLE_CTR_MID_H";
				
				case 302:
					return "SOL_IDLE_CTR_MID_D";
				
				case 303:
					return "SOL_IDLE_CTR_MID_B";
				
				case 304:
					return "SOL_IDLE_CTR_MID_B";
				
				case 305:
					return "SOL_SYNC_E";
				
				case 306:
					return "SOL_IDLE_CTR_MID_E";
				
				case 307:
					return "SOL_IDLE_CTR_MID_B";
				
				case 308:
					return "SOL_IDLE_CTR_MID_A";
				
				case 309:
					return "SOL_SYNC_F";
				
				case 310:
					return "SOL_IDLE_CTR_WIDE_B";
				
				case 311:
					return "SOL_DANCE_G";
				
				case 312:
					return "SOL_IDLE_LEFT_C";
				
				case 313:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 314:
					return "SOL_DANCE_I";
				
				case 315:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 316:
					return "SOL_IDLE_LEFT_HP_A";
				
				case 317:
					return "SOL_TRANS_LFTHP_TO_CTRMID_A";
				
				case 318:
					return "SOL_IDLE_CTR_MID_I";
				
				case 319:
					return "SOL_IDLE_CTR_MID_A";
				
				case 320:
					return "SOL_IDLE_CTR_MID_I";
				
				case 321:
					return "SOL_IDLE_CTR_MID_C";
				
				case 322:
					return "SOL_DANCE_K";
				
				case 323:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 324:
					return "SOL_IDLE_LEFT_B";
				
				case 325:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 326:
					return "SOL_IDLE_CTR_MID_B";
				
				case 327:
					return "SOL_DANCE_L";
				
				case 328:
					return "SOL_IDLE_CTR_MID_D";
				
				case 329:
					return "SOL_DANCE_K";
				
				case 330:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 331:
					return "SOL_IDLE_LEFT_D";
				
				case 332:
					return "SOL_SYNC_B";
				
				case 333:
					return "SOL_IDLE_LEFT_C";
				
				case 334:
					return "SOL_IDLE_LEFT_B";
				
				case 335:
					return "SOL_IDLE_LEFT_B";
				
				case 336:
					return "SOL_DANCE_B";
				
				case 337:
					return "SOL_IDLE_CTR_MID_A";
				
				case 338:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 339:
					return "SOL_IDLE_LEFT_B";
				
				case 340:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 341:
					return "SOL_TRANS_LFTHP_TO_OUT_A";
				
				case 342:
					return "SOL_TRANS_OUT_TO_RT_A";
				
				case 343:
					return "SOL_DANCE_F";
				
				case 344:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 345:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 346:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 347:
					return "SOL_TRANS_LFT_TO_CTRNRW_A";
				
				case 348:
					return "SOL_TRANS_CTRNRW_TO_WIDE_A";
				
				case 349:
					return "SOL_SYNC_A";
				
				case 350:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 351:
					return "SOL_IDLE_CTR_MID_I";
				
				case 352:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 353:
					return "NEW_SOL_DANCE_A";
				
				case 354:
					return "SOL_IDLE_LEFT_HP_A";
				
				case 355:
					return "SOL_TRANS_LFTHP_TO_CTRMID_A";
				
				case 356:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 357:
					return "SOL_TRANS_RT_TO_FARRT_A";
				
				case 358:
					return "SOL_DANCE_J";
				
				case 359:
					return "SOL_TRANS_CTRNRW_TO_NRW_A";
				
				case 360:
					return "SOL_IDLE_CTR_NAROW_A";
				
				case 361:
					return "SOL_DANCE_C";
				
				case 362:
					return "SOL_IDLE_CTR_MID_F";
				
				case 363:
					return "SOL_IDLE_CTR_MID_D";
				
				case 364:
					return "SOL_IDLE_CTR_MID_B";
				
				case 365:
					return "SOL_IDLE_CTR_MID_E";
				
				case 366:
					return "SOL_IDLE_CTR_MID_F";
				
				case 367:
					return "SOL_DANCE_L";
				
				case 368:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 369:
					return "SOL_SYNC_D";
				
				case 370:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 371:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 372:
					return "SOL_SYNC_E";
				
				case 373:
					return "SOL_IDLE_CTR_MID_H";
				
				case 374:
					return "SOL_IDLE_CTR_MID_G";
				
				case 375:
					return "SOL_SYNC_F";
				
				case 376:
					return "SOL_IDLE_CTR_WIDE_B";
				
				case 377:
					return "SOL_DANCE_G";
				
				case 378:
					return "SOL_IDLE_LEFT_C";
				
				case 379:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 380:
					return "SOL_IDLE_CTR_MID_B";
				
				case 381:
					return "SOL_IDLE_CTR_MID_A";
				
				case 382:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 383:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 384:
					return "SOL_TRANS_LFTHP_TO_OUT_A";
				
				case 385:
					return "SOL_TRANS_OUT_TO_RT_A";
				
				case 386:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 387:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 388:
					return "SOL_SYNC_G";
				
				case 389:
					return "SOL_IDLE_CTR_MID_B";
				
				case 390:
					return "SOL_IDLE_CTR_MID_B";
				
				case 391:
					return "SOL_DANCE_I";
				
				case 392:
					return "SOL_IDLE_LEFT_E";
				
				case 393:
					return "SOL_TRANS_LFT_TO_CTRNRW_A";
				
				case 394:
					return "SOL_IDLE_CTR_NAROW_A";
				
				case 395:
					return "SOL_TRANS_CTRNRW_TO_OUT_A";
				
				case 396:
					return "SOL_TRANS_OUT_TO_RT_A";
				
				case 397:
					return "SOL_IDLE_RT_A";
				
				case 398:
					return "SOL_IDLE_RT_B";
				
				case 399:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 400:
					return "SOL_TRANS_CTRNRW_TO_WIDE_A";
				
				default:
			}
			switch (iParam1)
			{
				case 401:
					return "SOL_TRANS_CTRWIDE_TO_MID_A";
				
				case 402:
					return "SOL_SYNC_C";
				
				case 403:
					return "SOL_SYNC_H";
				
				case 404:
					return "SOL_IDLE_CTR_NAROW_A";
				
				case 405:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 406:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 407:
					return "SOL_IDLE_LEFT_A";
				
				case 408:
					return "SOL_DANCE_B";
				
				case 409:
					return "SOL_IDLE_CTR_MID_A";
				
				case 410:
					return "SOL_TRANS_CTRMID_TO_WIDE_A";
				
				case 411:
					return "SOL_DANCE_G";
				
				case 412:
					return "SOL_IDLE_LEFT_A";
				
				case 413:
					return "SOL_IDLE_LEFT_E";
				
				case 414:
					return "SOL_IDLE_LEFT_A";
				
				case 415:
					return "SOL_IDLE_LEFT_D";
				
				case 416:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 417:
					return "SOL_DANCE_H";
				
				case 418:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 419:
					return "NEW_SOL_DANCE_A";
				
				case 420:
					return "SOL_IDLE_LEFT_HP_A";
				
				case 421:
					return "SOL_TRANS_LFTHP_TO_CTRMID_A";
				
				case 422:
					return "SOL_IDLE_CTR_MID_B";
				
				case 423:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 424:
					return "SOL_TRANS_RT_TO_FARRT_A";
				
				case 425:
					return "SOL_DANCE_J";
				
				case 426:
					return "SOL_IDLE_CTR_MID_B";
				
				case 427:
					return "SOL_IDLE_CTR_MID_B";
				
				case 428:
					return "SOL_TRANS_CTRMID_TO_RT_A";
				
				case 429:
					return "SOL_DANCE_E";
				
				case 430:
					return "SOL_IDLE_RT_A";
				
				case 431:
					return "SOL_IDLE_RT_C";
				
				case 432:
					return "SOL_IDLE_RT_B";
				
				case 433:
					return "SOL_IDLE_RT_C";
				
				case 434:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 435:
					return "SOL_TRANS_CTRNRW_TO_MID_A";
				
				case 436:
					return "SOL_IDLE_CTR_MID_G";
				
				case 437:
					return "SOL_IDLE_CTR_MID_B";
				
				case 438:
					return "SOL_IDLE_CTR_MID_A";
				
				case 439:
					return "SOL_DANCE_I";
				
				case 440:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 441:
					return "SOL_IDLE_CTR_MID_B";
				
				case 442:
					return "SOL_IDLE_CTR_MID_B";
				
				case 443:
					return "SOL_IDLE_CTR_MID_A";
				
				case 444:
					return "SOL_DANCE_K";
				
				case 445:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 446:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 447:
					return "SOL_IDLE_LEFT_HP_A";
				
				case 448:
					return "SOL_TRANS_LFTHP_TO_CTRMID_A";
				
				case 449:
					return "SOL_DANCE_I";
				
				case 450:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 451:
					return "SOL_DANCE_L";
				
				case 452:
					return "SOL_TRANS_CTRNRW_TO_NRW_A";
				
				case 453:
					return "SOL_DANCE_C";
				
				case 454:
					return "SOL_IDLE_CTR_MID_C";
				
				case 455:
					return "SOL_IDLE_CTR_MID_B";
				
				case 456:
					return "SOL_SYNC_F";
				
				case 457:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 458:
					return "SOL_IDLE_CTR_WIDE_C";
				
				case 459:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 460:
					return "SOL_IDLE_CTR_WIDE_B";
				
				case 461:
					return "SOL_DANCE_G";
				
				case 462:
					return "SOL_IDLE_LEFT_C";
				
				case 463:
					return "SOL_TRANS_LFT_TO_CTRMID_A";
				
				case 464:
					return "SOL_IDLE_CTR_MID_I";
				
				case 465:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 466:
					return "SOL_IDLE_LEFT_D";
				
				case 467:
					return "SOL_TRANS_LFT_TO_LFTHP_A";
				
				case 468:
					return "SOL_TRANS_LFTHP_TO_OUT_A";
				
				case 469:
					return "SOL_TRANS_OUT_TO_RT_A";
				
				case 470:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 471:
					return "SOL_IDLE_CTR_NAROW_A";
				
				case 472:
					return "SOL_IDLE_CTR_NAROW_A";
				
				case 473:
					return "SOL_TRANS_CTRNRW_TO_OUT_A";
				
				case 474:
					return "SOL_TRANS_OUT_TO_RT_A";
				
				case 475:
					return "SOL_TRANS_RT_TO_CTRNRW_A";
				
				case 476:
					return "SOL_TRANS_CTRNRW_TO_WIDE_A";
				
				case 477:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 478:
					return "SOL_IDLE_CTR_WIDE_A";
				
				case 479:
					return "SOL_TRANS_CTRWIDE_TO_MID_A";
				
				case 480:
					return "SOL_TRANS_CTRMID_TO_LFT_A";
				
				case 481:
					return "SOL_END";
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return "DIXN_START";
				
				case 1:
					return "DIXN_TRNS_LFT_TO_CNTR_A";
				
				case 2:
					return "DIXN_TRNS_CNTR_TO_LFT_D";
				
				case 3:
					return "DIXN_IDLE_LFT_B";
				
				case 4:
					return "DIXN_TRNS_LFT_TO_LH";
				
				case 5:
					return "DIXN_TRNS_LH_TO_CNTR_B";
				
				case 6:
					return "DIXN_SYNC_CNTR_B";
				
				case 7:
					return "DIXN_IDLE_CNTR_K";
				
				case 8:
					return "DIXN_TRNS_CNTR_TO_LFT_E";
				
				case 9:
					return "DIXN_TRNS_LFT_TO_OPEN";
				
				case 10:
					return "DIXN_IDLE_OPEN_A";
				
				case 11:
					return "DIXN_DANCE_OPEN_A";
				
				case 12:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 13:
					return "DIXN_TRNS_OPEN_TO_CNTR_B";
				
				case 14:
					return "DIXN_DANCE_CNTR_C";
				
				case 15:
					return "DIXN_IDLE_CNTR_G";
				
				case 16:
					return "DIXN_IDLE_CNTR_H";
				
				case 17:
					return "DIXN_IDLE_CNTR_I";
				
				case 18:
					return "DIXN_IDLE_CNTR_J";
				
				case 19:
					return "DIXN_SYNC_CNTR_K";
				
				case 20:
					return "DIXN_IDLE_CNTR_L";
				
				case 21:
					return "DIXN_TRNS_CNTR_TO_RIGHT";
				
				case 22:
					return "DIXN_TRNS_RIGHT_TO_CNTR";
				
				case 23:
					return "DIXN_IDLE_CNTR_M";
				
				case 24:
					return "DIXN_SYNC_CNTR_C";
				
				case 25:
					return "DIXN_IDLE_CNTR_A";
				
				case 26:
					return "DIXN_TRNS_CNTR_TO_LFT_C";
				
				case 27:
					return "DIXN_TRNS_LFT_TO_CNTR_B";
				
				case 28:
					return "DIXN_IDLE_CNTR_LNG";
				
				case 29:
					return "DIXN_IDLE_CNTR_G";
				
				case 30:
					return "DIXN_IDLE_CNTR_H";
				
				case 31:
					return "DIXN_IDLE_CNTR_I";
				
				case 32:
					return "DIXN_IDLE_CNTR_J";
				
				case 33:
					return "DIXN_TRNS_CNTR_TO_LFT";
				
				case 34:
					return "DIXN_TRNS_LFT_TO_OPEN";
				
				case 35:
					return "DIXN_TRNS_OPEN_TO_CNTR_C";
				
				case 36:
					return "DIXN_IDLE_CNTR_O";
				
				case 37:
					return "DIXN_IDLE_TRNS_HP_NK_HD";
				
				case 38:
					return "DIXN_IDLE_CNTR_SHRT";
				
				case 39:
					return "DIXN_SYNC_CNTR_A";
				
				case 40:
					return "DIXN_DANCE_CNTR_B";
				
				case 41:
					return "DIXN_IDLE_CNTR_G";
				
				case 42:
					return "DIXN_IDLE_CNTR_A";
				
				case 43:
					return "DIXN_TRNS_CNTR_TO_LFT";
				
				case 44:
					return "DIXN_TRNS_LFT_TO_CNTR_A";
				
				case 45:
					return "DIXN_IDLE_CNTR_B";
				
				case 46:
					return "DIXN_IDLE_CNTR_G";
				
				case 47:
					return "DIXN_IDLE_CNTR_E";
				
				case 48:
					return "DIXN_IDLE_CNTR_F";
				
				case 49:
					return "DIXN_TRNS_CNTR_TO_OPEN_A";
				
				case 50:
					return "DIXN_TRNS_OPEN_TO_LFT";
				
				case 51:
					return "DIXN_IDLE_LFT_C";
				
				case 52:
					return "DIXN_TRNS_LFT_TO_LH";
				
				case 53:
					return "DIXN_TRNS_LH_TO_CNTR";
				
				case 54:
					return "DIXN_TRNS_CNTR_TO_OPEN_A";
				
				case 55:
					return "DIXN_TRNS_OPEN_TO_LFT_B";
				
				case 56:
					return "DIXN_TRNS_LFT_TO_OPEN";
				
				case 57:
					return "DIXN_TRNS_OPEN_TO_CNTR_A";
				
				case 58:
					return "DIXN_IDLE_CNTR_A";
				
				case 59:
					return "DIXN_TRNS_CNTR_TO_OPEN_B";
				
				case 60:
					return "DIXN_TRNS_OPEN_TO_CNTR_C";
				
				case 61:
					return "DIXN_IDLE_CNTR_I";
				
				case 62:
					return "DIXN_IDLE_CNTR_G";
				
				case 63:
					return "DIXN_IDLE_CNTR_H";
				
				case 64:
					return "DIXN_IDLE_CNTR_N";
				
				case 65:
					return "DIXN_IDLE_TRNS_HP_NK_HD";
				
				case 66:
					return "DIXN_TRNS_CNTR_TO_OPEN_A";
				
				case 67:
					return "DIXN_IDLE_OPEN_A";
				
				case 68:
					return "DIXN_IDLE_OPEN_Ab";
				
				case 69:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 70:
					return "DIXN_TRNS_OPEN_TO_CNTR_B";
				
				case 71:
					return "DIXN_IDLE_CNTR_Kb";
				
				case 72:
					return "DIXN_SYNC_CNTR_D";
				
				case 73:
					return "DIXN_TRNS_LFT_TO_OPEN";
				
				case 74:
					return "DIXN_TRNS_OPEN_TO_CNTR_D";
				
				case 75:
					return "DIXN_IDLE_CNTR_N";
				
				case 76:
					return "DIXN_DANCE_CNTR_D";
				
				case 77:
					return "DIXN_SYNC_CNTR_B";
				
				case 78:
					return "DIXN_IDLE_CNTR_LNG";
				
				case 79:
					return "DIXN_IDLE_CNTR_A";
				
				case 80:
					return "DIXN_DANCE_CNTR_OPEN";
				
				case 81:
					return "DIXN_IDLE_OPEN_A";
				
				case 82:
					return "DIXN_TRNS_OPEN_TO_CNTR_C";
				
				case 83:
					return "DIXN_IDLE_CNTR_A";
				
				case 84:
					return "DIXN_DANCE_CNTR_B";
				
				case 85:
					return "DIXN_IDLE_CNTR_B";
				
				case 86:
					return "DIXN_IDLE_CNTR_I";
				
				case 87:
					return "DIXN_IDLE_CNTR_Kc";
				
				case 88:
					return "DIXN_SYNC_CNTR_E";
				
				case 89:
					return "DIXN_TRNS_LFT_TO_OPEN";
				
				case 90:
					return "DIXN_IDLE_OPEN_A";
				
				case 91:
					return "DIXN_DANCE_OPEN_A";
				
				case 92:
					return "DIXN_TRNS_OPEN_TO_CNTR_B";
				
				case 93:
					return "DIXN_IDLE_CNTR_N";
				
				case 94:
					return "DIXN_SYNC_CNTR_F";
				
				case 95:
					return "DIXN_IDLE_CNTR_LNG";
				
				case 96:
					return "DIXN_IDLE_CNTR_A";
				
				case 97:
					return "DIXN_TRNS_CNTR_TO_RIGHT";
				
				case 98:
					return "DIXN_TRNS_RIGHT_TO_CNTR";
				
				case 99:
					return "DIXN_IDLE_TRNS_HP_NK_HD";
				
				case 100:
					return "DIXN_IDLE_CNTR_SHRT";
				
				default:
			}
			switch (iParam1)
			{
				case 101:
					return "DIXN_IDLE_CNTR_B";
				
				case 102:
					return "DIXN_IDLE_CNTR_E";
				
				case 103:
					return "DIXN_IDLE_CNTR_G";
				
				case 104:
					return "DIXN_SYNC_CNTR_A";
				
				case 105:
					return "DIXN_DANCE_CNTR_B";
				
				case 106:
					return "DIXN_IDLE_CNTR_A";
				
				case 107:
					return "DIXN_TRNS_CNTR_TO_LFT";
				
				case 108:
					return "DIXN_TRNS_LFT_TO_CNTR_A";
				
				case 109:
					return "DIXN_IDLE_CNTR_B";
				
				case 110:
					return "DIXN_IDLE_CNTR_G";
				
				case 111:
					return "DIXN_IDLE_CNTR_E";
				
				case 112:
					return "DIXN_IDLE_CNTR_F";
				
				case 113:
					return "DIXN_TRNS_CNTR_TO_OPEN_A";
				
				case 114:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 115:
					return "DIXN_TRNS_OPEN_TO_LFT";
				
				case 116:
					return "DIXN_IDLE_LFT_A";
				
				case 117:
					return "DIXN_TRNS_LFT_TO_LH";
				
				case 118:
					return "DIXN_TRNS_LH_TO_CNTR";
				
				case 119:
					return "DIXN_TRNS_CNTR_TO_OPEN_A";
				
				case 120:
					return "DIXN_TRNS_OPEN_TO_LFT_B";
				
				case 121:
					return "DIXN_TRNS_LFT_TO_OPEN";
				
				case 122:
					return "DIXN_TRNS_OPEN_TO_CNTR_D";
				
				case 123:
					return "DIXN_IDLE_CNTR_A";
				
				case 124:
					return "DIXN_DANCE_CNTR_OPEN";
				
				case 125:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 126:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 127:
					return "DIXN_TRNS_OPEN_TO_LFT_B";
				
				case 128:
					return "DIXN_IDLE_LFT_A";
				
				case 129:
					return "DIXN_TRNS_LFT_TO_LH";
				
				case 130:
					return "DIXN_TRNS_LH_TO_CNTR";
				
				case 131:
					return "DIXN_IDLE_TRNS_HP_NK_HD";
				
				case 132:
					return "DIXN_IDLE_CNTR_LNG_C";
				
				case 133:
					return "DIXN_TRNS_CNTR_TO_LFT_C";
				
				case 134:
					return "DIXN_IDLE_LFT_B";
				
				case 135:
					return "DIXN_IDLE_LFT_A";
				
				case 136:
					return "DIXN_IDLE_LFT_C";
				
				case 137:
					return "DIXN_TRNS_LFT_TO_CNTR_B";
				
				case 138:
					return "DIXN_IDLE_CNTR_O";
				
				case 139:
					return "DIXN_IDLE_CNTR_K";
				
				case 140:
					return "DIXN_IDLE_CNTR_G";
				
				case 141:
					return "DIXN_IDLE_CNTR_H";
				
				case 142:
					return "DIXN_IDLE_CNTR_K";
				
				case 143:
					return "DIXN_IDLE_CNTR_G";
				
				case 144:
					return "DIXN_IDLE_CNTR_H";
				
				case 145:
					return "DIXN_IDLE_CNTR_I";
				
				case 146:
					return "DIXN_SYNC_CNTR_J";
				
				case 147:
					return "DIXN_IDLE_CNTR_J";
				
				case 148:
					return "DIXN_IDLE_CNTR_O";
				
				case 149:
					return "DIXN_IDLE_CNTR_L";
				
				case 150:
					return "DIXN_IDLE_CNTR_M";
				
				case 151:
					return "DIXN_IDLE_CNTR_A";
				
				case 152:
					return "DIXN_IDLE_CNTR_B";
				
				case 153:
					return "DIXN_IDLE_CNTR_E";
				
				case 154:
					return "DIXN_IDLE_CNTR_F";
				
				case 155:
					return "DIXN_IDLE_CNTR_N";
				
				case 156:
					return "DIXN_IDLE_CNTR_A";
				
				case 157:
					return "DIXN_SYNC_CNTR_I";
				
				case 158:
					return "DIXN_IDLE_CNTR_G";
				
				case 159:
					return "DIXN_TRNS_CNTR_TO_LFT";
				
				case 160:
					return "DIXN_TRNS_LFT_TO_CNTR_A";
				
				case 161:
					return "DIXN_IDLE_CNTR_B";
				
				case 162:
					return "DIXN_IDLE_CNTR_G";
				
				case 163:
					return "DIXN_IDLE_CNTR_E";
				
				case 164:
					return "DIXN_IDLE_CNTR_F";
				
				case 165:
					return "DIXN_SYNC_CNTR_F";
				
				case 166:
					return "DIXN_TRNS_CNTR_TO_OPEN_A";
				
				case 167:
					return "DIXN_TRNS_OPEN_TO_LFT";
				
				case 168:
					return "DIXN_IDLE_LFT_C";
				
				case 169:
					return "DIXN_TRNS_LFT_TO_LH";
				
				case 170:
					return "DIXN_TRNS_LH_TO_CNTR";
				
				case 171:
					return "DIXN_TRNS_CNTR_TO_OPEN_A";
				
				case 172:
					return "DIXN_TRNS_OPEN_TO_LFT_B";
				
				case 173:
					return "DIXN_TRNS_LFT_TO_OPEN";
				
				case 174:
					return "DIXN_TRNS_OPEN_TO_CNTR_A";
				
				case 175:
					return "DIXN_IDLE_CNTR_B";
				
				case 176:
					return "DIXN_IDLE_TRNS_HP_NK_HD";
				
				case 177:
					return "DIXN_IDLE_CNTR_SHRT";
				
				case 178:
					return "DIXN_IDLE_CNTR_SHRT";
				
				case 179:
					return "DIXN_SYNC_CNTR_C";
				
				case 180:
					return "DIXN_DANCE_CNTR_OPEN";
				
				case 181:
					return "DIXN_IDLE_OPEN_A";
				
				case 182:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 183:
					return "DIXN_TRNS_OPEN_TO_CNTR_B";
				
				case 184:
					return "DIXN_SYNC_CNTR_B";
				
				case 185:
					return "DIXN_IDLE_CNTR_A";
				
				case 186:
					return "DIXN_DANCE_CNTR_C";
				
				case 187:
					return "DIXN_IDLE_CNTR_B";
				
				case 188:
					return "DIXN_IDLE_CNTR_Kb";
				
				case 189:
					return "DIXN_IDLE_CNTR_K";
				
				case 190:
					return "DIXN_TRNS_CNTR_TO_RIGHT";
				
				case 191:
					return "DIXN_TRNS_RIGHT_TO_CNTR";
				
				case 192:
					return "DIXN_TRNS_CNTR_TO_LFT_C";
				
				case 193:
					return "DIXN_IDLE_LFT_B";
				
				case 194:
					return "DIXN_IDLE_LFT_A";
				
				case 195:
					return "DIXN_TRNS_LFT_TO_CNTR_B";
				
				case 196:
					return "DIXN_TRNS_CNTR_TO_OPEN_A";
				
				case 197:
					return "DIXN_DANCE_OPEN_A";
				
				case 198:
					return "DIXN_IDLE_OPEN_Ab";
				
				case 199:
					return "DIXN_TRNS_OPEN_TO_CNTR_B";
				
				case 200:
					return "DIXN_IDLE_CNTR_SHRT_B";
				
				default:
			}
			switch (iParam1)
			{
				case 201:
					return "DIXN_IDLE_CNTR_Kb";
				
				case 202:
					return "DIXN_IDLE_CNTR_O";
				
				case 203:
					return "DIXN_SYNC_CNTR_G";
				
				case 204:
					return "DIXN_IDLE_CNTR_H";
				
				case 205:
					return "DIXN_SYNC_CNTR_F";
				
				case 206:
					return "DIXN_TRNS_CNTR_TO_RIGHT";
				
				case 207:
					return "DIXN_TRNS_RIGHT_TO_CNTR";
				
				case 208:
					return "DIXN_TRNS_CNTR_TO_OPEN_A";
				
				case 209:
					return "DIXN_DANCE_OPEN_A";
				
				case 210:
					return "DIXN_IDLE_OPEN_A";
				
				case 211:
					return "DIXN_TRNS_OPEN_TO_CNTR_D";
				
				case 212:
					return "DIXN_IDLE_CNTR_SHRT";
				
				case 213:
					return "DIXN_TRNS_CNTR_TO_LFT_C";
				
				case 214:
					return "DIXN_IDLE_LFT_B";
				
				case 215:
					return "DIXN_IDLE_LFT_A";
				
				case 216:
					return "DIXN_SYNC_LFT_A";
				
				case 217:
					return "DIXN_SYNC_CNTR_B";
				
				case 218:
					return "DIXN_IDLE_CNTR_H";
				
				case 219:
					return "DIXN_IDLE_CNTR_SHRT";
				
				case 220:
					return "DIXN_SYNC_CNTR_J";
				
				case 221:
					return "DIXN_IDLE_CNTR_I";
				
				case 222:
					return "DIXN_TRNS_CNTR_TO_LFT_B";
				
				case 223:
					return "DIXN_TRNS_LFT_TO_CNTR_A";
				
				case 224:
					return "DIXN_TRNS_CNTR_TO_LFT_D";
				
				case 225:
					return "DIXN_IDLE_LFT_B";
				
				case 226:
					return "DIXN_TRNS_LFT_TO_LH";
				
				case 227:
					return "DIXN_TRNS_LH_TO_CNTR_B";
				
				case 228:
					return "DIXN_SYNC_CNTR_B";
				
				case 229:
					return "DIXN_IDLE_CNTR_K";
				
				case 230:
					return "DIXN_TRNS_CNTR_TO_LFT_E";
				
				case 231:
					return "DIXN_TRNS_LFT_TO_OPEN";
				
				case 232:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 233:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 234:
					return "DIXN_IDLE_OPEN_A";
				
				case 235:
					return "DIXN_DANCE_OPEN_A";
				
				case 236:
					return "DIXN_TRNS_OPEN_TO_CNTR_B";
				
				case 237:
					return "DIXN_DANCE_CNTR_C";
				
				case 238:
					return "DIXN_IDLE_CNTR_G";
				
				case 239:
					return "DIXN_IDLE_CNTR_H";
				
				case 240:
					return "DIXN_IDLE_CNTR_I";
				
				case 241:
					return "DIXN_IDLE_CNTR_J";
				
				case 242:
					return "DIXN_SYNC_CNTR_K";
				
				case 243:
					return "DIXN_IDLE_CNTR_L";
				
				case 244:
					return "DIXN_TRNS_CNTR_TO_RIGHT";
				
				case 245:
					return "DIXN_TRNS_RIGHT_TO_CNTR";
				
				case 246:
					return "DIXN_IDLE_CNTR_M";
				
				case 247:
					return "DIXN_SYNC_CNTR_C";
				
				case 248:
					return "DIXN_IDLE_CNTR_B";
				
				case 249:
					return "DIXN_IDLE_CNTR_LNG_C";
				
				case 250:
					return "DIXN_SYNC_CNTR_H";
				
				case 251:
					return "DIXN_IDLE_CNTR_A";
				
				case 252:
					return "DIXN_TRNS_CNTR_TO_LFT_E";
				
				case 253:
					return "DIXN_TRNS_LFT_TO_LH";
				
				case 254:
					return "DIXN_TRNS_LH_TO_CNTR";
				
				case 255:
					return "DIXN_DANCE_CNTR_OPEN";
				
				case 256:
					return "DIXN_IDLE_OPEN_A";
				
				case 257:
					return "DIXN_TRNS_OPEN_TO_CNTR_B";
				
				case 258:
					return "DIXN_IDLE_CNTR_A";
				
				case 259:
					return "DIXN_SYNC_CNTR_B";
				
				case 260:
					return "DIXN_SYNC_CNTR_K";
				
				case 261:
					return "DIXN_SYNC_CNTR_C";
				
				case 262:
					return "DIXN_IDLE_CNTR_SHRT";
				
				case 263:
					return "DIXN_DANCE_CNTR_OPEN";
				
				case 264:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 265:
					return "DIXN_DANCE_OPEN_A";
				
				case 266:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 267:
					return "DIXN_TRNS_OPEN_TO_LFT_B";
				
				case 268:
					return "DIXN_TRNS_LFT_TO_CNTR_B";
				
				case 269:
					return "DIXN_IDLE_TRNS_HP_NK_HD";
				
				case 270:
					return "DIXN_TRNS_CNTR_TO_RIGHT";
				
				case 271:
					return "DIXN_TRNS_RIGHT_TO_CNTR";
				
				case 272:
					return "DIXN_IDLE_CNTR_Gb";
				
				case 273:
					return "DIXN_IDLE_CNTR_A";
				
				case 274:
					return "DIXN_IDLE_CNTR_SHRT";
				
				case 275:
					return "DIXN_IDLE_CNTR_N";
				
				case 276:
					return "DIXN_IDLE_CNTR_SHRT_B";
				
				case 277:
					return "DIXN_TRNS_CNTR_TO_LFT_D";
				
				case 278:
					return "DIXN_TRNS_LFT_TO_CNTR_B";
				
				case 279:
					return "DIXN_TRNS_CNTR_TO_LFT_E";
				
				case 280:
					return "DIXN_TRNS_LFT_TO_CNTR_B";
				
				case 281:
					return "DIXN_SYNC_CNTR_K";
				
				case 282:
					return "DIXN_IDLE_CNTR_B";
				
				case 283:
					return "DIXN_TRNS_CNTR_TO_RIGHT";
				
				case 284:
					return "DIXN_TRNS_RIGHT_TO_CNTR";
				
				case 285:
					return "DIXN_IDLE_CNTR_Gb";
				
				case 286:
					return "DIXN_IDLE_CNTR_J";
				
				case 287:
					return "DIXN_SYNC_CNTR_A";
				
				case 288:
					return "DIXN_IDLE_TRNS_HP_NK_HD";
				
				case 289:
					return "DIXN_TRNS_CNTR_TO_LFT_D";
				
				case 290:
					return "DIXN_SYNC_LFT_A";
				
				case 291:
					return "DIXN_DANCE_CNTR_OPEN";
				
				case 292:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 293:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 294:
					return "DIXN_IDLE_OPEN_SHRT";
				
				case 295:
					return "DIXN_TRNS_OPEN_TO_LFT";
				
				case 296:
					return "DIXN_TRNS_LFT_TO_LH";
				
				case 297:
					return "DIXN_TRNS_LH_TO_CNTR_B";
				
				case 298:
					return "DIXN_SYNC_CNTR_G";
				
				case 299:
					return "DIXN_SYNC_CNTR_F";
				
				case 300:
					return "DIXN_SYNC_CNTR_B";
				
				default:
			}
			switch (iParam1)
			{
				case 301:
					return "DIXN_TRNS_CNTR_TO_LFT_E";
				
				case 302:
					return "DIXN_IDLE_LFT_A";
				
				case 303:
					return "DIXN_TRNS_LFT_TO_CNTR_B";
				
				case 304:
					return "DIXN_IDLE_CNTR_H";
				
				case 305:
					return "DIXN_IDLE_CNTR_I";
				
				case 306:
					return "DIXN_SYNC_CNTR_B";
				
				case 307:
					return "DIXN_IDLE_CNTR_N";
				
				case 308:
					return "DIXN_IDLE_CNTR_SHRT";
				
				case 309:
					return "DIXN_IDLE_CNTR_B";
				
				case 310:
					return "DIXN_END";
				
				default:
			}
			break;
		
		case 9:
		case 10:
			switch (iParam1)
			{
				case 0:
					return "TOU_IDLE_MID_O";
				
				case 1:
					return "TOU_IDLE_MID_I";
				
				case 2:
					return "TOU_IDLE_MID_H";
				
				case 3:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 4:
					return "TOU_SYNC_J";
				
				case 5:
					return "TOU_IDLE_MID_I";
				
				case 6:
					return "TOU_IDLE_MID_H";
				
				case 7:
					return "TOU_IDLE_MID_B";
				
				case 8:
					return "NEW_TOU_SYNC_A";
				
				case 9:
					return "TOU_DANCE_A";
				
				case 10:
					return "TOU_IDLE_MID_A";
				
				case 11:
					return "TOU_IDLE_MID_B";
				
				case 12:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 13:
					return "TOU_SYNC_B";
				
				case 14:
					return "TOU_IDLE_MID_D";
				
				case 15:
					return "TOU_IDLE_MID_D";
				
				case 16:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 17:
					return "TOU_IDLE_OPEN_A";
				
				case 18:
					return "TOU_IDLE_OPEN_B";
				
				case 19:
					return "TOU_IDLE_OPEN_C";
				
				case 20:
					return "TOU_SYNC_B";
				
				case 21:
					return "TOU_IDLE_MID_D";
				
				case 22:
					return "TOU_IDLE_MID_D";
				
				case 23:
					return "TOU_IDLE_MID_C";
				
				case 24:
					return "TOU_IDLE_MID_D";
				
				case 25:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 26:
					return "TOU_SYNC_C";
				
				case 27:
					return "TOU_SYNC_D";
				
				case 28:
					return "TOU_SYNC_E";
				
				case 29:
					return "TOU_TRANS_PC_CTR_TO_PC_A";
				
				case 30:
					return "TOU_TRANS_PC_PC_TO_OPEN_A";
				
				case 31:
					return "TOU_TRANS_PC_TO_MID_OPEN_A";
				
				case 32:
					return "TOU_TRANS_MID_TO_PC_OPEN_A";
				
				case 33:
					return "TOU_TRANS_PC_OPEN_TO_MID_A";
				
				case 34:
					return "TOU_IDLE_PC_MID_A";
				
				case 35:
					return "TOU_TRANS_PC_CTR_TO_PC_A";
				
				case 36:
					return "TOU_TRANS_PC_TO_MID_PC_TO_OPEN";
				
				case 37:
					return "TOU_IDLE_MID_E";
				
				case 38:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 39:
					return "TOU_IDLE_OPEN_C";
				
				case 40:
					return "TOU_IDLE_OPEN_A";
				
				case 41:
					return "TOU_DANCE_J";
				
				case 42:
					return "TOU_TRANS_MID_PC_TO_OPEN_A";
				
				case 43:
					return "TOU_DANCE_K";
				
				case 44:
					return "TOU_IDLE_MID_J";
				
				case 45:
					return "TOU_TRANS_MID_TO_OPEN_D";
				
				case 46:
					return "TOU_SYNC_J";
				
				case 47:
					return "TOU_DANCE_L";
				
				case 48:
					return "TOU_IDLE_MID_K";
				
				case 49:
					return "TOU_IDLE_MID_M";
				
				case 50:
					return "TOU_DANCE_L";
				
				case 51:
					return "TOU_IDLE_MID_K";
				
				case 52:
					return "TOU_IDLE_MID_L";
				
				case 53:
					return "TOU_IDLE_MID_M";
				
				case 54:
					return "TOU_IDLE_MID_N";
				
				case 55:
					return "TOU_IDLE_MID_B";
				
				case 56:
					return "TOU_DANCE_E";
				
				case 57:
					return "TOU_IDLE_MID_F";
				
				case 58:
					return "TOU_SYNC_G";
				
				case 59:
					return "TOU_SYNC_H";
				
				case 60:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 61:
					return "TOU_SYNC_F";
				
				case 62:
					return "TOU_DANCE_J";
				
				case 63:
					return "TOU_TRANS_MID_PC_TO_OPEN_A";
				
				case 64:
					return "TOU_SYNC_E";
				
				case 65:
					return "TOU_TRANS_PC_CTR_TO_PC_A";
				
				case 66:
					return "TOU_TRANS_PC_PC_TO_OPEN_A";
				
				case 67:
					return "TOU_TRANS_PC_TO_MID_OPEN_A";
				
				case 68:
					return "TOU_TRANS_MID_TO_PC_OPEN_A";
				
				case 69:
					return "TOU_TRANS_PC_OPEN_TO_MID_A";
				
				case 70:
					return "TOU_IDLE_PC_MID_A";
				
				case 71:
					return "TOU_TRANS_PC_CTR_TO_PC_A";
				
				case 72:
					return "TOU_TRANS_PC_TO_MID_PC_TO_OPEN";
				
				case 73:
					return "TOU_IDLE_MID_E";
				
				case 74:
					return "TOU_IDLE_MID_H";
				
				case 75:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 76:
					return "TOU_IDLE_OPEN_C";
				
				case 77:
					return "TOU_IDLE_OPEN_C";
				
				case 78:
					return "TOU_SYNC_J";
				
				case 79:
					return "TOU_IDLE_MID_I";
				
				case 80:
					return "TOU_IDLE_MID_H";
				
				case 81:
					return "TOU_IDLE_MID_B";
				
				case 82:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 83:
					return "TOU_IDLE_OPEN_B";
				
				case 84:
					return "TOU_IDLE_OPEN_C";
				
				case 85:
					return "TOU_IDLE_OPEN_C";
				
				case 86:
					return "TOU_SYNC_B";
				
				case 87:
					return "TOU_IDLE_MID_E";
				
				case 88:
					return "TOU_DANCE_C";
				
				case 89:
					return "TOU_DANCE_D";
				
				case 90:
					return "TOU_DANCE_B";
				
				case 91:
					return "TOU_IDLE_MID_F";
				
				case 92:
					return "TOU_TRANS_MID_TO_OPEN_C";
				
				case 93:
					return "TOU_SYNC_H";
				
				case 94:
					return "TOU_IDLE_MID_G";
				
				case 95:
					return "TOU_DANCE_E";
				
				case 96:
					return "TOU_IDLE_MID_H";
				
				case 97:
					return "TOU_IDLE_MID_I";
				
				case 98:
					return "TOU_IDLE_MID_F";
				
				case 99:
					return "TOU_IDLE_MID_B";
				
				default:
			}
			switch (iParam1)
			{
				case 100:
					return "TOU_TRANS_MID_TO_OPEN_C";
				
				case 101:
					return "TOU_IDLE_OPEN_C";
				
				case 102:
					return "TOU_SYNC_J";
				
				case 103:
					return "NEW_TOU_SYNC_A";
				
				case 104:
					return "TOU_DANCE_A";
				
				case 105:
					return "TOU_IDLE_MID_A";
				
				case 106:
					return "TOU_IDLE_MID_B";
				
				case 107:
					return "TOU_IDLE_MID_D";
				
				case 108:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 109:
					return "TOU_SYNC_B";
				
				case 110:
					return "TOU_IDLE_MID_D";
				
				case 111:
					return "TOU_IDLE_MID_D";
				
				case 112:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 113:
					return "TOU_IDLE_OPEN_A";
				
				case 114:
					return "TOU_IDLE_OPEN_C";
				
				case 115:
					return "TOU_TRANS_OPEN_TO_MID_B";
				
				case 116:
					return "TOU_IDLE_MID_D";
				
				case 117:
					return "TOU_IDLE_MID_D";
				
				case 118:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 119:
					return "TOU_IDLE_OPEN_A";
				
				case 120:
					return "TOU_IDLE_OPEN_B";
				
				case 121:
					return "TOU_IDLE_OPEN_C";
				
				case 122:
					return "TOU_TRANS_OPEN_TO_MID_B";
				
				case 123:
					return "TOU_DANCE_D";
				
				case 124:
					return "TOU_IDLE_MID_F";
				
				case 125:
					return "TOU_IDLE_MID_N";
				
				case 126:
					return "TOU_IDLE_MID_B";
				
				case 127:
					return "TOU_DANCE_E";
				
				case 128:
					return "TOU_IDLE_MID_F";
				
				case 129:
					return "TOU_IDLE_MID_D";
				
				case 130:
					return "TOU_IDLE_MID_B";
				
				case 131:
					return "TOU_IDLE_MID_F";
				
				case 132:
					return "TOU_IDLE_MID_D";
				
				case 133:
					return "NEW_TOU_SYNC_A";
				
				case 134:
					return "TOU_IDLE_MID_H";
				
				case 135:
					return "TOU_IDLE_MID_I";
				
				case 136:
					return "TOU_DANCE_F";
				
				case 137:
					return "TOU_DANCE_G";
				
				case 138:
					return "TOU_TRANS_OPEN_TO_MID_B";
				
				case 139:
					return "TOU_IDLE_MID_H";
				
				case 140:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 141:
					return "TOU_SYNC_J";
				
				case 142:
					return "TOU_IDLE_MID_H";
				
				case 143:
					return "TOU_IDLE_MID_F";
				
				case 144:
					return "TOU_IDLE_MID_D";
				
				case 145:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 146:
					return "TOU_IDLE_OPEN_C";
				
				case 147:
					return "TOU_IDLE_OPEN_B";
				
				case 148:
					return "TOU_SYNC_F";
				
				case 149:
					return "TOU_TRANS_OPEN_TO_MID_A";
				
				case 150:
					return "TOU_SYNC_G";
				
				case 151:
					return "TOU_IDLE_OPEN_C";
				
				case 152:
					return "TOU_TRANS_OPEN_TO_MID_A";
				
				case 153:
					return "TOU_DANCE_B";
				
				case 154:
					return "TOU_IDLE_MID_A";
				
				case 155:
					return "TOU_IDLE_MID_A";
				
				case 156:
					return "TOU_IDLE_MID_B";
				
				case 157:
					return "TOU_IDLE_MID_C";
				
				case 158:
					return "TOU_IDLE_MID_D";
				
				case 159:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 160:
					return "TOU_SYNC_C";
				
				case 161:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 162:
					return "TOU_SYNC_H";
				
				case 163:
					return "TOU_DANCE_L";
				
				case 164:
					return "TOU_IDLE_MID_K";
				
				case 165:
					return "TOU_IDLE_MID_M";
				
				case 166:
					return "TOU_IDLE_MID_L";
				
				case 167:
					return "TOU_IDLE_MID_M";
				
				case 168:
					return "TOU_IDLE_MID_N";
				
				case 169:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 170:
					return "TOU_IDLE_OPEN_C";
				
				case 171:
					return "TOU_IDLE_OPEN_C";
				
				case 172:
					return "TOU_TRANS_OPEN_TO_MID_A";
				
				case 173:
					return "TOU_IDLE_MID_B";
				
				case 174:
					return "TOU_IDLE_MID_G";
				
				case 175:
					return "TOU_IDLE_MID_H";
				
				case 176:
					return "TOU_IDLE_MID_I";
				
				case 177:
					return "TOU_DANCE_F";
				
				case 178:
					return "TOU_IDLE_MID_D";
				
				case 179:
					return "TOU_TRANS_MID_TO_OPEN_D";
				
				case 180:
					return "TOU_SYNC_I";
				
				case 181:
					return "TOU_IDLE_PC_MID_A";
				
				case 182:
					return "TOU_TRANS_PC_CTR_TO_PC_A";
				
				case 183:
					return "TOU_TRANS_PC_TO_MID_PC_TO_OPEN";
				
				case 184:
					return "TOU_IDLE_MID_F";
				
				case 185:
					return "TOU_IDLE_MID_M";
				
				case 186:
					return "TOU_IDLE_MID_F";
				
				case 187:
					return "TOU_DANCE_A";
				
				case 188:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 189:
					return "TOU_IDLE_OPEN_C";
				
				case 190:
					return "TOU_SYNC_J";
				
				case 191:
					return "TOU_IDLE_MID_M";
				
				case 192:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 193:
					return "TOU_IDLE_OPEN_A";
				
				case 194:
					return "TOU_IDLE_OPEN_B";
				
				case 195:
					return "TOU_TRANS_OPEN_TO_MID_A";
				
				case 196:
					return "TOU_DANCE_B";
				
				case 197:
					return "TOU_IDLE_MID_E";
				
				case 198:
					return "TOU_IDLE_MID_N";
				
				case 199:
					return "TOU_IDLE_MID_D";
				
				default:
			}
			switch (iParam1)
			{
				case 200:
					return "TOU_DANCE_E";
				
				case 201:
					return "TOU_DANCE_H";
				
				case 202:
					return "TOU_IDLE_MID_E";
				
				case 203:
					return "TOU_IDLE_MID_C";
				
				case 204:
					return "TOU_IDLE_MID_I";
				
				case 205:
					return "TOU_DANCE_C";
				
				case 206:
					return "TOU_DANCE_D";
				
				case 207:
					return "TOU_IDLE_MID_F";
				
				case 208:
					return "TOU_TRANS_MID_TO_OPEN_C";
				
				case 209:
					return "TOU_TRANS_OPEN_TO_MID_B";
				
				case 210:
					return "TOU_IDLE_MID_I";
				
				case 211:
					return "TOU_DANCE_A";
				
				case 212:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 213:
					return "TOU_IDLE_OPEN_B";
				
				case 214:
					return "TOU_SYNC_B";
				
				case 215:
					return "TOU_IDLE_MID_E";
				
				case 216:
					return "TOU_DANCE_B";
				
				case 217:
					return "TOU_DANCE_C";
				
				case 218:
					return "TOU_DANCE_D";
				
				case 219:
					return "TOU_SYNC_G";
				
				case 220:
					return "TOU_IDLE_OPEN_C";
				
				case 221:
					return "TOU_IDLE_OPEN_A";
				
				case 222:
					return "TOU_TRANS_OPEN_TO_MID_B";
				
				case 223:
					return "TOU_IDLE_MID_E";
				
				case 224:
					return "NEW_TOU_SYNC_A";
				
				case 225:
					return "TOU_DANCE_A";
				
				case 226:
					return "TOU_IDLE_MID_A";
				
				case 227:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 228:
					return "TOU_SYNC_B";
				
				case 229:
					return "TOU_IDLE_MID_D";
				
				case 230:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 231:
					return "TOU_IDLE_OPEN_A";
				
				case 232:
					return "TOU_IDLE_OPEN_B";
				
				case 233:
					return "TOU_IDLE_OPEN_C";
				
				case 234:
					return "TOU_IDLE_OPEN_C";
				
				case 235:
					return "TOU_SYNC_F";
				
				case 236:
					return "TOU_TRANS_OPEN_TO_MID_B";
				
				case 237:
					return "TOU_DANCE_I";
				
				case 238:
					return "TOU_DANCE_H";
				
				case 239:
					return "TOU_DANCE_F";
				
				case 240:
					return "TOU_DANCE_G";
				
				case 241:
					return "TOU_IDLE_OPEN_C";
				
				case 242:
					return "TOU_IDLE_OPEN_C";
				
				case 243:
					return "TOU_IDLE_OPEN_C";
				
				case 244:
					return "TOU_TRANS_OPEN_TO_MID_A";
				
				case 245:
					return "TOU_IDLE_MID_I";
				
				case 246:
					return "TOU_IDLE_MID_B";
				
				case 247:
					return "NEW_TOU_SYNC_A";
				
				case 248:
					return "TOU_IDLE_MID_B";
				
				case 249:
					return "TOU_IDLE_MID_D";
				
				case 250:
					return "TOU_DANCE_E";
				
				case 251:
					return "TOU_IDLE_MID_H";
				
				case 252:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 253:
					return "TOU_SYNC_J";
				
				case 254:
					return "TOU_IDLE_MID_I";
				
				case 255:
					return "TOU_IDLE_MID_H";
				
				case 256:
					return "TOU_IDLE_MID_B";
				
				case 257:
					return "TOU_IDLE_MID_J";
				
				case 258:
					return "TOU_DANCE_B";
				
				case 259:
					return "TOU_TRANS_MID_TO_OPEN_A";
				
				case 260:
					return "TOU_SYNC_C";
				
				case 261:
					return "TOU_SYNC_D";
				
				case 262:
					return "TOU_IDLE_MID_B";
				
				case 263:
					return "TOU_SYNC_E";
				
				case 264:
					return "TOU_TRANS_PC_CTR_TO_PC_A";
				
				case 265:
					return "TOU_TRANS_PC_PC_TO_OPEN_A";
				
				case 266:
					return "TOU_TRANS_PC_OPEN_TO_MID_A";
				
				case 267:
					return "TOU_IDLE_PC_MID_A";
				
				case 268:
					return "TOU_TRANS_PC_CTR_TO_PC_A";
				
				case 269:
					return "TOU_TRANS_PC_TO_MID_PC_TO_OPEN";
				
				case 270:
					return "TOU_TRANS_MID_TO_OPEN_B";
				
				case 271:
					return "TOU_IDLE_OPEN_C";
				
				case 272:
					return "TOU_IDLE_OPEN_C";
				
				case 273:
					return "TOU_TRANS_OPEN_TO_MID_A";
				
				case 274:
					return "TOU_DANCE_E";
				
				case 275:
					return "TOU_IDLE_MID_H";
				
				case 276:
					return "TOU_IDLE_MID_I";
				
				case 277:
					return "TOU_DANCE_F";
				
				case 278:
					return "TOU_DANCE_G";
				
				case 279:
					return "TOU_SYNC_I";
				
				case 280:
					return "TOU_IDLE_PC_MID_A";
				
				case 281:
					return "TOU_TRANS_PC_CTR_TO_PC_A";
				
				case 282:
					return "TOU_TRANS_PC_TO_MID_PC_TO_OPEN";
				
				case 283:
					return "TOU_IDLE_MID_H";
				
				case 284:
					return "TOU_IDLE_MID_I";
				
				case 285:
					return "TOU_IDLE_MID_I";
				
				case 286:
					return "TOU_IDLE_MID_B";
				
				case 287:
					return "TOU_DANCE_H";
				
				case 288:
					return "TOU_DANCE_I";
				
				case 289:
					return "TOU_DANCE_F";
				
				case 290:
					return "TOU_DANCE_G";
				
				case 291:
					return "TOU_IDLE_OPEN_C";
				
				case 292:
					return "TOU_IDLE_OPEN_C";
				
				case 293:
					return "TOU_TRANS_OPEN_TO_MID_A";
				
				case 294:
					return "TOU_IDLE_MID_I";
				
				case 295:
					return "TOU_END";
				
				default:
			}
			break;
	}
	return "";
}

void func_20(var uParam0, var uParam1, var uParam2)
{
	func_251(uParam0);
	uParam0->f_7553 = 0;
	iVar0 = 0;
	while (iVar0 < 125)
	{
		func_109(uParam0, iVar0, uParam2);
		iVar0++;
	}
	uParam0->f_7547 = (uParam0->f_7547 + uParam0->f_7549);
	if (uParam0->f_7547 >= 125)
	{
		uParam0->f_7547 = (uParam0->f_7547 - 125);
	}
	func_108(uParam0);
	func_25(uParam0);
	func_23(uParam0);
	func_22(uParam0);
	func_21(uParam1);
}

void func_21(var uParam0)
{
	Var0 = { -1597.1f, -3013.3f, -79f };
	Var3 = { 4f, 4f, 2f };
	fVar6 = 0.17f;
	if (Global_1316786 == 4)
	{
		iVar7 = 0;
		while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7)))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7))), Var0, Var3, 0, 1, 0))
				{
					if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7)))
					{
						fVar8 = PAD::GET_CONTROL_NORMAL(0, 30);
						fVar9 = PAD::GET_CONTROL_NORMAL(0, 31);
						if (MISC::ABSF(fVar8) > 0.5f || MISC::ABSF(fVar9) > 0.5f)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
							{
								PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), fVar6);
								(*uParam0)[iVar7] = 1;
							}
						}
						else
						{
							(*uParam0)[iVar7] = 0;
						}
					}
					else if ((*uParam0)[iVar7])
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7))), 0))
						{
							PED::SET_PED_CAPSULE(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7))), fVar6);
						}
					}
				}
				else
				{
					(*uParam0)[iVar7] = 0;
				}
			}
			iVar7++;
		}
	}
}

void func_22(var uParam0)
{
	iVar0 = uParam0->f_7255[146];
	if (iVar0 == -1)
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), 2);
		return;
	}
	Var1 = { *uParam0[iVar0] };
	if (ENTITY::DOES_ENTITY_EXIST(Var1) && !ENTITY::IS_ENTITY_DEAD(Var1, 0))
	{
		if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2, 2))
		{
			STREAMING::REQUEST_ANIM_DICT("ANIM@AMB@NIGHTCLUB@PEDS@");
			if (STREAMING::HAS_ANIM_DICT_LOADED("ANIM@AMB@NIGHTCLUB@PEDS@"))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Var1, "ANIM@AMB@NIGHTCLUB@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_e", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Var1, "ANIM@AMB@NIGHTCLUB@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_e") > 0.99f)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Var1, "ANIM@AMB@NIGHTCLUB@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_d_v2", Var1.f_45, 0f, 0f, Var1.f_48, 2f, -2f, -1, 790529, 0f, 2, 3);
						MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), 2);
					}
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(Var1, "ANIM@AMB@NIGHTCLUB@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_e", Var1.f_45, 0f, 0f, Var1.f_48, 2f, -2f, -1, 790528, 0f, 2, 3);
				}
			}
		}
		else
		{
			STREAMING::REQUEST_ANIM_DICT("ANIM@AMB@NIGHTCLUB@PEDS@");
			if (Var1.f_20)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("ANIM@AMB@NIGHTCLUB@PEDS@") && !ENTITY::IS_ENTITY_PLAYING_ANIM(Var1, "ANIM@AMB@NIGHTCLUB@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_d_v2", 3))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(Var1, "ANIM@AMB@NIGHTCLUB@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_d_v2", Var1.f_45, 0f, 0f, Var1.f_48, 2f, -2f, -1, 790529, 0f, 2, 3);
				}
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED("ANIM@AMB@NIGHTCLUB@PEDS@") && !ENTITY::IS_ENTITY_PLAYING_ANIM(Var1, "ANIM@AMB@NIGHTCLUB@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_d", 3))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(Var1, "ANIM@AMB@NIGHTCLUB@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_d", Var1.f_45, 0f, 0f, Var1.f_48, 2f, -2f, -1, 790529, 0f, 2, 3);
			}
		}
	}
	else
	{
		STREAMING::REMOVE_ANIM_DICT("ANIM@AMB@NIGHTCLUB@PEDS@");
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), 2);
	}
}

void func_23(var uParam0)
{
	if (Global_1316784 != 2)
	{
		return;
	}
	if (uParam0->f_7569 != Global_1316785)
	{
		iVar0 = 0;
		iVar1 = -1;
		iVar2 = -1;
		iVar3 = func_454(uParam0[iVar0]->f_16, 0);
		while ((iVar1 == -1 || iVar2 == -1) && iVar0 < 125)
		{
			iVar3 = func_454(uParam0[iVar0]->f_16, 0);
			if (iVar3 == 10)
			{
				iVar1 = iVar0;
			}
			if (iVar3 == 62)
			{
				iVar2 = iVar0;
			}
			iVar0++;
		}
		iVar4 = Global_1316785;
		if (iVar1 == -1 || iVar2 == -1)
		{
			return;
		}
		if (iVar4 == 10)
		{
			uParam0[iVar2]->f_32[1] = uParam0[iVar1]->f_32[1];
			uParam0[iVar2]->f_32[0] = uParam0[iVar1]->f_32[0];
			func_24(&(uParam0[iVar2]->f_30), uParam0[iVar1]->f_30);
			uParam0[iVar2]->f_29 = uParam0[iVar1]->f_29;
		}
		else if (iVar4 == 62)
		{
			uParam0[iVar1]->f_32[1] = uParam0[iVar2]->f_32[1];
			uParam0[iVar1]->f_32[0] = uParam0[iVar2]->f_32[0];
			func_24(&(uParam0[iVar1]->f_30), uParam0[iVar2]->f_30);
			uParam0[iVar1]->f_29 = uParam0[iVar2]->f_29;
		}
		uParam0->f_7569 = iVar4;
	}
}

void func_24(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
	uParam0->f_1 = 1;
}

void func_25(var uParam0)
{
	if (uParam0->f_7946 == -1)
	{
		return;
	}
	if (!func_106(14, -1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7946]) || ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7946], 0))
	{
		return;
	}
	if (func_106(14, 13))
	{
		if (((((!func_104(uParam0[uParam0->f_7946], 22) && !func_104(uParam0[uParam0->f_7946], 23)) && !func_104(uParam0[uParam0->f_7946], 24)) && !func_104(uParam0[uParam0->f_7946], 25)) && !func_104(uParam0[uParam0->f_7946], 26)) && !func_104(uParam0[uParam0->f_7946], 27))
		{
			if (!func_103(uParam0[uParam0->f_7946], 13))
			{
				if (Global_1316781 && func_102())
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1588.832f, -3013.474f, -78.7061f, 3f, 6f, 1.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1605.563f, -3006.104f, -76.575f, 2f, 2f, 3.5f, 0, 1, 0))
					{
						if (!func_104(uParam0[uParam0->f_7946], 13))
						{
							func_100(uParam0[uParam0->f_7946], 13);
							func_98(func_6(), 13, 0);
						}
					}
					else if (func_3(&(uParam0[uParam0->f_7946]->f_30), func_96(14, 13) + 15000, 0) && func_104(uParam0[uParam0->f_7946], 13))
					{
						func_95(&(uParam0[uParam0->f_7946]->f_30), 0, 0);
						func_93(uParam0[uParam0->f_7946], 13);
					}
				}
			}
		}
	}
	if ((func_106(14, 14) && func_92(uParam0[uParam0->f_7946]) != -1) && !MISC::IS_BIT_SET(Global_1316806, ((28 + func_92(uParam0[uParam0->f_7946])) % 32)))
	{
		if (!func_103(uParam0[uParam0->f_7946], 14))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS((*uParam0)[uParam0->f_7946], 0)) < Global_262145.f_23646)
			{
				if (!func_104(uParam0[uParam0->f_7946], 14))
				{
					func_100(uParam0[uParam0->f_7946], 14);
				}
			}
			else if (func_3(&(uParam0[uParam0->f_7946]->f_30), func_96(14, 14) + 15000, 0) && func_104(uParam0[uParam0->f_7946], 14))
			{
				func_95(&(uParam0[uParam0->f_7946]->f_30), 0, 0);
				func_93(uParam0[uParam0->f_7946], 14);
			}
			if (func_104(uParam0[uParam0->f_7946], 14) && func_26(uParam0[uParam0->f_7946], 14, &(uParam0->f_7740), -1, 26))
			{
				uParam0[uParam0->f_7946]->f_32[1] = uParam0[uParam0->f_7946]->f_32[0];
				uParam0[uParam0->f_7946]->f_32[0] = 14;
				func_95(&(uParam0[uParam0->f_7946]->f_30), 0, 0);
				func_93(uParam0[uParam0->f_7946], 14);
			}
		}
	}
	switch (uParam0->f_7570)
	{
		case 0:
			if (uParam0[uParam0->f_7946]->f_32[0] == 13)
			{
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CLUB_DJ_CALLOUT_CROWD_CHEER", 0, -1);
				uParam0->f_7570 = 1;
			}
			break;
		
		case 1:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CLUB_DJ_CALLOUT_CROWD_CHEER", 0, -1))
			{
				if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7946], 0))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "dj_crowd_cheer", (*uParam0)[uParam0->f_7946], "dlc_btl_club_dj_callout_crowd_cheers_sounds", 0, 0);
					func_95(&(uParam0->f_7571), 0, 0);
					uParam0->f_7570 = 2;
				}
				else
				{
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CLUB_DJ_CALLOUT_CROWD_CHEER");
					func_2(&(uParam0->f_7571));
					uParam0->f_7570 = -1;
				}
			}
			break;
		
		case 2:
			if (func_3(&(uParam0->f_7571), 30000, 0))
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CLUB_DJ_CALLOUT_CROWD_CHEER");
				func_2(&(uParam0->f_7571));
				uParam0->f_7570 = 3;
			}
			break;
	}
}

int func_26(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam3 != -1)
	{
		iVar0 = iParam3;
	}
	else
	{
		iVar0 = func_454(uParam0->f_16, 0);
	}
	uVar1 = func_91(iParam1);
	if (!func_106(iVar0, iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		return 0;
	}
	if (func_90() || func_89(0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || func_87(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	sVar2 = func_59(uParam0, iParam1, iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		if (iVar0 == 14 && iParam1 == 13)
		{
		}
		else if (iVar0 == 14 && iParam1 == 14)
		{
		}
		return 0;
	}
	if (func_54(uParam0, &sVar3))
	{
		return 0;
	}
	bVar19 = true;
	if (iVar0 == 14)
	{
		if (iParam1 == 13 || iParam1 == 14)
		{
			bVar19 = false;
		}
	}
	if (bVar19)
	{
		iVar20 = 1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
		{
			iVar20 = 0;
		}
		sVar21 = "";
		switch (iVar0)
		{
			case 34:
				sVar21 = "S_M_Y_GENERICWORKER_01_LATINO_MINI_01";
				iVar20 = 0;
				break;
			
			case 55:
				sVar21 = "KERRY";
				iVar20 = 0;
				break;
			
			case 53:
				sVar21 = "POPPY";
				iVar20 = 0;
				break;
			
			case 54:
				sVar21 = "JIMMYBOSTON";
				iVar20 = 0;
				break;
			
			case 56:
				sVar21 = "MIRANDA";
				iVar20 = 0;
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar21))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, sVar2))
			{
			}
			AUDIO::_PLAY_AMBIENT_SPEECH1(*uParam0, sVar2, func_53(iParam4), iVar20);
		}
		else
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, sVar2))
			{
			}
			AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(*uParam0, sVar2, sVar21, func_53(iParam4), iVar20);
		}
		if ((((((iVar0 == 54 || iVar0 == 60) || iVar0 == 55) || iVar0 == 53) || iVar0 == 58) || iVar0 == 56) && iParam1 == 9)
		{
			iVar22 = 0;
			switch (MISC::GET_HASH_KEY(sVar2))
			{
				case -1173387164:
					iVar22 = 1;
					break;
				
				case -1341355415:
					iVar22 = 3;
					break;
				
				case 606624234:
					iVar22 = 4;
					break;
				
				case 425718265:
					iVar22 = 5;
					break;
				
				case 2125830386:
					iVar22 = 6;
					break;
				
				case 862212437:
					iVar22 = 2;
					break;
			}
			if (iVar22 != 0)
			{
				MISC::SET_BIT(&Global_1316807, func_52(iVar0, iVar22));
			}
		}
		return 1;
	}
	iVar23 = 2;
	sVar24 = "LAZLOW";
	func_51(uParam2, iVar23, *uParam0, sVar24, 0, 1);
	if (func_28(uParam2, "LAZFMAU", sVar2, 9, 0, 0, 0))
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar1, sVar2))
		{
		}
		if (iVar0 == 14)
		{
			if (iParam1 == 13)
			{
				iVar25 = -1;
				switch (MISC::GET_HASH_KEY(sVar2))
				{
					case -548347289:
						iVar25 = 22;
						break;
					
					case 1687378398:
						iVar25 = 23;
						break;
					
					case -1347825087:
						iVar25 = 24;
						break;
					
					case 1074326450:
						iVar25 = 25;
						break;
					
					case -1453440037:
						iVar25 = 26;
						break;
					
					case 1843125432:
						iVar25 = 27;
						break;
					
					default:
						return 0;
						break;
				}
				func_100(uParam0, iVar25);
				MISC::SET_BIT(&Global_1316806, iVar25);
			}
			else if (iParam1 == 14)
			{
				iVar26 = -1;
				iVar27 = 0;
				iVar27 = 0;
				while (iVar27 < 10)
				{
					if (MISC::GET_HASH_KEY(func_27(uParam0->f_6, iVar27)) == MISC::GET_HASH_KEY(sVar2))
					{
						iVar26 = ((28 + iVar27) % 32);
					}
					else
					{
						iVar27++;
					}
				}
				if (iVar26 == -1)
				{
					return 0;
				}
				MISC::SET_BIT(&Global_1316806, iVar26);
			}
		}
		return 1;
	}
	return 0;
}

char* func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 109:
			switch (iParam1)
			{
				case 0:
					return "LAZFM_IG3TOA";
				
				case 1:
					return "LAZFM_IG3TOB";
				
				case 2:
					return "LAZFM_IG3TOC";
				
				case 3:
					return "LAZFM_IG3TOD";
				
				case 4:
					return "LAZFM_IG3TOE";
				
				case 5:
					return "LAZFM_IG3TOF";
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return "LAZFM_IG3LBA";
				
				case 1:
					return "LAZFM_IG3LBB";
				
				case 2:
					return "LAZFM_IG3LBC";
				
				case 3:
					return "LAZFM_IG3LBE";
				
				case 4:
					return "LAZFM_IG3LBF";
				
				case 5:
					return "LAZFM_IG3LBG";
				
				case 6:
					return "LAZFM_IG3LBH";
				
				case 7:
					return "LAZFM_IG3LBI";
				
				case 8:
					return "LAZFM_IG3LBJ";
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return "LAZFM_IG3LSA";
				
				case 1:
					return "LAZFM_IG3LSB";
				
				case 2:
					return "LAZFM_IG3LSC";
				
				case 3:
					return "LAZFM_IG3LSD";
				
				case 4:
					return "LAZFM_IG3LSE";
				
				case 5:
					return "LAZFM_IG3LSF";
				
				default:
			}
			break;
		
		case 112:
			switch (iParam1)
			{
				case 0:
					return "LAZFM_IG3ALA";
				
				case 1:
					return "LAZFM_IG3ALB";
				
				case 2:
					return "LAZFM_IG3ALC";
				
				case 3:
					return "LAZFM_IG3ALD";
				
				case 4:
					return "LAZFM_IG3ALE";
				
				case 5:
					return "LAZFM_IG3ALF";
				
				default:
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					return "LAZFM_IG2DFA";
				
				case 1:
					return "LAZFM_IG2DFC";
				
				case 2:
					return "LAZFM_IG2DFB";
				
				case 3:
					return "LAZFM_IG2DFD";
				
				case 4:
					return "LAZFM_IG2DFE";
				
				case 5:
					return "LAZFM_IG2DFF";
				
				case 6:
					return "LAZFM_IG2DFG";
				
				case 7:
					return "LAZFM_IG2DFH";
				
				case 8:
					return "LAZFM_IG2DFI";
				
				case 9:
					return "LAZFM_IG2DFJ";
				
				default:
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
					return "LAZFM_IG2RHA";
				
				default:
			}
			break;
	}
	return "";
}

bool func_28(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					func_49();
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
		if (func_48(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_47();
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
				func_39();
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
				if (func_38())
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
			if (func_37())
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
			func_36();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_35();
		func_30();
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
		func_49();
	}
	return 0;
}

void func_30()
{
	if (!func_31())
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

int func_31()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_34())
	{
		return 0;
	}
	if (func_32(PLAYER::PLAYER_ID()))
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

bool func_32(int iParam0)
{
	return func_33(iParam0, 20);
}

bool func_33(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_34()
{
	return -1;
}

void func_35()
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

void func_36()
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

int func_37()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_38()
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

void func_39()
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
		Global_19486 = func_40();
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

var func_40()
{
	func_41();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_41()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_44(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_43(PLAYER::PLAYER_PED_ID());
			if (func_42(iVar0) && (!func_46(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_42(Global_111638.f_2358.f_539.f_4321))
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

bool func_42(int iParam0)
{
	return iParam0 < 3;
}

int func_43(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_44(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_44(int iParam0)
{
	if (func_42(iParam0))
	{
		return func_45(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_45(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_46(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_47()
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

bool func_48(int iParam0, int iParam1)
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

void func_49()
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

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_51(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 54:
			switch (iParam1)
			{
				case 2:
					return 0;
				
				case 3:
					return 1;
				
				case 4:
					return 2;
				
				case 5:
					return 3;
				
				case 6:
					return 4;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 3:
					return 6;
				
				case 4:
					return 7;
				
				case 5:
					return 8;
				
				case 6:
					return 9;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 11;
				
				case 4:
					return 12;
				
				case 5:
					return 13;
				
				case 6:
					return 14;
				
				default:
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 1:
					return 15;
				
				case 2:
					return 16;
				
				case 3:
					return 17;
				
				case 5:
					return 18;
				
				case 6:
					return 19;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 1:
					return 20;
				
				case 2:
					return 21;
				
				case 3:
					return 22;
				
				case 4:
					return 23;
				
				case 6:
					return 24;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 1:
					return 25;
				
				case 2:
					return 26;
				
				case 3:
					return 27;
				
				case 4:
					return 28;
				
				case 5:
					return 29;
				
				default:
			}
			break;
	}
	return -1;
}

int func_53(int iParam0)
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

int func_54(var uParam0, char* sParam1)
{
	StringCopy(sParam1, "", 64);
	if ((uParam0->f_6 == 4 || uParam0->f_6 == 89) || uParam0->f_6 == 90)
	{
		StringCopy(sParam1, func_58(uParam0->f_6, 0), 64);
		Var0 = 2;
		Var0.f_1 = 1;
		Var0.f_3 = 1065353216;
		Var0.f_5 = 1065353216;
		Var0.f_6 = -1;
		Var0.f_7 = 4;
		Var0.f_7.f_1.f_9 = 1082130432;
		Var0.f_7.f_1.f_10 = -1065353216;
		Var0.f_7.f_1.f_12 = 2;
		Var0.f_7.f_1.f_12.f_1.f_11 = 1073741824;
		Var0.f_7.f_1.f_12.f_1.f_12 = 1073741824;
		Var0.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_7.f_1.f_41 = 2;
		Var0.f_7.f_1.f_41.f_1 = 1065353216;
		Var0.f_7.f_1.f_41.f_1.f_11 = -1;
		Var0.f_7.f_1.f_41.f_1.f_13 = 1065353216;
		Var0.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
		Var0.f_7.f_1.f_68 = 1;
		Var0.f_7.f_1.f_68.f_1 = 1073741824;
		Var0.f_7.f_1.f_68.f_1.f_1 = 1073741824;
		Var0.f_7.f_1.f_68.f_1.f_3 = -1082130432;
		Var0.f_7.f_1.f_79.f_9 = 1082130432;
		Var0.f_7.f_1.f_79.f_10 = -1065353216;
		Var0.f_7.f_1.f_79.f_12 = 2;
		Var0.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_7.f_1.f_79.f_41 = 2;
		Var0.f_7.f_1.f_79.f_41.f_1 = 1065353216;
		Var0.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
		Var0.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_7.f_1.f_79.f_68 = 1;
		Var0.f_7.f_1.f_79.f_68.f_1 = 1073741824;
		Var0.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_7.f_1.f_79.f_79.f_9 = 1082130432;
		Var0.f_7.f_1.f_79.f_79.f_10 = -1065353216;
		Var0.f_7.f_1.f_79.f_79.f_12 = 2;
		Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_41 = 2;
		Var0.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_7.f_1.f_79.f_79.f_68 = 1;
		Var0.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
		Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
		Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
		Var0.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_324 = 2;
		Var0.f_324.f_1.f_18 = 1082130432;
		Var0.f_324.f_1.f_19 = -1065353216;
		Var0.f_324.f_1.f_20 = 1;
		Var0.f_324.f_1.f_21 = 2;
		Var0.f_324.f_1.f_21.f_1 = 1065353216;
		Var0.f_324.f_1.f_21.f_1.f_11 = -1;
		Var0.f_324.f_1.f_21.f_1.f_13 = 1065353216;
		Var0.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
		Var0.f_324.f_1.f_48.f_18 = 1082130432;
		Var0.f_324.f_1.f_48.f_19 = -1065353216;
		Var0.f_324.f_1.f_48.f_20 = 1;
		Var0.f_324.f_1.f_48.f_21 = 2;
		Var0.f_324.f_1.f_48.f_21.f_1 = 1065353216;
		Var0.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
		Var0.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
		Var0.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
		fVar421 = -1f;
		fVar422 = 0.6f;
		if (fVar421 == -1f)
		{
			func_55(0, 0, &Var0, func_56(uParam0->f_16));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1), 3))
			{
				StringConCat(sParam1, " a", 64);
				fVar421 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1));
			}
		}
		if (fVar421 == -1f)
		{
			func_55(0, 1, &Var0, func_56(uParam0->f_16));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1), 3))
			{
				StringConCat(sParam1, " b", 64);
				fVar421 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1));
			}
		}
		if (fVar421 == -1f)
		{
			func_55(0, 2, &Var0, func_56(uParam0->f_16));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1), 3))
			{
				StringConCat(sParam1, " c", 64);
				fVar421 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1));
				fVar422 = 0.65f;
			}
		}
		if (fVar421 != -1f)
		{
			StringConCat(sParam1, " ", 64);
			if (fVar421 <= fVar422)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_55(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_chair_drink_beer_female_idle_b", 64);
						break;
					
					case 1:
						StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_chair_drink_beer_female_idle_b", 64);
						break;
					
					case 2:
						StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_chair_drink_beer_female_idle_c", 64);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_chair_drink_beer_male_idle_a", 64);
						break;
					
					case 1:
						StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_chair_drink_beer_male_idle_b", 64);
						break;
					
					case 2:
						StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_chair_drink_beer_male_idle_c", 64);
						break;
					}
			}
			break;
	}
}

bool func_56(int iParam0)
{
	return func_57(func_454(iParam0, 0));
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 15:
		case 20:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 52:
		case 53:
		case 56:
		case 60:
		case 55:
		case 51:
		case 50:
		case 40:
		case 46:
			return 1;
		
		default:
	}
	return 0;
}

char* func_58(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
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
			case 22:
			case 23:
				return "GET_FACE_DJ_FOR_NC_PED(i)";
			
			case 36:
			case 37:
			case 38:
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 47:
				return "GET_SINGLE_PROP_FOR_NC_PED(i)";
			
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
				return "GET_AMBIENT_FOR_NC_PED(i)";
			}
		
		default:
	}
	switch (iParam0)
	{
		case -1:
			return "AC_SLOT_NULL";
		
		case 0:
			return "AC_SLOT_GUARDING";
		
		case 1:
			return "AC_SLOT_HANGOUT";
		
		case 2:
			return "AC_SLOT_DRINK";
		
		case 3:
			return "AC_SLOT_SMOKE";
		
		case 4:
			return "AC_SLOT_SIT_DRINKING";
		
		case 5:
			return "AC_SLOT_USE_COMPUTER";
		
		case 6:
			return "AC_SLOT_BARTENDER_YACHT_IDLE";
		
		case 7:
			return "AC_SLOT_SOLOMUN";
		
		case 8:
			return "AC_SLOT_DIXON";
		
		case 9:
			return "AC_SLOT_TALE_OF_US_1";
		
		case 10:
			return "AC_SLOT_TALE_OF_US_2";
		
		case 11:
			return "AC_SLOT_BLACK_MADONNA";
		
		case 12:
			return "AC_SLOT_FACE_DJ_M_1";
		
		case 13:
			return "AC_SLOT_FACE_DJ_M_2";
		
		case 14:
			return "AC_SLOT_FACE_DJ_M_3";
		
		case 15:
			return "AC_SLOT_FACE_DJ_M_4";
		
		case 16:
			return "AC_SLOT_FACE_DJ_M_5";
		
		case 17:
			return "AC_SLOT_FACE_DJ_M_6";
		
		case 18:
			return "AC_SLOT_FACE_DJ_F_1";
		
		case 19:
			return "AC_SLOT_FACE_DJ_F_2";
		
		case 20:
			return "AC_SLOT_FACE_DJ_F_3";
		
		case 21:
			return "AC_SLOT_FACE_DJ_F_4";
		
		case 22:
			return "AC_SLOT_FACE_DJ_F_5";
		
		case 23:
			return "AC_SLOT_FACE_DJ_F_6";
		
		case 24:
			return "AC_SLOT_GROUP_M_1";
		
		case 25:
			return "AC_SLOT_GROUP_M_2";
		
		case 26:
			return "AC_SLOT_GROUP_M_3";
		
		case 27:
			return "AC_SLOT_GROUP_M_4";
		
		case 28:
			return "AC_SLOT_GROUP_M_5";
		
		case 29:
			return "AC_SLOT_GROUP_M_6";
		
		case 30:
			return "AC_SLOT_GROUP_F_1";
		
		case 31:
			return "AC_SLOT_GROUP_F_2";
		
		case 32:
			return "AC_SLOT_GROUP_F_3";
		
		case 33:
			return "AC_SLOT_GROUP_F_4";
		
		case 34:
			return "AC_SLOT_GROUP_F_5";
		
		case 35:
			return "AC_SLOT_GROUP_F_6";
		
		case 36:
			return "AC_SLOT_SINGLE_PROP_M_1";
		
		case 37:
			return "AC_SLOT_SINGLE_PROP_M_2";
		
		case 38:
			return "AC_SLOT_SINGLE_PROP_M_3";
		
		case 39:
			return "AC_SLOT_SINGLE_PROP_M_4";
		
		case 40:
			return "AC_SLOT_SINGLE_PROP_M_5";
		
		case 41:
			return "AC_SLOT_SINGLE_PROP_M_6";
		
		case 42:
			return "AC_SLOT_SINGLE_PROP_F_1";
		
		case 43:
			return "AC_SLOT_SINGLE_PROP_F_2";
		
		case 44:
			return "AC_SLOT_SINGLE_PROP_F_3";
		
		case 45:
			return "AC_SLOT_SINGLE_PROP_F_4";
		
		case 46:
			return "AC_SLOT_SINGLE_PROP_F_5";
		
		case 47:
			return "AC_SLOT_SINGLE_PROP_F_6";
		
		case 48:
			return "AC_SLOT_AMBIENT_M_1";
		
		case 49:
			return "AC_SLOT_AMBIENT_M_2";
		
		case 50:
			return "AC_SLOT_AMBIENT_M_3";
		
		case 51:
			return "AC_SLOT_AMBIENT_M_4";
		
		case 52:
			return "AC_SLOT_AMBIENT_M_5";
		
		case 53:
			return "AC_SLOT_AMBIENT_M_6";
		
		case 54:
			return "AC_SLOT_AMBIENT_F_1";
		
		case 55:
			return "AC_SLOT_AMBIENT_F_2";
		
		case 56:
			return "AC_SLOT_AMBIENT_F_3";
		
		case 57:
			return "AC_SLOT_AMBIENT_F_4";
		
		case 58:
			return "AC_SLOT_AMBIENT_F_5";
		
		case 59:
			return "AC_SLOT_AMBIENT_F_6";
		
		case 60:
			return "AC_SLOT_WORKER_CLIPBOARD";
		
		case 61:
			return "AC_SLOT_DANCING_WITH_BEER_SCENARIO";
		
		case 67:
			return "AC_SLOT_CAGE_DANCING_LAP_SCENARIO";
		
		case 62:
			return "AC_SLOT_LAZLOW_SITTING";
		
		case 63:
			return "AC_SLOT_JACK_H";
		
		case 64:
			return "AC_SLOT_POPPY_M";
		
		case 65:
			return "AC_SLOT_TRACEY_DANCING";
		
		case 66:
			return "AC_SLOT_LEANING_TEXTING";
		
		case 68:
			return "AC_SLOT_DANCEFLOOR_TONY_BAR_LEAN";
		
		case 69:
			return "AC_SLOT_DANCEFLOOR_LAZLOW_WALL_LEAN";
		
		case 70:
			return "AC_SLOT_DANCEFLOOR_LAZLOW_BAR_LEAN_PHONE";
		
		case 71:
			return "AC_SLOT_DANCEFLOOR_LAZLOW_SELFIE";
		
		case 72:
			return "AC_SLOT_DANCEFLOOR_TECH_STAGE_SIT";
		
		case 73:
			return "AC_SLOT_DANCEFLOOR_BOUNCER_TONY_TALK";
		
		case 74:
			return "AC_SLOT_DANCEFLOOR_BOUNCER_LOOKING_OVER_WORKER";
		
		case 75:
			return "AC_SLOT_DANCEFLOOR_TONY_PHONE";
		
		case 76:
			return "AC_SLOT_TECH_USE_COMPUTER";
		
		case 77:
			return "AC_SLOT_DANCEFLOOR_HBARTENDER_STOCK_TAKE";
		
		case 78:
			return "AC_SLOT_DANCEFLOOR_BUSBOY_TOILET";
		
		case 79:
			return "AC_SLOT_TOILET_BUNKER_SEAT";
		
		case 80:
			return "AC_SLOT_TOILET_SMOKE_WEED";
		
		case 81:
			return "AC_SLOT_TOILET_PHONE";
		
		case 82:
			return "AC_SLOT_TOILET_CHECK_OUT_MIRROR";
		
		case 83:
			return "AC_SLOT_DANCING_TO_BEER_WALK_SCENARIO";
		
		case 84:
			return "AC_SLOT_DANCING_TO_SELFIE_WALK_SCENARIO";
		
		case 85:
			return "AC_SLOT_PROP_HUMAN_SEAT_BAR_F_1";
		
		case 86:
			return "AC_SLOT_CLOAKROOM_STOOL";
		
		case 87:
			return "AC_SLOT_PROP_HUMAN_SEAT_BAR_M_1";
		
		case 88:
			return "AC_SLOT_PROP_HUMAN_SEAT_BAR_M_2";
		
		case 89:
			return "AC_SLOT_TONY_SIT_DRINK_1";
		
		case 90:
			return "AC_SLOT_TONY_SIT_DRINK_2";
		
		case 91:
			return "AC_SLOT_LEAN_SMOKE_1";
		
		case 92:
			return "AC_SLOT_ENTOURAGE_TAL_1";
		
		case 93:
			return "AC_SLOT_ENTOURAGE_TAL_2";
		
		case 94:
			return "AC_SLOT_ENTOURAGE_TAL_3";
		
		case 95:
			return "AC_SLOT_ENTOURAGE_SOL_1";
		
		case 96:
			return "AC_SLOT_ENTOURAGE_SOL_2";
		
		case 97:
			return "AC_SLOT_ENTOURAGE_SOL_3";
		
		case 98:
			return "AC_SLOT_ENTOURAGE_SOL_4";
		
		case 99:
			return "AC_SLOT_ENTOURAGE_SOL_ROB";
		
		case 100:
			return "AC_SLOT_ENTOURAGE_SOL_MIKE";
		
		case 101:
			return "AC_SLOT_ENTOURAGE_BLAM_1";
		
		case 102:
			return "AC_SLOT_ENTOURAGE_BLAM_2";
		
		case 103:
			return "AC_SLOT_ENTOURAGE_BLAM_3";
		
		case 104:
			return "AC_SLOT_ENTOURAGE_DIX_1";
		
		case 105:
			return "AC_SLOT_LAZLOW_HIGH_DANCEFLOOR";
		
		case 106:
			return "AC_SLOT_LAZLOW_HIGH_RAILING";
		
		case 107:
			return "AC_SLOT_LAZLOW_HIGH_CHAIR";
		
		case 108:
			return "AC_SLOT_LAZLOW_HIGH_PODIUM";
		
		case 109:
			return "AC_SLOT_LAZLOW_LOW_TOILET";
		
		case 110:
			return "AC_SLOT_LAZLOW_LOW_BAR";
		
		case 111:
			return "AC_SLOT_LAZLOW_LOW_SOFA";
		
		case 112:
			return "AC_SLOT_LAZLOW_LOW_ALONE";
		
		case 113:
			return "AC_SLOT_LAZLOW_VIP";
		
		case 114:
			return "AC_SLOT_MUSCLE_FLEX";
		
		default:
	}
	return "";
}

char* func_59(var uParam0, int iParam1, int iParam2)
{
	StringCopy(&cVar0, "", 32);
	if (iParam2 != -1)
	{
		iVar8 = iParam2;
	}
	else
	{
		iVar8 = func_454(uParam0->f_16, 0);
	}
	switch (iVar8)
	{
		case 34:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							return "GENERIC_HOWS_IT_GOING";
						
						case 1:
							return "KIFFLOM_GREET";
						
						default:
					}
					break;
				
				case 2:
				case 4:
					return "CHAT_STATE";
				
				case 16:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
					{
						case 0:
							return "GENERIC_THANKS";
						
						case 1:
							return "GENERIC_CHEER";
						
						case 2:
							return "PED_RANT";
						
						case 3:
							return "AGREE_ACROSS_STREET";
						
						default:
					}
					break;
			}
			break;
		
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
			if (iParam1 == 5 && PLAYER::PLAYER_ID() == func_6())
			{
				return "GENERIC_WHATEVER";
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								StringCopy(&cVar0, "WELCOME_OWNER_LOUD", 32);
								break;
							
							case 1:
								StringCopy(&cVar0, "OWNER_CONFIRM_ENTRY_LOUD", 32);
								break;
						}
					}
					else if (func_86(func_6()))
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								StringCopy(&cVar0, "WELCOME_PLAYER_LOUD", 32);
								break;
							
							case 1:
								iVar11 = func_75(func_6());
								switch (iVar11)
								{
									case 0:
										return "WELCOME_OMEGA_LOUD";
									
									case 1:
										return "WELCOME_GEFANGNIS_LOUD";
									
									case 2:
										return "WELCOME_PARADISE_LOUD";
									
									case 3:
										return "WELCOME_STUDIO_LS_LOUD";
									
									case 4:
										return "WELCOME_MAISONETTE_LS_LOUD";
									
									case 5:
										return "WELCOME_THE_PALACE_LOUD";
									
									case 6:
										return "WELCOME_GALAXY_LOUD";
									
									case 7:
										return "WELCOME_TECHNOLOGIE_LOUD";
									
									case 8:
										return "WELCOME_TONYS_FUN_HOUSE_LOUD";
									
									default:
								}
								break;
							
							case 2:
								StringCopy(&cVar0, "ENTRY_WELCOME_LOUD", 32);
								break;
						}
					}
					else if (Global_1316802 == 1)
					{
						StringCopy(&cVar0, "PAY_FOR_ACCESS_LOUD", 32);
					}
					else if (Global_1316802 == 4 && Global_1316802 == 6)
					{
						StringCopy(&cVar0, "GENERAL_NO_ACCESS_LOUD", 32);
					}
					else if (Global_1316802 == 8)
					{
						StringCopy(&cVar0, "THROW_OUT_WARNING_LOUD", 32);
					}
					else if (Global_1316802 == 10)
					{
						StringCopy(&cVar0, "THROW_OUT_LOUD", 32);
					}
					break;
				
				case 1:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "GREET_OWNER_LOUD", 32);
					}
					else
					{
						StringCopy(&cVar0, "GREET_OTHER_PLAYER_LOUD", 32);
					}
					break;
				
				case 17:
					if (!PLAYER::PLAYER_ID() == func_6())
					{
						if (!func_86(func_6()))
						{
							if (Global_1316802 == 1)
							{
								StringCopy(&cVar0, "PAY_FOR_ACCESS_LOUD", 32);
							}
							else if (Global_1316802 == 4 || Global_1316802 == 6)
							{
								StringCopy(&cVar0, "GENERAL_NO_ACCESS_LOUD", 32);
							}
							else if (Global_1316802 == 8)
							{
								StringCopy(&cVar0, "THROW_OUT_WARNING_LOUD", 32);
							}
							else if (Global_1316802 == 10)
							{
								StringCopy(&cVar0, "THROW_OUT_LOUD", 32);
							}
						}
					}
					break;
				
				case 2:
					if (func_74(PLAYER::PLAYER_ID()))
					{
						StringCopy(&cVar0, "COMMENT_DANCING_CLOSE_LOUD", 32);
					}
					else if (func_72(PLAYER::PLAYER_PED_ID()) && !PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "COMMENT_DRUNK_LOUD", 32);
					}
					else if (PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "HOWSITGOING_OWNER", 32);
					}
					else
					{
						StringCopy(&cVar0, "HOWSITGOING_OTHER_PLAYER", 32);
					}
					break;
				
				case 3:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "BYE_OWNER_LOUD", 32);
					}
					else
					{
						StringCopy(&cVar0, "BYE_OTHER_PLAYER_LOUD", 32);
					}
					break;
				
				case 4:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
						{
							case 0:
								StringCopy(&cVar0, "IDLE_OWNER_LOUD", 32);
								break;
							
							case 1:
								if (func_67(PLAYER::PLAYER_ID(), 10))
								{
									StringCopy(&cVar0, "STAFF_UPGRADE_LOUD", 32);
								}
								else
								{
									StringCopy(&cVar0, "IDLE_OWNER_LOUD", 32);
								}
								break;
							
							case 2:
								if (func_66(PLAYER::PLAYER_ID()))
								{
									StringCopy(&cVar0, "SECURITY_UPGRADE_LOUD", 32);
								}
								else
								{
									StringCopy(&cVar0, "IDLE_OWNER_LOUD", 32);
								}
								break;
							
							case 3:
								StringCopy(&cVar0, "COMMENTS_ON_STYLE_LOUD", 32);
								break;
							
							case 4:
								switch (Global_1316784)
								{
									case 0:
										StringCopy(&cVar0, "COMMENT_DJ_SOLOMUN_LOUD", 32);
										break;
									
									case 1:
										StringCopy(&cVar0, "COMMENT_DJ_DIXON_LOUD", 32);
										break;
									
									case 2:
										StringCopy(&cVar0, "COMMENT_DJ_TALE_LOUD", 32);
										break;
									
									case 3:
										StringCopy(&cVar0, "COMMENT_DJ_MADONNA_LOUD", 32);
										break;
								}
								break;
						}
					}
					else if (func_86(func_6()))
					{
						StringCopy(&cVar0, "IDLE_OTHER_PLAYER_LOUD", 32);
					}
					break;
				
				case 6:
					StringCopy(&cVar0, "POPULARITY_HIGH_LOUD", 32);
					break;
				
				case 7:
					StringCopy(&cVar0, "POPULARITY_LOW_LOUD", 32);
					break;
				
				case 16:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "THANKS_OWNER", 32);
					}
					else
					{
						StringCopy(&cVar0, "THANKS_OTHER_PLAYER", 32);
					}
					break;
				
				case 11:
					switch (Global_1316784)
					{
						case 0:
							StringCopy(&cVar0, "COMMENT_DJ_SOLOMUN_LOUD", 32);
							break;
						
						case 1:
							StringCopy(&cVar0, "COMMENT_DJ_DIXON_LOUD", 32);
							break;
						
						case 2:
							StringCopy(&cVar0, "COMMENT_DJ_TALE_LOUD", 32);
							break;
						
						case 3:
							StringCopy(&cVar0, "COMMENT_DJ_MADONNA_LOUD", 32);
							break;
					}
					break;
				
				case 5:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "BUMP_OWNER_LOUD", 32);
					}
					else
					{
						StringCopy(&cVar0, "BUMP_LOUD", 32);
					}
					break;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
			{
				return HUD::_GET_TEXT_SUBSTRING(&cVar0, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					iVar12 = func_75(func_6());
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							return "WELCOME";
							break;
						
						case 1:
							switch (iVar12)
							{
								case 0:
									return "WELCOME_OMEGA";
								
								case 1:
									return "WELCOME_GEFANGNIS";
								
								case 2:
									return "WELCOME_PARADISE";
								
								case 3:
									return "WELCOME_STUDIO_LS";
								
								case 4:
									return "WELCOME_MAISONETTE_LS";
								
								case 5:
									return "WELCOME_THE_PALACE";
								
								case 6:
									return "WELCOME_GALAXY";
								
								case 7:
									return "WELCOME_TECHNOLOGIE";
								
								case 8:
									return "WELCOME_TONYS_FUN_HOUSE";
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					return "GREET_OWNER";
					break;
				
				case 16:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							return "GENERIC_THANKS";
						
						case 1:
							return "PAYMENT_THANKS";
						
						case 2:
							return "PAYMENT_THANKS";
						
						default:
					}
					break;
				
				case 4:
					return "CASH_DESK_IDLE";
					break;
				
				case 17:
					return "ENTRY_WARNING";
					break;
				
				case 19:
					return "NO_ENTRY_COST";
					break;
				
				case 2:
					return "ENTRY_COST";
					break;
				
				case 18:
					return "NOT_ENOUGH_CASH";
					break;
				
				case 15:
					return "CHOOSE_DRINK";
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 1:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						return "GREET_OWNER";
					}
					else
					{
						return "GREET_OTHER_PLAYER";
					}
					break;
				
				case 2:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						return "HOWSITGOING_OWNER";
					}
					else
					{
						return "HOWSITGOING_OTHER_PLAYER";
					}
					break;
				
				case 3:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						return "BYE_OWNER";
					}
					else
					{
						return "BYE_OTHER_PLAYER";
					}
					break;
				
				case 4:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						return "IDLE_OWNER";
					}
					else
					{
						return "IDLE_OTHER_PLAYER";
					}
					break;
				
				case 13:
					iVar14 = 0;
					while (iVar14 < 3)
					{
						iVar13 = Global_1628237[func_6()].f_11.f_514[iVar14];
						switch (iVar13)
						{
							case 1:
								iVar15 = 22;
								break;
							
							case 2:
								iVar15 = 23;
								break;
							
							case 3:
								iVar15 = 24;
								break;
							
							case 4:
								iVar15 = 25;
								break;
							
							case 5:
								iVar15 = 26;
								break;
							
							case 6:
								iVar15 = 27;
								break;
						}
						if (!MISC::IS_BIT_SET(Global_1316806, iVar15))
						{
							switch (iVar13)
							{
								case 1:
									return "LAZFM_ANJB1";
									break;
								
								case 2:
									return "LAZFM_ANLJ1";
									break;
								
								case 3:
									return "LAZFM_ANKM1";
									break;
								
								case 4:
									return "LAZFM_ANPM1";
									break;
								
								case 5:
									return "LAZFM_ANTD1";
									break;
								
								case 6:
									return "LAZFM_ANMC1";
									break;
								}
						}
						iVar14++;
					}
					return "";
				
				case 14:
					if (func_92(uParam0) != -1 && !MISC::IS_BIT_SET(Global_1316806, ((28 + func_92(uParam0)) % 32)))
					{
						return func_27(uParam0->f_6, func_92(uParam0));
					}
					return "";
				
				case 6:
					return "CLUB_HIGH_POP";
				
				case 7:
					return "CLUB_LOW_POP";
			}
			break;
		
		case 17:
			StringCopy(&cVar0, func_91(iParam1), 32);
			func_61(&iVar9, &uVar10);
			switch (iParam1)
			{
				case 1:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "GREET_OWNER", 32);
					}
					else
					{
						StringCopy(&cVar0, "GREET_OTHER_PLAYER", 32);
					}
					break;
				
				case 2:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "HOWSITGOING_OWNER", 32);
					}
					else
					{
						StringCopy(&cVar0, "HOWSITGOING_OTHER_PLAYER", 32);
					}
					break;
				
				case 3:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "BYE_OWNER", 32);
					}
					else
					{
						StringCopy(&cVar0, "BYE_OTHER_PLAYER", 32);
					}
					break;
				
				case 4:
					if (iVar9 == 5 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						return "USE_COMP";
					}
					else if (PLAYER::PLAYER_ID() == func_6())
					{
						StringCopy(&cVar0, "IDLE_OWNER", 32);
					}
					else
					{
						StringCopy(&cVar0, "IDLE_OTHER_PLAYER", 32);
					}
					break;
				
				case 5:
					StringCopy(&cVar0, "BUMP", 32);
					break;
				
				case 6:
					StringCopy(&cVar0, "CLUB_HIGH_POP", 32);
					break;
				
				case 7:
					StringCopy(&cVar0, "CLUB_LOW_POP", 32);
					break;
				
				case 12:
				case 11:
					return func_91(iParam1);
					break;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
			{
				if (((iVar9 != 5 && iVar9 != 89) && iVar9 != 69) && Global_1316786 == 4)
				{
					StringConCat(&cVar0, "_LOUD", 32);
				}
				if (MISC::ARE_STRINGS_EQUAL(&cVar0, "BUMP_LOUD"))
				{
					StringCopy(&cVar0, "BUMP_CLUB", 32);
				}
				return HUD::_GET_TEXT_SUBSTRING(&cVar0, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
			}
			break;
		
		case 54:
		case 55:
		case 60:
		case 56:
		case 53:
		case 58:
			switch (iParam1)
			{
				case 0:
				case 1:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						return "GREET_OWNER";
					}
					else
					{
						return "GENERIC_GREET";
					}
					break;
				
				case 2:
					return "HOWS_IT_GOING";
				
				case 4:
					if (PLAYER::PLAYER_ID() == func_6())
					{
						return "IDLE_OWNER";
					}
					else
					{
						return "IDLE_OTHER_PLAYER";
					}
					break;
				
				case 9:
					sVar16 = "";
					iVar18 = 0;
					while (iVar18 < 3)
					{
						iVar17 = Global_1628237[func_6()].f_11.f_514[iVar18];
						switch (iVar17)
						{
							case 1:
								if (iVar8 != 54 && !MISC::IS_BIT_SET(Global_1316807, func_52(iVar8, iVar17)))
								{
									sVar16 = "COMMENT_ON_CELEB_JIMMY";
								}
								else
								{
									break;
								
								case 2:
									if (iVar8 != 60 && !MISC::IS_BIT_SET(Global_1316807, func_52(iVar8, iVar17)))
									{
										sVar16 = "COMMENT_ON_CELEB_LACEY";
									}
									else
									{
										break;
									
									case 3:
										if (iVar8 != 55 && !MISC::IS_BIT_SET(Global_1316807, func_52(iVar8, iVar17)))
										{
											sVar16 = "COMMENT_ON_CELEB_KERRY";
										}
										else
										{
											break;
										
										case 4:
											if (iVar8 != 53 && !MISC::IS_BIT_SET(Global_1316807, func_52(iVar8, iVar17)))
											{
												sVar16 = "COMMENT_ON_CELEB_POPPY";
											}
											else
											{
												break;
											
											case 5:
												if (iVar8 != 58 && !MISC::IS_BIT_SET(Global_1316807, func_52(iVar8, iVar17)))
												{
													sVar16 = "COMMENT_ON_CELEB_TYLER";
												}
												else
												{
													break;
												
												case 6:
													if (iVar8 != 56 && !MISC::IS_BIT_SET(Global_1316807, func_52(iVar8, iVar17)))
													{
														sVar16 = "COMMENT_ON_CELEB_MIRANDA";
													}
													else
													{
														break;
												}
												iVar18++;
											}
										}
									}
								}
							}
						}
					}
					iVar19 = 0;
					if (MISC::IS_STRING_NULL_OR_EMPTY(sVar16))
					{
						iVar19 = 1;
					}
					func_60(&iVar9);
					if (iVar9 == 107)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(iVar19, 5))
						{
							case 0:
								return sVar16;
							
							case 1:
								return "COMMENT_ON_TONY";
							
							case 2:
								return "COMMENTS_ON_VIP_AREA";
							
							default:
						}
						return "COMMENT_ON_LAZLOW_VIP_AREA";
					}
					else
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(iVar19, 3))
						{
							case 0:
								return sVar16;
							
							case 1:
								return "COMMENT_ON_TONY";
							
							case 2:
								return "COMMENTS_ON_VIP_AREA";
							}
						
						default:
					}
					break;
				
				case 12:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							return "COMMENTS_ON_STYLE";
						
						case 1:
							return "SHOUTOUT";
						
						default:
					}
					break;
				
				case 11:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
					{
						case 0:
							return "COMMENTS_ON_DJ";
						
						default:
					}
					switch (Global_1316784)
					{
						case 0:
							return "COMMENTS_ON_SOL";
							break;
						
						case 1:
							return "COMMENTS_ON_DIX";
							break;
						
						case 2:
							return "COMMENTS_ON_TOU";
							break;
						
						case 3:
							return "COMMENTS_ON_TBM";
							break;
					}
					return "COMMENTS_ON_DJ";
					break;
				
				case 8:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							return "GENERAL_CLUB_BANTER";
						
						case 1:
							return "GENERAL_BANTER";
						
						case 2:
							return "GENERAL_DJ_BANTER";
						
						default:
					}
					break;
				
				case 5:
					return "VIP_BUMP";
			}
			break;
	}
	return func_91(iParam1);
}

void func_60(int iParam0)
{
	switch (Global_1316786)
	{
		case 0:
			*iParam0 = 69;
			break;
		
		case 1:
			*iParam0 = 70;
			break;
		
		case 2:
			*iParam0 = 71;
			break;
		
		case 3:
			*iParam0 = 4;
			break;
		
		case 4:
			if (Global_1316781)
			{
				if (func_486())
				{
					*iParam0 = 113;
				}
				else
				{
					switch (Global_1316792)
					{
						case 0:
							*iParam0 = 105;
							break;
						
						case 1:
							*iParam0 = 106;
							break;
						
						case 2:
							*iParam0 = 107;
							break;
						
						case 3:
							*iParam0 = 108;
							break;
						
						case 4:
							*iParam0 = 109;
							break;
						
						case 5:
							*iParam0 = 110;
							break;
						
						case 6:
							*iParam0 = 111;
							break;
						
						case 7:
							*iParam0 = 112;
							break;
						}
				}
			}
			else
			{
				*iParam0 = 4;
			}
			break;
	}
}

void func_61(int iParam0, var uParam1)
{
	switch (Global_1316786)
	{
		case 0:
			*iParam0 = 68;
			break;
		
		case 1:
			*iParam0 = 1;
			break;
		
		case 2:
			*iParam0 = 75;
			break;
		
		case 3:
			*iParam0 = 70;
			break;
		
		case 4:
			switch (Global_1316791)
			{
				case 0:
					*iParam0 = 69;
					break;
				
				case 1:
					*iParam0 = 5;
					break;
				
				case 2:
					*iParam0 = 89;
					break;
				
				case 3:
					*iParam0 = 53;
					break;
				
				case 4:
					*iParam0 = 51;
					break;
				
				case 5:
					*iParam0 = 90;
					break;
				
				case 6:
				case 7:
				case 8:
					*iParam0 = func_62(43);
					*uParam1 = 1;
					break;
			}
			break;
	}
}

int func_62(int iParam0)
{
	if (func_56(iParam0))
	{
		return func_65(iParam0);
	}
	return func_63(iParam0);
}

int func_63(int iParam0)
{
	iVar0 = ((iParam0 + func_64()) % 6);
	switch (iVar0)
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
		
		case 5:
			return 17;
		
		default:
	}
	return 12;
}

int func_64()
{
	return func_6();
}

int func_65(int iParam0)
{
	iVar0 = ((iParam0 + func_64()) % 6);
	switch (iVar0)
	{
		case 0:
			return 18;
		
		case 1:
			return 19;
		
		case 2:
			return 20;
		
		case 3:
			return 21;
		
		case 4:
			return 22;
		
		case 5:
			return 23;
		
		default:
	}
	return 18;
}

bool func_66(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 5);
}

int func_67(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_71(iParam0);
		
		case 11:
			return func_70(iParam0);
		
		case 12:
			return func_69(iParam0);
		
		case 13:
			return func_68(iParam0);
		
		default:
	}
	return 0;
}

bool func_68(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 15);
}

bool func_69(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 14);
}

bool func_70(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 13);
}

bool func_71(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 12);
}

int func_72(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_73(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0] == -1)
		{
			if (iParam0 == Global_42383[iVar0].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_74(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_3, 13);
}

int func_75(int iParam0)
{
	iVar0 = -1;
	if (func_76(iParam0, 4))
	{
		iVar0 = 4;
	}
	else if (func_76(iParam0, 3))
	{
		iVar0 = 3;
	}
	else if (func_76(iParam0, 6))
	{
		iVar0 = 6;
	}
	else if (func_76(iParam0, 1))
	{
		iVar0 = 1;
	}
	else if (func_76(iParam0, 0))
	{
		iVar0 = 0;
	}
	else if (func_76(iParam0, 7))
	{
		iVar0 = 7;
	}
	else if (func_76(iParam0, 2))
	{
		iVar0 = 2;
	}
	else if (func_76(iParam0, 5))
	{
		iVar0 = 5;
	}
	else if (func_76(iParam0, 8))
	{
		iVar0 = 8;
	}
	return iVar0;
}

int func_76(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			return func_85(iParam0);
		
		case 3:
			return func_84(iParam0);
		
		case 6:
			return func_83(iParam0);
		
		case 1:
			return func_82(iParam0);
		
		case 0:
			return func_81(iParam0);
		
		case 7:
			return func_80(iParam0);
		
		case 2:
			return func_79(iParam0);
		
		case 5:
			return func_78(iParam0);
		
		case 8:
			return func_77(iParam0);
		
		default:
	}
	return 0;
}

bool func_77(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_2, 0);
}

bool func_78(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 31);
}

bool func_79(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 30);
}

bool func_80(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 29);
}

bool func_81(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 28);
}

bool func_82(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 27);
}

bool func_83(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 26);
}

bool func_84(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 25);
}

bool func_85(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 24);
}

int func_86(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1694632[iVar0] == -1)
		{
			return 0;
		}
		uVar1 = PLAYER::GET_PLAYER_NAME(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return MISC::GET_HASH_KEY(sVar1) == Global_1694632[iVar0];
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (iParam0 != func_34() && func_88(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_1628237[iParam0].f_556, 0);
	}
	return 0;
}

int func_88(int iParam0, bool bParam1, bool bParam2)
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

int func_89(int iParam0)
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

var func_90()
{
	return Global_73825;
}

char* func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DJ_GREET_FIRST";
		
		case 1:
			return "DJ_GREET";
		
		case 2:
			return "DJ_HOWSITGOING";
		
		case 3:
			return "DJ_BYE";
		
		case 4:
			return "DJ_IDLE";
		
		case 5:
			return "BUMP";
		
		case 6:
			return "DJ_HIGH_POP";
		
		case 7:
			return "DJ_LOW_POP";
		
		case 8:
			return "DJ_SHOUT_GEN";
		
		case 9:
			return "DJ_SHOUT_TONY";
		
		case 10:
			return "DJ_SHOUT_OWNER";
		
		case 15:
			return "DJ_SPECIAL";
		
		case 16:
			return "DJ_THANKS";
		
		case 17:
			return "BOUNCER_PLAYER_MISBEHAVING";
		
		case 11:
			switch (Global_1316784)
			{
				case 0:
					return "SHOUT_SOLOMUN";
					break;
				
				case 1:
					return "SHOUT_DIXON";
					break;
				
				case 2:
					return "SHOUT_TALE";
					break;
				
				case 3:
					return "SHOUT_MADONNA";
					break;
			}
			return "SHOUT_DJ";
			break;
		
		case 13:
			return "SHOUT_CELEB";
		
		case 12:
			return "SHOUTOUT";
		
		case 14:
			return "SHOUT_AREA";
		
		case 18:
			return "NOT_ENOUGH_CASH";
		
		case 19:
			return "NCP_SPEECH_FREE_ENTRY";
	}
	return "";
}

int func_92(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 109:
			if (uParam0->f_10 > 0 && uParam0->f_10 < 7)
			{
				return (uParam0->f_10 - 1);
			}
			break;
		
		case 110:
			if (uParam0->f_10 > 0 && uParam0->f_10 < 9)
			{
				return (uParam0->f_10 - 1);
			}
			else if (uParam0->f_10 == 10)
			{
				return 8;
			}
			break;
		
		case 111:
			if (uParam0->f_10 > 0 && uParam0->f_10 < 7)
			{
				return (uParam0->f_10 - 1);
			}
			break;
		
		case 112:
			if (uParam0->f_10 > 0 && uParam0->f_10 < 8)
			{
				return (uParam0->f_10 - 1);
			}
			break;
		
		case 105:
			if (uParam0->f_10 > 30 && uParam0->f_10 < 38)
			{
				return (uParam0->f_10 - 31);
			}
			break;
		
		case 106:
			if (uParam0->f_10 == 8)
			{
				return 0;
			}
			break;
	}
	return -1;
}

void func_93(var uParam0, int iParam1)
{
	func_94(&(uParam0->f_29), iParam1);
}

void func_94(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(uParam0, iParam1);
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_96(int iParam0, int iParam1)
{
	iVar0 = func_97(iParam1);
	if (iParam1 != 4)
	{
		if (((iParam0 == 14 || iParam0 == 17) || iParam0 == 10) || iParam0 == 62)
		{
			iVar0 *= 2;
		}
		else if (((((iParam0 == 54 || iParam0 == 60) || iParam0 == 55) || iParam0 == 53) || iParam0 == 58) || iParam0 == 56)
		{
			iVar0 *= 2;
		}
	}
	if (iParam0 == 1)
	{
		if (iParam1 == 17)
		{
			iVar0 = 1000;
		}
		else if (iParam1 == 4)
		{
			iVar0 = 30000;
		}
	}
	return iVar0;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2000;
		
		case 1:
			return 2500;
		
		case 2:
			return 15000;
		
		case 3:
			return 2000;
		
		case 4:
			return 75000;
		
		case 5:
			return 5000;
		
		case 6:
			return 15000;
		
		case 7:
			return 15000;
		
		case 8:
			return 60000;
		
		case 13:
			return 1500;
		
		case 14:
			return 1500;
		
		case 9:
			return 60000;
		
		case 10:
			return 60000;
		
		case 16:
			return 5000;
		
		case 11:
			return 60000;
		
		case 12:
			return 60000;
		
		case 17:
			return 15000;
		
		case 15:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 2147483647;
}

void func_98(int iParam0, int iParam1, int iParam2)
{
	Var0 = 424346598;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam2;
	Var0.f_2 = iParam1;
	iVar5 = 0;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar6 = iVar4;
		if ((func_88(iVar6, 1, 1) && Global_2425662[iVar4].f_310.f_8 == iParam0) && func_99(iVar6) == 0)
		{
			MISC::SET_BIT(&iVar5, iVar4);
		}
		iVar4++;
	}
	if (!iVar5 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iVar5);
	}
}

int func_99(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

void func_100(var uParam0, int iParam1)
{
	iVar0 = func_454(uParam0->f_16, 0);
	if (iParam1 < 20 && !func_106(iVar0, iParam1))
	{
		return;
	}
	func_101(&(uParam0->f_29), iParam1);
}

void func_101(var uParam0, int iParam1)
{
	MISC::SET_BIT(uParam0, iParam1);
}

int func_102()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_476(func_6(), iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_103(var uParam0, int iParam1)
{
	if (uParam0->f_32[0] == iParam1 || uParam0->f_32[1] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_104(var uParam0, int iParam1)
{
	return func_105(&(uParam0->f_29), iParam1);
}

bool func_105(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (Global_1316784 == 2)
	{
		if (Global_1316785 == -1)
		{
			if (func_107())
			{
				Global_1316785 = 10;
			}
			else
			{
				Global_1316785 = 62;
			}
		}
	}
	else
	{
		Global_1316785 = -1;
	}
	if (Global_1316785 == iParam0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 10:
		case 62:
			if (iParam1 == -1)
			{
				return 1;
			}
			if (Global_1316784 == 0 || Global_1316784 == 1)
			{
				switch (iParam1)
				{
					case 8:
						return 0;
					
					case 9:
						return 0;
					
					case 10:
						return 0;
					
					case 15:
						return 0;
					}
				
				default:
			}
			switch (iParam1)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				case 4:
					return 1;
				
				case 5:
					return 1;
				
				case 6:
					return 1;
				
				case 7:
					return 1;
				
				case 8:
					return 1;
				
				case 9:
					return 1;
				
				case 10:
					return 1;
				
				default:
			}
			break;
		
		case 34:
			if (iParam1 == -1)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				case 4:
					return 1;
				
				case 5:
					return 1;
				
				case 16:
					return 1;
				
				default:
			}
			break;
		
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
			if (iParam1 == -1)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 5:
					return 1;
				
				case 17:
					return 1;
				
				default:
			}
			break;
		
		case 1:
			if (iParam1 == -1)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 3:
					return 1;
				
				case 16:
					return 1;
				
				case 4:
					return 1;
				
				case 2:
					return 1;
				
				case 5:
					return 1;
				
				case 6:
					return 1;
				
				case 7:
					return 1;
				
				case 11:
					return 1;
				
				case 17:
					return 1;
				
				default:
			}
			break;
		
		case 20:
			if (iParam1 == -1)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 16:
					return 1;
				
				case 4:
					return 1;
				
				case 17:
					return 1;
				
				case 2:
					return 1;
				
				case 18:
					return 1;
				
				case 15:
					return 1;
				
				case 19:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			if (iParam1 == -1)
			{
				return 1;
			}
			if (Global_1316786 == 4)
			{
				if (Global_1316800 <= 40f)
				{
					switch (iParam1)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 3:
							return 0;
						}
					}
				
				default:
			}
			switch (iParam1)
			{
				case 5:
					return 1;
				
				case 6:
					return 1;
				
				case 7:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				case 4:
					return 1;
				
				case 11:
					return 1;
				
				case 13:
					return 1;
				
				case 12:
					return 1;
				
				case 14:
					return 1;
				
				default:
			}
			break;
		
		case 17:
			if (iParam1 == -1)
			{
				return 1;
			}
			func_61(&iVar0, &uVar1);
			if ((iVar0 != 5 && iVar0 != 89) && iVar0 != 69)
			{
			}
			else
			{
				switch (iParam1)
				{
					case 11:
						return 0;
					
					case 12:
						return 0;
					}
				
				default:
			}
			switch (iParam1)
			{
				case 5:
					return 1;
				
				case 6:
					return 1;
				
				case 7:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				case 4:
					return 1;
				
				case 11:
					return 1;
				
				case 12:
					return 1;
				
				default:
			}
			break;
		
		case 54:
		case 55:
		case 60:
		case 56:
		case 53:
		case 58:
			if (iParam1 == -1)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				case 4:
					return 1;
				
				case 9:
					return 1;
				
				case 12:
					return 1;
				
				case 11:
					return 1;
				
				case 8:
					return 1;
				
				case 5:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

int func_107()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_108(var uParam0)
{
	iVar0 = 0;
	Var1.f_1 = 4;
	Var1.f_6 = -1;
	Var1.f_7 = 2;
	Var1.f_8 = -1;
	Var1.f_10 = -1;
	Var1.f_11 = -1;
	Var1.f_12 = -1;
	Var1.f_16 = -1;
	Var1.f_19 = -1;
	Var1.f_32 = 2;
	Var1.f_39 = -1;
	Var1.f_40 = -1;
	Var1.f_41 = 3;
	Var1.f_49 = -1;
	Var1.f_50 = -1;
	Var1.f_54 = -1;
	iVar59 = 0;
	iVar60 = 0;
	iVar59 = 0;
	while (iVar59 < 6)
	{
		switch (iVar59)
		{
			case 0:
				iVar60 = 46;
				iVar0 = 5;
				break;
			
			case 1:
				iVar60 = 47;
				iVar0 = 7;
				break;
			
			case 2:
				iVar60 = 42;
				iVar0 = 9;
				break;
			
			case 3:
				iVar60 = 40;
				iVar0 = 11;
				break;
			
			case 4:
				iVar60 = 45;
				iVar0 = 13;
				break;
			
			case 5:
				iVar60 = 147;
				iVar0 = 3;
		}
		iVar61 = uParam0->f_7255[iVar60];
		if (iVar61 > -1)
		{
			Var1 = { *uParam0[iVar61] };
			if ((ENTITY::DOES_ENTITY_EXIST(Var1) && !ENTITY::IS_ENTITY_DEAD(Var1, 0)) && (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2, iVar0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2, iVar0 + 1)))
			{
				sVar62 = "ANIM@AMB@NIGHTCLUB@PEDS@";
				sVar63 = "mini_strip_club_idles_bouncer_stop_stop";
				fVar64 = 0.01f;
				if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2, iVar0 + 1))
				{
					if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2, iVar0))
					{
						STREAMING::REMOVE_ANIM_DICT(sVar62);
						MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), iVar0);
					}
					sVar62 = "ANIM@AMB@NIGHTCLUB@PEDS@";
					sVar63 = "mini_strip_club_idles_bouncer_go_away_go_away";
					fVar64 = 0.195f;
				}
				STREAMING::REQUEST_ANIM_DICT(sVar62);
				STREAMING::REQUEST_ANIM_DICT("ANIM@AMB@NIGHTCLUB@PEDS@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(sVar62))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Var1, sVar62, sVar63, 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Var1, sVar62, sVar63) > 0.85f && STREAMING::HAS_ANIM_DICT_LOADED("ANIM@AMB@NIGHTCLUB@PEDS@"))
						{
							MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), iVar0);
							MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), iVar0 + 1);
							TASK::TASK_PLAY_ANIM(Var1, "ANIM@AMB@NIGHTCLUB@PEDS@", "amb_world_human_stand_guard_male_base", 2f, -2f, -1, 1, 0f, 0, 0, 0);
							STREAMING::REMOVE_ANIM_DICT(sVar62);
							STREAMING::REMOVE_ANIM_DICT("ANIM@AMB@NIGHTCLUB@PEDS@");
						}
					}
					else
					{
						TASK::TASK_PLAY_ANIM(Var1, sVar62, sVar63, 1090519040, -1056964608, -1, 2, fVar64, 0, 0, 0);
					}
				}
			}
		}
		iVar59++;
	}
}

void func_109(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_7550 && !uParam0->f_7551)
	{
		iVar0 = uParam0->f_7547;
		iVar1 = (iVar0 + uParam0->f_7549);
		bVar2 = false;
		if (iParam1 >= iVar0 && iParam1 < iVar1)
		{
			bVar2 = true;
		}
		else if (iParam1 + 125 >= iVar0 && iParam1 + 125 < iVar1)
		{
			bVar2 = true;
		}
		if (!uParam0->f_7421[iParam1] && !bVar2)
		{
			return;
		}
		uParam0->f_7421[iParam1] = 0;
		if (uParam0->f_7553 >= 10)
		{
			return;
		}
	}
	if (((uParam0[iParam1]->f_40 == -1 && func_426(uParam0[iParam1]->f_16, uParam0->f_7554, uParam0->f_7555, uParam0->f_7556)) && ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam1])) && !ENTITY::IS_ENTITY_ON_SCREEN((*uParam0)[iParam1]))
	{
		bVar3 = true;
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (((uParam0[iParam1]->f_41[iVar4] != -1 && uParam0->f_7255[uParam0[iParam1]->f_41[iVar4]] != -1) && ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7255[uParam0[iParam1]->f_41[iVar4]]])) && ENTITY::IS_ENTITY_ON_SCREEN((*uParam0)[uParam0->f_7255[uParam0[iParam1]->f_41[iVar4]]]))
			{
				bVar3 = false;
			}
			else
			{
				iVar4++;
			}
		}
		if (bVar3)
		{
			MISC::SET_BIT(&(uParam0->f_7573[uParam0[iParam1]->f_16]), 8);
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (uParam0[iParam1]->f_41[iVar4] != -1 && uParam0->f_7255[uParam0[iParam1]->f_41[iVar4]] != -1)
				{
					iVar5 = uParam0->f_7255[uParam0[iParam1]->f_41[iVar4]];
					if (iVar5 >= 0 && iVar5 < 125)
					{
						MISC::SET_BIT(&(uParam0->f_7573[uParam0[uParam0->f_7255[uParam0[iParam1]->f_41[iVar4]]]->f_16]), 8);
					}
					func_451(uParam0, uParam0->f_7255[uParam0[iParam1]->f_41[iVar4]]);
				}
				iVar4++;
			}
			func_451(uParam0, iParam1);
			return;
		}
	}
	func_353(uParam2);
	if ((uParam0[iParam1]->f_8 != -1 && ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam1])) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iParam1], 0))
	{
		if (uParam0[iParam1]->f_40 == -1)
		{
			*uParam2 = { func_379(uParam0[iParam1]->f_16) };
			uParam2->f_3 = func_377(uParam0[iParam1]->f_16);
			if (func_250(uParam0, uParam0[iParam1], uParam0[iParam1]->f_16))
			{
				uParam0->f_7421[iParam1] = 1;
			}
			if (func_143(uParam0, uParam2, uParam0[iParam1], uParam0[iParam1]->f_16))
			{
				uParam0->f_7421[iParam1] = 1;
				uParam0->f_7553++;
			}
		}
		func_127(uParam0[iParam1]);
	}
	func_123(uParam0, uParam0[iParam1]);
	func_110(uParam0[iParam1], &(uParam0->f_7740), -1);
}

void func_110(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	else
	{
		iVar0 = func_454(uParam0->f_16, 0);
	}
	if (!func_106(iVar0, -1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
	{
		return;
	}
	bVar1 = false;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	Var5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 0) };
	fVar8 = SYSTEM::VDIST2(Var2, Var5);
	if (iVar0 == 10 || iVar0 == 62)
	{
		if (fVar8 > Global_262145.f_23644)
		{
			bVar1 = true;
		}
	}
	else if (iVar0 == 14)
	{
		if (fVar8 > Global_262145.f_23646)
		{
			bVar1 = true;
		}
	}
	else if (iVar0 == 17)
	{
		if (fVar8 > Global_262145.f_23645)
		{
			bVar1 = true;
		}
	}
	else if (((((iVar0 == 54 || iVar0 == 55) || iVar0 == 60) || iVar0 == 56) || iVar0 == 53) || iVar0 == 58)
	{
		if (fVar8 > Global_262145.f_23647)
		{
			bVar1 = true;
		}
	}
	else if (iVar0 == 1)
	{
		if (fVar8 > Global_262145.f_23648)
		{
			bVar1 = true;
		}
	}
	else if (fVar8 > Global_262145.f_23643)
	{
		bVar1 = true;
	}
	if (iVar0 == 20)
	{
		iVar9 = -1;
		if (MISC::IS_BIT_SET(Global_1316808, 0))
		{
			iVar9 = func_122(uParam0, 0);
		}
		else if (MISC::IS_BIT_SET(Global_1316808, 1))
		{
			iVar9 = func_122(uParam0, 1);
		}
		else if (MISC::IS_BIT_SET(Global_1316808, 16))
		{
			iVar9 = func_122(uParam0, 16);
		}
		else if (MISC::IS_BIT_SET(Global_1316808, 4))
		{
			if (!func_5(&(uParam0->f_30)) || func_3(&(uParam0->f_30), func_96(iVar0, 2), 0))
			{
				iVar9 = func_122(uParam0, 4);
				func_95(&(uParam0->f_30), 0, 0);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1316808, 17))
		{
			iVar9 = func_122(uParam0, 17);
		}
		else if (MISC::IS_BIT_SET(Global_1316808, 2))
		{
			iVar9 = func_122(uParam0, 2);
		}
		else if (MISC::IS_BIT_SET(Global_1316808, 18))
		{
			iVar9 = func_122(uParam0, 18);
		}
		else if (MISC::IS_BIT_SET(Global_1316808, 15))
		{
			iVar9 = func_122(uParam0, 15);
		}
		else if (MISC::IS_BIT_SET(Global_1316808, 19))
		{
			iVar9 = func_122(uParam0, 19);
		}
		if (iVar9 != -1 && func_26(uParam0, iVar9, uParam1, iParam2, 26))
		{
			func_121(uParam0, iVar9, iVar0);
			func_93(uParam0, iVar9);
		}
		return;
	}
	else if (iVar0 == 14)
	{
		if (MISC::IS_BIT_SET(Global_1316806, 13))
		{
			if (((((!func_104(uParam0, 22) && !func_104(uParam0, 23)) && !func_104(uParam0, 24)) && !func_104(uParam0, 25)) && !func_104(uParam0, 26)) && !func_104(uParam0, 27))
			{
				if (func_26(uParam0, 13, uParam1, iParam2, 26))
				{
					func_100(uParam0, 13);
					MISC::CLEAR_BIT(&Global_1316806, 13);
					func_121(uParam0, 13, iVar0);
					func_93(uParam0, 13);
				}
				return;
			}
		}
	}
	bVar10 = false;
	if (iVar0 == 10 || iVar0 == 62)
	{
		Var11 = { -1604.179f, -3012.615f, -77.44925f };
		Var14 = { 2.2755f, 2.72695f, 1.34715f };
		bVar10 = ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var11, Var14, 0, 1, 0);
		if (func_104(uParam0, 21) && !bVar10)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var11, Var14 * Vector(1.5f, 1.5f, 1.5f), 0, 1, 0))
			{
				func_93(uParam0, 21);
			}
		}
	}
	else if (iVar0 == 34)
	{
		Var17 = { -1611.596f, -3009.946f, -79.006f };
		Var20 = { 0.8f, 0.75f, 2f };
		bVar10 = ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var17, Var20, 0, 1, 0);
		if (func_104(uParam0, 21) && !bVar10)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var17, Var20 * Vector(1.5f, 1.5f, 1.5f), 0, 1, 0))
			{
				func_93(uParam0, 21);
			}
		}
	}
	else
	{
		Var23 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		Var26 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 0) };
		bVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var23, Var26, 1) < 2f;
		if (bVar10)
		{
			if (MISC::ABSF((Var23.z - Var26.z)) > 1f)
			{
				bVar10 = false;
			}
		}
		if (bVar10)
		{
			iVar29 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
			iVar30 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(*uParam0);
			if (iVar29 != iVar30)
			{
				bVar10 = false;
			}
		}
		if (func_104(uParam0, 21) && !bVar10)
		{
			if (!func_120(PLAYER::PLAYER_PED_ID(), *uParam0, 1) < (2f * 1.5f))
			{
				func_93(uParam0, 21);
			}
		}
	}
	if (func_104(uParam0, 1) && !bVar10)
	{
		func_93(uParam0, 1);
	}
	if (func_104(uParam0, 3) && bVar10)
	{
		func_93(uParam0, 3);
	}
	if (!func_104(uParam0, 21) && ((!func_104(uParam0, 20) && func_106(iVar0, 0)) || func_106(iVar0, 1)))
	{
		if (!func_104(uParam0, 20) && func_106(iVar0, 0))
		{
			if (func_3(&(uParam0->f_30), func_96(iVar0, 0), 0) && bVar10)
			{
				func_100(uParam0, 0);
			}
			else if (func_3(&(uParam0->f_30), func_96(iVar0, 0) + 30000, 0) && func_104(uParam0, 0))
			{
				func_95(&(uParam0->f_30), 0, 0);
				func_93(uParam0, 0);
			}
		}
		else if (func_106(iVar0, 1) && !func_103(uParam0, 1))
		{
			if (func_3(&(uParam0->f_30), func_96(iVar0, 1), 0) && bVar10)
			{
				func_100(uParam0, 1);
			}
			else if (func_3(&(uParam0->f_30), func_96(iVar0, 1) + 30000, 0) && func_104(uParam0, 1))
			{
				func_95(&(uParam0->f_30), 0, 0);
				func_93(uParam0, 1);
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					if (func_106(iVar0, 2) && !func_103(uParam0, 2))
					{
						if (func_3(&(uParam0->f_30), func_96(iVar0, 2), 0) && bVar10)
						{
							func_100(uParam0, 2);
						}
						else if (func_3(&(uParam0->f_30), func_96(iVar0, 2) + 30000, 0) && func_104(uParam0, 2))
						{
							func_95(&(uParam0->f_30), 0, 0);
							func_93(uParam0, 2);
						}
					}
					break;
				
				case 1:
					if (func_106(iVar0, 8) && !func_103(uParam0, 8))
					{
						if (func_3(&(uParam0->f_30), func_96(iVar0, 8), 0) && bVar10)
						{
							func_100(uParam0, 8);
						}
						else if (func_3(&(uParam0->f_30), func_96(iVar0, 8) + 30000, 0) && func_104(uParam0, 8))
						{
							func_95(&(uParam0->f_30), 0, 0);
							func_93(uParam0, 8);
						}
					}
					break;
				
				case 2:
					if (func_106(iVar0, 9) && !func_103(uParam0, 9))
					{
						if (func_3(&(uParam0->f_30), func_96(iVar0, 9), 0) && bVar10)
						{
							func_100(uParam0, 9);
						}
						else if (func_3(&(uParam0->f_30), func_96(iVar0, 9) + 30000, 0) && func_104(uParam0, 9))
						{
							func_95(&(uParam0->f_30), 0, 0);
							func_93(uParam0, 9);
						}
					}
					break;
				
				case 3:
					if (func_106(iVar0, 10) && !func_103(uParam0, 10))
					{
						if (func_3(&(uParam0->f_30), func_96(iVar0, 10), 0) && bVar10)
						{
							func_100(uParam0, 10);
						}
						else if (func_3(&(uParam0->f_30), func_96(iVar0, 10) + 30000, 0) && func_104(uParam0, 10))
						{
							func_95(&(uParam0->f_30), 0, 0);
							func_93(uParam0, 10);
						}
					}
					break;
				}
		}
	}
	else
	{
		if ((func_106(iVar0, 2) || func_106(iVar0, 6)) || (func_106(iVar0, 7) && !bVar1))
		{
			if ((!func_103(uParam0, 2) && !func_103(uParam0, 6)) && !func_103(uParam0, 7))
			{
				iVar31 = SYSTEM::FLOOR(func_478(func_6()));
				iVar32 = func_114(iVar31);
				bVar33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == false;
				if ((((iVar32 >= 125 && func_106(iVar0, 6)) && bVar33) && Global_1316786 == 4) && !func_487(func_6()))
				{
					if (func_3(&(uParam0->f_30), func_96(iVar0, 7), 0) && bVar10)
					{
						func_100(uParam0, 6);
					}
					else if (func_3(&(uParam0->f_30), func_96(iVar0, 7) + 20000, 0) && func_104(uParam0, 6))
					{
						func_95(&(uParam0->f_30), 0, 0);
						func_93(uParam0, 6);
					}
				}
				else if (((iVar32 <= 50 && func_106(iVar0, 7)) && bVar33) && Global_1316786 == 4)
				{
					if (func_3(&(uParam0->f_30), func_96(iVar0, 7), 0) && bVar10)
					{
						func_100(uParam0, 7);
					}
					else if (func_3(&(uParam0->f_30), func_96(iVar0, 7) + 20000, 0) && func_104(uParam0, 7))
					{
						func_95(&(uParam0->f_30), 0, 0);
						func_93(uParam0, 7);
					}
				}
				else if (func_106(iVar0, 2))
				{
					if (func_3(&(uParam0->f_30), func_96(iVar0, 2), 0) && bVar10)
					{
						func_100(uParam0, 2);
					}
					else if (func_3(&(uParam0->f_30), func_96(iVar0, 2) + 20000, 0) && func_104(uParam0, 2))
					{
						func_95(&(uParam0->f_30), 0, 0);
						func_93(uParam0, 2);
					}
				}
			}
		}
		if (func_106(iVar0, 3) && func_106(iVar0, 1))
		{
			if (func_3(&(uParam0->f_30), func_96(iVar0, 3), 0) && !bVar10)
			{
				func_100(uParam0, 3);
			}
			else if (func_3(&(uParam0->f_30), func_96(iVar0, 3) + 30000, 0) && func_104(uParam0, 3))
			{
				func_95(&(uParam0->f_30), 0, 0);
				func_93(uParam0, 3);
			}
		}
	}
	if (!bVar1)
	{
		if (func_106(iVar0, 5))
		{
			if (func_3(&(uParam0->f_30), func_96(iVar0, 5), 0) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
			{
				func_100(uParam0, 5);
			}
			else if (func_3(&(uParam0->f_30), func_96(iVar0, 5) + 30000, 0) && func_104(uParam0, 5))
			{
				func_95(&(uParam0->f_30), 0, 0);
				func_93(uParam0, 5);
			}
		}
		if ((func_106(iVar0, 8) || func_106(iVar0, 9)) || func_106(iVar0, 10))
		{
			if ((!func_103(uParam0, 8) && !func_103(uParam0, 9)) && !func_103(uParam0, 10))
			{
				if ((func_113() && func_106(iVar0, 9)) && (func_111() && func_106(iVar0, 10)))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							if (func_3(&(uParam0->f_30), func_96(iVar0, 9), 0))
							{
								func_100(uParam0, 9);
							}
							else if (func_3(&(uParam0->f_30), func_96(iVar0, 9) + 15000, 0) && func_104(uParam0, 9))
							{
								func_95(&(uParam0->f_30), 0, 0);
								func_93(uParam0, 9);
							}
							break;
						
						case 1:
							if (func_3(&(uParam0->f_30), func_96(iVar0, 10), 0))
							{
								func_100(uParam0, 10);
							}
							else if (func_3(&(uParam0->f_30), func_96(iVar0, 10) + 15000, 0) && func_104(uParam0, 10))
							{
								func_95(&(uParam0->f_30), 0, 0);
								func_93(uParam0, 10);
							}
							break;
						
						case 2:
							if (func_3(&(uParam0->f_30), func_96(iVar0, 8), 0))
							{
								func_100(uParam0, 8);
							}
							else if (func_3(&(uParam0->f_30), func_96(iVar0, 8) + 15000, 0) && func_104(uParam0, 8))
							{
								func_95(&(uParam0->f_30), 0, 0);
								func_93(uParam0, 8);
							}
							break;
					}
				}
				else if (func_113() && func_106(iVar0, 9))
				{
					if (func_107())
					{
						if (func_3(&(uParam0->f_30), func_96(iVar0, 9), 0))
						{
							func_100(uParam0, 9);
						}
						else if (func_3(&(uParam0->f_30), func_96(iVar0, 9) + 15000, 0) && func_104(uParam0, 9))
						{
							func_95(&(uParam0->f_30), 0, 0);
							func_93(uParam0, 9);
						}
					}
					else if (func_3(&(uParam0->f_30), func_96(iVar0, 8), 0))
					{
						func_100(uParam0, 8);
					}
					else if (func_3(&(uParam0->f_30), func_96(iVar0, 8) + 15000, 0) && func_104(uParam0, 8))
					{
						func_95(&(uParam0->f_30), 0, 0);
						func_93(uParam0, 8);
					}
				}
				else if (func_111() && func_106(iVar0, 10))
				{
					if (func_107())
					{
						if (func_3(&(uParam0->f_30), func_96(iVar0, 10), 0))
						{
							func_100(uParam0, 10);
						}
						else if (func_3(&(uParam0->f_30), func_96(iVar0, 10) + 15000, 0) && func_104(uParam0, 10))
						{
							func_95(&(uParam0->f_30), 0, 0);
							func_93(uParam0, 10);
						}
					}
					else if (func_3(&(uParam0->f_30), func_96(iVar0, 8), 0))
					{
						func_100(uParam0, 8);
					}
					else if (func_3(&(uParam0->f_30), func_96(iVar0, 8) + 15000, 0) && func_104(uParam0, 8))
					{
						func_95(&(uParam0->f_30), 0, 0);
						func_93(uParam0, 8);
					}
				}
				else if (func_3(&(uParam0->f_30), func_96(iVar0, 8), 0))
				{
					func_100(uParam0, 8);
				}
				else if (func_3(&(uParam0->f_30), func_96(iVar0, 8) + 15000, 0) && func_104(uParam0, 8))
				{
					func_95(&(uParam0->f_30), 0, 0);
					func_93(uParam0, 8);
				}
			}
		}
		if (func_106(iVar0, 12))
		{
			if (Global_1316786 == 4 && Global_1316800 > 50f)
			{
				iVar34 = 12;
				if (Global_1316784 != -1)
				{
					iVar34 = 11;
				}
				if ((!func_103(uParam0, iVar34) && !func_103(uParam0, 12)) && !func_103(uParam0, 8))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
					{
						if (func_3(&(uParam0->f_30), func_96(14, 12), 0))
						{
							func_100(uParam0, 12);
						}
						else if (func_3(&(uParam0->f_30), func_96(14, 12) + 15000, 0) && func_104(uParam0, 12))
						{
							func_95(&(uParam0->f_30), 0, 0);
							func_93(uParam0, 12);
						}
					}
					else if (func_3(&(uParam0->f_30), func_96(14, iVar34), 0))
					{
						func_100(uParam0, iVar34);
					}
					else if (func_3(&(uParam0->f_30), func_96(14, iVar34) + 15000, 0) && func_104(uParam0, iVar34))
					{
						func_95(&(uParam0->f_30), 0, 0);
						func_93(uParam0, iVar34);
					}
				}
			}
		}
		if (func_106(iVar0, 13))
		{
			if (((((!func_104(uParam0, 22) && !func_104(uParam0, 23)) && !func_104(uParam0, 24)) && !func_104(uParam0, 25)) && !func_104(uParam0, 26)) && !func_104(uParam0, 27))
			{
				if (!func_103(uParam0, 13))
				{
					if (Global_1316781 && func_102())
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1588.832f, -3013.474f, -78.7061f, 3f, 6f, 1.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1605.563f, -3006.104f, -76.575f, 2f, 2f, 3.5f, 0, 1, 0))
						{
							if (!func_104(uParam0, 13))
							{
								func_100(uParam0, 13);
								func_98(func_6(), 13, 0);
							}
						}
						else if (func_3(&(uParam0->f_30), func_96(iVar0, 13) + 15000, 0) && func_104(uParam0, 13))
						{
							func_95(&(uParam0->f_30), 0, 0);
							func_93(uParam0, 13);
						}
					}
				}
			}
		}
		if (func_106(iVar0, 4))
		{
			if (!func_103(uParam0, 4) || iVar0 == 1)
			{
				if (func_3(&(uParam0->f_30), func_96(iVar0, 4), 0))
				{
					bVar35 = true;
					Var36 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					Var39 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 0) };
					if (bVar35)
					{
						if (MISC::ABSF((Var36.z - Var39.z)) > 1f)
						{
							bVar35 = false;
						}
					}
					if (bVar35)
					{
						iVar42 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar43 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(*uParam0);
						if (iVar42 != iVar43)
						{
							bVar35 = false;
						}
					}
					if (bVar35)
					{
						func_100(uParam0, 4);
					}
				}
				else if (func_3(&(uParam0->f_30), func_96(iVar0, 4) + 15000, 0) && func_104(uParam0, 4))
				{
					func_95(&(uParam0->f_30), 0, 0);
					func_93(uParam0, 4);
				}
			}
		}
		if (func_106(iVar0, 16) && MISC::IS_BIT_SET(Global_1316806, 16))
		{
			if (func_3(&(uParam0->f_30), func_96(iVar0, 16), 0))
			{
				if (bVar10)
				{
					func_100(uParam0, 16);
					MISC::CLEAR_BIT(&Global_1316806, 16);
				}
			}
			else if (func_3(&(uParam0->f_30), func_96(iVar0, 16) + 15000, 0) && func_104(uParam0, 16))
			{
				func_95(&(uParam0->f_30), 0, 0);
				func_93(uParam0, 16);
			}
		}
		if (iVar0 != 1)
		{
			if (func_106(iVar0, 17) && MISC::IS_BIT_SET(Global_1316806, 17))
			{
				if (func_3(&(uParam0->f_30), func_96(iVar0, 17), 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(*uParam0, 0)) < 100f)
					{
						func_100(uParam0, 17);
						MISC::CLEAR_BIT(&Global_1316806, 17);
					}
				}
				else if (func_3(&(uParam0->f_30), func_96(iVar0, 17) + 15000, 0) && func_104(uParam0, 17))
				{
					func_95(&(uParam0->f_30), 0, 0);
					func_93(uParam0, 17);
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		if (func_106(iVar0, 17))
		{
			if ((MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2, 3) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2, 4)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(*uParam0, 0)) < 8f)
			{
				if (!func_104(uParam0, 17))
				{
					func_100(uParam0, 17);
				}
			}
			else
			{
				func_93(uParam0, 17);
			}
		}
	}
	iVar44 = 0;
	while (iVar44 < 20)
	{
		iVar45 = iVar44;
		if (func_106(iVar0, iVar45))
		{
			if (func_104(uParam0, iVar45))
			{
				bVar46 = true;
				if (iVar0 == 14)
				{
					if (iVar45 != 13 && func_104(uParam0, 13))
					{
						bVar46 = false;
					}
				}
				if (bVar46)
				{
					if (func_5(&Global_1316809) && !func_3(&Global_1316809, 1000, 0))
					{
						bVar46 = false;
					}
				}
				if (bVar46)
				{
					if (iVar45 == 0 || iVar45 == 1)
					{
						if (func_5(&Global_1316811) && !func_3(&Global_1316811, 3000, 0))
						{
							bVar46 = false;
						}
					}
				}
				if (bVar46 && func_26(uParam0, iVar45, uParam1, iParam2, 26))
				{
					func_121(uParam0, iVar45, iVar0);
				}
			}
		}
		iVar44++;
	}
}

int func_111()
{
	iVar0 = func_6();
	if (((iVar0 != func_34() && func_112(iVar0)) && Global_2425662[iVar0].f_310.f_8 == iVar0) && func_99(iVar0) == 0)
	{
		return 1;
	}
	return 0;
}

bool func_112(int iParam0)
{
	return Global_1590535[iParam0].f_274.f_322 != 0;
}

int func_113()
{
	return 1;
}

int func_114(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = SYSTEM::FLOOR(func_115());
	}
	if (iParam0 >= 0 && iParam0 <= 20)
	{
		iVar0 = 50;
	}
	if (iParam0 >= 20 && iParam0 <= 40)
	{
		iVar0 = 70;
	}
	if (iParam0 >= 40 && iParam0 <= 60)
	{
		iVar0 = 90;
	}
	if (iParam0 >= 60 && iParam0 <= 80)
	{
		iVar0 = 110;
	}
	if (iParam0 >= 80 && iParam0 <= 90)
	{
		iVar0 = 125;
	}
	if (iParam0 >= 90)
	{
		iVar0 = 125;
	}
	return iVar0;
}

float func_115()
{
	iVar0 = func_117(7210, -1, 0);
	return func_116(iVar0);
}

float func_116(int iParam0)
{
	return ((100f * SYSTEM::TO_FLOAT(iParam0)) / SYSTEM::TO_FLOAT(1000));
}

int func_117(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_118(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_119();
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

int func_119()
{
	return Global_1312745;
}

float func_120(int iParam0, int iParam1, int iParam2)
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

void func_121(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_32[1] = uParam0->f_32[0];
	uParam0->f_32[0] = iParam1;
	func_95(&(uParam0->f_30), 0, 0);
	func_93(uParam0, iParam1);
	func_95(&Global_1316809, 0, 0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (func_104(uParam0, iVar0))
		{
			func_93(uParam0, iVar0);
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		func_100(uParam0, 20);
		func_100(uParam0, 21);
		func_95(&Global_1316811, 0, 0);
	}
	else if (iParam1 == 1)
	{
		func_100(uParam0, 21);
		func_95(&Global_1316811, 0, 0);
	}
	else if (iParam1 == 3)
	{
		func_93(uParam0, 21);
	}
	if (Global_1316784 == 2 && (iParam2 == 10 || iParam2 == 62))
	{
		Global_1316785 = iParam2;
	}
}

int func_122(var uParam0, int iParam1)
{
	func_100(uParam0, iParam1);
	MISC::CLEAR_BIT(&Global_1316808, iParam1);
	return iParam1;
}

void func_123(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
	{
		return;
	}
	if (uParam1->f_12 != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam1->f_12]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam1->f_12], 0))
		{
			if (uParam1->f_11 != -1)
			{
				if (!PED::IS_PED_HEADTRACKING_ENTITY(*uParam1, (*uParam0)[uParam1->f_12]))
				{
					TASK::TASK_LOOK_AT_ENTITY(*uParam1, (*uParam0)[uParam1->f_12], -1, 2048, 4);
				}
			}
		}
	}
	if (!func_126(uParam1->f_13))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(*uParam1, -880529684) != 1)
		{
			TASK::TASK_LOOK_AT_COORD(*uParam1, uParam1->f_13, -1, 2048, 4);
		}
	}
	if (func_111() || uParam1->f_18)
	{
		if (uParam1->f_6 == 86)
		{
			if (PED::GET_PED_NEARBY_PEDS(*uParam1, &uVar1, -1) > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar1[0]) && !ENTITY::IS_ENTITY_DEAD(uVar1[0], 0))
				{
					uVar0 = uVar1[0];
				}
			}
		}
		else if (func_111())
		{
			uVar0 = PLAYER::GET_PLAYER_PED(func_6());
		}
		else
		{
			uVar0 = PLAYER::PLAYER_PED_ID();
		}
		if (ENTITY::DOES_ENTITY_EXIST(uVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			bVar4 = uParam1->f_18;
			if (func_125(*uParam1, iVar0) < 9f && func_124(iVar0, (ENTITY::GET_ENTITY_HEADING(*uParam1) + 180f), 180f))
			{
				if (!func_5(&(uParam1->f_56)))
				{
					func_4(&(uParam1->f_56), 0, 0);
					uParam1->f_55 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0;
				}
				if (!func_3(&(uParam1->f_56), 2500, 0) && uParam1->f_55)
				{
					bVar4 = true;
				}
				else
				{
					uParam1->f_55 = 0;
				}
			}
			else if (func_125(*uParam1, iVar0) > 16f)
			{
				bVar4 = false;
				if (func_5(&(uParam1->f_56)))
				{
					uParam1->f_55 = 0;
					func_2(&(uParam1->f_56));
				}
			}
			if (((((!bVar4 && uParam1->f_18) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && func_125(*uParam1, PLAYER::PLAYER_PED_ID()) < 9f) && func_124(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEADING(*uParam1) + 180f), 180f))
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
				bVar4 = true;
			}
			if (bVar4)
			{
				if (!PED::IS_PED_HEADTRACKING_ENTITY(*uParam1, iVar0))
				{
					TASK::TASK_LOOK_AT_ENTITY(*uParam1, iVar0, -1, 2048, 3);
					uParam1->f_20 = 1;
				}
			}
			else if (PED::IS_PED_HEADTRACKING_ENTITY(*uParam1, iVar0))
			{
				TASK::TASK_CLEAR_LOOK_AT(*uParam1);
				uParam1->f_20 = 0;
			}
		}
	}
}

int func_124(var uParam0, float fParam1, float fParam2)
{
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (fVar0 > fVar1)
		{
			if (ENTITY::GET_ENTITY_HEADING(uParam0) < fVar0 && ENTITY::GET_ENTITY_HEADING(uParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (ENTITY::GET_ENTITY_HEADING(uParam0) < fVar0 || ENTITY::GET_ENTITY_HEADING(uParam0) > fVar1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_125(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return SYSTEM::VDIST2(Var0, Var3);
}

int func_126(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_127(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0) && uParam0->f_6 != -1)
		{
			if (func_142(uParam0) < 100)
			{
				if (uParam0->f_53 <= 0)
				{
					if (uParam0->f_39 == 14)
					{
						func_136(uParam0);
					}
					else if (func_10(uParam0->f_6))
					{
						func_135(uParam0);
					}
					else if (func_134(uParam0->f_6) || func_14(uParam0->f_39))
					{
						func_130(uParam0);
					}
					else if (func_450(func_454(uParam0->f_16, 0)))
					{
						func_128(uParam0, 1);
					}
				}
				else
				{
					uParam0->f_53 = (uParam0->f_53 - 1);
				}
			}
		}
	}
}

void func_128(var uParam0, int iParam1)
{
	sVar2 = "facials@gen_male@base";
	STREAMING::REQUEST_ANIM_DICT(sVar2);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		switch (iParam1)
		{
			case 0:
			case 1:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar0)
				{
					case 0:
						sVar1 = "mood_dancing_low_1";
						break;
					
					case 1:
						sVar1 = "mood_dancing_low_2";
						break;
					
					case 2:
						sVar1 = "mood_dancing_low_3";
						break;
				}
				break;
			
			case 2:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar0)
				{
					case 0:
						sVar1 = "mood_dancing_medium_1";
						break;
					
					case 1:
						sVar1 = "mood_dancing_medium_2";
						break;
					
					case 2:
						sVar1 = "mood_dancing_medium_3";
						break;
				}
				break;
			
			case 3:
			case 4:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				switch (iVar0)
				{
					case 0:
						sVar1 = "mood_dancing_high_1";
						break;
					
					case 1:
						sVar1 = "mood_dancing_high_2";
						break;
				}
				break;
		}
		func_129(uParam0, sVar2, sVar1, 1);
	}
}

void func_129(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		PED::_0x5687C7F05B39E401(*uParam0, sParam1);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, sParam2, 0);
	}
	else
	{
		TASK::TASK_PLAY_ANIM(*uParam0, sParam1, sParam2, 1090519040, -1056964608, -1, 33, 0, 0, 0, 0);
	}
	uParam0->f_52 = MISC::GET_GAME_TIMER();
	uParam0->f_51 = SYSTEM::FLOOR((ENTITY::GET_ANIM_DURATION(sParam1, sParam2) * 1000f));
}

void func_130(var uParam0)
{
	if (func_133(uParam0->f_54) == 1)
	{
		if (uParam0->f_6 == 38)
		{
			if (func_132(uParam0->f_54) == 9 && func_131(uParam0->f_54) == 1)
			{
				func_129(uParam0, "ANIM@AMB@NIGHTCLUB@DANCERS@CrowdDance_Single_Props@Low_Intensity", "LI_Dance_Prop_09_v1_Male^3_Face", 0);
				return;
			}
			else if (func_132(uParam0->f_54) == 13 && func_131(uParam0->f_54) == 2)
			{
				func_129(uParam0, "ANIM@AMB@NIGHTCLUB@DANCERS@CrowdDance_Single_Props@Low_Intensity", "LI_Dance_Prop_13_v2_Male^3_Face", 0);
				return;
			}
		}
		else if ((uParam0->f_6 == 40 && func_132(uParam0->f_54) == 13) && func_131(uParam0->f_54) == 2)
		{
			func_129(uParam0, "ANIM@AMB@NIGHTCLUB@DANCERS@CrowdDance_Single_Props@Low_Intensity", "LI_Dance_Prop_13_v2_Male^5_Face", 0);
			return;
		}
		else if ((uParam0->f_6 == 41 && func_132(uParam0->f_54) == 13) && func_131(uParam0->f_54) == 2)
		{
			func_129(uParam0, "ANIM@AMB@NIGHTCLUB@DANCERS@CrowdDance_Single_Props@Low_Intensity", "LI_Dance_Prop_13_v2_Male^6_Face", 0);
			return;
		}
	}
	func_128(uParam0, Global_1316767);
}

int func_131(int iParam0)
{
	return ((iParam0 % 4) / 2) + 1;
}

int func_132(int iParam0)
{
	return (iParam0 / 100);
}

int func_133(int iParam0)
{
	return ((iParam0 % 20) / 4);
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
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
		case 22:
		case 23:
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			return 1;
		
		default:
	}
	return 0;
}

void func_135(var uParam0)
{
	Var0 = { func_18(uParam0->f_6, uParam0->f_10) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		StringConCat(&Var0, "_face", 64);
		sVar16 = func_17(uParam0->f_6, uParam0->f_10);
		func_129(uParam0, sVar16, &Var0, 0);
	}
}

void func_136(var uParam0)
{
	Var0 = 2;
	Var0.f_1 = 1;
	Var0.f_3 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_6 = -1;
	Var0.f_7 = 4;
	Var0.f_7.f_1.f_9 = 1082130432;
	Var0.f_7.f_1.f_10 = -1065353216;
	Var0.f_7.f_1.f_12 = 2;
	Var0.f_7.f_1.f_12.f_1.f_11 = 1073741824;
	Var0.f_7.f_1.f_12.f_1.f_12 = 1073741824;
	Var0.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_7.f_1.f_41 = 2;
	Var0.f_7.f_1.f_41.f_1 = 1065353216;
	Var0.f_7.f_1.f_41.f_1.f_11 = -1;
	Var0.f_7.f_1.f_41.f_1.f_13 = 1065353216;
	Var0.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
	Var0.f_7.f_1.f_68 = 1;
	Var0.f_7.f_1.f_68.f_1 = 1073741824;
	Var0.f_7.f_1.f_68.f_1.f_1 = 1073741824;
	Var0.f_7.f_1.f_68.f_1.f_3 = -1082130432;
	Var0.f_7.f_1.f_79.f_9 = 1082130432;
	Var0.f_7.f_1.f_79.f_10 = -1065353216;
	Var0.f_7.f_1.f_79.f_12 = 2;
	Var0.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_41 = 2;
	Var0.f_7.f_1.f_79.f_41.f_1 = 1065353216;
	Var0.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
	Var0.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
	Var0.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
	Var0.f_7.f_1.f_79.f_68 = 1;
	Var0.f_7.f_1.f_79.f_68.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
	Var0.f_7.f_1.f_79.f_79.f_9 = 1082130432;
	Var0.f_7.f_1.f_79.f_79.f_10 = -1065353216;
	Var0.f_7.f_1.f_79.f_79.f_12 = 2;
	Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_41 = 2;
	Var0.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
	Var0.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
	Var0.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var0.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var0.f_7.f_1.f_79.f_79.f_68 = 1;
	Var0.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var0.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
	Var0.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var0.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
	Var0.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var0.f_324 = 2;
	Var0.f_324.f_1.f_18 = 1082130432;
	Var0.f_324.f_1.f_19 = -1065353216;
	Var0.f_324.f_1.f_20 = 1;
	Var0.f_324.f_1.f_21 = 2;
	Var0.f_324.f_1.f_21.f_1 = 1065353216;
	Var0.f_324.f_1.f_21.f_1.f_11 = -1;
	Var0.f_324.f_1.f_21.f_1.f_13 = 1065353216;
	Var0.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
	Var0.f_324.f_1.f_48.f_18 = 1082130432;
	Var0.f_324.f_1.f_48.f_19 = -1065353216;
	Var0.f_324.f_1.f_48.f_20 = 1;
	Var0.f_324.f_1.f_48.f_21 = 2;
	Var0.f_324.f_1.f_48.f_21.f_1 = 1065353216;
	Var0.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
	Var0.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
	Var0.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
	switch (uParam0->f_6)
	{
		case 108:
			func_141(0, uParam0->f_10, &Var0);
			StringConCat(&(Var0.f_324[0].f_1), "_face", 64);
			func_129(uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1), 0);
			break;
		
		case 107:
			func_140(0, uParam0->f_10, &Var0);
			StringConCat(&(Var0.f_324[0].f_1), "_face", 64);
			func_129(uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1), 0);
			break;
		
		case 105:
			func_128(uParam0, Global_1316767);
			break;
		
		case 106:
			if ((uParam0->f_10 == 8 || uParam0->f_10 == 10) || uParam0->f_10 == 12)
			{
				func_139(0, uParam0->f_10, &Var0);
				StringConCat(&(Var0.f_324[0].f_1), "_face", 64);
				func_129(uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1), 0);
			}
			else
			{
				func_128(uParam0, Global_1316767);
			}
			break;
		
		case 110:
			if ((uParam0->f_10 == 2 || uParam0->f_10 == 3) || uParam0->f_10 == 9)
			{
				func_138(0, uParam0->f_10, &Var0);
				StringConCat(&(Var0.f_324[0].f_1), "_face", 64);
				func_129(uParam0, Var0.f_324[0], &(Var0.f_324[0].f_1), 0);
			}
			else
			{
				func_128(uParam0, Global_1316767);
			}
			break;
		
		case 111:
			func_137(uParam0, 0);
			break;
		
		case 109:
		case 112:
			func_137(uParam0, 1);
			break;
		
		case 113:
			func_137(uParam0, 2);
			break;
		
		default:
			func_128(uParam0, Global_1316767);
			break;
	}
}

void func_137(var uParam0, int iParam1)
{
	STREAMING::REQUEST_ANIM_DICT("facials@gen_male@base");
	if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_male@base"))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "mood_drunk_1";
				break;
			
			case 1:
				sVar0 = "mood_stressed_1";
				break;
			
			case 2:
				sVar0 = "mood_happy_1";
				break;
		}
		func_129(uParam0, "facials@gen_male@base", sVar0, 0);
	}
}

void func_138(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@LAZLOW@LO_BAR@";
			uParam2->f_7[0] = "ANIM@AMB@NIGHTCLUB@LAZLOW@LO_BAR@";
			uParam2->f_7[1] = "ANIM@AMB@NIGHTCLUB@LAZLOW@LO_BAR@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_base_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_base_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_base_stool";
					break;
				
				case 1:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_dlg_1thing4certian_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_dlg_1thing4certian_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_dlg_1thing4certian_stool";
					break;
				
				case 2:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_dlg_crying_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_dlg_crying_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_dlg_crying_stool";
					break;
				
				case 3:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_dlg_drunkgarbles_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_dlg_drunkgarbles_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_dlg_drunkgarbles_stool";
					break;
				
				case 4:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_dlg_havingweirdone_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_dlg_havingweirdone_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_dlg_havingweirdone_stool";
					break;
				
				case 5:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_dlg_leavemealone_l_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_dlg_leavemealone_l_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_dlg_leavemealone_l_stool";
					break;
				
				case 6:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_dlg_leavemealone_r_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_dlg_leavemealone_r_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_dlg_leavemealone_r_stool";
					break;
				
				case 7:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_dlg_millyogatwerps_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_dlg_millyogatwerps_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_dlg_millyogatwerps_stool";
					break;
				
				case 8:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_dlg_ughfuck_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_dlg_ughfuck_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_dlg_ughfuck_stool";
					break;
				
				case 9:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_drink_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_drink_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_drink_stool";
					break;
				
				case 10:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_turnovershoulder_l_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_turnovershoulder_l_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_turnovershoulder_l_stool";
					break;
				
				case 11:
					StringCopy(&(uParam2->f_324[0].f_1), "lowbar_turnovershoulder_r_laz", 64);
					uParam2->f_7[0].f_1 = "lowbar_turnovershoulder_r_p_ex_tumbler_01_s";
					uParam2->f_7[1].f_1 = "lowbar_turnovershoulder_r_stool";
					break;
			}
			break;
	}
}

void func_139(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "anim@amb@nightclub@lazlow@hi_railing@";
			uParam2->f_7[0] = "anim@amb@nightclub@lazlow@hi_railing@";
			uParam2->f_7[1] = "anim@amb@nightclub@lazlow@hi_railing@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_06_LI_MI_Base_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_06_LI_MI_Base_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_06_LI_MI_Base_glowstick_r";
					break;
				
				case 1:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_06_LI_MI_Base_v2_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_06_LI_MI_Base_v2_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_06_LI_MI_Base_v2_glowstick_r";
					break;
				
				case 2:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_13_LI_MI_LookAround_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_13_LI_MI_LookAround_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_13_LI_MI_LookAround_glowstick_r";
					break;
				
				case 3:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_09_LI_MI_SmellThat_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_09_LI_MI_SmellThat_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_09_LI_MI_SmellThat_glowstick_r";
					break;
				
				case 4:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_12_LI_MI_Shimmy_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_12_LI_MI_Shimmy_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_12_LI_MI_Shimmy_glowstick_r";
					break;
				
				case 5:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_10_LI_MI_FishingPole_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_10_LI_MI_FishingPole_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_10_LI_MI_FishingPole_glowstick_r";
					break;
				
				case 6:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_10_LI_MI_FishingPole_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_10_LI_MI_FishingPole_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_10_LI_MI_FishingPole_glowstick_r";
					break;
				
				case 7:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_07_LI_MI_to_MI_HI_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_07_LI_MI_to_MI_HI_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_07_LI_MI_to_MI_HI_glowstick_r";
					break;
				
				case 8:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_13_MI_HI_SexualGriding_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_13_MI_HI_SexualGriding_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_13_MI_HI_SexualGriding_glowstick_r";
					break;
				
				case 9:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_06_MI_HI_Base_v2_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_06_MI_HI_Base_v2_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_06_MI_HI_Base_v2_glowstick_r";
					break;
				
				case 10:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_11_MI_HI_PointingCrowd_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_11_MI_HI_PointingCrowd_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_11_MI_HI_PointingCrowd_glowstick_r";
					break;
				
				case 11:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_10_MI_HI_CrotchHold_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_10_MI_HI_CrotchHold_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_10_MI_HI_CrotchHold_glowstick_r";
					break;
				
				case 12:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_09_MI_HI_BellyDancer_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_09_MI_HI_BellyDancer_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_09_MI_HI_BellyDancer_glowstick_r";
					break;
				
				case 13:
					StringCopy(&(uParam2->f_324[0].f_1), "AmbClub_12_MI_HI_BootyShake_laz", 64);
					uParam2->f_7[0].f_1 = "AmbClub_12_MI_HI_BootyShake_glowstick_l";
					uParam2->f_7[1].f_1 = "AmbClub_12_MI_HI_BootyShake_glowstick_r";
					break;
			}
			break;
	}
}

void func_140(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "anim@amb@nightclub@lazlow@hi_chair@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_06_base_laz", 64);
					break;
				
				case 1:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_06_base_v2_laz", 64);
					break;
				
				case 2:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_11_fingerbop_laz", 64);
					break;
				
				case 3:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_11_point_laz", 64);
					break;
				
				case 4:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_13_checkwatch_laz", 64);
					break;
				
				case 5:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_13_thatsme_laz", 64);
					break;
				
				case 6:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_15_shimmy_laz", 64);
					break;
				
				case 7:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_15_wave_laz", 64);
					break;
				
				case 8:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_17_crotchscratch_laz", 64);
					break;
				
				case 9:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_17_wackydance_laz", 64);
					break;
				
				case 10:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_19_gu_shimmy_laz", 64);
					break;
				
				case 11:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_25_namaste_laz", 64);
					break;
				
				case 12:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_li_13_thatsme_laz", 64);
					break;
				
				case 13:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_trans_09_li_to_mi_h_laz", 64);
					break;
				
				case 14:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_06_base_laz", 64);
					break;
				
				case 15:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_06_base_v2_laz", 64);
					break;
				
				case 16:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_11_steeringpoint_laz", 64);
					break;
				
				case 17:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_11_wavyhands_laz", 64);
					break;
				
				case 18:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_13_handsup_laz", 64);
					break;
				
				case 19:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_13_shimmy_laz", 64);
					break;
				
				case 20:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_15_hippyhop_laz", 64);
					break;
				
				case 21:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_15_namaste_laz", 64);
					break;
				
				case 22:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_17_gu_airhump_laz", 64);
					break;
				
				case 23:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_mi_17_sexualadvance_laz", 64);
					break;
				
				case 24:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_trans_07_hi_mi_to_l_laz", 64);
					break;
				
				case 25:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_hi_06_base_laz", 64);
					break;
				
				case 26:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_hi_11_fingerpoint_laz", 64);
					break;
				
				case 27:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_hi_11_handpump_laz", 64);
					break;
				
				case 28:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_hi_13_armswirl_laz", 64);
					break;
				
				case 29:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_hi_13_sexualadvance_laz", 64);
					break;
				
				case 30:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_hi_15_handsup_laz", 64);
					break;
				
				case 31:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_hi_15_throwaway_laz", 64);
					break;
				
				case 32:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_hi_17_longbase_laz", 64);
					break;
				
				case 33:
					StringCopy(&(uParam2->f_324[0].f_1), "seatedidle_hi_17_side2side_laz", 64);
					break;
			}
			break;
	}
}

void func_141(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "anim@amb@nightclub@lazlow@hi_podium@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_06_base_laz", 64);
					break;
				
				case 1:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_06_base_v2_laz", 64);
					break;
				
				case 2:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_07_fakedrop_laz", 64);
					break;
				
				case 3:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_11_bigbase_laz", 64);
					break;
				
				case 4:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_11_pointcrowd_laz", 64);
					break;
				
				case 5:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_11_takebreath_laz", 64);
					break;
				
				case 6:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_13_hipswivel_laz", 64);
					break;
				
				case 7:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_13_turnaround_laz", 64);
					break;
				
				case 8:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_15_flyingv_laz", 64);
					break;
				
				case 9:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_15_sexygrind_laz", 64);
					break;
				
				case 10:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_17_ethereal_laz", 64);
					break;
				
				case 11:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_li_17_watupcrowd_laz", 64);
					break;
				
				case 12:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_trans_07_li_to_mi_laz", 64);
					break;
				
				case 13:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_trans_07_li_to_hi_laz", 64);
					break;
				
				case 14:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_06_base_v1_laz", 64);
					break;
				
				case 15:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_06_base_v2_laz", 64);
					break;
				
				case 16:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_09_pointdj_l_laz", 64);
					break;
				
				case 17:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_11_hippain_laz", 64);
					break;
				
				case 18:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_11_pointthrust_laz", 64);
					break;
				
				case 19:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_11_simplepoint_laz", 64);
					break;
				
				case 20:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_11_takebreath_laz", 64);
					break;
				
				case 21:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_13_enticing_laz", 64);
					break;
				
				case 22:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_13_turnaround_laz", 64);
					break;
				
				case 23:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_15_robot_laz", 64);
					break;
				
				case 24:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_15_shimmy_laz", 64);
					break;
				
				case 25:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_17_crotchgrab_laz", 64);
					break;
				
				case 26:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_mi_17_teapotthrust_laz", 64);
					break;
				
				case 27:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_trans_07_mi_to_li_laz", 64);
					break;
				
				case 28:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_trans_07_mi_to_hi_laz", 64);
					break;
				
				case 29:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_06_base_laz", 64);
					break;
				
				case 30:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_06_base_v2_laz", 64);
					break;
				
				case 31:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_11_buttwiggle_b_laz", 64);
					break;
				
				case 32:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_11_buttwiggle_f_laz", 64);
					break;
				
				case 33:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_11_takebreath_laz", 64);
					break;
				
				case 34:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_11_turnaround_laz", 64);
					break;
				
				case 35:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_13_crotchgrab_laz", 64);
					break;
				
				case 36:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_13_flyingv_laz", 64);
					break;
				
				case 37:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_15_crazyrobot_laz", 64);
					break;
				
				case 38:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_15_lookaround_laz", 64);
					break;
				
				case 39:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_17_smackthat_laz", 64);
					break;
				
				case 40:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_hi_17_spiderman_laz", 64);
					break;
				
				case 41:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_trans_07_hi_to_li_laz", 64);
					break;
				
				case 42:
					StringCopy(&(uParam2->f_324[0].f_1), "danceidle_trans_07_hi_to_mi_laz", 64);
					break;
			}
			break;
	}
}

int func_142(var uParam0)
{
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - uParam0->f_52);
	iVar2 = (uParam0->f_51 - iVar1);
	return iVar2;
}

int func_143(var uParam0, var uParam1, var uParam2, int iParam3)
{
	fVar0 = 8f;
	fVar1 = -8f;
	func_249(uParam2->f_6, &iVar2, &uVar3, &uVar4);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2, 0) && uParam2->f_6 != -1)
	{
		if (uParam2->f_17)
		{
			if (func_134(uParam2->f_6))
			{
				func_240(uParam2->f_6, &(uParam1->f_5), func_248(uParam2->f_54), func_132(uParam2->f_54), func_131(uParam2->f_54), func_133(uParam2->f_54), func_247(uParam2->f_54));
				iVar5 = func_239(uParam2);
				if (iVar5 <= 1 || ((!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam2, uParam1->f_5.f_324[0], &(uParam1->f_5.f_324[0].f_1), 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam2, uParam1->f_5.f_324[0], &(uParam1->f_5.f_324[0].f_1)) >= 1f) && TASK::GET_SCRIPT_TASK_STATUS(*uParam2, -2017877118) != 0))
				{
					uParam2->f_17 = 0;
					fVar0 = 1000f;
					fVar1 = -1000f;
				}
			}
			if (func_10(uParam2->f_6))
			{
				iVar5 = func_239(uParam2);
				bVar6 = false;
				if (uParam2->f_10 == (func_238(uParam2->f_6) - 1))
				{
					if (func_470(uParam0->f_7252) > func_235(uParam0->f_7252))
					{
						bVar6 = true;
					}
				}
				if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam2->f_11) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam2->f_11) >= 1f) || bVar6)
				{
					uParam2->f_17 = 0;
					fVar0 = 1000f;
					fVar1 = -1000f;
					if (bVar6)
					{
						fVar0 = 1f;
					}
					if (uParam2->f_10 == (func_238(uParam2->f_6) - 1))
					{
						uParam0->f_7942 = 0;
					}
					uParam2->f_10++;
					if (uParam2->f_10 >= func_238(uParam2->f_6))
					{
						uParam2->f_10 = 0;
					}
					Var7 = { func_233(uParam2->f_6, uParam2->f_10) };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
					{
						func_232(uParam2);
					}
				}
			}
			if (func_231(uParam2->f_6))
			{
				iVar5 = func_239(uParam2);
				if (iVar5 <= 1 || (func_9(uParam2->f_6) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam2->f_11) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam2->f_11) >= 1f)))
				{
					uParam2->f_17 = 0;
					fVar0 = 1000f;
					fVar1 = -1000f;
					if (uParam2->f_6 == 113 && uParam2->f_10 == 8)
					{
						Global_1316792 = 1;
						func_441(iParam3, &uVar23, &uVar24, 0);
						uParam2->f_6 = uVar23;
						uParam2->f_10 = 0;
					}
					else
					{
						uParam2->f_10 = func_229(uParam2->f_6, uParam2->f_10);
					}
				}
			}
		}
		if (!func_9(uParam2->f_6))
		{
			if (!uParam2->f_17)
			{
				if (func_134(uParam2->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(func_228(iVar2, Global_1316767)))
				{
					STREAMING::REQUEST_ANIM_DICT(func_228(iVar2, Global_1316767));
				}
				if (uParam2->f_10 == -1 && !func_10(uParam2->f_6))
				{
					uParam2->f_10 = func_226(uParam2->f_6);
				}
				if ((!func_134(uParam2->f_6) || MISC::IS_STRING_NULL_OR_EMPTY(func_228(iVar2, Global_1316767))) || STREAMING::HAS_ANIM_DICT_LOADED(func_228(iVar2, Global_1316767)))
				{
					Var25 = 3;
					Var25.f_1.f_5 = 2;
					Var25.f_1.f_5.f_1 = 1;
					Var25.f_1.f_5.f_3 = 1065353216;
					Var25.f_1.f_5.f_5 = 1065353216;
					Var25.f_1.f_5.f_6 = -1;
					Var25.f_1.f_5.f_7 = 4;
					Var25.f_1.f_5.f_7.f_1.f_9 = 1082130432;
					Var25.f_1.f_5.f_7.f_1.f_10 = -1065353216;
					Var25.f_1.f_5.f_7.f_1.f_12 = 2;
					Var25.f_1.f_5.f_7.f_1.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_41 = 2;
					Var25.f_1.f_5.f_7.f_1.f_41.f_1 = 1065353216;
					Var25.f_1.f_5.f_7.f_1.f_41.f_1.f_11 = -1;
					Var25.f_1.f_5.f_7.f_1.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_5.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_5.f_7.f_1.f_68 = 1;
					Var25.f_1.f_5.f_7.f_1.f_68.f_1 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_5.f_7.f_1.f_79.f_9 = 1082130432;
					Var25.f_1.f_5.f_7.f_1.f_79.f_10 = -1065353216;
					Var25.f_1.f_5.f_7.f_1.f_79.f_12 = 2;
					Var25.f_1.f_5.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_41 = 2;
					Var25.f_1.f_5.f_7.f_1.f_79.f_41.f_1 = 1065353216;
					Var25.f_1.f_5.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
					Var25.f_1.f_5.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_5.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_5.f_7.f_1.f_79.f_68 = 1;
					Var25.f_1.f_5.f_7.f_1.f_79.f_68.f_1 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_9 = 1082130432;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_10 = -1065353216;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_12 = 2;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_41 = 2;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_68 = 1;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_5.f_324 = 2;
					Var25.f_1.f_5.f_324.f_1.f_18 = 1082130432;
					Var25.f_1.f_5.f_324.f_1.f_19 = -1065353216;
					Var25.f_1.f_5.f_324.f_1.f_20 = 1;
					Var25.f_1.f_5.f_324.f_1.f_21 = 2;
					Var25.f_1.f_5.f_324.f_1.f_21.f_1 = 1065353216;
					Var25.f_1.f_5.f_324.f_1.f_21.f_1.f_11 = -1;
					Var25.f_1.f_5.f_324.f_1.f_21.f_1.f_13 = 1065353216;
					Var25.f_1.f_5.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
					Var25.f_1.f_5.f_324.f_1.f_48.f_18 = 1082130432;
					Var25.f_1.f_5.f_324.f_1.f_48.f_19 = -1065353216;
					Var25.f_1.f_5.f_324.f_1.f_48.f_20 = 1;
					Var25.f_1.f_5.f_324.f_1.f_48.f_21 = 2;
					Var25.f_1.f_5.f_324.f_1.f_48.f_21.f_1 = 1065353216;
					Var25.f_1.f_5.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
					Var25.f_1.f_5.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
					Var25.f_1.f_5.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
					Var25.f_1.f_426 = 2;
					Var25.f_1.f_426.f_1.f_19 = 11;
					Var25.f_1.f_426.f_1.f_31 = 11;
					Var25.f_1.f_426.f_1.f_43 = 11;
					Var25.f_1.f_426.f_1.f_55 = 11;
					Var25.f_1.f_426.f_1.f_67 = 11;
					Var25.f_1.f_426.f_1.f_79.f_19 = 11;
					Var25.f_1.f_426.f_1.f_79.f_31 = 11;
					Var25.f_1.f_426.f_1.f_79.f_43 = 11;
					Var25.f_1.f_426.f_1.f_79.f_55 = 11;
					Var25.f_1.f_426.f_1.f_79.f_67 = 11;
					Var25.f_1.f_592 = 4;
					Var25.f_1.f_597 = 4;
					Var25.f_1.f_607.f_5 = 2;
					Var25.f_1.f_607.f_5.f_1 = 1;
					Var25.f_1.f_607.f_5.f_3 = 1065353216;
					Var25.f_1.f_607.f_5.f_5 = 1065353216;
					Var25.f_1.f_607.f_5.f_6 = -1;
					Var25.f_1.f_607.f_5.f_7 = 4;
					Var25.f_1.f_607.f_5.f_7.f_1.f_9 = 1082130432;
					Var25.f_1.f_607.f_5.f_7.f_1.f_10 = -1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_12 = 2;
					Var25.f_1.f_607.f_5.f_7.f_1.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_41 = 2;
					Var25.f_1.f_607.f_5.f_7.f_1.f_41.f_1 = 1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_41.f_1.f_11 = -1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_68 = 1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_68.f_1 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_9 = 1082130432;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_10 = -1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_12 = 2;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_41 = 2;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_41.f_1 = 1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_68 = 1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_68.f_1 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_9 = 1082130432;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_10 = -1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_12 = 2;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_41 = 2;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_68 = 1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_607.f_5.f_324 = 2;
					Var25.f_1.f_607.f_5.f_324.f_1.f_18 = 1082130432;
					Var25.f_1.f_607.f_5.f_324.f_1.f_19 = -1065353216;
					Var25.f_1.f_607.f_5.f_324.f_1.f_20 = 1;
					Var25.f_1.f_607.f_5.f_324.f_1.f_21 = 2;
					Var25.f_1.f_607.f_5.f_324.f_1.f_21.f_1 = 1065353216;
					Var25.f_1.f_607.f_5.f_324.f_1.f_21.f_1.f_11 = -1;
					Var25.f_1.f_607.f_5.f_324.f_1.f_21.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_5.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_5.f_324.f_1.f_48.f_18 = 1082130432;
					Var25.f_1.f_607.f_5.f_324.f_1.f_48.f_19 = -1065353216;
					Var25.f_1.f_607.f_5.f_324.f_1.f_48.f_20 = 1;
					Var25.f_1.f_607.f_5.f_324.f_1.f_48.f_21 = 2;
					Var25.f_1.f_607.f_5.f_324.f_1.f_48.f_21.f_1 = 1065353216;
					Var25.f_1.f_607.f_5.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
					Var25.f_1.f_607.f_5.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_5.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_426 = 2;
					Var25.f_1.f_607.f_426.f_1.f_19 = 11;
					Var25.f_1.f_607.f_426.f_1.f_31 = 11;
					Var25.f_1.f_607.f_426.f_1.f_43 = 11;
					Var25.f_1.f_607.f_426.f_1.f_55 = 11;
					Var25.f_1.f_607.f_426.f_1.f_67 = 11;
					Var25.f_1.f_607.f_426.f_1.f_79.f_19 = 11;
					Var25.f_1.f_607.f_426.f_1.f_79.f_31 = 11;
					Var25.f_1.f_607.f_426.f_1.f_79.f_43 = 11;
					Var25.f_1.f_607.f_426.f_1.f_79.f_55 = 11;
					Var25.f_1.f_607.f_426.f_1.f_79.f_67 = 11;
					Var25.f_1.f_607.f_592 = 4;
					Var25.f_1.f_607.f_597 = 4;
					Var25.f_1.f_607.f_607.f_5 = 2;
					Var25.f_1.f_607.f_607.f_5.f_1 = 1;
					Var25.f_1.f_607.f_607.f_5.f_3 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_5 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_6 = -1;
					Var25.f_1.f_607.f_607.f_5.f_7 = 4;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_9 = 1082130432;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_10 = -1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_12 = 2;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_41 = 2;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_41.f_1 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_41.f_1.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_68 = 1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_68.f_1 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_9 = 1082130432;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_10 = -1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_12 = 2;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_41 = 2;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_41.f_1 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_68 = 1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_68.f_1 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_9 = 1082130432;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_10 = -1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_12 = 2;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_41 = 2;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_68 = 1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
					Var25.f_1.f_607.f_607.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
					Var25.f_1.f_607.f_607.f_5.f_324 = 2;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_18 = 1082130432;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_19 = -1065353216;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_20 = 1;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_21 = 2;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_21.f_1 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_21.f_1.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_21.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_48.f_18 = 1082130432;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_48.f_19 = -1065353216;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_48.f_20 = 1;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_48.f_21 = 2;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_48.f_21.f_1 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
					Var25.f_1.f_607.f_607.f_5.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
					Var25.f_1.f_607.f_607.f_426 = 2;
					Var25.f_1.f_607.f_607.f_426.f_1.f_19 = 11;
					Var25.f_1.f_607.f_607.f_426.f_1.f_31 = 11;
					Var25.f_1.f_607.f_607.f_426.f_1.f_43 = 11;
					Var25.f_1.f_607.f_607.f_426.f_1.f_55 = 11;
					Var25.f_1.f_607.f_607.f_426.f_1.f_67 = 11;
					Var25.f_1.f_607.f_607.f_426.f_1.f_79.f_19 = 11;
					Var25.f_1.f_607.f_607.f_426.f_1.f_79.f_31 = 11;
					Var25.f_1.f_607.f_607.f_426.f_1.f_79.f_43 = 11;
					Var25.f_1.f_607.f_607.f_426.f_1.f_79.f_55 = 11;
					Var25.f_1.f_607.f_607.f_426.f_1.f_79.f_67 = 11;
					Var25.f_1.f_607.f_607.f_592 = 4;
					Var25.f_1.f_607.f_607.f_597 = 4;
					iVar1847 = 0;
					if (func_134(uParam2->f_6))
					{
						bVar1848 = false;
						fVar1851 = func_218(uParam2);
						if (fVar1851 < 5f && fVar1851 > -5f)
						{
							bVar1848 = true;
							iVar1849 = uParam2->f_49;
							iVar1850 = uParam2->f_50;
						}
						else
						{
							if (!uParam2->f_49 == -1)
							{
								uParam2->f_49 = -1;
							}
							if (!uParam2->f_50 == -1)
							{
								uParam2->f_50 = -1;
							}
							iVar1849 = func_217(uParam2);
							iVar1850 = func_216(iVar2, Global_1316767, iVar1849);
						}
						uParam2->f_54 = func_215(iVar1849, Global_1316767, Global_1316768, iVar1850, bVar1848);
						func_147(uParam1, uParam2, bVar1848, iVar1849, iVar1850);
						iVar1847 = 0;
						while (iVar1847 < 3)
						{
							if (uParam2->f_41[iVar1847] != -1 && uParam0->f_7255[uParam2->f_41[iVar1847]] != -1)
							{
								Var25[iVar1847] = { func_379(uParam2->f_41[iVar1847]) };
								Var25[iVar1847].f_3 = func_377(uParam2->f_41[iVar1847]);
								func_240(uParam0[uParam0->f_7255[uParam2->f_41[iVar1847]]]->f_6, &(Var25[iVar1847].f_5), bVar1848, iVar1849, iVar1850, Global_1316767, Global_1316768);
								uParam0[uParam0->f_7255[uParam2->f_41[iVar1847]]]->f_54 = func_215(iVar1849, Global_1316767, Global_1316768, iVar1850, bVar1848);
							}
						else
						{
							}
							else
							{
								iVar1847++;
							}
						}
					}
					else
					{
						func_147(uParam1, uParam2, 0, -1, -1);
					}
					bVar1852 = true;
					iVar1853 = 0;
					iVar1853 = 0;
					while (iVar1853 < 2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_5.f_324[iVar1853]))
						{
							STREAMING::REQUEST_ANIM_DICT(uParam1->f_5.f_324[iVar1853]);
							if (STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_5.f_324[iVar1853]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_5.f_324[iVar1853].f_1)))
									{
										fVar1855 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f);
										if (func_231(uParam2->f_6) && TASK::GET_SCRIPT_TASK_STATUS(*uParam2, -2017877118) == 1)
										{
											fVar1855 = 0f;
										}
										if (!func_134(uParam2->f_6))
										{
											if (func_231(uParam2->f_6))
											{
												TASK::TASK_PLAY_ANIM_ADVANCED(*uParam2, uParam1->f_5.f_324[iVar1853], &(uParam1->f_5.f_324[iVar1853].f_1), *uParam1, 0f, 0f, uParam1->f_3, fVar0, fVar1, -1, 790530, 0, 2, 3);
											}
											else if (func_360(uParam2->f_6))
											{
												TASK::TASK_PLAY_ANIM_ADVANCED(*uParam2, uParam1->f_5.f_324[iVar1853], &(uParam1->f_5.f_324[iVar1853].f_1), *uParam1, 0f, 0f, uParam1->f_3, fVar0, fVar1, -1, 790529, fVar1855, 2, 3);
											}
											else if (uParam2->f_6 == 67)
											{
												TASK::TASK_PLAY_ANIM_ADVANCED(*uParam2, uParam1->f_5.f_324[iVar1853], &(uParam1->f_5.f_324[iVar1853].f_1), *uParam1, 0f, 0f, uParam1->f_3, fVar0, fVar1, -1, 524289, fVar1855, 2, 0);
											}
											else if (uParam2->f_6 == 3)
											{
												TASK::TASK_PLAY_ANIM(*uParam2, uParam1->f_5.f_324[iVar1853], &(uParam1->f_5.f_324[iVar1853].f_1), fVar0, fVar1, -1, 17, fVar1855, 0, 0, 0);
											}
											else
											{
												TASK::TASK_PLAY_ANIM(*uParam2, uParam1->f_5.f_324[iVar1853], &(uParam1->f_5.f_324[iVar1853].f_1), fVar0, fVar1, -1, 1, fVar1855, 0, 0, 0);
											}
										}
										else
										{
											fVar1855 = 0f;
											Var1856 = { ENTITY::GET_ENTITY_COORDS(*uParam2, 0) };
											uParam1->f_2 = Var1856.z;
											TASK::TASK_PLAY_ANIM_ADVANCED(*uParam2, uParam1->f_5.f_324[iVar1853], &(uParam1->f_5.f_324[iVar1853].f_1), *uParam1, 0f, 0f, uParam1->f_3, fVar0, fVar1, -1, 2, 0, 2, 0);
											iVar1854 = 0;
											iVar1854 = 0;
											while (iVar1854 < iVar1847)
											{
												if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7255[uParam2->f_41[iVar1854]]]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7255[uParam2->f_41[iVar1854]]], 0))
												{
													Var25[iVar1854].f_2 = Var1856.z;
													TASK::TASK_PLAY_ANIM_ADVANCED((*uParam0)[uParam0->f_7255[uParam2->f_41[iVar1854]]], Var25[iVar1854].f_5.f_324[iVar1853], &(Var25[iVar1854].f_5.f_324[iVar1853].f_1), Var25[iVar1854], 0f, 0f, Var25[iVar1854].f_3, fVar0, fVar1, -1, 2, 0, 2, 0);
												}
												func_127(uParam0[uParam0->f_7255[uParam2->f_41[iVar1854]]]);
												iVar1854++;
											}
										}
										fVar1859 = ENTITY::GET_ANIM_DURATION(uParam1->f_5.f_324[iVar1853], &(uParam1->f_5.f_324[iVar1853].f_1));
										uParam2->f_35 = SYSTEM::FLOOR((fVar1859 * 1000f));
										uParam2->f_36 = MISC::GET_GAME_TIMER();
										uParam2->f_37 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(uParam2->f_35) * fVar1855));
										uParam2->f_51 = 0;
										uParam2->f_53 = 0;
										PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam2, 64);
									}
								}
							}
							else
							{
								bVar1852 = false;
							}
						}
						iVar1853++;
					}
					if (bVar1852)
					{
						iVar1853 = 0;
						uParam2->f_17 = 1;
						return 1;
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(*uParam2, 0))
			{
				if (!func_134(uParam2->f_6))
				{
					if (func_231(uParam2->f_6))
					{
						if (func_145(uParam2) < (250 + SYSTEM::FLOOR((MISC::GET_FRAME_TIME() * 1000f))))
						{
							uParam2->f_17 = 0;
							uParam2->f_10 = func_229(uParam2->f_6, uParam2->f_10);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(*uParam2, -2017877118) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*uParam2, -2017877118) != 0)
					{
						uParam2->f_17 = 0;
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*uParam2, -2017877118) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*uParam2, -2017877118) != 0)
				{
					uParam2->f_17 = 0;
				}
			}
		}
		else if (!uParam2->f_17)
		{
			if (func_10(uParam2->f_6))
			{
				if (uParam2->f_10 < 0)
				{
					uParam2->f_10 = 0;
				}
				Var1860 = { func_233(uParam2->f_6, uParam2->f_10) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1860))
				{
					func_338(uParam2);
				}
				else
				{
					func_232(uParam2);
				}
			}
			else if (uParam2->f_10 == -1)
			{
				uParam2->f_10 = 0;
			}
			func_147(uParam1, uParam2, 0, -1, -1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_5.f_324[0]))
			{
				STREAMING::REQUEST_ANIM_DICT(uParam1->f_5.f_324[0]);
				if (STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_5.f_324[0]))
				{
					uParam2->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(*uParam1, 0f, 0f, uParam1->f_3, 2);
					fVar1876 = 1f;
					iVar1877 = 0;
					while (iVar1877 < 2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
						{
							if (!ENTITY::IS_ENTITY_DEAD(*uParam2, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_5.f_324[iVar1877].f_1)))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(*uParam2, uParam2->f_11, uParam1->f_5.f_324[iVar1877], &(uParam1->f_5.f_324[iVar1877].f_1), fVar0, fVar1, uParam1->f_5.f_324[iVar1877].f_20 | 4, 16, 1148846080, 0);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam2, 64);
								if (func_10(uParam2->f_6))
								{
									fVar1878 = ((SYSTEM::TO_FLOAT(func_470(uParam0->f_7252)) / 1000f) + ENTITY::GET_ANIM_DURATION(uParam1->f_5.f_324[iVar1877], &(uParam1->f_5.f_324[iVar1877].f_1)));
									fVar1879 = (fVar1878 - (SYSTEM::TO_FLOAT(uParam0->f_7942) / 1000f));
									fVar1876 = (fVar1879 / ENTITY::GET_ANIM_DURATION(uParam1->f_5.f_324[iVar1877], &(uParam1->f_5.f_324[iVar1877].f_1)));
								}
							}
						}
						iVar1877++;
					}
					if (!func_15())
					{
						iVar1877 = 0;
						iVar1877 = 0;
						while (iVar1877 < 4)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iVar1877]) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_5.f_7[iVar1877].f_1))
							{
								if (((uParam2->f_16 != -1 && uParam0->f_7255[uParam2->f_16] == uParam0->f_7947) && func_144(uParam2)) && !uParam0->f_7736)
								{
									ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[iVar1877], true, 0);
								}
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam2->f_1[iVar1877], uParam2->f_11, uParam1->f_5.f_7[iVar1877].f_1, uParam1->f_5.f_7[iVar1877], fVar0, fVar1, uParam1->f_5.f_7[iVar1877].f_11, 1148846080);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam2->f_1[iVar1877]);
							}
							iVar1877++;
						}
					}
					uParam2->f_17 = 1;
					fVar1880 = ENTITY::GET_ANIM_DURATION(uParam1->f_5.f_324[0], &(uParam1->f_5.f_324[0].f_1));
					uParam2->f_35 = SYSTEM::FLOOR((fVar1880 * 1000f));
					uParam2->f_36 = MISC::GET_GAME_TIMER();
					uParam2->f_37 = 0;
					if (fVar1876 > 1.2f)
					{
						fVar1876 = 1.2f;
					}
					else if (fVar1876 < 0.8f)
					{
						fVar1876 = 0.8f;
					}
					if (Global_1370520 && func_10(uParam2->f_6))
					{
						fVar1876 = 0f;
					}
					if (uParam0->f_7944 && func_10(uParam2->f_6))
					{
						uParam2->f_37 = (func_470(uParam0->f_7252) - uParam0->f_7942);
						fVar1881 = ((SYSTEM::TO_FLOAT(uParam2->f_37) / 1000f) / ENTITY::GET_ANIM_DURATION(uParam1->f_5.f_324[0], &(uParam1->f_5.f_324[0].f_1)));
						fVar1876 = 1f;
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam2->f_11, fVar1881);
					}
					PED::SET_SYNCHRONIZED_SCENE_RATE(uParam2->f_11, fVar1876);
					uParam2->f_21 = fVar1876;
					uParam2->f_51 = 0;
					uParam2->f_53 = 0;
					if (iParam3 == uParam0->f_7948 || (uParam0->f_7948 == -1 && iParam3 == uParam0->f_7947))
					{
						if (uParam0->f_7944)
						{
							uParam0->f_7944 = 0;
						}
						uParam0->f_7942 = (uParam0->f_7942 + SYSTEM::FLOOR((fVar1880 * 1000f)));
					}
					return 1;
				}
			}
		}
		else
		{
			uVar1882 = uParam2->f_11;
			if (func_10(uParam2->f_6))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam2->f_11) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar1882) >= 1f)
				{
					uParam2->f_17 = 0;
					uParam2->f_10++;
					if (uParam2->f_10 >= func_238(uParam2->f_6))
					{
						uParam2->f_10 = 0;
					}
					Var1883 = { func_233(uParam2->f_6, uParam2->f_10) };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1883))
					{
						func_232(uParam2);
					}
				}
				else if ((uParam0->f_7255[iParam3] != -1 && uParam0->f_7255[iParam3] >= uParam0->f_7547) && uParam0->f_7255[iParam3] < (uParam0->f_7547 + uParam0->f_7549))
				{
					func_147(uParam1, uParam2, 0, -1, -1);
					fVar1899 = ((SYSTEM::TO_FLOAT(func_470(uParam0->f_7252)) / 1000f) + (ENTITY::GET_ANIM_DURATION(uParam1->f_5.f_324[0], &(uParam1->f_5.f_324[0].f_1)) * (1f - PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar1882))));
					fVar1900 = (fVar1899 - ((SYSTEM::TO_FLOAT(uParam0->f_7942) / 1000f) - (ENTITY::GET_ANIM_DURATION(uParam1->f_5.f_324[0], &(uParam1->f_5.f_324[0].f_1)) * (1f - PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar1882)))));
					fVar1901 = (fVar1900 / (ENTITY::GET_ANIM_DURATION(uParam1->f_5.f_324[0], &(uParam1->f_5.f_324[0].f_1)) * (1f - PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar1882))));
					if (fVar1901 > 1.2f)
					{
						fVar1901 = 1.2f;
					}
					else if (fVar1901 < 0.8f)
					{
						fVar1901 = 0.8f;
					}
					PED::SET_SYNCHRONIZED_SCENE_RATE(uParam2->f_11, fVar1901);
					uParam2->f_21 = fVar1901;
				}
			}
			else if (func_231(uParam2->f_6))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam2->f_11) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar1882) >= 1f)
				{
					uParam2->f_17 = 0;
					if (uParam2->f_6 == 113 && uParam2->f_10 == 8)
					{
						Global_1316792 = 1;
						func_441(iParam3, &uVar1902, &uVar1903, 0);
						uParam2->f_6 = uVar1902;
						uParam2->f_10 = 0;
					}
					else
					{
						uParam2->f_10 = func_229(uParam2->f_6, uParam2->f_10);
					}
				}
				else if ((uParam2->f_6 == 113 && uParam2->f_10 == 8) && !uParam0->f_7736)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[0], true, 0);
					ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[1], true, 0);
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam2->f_11))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar1882) >= 1f)
				{
					uParam2->f_17 = 0;
				}
			}
			else
			{
				uParam2->f_17 = 0;
			}
		}
	}
	return 0;
}

int func_144(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 11:
		case 9:
		case 10:
			return 0;
			break;
	}
	return 1;
}

int func_145(var uParam0)
{
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - uParam0->f_36);
	return (func_146(uParam0) - iVar1);
}

int func_146(var uParam0)
{
	iVar0 = (uParam0->f_35 - uParam0->f_37);
	return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / uParam0->f_21));
}

void func_147(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	if (!func_134(uParam1->f_6))
	{
		func_148(uParam1->f_6, 0, uParam1->f_10, &(uParam0->f_5), func_56(uParam1->f_16));
	}
	else
	{
		if (Global_1316767 == 0)
		{
			Global_1316767 = 1;
		}
		func_240(uParam1->f_6, &(uParam0->f_5), bParam2, iParam3, iParam4, Global_1316767, Global_1316768);
	}
}

void func_148(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_214(uParam3);
	switch (iParam0)
	{
		case 66:
			func_213(iParam1, iParam2, uParam3, bParam4);
			break;
		
		case 0:
			func_212(iParam1, iParam2, uParam3);
			break;
		
		case 1:
			func_211(iParam1, iParam2, uParam3, bParam4);
			break;
		
		case 4:
			func_55(iParam1, iParam2, uParam3, bParam4);
			break;
		
		case 5:
			func_210(iParam1, iParam2, uParam3);
			break;
		
		case 76:
			func_209(iParam1, iParam2, uParam3);
			break;
		
		case 6:
			func_208(iParam1, iParam2, uParam3);
			break;
		
		case 60:
			func_207(iParam1, iParam2, uParam3);
			break;
		
		case 2:
			func_206(iParam1, iParam2, uParam3, bParam4);
			break;
		
		case 3:
			func_205(iParam1, iParam2, uParam3);
			break;
		
		case 7:
			func_204(iParam1, iParam2, uParam3);
			break;
		
		case 8:
			func_203(iParam1, iParam2, uParam3);
			break;
		
		case 9:
			func_202(iParam1, iParam2, uParam3);
			break;
		
		case 10:
			func_201(iParam1, iParam2, uParam3);
			break;
		
		case 11:
			func_195(iParam1, iParam2, uParam3);
			break;
		
		case 61:
			func_194(iParam1, iParam2, uParam3, bParam4);
			break;
		
		case 83:
			func_193(iParam1, iParam2, uParam3, bParam4);
			break;
		
		case 84:
			func_192(iParam1, iParam2, uParam3, bParam4);
			break;
		
		case 67:
			func_191(iParam1, iParam2, uParam3, bParam4);
			break;
		
		case 65:
			func_190(iParam1, iParam2, uParam3);
			break;
		
		case 62:
			func_189(iParam1, iParam2, uParam3);
			break;
		
		case 63:
			func_188(iParam1, iParam2, uParam3);
			break;
		
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
		case 22:
		case 23:
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			func_240(iParam0, uParam3, 0, 9, 1, Global_1316767, Global_1316768);
			break;
		
		case 68:
			func_187(iParam1, iParam2, uParam3);
			break;
		
		case 69:
			func_186(iParam1, iParam2, uParam3);
			break;
		
		case 70:
			func_185(iParam1, iParam2, uParam3);
			break;
		
		case 71:
			func_184(iParam1, iParam2, uParam3);
			break;
		
		case 75:
			func_183(iParam1, iParam2, uParam3);
			break;
		
		case 77:
			func_182(iParam1, iParam2, uParam3);
			break;
		
		case 78:
			func_181(iParam1, iParam2, uParam3);
			break;
		
		case 79:
			func_180(iParam1, iParam2, uParam3);
			break;
		
		case 80:
			func_179(iParam1, iParam2, uParam3);
			break;
		
		case 81:
			func_178(iParam1, iParam2, uParam3, bParam4);
			break;
		
		case 82:
			func_177(iParam1, iParam2, uParam3);
			break;
		
		case 72:
			func_176(iParam1, iParam2, uParam3);
			break;
		
		case 73:
			func_175(iParam1, iParam2, uParam3);
			break;
		
		case 74:
			func_174(iParam1, iParam2, uParam3);
			break;
		
		case 85:
			func_173(iParam1, iParam2, uParam3);
			break;
		
		case 86:
			func_172(iParam1, iParam2, uParam3);
			break;
		
		case 87:
			func_171(iParam1, iParam2, uParam3);
			break;
		
		case 88:
			func_170(iParam1, iParam2, uParam3);
			break;
		
		case 89:
			func_55(iParam1, 1, uParam3, bParam4);
			break;
		
		case 90:
			func_55(iParam1, 2, uParam3, bParam4);
			break;
		
		case 64:
			func_169(iParam1, iParam2, uParam3);
			break;
		
		case 91:
			func_168(iParam1, iParam2, uParam3);
			break;
		
		case 92:
			func_167(iParam1, iParam2, uParam3);
			break;
		
		case 93:
			func_166(iParam1, iParam2, uParam3);
			break;
		
		case 94:
			func_165(iParam1, iParam2, uParam3);
			break;
		
		case 95:
			func_164(iParam1, iParam2, uParam3);
			break;
		
		case 96:
			func_163(iParam1, iParam2, uParam3);
			break;
		
		case 97:
			func_162(iParam1, iParam2, uParam3);
			break;
		
		case 98:
			func_161(iParam1, iParam2, uParam3);
			break;
		
		case 99:
			func_160(iParam1, iParam2, uParam3);
			break;
		
		case 100:
			func_159(iParam1, iParam2, uParam3);
			break;
		
		case 101:
			func_158(iParam1, iParam2, uParam3);
			break;
		
		case 102:
			func_157(iParam1, iParam2, uParam3);
			break;
		
		case 103:
			func_156(iParam1, iParam2, uParam3);
			break;
		
		case 104:
			func_155(iParam1, iParam2, uParam3);
			break;
		
		case 105:
			func_154(iParam1, iParam2, uParam3);
			break;
		
		case 106:
			func_139(iParam1, iParam2, uParam3);
			break;
		
		case 107:
			func_140(iParam1, iParam2, uParam3);
			break;
		
		case 108:
			func_141(iParam1, iParam2, uParam3);
			break;
		
		case 109:
			func_153(iParam1, iParam2, uParam3);
			break;
		
		case 110:
			func_138(iParam1, iParam2, uParam3);
			break;
		
		case 111:
			func_152(iParam1, iParam2, uParam3);
			break;
		
		case 112:
			func_151(iParam1, iParam2, uParam3);
			break;
		
		case 113:
			func_150(iParam1, iParam2, uParam3);
			break;
		
		case 114:
			func_149(iParam1, iParam2, uParam3);
			break;
	}
}

void func_149(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_muscle_flex_arms_in_front_base", 64);
					break;
			}
			break;
	}
}

void func_150(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@LAZLOW@ig1_vip@";
			uParam2->f_7[0] = "ANIM@AMB@NIGHTCLUB@LAZLOW@ig1_vip@";
			uParam2->f_7[1] = "ANIM@AMB@NIGHTCLUB@LAZLOW@ig1_vip@";
			uParam2->f_7[2] = "ANIM@AMB@NIGHTCLUB@LAZLOW@ig1_vip@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "ambclub_to_clubvip_laz", 64);
					uParam2->f_7[0].f_1 = "ambclub_to_clubvip_glowstick_l";
					uParam2->f_7[1].f_1 = "ambclub_to_clubvip_glowstick_r";
					uParam2->f_7[2].f_1 = "ambclub_to_clubvip_mic";
					break;
				
				case 1:
					StringCopy(&(uParam2->f_324[0].f_1), "clubvip_base_laz", 64);
					uParam2->f_7[2].f_1 = "clubvip_base_mic";
					break;
				
				case 2:
					StringCopy(&(uParam2->f_324[0].f_1), "clubvip_dlg_jimmyboston_laz", 64);
					uParam2->f_7[2].f_1 = "clubvip_dlg_jimmyboston_mic";
					break;
				
				case 3:
					StringCopy(&(uParam2->f_324[0].f_1), "clubvip_dlg_laceyjonas_laz", 64);
					uParam2->f_7[2].f_1 = "clubvip_dlg_laceyjonas_mic";
					break;
				
				case 4:
					StringCopy(&(uParam2->f_324[0].f_1), "clubvip_dlg_kerrymacintosh_laz", 64);
					uParam2->f_7[2].f_1 = "clubvip_dlg_kerrymacintosh_mic";
					break;
				
				case 5:
					StringCopy(&(uParam2->f_324[0].f_1), "clubvip_dlg_poppymitchel_laz", 64);
					uParam2->f_7[2].f_1 = "clubvip_dlg_poppymitchel_mic";
					break;
				
				case 6:
					StringCopy(&(uParam2->f_324[0].f_1), "clubvip_dlg_tylerdixon_laz", 64);
					uParam2->f_7[2].f_1 = "clubvip_dlg_tylerdixon_mic";
					break;
				
				case 7:
					StringCopy(&(uParam2->f_324[0].f_1), "clubvip_dlg_mirandacowan_laz", 64);
					uParam2->f_7[2].f_1 = "clubvip_dlg_mirandacowan_mic";
					break;
				
				case 8:
					StringCopy(&(uParam2->f_324[0].f_1), "clubvip_to_ambclub_laz", 64);
					uParam2->f_7[0].f_1 = "clubvip_to_ambclub_glowstick_l";
					uParam2->f_7[1].f_1 = "clubvip_to_ambclub_glowstick_r";
					uParam2->f_7[2].f_1 = "clubvip_to_ambclub_mic";
					break;
			}
			break;
	}
}

void func_151(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@LAZLOW@LO_ALONE@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "lowalone_base_laz", 64);
					break;
				
				case 1:
					StringCopy(&(uParam2->f_324[0].f_1), "lowalone_dlg_gotochurch_laz", 64);
					break;
				
				case 2:
					StringCopy(&(uParam2->f_324[0].f_1), "lowalone_dlg_longrant_laz", 64);
					break;
				
				case 3:
					StringCopy(&(uParam2->f_324[0].f_1), "lowalone_dlg_moans_laz", 64);
					break;
				
				case 4:
					StringCopy(&(uParam2->f_324[0].f_1), "lowalone_dlg_normdoesnthappen_laz", 64);
					break;
				
				case 5:
					StringCopy(&(uParam2->f_324[0].f_1), "lowalone_dlg_totallyofage_laz", 64);
					break;
				
				case 6:
					StringCopy(&(uParam2->f_324[0].f_1), "lowalone_dlg_ughunbelievable_laz", 64);
					break;
				
				case 7:
					StringCopy(&(uParam2->f_324[0].f_1), "lowalone_dlg_wayhotter_laz", 64);
					break;
			}
			break;
	}
}

void func_152(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@LAZLOW@LO_SOFA@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "lowsofa_base_laz", 64);
					break;
				
				case 1:
					StringCopy(&(uParam2->f_324[0].f_1), "lowsofa_dlg_crying_laz", 64);
					break;
				
				case 2:
					StringCopy(&(uParam2->f_324[0].f_1), "lowsofa_dlg_fuckedup_laz", 64);
					break;
				
				case 3:
					StringCopy(&(uParam2->f_324[0].f_1), "lowsofa_dlg_notagain_laz", 64);
					break;
				
				case 4:
					StringCopy(&(uParam2->f_324[0].f_1), "lowsofa_dlg_ohedibles_laz", 64);
					break;
				
				case 5:
					StringCopy(&(uParam2->f_324[0].f_1), "lowsofa_dlg_paniclong_laz", 64);
					break;
				
				case 6:
					StringCopy(&(uParam2->f_324[0].f_1), "lowsofa_dlg_shit2strong_laz", 64);
					break;
			}
			break;
	}
}

void func_153(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@LAZLOW@LO_TOILET@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_base_laz", 64);
					break;
				
				case 1:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_checkshoe_laz", 64);
					break;
				
				case 2:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_dlg_nofun_laz", 64);
					break;
				
				case 3:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_dlg_notunderage_r_laz", 64);
					break;
				
				case 4:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_dlg_smellshit_r_laz", 64);
					break;
				
				case 5:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_dlg_sphincterhold_r_laz", 64);
					break;
				
				case 6:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_dlg_wrongnumber_laz", 64);
					break;
				
				case 7:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_trans_to_rockin_laz", 64);
					break;
				
				case 8:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_base_v2_laz", 64);
					break;
				
				case 9:
					StringCopy(&(uParam2->f_324[0].f_1), "lowtoilet_trans_from_rockin_laz", 64);
					break;
			}
			break;
	}
}

void func_154(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "anim@amb@nightclub@lazlow@hi_dancefloor@";
			uParam2->f_7[0] = "anim@amb@nightclub@lazlow@hi_dancefloor@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_06_base_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_06_base_horse";
					break;
				
				case 1:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_06_base_v2_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_06_base_v2_horse";
					break;
				
				case 2:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_11_hu_shimmy_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_11_hu_shimmy_horse";
					break;
				
				case 3:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_11_shimmy_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_11_shimmy_horse";
					break;
				
				case 4:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_13_holdhead_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_13_holdhead_horse";
					break;
				
				case 5:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_13_smackthat_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_13_smackthat_horse";
					break;
				
				case 6:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_15_handup_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_15_handup_horse";
					break;
				
				case 7:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_15_pethorse_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_15_pethorse_horse";
					break;
				
				case 8:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_17_headtrophy_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_17_headtrophy_horse";
					break;
				
				case 9:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_li_17_poledance_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_li_17_poledance_horse";
					break;
				
				case 10:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_trans_07_li_to_mi_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_trans_07_li_to_mi_horse";
					break;
				
				case 11:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_trans_07_li_to_hi_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_trans_07_li_to_hi_horse";
					break;
				
				case 12:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_mi_06_base_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_mi_06_base_horse";
					break;
				
				case 13:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_mi_11_spankthat_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_mi_11_spankthat_horse";
					break;
				
				case 14:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_mi_13_baselong_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_mi_13_baselong_horse";
					break;
				
				case 15:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_mi_13_lookaround_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_mi_13_lookaround_horse";
					break;
				
				case 16:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_mi_15_handsup_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_mi_15_handsup_horse";
					break;
				
				case 17:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_mi_17_buckingbronco_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_mi_17_buckingbronco_horse";
					break;
				
				case 18:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_mi_17_talking_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_mi_17_talking_horse";
					break;
				
				case 19:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_trans_07_mi_to_li_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_trans_07_mi_to_li_horse";
					break;
				
				case 20:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_trans_07_mi_to_hi_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_trans_07_mi_to_hi_horse";
					break;
				
				case 21:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_06_base_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_06_base_horse";
					break;
				
				case 22:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_06_base_v2_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_06_base_v2_horse";
					break;
				
				case 23:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_11_handup_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_11_handup_horse";
					break;
				
				case 24:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_11_raiseup_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_11_raiseup_horse";
					break;
				
				case 25:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_13_shimmyhump_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_13_shimmyhump_horse";
					break;
				
				case 26:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_13_suckit_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_13_suckit_horse";
					break;
				
				case 27:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_15_buckingbronco_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_15_buckingbronco_horse";
					break;
				
				case 28:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_15_shimmyya_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_15_shimmyya_horse";
					break;
				
				case 29:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_17_highhorse_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_17_highhorse_horse";
					break;
				
				case 30:
					StringCopy(&(uParam2->f_324[0].f_1), "crowddance_hi_17_spinaround_laz", 64);
					uParam2->f_7[0].f_1 = "crowddance_hi_17_spinaround_horse";
					break;
				
				case 31:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_hi_05_dlg_cuberoot_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_hi_05_dlg_cuberoot_horse";
					break;
				
				case 32:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_hi_05_dlg_havingit_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_hi_05_dlg_havingit_horse";
					break;
				
				case 33:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_hi_05_dlg_highaf_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_hi_05_dlg_highaf_horse";
					break;
				
				case 34:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_hi_05_dlg_ridegurl_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_hi_05_dlg_ridegurl_horse";
					break;
				
				case 35:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_hi_11_dlg_specialk_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_hi_11_dlg_specialk_horse";
					break;
				
				case 36:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_hi_07_dlg_whooyeeha_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_hi_07_dlg_whooyeeha_horse";
					break;
				
				case 37:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_hi_07_dlg_back288_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_hi_07_dlg_back288_horse";
					break;
				
				case 38:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_trans_07_hi_to_li_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_trans_07_hi_to_li_horse";
					break;
				
				case 39:
					StringCopy(&(uParam2->f_324[0].f_1), "dancecrowd_trans_07_hi_to_mi_laz", 64);
					uParam2->f_7[0].f_1 = "dancecrowd_trans_07_hi_to_mi_horse";
					break;
			}
			break;
	}
}

void func_155(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@dixon_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "mi_dance_facedj_15_v1_male^4", 64);
					break;
			}
			break;
	}
}

void func_156(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@black_madonna_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "li_dance_facedj_11_v1_male^1", 64);
					break;
			}
			break;
	}
}

void func_157(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@black_madonna_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "hi_dance_facedj_09_v2_male^5", 64);
					break;
			}
			break;
	}
}

void func_158(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@black_madonna_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "li_dance_facedj_15_v2_male^2", 64);
					break;
			}
			break;
	}
}

void func_159(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@solomun_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "li_dance_prop_09_v1_male^3", 64);
					break;
			}
			break;
	}
}

void func_160(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@solomun_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "li_dance_prop_15_v1_male^5", 64);
					break;
			}
			break;
	}
}

void func_161(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@solomun_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "mi_dance_prop_15_v1_male^5", 64);
					break;
			}
			break;
	}
}

void func_162(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@solomun_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "mi_dance_prop_15_v1_male^1", 64);
					break;
			}
			break;
	}
}

void func_163(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@solomun_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "mi_dance_prop_15_v1_male^6", 64);
					break;
			}
			break;
	}
}

void func_164(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@solomun_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "mi_dance_facedj_17_v1_female^1", 64);
					break;
			}
			break;
	}
}

void func_165(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@tale_of_us_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "mi_dance_prop_13_v2_male^4", 64);
					break;
			}
			break;
	}
}

void func_166(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@tale_of_us_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "li_dance_prop_09_v1_male^4", 64);
					break;
			}
			break;
	}
}

void func_167(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@tale_of_us_entourage@";
					StringCopy(&(uParam2->f_324[0].f_1), "mi_dance_crowd_13_v2_female^4", 64);
					break;
			}
			break;
	}
}

void func_168(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_leaning_male_wall_back_smoking_idle_a", 64);
					break;
			}
			break;
	}
}

void func_169(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "missfbi3_party_snort_coke_b_male3", 64);
					break;
			}
			break;
	}
}

void func_170(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_bar_male_elbows_on_bar_idle_c", 64);
					break;
			}
			break;
	}
}

void func_171(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_bar_male_elbows_on_bar_idle_a", 64);
					break;
			}
			break;
	}
}

void func_172(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_d_v2", 64);
					break;
			}
			break;
	}
}

void func_173(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_bar_female_elbows_on_bar_idle_a", 64);
					break;
			}
			break;
	}
}

void func_174(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "rcmme_amanda1_stand_loop_cop", 64);
					break;
			}
			break;
	}
}

void func_175(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "rcmme_amanda1_stand_loop_cop", 64);
					break;
			}
			break;
	}
}

void func_176(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_seat_wall_tablet_male_idle_a", 64);
					break;
			}
			break;
	}
}

void func_177(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_window_shop_female_idle_a_browse_b", 64);
					break;
			}
			break;
	}
}

void func_178(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
			switch (iParam1)
			{
				case 0:
					if (bParam3)
					{
						StringCopy(&(uParam2->f_324[0].f_1), "anim_heists_heist_safehouse_intro_phone_couch_female", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_324[0].f_1), "anim_heists_heist_safehouse_intro_phone_couch_male", 64);
					}
					break;
			}
			break;
	}
}

void func_179(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_smoking_pot_male_base", 64);
					break;
			}
			break;
	}
}

void func_180(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_seat_wall_female_hands_by_sides_idle_c", 64);
					break;
			}
			break;
	}
}

void func_181(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_chair_male_generic_base", 64);
					break;
			}
			break;
	}
}

void func_182(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_medic_standing_timeofdeath_base", 64);
					break;
			}
			break;
	}
}

void func_183(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "AMB_WORLD_HUMAN_STAND_MOBILE_MALE_TEXT_IDLE_B", 64);
					break;
			}
			break;
	}
}

void func_184(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_mobile_film_shocking_male_idle_b", 64);
					break;
			}
			break;
	}
}

void func_185(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "AMB_WORLD_HUMAN_STAND_MOBILE_MALE_TEXT_IDLE_A", 64);
					break;
			}
			break;
	}
}

void func_186(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_leaning_male_wall_back_mobile_idle_a", 64);
					break;
			}
			break;
	}
}

void func_187(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@GT_IDLE@";
					StringCopy(&(uParam2->f_324[0].f_1), "base", 64);
					break;
			}
			break;
	}
}

void func_188(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_cheering_female_c", 64);
					break;
			}
			break;
	}
}

void func_189(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "misschinese1crazydance_crazy_dance_1", 64);
					break;
			}
			break;
	}
}

void func_190(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "mini_strip_club_lap_dance_ld_girl_a_song_a_p1", 64);
					break;
			}
			break;
	}
}

void func_191(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "anim@amb@nightclub@dancers@podium_dancers@";
					if (bParam3)
					{
						StringCopy(&(uParam2->f_324[0].f_1), "hi_dance_facedj_17_v2_female^2", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_324[0].f_1), "hi_dance_facedj_17_v2_male^5", 64);
					}
					break;
			}
			break;
	}
}

void func_192(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
			switch (iParam1)
			{
				case 0:
					if (bParam3)
					{
						StringCopy(&(uParam2->f_324[0].f_1), "AMB_WORLD_HUMAN_PARTYING_FEMALE_PARTYING_BEER_BASE", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_324[0].f_1), "AMB_WORLD_HUMAN_PARTYING_MALE_PARTYING_BEER_BASE", 64);
					}
					break;
				
				case 1:
					if (bParam3)
					{
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_mobile_film_shocking_female_idle_b", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_mobile_film_shocking_male_idle_b", 64);
					}
					break;
			}
			break;
	}
}

void func_193(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
			switch (iParam1)
			{
				case 0:
					if (bParam3)
					{
						StringCopy(&(uParam2->f_324[0].f_1), "AMB_WORLD_HUMAN_PARTYING_FEMALE_PARTYING_BEER_BASE", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_324[0].f_1), "AMB_WORLD_HUMAN_PARTYING_MALE_PARTYING_BEER_BASE", 64);
					}
					break;
				
				case 1:
				case 2:
					if (bParam3)
					{
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_window_shop_female_idle_a_browse_a", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_window_shop_male_idle_a_browse_a", 64);
					}
					break;
			}
			break;
	}
}

void func_194(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
			switch (iParam1)
			{
				case 0:
					if (bParam3)
					{
						StringCopy(&(uParam2->f_324[0].f_1), "AMB_WORLD_HUMAN_PARTYING_FEMALE_PARTYING_BEER_BASE", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_324[0].f_1), "AMB_WORLD_HUMAN_PARTYING_MALE_PARTYING_BEER_BASE", 64);
					}
					break;
			}
			break;
	}
}

void func_195(int iParam0, int iParam1, var uParam2)
{
	Var0 = { func_200(11, iParam1) };
	Var16 = { func_199(11, iParam1) };
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = func_17(11, iParam1);
			uParam2->f_324[0].f_1 = { func_18(11, iParam1) };
			uParam2->f_7[0] = func_17(11, iParam1);
			uParam2->f_7[1] = func_17(11, iParam1);
			uParam2->f_7[2] = func_17(11, iParam1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (func_198(iParam1))
				{
					uParam2->f_7[1].f_1 = func_197(&Var0);
				}
				else
				{
					uParam2->f_7[0].f_1 = func_197(&Var0);
				}
			}
			uParam2->f_7[2].f_1 = func_197(&Var16);
			if (!func_196(iParam1))
			{
				uParam2->f_7[2].f_11 = 64;
			}
			break;
	}
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 36:
		case 96:
		case 190:
		case 339:
		case 389:
		case 50:
		case 235:
		case 274:
		case 365:
			return 1;
			break;
	}
	return 0;
}

var func_197(var uParam0)
{
	return uParam0;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 237:
		case 364:
		case 100:
			return 1;
			break;
	}
	return 0;
}

struct<16> func_199(int iParam0, int iParam1)
{
	iVar0 = MISC::GET_HASH_KEY(func_19(iParam0, iParam1));
	StringCopy(&Var1, "BASE_Prop_Battle_Fan", 64);
	if (iVar0 == -2016185107 || iVar0 == 1101928234)
	{
		StringCopy(&Var1, func_19(iParam0, iParam1), 64);
		StringConCat(&Var1, "_prop_battle_fan", 64);
	}
	return Var1;
}

struct<16> func_200(int iParam0, int iParam1)
{
	StringCopy(&Var0, "", 64);
	switch (iParam0)
	{
		case 9:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				iVar16 = MISC::GET_HASH_KEY(func_19(iParam0, iParam1));
				if (iVar16 == -1130026047 || iVar16 == 2040364024)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_glass_cc", 64);
				}
				else if (iVar16 == 586414161 || iVar16 == -196338942)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_glass", 64);
				}
			}
			break;
		
		case 10:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)) && MISC::GET_HASH_KEY(func_19(iParam0, iParam1)) == 1274126497)
			{
				StringConCat(&Var0, func_19(iParam0, iParam1), 64);
				StringConCat(&Var0, "_glass_mm", 64);
			}
			break;
		
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				iVar16 = MISC::GET_HASH_KEY(func_19(iParam0, iParam1));
				if ((iVar16 == 879731227 || iVar16 == 402068295) || iVar16 == 302707725)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_glass", 64);
				}
				else if ((iVar16 == -66655434 || iVar16 == -953843340) || iVar16 == -542006595)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_glass^2", 64);
				}
			}
			break;
		
		case 7:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				iVar16 = MISC::GET_HASH_KEY(func_19(iParam0, iParam1));
				if (iVar16 == -1880482357 || iVar16 == -1284643626)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_wineglass", 64);
				}
			}
			break;
		
		case 11:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				iVar16 = MISC::GET_HASH_KEY(func_19(iParam0, iParam1));
				if ((iVar16 == 209219118 || iVar16 == 260003795) || iVar16 == 861556637)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_tumbler_cs2_s", 64);
				}
				else if (iVar16 == 343718244 || iVar16 == -1971017514)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_water_bottle", 64);
				}
			}
			break;
	}
	return Var0;
}

void func_201(int iParam0, int iParam1, var uParam2)
{
	Var0 = { func_200(10, iParam1) };
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = func_17(10, iParam1);
			uParam2->f_324[0].f_1 = { func_18(10, iParam1) };
			uParam2->f_7[0] = func_17(10, iParam1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				uParam2->f_7[0].f_1 = HUD::_GET_TEXT_SUBSTRING(&Var0, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0));
			}
			break;
	}
}

void func_202(int iParam0, int iParam1, var uParam2)
{
	Var0 = { func_200(9, iParam1) };
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = func_17(9, iParam1);
			uParam2->f_324[0].f_1 = { func_18(9, iParam1) };
			uParam2->f_7[0] = func_17(9, iParam1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				uParam2->f_7[0].f_1 = HUD::_GET_TEXT_SUBSTRING(&Var0, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0));
			}
			break;
	}
}

void func_203(int iParam0, int iParam1, var uParam2)
{
	Var0 = { func_233(8, iParam1) };
	Var16 = { func_200(8, iParam1) };
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = func_17(8, iParam1);
			uParam2->f_324[0].f_1 = { func_18(8, iParam1) };
			uParam2->f_7[0] = func_17(8, iParam1);
			uParam2->f_7[1] = func_17(8, iParam1);
			uParam2->f_7[2] = func_17(8, iParam1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				uParam2->f_7[0].f_1 = func_197(&Var0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16))
			{
				if ((((iParam1 == 14 || iParam1 == 76) || iParam1 == 186) || iParam1 == 237) || iParam1 == 250)
				{
					uParam2->f_7[2].f_1 = func_197(&Var16);
				}
				else
				{
					uParam2->f_7[1].f_1 = func_197(&Var16);
				}
			}
			break;
	}
}

void func_204(int iParam0, int iParam1, var uParam2)
{
	Var0 = { func_233(7, iParam1) };
	Var16 = { func_200(7, iParam1) };
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = func_17(7, iParam1);
			uParam2->f_324[0].f_1 = { func_18(7, iParam1) };
			uParam2->f_7[0] = func_17(7, iParam1);
			uParam2->f_7[1] = func_17(7, iParam1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				uParam2->f_7[0].f_1 = func_197(&Var0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16))
			{
				uParam2->f_7[1].f_1 = func_197(&Var16);
			}
			break;
	}
}

void func_205(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "mp_player_int_uppersmoke";
					StringCopy(&(uParam2->f_324[0].f_1), "mp_player_int_smoke", 64);
					break;
			}
			break;
	}
}

void func_206(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
			switch (iParam1)
			{
				case 0:
					if (bParam3)
					{
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_drinking_beer_female_base", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_drinking_beer_male_base", 64);
					}
					break;
			}
			break;
	}
}

void func_207(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_clipboard_male_idle_a", 64);
					break;
			}
			break;
	}
}

void func_208(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "mini_strip_club_drink_idle_a_bartender", 64);
					break;
			}
			break;
	}
}

void func_209(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_prop_human_seat_computer_male_base", 64);
					break;
			}
			break;
	}
}

void func_210(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "anim_amb_office_boss_male_computer_idle", 64);
					uParam2->f_7[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					uParam2->f_7[0].f_1 = "anim_amb_office_boss_male_computer_idle_chair";
					break;
			}
			break;
	}
}

void func_211(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_hang_out_street_female_hold_arm_idle_b", 64);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_hang_out_street_male_c_base", 64);
						break;
					}
			}
			break;
	}
}

void func_212(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
					StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_stand_guard_male_base", 64);
					break;
			}
			break;
	}
}

void func_213(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_leaning_female_wall_back_texting_idle_a", 64);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						uParam2->f_324[0] = "ANIM@AMB@NIGHTCLUB@PEDS@";
						StringCopy(&(uParam2->f_324[0].f_1), "amb_world_human_leaning_male_wall_back_mobile_idle_a", 64);
						break;
					}
			}
			break;
	}
}

void func_214(var uParam0)
{
	Var0 = 2;
	Var0.f_1 = 1;
	Var0.f_3 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_6 = -1;
	Var0.f_7 = 4;
	Var0.f_7.f_1.f_9 = 1082130432;
	Var0.f_7.f_1.f_10 = -1065353216;
	Var0.f_7.f_1.f_12 = 2;
	Var0.f_7.f_1.f_12.f_1.f_11 = 1073741824;
	Var0.f_7.f_1.f_12.f_1.f_12 = 1073741824;
	Var0.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_7.f_1.f_41 = 2;
	Var0.f_7.f_1.f_41.f_1 = 1065353216;
	Var0.f_7.f_1.f_41.f_1.f_11 = -1;
	Var0.f_7.f_1.f_41.f_1.f_13 = 1065353216;
	Var0.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
	Var0.f_7.f_1.f_68 = 1;
	Var0.f_7.f_1.f_68.f_1 = 1073741824;
	Var0.f_7.f_1.f_68.f_1.f_1 = 1073741824;
	Var0.f_7.f_1.f_68.f_1.f_3 = -1082130432;
	Var0.f_7.f_1.f_79.f_9 = 1082130432;
	Var0.f_7.f_1.f_79.f_10 = -1065353216;
	Var0.f_7.f_1.f_79.f_12 = 2;
	Var0.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_41 = 2;
	Var0.f_7.f_1.f_79.f_41.f_1 = 1065353216;
	Var0.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
	Var0.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
	Var0.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
	Var0.f_7.f_1.f_79.f_68 = 1;
	Var0.f_7.f_1.f_79.f_68.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
	Var0.f_7.f_1.f_79.f_79.f_9 = 1082130432;
	Var0.f_7.f_1.f_79.f_79.f_10 = -1065353216;
	Var0.f_7.f_1.f_79.f_79.f_12 = 2;
	Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_41 = 2;
	Var0.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
	Var0.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
	Var0.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var0.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var0.f_7.f_1.f_79.f_79.f_68 = 1;
	Var0.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var0.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
	Var0.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var0.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var0.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
	Var0.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var0.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var0.f_324 = 2;
	Var0.f_324.f_1.f_18 = 1082130432;
	Var0.f_324.f_1.f_19 = -1065353216;
	Var0.f_324.f_1.f_20 = 1;
	Var0.f_324.f_1.f_21 = 2;
	Var0.f_324.f_1.f_21.f_1 = 1065353216;
	Var0.f_324.f_1.f_21.f_1.f_11 = -1;
	Var0.f_324.f_1.f_21.f_1.f_13 = 1065353216;
	Var0.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
	Var0.f_324.f_1.f_48.f_18 = 1082130432;
	Var0.f_324.f_1.f_48.f_19 = -1065353216;
	Var0.f_324.f_1.f_48.f_20 = 1;
	Var0.f_324.f_1.f_48.f_21 = 2;
	Var0.f_324.f_1.f_48.f_21.f_1 = 1065353216;
	Var0.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
	Var0.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
	Var0.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
	Var0.f_4 = 0f;
	Var0.f_3 = 1f;
	*uParam0 = { Var0 };
}

int func_215(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = (((iParam0 * 100 + iParam2 * 20) + iParam1 * 4) + (iParam3 - 1) * 2);
	if (bParam4)
	{
		iVar0++;
	}
	return iVar0;
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					if (iParam2 == 11)
					{
						return 1;
					}
					break;
				
				case 2:
					if (iParam2 == 17)
					{
						return 1;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 11:
							return 2;
						
						case 13:
							return 1;
						
						default:
					}
					break;
			}
			return MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
		
		case 2:
			return 1;
		
		case 3:
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 9)
					{
						return 2;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 11:
							return 1;
						
						case 13:
							return 2;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 11:
							return 1;
						
						case 13:
							return 2;
						
						case 15:
							return 2;
						
						case 17:
							return 2;
						
						default:
					}
					break;
			}
			return MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
		
		case 1:
			if (iParam2 == 13)
			{
				return MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
			}
			return 1;
		
		default:
	}
	return 1;
}

int func_217(var uParam0)
{
	fVar0 = func_218(uParam0);
	iVar2 = -1;
	uParam0->f_21 = 1f;
	func_249(uParam0->f_6, &iVar4, &uVar5, &uVar6);
	switch (iVar4)
	{
		case 0:
		case 3:
		case 1:
			if (fVar0 > -5f)
			{
				iVar3 = SYSTEM::FLOOR(((fVar0 / 2f) - 8f));
				if (iVar3 > 5)
				{
					iVar3 = 5;
				}
			}
			else
			{
				iVar3 = 5;
			}
			if (iVar3 > 0)
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
				if (Global_1316767 == 4)
				{
					switch (iVar4)
					{
						case 0:
							if (iVar3 > 1)
							{
								if (iVar3 > 4)
								{
									iVar3 = 4;
								}
								iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar3);
							}
							break;
						
						case 3:
							if (iVar3 > 3)
							{
								iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(3, iVar3);
							}
							else if (iVar3 > 1)
							{
								iVar1 = 2;
							}
							break;
						
						case 1:
							if (iVar3 > 4)
							{
								iVar1 = 4;
							}
							break;
						}
				}
				iVar2 = iVar1 * 2 + 9;
			}
			else
			{
				iVar2 = (SYSTEM::ROUND(((fVar0 + 1f) / 2f)) * 2 - 1);
				if (iVar2 < 9)
				{
					iVar2 = 9;
				}
			}
			break;
		
		case 2:
			if (fVar0 > -5f)
			{
				iVar3 = SYSTEM::FLOOR((fVar0 - 13f));
				if (iVar3 > 6)
				{
					iVar3 = 6;
				}
			}
			else
			{
				iVar3 = 6;
			}
			if (iVar3 > 0)
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
				iVar2 = iVar1 + 8;
				if (iVar2 < 9)
				{
					iVar2 = 6;
				}
			}
			else
			{
				iVar2 = SYSTEM::ROUND(fVar0);
				if (iVar2 < 9)
				{
					if (iVar2 == 8)
					{
						iVar2 = 9;
					}
					else
					{
						iVar2 = 6;
					}
				}
				else if (iVar2 > 13)
				{
					iVar2 = 13;
				}
			}
			break;
	}
	return iVar2;
}

float func_218(var uParam0)
{
	iVar0 = (Global_1316770 - Global_1316769);
	fVar1 = (IntToFloat(iVar0) / 1000f);
	func_249(uParam0->f_6, &iVar2, &bVar3, &iVar4);
	if (uParam0->f_49 == -1)
	{
		uParam0->f_49 = func_225(iVar2, Global_1316767, Global_1316768);
		uParam0->f_50 = func_224(iVar2, Global_1316767, Global_1316768, uParam0->f_49);
	}
	uVar5 = func_228(iVar2, Global_1316767);
	Var6 = { func_219(iVar2, Global_1316767, Global_1316768, uParam0->f_49, uParam0->f_50, bVar3, iVar4) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar5) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
	{
		fVar24 = ENTITY::GET_ANIM_DURATION(sVar5, &Var6);
		if (ENTITY::FIND_ANIM_EVENT_PHASE(sVar5, &Var6, "Drop_Trans", &fVar22, &uVar23))
		{
			fVar24 = (fVar24 * fVar22);
		}
		else
		{
			fVar24 = (fVar24 * 0.5f);
		}
		return (fVar1 - fVar24);
	}
	return -10f;
}

struct<16> func_219(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	switch (iParam0)
	{
		case 0:
			return func_223(iParam1, iParam2, iParam3, iParam4, bParam5, iParam6);
		
		case 1:
			return func_222(iParam1, iParam2, iParam3, iParam4, bParam5, iParam6);
		
		case 2:
			return func_221(iParam1, iParam2, iParam3, iParam4, bParam5, iParam6);
		
		case 3:
			return func_220(iParam1, iParam2, iParam3, iParam4, bParam5, iParam6);
		
		default:
	}
	return Var0;
}

struct<16> func_220(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			switch (iParam1)
			{
				case 2:
					StringCopy(&Var0, "trans_dance_crowd_li_to_mi_", 64);
					break;
				
				case 3:
				case 4:
					StringCopy(&Var0, "trans_dance_crowd_li_to_hi_", 64);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					StringCopy(&Var0, "trans_dance_crowd_mi_to_li_", 64);
					break;
				
				case 3:
				case 4:
					StringCopy(&Var0, "trans_dance_crowd_mi_to_hi_", 64);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					StringCopy(&Var0, "trans_dance_crowd_hi_to_li_", 64);
					break;
				
				case 2:
					StringCopy(&Var0, "trans_dance_crowd_hi_to_mi_", 64);
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return Var0;
	}
	if (iParam2 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iParam2, 64);
	StringConCat(&Var0, "_v", 64);
	StringIntConCat(&Var0, iParam3, 64);
	if (!bParam4)
	{
		StringConCat(&Var0, "_male", 64);
	}
	else
	{
		StringConCat(&Var0, "_female", 64);
	}
	StringConCat(&Var0, "^", 64);
	StringIntConCat(&Var0, iParam5, 64);
	return Var0;
}

struct<16> func_221(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 3:
				case 4:
					StringCopy(&Var0, "trans_li-mi_to_mi-hi_", 64);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					StringCopy(&Var0, "trans_mi-hi_to_li-mi_", 64);
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return Var0;
	}
	if (iParam2 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iParam2, 64);
	StringConCat(&Var0, "_v", 64);
	StringIntConCat(&Var0, iParam3, 64);
	if (!bParam4)
	{
		StringConCat(&Var0, "_male", 64);
	}
	else
	{
		StringConCat(&Var0, "_female", 64);
	}
	StringConCat(&Var0, "^", 64);
	StringIntConCat(&Var0, iParam5, 64);
	return Var0;
}

struct<16> func_222(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			switch (iParam1)
			{
				case 2:
					StringCopy(&Var0, "trans_dance_prop_li_to_mi_", 64);
					break;
				
				case 3:
				case 4:
					StringCopy(&Var0, "trans_dance_prop_li_to_hi_", 64);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					StringCopy(&Var0, "trans_dance_prop_mi_to_li_", 64);
					break;
				
				case 3:
				case 4:
					StringCopy(&Var0, "trans_dance_prop_mi_to_hi_", 64);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					StringCopy(&Var0, "trans_dance_prop_hi_to_li_", 64);
					break;
				
				case 2:
					StringCopy(&Var0, "trans_dance_prop_hi_to_mi_", 64);
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return Var0;
	}
	if (iParam2 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iParam2, 64);
	StringConCat(&Var0, "_v", 64);
	StringIntConCat(&Var0, iParam3, 64);
	if (!bParam4)
	{
		StringConCat(&Var0, "_male", 64);
	}
	else
	{
		StringConCat(&Var0, "_female", 64);
	}
	StringConCat(&Var0, "^", 64);
	StringIntConCat(&Var0, iParam5, 64);
	return Var0;
}

struct<16> func_223(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			switch (iParam1)
			{
				case 2:
					StringCopy(&Var0, "trans_dance_facedj_li_to_mi_", 64);
					break;
				
				case 3:
				case 4:
					StringCopy(&Var0, "trans_dance_facedj_li_to_hi_", 64);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					StringCopy(&Var0, "trans_dance_facedj_mi_to_li_", 64);
					break;
				
				case 3:
				case 4:
					StringCopy(&Var0, "trans_dance_facedj_mi_to_hi_", 64);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					StringCopy(&Var0, "trans_dance_facedj_hi_to_li_", 64);
					break;
				
				case 2:
					StringCopy(&Var0, "trans_dance_facedj_hi_to_mi_", 64);
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return Var0;
	}
	if (iParam2 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iParam2, 64);
	StringConCat(&Var0, "_v", 64);
	StringIntConCat(&Var0, iParam3, 64);
	if (!bParam4)
	{
		StringConCat(&Var0, "_male", 64);
	}
	else
	{
		StringConCat(&Var0, "_female", 64);
	}
	StringConCat(&Var0, "^", 64);
	StringIntConCat(&Var0, iParam5, 64);
	return Var0;
}

int func_224(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			if (iParam3 == 9)
			{
				switch (iParam1)
				{
					case 0:
					case 1:
						if (iParam2 == 3 || iParam2 == 4)
						{
							return MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
						}
						break;
					
					case 2:
						if (iParam2 == 0 || iParam2 == 1)
						{
							return 2;
						}
						break;
					
					case 3:
					case 4:
						if (iParam2 == 2)
						{
							return MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
						}
						break;
					}
			}
			return 1;
		
		case 1:
			return 1;
		
		default:
	}
	return 1;
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam2)
					{
						case 2:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar0 == 0)
							{
								return 9;
							}
							else
							{
								return 11;
							}
							break;
						
						case 3:
						case 4:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar0 == 0)
							{
								return 7;
							}
							else
							{
								return 9;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							switch (iVar0)
							{
								case 0:
									return 7;
								
								case 1:
									return 9;
								
								default:
							}
							break;
						
						case 3:
						case 4:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							switch (iVar0)
							{
								case 0:
									return 8;
								
								case 1:
									return 9;
								
								default:
							}
							break;
					}
					break;
				
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
						case 1:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar0 == 0)
							{
								return 7;
							}
							else
							{
								return 9;
							}
							break;
						
						case 2:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar0 == 0)
							{
								return 9;
							}
							else
							{
								return 11;
							}
							break;
					}
					break;
			}
			break;
		
		case 2:
			return 9;
		
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam2)
					{
						case 2:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar0 == 0)
							{
								return 9;
							}
							else
							{
								return 11;
							}
							break;
						
						case 3:
						case 4:
							return 9;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar0 == 0)
							{
								return 9;
							}
							else
							{
								return 12;
							}
							break;
						
						case 3:
						case 4:
							return 9;
					}
					break;
				
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
						case 1:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar0 == 0)
							{
								return 7;
							}
							else
							{
								return 9;
							}
							break;
						
						case 2:
							return 9;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam2)
					{
						case 2:
							return 11;
						
						case 3:
						case 4:
							return 7;
						
						default:
					}
					break;
				
				case 2:
					return 11;
				
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 9;
						
						case 2:
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar0 == 0)
							{
								return 9;
							}
							else
							{
								return 11;
							}
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_226(int iParam0)
{
	return MISC::GET_RANDOM_INT_IN_RANGE(0, func_227(iParam0));
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 10;
		
		case 106:
			return 7;
		
		case 107:
			return 13;
		
		case 108:
			return 12;
		
		case 109:
			return 10;
		
		case 110:
			return 10;
		
		case 111:
			return 7;
		
		case 112:
			return 8;
		
		case 113:
			return 12;
		
		default:
	}
	return 1;
}

char* func_228(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return "anim@amb@nightclub@dancers@crowddance_facedj_transitions@from_low_intensity";
				
				case 2:
					return "anim@amb@nightclub@dancers@crowddance_facedj_transitions@from_med_intensity";
				
				case 3:
				case 4:
					return "anim@amb@nightclub@dancers@crowddance_facedj_transitions@from_hi_intensity";
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return "anim@amb@nightclub@dancers@crowddance_single_props_transitions@from_low_intensity";
				
				case 2:
					return "anim@amb@nightclub@dancers@crowddance_single_props_transitions@from_med_intensity";
				
				case 3:
				case 4:
					return "anim@amb@nightclub@dancers@crowddance_single_props_transitions@from_hi_intensity";
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					return "anim@amb@nightclub@dancers@club_ambientpeds_transitions@";
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return "anim@amb@nightclub@dancers@crowddance_groups_transitions@from_low_intensity";
				
				case 2:
					return "anim@amb@nightclub@dancers@crowddance_groups_transitions@from_med_intensity";
				
				case 3:
				case 4:
					return "anim@amb@nightclub@dancers@crowddance_groups_transitions@from_hi_intensity";
				
				default:
			}
			break;
	}
	return "";
}

int func_229(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 105:
			switch (iParam1)
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
				case 19:
				case 38:
					if (Global_1316767 == 1 || Global_1316767 == 0)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					}
					else if (Global_1316767 == 2)
					{
						return 10;
					}
					else
					{
						return 11;
					}
					break;
				
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 10:
				case 39:
					if (Global_1316767 == 2)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(12, 19);
					}
					else if (Global_1316767 == 1 || Global_1316767 == 0)
					{
						return 19;
					}
					else
					{
						return 20;
					}
					break;
				
				case 21:
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
				case 11:
				case 20:
					if (Global_1316767 == 3 || Global_1316767 == 4)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(21, 38);
					}
					else if (Global_1316767 == 1 || Global_1316767 == 0)
					{
						return 38;
					}
					else
					{
						return 39;
					}
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 13:
					if (Global_1316767 == 1 || Global_1316767 == 0)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
					}
					else
					{
						return 7;
					}
					break;
				
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 7:
					if ((Global_1316767 == 2 || Global_1316767 == 3) || Global_1316767 == 4)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(8, 13);
					}
					else
					{
						return 13;
					}
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 107:
			switch (iParam1)
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
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
					if (Global_1316767 == 1 || Global_1316767 == 0)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
					}
					else if (Global_1316767 == 2)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(14, 24);
					}
					else
					{
						return 13;
					}
					break;
				
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 13:
					if (Global_1316767 == 3 || Global_1316767 == 4)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(25, 34);
					}
					else
					{
						return 24;
					}
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 108:
			switch (iParam1)
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
				case 27:
				case 41:
					if (Global_1316767 == 1 || Global_1316767 == 0)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
					}
					else if (Global_1316767 == 2)
					{
						return 12;
					}
					else
					{
						return 13;
					}
					break;
				
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 12:
				case 42:
					if (Global_1316767 == 2)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(14, 27);
					}
					else if (Global_1316767 == 1 || Global_1316767 == 0)
					{
						return 27;
					}
					else
					{
						return 28;
					}
					break;
				
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
				case 13:
				case 28:
					if (Global_1316767 == 3 || Global_1316767 == 4)
					{
						return MISC::GET_RANDOM_INT_IN_RANGE(29, 41);
					}
					else if (Global_1316767 == 1 || Global_1316767 == 0)
					{
						return 41;
					}
					else
					{
						return 42;
					}
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
				
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 9:
					return 0;
				
				case 7:
				case 8:
					return iParam1 + 1;
				
				default:
			}
			break;
		
		case 110:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		
		case 111:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		
		case 112:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		
		case 113:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					Global_1316792 = 8;
					if (func_6() > -1)
					{
						iVar0 = 0;
						while (iVar0 < 7)
						{
							if (func_476(func_6(), iVar0))
							{
								switch (iVar0)
								{
									case 1:
										iVar1 = 22;
										break;
									
									case 2:
										iVar1 = 23;
										break;
									
									case 3:
										iVar1 = 24;
										break;
									
									case 4:
										iVar1 = 25;
										break;
									
									case 5:
										iVar1 = 26;
										break;
									
									case 6:
										iVar1 = 27;
										break;
								}
								if (!MISC::IS_BIT_SET(Global_1316806, iVar1))
								{
									return (iVar1 - 22) + 2;
								}
							}
							iVar0++;
						}
					}
					return 8;
				
				case 8:
					return 0;
				
				default:
			}
			break;
	}
	return func_230(iParam0, iParam1);
}

int func_230(int iParam0, int iParam1)
{
	iParam1 = (iParam1 + MISC::GET_RANDOM_INT_IN_RANGE(1, func_227(iParam0)));
	return (iParam1 % func_227(iParam0));
}

bool func_231(int iParam0)
{
	return func_227(iParam0) > 1;
}

void func_232(var uParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[0]) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1[0], 0)) || !ENTITY::IS_ENTITY_ATTACHED(uParam0->f_1[0]))
	{
		return;
	}
	ENTITY::DETACH_ENTITY(uParam0->f_1[0], 0, 1);
}

struct<16> func_233(int iParam0, int iParam1)
{
	StringCopy(&Var0, "", 64);
	switch (iParam0)
	{
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				iVar16 = MISC::GET_HASH_KEY(func_19(iParam0, iParam1));
				if ((((((((((((iVar16 == -888802358 || iVar16 == -1307358137) || iVar16 == -1785379812) || iVar16 == -298758261) || iVar16 == -1543953328) || iVar16 == -1618759140) || iVar16 == 1060626884) || iVar16 == -320942899) || iVar16 == -1534393500) || iVar16 == -428726779) || iVar16 == -1327577832) || iVar16 == -331051422) || iVar16 == -428726779)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_headphones", 64);
				}
				else if ((((((func_234(iParam0, iParam1) == 2 || iVar16 == 245829725) || iVar16 == -626093638) || iVar16 == -1067721098) || iVar16 == 402068295) || iVar16 == 1845394450) || iVar16 == -1649336643)
				{
					if ((((iVar16 == 245829725 && iParam1 == 122) || (iVar16 == -626093638 && iParam1 == 175)) || (iVar16 == -1067721098 && iParam1 == 268)) || (iVar16 == 1845394450 && iParam1 == 33))
					{
						StringConCat(&Var0, func_19(iParam0, iParam1), 64);
						StringConCat(&Var0, "_headphones", 64);
					}
					else if ((((iVar16 == -626093638 && (iParam1 == 85 || iParam1 == 309)) || (iVar16 == -1067721098 && iParam1 == 303)) || (iVar16 == 1845394450 && ((iParam1 == 43 || iParam1 == 107) || iParam1 == 159))) || (iVar16 == -1649336643 && iParam1 == 298))
					{
						StringConCat(&Var0, func_19(iParam0, iParam1), 64);
						StringConCat(&Var0, "_headphones_Table", 64);
					}
					else
					{
						StringConCat(&Var0, func_19(iParam0, iParam1), 64);
						StringConCat(&Var0, "_headphones_Neck", 64);
					}
				}
				else if (func_234(iParam0, iParam1) == 0)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_headphones_Table", 64);
				}
				else
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_headphones", 64);
				}
			}
			break;
		
		case 7:
			iVar17 = func_234(iParam0, iParam1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_19(iParam0, iParam1)))
			{
				iVar16 = MISC::GET_HASH_KEY(func_19(iParam0, iParam1));
				if ((((((iVar16 == -1523595174 || iVar16 == 1865861925) || iVar16 == 242029090) || iVar16 == 1912822093) || iVar16 == -1523595174) || iVar16 == -631043465) || iVar16 == 611020307)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_headphones", 64);
				}
				else if (((iVar16 == 740524004 || iVar16 == 1271336149) || iVar16 == 945222349) || iVar16 == 1016721023)
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_headphones_neck", 64);
				}
				else
				{
					StringConCat(&Var0, func_19(iParam0, iParam1), 64);
					StringConCat(&Var0, "_headphones", 64);
					if (iVar17 == 2)
					{
						StringConCat(&Var0, "_NECK", 64);
					}
					else if (iVar17 == 0)
					{
						StringConCat(&Var0, "_TABLE", 64);
					}
				}
			}
			break;
	}
	return Var0;
}

int func_234(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 7:
			if (iParam1 < 4)
			{
				return 0;
			}
			else if (iParam1 < 11)
			{
				return 2;
			}
			else if (iParam1 < 26)
			{
				return 1;
			}
			else if (iParam1 < 42)
			{
				return 2;
			}
			else if (iParam1 < 61)
			{
				return 1;
			}
			else if (iParam1 < 64)
			{
				return 2;
			}
			else if (iParam1 < 67)
			{
				return 1;
			}
			else if (iParam1 < 76)
			{
				return 0;
			}
			else if (iParam1 < 79)
			{
				return 2;
			}
			else if (iParam1 < 90)
			{
				return 1;
			}
			else if (iParam1 < 99)
			{
				return 2;
			}
			else if (iParam1 < 113)
			{
				return 2;
			}
			else if (iParam1 < 136)
			{
				return 1;
			}
			else if (iParam1 < 155)
			{
				return 0;
			}
			else if (iParam1 < 157)
			{
				return 1;
			}
			else if (iParam1 < 180)
			{
				return 2;
			}
			else if (iParam1 < 187)
			{
				return 1;
			}
			else if (iParam1 < 227)
			{
				return 2;
			}
			else if (iParam1 < 238)
			{
				return 1;
			}
			else if (iParam1 < 247)
			{
				return 0;
			}
			else if (iParam1 < 249)
			{
				return 1;
			}
			else if (iParam1 < 255)
			{
				return 2;
			}
			else if (iParam1 < 257)
			{
				return 1;
			}
			else if (iParam1 < 263)
			{
				return 0;
			}
			else if (iParam1 < 289)
			{
				return 2;
			}
			else if (iParam1 < 318)
			{
				return 1;
			}
			else if (iParam1 < 332)
			{
				return 2;
			}
			else if (iParam1 < 342)
			{
				return 1;
			}
			else if (iParam1 < 354)
			{
				return 0;
			}
			else if (iParam1 < 356)
			{
				return 1;
			}
			else if (iParam1 < 375)
			{
				return 2;
			}
			else if (iParam1 < 385)
			{
				return 1;
			}
			else if (iParam1 < 404)
			{
				return 0;
			}
			else if (iParam1 < 416)
			{
				return 2;
			}
			else if (iParam1 < 418)
			{
				return 1;
			}
			else if (iParam1 < 420)
			{
				return 0;
			}
			else if (iParam1 < 422)
			{
				return 1;
			}
			else if (iParam1 < 437)
			{
				return 2;
			}
			else if (iParam1 < 449)
			{
				return 1;
			}
			else if (iParam1 < 467)
			{
				return 2;
			}
			else if (iParam1 < 469)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 8:
			if (iParam1 < 1)
			{
				return 0;
			}
			else if (iParam1 < 28)
			{
				return 1;
			}
			else if (iParam1 < 37)
			{
				return 2;
			}
			else if (iParam1 < 39)
			{
				return 1;
			}
			else if (iParam1 < 40)
			{
				return 2;
			}
			else if (iParam1 < 44)
			{
				return 0;
			}
			else if (iParam1 < 48)
			{
				return 1;
			}
			else if (iParam1 < 51)
			{
				return 2;
			}
			else if (iParam1 < 57)
			{
				return 1;
			}
			else if (iParam1 < 65)
			{
				return 2;
			}
			else if (iParam1 < 78)
			{
				return 1;
			}
			else if (iParam1 < 84)
			{
				return 2;
			}
			else if (iParam1 < 88)
			{
				return 0;
			}
			else if (iParam1 < 95)
			{
				return 1;
			}
			else if (iParam1 < 99)
			{
				return 2;
			}
			else if (iParam1 < 104)
			{
				return 1;
			}
			else if (iParam1 < 105)
			{
				return 2;
			}
			else if (iParam1 < 108)
			{
				return 0;
			}
			else if (iParam1 < 112)
			{
				return 1;
			}
			else if (iParam1 < 131)
			{
				return 2;
			}
			else if (iParam1 < 132)
			{
				return 1;
			}
			else if (iParam1 < 136)
			{
				return 2;
			}
			else if (iParam1 < 154)
			{
				return 1;
			}
			else if (iParam1 < 157)
			{
				return 2;
			}
			else if (iParam1 < 160)
			{
				return 0;
			}
			else if (iParam1 < 164)
			{
				return 1;
			}
			else if (iParam1 < 168)
			{
				return 2;
			}
			else if (iParam1 < 174)
			{
				return 1;
			}
			else if (iParam1 < 176)
			{
				return 2;
			}
			else if (iParam1 < 216)
			{
				return 1;
			}
			else if (iParam1 < 223)
			{
				return 0;
			}
			else if (iParam1 < 249)
			{
				return 1;
			}
			else if (iParam1 < 269)
			{
				return 2;
			}
			else if (iParam1 < 287)
			{
				return 1;
			}
			else if (iParam1 < 289)
			{
				return 2;
			}
			else if (iParam1 < 290)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_235(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = MISC::GET_HASH_KEY(func_237(MISC::GET_HASH_KEY(AUDIO::GET_RADIO_STATION_NAME(iParam0)), iVar0));
	while (func_236(iVar2) != -1)
	{
		iVar1 = (iVar1 + (func_236(iVar2) - 1000));
		iVar0++;
		iVar2 = MISC::GET_HASH_KEY(func_237(MISC::GET_HASH_KEY(AUDIO::GET_RADIO_STATION_NAME(iParam0)), iVar0));
	}
	return iVar1;
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 1511037175:
		case 1615677084:
			return 1703526;
		
		case -1942586046:
		case 654464007:
			return 2308447;
		
		case -1910046413:
		case 433535409:
			return 1213842;
		
		case -858019879:
		case 582584588:
			return 1005020;
		
		case -1104573835:
		case 956020112:
			return 1272109;
		
		case -396271872:
		case 105238565:
			return 1302450;
		
		case -289135594:
		case -174739804:
			return 1173847;
		
		case -1585084006:
		case -1075559614:
			return 1392604;
		
		case 329117129:
		case 152065433:
			return 1259501;
		
		case -893816568:
		case -225724130:
			return 922497;
		
		case -1124608635:
		case -532769660:
			return 1772747;
		
		case -412341651:
		case 421430847:
			return 1410964;
		
		default:
	}
	return -1;
}

char* func_237(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2121858382:
			switch (iParam1)
			{
				case 1:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX1_CLUB_01";
					break;
				
				case 2:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX1_CLUB_02";
					break;
				
				case 3:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX1_CLUB_03";
					break;
			}
			break;
		
		case 534505150:
			switch (iParam1)
			{
				case 1:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX2_CLUB_01";
					break;
				
				case 2:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX2_CLUB_02";
					break;
				
				case 3:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX2_CLUB_03";
					break;
			}
			break;
		
		case -1266540061:
			switch (iParam1)
			{
				case 1:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX3_CLUB_01";
					break;
				
				case 2:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX3_CLUB_02";
					break;
				
				case 3:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX3_CLUB_03";
					break;
			}
			break;
		
		case 2123736797:
			switch (iParam1)
			{
				case 1:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX4_CLUB_01";
					break;
				
				case 2:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX4_CLUB_02";
					break;
				
				case 3:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX4_CLUB_03";
					break;
			}
			break;
		
		case 884956872:
			switch (iParam1)
			{
				case 1:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX1_PRIVATE_CLUB_01";
					break;
				
				case 2:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX1_PRIVATE_CLUB_02";
					break;
				
				case 3:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX1_PRIVATE_CLUB_03";
					break;
			}
			break;
		
		case 1728275355:
			switch (iParam1)
			{
				case 1:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX2_PRIVATE_CLUB_01";
					break;
				
				case 2:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX2_PRIVATE_CLUB_02";
					break;
				
				case 3:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX2_PRIVATE_CLUB_03";
					break;
			}
			break;
		
		case -2078417767:
			switch (iParam1)
			{
				case 1:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX3_PRIVATE_CLUB_01";
					break;
				
				case 2:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX3_PRIVATE_CLUB_02";
					break;
				
				case 3:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX3_PRIVATE_CLUB_03";
					break;
			}
			break;
		
		case -332827399:
			switch (iParam1)
			{
				case 1:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX4_PRIVATE_CLUB_01";
					break;
				
				case 2:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX4_PRIVATE_CLUB_02";
					break;
				
				case 3:
					return "DLC_BATTLE_MUSIC_BATTLE_MIX4_PRIVATE_CLUB_03";
					break;
			}
			break;
	}
	return "";
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
			return 296;
		
		case 7:
			return 482;
		
		case 8:
			return 311;
		
		case 11:
			return 450;
		
		default:
	}
	return 0;
}

int func_239(var uParam0)
{
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	iVar1 = func_145(uParam0);
	return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / fVar0));
}

void func_240(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_249(iParam0, &iVar0, &bVar1, &iVar2);
	if (bParam2)
	{
		uParam1->f_324[0] = func_228(iVar0, iParam5);
		uParam1->f_324[0].f_1 = { func_219(iVar0, iParam5, iParam6, iParam3, iParam4, bVar1, iVar2) };
	}
	else
	{
		uParam1->f_324[0] = func_246(iVar0, iParam5);
		uParam1->f_324[0].f_1 = { func_241(iVar0, iParam5, iParam3, iParam4, bVar1, iVar2) };
	}
}

struct<16> func_241(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	switch (iParam0)
	{
		case 0:
			return func_245(iParam1, iParam2, iParam3, bParam4, iParam5);
		
		case 1:
			return func_244(iParam1, iParam2, iParam3, bParam4, iParam5);
		
		case 2:
			return func_243(iParam1, iParam2, iParam3, bParam4, iParam5);
		
		case 3:
			return func_242(iParam1, iParam2, iParam3, bParam4, iParam5);
		
		default:
	}
	return Var0;
}

struct<16> func_242(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			StringCopy(&Var0, "li_dance_crowd_", 64);
			break;
		
		case 2:
			StringCopy(&Var0, "mi_dance_crowd_", 64);
			break;
		
		case 3:
		case 4:
			StringCopy(&Var0, "hi_dance_crowd_", 64);
			break;
	}
	if (iParam1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iParam1, 64);
	StringConCat(&Var0, "_v", 64);
	StringIntConCat(&Var0, iParam2, 64);
	if (!bParam3)
	{
		StringConCat(&Var0, "_male", 64);
	}
	else
	{
		StringConCat(&Var0, "_female", 64);
	}
	StringConCat(&Var0, "^", 64);
	StringIntConCat(&Var0, iParam4, 64);
	return Var0;
}

struct<16> func_243(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			StringCopy(&Var0, "li-mi_amb_club_", 64);
			break;
		
		case 3:
		case 4:
			StringCopy(&Var0, "mi-hi_amb_club_", 64);
			break;
	}
	if (iParam1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iParam1, 64);
	if (iParam1 == 6)
	{
		StringConCat(&Var0, "_base", 64);
	}
	else
	{
		StringConCat(&Var0, "_v", 64);
		StringIntConCat(&Var0, iParam2, 64);
	}
	if (!bParam3)
	{
		StringConCat(&Var0, "_male", 64);
	}
	else
	{
		StringConCat(&Var0, "_female", 64);
	}
	StringConCat(&Var0, "^", 64);
	StringIntConCat(&Var0, iParam4, 64);
	return Var0;
}

struct<16> func_244(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			StringCopy(&Var0, "li_dance_prop_", 64);
			break;
		
		case 2:
			StringCopy(&Var0, "mi_dance_prop_", 64);
			break;
		
		case 3:
		case 4:
			StringCopy(&Var0, "hi_dance_prop_", 64);
			break;
	}
	if (iParam1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iParam1, 64);
	StringConCat(&Var0, "_v", 64);
	StringIntConCat(&Var0, iParam2, 64);
	if (!bParam3)
	{
		StringConCat(&Var0, "_male", 64);
	}
	else
	{
		StringConCat(&Var0, "_female", 64);
	}
	StringConCat(&Var0, "^", 64);
	StringIntConCat(&Var0, iParam4, 64);
	return Var0;
}

struct<16> func_245(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			StringCopy(&Var0, "li_dance_facedj_", 64);
			break;
		
		case 2:
			StringCopy(&Var0, "mi_dance_facedj_", 64);
			break;
		
		case 3:
		case 4:
			StringCopy(&Var0, "hi_dance_facedj_", 64);
			break;
	}
	if (iParam1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iParam1, 64);
	StringConCat(&Var0, "_v", 64);
	StringIntConCat(&Var0, iParam2, 64);
	if (!bParam3)
	{
		StringConCat(&Var0, "_male", 64);
	}
	else
	{
		StringConCat(&Var0, "_female", 64);
	}
	StringConCat(&Var0, "^", 64);
	StringIntConCat(&Var0, iParam4, 64);
	return Var0;
}

char* func_246(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return "anim@amb@nightclub@dancers@crowddance_facedj@low_intesnsity";
				
				case 2:
					return "anim@amb@nightclub@dancers@crowddance_facedj@med_intensity";
				
				case 3:
				case 4:
					return "anim@amb@nightclub@dancers@crowddance_facedj@hi_intensity";
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return "anim@amb@nightclub@dancers@crowddance_single_props@low_intensity";
				
				case 2:
					return "anim@amb@nightclub@dancers@crowddance_single_props@med_intensity";
				
				case 3:
				case 4:
					return "anim@amb@nightclub@dancers@crowddance_single_props@hi_intensity";
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "anim@amb@nightclub@dancers@club_ambientpeds@low-med_intensity";
				
				case 3:
				case 4:
					return "anim@amb@nightclub@dancers@club_ambientpeds@med-hi_intensity";
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return "anim@amb@nightclub@dancers@crowddance_groups@low_intensity";
				
				case 2:
					return "anim@amb@nightclub@dancers@crowddance_groups@med_intensity";
				
				case 3:
				case 4:
					return "anim@amb@nightclub@dancers@crowddance_groups@hi_intensity";
				
				default:
			}
			break;
	}
	return "";
}

int func_247(int iParam0)
{
	return ((iParam0 % 100) / 20);
}

bool func_248(int iParam0)
{
	return (iParam0 % 2) == 1;
}

void func_249(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 12:
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam3 = 1;
			break;
		
		case 13:
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam3 = 2;
			break;
		
		case 14:
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam3 = 3;
			break;
		
		case 15:
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam3 = 4;
			break;
		
		case 16:
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam3 = 5;
			break;
		
		case 17:
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam3 = 6;
			break;
		
		case 18:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 1;
			break;
		
		case 19:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 2;
			break;
		
		case 20:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 3;
			break;
		
		case 21:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 4;
			break;
		
		case 22:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 5;
			break;
		
		case 23:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 1;
			break;
		
		case 48:
			*uParam1 = 2;
			*uParam2 = 0;
			*uParam3 = 1;
			break;
		
		case 49:
			*uParam1 = 2;
			*uParam2 = 0;
			*uParam3 = 2;
			break;
		
		case 50:
			*uParam1 = 2;
			*uParam2 = 0;
			*uParam3 = 3;
			break;
		
		case 51:
			*uParam1 = 2;
			*uParam2 = 0;
			*uParam3 = 4;
			break;
		
		case 52:
			*uParam1 = 2;
			*uParam2 = 0;
			*uParam3 = 5;
			break;
		
		case 53:
			*uParam1 = 2;
			*uParam2 = 0;
			*uParam3 = 6;
			break;
		
		case 54:
			*uParam1 = 2;
			*uParam2 = 1;
			*uParam3 = 1;
			break;
		
		case 55:
			*uParam1 = 2;
			*uParam2 = 1;
			*uParam3 = 2;
			break;
		
		case 56:
			*uParam1 = 2;
			*uParam2 = 1;
			*uParam3 = 3;
			break;
		
		case 57:
			*uParam1 = 2;
			*uParam2 = 1;
			*uParam3 = 4;
			break;
		
		case 58:
			*uParam1 = 2;
			*uParam2 = 1;
			*uParam3 = 5;
			break;
		
		case 59:
			*uParam1 = 2;
			*uParam2 = 1;
			*uParam3 = 6;
			break;
		
		case 24:
			*uParam1 = 3;
			*uParam2 = 0;
			*uParam3 = 1;
			break;
		
		case 25:
			*uParam1 = 3;
			*uParam2 = 0;
			*uParam3 = 2;
			break;
		
		case 26:
			*uParam1 = 3;
			*uParam2 = 0;
			*uParam3 = 3;
			break;
		
		case 27:
			*uParam1 = 3;
			*uParam2 = 0;
			*uParam3 = 4;
			break;
		
		case 28:
			*uParam1 = 3;
			*uParam2 = 0;
			*uParam3 = 5;
			break;
		
		case 29:
			*uParam1 = 3;
			*uParam2 = 0;
			*uParam3 = 6;
			break;
		
		case 30:
			*uParam1 = 3;
			*uParam2 = 1;
			*uParam3 = 1;
			break;
		
		case 31:
			*uParam1 = 3;
			*uParam2 = 1;
			*uParam3 = 2;
			break;
		
		case 32:
			*uParam1 = 3;
			*uParam2 = 1;
			*uParam3 = 3;
			break;
		
		case 33:
			*uParam1 = 3;
			*uParam2 = 1;
			*uParam3 = 4;
			break;
		
		case 34:
			*uParam1 = 3;
			*uParam2 = 1;
			*uParam3 = 5;
			break;
		
		case 35:
			*uParam1 = 3;
			*uParam2 = 1;
			*uParam3 = 6;
			break;
		
		case 36:
			*uParam1 = 1;
			*uParam2 = 0;
			*uParam3 = 1;
			break;
		
		case 37:
			*uParam1 = 1;
			*uParam2 = 0;
			*uParam3 = 2;
			break;
		
		case 38:
			*uParam1 = 1;
			*uParam2 = 0;
			*uParam3 = 3;
			break;
		
		case 39:
			*uParam1 = 1;
			*uParam2 = 0;
			*uParam3 = 4;
			break;
		
		case 40:
			*uParam1 = 1;
			*uParam2 = 0;
			*uParam3 = 5;
			break;
		
		case 41:
			*uParam1 = 1;
			*uParam2 = 0;
			*uParam3 = 6;
			break;
		
		case 42:
			*uParam1 = 1;
			*uParam2 = 1;
			*uParam3 = 1;
			break;
		
		case 43:
			*uParam1 = 1;
			*uParam2 = 1;
			*uParam3 = 2;
			break;
		
		case 44:
			*uParam1 = 1;
			*uParam2 = 1;
			*uParam3 = 3;
			break;
		
		case 45:
			*uParam1 = 1;
			*uParam2 = 1;
			*uParam3 = 4;
			break;
		
		case 46:
			*uParam1 = 1;
			*uParam2 = 1;
			*uParam3 = 5;
			break;
		
		case 47:
			*uParam1 = 1;
			*uParam2 = 1;
			*uParam3 = 6;
			break;
	}
}

int func_250(var uParam0, var uParam1, int iParam2)
{
	uVar0 = MISC::GET_GAME_TIMER();
	uParam1->f_38 = uVar0;
	if (iParam2 == -1)
	{
	}
	if (uParam1->f_17)
	{
		if (func_9(uParam1->f_6))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam1->f_11))
			{
				iVar1 = func_145(uParam1);
				iVar2 = 500;
				if (func_10(uParam1->f_6))
				{
					iVar2 = 1500;
				}
				if ((iVar1 < (uParam0->f_7552 + iVar2) || func_239(uParam1) <= 1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam1->f_11) >= 1f)
				{
					return 1;
				}
				if (func_10(uParam1->f_6) && uParam1->f_10 == (func_238(uParam1->f_6) - 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else if (func_134(uParam1->f_6) || func_231(uParam1->f_6))
		{
			iVar3 = TASK::GET_SCRIPT_TASK_STATUS(*uParam1, -2017877118);
			if (iVar3 == 1)
			{
				iVar4 = func_145(uParam1);
				if (iVar4 < uParam0->f_7552 + 500)
				{
					return 1;
				}
				if (func_134(uParam1->f_6))
				{
					Var5 = 2;
					Var5.f_1 = 1;
					Var5.f_3 = 1065353216;
					Var5.f_5 = 1065353216;
					Var5.f_6 = -1;
					Var5.f_7 = 4;
					Var5.f_7.f_1.f_9 = 1082130432;
					Var5.f_7.f_1.f_10 = -1065353216;
					Var5.f_7.f_1.f_12 = 2;
					Var5.f_7.f_1.f_12.f_1.f_11 = 1073741824;
					Var5.f_7.f_1.f_12.f_1.f_12 = 1073741824;
					Var5.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
					Var5.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
					Var5.f_7.f_1.f_41 = 2;
					Var5.f_7.f_1.f_41.f_1 = 1065353216;
					Var5.f_7.f_1.f_41.f_1.f_11 = -1;
					Var5.f_7.f_1.f_41.f_1.f_13 = 1065353216;
					Var5.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
					Var5.f_7.f_1.f_68 = 1;
					Var5.f_7.f_1.f_68.f_1 = 1073741824;
					Var5.f_7.f_1.f_68.f_1.f_1 = 1073741824;
					Var5.f_7.f_1.f_68.f_1.f_3 = -1082130432;
					Var5.f_7.f_1.f_79.f_9 = 1082130432;
					Var5.f_7.f_1.f_79.f_10 = -1065353216;
					Var5.f_7.f_1.f_79.f_12 = 2;
					Var5.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
					Var5.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
					Var5.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var5.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var5.f_7.f_1.f_79.f_41 = 2;
					Var5.f_7.f_1.f_79.f_41.f_1 = 1065353216;
					Var5.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
					Var5.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
					Var5.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
					Var5.f_7.f_1.f_79.f_68 = 1;
					Var5.f_7.f_1.f_79.f_68.f_1 = 1073741824;
					Var5.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
					Var5.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
					Var5.f_7.f_1.f_79.f_79.f_9 = 1082130432;
					Var5.f_7.f_1.f_79.f_79.f_10 = -1065353216;
					Var5.f_7.f_1.f_79.f_79.f_12 = 2;
					Var5.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_41 = 2;
					Var5.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
					Var5.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
					Var5.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
					Var5.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
					Var5.f_7.f_1.f_79.f_79.f_68 = 1;
					Var5.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
					Var5.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
					Var5.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
					Var5.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
					Var5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
					Var5.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
					Var5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
					Var5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
					Var5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
					Var5.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
					Var5.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
					Var5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
					Var5.f_324 = 2;
					Var5.f_324.f_1.f_18 = 1082130432;
					Var5.f_324.f_1.f_19 = -1065353216;
					Var5.f_324.f_1.f_20 = 1;
					Var5.f_324.f_1.f_21 = 2;
					Var5.f_324.f_1.f_21.f_1 = 1065353216;
					Var5.f_324.f_1.f_21.f_1.f_11 = -1;
					Var5.f_324.f_1.f_21.f_1.f_13 = 1065353216;
					Var5.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
					Var5.f_324.f_1.f_48.f_18 = 1082130432;
					Var5.f_324.f_1.f_48.f_19 = -1065353216;
					Var5.f_324.f_1.f_48.f_20 = 1;
					Var5.f_324.f_1.f_48.f_21 = 2;
					Var5.f_324.f_1.f_48.f_21.f_1 = 1065353216;
					Var5.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
					Var5.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
					Var5.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
					func_240(uParam1->f_6, &Var5, func_248(uParam1->f_54), func_132(uParam1->f_54), func_131(uParam1->f_54), func_133(uParam1->f_54), func_247(uParam1->f_54));
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, Var5.f_324[0], &(Var5.f_324[0].f_1), 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam1, Var5.f_324[0], &(Var5.f_324[0].f_1)) >= 1f)
					{
						return 1;
					}
				}
			}
			else
			{
				return 1;
			}
		}
	}
	else if ((func_134(uParam1->f_6) || func_231(uParam1->f_6)) || func_10(uParam1->f_6))
	{
		return 1;
	}
	return 0;
}

void func_251(var uParam0)
{
	fVar0 = MISC::GET_FRAME_TIME();
	fVar1 = (SYSTEM::TO_FLOAT(125) / SYSTEM::TO_FLOAT(uParam0->f_7549));
	fVar2 = ((fVar0 * fVar1) * 1000f);
	uVar3 = SYSTEM::FLOOR(fVar2);
	uParam0->f_7552 = uVar3;
}

void func_252(var uParam0)
{
	func_537(uParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Bogs", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Hall", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Stairs", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_garage", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area_2", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_office", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_rear_L_corridor", 0);
	AUDIO::_0x2ACABED337622DF2("DLC_BTL_Nightclub_SCL");
	func_253();
}

void func_253()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_254(var uParam0)
{
	StringCopy(&cVar2, "", 64);
	Var21.f_1 = 12;
	Var21.f_38 = 9;
	Var21.f_38.f_1 = -1;
	Var21.f_38.f_1.f_2 = -1;
	Var21.f_38.f_1.f_2.f_2 = -1;
	Var21.f_38.f_1.f_2.f_2.f_2 = -1;
	Var21.f_38.f_1.f_2.f_2.f_2.f_2 = -1;
	Var21.f_38.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var21.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var21.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var21.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var21.f_57 = -1569615261;
	bVar79 = false;
	Var80 = { -1604.66f, -3012.58f, -80f };
	Var83 = { 0f, 0f, 0f };
	iVar86 = func_333(func_6());
	iVar87 = Global_1316783;
	if ((MISC::GET_FRAME_COUNT() % 120) == 0)
	{
	}
	switch (uParam0->f_7906)
	{
		case 0:
			if (func_5(&(uParam0->f_7951)) && func_3(&(uParam0->f_7951), 15000, 0))
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CLUB_OPEN_TRANSITION_CROWD");
				func_2(&(uParam0->f_7951));
			}
			if (uParam0->f_7560 && Global_1316766)
			{
				func_332(uParam0, 1);
			}
			break;
		
		case 1:
			uParam0->f_7953 = 0;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				iVar19 = iVar0;
				func_331(&Var21);
				func_313(iVar86, iVar87, iVar19, &Var21);
				if (Var21 != 0)
				{
					bVar79 = false;
					iVar1 = 0;
					while (iVar1 < (8 - 4))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(func_312(iVar86, iVar87, iVar1 + 4, iVar19)))
						{
							bVar79 = true;
						}
						else
						{
							iVar1++;
						}
					}
					if (bVar79)
					{
						STREAMING::REQUEST_MODEL(Var21);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar20 = iVar0;
				if (func_311(iVar20) != 0)
				{
					bVar79 = false;
					iVar1 = 0;
					while (iVar1 < (8 - 4))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(func_310(iVar86, iVar87, iVar1 + 4, iVar20)))
						{
							bVar79 = true;
						}
						else
						{
							iVar1++;
						}
					}
					if (bVar79)
					{
						STREAMING::REQUEST_MODEL(func_311(iVar20));
					}
				}
				iVar0++;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_309(iVar86, iVar87, 4)))
			{
				STREAMING::REQUEST_ANIM_DICT(func_309(iVar86, iVar87, 4));
			}
			func_332(uParam0, 2);
			break;
		
		case 2:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				iVar19 = iVar0;
				func_331(&Var21);
				func_313(iVar86, iVar87, iVar19, &Var21);
				if (Var21 != 0)
				{
					bVar79 = false;
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < (8 - 4))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(func_312(iVar86, iVar87, iVar1 + 4, iVar19)))
						{
							bVar79 = true;
						}
						else
						{
							iVar1++;
						}
					}
					if (bVar79)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_6[iVar0]))
						{
							STREAMING::REQUEST_MODEL(Var21);
							if (!STREAMING::HAS_MODEL_LOADED(Var21))
							{
								return;
							}
							else
							{
								uParam0->f_7906.f_6[iVar0] = PED::CREATE_PED(4, Var21, Var80, 0f, 0, 1);
								if (Var21 != 1744231373)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < 12)
									{
										if ((Var21.f_1[iVar1].f_2 != -1 && Var21.f_1[iVar1].f_1 != -1) && Var21.f_1[iVar1] != -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(uParam0->f_7906.f_6[iVar0], iVar1, Var21.f_1[iVar1], Var21.f_1[iVar1].f_1, Var21.f_1[iVar1].f_2);
										}
										iVar1++;
									}
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < 9)
									{
										if (Var21.f_38[iVar1] != -1 && Var21 != 1182156569)
										{
											PED::SET_PED_PROP_INDEX(uParam0->f_7906.f_6[iVar0], iVar1, Var21.f_38[iVar1], Var21.f_38[iVar1].f_1, 0);
										}
										iVar1++;
									}
								}
								ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_6[iVar0], false, 0);
								ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_6[iVar0], true);
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7906.f_6[iVar0], 0) && !PED::_HAS_STREAMED_PED_ASSETS_LOADED(uParam0->f_7906.f_6[iVar0]))
						{
							return;
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar20 = iVar0;
				if (func_311(iVar20) != 0)
				{
					bVar79 = false;
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < (8 - 4))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(func_310(iVar86, iVar87, iVar1 + 4, iVar20)))
						{
							bVar79 = true;
						}
						else
						{
							iVar1++;
						}
					}
					if (bVar79)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_27[iVar0]))
						{
							STREAMING::REQUEST_MODEL(func_311(iVar20));
							if (!STREAMING::HAS_MODEL_LOADED(func_311(iVar20)))
							{
								return;
							}
							else
							{
								uParam0->f_7906.f_27[iVar0] = OBJECT::CREATE_OBJECT(func_311(iVar20), Var80 + Vector(IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0)), 0, 1, 0);
								ENTITY::SET_ENTITY_COORDS(uParam0->f_7906.f_27[iVar0], Var80, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_27[iVar0], false, 0);
								ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_27[iVar0], true);
							}
						}
					}
				}
				iVar0++;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_309(iVar86, iVar87, 4)))
			{
				STREAMING::REQUEST_ANIM_DICT(func_309(iVar86, iVar87, 4));
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_309(iVar86, iVar87, 4)))
				{
					return;
				}
			}
			if (CAM::DOES_CAM_EXIST(uParam0->f_7906.f_34))
			{
				CAM::DESTROY_CAM(uParam0->f_7906.f_34, 0);
			}
			uParam0->f_7906.f_34 = CAM::CREATE_CAMERA(964613260, 0);
			uParam0->f_7906.f_35 = PED::CREATE_SYNCHRONIZED_SCENE(Var80, Var83, 2);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				iVar19 = iVar0;
				func_313(iVar86, iVar87, iVar19, &Var21);
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_6[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7906.f_6[iVar0], 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_312(iVar86, iVar87, 4, iVar19)))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_6[iVar0], false);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_6[iVar0], true, 0);
					StringCopy(&cVar2, func_312(iVar86, iVar87, 4, iVar19), 64);
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_7906.f_6[iVar0], uParam0->f_7906.f_35, func_309(iVar86, iVar87, 4), &cVar2, 1000f, -1000f, 0, 0, 1148846080, 0);
					if (((iVar19 == 0 || iVar19 == 1) || iVar19 == 2) || iVar19 == 3)
					{
						StringConCat(&cVar2, "_Face", 64);
						TASK::TASK_PLAY_ANIM(uParam0->f_7906.f_6[iVar0], func_309(iVar86, iVar87, 4), &cVar2, 1090519040, -1056964608, -1, 32, 0, 0, 0, 0);
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var21);
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar20 = iVar0;
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7906.f_27[iVar0], 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_310(iVar86, iVar87, 4, iVar20)))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_27[iVar0], false);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_27[iVar0], true, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_7906.f_27[iVar0], uParam0->f_7906.f_35, func_310(iVar86, iVar87, 4, iVar20), func_309(iVar86, iVar87, 4), 1000f, -1000f, 0, 1148846080);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_311(iVar20));
				iVar0++;
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_7906.f_34, uParam0->f_7906.f_35, func_308(iVar86, iVar87, 4), func_309(iVar86, iVar87, 4));
			STREAMING::REMOVE_ANIM_DICT(func_309(iVar86, iVar87, 4));
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CLUB_OPEN_TRANSITION_CROWD", 0, -1))
			{
				return;
			}
			if (AUDIO::LOAD_STREAM("DJ_Changeover", "dlc_btl_club_dj_changeover_sounds"))
			{
				func_332(uParam0, 3);
			}
			break;
		
		case 3:
			func_307(1);
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_7906.f_35) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_7906.f_35) > 0f)
			{
				if (!AUDIO::IS_STREAM_PLAYING())
				{
					AUDIO::PLAY_STREAM_FRONTEND();
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				CAM::SET_CAM_ACTIVE(uParam0->f_7906.f_34, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				func_304(1, 1, 1, 0, 0, 0);
				func_301(1, 1);
				func_292(PLAYER::PLAYER_ID(), 0, 0, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_2(&(uParam0->f_7906.f_1));
				func_332(uParam0, 4);
			}
			break;
		
		case 4:
			func_307(1);
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (iVar86 == 3 && iVar87 == 2)
			{
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_7906.f_35) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_7906.f_35) > 0.95f) && !uParam0->f_7953)
				{
					uVar18 = PED::CREATE_SYNCHRONIZED_SCENE(Var80, Var83, 2);
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 20)
					{
						iVar19 = iVar0;
						if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_6[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7906.f_6[iVar0], 0)) && ((((((((((iVar19 == 7 || iVar19 == 8) || iVar19 == 9) || iVar19 == 4) || iVar19 == 5) || iVar19 == 6) || iVar19 == 15) || iVar19 == 16) || iVar19 == 17) || iVar19 == 18) || iVar19 == 19))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(func_312(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar19)))
							{
								ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_6[iVar0], false);
								ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_6[iVar0], true, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_7906.f_6[iVar0], uVar18, func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), func_312(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar19), 1000f, -1000f, 0, 0, 1148846080, 0);
							}
						}
						iVar0++;
					}
					uParam0->f_7953 = 1;
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906))))
			{
				STREAMING::REQUEST_ANIM_DICT(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)));
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_7906.f_35) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_7906.f_35) > 0.99f)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906))))
					{
						uParam0->f_7906.f_35 = PED::CREATE_SYNCHRONIZED_SCENE(Var80, Var83, 2);
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 20)
						{
							iVar19 = iVar0;
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_6[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7906.f_6[iVar0], 0))
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_312(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar19)))
								{
									StringCopy(&cVar2, func_312(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar19), 64);
									if (iVar86 == 3 && iVar87 == 2)
									{
										if (!((((((((((iVar19 == 7 || iVar19 == 8) || iVar19 == 9) || iVar19 == 4) || iVar19 == 5) || iVar19 == 6) || iVar19 == 15) || iVar19 == 16) || iVar19 == 17) || iVar19 == 18) || iVar19 == 19))
										{
											ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_6[iVar0], false);
											ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_6[iVar0], true, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_7906.f_6[iVar0], uParam0->f_7906.f_35, func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), &cVar2, 1000f, -1000f, 0, 0, 1148846080, 0);
										}
									}
									else
									{
										ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_6[iVar0], false);
										ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_6[iVar0], true, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_7906.f_6[iVar0], uParam0->f_7906.f_35, func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), &cVar2, 1000f, -1000f, 0, 0, 1148846080, 0);
									}
									if (((iVar19 == 0 || iVar19 == 1) || iVar19 == 2) || iVar19 == 3)
									{
										StringConCat(&cVar2, "_Face", 64);
										TASK::TASK_PLAY_ANIM(uParam0->f_7906.f_6[iVar0], func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), &cVar2, 1090519040, -1056964608, -1, 32, 0, 0, 0, 0);
									}
								}
								else
								{
									ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_6[iVar0], true);
									ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_6[iVar0], false, 0);
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 6)
						{
							iVar20 = iVar0;
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7906.f_27[iVar0], 0))
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_310(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar20)))
								{
									ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_27[iVar0], false);
									ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_27[iVar0], true, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_7906.f_27[iVar0], uParam0->f_7906.f_35, func_310(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar20), func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), 1000f, -1000f, 0, 1148846080);
								}
								else
								{
									ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_27[iVar0], true);
									ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_27[iVar0], false, 0);
								}
							}
							iVar0++;
						}
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_7906.f_34, uParam0->f_7906.f_35, func_308(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)));
						if (!MISC::ARE_STRINGS_EQUAL(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), func_309(iVar86, iVar87, func_291(iVar86, func_291(iVar86, uParam0->f_7906)))))
						{
							STREAMING::REMOVE_ANIM_DICT(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)));
						}
						func_332(uParam0, func_291(iVar86, uParam0->f_7906));
					}
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_7906.f_35) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_7906.f_35) > 0.99f)
			{
				if (func_6() != PLAYER::PLAYER_ID())
				{
					CAM::DO_SCREEN_FADE_OUT(322);
				}
				func_332(uParam0, 9);
			}
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			func_307(1);
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906))))
			{
				STREAMING::REQUEST_ANIM_DICT(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)));
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_7906.f_35) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_7906.f_35) > 0.99f)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906))))
					{
						uParam0->f_7906.f_35 = PED::CREATE_SYNCHRONIZED_SCENE(Var80, Var83, 2);
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 20)
						{
							iVar19 = iVar0;
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_6[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7906.f_6[iVar0], 0))
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_312(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar19)))
								{
									ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_6[iVar0], false);
									ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_6[iVar0], true, 0);
									StringCopy(&cVar2, func_312(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar19), 64);
									TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_7906.f_6[iVar0], uParam0->f_7906.f_35, func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), &cVar2, 1000f, -1000f, 0, 0, 1148846080, 0);
									if (((iVar19 == 0 || iVar19 == 1) || iVar19 == 2) || iVar19 == 3)
									{
										StringConCat(&cVar2, "_Face", 64);
										TASK::TASK_PLAY_ANIM(uParam0->f_7906.f_6[iVar0], func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), &cVar2, 1090519040, -1056964608, -1, 32, 0, 0, 0, 0);
									}
								}
								else
								{
									ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_6[iVar0], true);
									ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_6[iVar0], false, 0);
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 6)
						{
							iVar20 = iVar0;
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7906.f_27[iVar0], 0))
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_310(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar20)))
								{
									ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_27[iVar0], false);
									ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_27[iVar0], true, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_7906.f_27[iVar0], uParam0->f_7906.f_35, func_310(iVar86, iVar87, func_291(iVar86, uParam0->f_7906), iVar20), func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), 1000f, -1000f, 0, 1148846080);
								}
								else
								{
									ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7906.f_27[iVar0], true);
									ENTITY::SET_ENTITY_VISIBLE(uParam0->f_7906.f_27[iVar0], false, 0);
								}
							}
							iVar0++;
						}
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_7906.f_34, uParam0->f_7906.f_35, func_308(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)));
						if (!MISC::ARE_STRINGS_EQUAL(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)), func_309(iVar86, iVar87, func_291(iVar86, func_291(iVar86, uParam0->f_7906)))))
						{
							STREAMING::REMOVE_ANIM_DICT(func_309(iVar86, iVar87, func_291(iVar86, uParam0->f_7906)));
						}
						func_332(uParam0, func_291(iVar86, uParam0->f_7906));
					}
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_7906.f_35) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_7906.f_35) > 0.99f)
			{
				if (func_6() != PLAYER::PLAYER_ID())
				{
					CAM::DO_SCREEN_FADE_OUT(322);
				}
				func_332(uParam0, 9);
			}
			if (!func_5(&(uParam0->f_7906.f_1)))
			{
				func_4(&(uParam0->f_7906.f_1), 0, 0);
			}
			if (func_3(&(uParam0->f_7906.f_1), 30000, 0))
			{
				func_2(&(uParam0->f_7906.f_1));
				func_332(uParam0, 9);
			}
			break;
		
		case 9:
			func_307(1);
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (!func_5(&(uParam0->f_7906.f_3)))
			{
				func_4(&(uParam0->f_7906.f_3), 0, 0);
			}
			if (func_3(&(uParam0->f_7906.f_3), 5000, 0))
			{
				uParam0->f_7906.f_5 = 1;
			}
			if ((!func_5(&(uParam0->f_7906.f_1)) || func_3(&(uParam0->f_7906.f_1), 1000, 0)) || uParam0->f_7906.f_5)
			{
				func_2(&(uParam0->f_7906.f_3));
				func_255(uParam0);
				if (func_6() != PLAYER::PLAYER_ID())
				{
					Global_1316766 = 0;
					func_332(uParam0, 10);
				}
				else
				{
					func_4(&(uParam0->f_7951), 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "club_crowd_transition", "dlc_btl_club_open_transition_crowd_sounds", 1);
					uParam0->f_7560 = 0;
					func_332(uParam0, 0);
					iVar0 = 0;
					while (iVar0 < 125)
					{
						uParam0->f_7421[iVar0] = 1;
						iVar0++;
					}
				}
			}
			break;
		
		case 10:
			if (Global_1316766)
			{
				func_4(&(uParam0->f_7951), 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "club_crowd_transition", "dlc_btl_club_open_transition_crowd_sounds", 1);
				CAM::DO_SCREEN_FADE_IN(322);
				uParam0->f_7560 = 0;
				func_332(uParam0, 0);
			}
			break;
	}
}

void func_255(var uParam0)
{
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_7906.f_34))
	{
		CAM::DESTROY_CAM(uParam0->f_7906.f_34, 0);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_6[iVar0]))
		{
			PED::DELETE_PED(&(uParam0->f_7906.f_6[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7906.f_27[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_7906.f_27[iVar0]));
		}
		iVar0++;
	}
	func_304(0, 1, 1, 0, 0, 0);
	bVar1 = false;
	if (func_285())
	{
		bVar1 = true;
	}
	func_260(bVar1, 1, 0, 1);
	func_336(0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_42570))
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER(&Global_42570);
	}
	if (func_6() == PLAYER::PLAYER_ID())
	{
		func_259(0, -1);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1591.485f, -3013.607f, -80.006f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 74.0804f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(12.1322f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.2652f, 1065353216);
	}
	if (((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !func_258()) && func_256()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		func_292(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
}

int func_256()
{
	if (func_257() == 0)
	{
		return 1;
	}
	return 0;
}

int func_257()
{
	return Global_1312467.f_18;
}

bool func_258()
{
	return Global_1312877;
}

void func_259(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), 16);
		if (iParam1 == 1 || iParam1 == 3)
		{
			MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), 21);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), 21);
		}
		if (iParam1 == 2 || iParam1 == 3)
		{
			MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), 22);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), 22);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_2), 16);
	}
}

void func_260(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_283();
	if (bParam0)
	{
		func_281(1);
		HUD::CLEAR_HELP(1);
	}
	HUD::CLEAR_PRINTS();
	func_274();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
	func_304(0, 1, 1, 0, 0, bParam2);
	func_273();
	func_272(12, 0, -1);
	func_271(1);
	CAM::SET_WIDESCREEN_BORDERS(0, -1);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	func_270();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam3)
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 0);
			}
		}
	}
	func_269(0);
	if (((((func_258() == 0 && func_268() == 0) && iParam1) && !func_266(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_256())
	{
		func_292(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2439138.f_3747 = 0;
	func_261();
}

void func_261()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_5(&Global_2546022))
	{
		if (!func_3(&Global_2546022, 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID()))
		{
			if (!func_265())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_95(&Global_2546022, 1, 0);
				}
				else if (!func_263(PLAYER::PLAYER_ID(), 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1992968846) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1992968846) != 0)
					{
						NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(1);
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), 1);
					}
					ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, 0);
				}
			}
			else
			{
				func_95(&Global_2546022, 1, 0);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
			}
			func_2(&Global_2546022);
		}
	}
	if (Global_2546026 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (MISC::IS_BIT_SET(Global_2546026, iVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_88(iVar1, 1, 1))
				{
					func_262(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_262(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2546026, iParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_3(&(Global_2546027[iParam0]), 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(iParam0))
		{
			if (!func_265())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_95(&(Global_2546027[iParam0]), 1, 0);
				}
				else if (!func_263(iParam0, 0))
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(iParam0, 1);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
					{
						ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0), 255, 0);
					}
				}
			}
			else
			{
				func_95(&(Global_2546027[iParam0]), 1, 0);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0));
			}
			func_2(&(Global_2546027[iParam0]));
			MISC::CLEAR_BIT(&Global_2546026, iParam0);
		}
	}
}

bool func_263(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_264(-1, 0) == 8;
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

int func_264(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_119();
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

int func_265()
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

int func_266(int iParam0)
{
	if (func_263(iParam0, 0))
	{
		return 1;
	}
	if (func_267())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_267()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_268()
{
	return MISC::IS_BIT_SET(Global_2450632, 7);
}

void func_269(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

void func_270()
{
	Global_22211.f_5 = 0;
}

void func_271(int iParam0)
{
	Global_2537071.f_4531 = iParam0;
}

void func_272(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1377170.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1377170.f_1046), iParam0);
			}
			break;
	}
}

void func_273()
{
	func_271(1);
	func_272(4, 0, -1);
	func_272(6, 0, -1);
	func_272(7, 0, -1);
	func_272(3, 0, -1);
	func_272(1, 0, -1);
	func_272(2, 0, -1);
	func_272(11, 0, -1);
	func_272(13, 0, -1);
	func_272(14, 0, -1);
	func_272(16, 0, -1);
}

void func_274()
{
	func_275(0);
}

void func_275(bool bParam0)
{
	if (bParam0)
	{
		func_280();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_89(0))
		{
			func_276(0);
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

void func_276(int iParam0)
{
	if (func_279())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_278())
		{
			func_277(1, 1);
		}
		else
		{
			func_277(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_37())
	{
		Global_19486.f_1 = 3;
	}
}

void func_277(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_89(0))
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

bool func_278()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_279()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_280()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_281(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		HUD::CLEAR_FLOATING_HELP(iVar0, iParam0);
		func_282(iVar0);
		iVar0++;
	}
}

void func_282(int iParam0)
{
	Global_110290[iParam0].f_21 = 0;
	StringCopy(&(Global_110290[iParam0]), "", 16);
	StringCopy(&(Global_110290[iParam0].f_4), "", 64);
	Global_110290[iParam0].f_23 = 0;
	Global_110290[iParam0].f_24 = { 0f, 0f, 0f };
	Global_110290[iParam0].f_27 = 0;
	Global_110290[iParam0].f_20 = 0;
	Global_110290[iParam0].f_22 = 0;
}

void func_283()
{
	if (!Global_1312575)
	{
		return;
	}
	func_284();
}

void func_284()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

int func_285()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		if (func_286(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_286(int iParam0)
{
	iVar0 = iParam0;
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_110290[iParam0]), "") && !MISC::IS_STRING_NULL(&(Global_110290[iParam0])))
	{
		if (MISC::IS_BIT_SET(Global_110290[iParam0].f_27, 1))
		{
			if (MISC::IS_BIT_SET(Global_110290[iParam0].f_27, 2))
			{
				return func_290(iVar0, &(Global_110290[iParam0]), &(Global_110290[iParam0].f_4), Global_110290[iParam0].f_20);
			}
			else
			{
				return func_289(iVar0, &(Global_110290[iParam0]), &(Global_110290[iParam0].f_4));
			}
		}
		else if (MISC::IS_BIT_SET(Global_110290[iParam0].f_27, 2))
		{
			return func_288(iVar0, &(Global_110290[iParam0]), Global_110290[iParam0].f_20);
		}
		else
		{
			return func_287(iVar0, &(Global_110290[iParam0]));
		}
	}
	return 0;
}

var func_287(int iParam0, var uParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

var func_288(int iParam0, var uParam1, var uParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

var func_289(int iParam0, var uParam1, var uParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

var func_290(int iParam0, var uParam1, var uParam2, var uParam3)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_291(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			return 5;
		
		case 5:
			return 6;
		
		case 6:
			if (iParam0 == 3)
			{
				return 7;
			}
			else
			{
				return 8;
			}
			break;
		
		case 7:
			return 8;
	}
	return 9;
}

void func_292(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_300())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_256())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_263(PLAYER::PLAYER_ID(), 0) && !func_267()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_297(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_296(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_295();
					func_294();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_296(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_SOMETHING(uVar27, 1);
						}
					}
					if (func_293(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_293(int iParam0)
{
	return iParam0 == 17;
}

void func_294()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_295()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_296(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_297(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_299();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_263(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_298(-2008016205, iParam0);
	}
}

void func_298(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_299()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

int func_300()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_301(bool bParam0, int iParam1)
{
	func_303();
	func_281(1);
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	func_304(1, 1, 1, 0, 0, 0);
	func_302();
	func_272(12, 1, -1);
	func_271(0);
	CAM::SET_WIDESCREEN_BORDERS(1, -1);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	func_281(1);
	func_269(1);
	Global_2439138.f_3747 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(1, iParam1);
		}
	}
}

void func_302()
{
	func_271(0);
	func_272(4, 1, -1);
	func_272(6, 1, -1);
	func_272(7, 1, -1);
	func_272(3, 1, -1);
	func_272(1, 1, -1);
	func_272(2, 1, -1);
	func_272(11, 1, -1);
	func_272(13, 1, -1);
	func_272(14, 1, -1);
	func_272(16, 1, -1);
}

void func_303()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312575.f_9 = MISC::GET_HASH_KEY(&(Global_1312575.f_1));
}

void func_304(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_269(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_37())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_306(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_269(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_306(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_266(PLAYER::PLAYER_ID())) && !func_263(PLAYER::PLAYER_ID(), 0)) && !func_305()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_266(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_305()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

int func_306(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_307(int iParam0)
{
	if (func_279())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_89(0))
		{
			func_276(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

char* func_308(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 4:
			switch (iParam0)
			{
				case 0:
					return "sol_end_camera";
				
				case 1:
					return "dix_end_camera";
				
				case 2:
					return "tale_end_camera";
				
				case 3:
					return "bmad_end_camera";
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return "sol_enter_camera";
				
				case 1:
					return "dix_enter_camera";
				
				case 2:
					return "tale_enter_camera";
				
				case 3:
					return "bmad_enter_camera";
				
				default:
			}
			break;
		
		case 6:
			if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
			{
				return "soldix_switch_camera";
			}
			else if (iParam0 == 2 && (iParam1 == 0 || iParam1 == 1))
			{
				return "tale_out_soldix_in_camera";
			}
			else if (iParam1 == 2 && (iParam0 == 0 || iParam0 == 1))
			{
				return "soldixn_out_tale_in_camera";
			}
			else
			{
				switch (iParam0)
				{
					case 3:
						switch (iParam1)
						{
							case 0:
							case 1:
								return "bmad_out_soldix_in_a_camera";
							
							case 2:
								return "bmad_out_tale_in_a_camera";
							
							default:
						}
						break;
					
					case 0:
					case 1:
						return "soldix_out_bmad_in_camera";
					
					case 2:
						return "tale_out_bmad_in_camera";
					}
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				switch (iParam1)
				{
					case 0:
					case 1:
						return "bmad_out_soldix_in_b_camera";
					
					case 2:
						return "bmad_out_tale_in_b_camera";
					}
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							return "sol_start_camera";
						
						case 2:
						case 3:
							return "dix_start_camera";
						
						default:
					}
					break;
				
				case 2:
					return "tale_start_camera";
				
				case 3:
					return "bmad_start_camera";
			}
			break;
	}
	return "";
}

char* func_309(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 4:
			switch (iParam0)
			{
				case 0:
					return "anim@amb@nightclub@djs@switch@smun_djset_switchover@";
				
				case 1:
					return "anim@amb@nightclub@djs@switch@dixn_djset_switchover@";
				
				case 2:
					return "anim@amb@nightclub@djs@switch@tale_djset_switchover@";
				
				case 3:
					return "anim@amb@nightclub@djs@switch@bmad_djset_switchover@";
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return "anim@amb@nightclub@djs@switch@smun_djset_switchover@";
				
				case 1:
					return "anim@amb@nightclub@djs@switch@dixn_djset_switchover@";
				
				case 2:
					return "anim@amb@nightclub@djs@switch@tale_djset_switchover@";
				
				case 3:
					return "anim@amb@nightclub@djs@switch@bmad_djset_switchover@";
				
				default:
			}
			break;
		
		case 6:
		case 7:
			if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
			{
				return "anim@amb@nightclub@djs@switch@smun_djset_switchover@";
			}
			else if (iParam0 == 2 && (iParam1 == 0 || iParam1 == 1))
			{
				return "anim@amb@nightclub@djs@switch@dixn_djset_switchover@";
			}
			else if (iParam1 == 2 && (iParam0 == 0 || iParam0 == 1))
			{
				return "anim@amb@nightclub@djs@switch@tale_djset_switchover@";
			}
			else
			{
				return "anim@amb@nightclub@djs@switch@bmad_djset_switchover@";
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							return "anim@amb@nightclub@djs@switch@smun_djset_switchover@";
						
						case 2:
						case 3:
							return "anim@amb@nightclub@djs@switch@dixn_djset_switchover@";
						
						default:
					}
					break;
				
				case 2:
					return "anim@amb@nightclub@djs@switch@tale_djset_switchover@";
				
				case 3:
					return "anim@amb@nightclub@djs@switch@bmad_djset_switchover@";
			}
			break;
	}
	return "";
}

char* func_310(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 4:
			switch (iParam0)
			{
				case 0:
					switch (iParam3)
					{
						case 3:
							return "sol_end_beer";
						
						default:
					}
					break;
				
				case 1:
					switch (iParam3)
					{
						case 0:
							return "dix_end_dix_headphones";
						
						default:
					}
					break;
				
				case 2:
					switch (iParam3)
					{
						case 0:
							return "";
						
						case 1:
							return "";
						
						default:
					}
					break;
				
				case 3:
					switch (iParam3)
					{
						case 0:
							return "";
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					switch (iParam3)
					{
						case 3:
							return "sol_enter_beer";
						
						default:
					}
					break;
				
				case 1:
					switch (iParam3)
					{
						case 0:
							return "";
						
						default:
					}
					break;
				
				case 2:
					switch (iParam3)
					{
						case 0:
							return "";
						
						case 1:
							return "";
						
						default:
					}
					break;
				
				case 3:
					switch (iParam3)
					{
						case 0:
							return "";
						
						default:
					}
					break;
			}
			break;
		
		case 6:
			if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
			{
				switch (iParam3)
				{
					case 3:
						return "soldix_switch_beer";
					
					default:
				}
			}
			else if (iParam0 == 2 && (iParam1 == 0 || iParam1 == 1))
			{
				switch (iParam3)
				{
					case 0:
						return "";
					
					case 1:
						return "tale_out_soldix_in_other_headphones";
					
					default:
				}
			}
			else if (iParam1 == 2 && (iParam0 == 0 || iParam0 == 1))
			{
				switch (iParam3)
				{
					case 0:
						return "soldixn_out_tale_in_cc_headphones";
					
					case 1:
						return "soldixn_out_tale_in_mm_headphones";
					
					case 2:
						return "";
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 3:
						switch (iParam1)
						{
							case 0:
							case 1:
								switch (iParam3)
								{
									case 0:
										return "";
									
									default:
								}
								break;
							
							case 2:
								switch (iParam3)
								{
									case 0:
										return "";
									
									case 1:
										return "";
									
									case 2:
										return "";
									
									default:
								}
								break;
						}
						break;
					
					case 0:
					case 1:
						switch (iParam3)
						{
							case 0:
								return "";
							
							default:
						}
						break;
					
					case 2:
						switch (iParam3)
						{
							case 0:
								return "";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							default:
						}
						break;
					}
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				switch (iParam1)
				{
					case 0:
					case 1:
						switch (iParam3)
						{
							case 0:
								return "";
							
							default:
						}
						break;
					
					case 2:
						switch (iParam3)
						{
							case 0:
								return "";
							
							case 1:
								return "bmad_out_tale_in_b_blamadon";
							
							case 2:
								return "";
							
							default:
						}
						break;
					}
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							switch (iParam3)
							{
								case 3:
									return "sol_start_beer";
								
								default:
							}
							break;
						
						case 2:
						case 3:
							switch (iParam3)
							{
								case 0:
									return "dix_start_dix_headphones";
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam3)
					{
						case 0:
							return "tale_start_cc_headphones";
						
						case 1:
							return "tale_start_mm_headphones";
						
						default:
					}
					break;
				
				case 3:
					switch (iParam3)
					{
						case 0:
							return "";
						
						default:
					}
					if (iParam0 == 2)
					{
						switch (iParam3)
						{
							case 1:
								return "";
							
							case 2:
								return "";
							}
						
						default:
					}
					break;
			}
			break;
	}
	return "";
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return -648546264;
		
		case 3:
			return 1172836182;
		
		case 4:
		case 5:
			return -1465676794;
		
		default:
	}
	return 0;
}

char* func_312(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 4:
			switch (iParam0)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							return "sol_end_sol";
						
						case 4:
							return "sol_end_solmanager";
						
						case 10:
							return "sol_end_bg_male_1";
						
						case 11:
							return "sol_end_bg_male_2";
						
						case 15:
							return "sol_end_bg_female_2";
						
						case 16:
							return "sol_end_bg_female_4";
						
						default:
					}
					break;
				
				case 1:
					switch (iParam3)
					{
						case 0:
							return "dix_end_dix";
						
						case 4:
							return "dix_end_cc";
						
						case 5:
							return "dix_end_mm";
						
						case 6:
							return "dix_end_manager";
						
						case 10:
							return "dix_end_bg_male1";
						
						case 11:
							return "dix_end_bg_male2";
						
						case 15:
							return "dix_end_bg_female1";
						
						case 16:
							return "dix_end_bg_female2";
						
						case 17:
							return "dix_end_bg_female3";
						
						default:
					}
					break;
				
				case 2:
					switch (iParam3)
					{
						case 0:
							return "tale_end_cc";
						
						case 1:
							return "tale_end_mm";
						
						case 10:
							return "tale_end_bg_male1";
						
						case 11:
							return "tale_end_bg_male2";
						
						case 15:
							return "";
						
						case 16:
							return "";
						
						case 17:
							return "";
						
						default:
					}
					break;
				
				case 3:
					switch (iParam3)
					{
						case 0:
							return "bmad_end_blamadon";
						
						case 4:
							return "bmad_end_bg_male2";
						
						case 5:
							return "bmad_end_bg_male3";
						
						case 6:
							return "";
						
						case 15:
							return "";
						
						case 16:
							return "";
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					switch (iParam3)
					{
						case 2:
							return "sol_enter_sol";
						
						case 10:
							return "sol_enter_bg_male_1";
						
						case 11:
							return "sol_enter_bg_male_2";
						
						case 15:
							return "sol_enter_bg_female_4";
						
						default:
					}
					break;
				
				case 1:
					switch (iParam3)
					{
						case 2:
							return "dix_enter_dix";
						
						case 7:
							return "dix_enter_bg_male1";
						
						case 8:
							return "dix_enter_bg_female1";
						
						case 9:
							return "dix_enter_manager";
						
						default:
					}
					break;
				
				case 2:
					switch (iParam3)
					{
						case 2:
							return "tale_enter_cc";
						
						case 3:
							return "tale_enter_mm";
						
						case 10:
							return "tale_enter_bg_male1";
						
						case 11:
							return "tale_enter_bg_male2";
						
						case 15:
							return "tale_enter_bg_female1";
						
						case 16:
							return "tale_enter_bg_female2";
						
						default:
					}
					break;
				
				case 3:
					switch (iParam3)
					{
						case 2:
							return "bmad_enter_blamadon";
						
						case 7:
							return "bmad_enter_bg_male2";
						
						case 8:
							return "bmad_enter_bg_male3";
						
						case 9:
							return "bmad_enter_bg_male4";
						
						case 15:
							return "bmad_enter_bg_female2";
						
						case 16:
							return "bmad_enter_bg_female3";
						
						default:
					}
					break;
			}
			break;
		
		case 6:
			if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
			{
				switch (iParam3)
				{
					case 0:
						return "soldix_switch_dix";
					
					case 2:
						return "soldix_switch_sol";
					
					case 7:
						return "soldix_switch_solmanager";
					
					case 10:
						return "soldix_switch_bg_male_1";
					
					case 11:
						return "soldix_switch_bg_male_2";
					
					case 15:
						return "soldix_switch_bg_female_2";
					
					case 16:
						return "soldix_switch_bg_female_4";
					
					default:
				}
			}
			else if (iParam0 == 2 && (iParam1 == 0 || iParam1 == 1))
			{
				switch (iParam3)
				{
					case 0:
						return "tale_out_soldix_in_cc";
					
					case 1:
						return "tale_out_soldix_in_mm";
					
					case 2:
						return "tale_out_soldix_in_dix";
					
					case 7:
						return "tale_out_soldix_in_manager";
					
					case 8:
						return "tale_out_soldix_in_bg_male1";
					
					case 9:
						return "tale_out_soldix_in_bg_female1";
					
					default:
				}
			}
			else if (iParam1 == 2 && (iParam0 == 0 || iParam0 == 1))
			{
				switch (iParam3)
				{
					case 0:
						return "soldixn_out_tale_in_sol";
					
					case 2:
						return "soldixn_out_tale_in_cc";
					
					case 3:
						return "soldixn_out_tale_in_mm";
					
					case 10:
						return "soldixn_out_tale_in_bg_male1";
					
					case 11:
						return "soldixn_out_tale_in_bg_male2";
					
					case 15:
						return "soldixn_out_tale_in_bg_female1";
					
					case 16:
						return "soldixn_out_tale_in_bg_female2";
					
					case 17:
						return "soldixn_out_tale_in_bg_female3";
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 3:
						switch (iParam1)
						{
							case 0:
							case 1:
								switch (iParam3)
								{
									case 0:
										return "bmad_out_soldix_in_a_blamadon";
									
									case 2:
										return "bmad_out_soldix_in_a_bg_male1";
									
									case 4:
										return "bmad_out_soldix_in_a_bg_male2";
									
									case 5:
										return "bmad_out_soldix_in_a_bg_male3";
									
									case 6:
										return "bmad_out_soldix_in_a_bg_male4";
									
									case 15:
										return "bmad_out_soldix_in_a_bg_female2";
									
									case 16:
										return "bmad_out_soldix_in_a_bg_female3";
									
									default:
								}
								break;
							
							case 2:
								switch (iParam3)
								{
									case 0:
										return "bmad_out_tale_in_a_blamadon";
									
									case 2:
										return "bmad_out_tale_in_a_cc";
									
									case 3:
										return "bmad_out_tale_in_a_mm";
									
									case 4:
										return "bmad_out_tale_in_a_bg_male2";
									
									case 5:
										return "bmad_out_tale_in_a_bg_male3";
									
									case 6:
										return "";
									
									case 15:
										return "";
									
									case 16:
										return "";
									
									default:
								}
								break;
						}
						break;
					
					case 0:
					case 1:
						switch (iParam3)
						{
							case 0:
								return "soldix_out_bmad_in_bg_male1";
							
							case 2:
								return "soldix_out_bmad_in_blamadon";
							
							case 7:
								return "soldix_out_bmad_in_bg_male2";
							
							case 8:
								return "soldix_out_bmad_in_bg_male3";
							
							case 9:
								return "soldix_out_bmad_in_bg_male4";
							
							case 15:
								return "soldix_out_bmad_in_bg_female2";
							
							case 16:
								return "soldix_out_bmad_in_bg_female3";
							
							default:
						}
						break;
					
					case 2:
						switch (iParam3)
						{
							case 0:
								return "tale_out_bmad_in_cc";
							
							case 1:
								return "tale_out_bmad_in_mm";
							
							case 2:
								return "tale_out_bmad_in_blamadon";
							
							case 7:
								return "tale_out_bmad_in_bg_male2";
							
							case 8:
								return "tale_out_bmad_in_bg_male3";
							
							case 9:
								return "";
							
							case 15:
								return "";
							
							case 16:
								return "";
							
							default:
						}
						break;
					}
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				switch (iParam1)
				{
					case 0:
					case 1:
						switch (iParam3)
						{
							case 0:
								return "bmad_out_soldix_in_b_blamadon";
							
							case 2:
								return "bmad_out_soldix_in_b_bg_male1";
							
							case 4:
								return "bmad_out_soldix_in_b_bg_male2";
							
							case 5:
								return "bmad_out_soldix_in_b_bg_male3";
							
							case 6:
								return "bmad_out_soldix_in_b_bg_male4";
							
							case 15:
								return "bmad_out_soldix_in_b_bg_female2";
							
							case 16:
								return "bmad_out_soldix_in_b_bg_female3";
							
							default:
						}
						break;
					
					case 2:
						switch (iParam3)
						{
							case 0:
								return "bmad_out_tale_in_b_blamadon";
							
							case 2:
								return "bmad_out_tale_in_b_cc";
							
							case 3:
								return "bmad_out_tale_in_b_mm";
							
							case 4:
								return "bmad_out_tale_in_b_bg_male2";
							
							case 5:
								return "bmad_out_tale_in_b_bg_male3";
							
							case 6:
								return "";
							
							case 15:
								return "";
							
							case 16:
								return "";
							
							case 1:
								return "bmad_out_tale_in_b_blamadon";
							
							default:
						}
						break;
					}
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							switch (iParam3)
							{
								case 2:
									return "sol_start_sol";
								
								default:
							}
							break;
						
						case 2:
						case 3:
							switch (iParam3)
							{
								case 2:
									return "dix_start_dix";
								
								case 7:
									return "dix_start_manager";
								
								case 8:
									return "dix_start_bg_male1";
								
								case 9:
									return "dix_start_bg_female1";
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam3)
					{
						case 2:
							return "tale_start_cc";
						
						case 3:
							return "tale_start_mm";
						
						default:
					}
					break;
				
				case 3:
					switch (iParam3)
					{
						case 2:
							return "bmad_start_blamadon";
						
						case 7:
							return "bmad_start_bg_male2";
						
						case 8:
							return "bmad_start_bg_male3";
						
						case 9:
							return "";
						
						case 15:
							return "";
						
						case 16:
							return "";
						
						default:
					}
					if (iParam0 == 2)
					{
						switch (iParam3)
						{
							case 0:
								return "bmad_start_cc";
							
							case 1:
								return "bmad_start_mm";
							}
						
						default:
					}
					break;
			}
			break;
	}
	return "";
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = -1;
	switch (iParam2)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 6:
			iVar0 = iParam0;
			break;
		
		case 2:
		case 3:
		case 7:
		case 8:
		case 9:
			iVar0 = iParam1;
			break;
	}
	switch (iParam2)
	{
		case 0:
		case 2:
			switch (iVar0)
			{
				case 0:
					func_330(iParam3);
					break;
				
				case 1:
					func_329(iParam3);
					break;
				
				case 2:
					func_328(iParam3, 0);
					break;
				
				case 3:
					func_327(iParam3);
					break;
			}
			break;
		
		case 1:
		case 3:
			if (iVar0 == 2)
			{
				func_328(iParam3, 1);
			}
			break;
		
		case 4:
		case 7:
			switch (iVar0)
			{
				case 0:
					func_326(iParam3);
					break;
				
				case 1:
					func_325(iParam3);
					break;
				
				case 2:
					func_324(iParam3);
					break;
				
				case 3:
					func_323(iParam3);
					break;
			}
			break;
		
		case 5:
		case 8:
			switch (iVar0)
			{
				case 0:
					func_322(iParam3);
					break;
				
				case 2:
					func_321(iParam3);
					break;
				
				case 3:
					func_320(iParam3);
					break;
			}
			break;
		
		case 6:
		case 9:
			switch (iVar0)
			{
				case 0:
					func_319(iParam3);
					break;
				
				case 3:
					func_318(iParam3);
					break;
			}
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_317(iParam3);
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_314(iParam3);
			break;
	}
}

void func_314(var uParam0)
{
	*uParam0 = func_315(1);
	uParam0->f_38[0] = -1;
	uParam0->f_38[1] = -1;
}

int func_315(bool bParam0)
{
	return func_316(bParam0, Global_1316782);
}

int func_316(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		switch (iParam1)
		{
			case 0:
				return 1744231373;
			
			case 1:
				return 10751269;
			
			case 2:
				return 357447289;
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return -1481174974;
			
			case 1:
				return -722081089;
			
			case 2:
				return -969978574;
			}
		
		default:
	}
	if (bParam0)
	{
		return 1744231373;
	}
	return -1481174974;
}

void func_317(var uParam0)
{
	*uParam0 = func_315(0);
	uParam0->f_38[0] = -1;
	uParam0->f_38[1] = -1;
}

void func_318(var uParam0)
{
	*uParam0 = 400495475;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_319(var uParam0)
{
	*uParam0 = 1241432569;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[1] = 0;
}

void func_320(var uParam0)
{
	*uParam0 = -1237168065;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_321(var uParam0)
{
	*uParam0 = -1507505719;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_322(var uParam0)
{
	*uParam0 = -1808665269;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_323(var uParam0)
{
	*uParam0 = 914073350;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_324(var uParam0)
{
	*uParam0 = -1322513804;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_325(var uParam0)
{
	*uParam0 = -73600578;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_326(var uParam0)
{
	*uParam0 = 2123514453;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_327(var uParam0)
{
	*uParam0 = -75756443;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[1] = 0;
	uParam0->f_38[1].f_1 = 0;
	uParam0->f_38[0] = 0;
	uParam0->f_38[0].f_1 = 0;
}

void func_328(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		*uParam0 = -466345309;
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_1[iVar0] = 0;
			uParam0->f_1[iVar0].f_1 = 0;
			uParam0->f_1[iVar0].f_2 = 0;
			iVar0++;
		}
		uParam0->f_38[0] = 0;
		uParam0->f_38[0].f_1 = 0;
	}
	else
	{
		*uParam0 = 1182156569;
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_1[iVar0] = 0;
			uParam0->f_1[iVar0].f_1 = 0;
			uParam0->f_1[iVar0].f_2 = 0;
			iVar0++;
		}
		uParam0->f_38[0] = 0;
		uParam0->f_38[0].f_1 = 0;
	}
}

void func_329(var uParam0)
{
	*uParam0 = -86969715;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_330(var uParam0)
{
	*uParam0 = -508849828;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_331(int iParam0)
{
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iParam0->f_1[iVar0] = -1;
		iParam0->f_1[iVar0].f_1 = -1;
		iParam0->f_1[iVar0].f_2 = -1;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iParam0->f_38[iVar1] = -1;
		iParam0->f_38[iVar1].f_1 = 0;
		iVar1++;
	}
}

void func_332(var uParam0, int iParam1)
{
	uParam0->f_7906 = iParam1;
}

int func_333(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_2, 21))
	{
		if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_2, 22))
		{
			return 3;
		}
		else
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_2, 22))
	{
		return 2;
	}
	return 0;
}

int func_334()
{
	if (func_335())
	{
		return Global_1676377.f_475 == 1;
	}
	return 0;
}

bool func_335()
{
	return Global_1676377.f_474;
}

void func_336(bool bParam0)
{
	if (bParam0)
	{
		Global_1676377.f_4406 = 1;
	}
	else
	{
		Global_1676377.f_4406 = 0;
	}
}

bool func_337()
{
	return MISC::IS_BIT_SET(Global_1676377.f_3, 6);
}

void func_338(var uParam0)
{
	if ((((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[0]) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1[0], 0)) || !ENTITY::DOES_ENTITY_EXIST(*uParam0)) || ENTITY::IS_ENTITY_DEAD(*uParam0, 0)) || !func_144(uParam0))
	{
		return;
	}
	Var0 = { func_233(uParam0->f_6, uParam0->f_10) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_1[0]))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_1[0], 0, 1);
		}
		return;
	}
	switch (func_234(uParam0->f_6, uParam0->f_10))
	{
		case 1:
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1[0], *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 31086), func_340(uParam0, 1), func_339(uParam0, 1), 1, 0, 0, 1, 2, 1);
			break;
		
		case 2:
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1[0], *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 39317), func_340(uParam0, 0), func_339(uParam0, 0), 1, 0, 0, 1, 2, 1);
			break;
		
		case 0:
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_1[0]))
			{
				ENTITY::DETACH_ENTITY(uParam0->f_1[0], 0, 1);
			}
			break;
	}
}

Vector3 func_339(var uParam0, bool bParam1)
{
	switch (uParam0->f_6)
	{
		case 8:
			if (bParam1)
			{
				return 4.085f, 90f, -9f;
			}
			else
			{
				return 0f, 96f, -80f;
			}
			break;
		
		case 7:
			if (bParam1)
			{
				return 0f, -90f, 175f;
			}
			else
			{
				return 0f, -94f, 97f;
			}
			break;
	}
	if (bParam1)
	{
		return 0f, -90f, 175f;
	}
	return 0f, -85f, 107f;
}

Vector3 func_340(var uParam0, bool bParam1)
{
	switch (uParam0->f_6)
	{
		case 8:
			if (bParam1)
			{
				return 0.108f, 0.003f, -0.006f;
			}
			else
			{
				return 0.037f, 0.021f, 0f;
			}
			break;
		
		case 7:
			if (bParam1)
			{
				return 0.099f, 0.01f, -0.001f;
			}
			else
			{
				return 0.06f, 0.012f, -0.001f;
			}
			break;
	}
	if (bParam1)
	{
		return 0.935f, 0.007f, 0f;
	}
	return 0.062f, 0f, 0f;
}

int func_341(var uParam0, var uParam1, var uParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2) && !ENTITY::IS_ENTITY_DEAD(*uParam2, 0))
	{
		func_148(uParam1->f_587, 0, 0, &(uParam1->f_5), func_56(uParam2->f_16));
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam1->f_592[iVar0]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_5.f_7[iVar0]))
				{
					STREAMING::REQUEST_ANIM_DICT(uParam1->f_5.f_7[iVar0]);
					if (STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_5.f_7[iVar0]) && func_347(uParam1->f_592[iVar0]))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iVar0]))
						{
							if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
							{
								Var1 = { func_379(uParam2->f_16) };
								Var4 = { 0f, 0f, func_377(uParam2->f_16) };
								if (func_10(uParam2->f_6))
								{
									if (iVar0 == 0 && func_144(uParam2))
									{
										func_346(uParam2, &Var1, &Var4);
									}
									else
									{
										func_345(uParam2, &Var1, &Var4, iVar0);
									}
								}
								else
								{
									Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam1->f_5.f_7[iVar0], uParam1->f_5.f_7[iVar0].f_1, *uParam1, 0f, 0f, uParam1->f_3, 0, 2) };
									Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam1->f_5.f_7[iVar0], uParam1->f_5.f_7[iVar0].f_1, *uParam1, 0f, 0f, uParam1->f_3, 0, 2) };
								}
								if (SYSTEM::VMAG(Var1) > 0.1f && SYSTEM::VMAG(*uParam1) > 0.1f)
								{
									uParam2->f_1[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam1->f_592[iVar0], Var1, 0, 1, 0);
									ENTITY::SET_ENTITY_ROTATION(uParam2->f_1[iVar0], Var4, 2, 1);
									ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_1[iVar0], 1);
									ENTITY::SET_ENTITY_COLLISION(uParam2->f_1[iVar0], false, 0);
									ENTITY::FREEZE_ENTITY_POSITION(uParam2->f_1[iVar0], true);
									if ((uParam0->f_7736 && func_13(uParam2->f_16)) || ((iVar0 < 2 && uParam2->f_6 == 113) && uParam2->f_10 != 8))
									{
										ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[iVar0], false, 0);
										iVar7 = 0;
										iVar7 = 0;
										while (iVar7 < 4)
										{
											if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iVar7]))
											{
												if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_1[iVar7], 0))
												{
													ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[iVar7], false, 0);
												}
											}
											iVar7++;
										}
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
					}
					else
					{
						if (!func_347(uParam1->f_592[iVar0]))
						{
						}
						return 0;
					}
				}
				else if (func_344(uParam2->f_6, iVar0) != -1 && !ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iVar0]))
				{
					if (func_347(uParam1->f_592[iVar0]) && !ENTITY::IS_ENTITY_DEAD(*uParam2, 0))
					{
						uParam2->f_1[iVar0] = OBJECT::CREATE_OBJECT(uParam1->f_592[iVar0], PED::GET_PED_BONE_COORDS(*uParam2, func_344(uParam2->f_6, iVar0), 0f, 0f, 0f), 0, 0, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam2->f_1[iVar0], *uParam2, PED::GET_PED_BONE_INDEX(*uParam2, func_344(uParam2->f_6, iVar0)), func_343(uParam2->f_6, func_344(uParam2->f_6, iVar0), uParam1->f_592[iVar0]), func_342(uParam2->f_6, func_344(uParam2->f_6, iVar0)), 1, 1, 0, 0, 2, 1);
						if (uParam0->f_7736 && func_13(uParam2->f_16))
						{
							iVar8 = 0;
							iVar8 = 0;
							while (iVar8 < 4)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iVar8]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_1[iVar8], 0))
									{
										ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[iVar8], false, 0);
									}
								}
								iVar8++;
							}
						}
					}
					else
					{
						return 0;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(uParam2->f_1[iVar0]));
			}
			iVar0++;
		}
	}
	return 1;
}

Vector3 func_342(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 63:
			switch (iParam1)
			{
				case 18905:
					return 220.971f, 2.808f, 2.808f;
					break;
				
				case 57005:
					return -53.27631f, 0f, 0f;
					break;
			}
			break;
		
		case 25:
		case 28:
			return 0f, 45f, 0f;
			break;
		
		case 72:
			return 0f, -90f, 0f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_343(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 63:
			switch (iParam1)
			{
				case 18905:
					return 0.066f, -0.162f, 0.258f;
					break;
				
				case 57005:
					return 0.06558f, -0.20634f, -0.18839f;
					break;
			}
			break;
		
		case 81:
			return 0f, 0.03f, 0f;
			break;
		
		case 71:
			return 0f, -0.01f, -0.04f;
			break;
		
		case 2:
			switch (iParam2)
			{
				case 683570518:
					return 0f, 0f, 0.08f;
					break;
			}
			break;
		
		case 4:
		case 89:
		case 90:
		case 61:
			switch (iParam2)
			{
				case 683570518:
					return 0f, 0f, 0.01f;
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case 683570518:
			return 0f, 0f, 0.16001f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_344(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 28422;
			break;
		
		case 61:
		case 83:
		case 84:
		case 66:
		case 75:
		case 70:
		case 69:
		case 71:
		case 81:
		case 4:
		case 72:
		case 89:
		case 90:
		case 91:
		case 54:
		case 56:
		case 57:
		case 48:
		case 49:
		case 51:
		case 53:
		case 25:
		case 26:
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 92:
		case 93:
		case 94:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
			return 28422;
			break;
		
		case 3:
		case 60:
		case 77:
		case 80:
			return 60309;
			break;
		
		case 63:
		case 55:
		case 59:
		case 27:
			if (iParam1 == 0)
			{
				return 60309;
			}
			else
			{
				return 28422;
			}
			break;
	}
	return -1;
}

void func_345(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (uParam0->f_6)
	{
		case 9:
			*uParam1 = { -1602.585f, -3011.39f, -77.915f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 10:
			*uParam1 = { -1602.521f, -3014.16f, -77.915f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 7:
			*uParam1 = { -1602.349f, -3013.64f, -77.918f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 8:
			switch (iParam3)
			{
				case 1:
					*uParam1 = { -1602.342f, -3013.571f, -77.92f };
					*uParam2 = { 0f, 0f, 0f };
					break;
				
				case 2:
					*uParam1 = { -1603.757f, -3013.274f, -77.979f };
					*uParam2 = { 0f, 0f, 0f };
					break;
			}
			break;
		
		case 11:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -1602.5f, -3013.43f, -77.8672f };
					*uParam2 = { 0f, 0f, 0f };
					break;
				
				case 1:
					*uParam1 = { -1602.4f, -3013.47f, -77.9247f };
					*uParam2 = { 0f, 0f, 67.522f };
					break;
				
				case 2:
					*uParam1 = { -1602.56f, -3013.37f, -77.9137f };
					*uParam2 = { 87.3211f, -155.658f, -16.0957f };
					break;
			}
			break;
	}
}

void func_346(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_6)
	{
		case 7:
			*uParam1 = { -1602.496f, -3011.593f, -77.898f };
			*uParam2 = { -96.83f, -1.08f, -138.01f };
			break;
		
		case 8:
			*uParam1 = { -1602.46f, -3013.51f, -77.851f };
			*uParam2 = { 51.4f, -1.59f, 161.49f };
			break;
	}
}

bool func_347(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_348(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_592[iVar0]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_1[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_349(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 3:
		case 80:
		case 91:
			uParam1->f_592[0] = -917746868;
			break;
		
		case 61:
		case 83:
			uParam1->f_592[0] = 683570518;
			break;
		
		case 63:
			uParam1->f_592[0] = -1165870153;
			uParam1->f_592[1] = -1165870153;
			break;
		
		case 5:
			if (func_352(func_6()))
			{
				uParam1->f_592[0] = 538002882;
			}
			else if (func_351(func_6()))
			{
				uParam1->f_592[0] = -829283643;
			}
			else
			{
				uParam1->f_592[0] = -992735415;
			}
			break;
		
		case 110:
			uParam1->f_592[0] = -641411675;
			uParam1->f_592[1] = func_350();
			break;
		
		case 105:
			uParam1->f_592[0] = -1916111695;
			break;
		
		case 106:
			uParam1->f_592[0] = -970962656;
			uParam1->f_592[1] = -970962656;
			break;
		
		case 113:
			uParam1->f_592[0] = -970962656;
			uParam1->f_592[1] = -970962656;
			uParam1->f_592[2] = 2064883486;
			break;
		
		case 6:
			break;
		
		case 66:
		case 75:
		case 70:
		case 69:
		case 71:
		case 81:
		case 84:
			uParam1->f_592[0] = 974883178;
			break;
		
		case 60:
			uParam1->f_592[0] = 1027109416;
			break;
		
		case 2:
			uParam1->f_592[0] = 683570518;
			break;
		
		case 77:
			uParam1->f_592[0] = -334989242;
			break;
		
		case 4:
		case 89:
		case 90:
			uParam1->f_592[0] = 683570518;
			break;
		
		case 72:
			uParam1->f_592[0] = -1585232418;
			break;
		
		case 9:
			uParam1->f_592[0] = -435087427;
			break;
		
		case 10:
			uParam1->f_592[0] = -435087427;
			break;
		
		case 8:
			uParam1->f_592[0] = -648546264;
			uParam1->f_592[1] = -35679191;
			uParam1->f_592[2] = -35679191;
			break;
		
		case 7:
			uParam1->f_592[0] = -648546264;
			uParam1->f_592[1] = -35679191;
			break;
		
		case 11:
			uParam1->f_592[0] = -1533900808;
			uParam1->f_592[1] = 724797387;
			uParam1->f_592[2] = 1661861648;
			break;
		
		case 54:
		case 56:
		case 51:
		case 38:
		case 39:
		case 42:
		case 44:
		case 93:
		case 94:
		case 100:
			uParam1->f_592[0] = 1151364435;
			break;
		
		case 55:
			uParam1->f_592[0] = 974883178;
			uParam1->f_592[1] = 683570518;
			break;
		
		case 59:
			uParam1->f_592[1] = 683570518;
			break;
		
		case 57:
		case 26:
		case 31:
		case 32:
		case 33:
		case 35:
		case 92:
			uParam1->f_592[0] = 974883178;
			break;
		
		case 48:
		case 49:
		case 53:
		case 36:
		case 37:
		case 40:
		case 41:
		case 43:
		case 45:
		case 46:
		case 47:
		case 96:
		case 97:
		case 98:
		case 99:
			uParam1->f_592[0] = 683570518;
			break;
		
		case 25:
			uParam1->f_592[0] = 669941754;
			break;
		
		case 27:
			uParam1->f_592[0] = 669941754;
			uParam1->f_592[1] = 669941754;
			break;
		
		default:
			uParam1->f_592[0] = 0;
			break;
	}
}

int func_350()
{
	if (func_352(func_6()))
	{
		return 1378851084;
	}
	if (func_351(func_6()))
	{
		return -1120527678;
	}
	return 1840174940;
}

bool func_351(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 3);
}

bool func_352(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 2);
}

void func_353(var uParam0)
{
	uParam0->f_5.f_4 = 0f;
	uParam0->f_5.f_3 = 1f;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_5.f_324[iVar0] = "";
		StringCopy(&(uParam0->f_5.f_324[iVar0].f_1), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_5.f_7[iVar0] = "";
		uParam0->f_5.f_7[iVar0].f_1 = "";
		uParam0->f_592[iVar0] = 0;
		iVar0++;
	}
}

void func_354(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 125)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], 0))
		{
			if (uParam0[iVar0]->f_18 == 0)
			{
				if ((((uParam0[iVar0]->f_6 == 0 || uParam0[iVar0]->f_6 == 6) || uParam0[iVar0]->f_6 == 86) || uParam0[iVar0]->f_6 == 78) || (((uParam0[iVar0]->f_39 == 17 && uParam0[iVar0]->f_6 != 89) && uParam0[iVar0]->f_6 != 90) && uParam0[iVar0]->f_6 != 5))
				{
					uParam0[iVar0]->f_18 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_355(var uParam0, int iParam1, struct<3> Param2)
{
	uParam0[iParam1]->f_13 = { Param2 };
}

void func_356(var uParam0, int iParam1, int iParam2)
{
	uParam0[iParam1]->f_12 = iParam2;
}

void func_357(var uParam0)
{
	if (func_358(uParam0->f_8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, uParam0->f_45, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(*uParam0, uParam0->f_48);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
	}
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 67:
			return 1;
		
		default:
	}
	if (func_359(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return 1;
		
		default:
	}
	return 0;
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 78:
		case 81:
		case 79:
		case 62:
		case 4:
		case 89:
		case 90:
		case 85:
		case 87:
		case 88:
		case 72:
		case 109:
		case 107:
			return 1;
		
		default:
	}
	return 0;
}

void func_361(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_41[iVar0] = -1;
		iVar0++;
	}
	if (uParam0->f_16 > -1)
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 162)
		{
			iVar2 = func_427(iVar0, 0);
			if (uParam0->f_16 == iVar2)
			{
				if (iVar1 < 3)
				{
					uParam0->f_41[iVar1] = iVar0;
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

int func_362()
{
	if ((!func_536() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || CAM::IS_SCREEN_FADED_OUT())
	{
		return 25;
	}
	return 2;
}

int func_363(var uParam0, var uParam1, var uParam2, struct<3> Param3, float fParam6, var uParam7)
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(*uParam1))
	{
		if (func_347(*uParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
			{
				*uParam2 = PED::CREATE_PED(26, *uParam1, Param3.x, Param3.y, (Param3.z - 1f), uParam6, 0, 1);
				if (func_376(uParam2->f_16))
				{
					func_366(uParam2->f_16, &iVar21, &iVar22, func_57(uParam2->f_39));
					if (iVar21 > 0 || iVar22 > 0)
					{
						if (uParam7->f_4 == uParam0->f_7739)
						{
							func_364(&Var0, iVar21, iVar22);
							iVar23 = 0;
							while (iVar23 < 10)
							{
								PED::SET_PED_COMPONENT_VARIATION(*uParam2, iVar23, Var0[iVar23], Var0[iVar23].f_1, 0);
								iVar23++;
							}
						}
					}
				}
				else
				{
					iVar24 = 0;
					while (iVar24 < 12)
					{
						if ((uParam1->f_1[iVar24].f_2 != -1 && uParam1->f_1[iVar24].f_1 != -1) && uParam1->f_1[iVar24] != -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(*uParam2, iVar24, uParam1->f_1[iVar24], uParam1->f_1[iVar24].f_1, uParam1->f_1[iVar24].f_2);
						}
						iVar24++;
					}
				}
				if (uParam1->f_57 != -1569615261)
				{
					WEAPON::GIVE_WEAPON_TO_PED(*uParam2, uParam1->f_57, 1, 1, 1);
				}
				iVar25 = 0;
				while (iVar25 < 9)
				{
					if (uParam1->f_38[iVar25] != -1)
					{
						PED::SET_PED_PROP_INDEX(*uParam2, iVar25, uParam1->f_38[iVar25], uParam1->f_38[iVar25].f_1, 0);
					}
					iVar25++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*uParam2, 0);
				PED::SET_PED_AS_ENEMY(*uParam2, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, 1);
				PED::SET_PED_RESET_FLAG(*uParam2, 249, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam2, 185, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam2, 108, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam2, 106, 1);
				PED::SET_PED_CAN_EVASIVE_DIVE(*uParam2, 0);
				PED::_0x2F3C3D9F50681DE4(*uParam2, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam2, 0);
				PED::SET_PED_CAN_RAGDOLL(*uParam2, 0);
				PED::SET_PED_CONFIG_FLAG(*uParam2, 208, 1);
				if (uParam0->f_7736 && func_13(uParam2->f_16))
				{
					ENTITY::SET_ENTITY_VISIBLE(*uParam2, false, 0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_364(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = iVar0 * 3;
		(*uParam0)[iVar0] = func_365(&iParam1, iVar1);
		uParam0[iVar0]->f_1 = func_365(&iParam2, iVar1);
		iVar0++;
	}
}

int func_365(var uParam0, int iParam1)
{
	iVar0 = 0;
	if (MISC::IS_BIT_SET(*uParam0, iParam1))
	{
		iVar0++;
	}
	if (MISC::IS_BIT_SET(*uParam0, iParam1 + 1))
	{
		iVar0 += 2;
	}
	if (MISC::IS_BIT_SET(*uParam0, iParam1 + 2))
	{
		iVar0 += 4;
	}
	return iVar0;
}

void func_366(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	switch (Global_1316782)
	{
		case 0:
			switch (Global_1316796)
			{
				case 0:
					func_375(iParam0, uParam1, uParam2, bParam3);
					break;
				
				case 1:
					func_374(iParam0, uParam1, uParam2, bParam3);
					break;
				
				case 2:
					func_373(iParam0, uParam1, uParam2, bParam3);
					break;
			}
			break;
		
		case 1:
			switch (Global_1316796)
			{
				case 0:
					func_372(iParam0, uParam1, uParam2, bParam3);
					break;
				
				case 1:
					func_371(iParam0, uParam1, uParam2, bParam3);
					break;
				
				case 2:
					func_370(iParam0, uParam1, uParam2, bParam3);
					break;
			}
			break;
		
		case 2:
			switch (Global_1316796)
			{
				case 0:
					func_369(iParam0, uParam1, uParam2, bParam3);
					break;
				
				case 1:
					func_368(iParam0, uParam1, uParam2, bParam3);
					break;
				
				case 2:
					func_367(iParam0, uParam1, uParam2, bParam3);
					break;
			}
			break;
	}
}

void func_367(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 33554432;
				*uParam2 = 0;
				break;
			
			case 1:
				*uParam1 = 9857;
				*uParam2 = 2049;
				break;
			
			case 2:
				*uParam1 = 50350468;
				*uParam2 = 5633;
				break;
			
			case 3:
				*uParam1 = 14018;
				*uParam2 = 16783872;
				break;
			
			case 4:
				*uParam1 = 13505;
				*uParam2 = 16778816;
				break;
			
			case 5:
				*uParam1 = 50355011;
				*uParam2 = 9217;
				break;
			
			case 6:
				*uParam1 = 50350468;
				*uParam2 = 6784;
				break;
			
			case 7:
				*uParam1 = 33554496;
				*uParam2 = 4674;
				break;
			
			case 8:
				*uParam1 = 33559104;
				*uParam2 = 1025;
				break;
			
			case 9:
				*uParam1 = 50350403;
				*uParam2 = 128;
				break;
			
			case 10:
				*uParam1 = 14018;
				*uParam2 = 8833;
				break;
			
			case 11:
				*uParam1 = 50350403;
				*uParam2 = 1088;
				break;
			
			case 12:
				*uParam1 = 50350468;
				*uParam2 = 6208;
				break;
			
			case 13:
				*uParam1 = 9345;
				*uParam2 = 16783425;
				break;
			
			case 14:
				*uParam1 = 33559040;
				*uParam2 = 4674;
				break;
			
			case 15:
				*uParam1 = 9986;
				*uParam2 = 5121;
				break;
			
			case 16:
				*uParam1 = 50355011;
				*uParam2 = 641;
				break;
			
			case 17:
				*uParam1 = 13442;
				*uParam2 = 16781952;
				break;
			
			case 18:
				*uParam1 = 33559104;
				*uParam2 = 64;
				break;
			
			case 19:
				*uParam1 = 50355076;
				*uParam2 = 18561;
				break;
			
			case 20:
				*uParam1 = 33554432;
				*uParam2 = 9217;
				break;
			
			case 21:
				*uParam1 = 13569;
				*uParam2 = 2624;
				break;
			
			case 22:
				*uParam1 = 50355076;
				*uParam2 = 13888;
				break;
			
			case 23:
				*uParam1 = 33559040;
				*uParam2 = 4161;
				break;
			
			case 24:
				*uParam1 = 9985;
				*uParam2 = 16778881;
				break;
			
			case 25:
				*uParam1 = 13954;
				*uParam2 = 8257;
				break;
			
			case 26:
				*uParam1 = 50350403;
				*uParam2 = 576;
				break;
			
			case 27:
				*uParam1 = 13570;
				*uParam2 = 9344;
				break;
			
			case 28:
				*uParam1 = 13569;
				*uParam2 = 16783424;
				break;
			
			case 29:
				*uParam1 = 50355012;
				*uParam2 = 14849;
				break;
			
			case 30:
				*uParam1 = 33554496;
				*uParam2 = 9218;
				break;
			
			case 31:
				*uParam1 = 33554496;
				*uParam2 = 4672;
				break;
			
			case 32:
				*uParam1 = 50355075;
				*uParam2 = 4097;
				break;
			
			case 33:
				*uParam1 = 13953;
				*uParam2 = 2048;
				break;
			
			case 34:
				*uParam1 = 33559040;
				*uParam2 = 1089;
				break;
			
			case 35:
				*uParam1 = 9921;
				*uParam2 = 16778881;
				break;
			
			case 36:
				*uParam1 = 33559104;
				*uParam2 = 4610;
				break;
			
			case 37:
				*uParam1 = 9346;
				*uParam2 = 4224;
				break;
			
			case 38:
				*uParam1 = 33554432;
				*uParam2 = 0;
				break;
			
			case 39:
				*uParam1 = 50350467;
				*uParam2 = 128;
				break;
			
			case 40:
				*uParam1 = 14018;
				*uParam2 = 16777729;
				break;
			
			case 41:
				*uParam1 = 50350404;
				*uParam2 = 5633;
				break;
			
			case 42:
				*uParam1 = 50355011;
				*uParam2 = 20609;
				break;
			
			case 43:
				*uParam1 = 50355076;
				*uParam2 = 18496;
				break;
			
			case 44:
				*uParam1 = 13506;
				*uParam2 = 16785985;
				break;
			
			case 45:
				*uParam1 = 33554496;
				*uParam2 = 4610;
				break;
			
			case 46:
				*uParam1 = 50350403;
				*uParam2 = 576;
				break;
			
			case 47:
				*uParam1 = 50355075;
				*uParam2 = 5121;
				break;
			
			case 48:
				*uParam1 = 13570;
				*uParam2 = 5120;
				break;
			
			case 49:
				*uParam1 = 33554432;
				*uParam2 = 9281;
				break;
			
			case 50:
				*uParam1 = 9345;
				*uParam2 = 2625;
				break;
			
			case 51:
				*uParam1 = 50350404;
				*uParam2 = 6657;
				break;
			
			case 52:
				*uParam1 = 33559040;
				*uParam2 = 4608;
				break;
			
			case 53:
				*uParam1 = 50355012;
				*uParam2 = 13952;
				break;
			
			case 54:
				*uParam1 = 33554496;
				*uParam2 = 66;
				break;
			
			case 55:
				*uParam1 = 9473;
				*uParam2 = 16782976;
				break;
			
			case 56:
				*uParam1 = 13505;
				*uParam2 = 16779264;
				break;
			
			case 57:
				*uParam1 = 50355075;
				*uParam2 = 20993;
				break;
			
			case 58:
				*uParam1 = 14082;
				*uParam2 = 8257;
				break;
			
			case 59:
				*uParam1 = 14018;
				*uParam2 = 16783936;
				break;
			
			case 60:
				*uParam1 = 9857;
				*uParam2 = 1665;
				break;
			
			case 61:
				*uParam1 = 33559104;
				*uParam2 = 0;
				break;
			
			case 62:
				*uParam1 = 50355076;
				*uParam2 = 19008;
				break;
			
			case 63:
				*uParam1 = 33559040;
				*uParam2 = 5185;
				break;
			
			case 64:
				*uParam1 = 50350467;
				*uParam2 = 1152;
				break;
			
			case 65:
				*uParam1 = 50350404;
				*uParam2 = 6209;
				break;
			
			case 66:
				*uParam1 = 33559040;
				*uParam2 = 0;
				break;
			
			case 67:
				*uParam1 = 50355075;
				*uParam2 = 9217;
				break;
			
			case 68:
				*uParam1 = 33554496;
				*uParam2 = 4674;
				break;
			
			case 69:
				*uParam1 = 9346;
				*uParam2 = 16781312;
				break;
			
			case 70:
				*uParam1 = 14082;
				*uParam2 = 5121;
				break;
			
			case 71:
				*uParam1 = 50350404;
				*uParam2 = 6272;
				break;
			
			case 72:
				*uParam1 = 50350403;
				*uParam2 = 512;
				break;
			
			case 73:
				*uParam1 = 33554432;
				*uParam2 = 9217;
				break;
			
			case 74:
				*uParam1 = 14017;
				*uParam2 = 10369;
				break;
			
			case 75:
				*uParam1 = 50355012;
				*uParam2 = 19009;
				break;
			
			case 76:
				*uParam1 = 9473;
				*uParam2 = 16778816;
				break;
			
			case 77:
				*uParam1 = 9986;
				*uParam2 = 16781441;
				break;
			
			case 78:
				*uParam1 = 33559104;
				*uParam2 = 514;
				break;
			
			case 79:
				*uParam1 = 13570;
				*uParam2 = 1024;
				break;
			
			case 80:
				*uParam1 = 50355075;
				*uParam2 = 641;
				break;
			
			case 81:
				*uParam1 = 50350467;
				*uParam2 = 64;
				break;
			
			case 82:
				*uParam1 = 50355012;
				*uParam2 = 13953;
				break;
			
			case 83:
				*uParam1 = 33559040;
				*uParam2 = 5185;
				break;
			
			case 84:
				*uParam1 = 33554496;
				*uParam2 = 64;
				break;
			
			case 85:
				*uParam1 = 50350468;
				*uParam2 = 6784;
				break;
			
			case 86:
				*uParam1 = 9345;
				*uParam2 = 16779904;
				break;
			
			case 87:
				*uParam1 = 50355076;
				*uParam2 = 18496;
				break;
			
			case 88:
				*uParam1 = 13505;
				*uParam2 = 2113;
				break;
			
			case 89:
				*uParam1 = 13442;
				*uParam2 = 16785409;
				break;
			
			case 90:
				*uParam1 = 50355011;
				*uParam2 = 20545;
				break;
			
			case 91:
				*uParam1 = 33559040;
				*uParam2 = 4673;
				break;
			
			case 92:
				*uParam1 = 50350468;
				*uParam2 = 5633;
				break;
			
			case 93:
				*uParam1 = 33559104;
				*uParam2 = 1024;
				break;
			
			case 94:
				*uParam1 = 33554496;
				*uParam2 = 4674;
				break;
			
			case 95:
				*uParam1 = 14018;
				*uParam2 = 5248;
				break;
			
			case 96:
				*uParam1 = 33554432;
				*uParam2 = 2;
				break;
			
			case 97:
				*uParam1 = 9409;
				*uParam2 = 16782848;
				break;
			
			case 98:
				*uParam1 = 9345;
				*uParam2 = 6721;
				break;
			
			case 99:
				*uParam1 = 50350403;
				*uParam2 = 1024;
				break;
			
			case 100:
				*uParam1 = 16787137;
				*uParam2 = 2113;
				break;
			
			case 101:
				*uParam1 = 14082;
				*uParam2 = 16783936;
				break;
			
			case 102:
				*uParam1 = 50350468;
				*uParam2 = 5633;
				break;
			
			case 103:
				*uParam1 = 50350404;
				*uParam2 = 6272;
				break;
			
			case 104:
				*uParam1 = 14081;
				*uParam2 = 1536;
				break;
			
			case 105:
				*uParam1 = 50355075;
				*uParam2 = 9345;
				break;
			
			case 106:
				*uParam1 = 33554496;
				*uParam2 = 4674;
				break;
			
			case 107:
				*uParam1 = 33559040;
				*uParam2 = 1089;
				break;
			
			case 108:
				*uParam1 = 50350403;
				*uParam2 = 0;
				break;
			
			case 109:
				*uParam1 = 13954;
				*uParam2 = 16786049;
				break;
			
			case 119:
				*uParam1 = 33559104;
				*uParam2 = 4096;
				break;
			
			case 120:
				*uParam1 = 9410;
				*uParam2 = 4608;
				break;
			
			case 146:
				*uParam1 = 33559040;
				*uParam2 = 4608;
				break;
			
			case 148:
				*uParam1 = 9345;
				*uParam2 = 6209;
				break;
			
			case 149:
				*uParam1 = 9922;
				*uParam2 = 16778369;
				break;
			
			case 150:
				*uParam1 = 33554496;
				*uParam2 = 9217;
				break;
			
			case 151:
				*uParam1 = 50355011;
				*uParam2 = 4672;
				break;
			
			case 152:
				*uParam1 = 33554432;
				*uParam2 = 66;
				break;
			
			case 153:
				*uParam1 = 50350467;
				*uParam2 = 577;
				break;
			
			case 154:
				*uParam1 = 13441;
				*uParam2 = 9728;
				break;
			
			case 155:
				*uParam1 = 50350404;
				*uParam2 = 6656;
				break;
			
			case 157:
				*uParam1 = 50355012;
				*uParam2 = 13889;
				break;
			
			case 158:
				*uParam1 = 50355076;
				*uParam2 = 18496;
				break;
			
			case 159:
				*uParam1 = 33554432;
				*uParam2 = 9217;
				break;
			
			case 160:
				*uParam1 = 13569;
				*uParam2 = 16784000;
				break;
			
			case 161:
				*uParam1 = 50355011;
				*uParam2 = 129;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 0;
				*uParam2 = 64;
				break;
			
			case 1:
				*uParam1 = 4160;
				*uParam2 = 1089;
				break;
			
			case 2:
				*uParam1 = 10562;
				*uParam2 = 1025;
				break;
			
			case 3:
				*uParam1 = 9538;
				*uParam2 = 4610;
				break;
			
			case 4:
				*uParam1 = 4225;
				*uParam2 = 5633;
				break;
			
			case 5:
				*uParam1 = 10050;
				*uParam2 = 9728;
				break;
			
			case 6:
				*uParam1 = 19652;
				*uParam2 = 4226;
				break;
			
			case 7:
				*uParam1 = 19139;
				*uParam2 = 8770;
				break;
			
			case 8:
				*uParam1 = 15107;
				*uParam2 = 9345;
				break;
			
			case 9:
				*uParam1 = 15620;
				*uParam2 = 1025;
				break;
			
			case 10:
				*uParam1 = 513;
				*uParam2 = 5632;
				break;
			
			case 11:
				*uParam1 = 19139;
				*uParam2 = 0;
				break;
			
			case 12:
				*uParam1 = 641;
				*uParam2 = 13314;
				break;
			
			case 13:
				*uParam1 = 576;
				*uParam2 = 8194;
				break;
			
			case 14:
				*uParam1 = 15620;
				*uParam2 = 4672;
				break;
			
			case 15:
				*uParam1 = 15620;
				*uParam2 = 1025;
				break;
			
			case 16:
				*uParam1 = 4672;
				*uParam2 = 8706;
				break;
			
			case 17:
				*uParam1 = 19652;
				*uParam2 = 4226;
				break;
			
			case 18:
				*uParam1 = 19139;
				*uParam2 = 8770;
				break;
			
			case 19:
				*uParam1 = 9538;
				*uParam2 = 9216;
				break;
			
			case 20:
				*uParam1 = 4097;
				*uParam2 = 12800;
				break;
			
			case 21:
				*uParam1 = 9538;
				*uParam2 = 1;
				break;
			
			case 22:
				*uParam1 = 513;
				*uParam2 = 5634;
				break;
			
			case 23:
				*uParam1 = 4225;
				*uParam2 = 12801;
				break;
			
			case 24:
				*uParam1 = 4160;
				*uParam2 = 1089;
				break;
			
			case 25:
				*uParam1 = 15107;
				*uParam2 = 9345;
				break;
			
			case 26:
				*uParam1 = 10562;
				*uParam2 = 4610;
				break;
			
			case 27:
				*uParam1 = 19139;
				*uParam2 = 0;
				break;
			
			case 28:
				*uParam1 = 512;
				*uParam2 = 8256;
				break;
			
			case 29:
				*uParam1 = 15620;
				*uParam2 = 4672;
				break;
			
			case 30:
				*uParam1 = 4097;
				*uParam2 = 5632;
				break;
			
			case 31:
				*uParam1 = 10562;
				*uParam2 = 1;
				break;
			
			case 32:
				*uParam1 = 0;
				*uParam2 = 64;
				break;
			
			case 33:
				*uParam1 = 9538;
				*uParam2 = 5634;
				break;
			
			case 34:
				*uParam1 = 19139;
				*uParam2 = 8770;
				break;
			
			case 35:
				*uParam1 = 15107;
				*uParam2 = 9345;
				break;
			
			case 36:
				*uParam1 = 641;
				*uParam2 = 13313;
				break;
			
			case 37:
				*uParam1 = 10050;
				*uParam2 = 8704;
				break;
			
			case 38:
				*uParam1 = 4672;
				*uParam2 = 8769;
				break;
			
			case 39:
				*uParam1 = 19139;
				*uParam2 = 0;
				break;
			
			case 40:
				*uParam1 = 19652;
				*uParam2 = 4226;
				break;
			
			case 41:
				*uParam1 = 15620;
				*uParam2 = 4672;
				break;
			
			case 42:
				*uParam1 = 15620;
				*uParam2 = 1025;
				break;
			
			case 43:
				*uParam1 = 576;
				*uParam2 = 8194;
				break;
			
			case 44:
				*uParam1 = 4225;
				*uParam2 = 12802;
				break;
			
			case 45:
				*uParam1 = 4096;
				*uParam2 = 1088;
				break;
			
			case 46:
				*uParam1 = 513;
				*uParam2 = 13314;
				break;
			
			case 47:
				*uParam1 = 19652;
				*uParam2 = 4226;
				break;
			
			case 48:
				*uParam1 = 4225;
				*uParam2 = 5633;
				break;
			
			case 49:
				*uParam1 = 10050;
				*uParam2 = 8192;
				break;
			
			case 50:
				*uParam1 = 10050;
				*uParam2 = 5122;
				break;
			
			case 51:
				*uParam1 = 15620;
				*uParam2 = 4672;
				break;
			
			case 52:
				*uParam1 = 15620;
				*uParam2 = 1025;
				break;
			
			case 53:
				*uParam1 = 19139;
				*uParam2 = 0;
				break;
			
			case 54:
				*uParam1 = 19139;
				*uParam2 = 8770;
				break;
			
			case 55:
				*uParam1 = 4672;
				*uParam2 = 8706;
				break;
			
			case 56:
				*uParam1 = 64;
				*uParam2 = 65;
				break;
			
			case 57:
				*uParam1 = 15107;
				*uParam2 = 9345;
				break;
			
			case 58:
				*uParam1 = 10562;
				*uParam2 = 513;
				break;
			
			case 59:
				*uParam1 = 513;
				*uParam2 = 5633;
				break;
			
			case 60:
				*uParam1 = 1;
				*uParam2 = 5120;
				break;
			
			case 61:
				*uParam1 = 4096;
				*uParam2 = 8768;
				break;
			
			case 62:
				*uParam1 = 10050;
				*uParam2 = 8192;
				break;
			
			case 63:
				*uParam1 = 15620;
				*uParam2 = 1025;
				break;
			
			case 64:
				*uParam1 = 19139;
				*uParam2 = 0;
				break;
			
			case 65:
				*uParam1 = 19139;
				*uParam2 = 8770;
				break;
			
			case 66:
				*uParam1 = 15107;
				*uParam2 = 9345;
				break;
			
			case 67:
				*uParam1 = 19652;
				*uParam2 = 4226;
				break;
			
			case 68:
				*uParam1 = 641;
				*uParam2 = 13314;
				break;
			
			case 69:
				*uParam1 = 4160;
				*uParam2 = 1538;
				break;
			
			case 70:
				*uParam1 = 9538;
				*uParam2 = 1;
				break;
			
			case 71:
				*uParam1 = 15620;
				*uParam2 = 4672;
				break;
			
			case 72:
				*uParam1 = 576;
				*uParam2 = 8257;
				break;
			
			case 73:
				*uParam1 = 10050;
				*uParam2 = 5634;
				break;
			
			case 74:
				*uParam1 = 4737;
				*uParam2 = 5632;
				break;
			
			case 75:
				*uParam1 = 10562;
				*uParam2 = 1025;
				break;
			
			case 76:
				*uParam1 = 19652;
				*uParam2 = 4226;
				break;
			
			case 77:
				*uParam1 = 4097;
				*uParam2 = 12289;
				break;
			
			case 78:
				*uParam1 = 19139;
				*uParam2 = 8770;
				break;
			
			case 79:
				*uParam1 = 512;
				*uParam2 = 576;
				break;
			
			case 80:
				*uParam1 = 9538;
				*uParam2 = 4610;
				break;
			
			case 81:
				*uParam1 = 4225;
				*uParam2 = 4610;
				break;
			
			case 82:
				*uParam1 = 9538;
				*uParam2 = 9216;
				break;
			
			case 83:
				*uParam1 = 19139;
				*uParam2 = 0;
				break;
			
			case 84:
				*uParam1 = 4672;
				*uParam2 = 8706;
				break;
			
			case 85:
				*uParam1 = 513;
				*uParam2 = 13312;
				break;
			
			case 86:
				*uParam1 = 64;
				*uParam2 = 65;
				break;
			
			case 87:
				*uParam1 = 15620;
				*uParam2 = 4672;
				break;
			
			case 88:
				*uParam1 = 15620;
				*uParam2 = 1025;
				break;
			
			case 89:
				*uParam1 = 15107;
				*uParam2 = 9345;
				break;
			
			case 90:
				*uParam1 = 512;
				*uParam2 = 8256;
				break;
			
			case 91:
				*uParam1 = 9538;
				*uParam2 = 1537;
				break;
			
			case 92:
				*uParam1 = 4160;
				*uParam2 = 1026;
				break;
			
			case 93:
				*uParam1 = 19652;
				*uParam2 = 4226;
				break;
			
			case 94:
				*uParam1 = 19139;
				*uParam2 = 8770;
				break;
			
			case 95:
				*uParam1 = 4609;
				*uParam2 = 13824;
				break;
			
			case 96:
				*uParam1 = 19139;
				*uParam2 = 0;
				break;
			
			case 97:
				*uParam1 = 129;
				*uParam2 = 5634;
				break;
			
			case 98:
				*uParam1 = 15620;
				*uParam2 = 4672;
				break;
			
			case 99:
				*uParam1 = 4097;
				*uParam2 = 13825;
				break;
			
			case 100:
				*uParam1 = 4608;
				*uParam2 = 65;
				break;
			
			case 101:
				*uParam1 = 10562;
				*uParam2 = 2;
				break;
			
			case 102:
				*uParam1 = 10050;
				*uParam2 = 5633;
				break;
			
			case 103:
				*uParam1 = 9538;
				*uParam2 = 9728;
				break;
			
			case 104:
				*uParam1 = 4225;
				*uParam2 = 5121;
				break;
			
			case 105:
				*uParam1 = 19203;
				*uParam2 = 4737;
				break;
			
			case 106:
				*uParam1 = 15555;
				*uParam2 = 130;
				break;
			
			case 107:
				*uParam1 = 15556;
				*uParam2 = 9281;
				break;
			
			case 108:
				*uParam1 = 19716;
				*uParam2 = 8706;
				break;
			
			case 109:
				*uParam1 = 513;
				*uParam2 = 5632;
				break;
			
			case 119:
				*uParam1 = 19139;
				*uParam2 = 1024;
				break;
			
			case 120:
				*uParam1 = 64;
				*uParam2 = 9794;
				break;
			
			case 146:
				*uParam1 = 513;
				*uParam2 = 13314;
				break;
			
			case 148:
				*uParam1 = 15620;
				*uParam2 = 5184;
				break;
			
			case 149:
				*uParam1 = 4672;
				*uParam2 = 8704;
				break;
			
			case 150:
				*uParam1 = 19139;
				*uParam2 = 0;
				break;
			
			case 151:
				*uParam1 = 64;
				*uParam2 = 578;
				break;
			
			case 152:
				*uParam1 = 0;
				*uParam2 = 8257;
				break;
			
			case 153:
				*uParam1 = 4225;
				*uParam2 = 13824;
				break;
			
			case 154:
				*uParam1 = 15556;
				*uParam2 = 8257;
				break;
			
			case 155:
				*uParam1 = 19716;
				*uParam2 = 8706;
				break;
			
			case 157:
				*uParam1 = 15620;
				*uParam2 = 4160;
				break;
			
			case 158:
				*uParam1 = 129;
				*uParam2 = 12802;
				break;
			
			case 159:
				*uParam1 = 64;
				*uParam2 = 0;
				break;
			
			case 160:
				*uParam1 = 10050;
				*uParam2 = 514;
				break;
			
			case 161:
				*uParam1 = 10562;
				*uParam2 = 8704;
				break;
			}
	}
}

void func_368(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 50350404;
				*uParam2 = 6145;
				break;
			
			case 1:
				*uParam1 = 50355075;
				*uParam2 = 9217;
				break;
			
			case 2:
				*uParam1 = 9858;
				*uParam2 = 16777792;
				break;
			
			case 3:
				*uParam1 = 14081;
				*uParam2 = 2048;
				break;
			
			case 4:
				*uParam1 = 13505;
				*uParam2 = 6273;
				break;
			
			case 5:
				*uParam1 = 50355076;
				*uParam2 = 18560;
				break;
			
			case 6:
				*uParam1 = 33559104;
				*uParam2 = 577;
				break;
			
			case 7:
				*uParam1 = 50350403;
				*uParam2 = 64;
				break;
			
			case 8:
				*uParam1 = 9858;
				*uParam2 = 16783873;
				break;
			
			case 9:
				*uParam1 = 33559040;
				*uParam2 = 5186;
				break;
			
			case 10:
				*uParam1 = 33554496;
				*uParam2 = 4608;
				break;
			
			case 11:
				*uParam1 = 33554432;
				*uParam2 = 9218;
				break;
			
			case 12:
				*uParam1 = 33559040;
				*uParam2 = 4161;
				break;
			
			case 13:
				*uParam1 = 50355075;
				*uParam2 = 65;
				break;
			
			case 14:
				*uParam1 = 50355011;
				*uParam2 = 21120;
				break;
			
			case 15:
				*uParam1 = 33554496;
				*uParam2 = 64;
				break;
			
			case 16:
				*uParam1 = 50350468;
				*uParam2 = 6720;
				break;
			
			case 17:
				*uParam1 = 13569;
				*uParam2 = 10816;
				break;
			
			case 18:
				*uParam1 = 50350404;
				*uParam2 = 5697;
				break;
			
			case 19:
				*uParam1 = 9858;
				*uParam2 = 16777344;
				break;
			
			case 20:
				*uParam1 = 13506;
				*uParam2 = 16777729;
				break;
			
			case 21:
				*uParam1 = 13505;
				*uParam2 = 5697;
				break;
			
			case 22:
				*uParam1 = 33559104;
				*uParam2 = 1025;
				break;
			
			case 23:
				*uParam1 = 14082;
				*uParam2 = 16786561;
				break;
			
			case 24:
				*uParam1 = 50350467;
				*uParam2 = 641;
				break;
			
			case 25:
				*uParam1 = 33559040;
				*uParam2 = 512;
				break;
			
			case 26:
				*uParam1 = 33554432;
				*uParam2 = 4674;
				break;
			
			case 27:
				*uParam1 = 9921;
				*uParam2 = 5696;
				break;
			
			case 28:
				*uParam1 = 13569;
				*uParam2 = 9857;
				break;
			
			case 29:
				*uParam1 = 9410;
				*uParam2 = 16782336;
				break;
			
			case 30:
				*uParam1 = 50350403;
				*uParam2 = 1152;
				break;
			
			case 31:
				*uParam1 = 50355076;
				*uParam2 = 13825;
				break;
			
			case 32:
				*uParam1 = 50355012;
				*uParam2 = 18944;
				break;
			
			case 33:
				*uParam1 = 13953;
				*uParam2 = 1601;
				break;
			
			case 34:
				*uParam1 = 13442;
				*uParam2 = 16781313;
				break;
			
			case 35:
				*uParam1 = 50355011;
				*uParam2 = 4097;
				break;
			
			case 36:
				*uParam1 = 50350467;
				*uParam2 = 640;
				break;
			
			case 37:
				*uParam1 = 9345;
				*uParam2 = 16779904;
				break;
			
			case 38:
				*uParam1 = 50350404;
				*uParam2 = 5697;
				break;
			
			case 39:
				*uParam1 = 33559040;
				*uParam2 = 4098;
				break;
			
			case 40:
				*uParam1 = 33554496;
				*uParam2 = 9280;
				break;
			
			case 41:
				*uParam1 = 9474;
				*uParam2 = 0;
				break;
			
			case 42:
				*uParam1 = 50355076;
				*uParam2 = 14912;
				break;
			
			case 43:
				*uParam1 = 33554496;
				*uParam2 = 1;
				break;
			
			case 44:
				*uParam1 = 33559104;
				*uParam2 = 4160;
				break;
			
			case 45:
				*uParam1 = 50350467;
				*uParam2 = 0;
				break;
			
			case 46:
				*uParam1 = 33559040;
				*uParam2 = 1090;
				break;
			
			case 47:
				*uParam1 = 50355012;
				*uParam2 = 18560;
				break;
			
			case 48:
				*uParam1 = 14017;
				*uParam2 = 16783488;
				break;
			
			case 49:
				*uParam1 = 14082;
				*uParam2 = 8769;
				break;
			
			case 50:
				*uParam1 = 50350467;
				*uParam2 = 1089;
				break;
			
			case 51:
				*uParam1 = 14018;
				*uParam2 = 1088;
				break;
			
			case 52:
				*uParam1 = 50350404;
				*uParam2 = 6273;
				break;
			
			case 53:
				*uParam1 = 33554432;
				*uParam2 = 9217;
				break;
			
			case 54:
				*uParam1 = 50355011;
				*uParam2 = 9280;
				break;
			
			case 55:
				*uParam1 = 9345;
				*uParam2 = 16783425;
				break;
			
			case 56:
				*uParam1 = 9985;
				*uParam2 = 16779265;
				break;
			
			case 57:
				*uParam1 = 50350468;
				*uParam2 = 6656;
				break;
			
			case 58:
				*uParam1 = 33554496;
				*uParam2 = 4608;
				break;
			
			case 59:
				*uParam1 = 13569;
				*uParam2 = 5760;
				break;
			
			case 60:
				*uParam1 = 50355011;
				*uParam2 = 513;
				break;
			
			case 61:
				*uParam1 = 50355076;
				*uParam2 = 13953;
				break;
			
			case 62:
				*uParam1 = 33559104;
				*uParam2 = 4673;
				break;
			
			case 63:
				*uParam1 = 13954;
				*uParam2 = 8321;
				break;
			
			case 64:
				*uParam1 = 33554432;
				*uParam2 = 2;
				break;
			
			case 65:
				*uParam1 = 13506;
				*uParam2 = 16777856;
				break;
			
			case 66:
				*uParam1 = 50355012;
				*uParam2 = 14465;
				break;
			
			case 67:
				*uParam1 = 50355076;
				*uParam2 = 19008;
				break;
			
			case 68:
				*uParam1 = 50350403;
				*uParam2 = 0;
				break;
			
			case 69:
				*uParam1 = 9921;
				*uParam2 = 16782848;
				break;
			
			case 70:
				*uParam1 = 33554432;
				*uParam2 = 9280;
				break;
			
			case 71:
				*uParam1 = 33559104;
				*uParam2 = 513;
				break;
			
			case 72:
				*uParam1 = 33559104;
				*uParam2 = 1090;
				break;
			
			case 73:
				*uParam1 = 9474;
				*uParam2 = 5185;
				break;
			
			case 74:
				*uParam1 = 50355075;
				*uParam2 = 21121;
				break;
			
			case 75:
				*uParam1 = 13954;
				*uParam2 = 16783872;
				break;
			
			case 76:
				*uParam1 = 13505;
				*uParam2 = 2177;
				break;
			
			case 77:
				*uParam1 = 33554432;
				*uParam2 = 4672;
				break;
			
			case 78:
				*uParam1 = 50355075;
				*uParam2 = 4096;
				break;
			
			case 79:
				*uParam1 = 9409;
				*uParam2 = 2560;
				break;
			
			case 80:
				*uParam1 = 50350404;
				*uParam2 = 6208;
				break;
			
			case 81:
				*uParam1 = 33559104;
				*uParam2 = 4098;
				break;
			
			case 82:
				*uParam1 = 13442;
				*uParam2 = 16786432;
				break;
			
			case 83:
				*uParam1 = 9474;
				*uParam2 = 4673;
				break;
			
			case 84:
				*uParam1 = 50355012;
				*uParam2 = 17985;
				break;
			
			case 85:
				*uParam1 = 33554432;
				*uParam2 = 1;
				break;
			
			case 86:
				*uParam1 = 13505;
				*uParam2 = 16779841;
				break;
			
			case 87:
				*uParam1 = 33554432;
				*uParam2 = 9217;
				break;
			
			case 88:
				*uParam1 = 50355011;
				*uParam2 = 5249;
				break;
			
			case 89:
				*uParam1 = 33559104;
				*uParam2 = 512;
				break;
			
			case 90:
				*uParam1 = 50350468;
				*uParam2 = 6656;
				break;
			
			case 91:
				*uParam1 = 13570;
				*uParam2 = 4225;
				break;
			
			case 92:
				*uParam1 = 9986;
				*uParam2 = 16777216;
				break;
			
			case 93:
				*uParam1 = 50350468;
				*uParam2 = 5697;
				break;
			
			case 94:
				*uParam1 = 50350467;
				*uParam2 = 1152;
				break;
			
			case 95:
				*uParam1 = 13441;
				*uParam2 = 10368;
				break;
			
			case 96:
				*uParam1 = 50350403;
				*uParam2 = 512;
				break;
			
			case 97:
				*uParam1 = 9857;
				*uParam2 = 16782913;
				break;
			
			case 98:
				*uParam1 = 50350467;
				*uParam2 = 65;
				break;
			
			case 99:
				*uParam1 = 33559040;
				*uParam2 = 5186;
				break;
			
			case 100:
				*uParam1 = 50350404;
				*uParam2 = 6145;
				break;
			
			case 101:
				*uParam1 = 9857;
				*uParam2 = 2049;
				break;
			
			case 102:
				*uParam1 = 13954;
				*uParam2 = 16777856;
				break;
			
			case 103:
				*uParam1 = 13441;
				*uParam2 = 6208;
				break;
			
			case 104:
				*uParam1 = 50355075;
				*uParam2 = 9217;
				break;
			
			case 105:
				*uParam1 = 33554496;
				*uParam2 = 4673;
				break;
			
			case 106:
				*uParam1 = 33559104;
				*uParam2 = 1026;
				break;
			
			case 107:
				*uParam1 = 9922;
				*uParam2 = 16782465;
				break;
			
			case 108:
				*uParam1 = 50355012;
				*uParam2 = 14464;
				break;
			
			case 109:
				*uParam1 = 33559040;
				*uParam2 = 4672;
				break;
			
			case 119:
				*uParam1 = 50350403;
				*uParam2 = 1088;
				break;
			
			case 120:
				*uParam1 = 13569;
				*uParam2 = 9793;
				break;
			
			case 146:
				*uParam1 = 50355075;
				*uParam2 = 20608;
				break;
			
			case 148:
				*uParam1 = 50355076;
				*uParam2 = 19009;
				break;
			
			case 149:
				*uParam1 = 33559040;
				*uParam2 = 4096;
				break;
			
			case 150:
				*uParam1 = 14082;
				*uParam2 = 16788097;
				break;
			
			case 151:
				*uParam1 = 50355012;
				*uParam2 = 13888;
				break;
			
			case 152:
				*uParam1 = 33554432;
				*uParam2 = 9282;
				break;
			
			case 153:
				*uParam1 = 33554496;
				*uParam2 = 1;
				break;
			
			case 154:
				*uParam1 = 50355011;
				*uParam2 = 513;
				break;
			
			case 155:
				*uParam1 = 9409;
				*uParam2 = 6656;
				break;
			
			case 157:
				*uParam1 = 9410;
				*uParam2 = 16777792;
				break;
			
			case 158:
				*uParam1 = 14081;
				*uParam2 = 16778752;
				break;
			
			case 159:
				*uParam1 = 14082;
				*uParam2 = 4225;
				break;
			
			case 160:
				*uParam1 = 50350467;
				*uParam2 = 577;
				break;
			
			case 161:
				*uParam1 = 33554432;
				*uParam2 = 9217;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 10562;
				*uParam2 = 4097;
				break;
			
			case 1:
				*uParam1 = 512;
				*uParam2 = 8257;
				break;
			
			case 2:
				*uParam1 = 10562;
				*uParam2 = 8706;
				break;
			
			case 3:
				*uParam1 = 129;
				*uParam2 = 5121;
				break;
			
			case 4:
				*uParam1 = 19716;
				*uParam2 = 8194;
				break;
			
			case 5:
				*uParam1 = 10562;
				*uParam2 = 1024;
				break;
			
			case 6:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 7:
				*uParam1 = 4609;
				*uParam2 = 5120;
				break;
			
			case 8:
				*uParam1 = 19651;
				*uParam2 = 4674;
				break;
			
			case 9:
				*uParam1 = 15620;
				*uParam2 = 1153;
				break;
			
			case 10:
				*uParam1 = 4160;
				*uParam2 = 1538;
				break;
			
			case 11:
				*uParam1 = 513;
				*uParam2 = 13826;
				break;
			
			case 12:
				*uParam1 = 15043;
				*uParam2 = 4096;
				break;
			
			case 13:
				*uParam1 = 19716;
				*uParam2 = 64;
				break;
			
			case 14:
				*uParam1 = 4672;
				*uParam2 = 8768;
				break;
			
			case 15:
				*uParam1 = 15620;
				*uParam2 = 1153;
				break;
			
			case 16:
				*uParam1 = 19716;
				*uParam2 = 576;
				break;
			
			case 17:
				*uParam1 = 15043;
				*uParam2 = 8833;
				break;
			
			case 18:
				*uParam1 = 4225;
				*uParam2 = 12800;
				break;
			
			case 19:
				*uParam1 = 9538;
				*uParam2 = 0;
				break;
			
			case 20:
				*uParam1 = 64;
				*uParam2 = 2;
				break;
			
			case 21:
				*uParam1 = 10050;
				*uParam2 = 9218;
				break;
			
			case 22:
				*uParam1 = 15043;
				*uParam2 = 5120;
				break;
			
			case 23:
				*uParam1 = 19716;
				*uParam2 = 8194;
				break;
			
			case 24:
				*uParam1 = 512;
				*uParam2 = 8257;
				break;
			
			case 25:
				*uParam1 = 19139;
				*uParam2 = 4674;
				break;
			
			case 26:
				*uParam1 = 4737;
				*uParam2 = 5121;
				break;
			
			case 27:
				*uParam1 = 1;
				*uParam2 = 5634;
				break;
			
			case 28:
				*uParam1 = 10050;
				*uParam2 = 4097;
				break;
			
			case 29:
				*uParam1 = 4160;
				*uParam2 = 576;
				break;
			
			case 30:
				*uParam1 = 64;
				*uParam2 = 2;
				break;
			
			case 31:
				*uParam1 = 9538;
				*uParam2 = 9218;
				break;
			
			case 32:
				*uParam1 = 10050;
				*uParam2 = 5633;
				break;
			
			case 33:
				*uParam1 = 4225;
				*uParam2 = 13313;
				break;
			
			case 34:
				*uParam1 = 513;
				*uParam2 = 13824;
				break;
			
			case 35:
				*uParam1 = 19139;
				*uParam2 = 4162;
				break;
			
			case 36:
				*uParam1 = 19716;
				*uParam2 = 9218;
				break;
			
			case 37:
				*uParam1 = 9538;
				*uParam2 = 512;
				break;
			
			case 38:
				*uParam1 = 4608;
				*uParam2 = 8769;
				break;
			
			case 39:
				*uParam1 = 1;
				*uParam2 = 13314;
				break;
			
			case 40:
				*uParam1 = 15043;
				*uParam2 = 8833;
				break;
			
			case 41:
				*uParam1 = 64;
				*uParam2 = 64;
				break;
			
			case 42:
				*uParam1 = 15620;
				*uParam2 = 641;
				break;
			
			case 43:
				*uParam1 = 19716;
				*uParam2 = 64;
				break;
			
			case 44:
				*uParam1 = 15043;
				*uParam2 = 4096;
				break;
			
			case 45:
				*uParam1 = 9538;
				*uParam2 = 5633;
				break;
			
			case 46:
				*uParam1 = 15043;
				*uParam2 = 5120;
				break;
			
			case 47:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 48:
				*uParam1 = 19716;
				*uParam2 = 8706;
				break;
			
			case 49:
				*uParam1 = 10050;
				*uParam2 = 512;
				break;
			
			case 50:
				*uParam1 = 641;
				*uParam2 = 5121;
				break;
			
			case 51:
				*uParam1 = 64;
				*uParam2 = 8768;
				break;
			
			case 52:
				*uParam1 = 15620;
				*uParam2 = 1153;
				break;
			
			case 53:
				*uParam1 = 4609;
				*uParam2 = 5634;
				break;
			
			case 54:
				*uParam1 = 4225;
				*uParam2 = 13824;
				break;
			
			case 55:
				*uParam1 = 19716;
				*uParam2 = 64;
				break;
			
			case 56:
				*uParam1 = 4608;
				*uParam2 = 8769;
				break;
			
			case 57:
				*uParam1 = 19139;
				*uParam2 = 4162;
				break;
			
			case 58:
				*uParam1 = 10050;
				*uParam2 = 8194;
				break;
			
			case 59:
				*uParam1 = 19716;
				*uParam2 = 9218;
				break;
			
			case 60:
				*uParam1 = 4672;
				*uParam2 = 2;
				break;
			
			case 61:
				*uParam1 = 10562;
				*uParam2 = 4097;
				break;
			
			case 62:
				*uParam1 = 10050;
				*uParam2 = 512;
				break;
			
			case 63:
				*uParam1 = 15620;
				*uParam2 = 641;
				break;
			
			case 64:
				*uParam1 = 4609;
				*uParam2 = 5634;
				break;
			
			case 65:
				*uParam1 = 4225;
				*uParam2 = 12288;
				break;
			
			case 66:
				*uParam1 = 19139;
				*uParam2 = 4674;
				break;
			
			case 67:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 68:
				*uParam1 = 15043;
				*uParam2 = 4096;
				break;
			
			case 69:
				*uParam1 = 19716;
				*uParam2 = 1088;
				break;
			
			case 70:
				*uParam1 = 10050;
				*uParam2 = 9218;
				break;
			
			case 71:
				*uParam1 = 4672;
				*uParam2 = 64;
				break;
			
			case 72:
				*uParam1 = 512;
				*uParam2 = 8769;
				break;
			
			case 73:
				*uParam1 = 129;
				*uParam2 = 4609;
				break;
			
			case 74:
				*uParam1 = 64;
				*uParam2 = 1026;
				break;
			
			case 75:
				*uParam1 = 9538;
				*uParam2 = 9730;
				break;
			
			case 76:
				*uParam1 = 15043;
				*uParam2 = 8833;
				break;
			
			case 77:
				*uParam1 = 19716;
				*uParam2 = 8706;
				break;
			
			case 78:
				*uParam1 = 1;
				*uParam2 = 13824;
				break;
			
			case 79:
				*uParam1 = 10562;
				*uParam2 = 5121;
				break;
			
			case 80:
				*uParam1 = 641;
				*uParam2 = 5121;
				break;
			
			case 81:
				*uParam1 = 15043;
				*uParam2 = 4096;
				break;
			
			case 82:
				*uParam1 = 9538;
				*uParam2 = 0;
				break;
			
			case 83:
				*uParam1 = 4097;
				*uParam2 = 4610;
				break;
			
			case 84:
				*uParam1 = 19716;
				*uParam2 = 64;
				break;
			
			case 85:
				*uParam1 = 4160;
				*uParam2 = 9218;
				break;
			
			case 86:
				*uParam1 = 4608;
				*uParam2 = 577;
				break;
			
			case 87:
				*uParam1 = 576;
				*uParam2 = 8256;
				break;
			
			case 88:
				*uParam1 = 15620;
				*uParam2 = 641;
				break;
			
			case 89:
				*uParam1 = 19139;
				*uParam2 = 4674;
				break;
			
			case 90:
				*uParam1 = 9538;
				*uParam2 = 4609;
				break;
			
			case 91:
				*uParam1 = 10562;
				*uParam2 = 8706;
				break;
			
			case 92:
				*uParam1 = 19716;
				*uParam2 = 1088;
				break;
			
			case 93:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 94:
				*uParam1 = 4737;
				*uParam2 = 13824;
				break;
			
			case 95:
				*uParam1 = 4160;
				*uParam2 = 9730;
				break;
			
			case 96:
				*uParam1 = 513;
				*uParam2 = 13314;
				break;
			
			case 97:
				*uParam1 = 15043;
				*uParam2 = 5120;
				break;
			
			case 98:
				*uParam1 = 64;
				*uParam2 = 64;
				break;
			
			case 99:
				*uParam1 = 19716;
				*uParam2 = 8194;
				break;
			
			case 100:
				*uParam1 = 4608;
				*uParam2 = 65;
				break;
			
			case 101:
				*uParam1 = 9538;
				*uParam2 = 5120;
				break;
			
			case 102:
				*uParam1 = 10050;
				*uParam2 = 1537;
				break;
			
			case 103:
				*uParam1 = 4737;
				*uParam2 = 5633;
				break;
			
			case 104:
				*uParam1 = 10050;
				*uParam2 = 9218;
				break;
			
			case 105:
				*uParam1 = 19652;
				*uParam2 = 8258;
				break;
			
			case 106:
				*uParam1 = 19139;
				*uParam2 = 4738;
				break;
			
			case 107:
				*uParam1 = 15620;
				*uParam2 = 1153;
				break;
			
			case 108:
				*uParam1 = 15107;
				*uParam2 = 8193;
				break;
			
			case 109:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 119:
				*uParam1 = 15107;
				*uParam2 = 5184;
				break;
			
			case 120:
				*uParam1 = 0;
				*uParam2 = 9218;
				break;
			
			case 146:
				*uParam1 = 513;
				*uParam2 = 5120;
				break;
			
			case 148:
				*uParam1 = 4672;
				*uParam2 = 8704;
				break;
			
			case 149:
				*uParam1 = 4225;
				*uParam2 = 13826;
				break;
			
			case 150:
				*uParam1 = 15107;
				*uParam2 = 5184;
				break;
			
			case 151:
				*uParam1 = 64;
				*uParam2 = 578;
				break;
			
			case 152:
				*uParam1 = 0;
				*uParam2 = 8257;
				break;
			
			case 153:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 154:
				*uParam1 = 15620;
				*uParam2 = 1153;
				break;
			
			case 155:
				*uParam1 = 15107;
				*uParam2 = 8193;
				break;
			
			case 157:
				*uParam1 = 4672;
				*uParam2 = 8704;
				break;
			
			case 158:
				*uParam1 = 129;
				*uParam2 = 12800;
				break;
			
			case 159:
				*uParam1 = 1;
				*uParam2 = 4098;
				break;
			
			case 160:
				*uParam1 = 10050;
				*uParam2 = 4096;
				break;
			
			case 161:
				*uParam1 = 4737;
				*uParam2 = 13313;
				break;
			}
	}
}

void func_369(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 16790721;
				*uParam2 = 16778752;
				break;
			
			case 1:
				*uParam1 = 14082;
				*uParam2 = 16785408;
				break;
			
			case 2:
				*uParam1 = 13953;
				*uParam2 = 6145;
				break;
			
			case 3:
				*uParam1 = 50350468;
				*uParam2 = 5633;
				break;
			
			case 4:
				*uParam1 = 33554496;
				*uParam2 = 9217;
				break;
			
			case 5:
				*uParam1 = 9410;
				*uParam2 = 16781889;
				break;
			
			case 6:
				*uParam1 = 50350467;
				*uParam2 = 640;
				break;
			
			case 7:
				*uParam1 = 50355012;
				*uParam2 = 14848;
				break;
			
			case 8:
				*uParam1 = 33559040;
				*uParam2 = 1090;
				break;
			
			case 9:
				*uParam1 = 50355011;
				*uParam2 = 8833;
				break;
			
			case 10:
				*uParam1 = 33559104;
				*uParam2 = 4672;
				break;
			
			case 11:
				*uParam1 = 50350403;
				*uParam2 = 1089;
				break;
			
			case 12:
				*uParam1 = 50355075;
				*uParam2 = 20544;
				break;
			
			case 13:
				*uParam1 = 9922;
				*uParam2 = 1152;
				break;
			
			case 14:
				*uParam1 = 50355012;
				*uParam2 = 18048;
				break;
			
			case 15:
				*uParam1 = 33559040;
				*uParam2 = 4096;
				break;
			
			case 16:
				*uParam1 = 9858;
				*uParam2 = 2625;
				break;
			
			case 17:
				*uParam1 = 50355076;
				*uParam2 = 14465;
				break;
			
			case 18:
				*uParam1 = 13569;
				*uParam2 = 16779904;
				break;
			
			case 19:
				*uParam1 = 9473;
				*uParam2 = 16783425;
				break;
			
			case 20:
				*uParam1 = 33554496;
				*uParam2 = 4674;
				break;
			
			case 21:
				*uParam1 = 33554496;
				*uParam2 = 1;
				break;
			
			case 22:
				*uParam1 = 50350403;
				*uParam2 = 0;
				break;
			
			case 23:
				*uParam1 = 33554432;
				*uParam2 = 4674;
				break;
			
			case 24:
				*uParam1 = 13442;
				*uParam2 = 5248;
				break;
			
			case 25:
				*uParam1 = 33559040;
				*uParam2 = 512;
				break;
			
			case 26:
				*uParam1 = 50355075;
				*uParam2 = 1089;
				break;
			
			case 27:
				*uParam1 = 50350468;
				*uParam2 = 6657;
				break;
			
			case 28:
				*uParam1 = 33554432;
				*uParam2 = 65;
				break;
			
			case 29:
				*uParam1 = 14017;
				*uParam2 = 16787073;
				break;
			
			case 30:
				*uParam1 = 50350404;
				*uParam2 = 6208;
				break;
			
			case 31:
				*uParam1 = 14017;
				*uParam2 = 2112;
				break;
			
			case 32:
				*uParam1 = 9858;
				*uParam2 = 16781825;
				break;
			
			case 33:
				*uParam1 = 33554496;
				*uParam2 = 9217;
				break;
			
			case 34:
				*uParam1 = 33559104;
				*uParam2 = 5186;
				break;
			
			case 35:
				*uParam1 = 13442;
				*uParam2 = 8320;
				break;
			
			case 36:
				*uParam1 = 50355012;
				*uParam2 = 18944;
				break;
			
			case 37:
				*uParam1 = 50355076;
				*uParam2 = 14465;
				break;
			
			case 38:
				*uParam1 = 13569;
				*uParam2 = 16784000;
				break;
			
			case 39:
				*uParam1 = 50355011;
				*uParam2 = 4673;
				break;
			
			case 40:
				*uParam1 = 33559040;
				*uParam2 = 0;
				break;
			
			case 41:
				*uParam1 = 9473;
				*uParam2 = 1537;
				break;
			
			case 42:
				*uParam1 = 9986;
				*uParam2 = 16778305;
				break;
			
			case 43:
				*uParam1 = 50355075;
				*uParam2 = 9216;
				break;
			
			case 44:
				*uParam1 = 33554496;
				*uParam2 = 4608;
				break;
			
			case 45:
				*uParam1 = 50350468;
				*uParam2 = 6208;
				break;
			
			case 46:
				*uParam1 = 50350403;
				*uParam2 = 129;
				break;
			
			case 47:
				*uParam1 = 13442;
				*uParam2 = 5185;
				break;
			
			case 48:
				*uParam1 = 50350468;
				*uParam2 = 6721;
				break;
			
			case 49:
				*uParam1 = 33554432;
				*uParam2 = 2;
				break;
			
			case 50:
				*uParam1 = 14018;
				*uParam2 = 16785408;
				break;
			
			case 51:
				*uParam1 = 13569;
				*uParam2 = 2049;
				break;
			
			case 52:
				*uParam1 = 9857;
				*uParam2 = 16782912;
				break;
			
			case 53:
				*uParam1 = 50350403;
				*uParam2 = 1088;
				break;
			
			case 54:
				*uParam1 = 50350404;
				*uParam2 = 5632;
				break;
			
			case 55:
				*uParam1 = 33554496;
				*uParam2 = 9281;
				break;
			
			case 56:
				*uParam1 = 33559040;
				*uParam2 = 4161;
				break;
			
			case 57:
				*uParam1 = 13570;
				*uParam2 = 8257;
				break;
			
			case 58:
				*uParam1 = 33559104;
				*uParam2 = 1088;
				break;
			
			case 59:
				*uParam1 = 50355076;
				*uParam2 = 17921;
				break;
			
			case 60:
				*uParam1 = 9346;
				*uParam2 = 640;
				break;
			
			case 61:
				*uParam1 = 13569;
				*uParam2 = 16779904;
				break;
			
			case 62:
				*uParam1 = 50350403;
				*uParam2 = 640;
				break;
			
			case 63:
				*uParam1 = 33559040;
				*uParam2 = 514;
				break;
			
			case 64:
				*uParam1 = 50355075;
				*uParam2 = 129;
				break;
			
			case 65:
				*uParam1 = 13505;
				*uParam2 = 16782977;
				break;
			
			case 66:
				*uParam1 = 9921;
				*uParam2 = 5696;
				break;
			
			case 67:
				*uParam1 = 13954;
				*uParam2 = 16777729;
				break;
			
			case 68:
				*uParam1 = 50350468;
				*uParam2 = 6144;
				break;
			
			case 69:
				*uParam1 = 50350468;
				*uParam2 = 5697;
				break;
			
			case 70:
				*uParam1 = 33554496;
				*uParam2 = 0;
				break;
			
			case 71:
				*uParam1 = 50350403;
				*uParam2 = 1152;
				break;
			
			case 72:
				*uParam1 = 50355075;
				*uParam2 = 5249;
				break;
			
			case 73:
				*uParam1 = 33559040;
				*uParam2 = 4162;
				break;
			
			case 74:
				*uParam1 = 9922;
				*uParam2 = 2560;
				break;
			
			case 75:
				*uParam1 = 14081;
				*uParam2 = 10305;
				break;
			
			case 76:
				*uParam1 = 33554496;
				*uParam2 = 9281;
				break;
			
			case 77:
				*uParam1 = 33559104;
				*uParam2 = 1024;
				break;
			
			case 78:
				*uParam1 = 50350404;
				*uParam2 = 6720;
				break;
			
			case 79:
				*uParam1 = 50355012;
				*uParam2 = 14337;
				break;
			
			case 80:
				*uParam1 = 13442;
				*uParam2 = 16781377;
				break;
			
			case 81:
				*uParam1 = 50355075;
				*uParam2 = 21057;
				break;
			
			case 82:
				*uParam1 = 9409;
				*uParam2 = 6273;
				break;
			
			case 83:
				*uParam1 = 33554432;
				*uParam2 = 4674;
				break;
			
			case 84:
				*uParam1 = 9473;
				*uParam2 = 16783488;
				break;
			
			case 85:
				*uParam1 = 50350403;
				*uParam2 = 576;
				break;
			
			case 86:
				*uParam1 = 33559040;
				*uParam2 = 4609;
				break;
			
			case 87:
				*uParam1 = 50355075;
				*uParam2 = 4224;
				break;
			
			case 88:
				*uParam1 = 9986;
				*uParam2 = 1024;
				break;
			
			case 89:
				*uParam1 = 33554496;
				*uParam2 = 0;
				break;
			
			case 90:
				*uParam1 = 13442;
				*uParam2 = 16782465;
				break;
			
			case 91:
				*uParam1 = 33554432;
				*uParam2 = 9218;
				break;
			
			case 92:
				*uParam1 = 13441;
				*uParam2 = 1537;
				break;
			
			case 93:
				*uParam1 = 14017;
				*uParam2 = 16786944;
				break;
			
			case 94:
				*uParam1 = 50355012;
				*uParam2 = 19072;
				break;
			
			case 95:
				*uParam1 = 50355076;
				*uParam2 = 13825;
				break;
			
			case 96:
				*uParam1 = 50355012;
				*uParam2 = 18944;
				break;
			
			case 97:
				*uParam1 = 33559040;
				*uParam2 = 4161;
				break;
			
			case 98:
				*uParam1 = 13506;
				*uParam2 = 16785984;
				break;
			
			case 99:
				*uParam1 = 50350403;
				*uParam2 = 129;
				break;
			
			case 100:
				*uParam1 = 50350468;
				*uParam2 = 6721;
				break;
			
			case 101:
				*uParam1 = 9858;
				*uParam2 = 16781376;
				break;
			
			case 102:
				*uParam1 = 13569;
				*uParam2 = 2625;
				break;
			
			case 103:
				*uParam1 = 33559104;
				*uParam2 = 1090;
				break;
			
			case 104:
				*uParam1 = 33554432;
				*uParam2 = 4673;
				break;
			
			case 105:
				*uParam1 = 50355075;
				*uParam2 = 20992;
				break;
			
			case 106:
				*uParam1 = 9921;
				*uParam2 = 16779392;
				break;
			
			case 107:
				*uParam1 = 14018;
				*uParam2 = 6657;
				break;
			
			case 108:
				*uParam1 = 50350403;
				*uParam2 = 1;
				break;
			
			case 109:
				*uParam1 = 50355076;
				*uParam2 = 18048;
				break;
			
			case 119:
				*uParam1 = 33559104;
				*uParam2 = 4608;
				break;
			
			case 120:
				*uParam1 = 14082;
				*uParam2 = 8832;
				break;
			
			case 146:
				*uParam1 = 33559040;
				*uParam2 = 4096;
				break;
			
			case 148:
				*uParam1 = 50355012;
				*uParam2 = 14401;
				break;
			
			case 149:
				*uParam1 = 50350404;
				*uParam2 = 5760;
				break;
			
			case 150:
				*uParam1 = 13506;
				*uParam2 = 16785473;
				break;
			
			case 151:
				*uParam1 = 50350467;
				*uParam2 = 1089;
				break;
			
			case 152:
				*uParam1 = 13569;
				*uParam2 = 5632;
				break;
			
			case 153:
				*uParam1 = 50355075;
				*uParam2 = 128;
				break;
			
			case 154:
				*uParam1 = 33554496;
				*uParam2 = 9217;
				break;
			
			case 155:
				*uParam1 = 33554432;
				*uParam2 = 66;
				break;
			
			case 157:
				*uParam1 = 9857;
				*uParam2 = 16782849;
				break;
			
			case 158:
				*uParam1 = 33554432;
				*uParam2 = 2;
				break;
			
			case 159:
				*uParam1 = 13442;
				*uParam2 = 16778369;
				break;
			
			case 160:
				*uParam1 = 33559104;
				*uParam2 = 65;
				break;
			
			case 161:
				*uParam1 = 50350403;
				*uParam2 = 576;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 15043;
				*uParam2 = 4162;
				break;
			
			case 1:
				*uParam1 = 9538;
				*uParam2 = 9216;
				break;
			
			case 2:
				*uParam1 = 640;
				*uParam2 = 8706;
				break;
			
			case 3:
				*uParam1 = 10050;
				*uParam2 = 1;
				break;
			
			case 4:
				*uParam1 = 513;
				*uParam2 = 13312;
				break;
			
			case 5:
				*uParam1 = 10562;
				*uParam2 = 4610;
				break;
			
			case 6:
				*uParam1 = 19716;
				*uParam2 = 8769;
				break;
			
			case 7:
				*uParam1 = 15556;
				*uParam2 = 1026;
				break;
			
			case 8:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 9:
				*uParam1 = 4096;
				*uParam2 = 1601;
				break;
			
			case 10:
				*uParam1 = 641;
				*uParam2 = 5633;
				break;
			
			case 11:
				*uParam1 = 19716;
				*uParam2 = 128;
				break;
			
			case 12:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 13:
				*uParam1 = 4097;
				*uParam2 = 13314;
				break;
			
			case 14:
				*uParam1 = 4672;
				*uParam2 = 8192;
				break;
			
			case 15:
				*uParam1 = 64;
				*uParam2 = 577;
				break;
			
			case 16:
				*uParam1 = 4225;
				*uParam2 = 4098;
				break;
			
			case 17:
				*uParam1 = 19716;
				*uParam2 = 8769;
				break;
			
			case 18:
				*uParam1 = 15556;
				*uParam2 = 1026;
				break;
			
			case 19:
				*uParam1 = 9538;
				*uParam2 = 4610;
				break;
			
			case 20:
				*uParam1 = 4097;
				*uParam2 = 13825;
				break;
			
			case 21:
				*uParam1 = 4096;
				*uParam2 = 1090;
				break;
			
			case 22:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 23:
				*uParam1 = 513;
				*uParam2 = 13312;
				break;
			
			case 24:
				*uParam1 = 10562;
				*uParam2 = 9216;
				break;
			
			case 25:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 26:
				*uParam1 = 10050;
				*uParam2 = 1537;
				break;
			
			case 27:
				*uParam1 = 19716;
				*uParam2 = 128;
				break;
			
			case 28:
				*uParam1 = 15043;
				*uParam2 = 4162;
				break;
			
			case 29:
				*uParam1 = 576;
				*uParam2 = 8704;
				break;
			
			case 30:
				*uParam1 = 641;
				*uParam2 = 5633;
				break;
			
			case 31:
				*uParam1 = 4672;
				*uParam2 = 8258;
				break;
			
			case 32:
				*uParam1 = 15043;
				*uParam2 = 4162;
				break;
			
			case 33:
				*uParam1 = 9538;
				*uParam2 = 1537;
				break;
			
			case 34:
				*uParam1 = 15556;
				*uParam2 = 1026;
				break;
			
			case 35:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 36:
				*uParam1 = 4097;
				*uParam2 = 4608;
				break;
			
			case 37:
				*uParam1 = 10050;
				*uParam2 = 4610;
				break;
			
			case 38:
				*uParam1 = 9538;
				*uParam2 = 8192;
				break;
			
			case 39:
				*uParam1 = 19716;
				*uParam2 = 128;
				break;
			
			case 40:
				*uParam1 = 19716;
				*uParam2 = 8769;
				break;
			
			case 41:
				*uParam1 = 64;
				*uParam2 = 0;
				break;
			
			case 42:
				*uParam1 = 4096;
				*uParam2 = 1089;
				break;
			
			case 43:
				*uParam1 = 4737;
				*uParam2 = 5122;
				break;
			
			case 44:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 45:
				*uParam1 = 15043;
				*uParam2 = 4162;
				break;
			
			case 46:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 47:
				*uParam1 = 19716;
				*uParam2 = 8769;
				break;
			
			case 48:
				*uParam1 = 129;
				*uParam2 = 12800;
				break;
			
			case 49:
				*uParam1 = 10050;
				*uParam2 = 5122;
				break;
			
			case 50:
				*uParam1 = 10562;
				*uParam2 = 1;
				break;
			
			case 51:
				*uParam1 = 576;
				*uParam2 = 8768;
				break;
			
			case 52:
				*uParam1 = 64;
				*uParam2 = 1537;
				break;
			
			case 53:
				*uParam1 = 19716;
				*uParam2 = 128;
				break;
			
			case 54:
				*uParam1 = 15556;
				*uParam2 = 1026;
				break;
			
			case 55:
				*uParam1 = 4097;
				*uParam2 = 12290;
				break;
			
			case 56:
				*uParam1 = 10050;
				*uParam2 = 9216;
				break;
			
			case 57:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 58:
				*uParam1 = 4672;
				*uParam2 = 8258;
				break;
			
			case 59:
				*uParam1 = 513;
				*uParam2 = 5632;
				break;
			
			case 60:
				*uParam1 = 4225;
				*uParam2 = 13825;
				break;
			
			case 61:
				*uParam1 = 15043;
				*uParam2 = 4162;
				break;
			
			case 62:
				*uParam1 = 9538;
				*uParam2 = 5122;
				break;
			
			case 63:
				*uParam1 = 4096;
				*uParam2 = 1089;
				break;
			
			case 64:
				*uParam1 = 19716;
				*uParam2 = 128;
				break;
			
			case 65:
				*uParam1 = 15556;
				*uParam2 = 1026;
				break;
			
			case 66:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 67:
				*uParam1 = 19716;
				*uParam2 = 8769;
				break;
			
			case 68:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 69:
				*uParam1 = 1;
				*uParam2 = 12802;
				break;
			
			case 70:
				*uParam1 = 64;
				*uParam2 = 2;
				break;
			
			case 71:
				*uParam1 = 4672;
				*uParam2 = 8256;
				break;
			
			case 72:
				*uParam1 = 10562;
				*uParam2 = 8704;
				break;
			
			case 73:
				*uParam1 = 10050;
				*uParam2 = 1537;
				break;
			
			case 74:
				*uParam1 = 641;
				*uParam2 = 5633;
				break;
			
			case 75:
				*uParam1 = 512;
				*uParam2 = 8770;
				break;
			
			case 76:
				*uParam1 = 19716;
				*uParam2 = 8769;
				break;
			
			case 77:
				*uParam1 = 4609;
				*uParam2 = 5120;
				break;
			
			case 78:
				*uParam1 = 15556;
				*uParam2 = 1026;
				break;
			
			case 79:
				*uParam1 = 15043;
				*uParam2 = 4162;
				break;
			
			case 80:
				*uParam1 = 10050;
				*uParam2 = 1;
				break;
			
			case 81:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 82:
				*uParam1 = 9538;
				*uParam2 = 4610;
				break;
			
			case 83:
				*uParam1 = 19716;
				*uParam2 = 128;
				break;
			
			case 84:
				*uParam1 = 4225;
				*uParam2 = 12802;
				break;
			
			case 85:
				*uParam1 = 1;
				*uParam2 = 13825;
				break;
			
			case 86:
				*uParam1 = 10050;
				*uParam2 = 8704;
				break;
			
			case 87:
				*uParam1 = 576;
				*uParam2 = 8704;
				break;
			
			case 88:
				*uParam1 = 4096;
				*uParam2 = 1089;
				break;
			
			case 89:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 90:
				*uParam1 = 15043;
				*uParam2 = 4162;
				break;
			
			case 91:
				*uParam1 = 64;
				*uParam2 = 66;
				break;
			
			case 92:
				*uParam1 = 641;
				*uParam2 = 5634;
				break;
			
			case 93:
				*uParam1 = 19716;
				*uParam2 = 8769;
				break;
			
			case 94:
				*uParam1 = 15556;
				*uParam2 = 1026;
				break;
			
			case 95:
				*uParam1 = 4737;
				*uParam2 = 5121;
				break;
			
			case 96:
				*uParam1 = 19716;
				*uParam2 = 128;
				break;
			
			case 97:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 98:
				*uParam1 = 4672;
				*uParam2 = 8256;
				break;
			
			case 99:
				*uParam1 = 1;
				*uParam2 = 12800;
				break;
			
			case 100:
				*uParam1 = 9538;
				*uParam2 = 9730;
				break;
			
			case 101:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 102:
				*uParam1 = 9538;
				*uParam2 = 4097;
				break;
			
			case 103:
				*uParam1 = 10562;
				*uParam2 = 1024;
				break;
			
			case 104:
				*uParam1 = 4096;
				*uParam2 = 1089;
				break;
			
			case 105:
				*uParam1 = 129;
				*uParam2 = 5633;
				break;
			
			case 106:
				*uParam1 = 19716;
				*uParam2 = 8194;
				break;
			
			case 107:
				*uParam1 = 19139;
				*uParam2 = 64;
				break;
			
			case 108:
				*uParam1 = 4609;
				*uParam2 = 5634;
				break;
			
			case 109:
				*uParam1 = 15620;
				*uParam2 = 4673;
				break;
			
			case 119:
				*uParam1 = 19203;
				*uParam2 = 4738;
				break;
			
			case 120:
				*uParam1 = 4609;
				*uParam2 = 13312;
				break;
			
			case 146:
				*uParam1 = 4672;
				*uParam2 = 8706;
				break;
			
			case 148:
				*uParam1 = 15556;
				*uParam2 = 1024;
				break;
			
			case 149:
				*uParam1 = 576;
				*uParam2 = 8256;
				break;
			
			case 150:
				*uParam1 = 19203;
				*uParam2 = 4738;
				break;
			
			case 151:
				*uParam1 = 129;
				*uParam2 = 12800;
				break;
			
			case 152:
				*uParam1 = 10562;
				*uParam2 = 8194;
				break;
			
			case 153:
				*uParam1 = 15620;
				*uParam2 = 4673;
				break;
			
			case 154:
				*uParam1 = 19139;
				*uParam2 = 64;
				break;
			
			case 155:
				*uParam1 = 4097;
				*uParam2 = 12290;
				break;
			
			case 157:
				*uParam1 = 15556;
				*uParam2 = 1024;
				break;
			
			case 158:
				*uParam1 = 64;
				*uParam2 = 514;
				break;
			
			case 159:
				*uParam1 = 4160;
				*uParam2 = 8256;
				break;
			
			case 160:
				*uParam1 = 15043;
				*uParam2 = 9345;
				break;
			
			case 161:
				*uParam1 = 10050;
				*uParam2 = 512;
				break;
			}
	}
}

void func_370(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 33554432;
				*uParam2 = 0;
				break;
			
			case 1:
				*uParam1 = 50350467;
				*uParam2 = 4608;
				break;
			
			case 2:
				*uParam1 = 13569;
				*uParam2 = 16783425;
				break;
			
			case 3:
				*uParam1 = 9473;
				*uParam2 = 18048;
				break;
			
			case 4:
				*uParam1 = 50350404;
				*uParam2 = 22016;
				break;
			
			case 5:
				*uParam1 = 13442;
				*uParam2 = 8833;
				break;
			
			case 6:
				*uParam1 = 50355076;
				*uParam2 = 17985;
				break;
			
			case 7:
				*uParam1 = 33559104;
				*uParam2 = 5186;
				break;
			
			case 8:
				*uParam1 = 50350467;
				*uParam2 = 9345;
				break;
			
			case 9:
				*uParam1 = 33559104;
				*uParam2 = 8193;
				break;
			
			case 10:
				*uParam1 = 9858;
				*uParam2 = 16785984;
				break;
			
			case 11:
				*uParam1 = 33559040;
				*uParam2 = 577;
				break;
			
			case 12:
				*uParam1 = 50355012;
				*uParam2 = 22593;
				break;
			
			case 13:
				*uParam1 = 50355011;
				*uParam2 = 640;
				break;
			
			case 14:
				*uParam1 = 33554496;
				*uParam2 = 9218;
				break;
			
			case 15:
				*uParam1 = 9922;
				*uParam2 = 21568;
				break;
			
			case 16:
				*uParam1 = 9922;
				*uParam2 = 16781441;
				break;
			
			case 17:
				*uParam1 = 14017;
				*uParam2 = 16800256;
				break;
			
			case 18:
				*uParam1 = 33554496;
				*uParam2 = 4672;
				break;
			
			case 19:
				*uParam1 = 13569;
				*uParam2 = 18945;
				break;
			
			case 20:
				*uParam1 = 50350403;
				*uParam2 = 129;
				break;
			
			case 21:
				*uParam1 = 50350468;
				*uParam2 = 14912;
				break;
			
			case 22:
				*uParam1 = 50355012;
				*uParam2 = 14913;
				break;
			
			case 23:
				*uParam1 = 50355011;
				*uParam2 = 8193;
				break;
			
			case 24:
				*uParam1 = 50355075;
				*uParam2 = 5120;
				break;
			
			case 25:
				*uParam1 = 13442;
				*uParam2 = 16789504;
				break;
			
			case 26:
				*uParam1 = 33559040;
				*uParam2 = 8257;
				break;
			
			case 27:
				*uParam1 = 9857;
				*uParam2 = 13888;
				break;
			
			case 28:
				*uParam1 = 50350468;
				*uParam2 = 18560;
				break;
			
			case 29:
				*uParam1 = 13953;
				*uParam2 = 2177;
				break;
			
			case 30:
				*uParam1 = 33554432;
				*uParam2 = 4610;
				break;
			
			case 31:
				*uParam1 = 33559104;
				*uParam2 = 5184;
				break;
			
			case 32:
				*uParam1 = 9346;
				*uParam2 = 16778241;
				break;
			
			case 33:
				*uParam1 = 50350404;
				*uParam2 = 18432;
				break;
			
			case 34:
				*uParam1 = 50355075;
				*uParam2 = 577;
				break;
			
			case 35:
				*uParam1 = 50355075;
				*uParam2 = 5120;
				break;
			
			case 36:
				*uParam1 = 33554496;
				*uParam2 = 9218;
				break;
			
			case 37:
				*uParam1 = 9473;
				*uParam2 = 10752;
				break;
			
			case 38:
				*uParam1 = 33554432;
				*uParam2 = 0;
				break;
			
			case 39:
				*uParam1 = 33559040;
				*uParam2 = 577;
				break;
			
			case 40:
				*uParam1 = 9922;
				*uParam2 = 16777728;
				break;
			
			case 41:
				*uParam1 = 9985;
				*uParam2 = 13889;
				break;
			
			case 42:
				*uParam1 = 13570;
				*uParam2 = 16794753;
				break;
			
			case 43:
				*uParam1 = 50350404;
				*uParam2 = 14913;
				break;
			
			case 44:
				*uParam1 = 13506;
				*uParam2 = 16798272;
				break;
			
			case 45:
				*uParam1 = 33559040;
				*uParam2 = 5122;
				break;
			
			case 46:
				*uParam1 = 33559104;
				*uParam2 = 8193;
				break;
			
			case 47:
				*uParam1 = 14018;
				*uParam2 = 9345;
				break;
			
			case 48:
				*uParam1 = 13505;
				*uParam2 = 16783488;
				break;
			
			case 49:
				*uParam1 = 50350467;
				*uParam2 = 4737;
				break;
			
			case 50:
				*uParam1 = 50355011;
				*uParam2 = 8320;
				break;
			
			case 51:
				*uParam1 = 13569;
				*uParam2 = 13953;
				break;
			
			case 52:
				*uParam1 = 33554432;
				*uParam2 = 4672;
				break;
			
			case 53:
				*uParam1 = 50355012;
				*uParam2 = 14977;
				break;
			
			case 54:
				*uParam1 = 33554496;
				*uParam2 = 9282;
				break;
			
			case 55:
				*uParam1 = 50355076;
				*uParam2 = 17984;
				break;
			
			case 56:
				*uParam1 = 50355012;
				*uParam2 = 22528;
				break;
			
			case 57:
				*uParam1 = 9346;
				*uParam2 = 16513;
				break;
			
			case 58:
				*uParam1 = 9986;
				*uParam2 = 16781312;
				break;
			
			case 59:
				*uParam1 = 14017;
				*uParam2 = 16779328;
				break;
			
			case 60:
				*uParam1 = 50350467;
				*uParam2 = 128;
				break;
			
			case 61:
				*uParam1 = 33559040;
				*uParam2 = 512;
				break;
			
			case 62:
				*uParam1 = 50350404;
				*uParam2 = 22081;
				break;
			
			case 63:
				*uParam1 = 50350467;
				*uParam2 = 9217;
				break;
			
			case 64:
				*uParam1 = 33554432;
				*uParam2 = 65;
				break;
			
			case 65:
				*uParam1 = 9985;
				*uParam2 = 23105;
				break;
			
			case 66:
				*uParam1 = 33559104;
				*uParam2 = 512;
				break;
			
			case 67:
				*uParam1 = 13506;
				*uParam2 = 16785921;
				break;
			
			case 68:
				*uParam1 = 33559104;
				*uParam2 = 8258;
				break;
			
			case 69:
				*uParam1 = 13953;
				*uParam2 = 17984;
				break;
			
			case 70:
				*uParam1 = 9346;
				*uParam2 = 16793600;
				break;
			
			case 71:
				*uParam1 = 50355076;
				*uParam2 = 17985;
				break;
			
			case 72:
				*uParam1 = 33554432;
				*uParam2 = 1;
				break;
			
			case 73:
				*uParam1 = 50355075;
				*uParam2 = 513;
				break;
			
			case 74:
				*uParam1 = 50350467;
				*uParam2 = 4736;
				break;
			
			case 75:
				*uParam1 = 13505;
				*uParam2 = 6273;
				break;
			
			case 76:
				*uParam1 = 50355012;
				*uParam2 = 14976;
				break;
			
			case 77:
				*uParam1 = 14082;
				*uParam2 = 16777216;
				break;
			
			case 78:
				*uParam1 = 33559104;
				*uParam2 = 5186;
				break;
			
			case 79:
				*uParam1 = 13441;
				*uParam2 = 23168;
				break;
			
			case 80:
				*uParam1 = 9922;
				*uParam2 = 5121;
				break;
			
			case 81:
				*uParam1 = 33554496;
				*uParam2 = 9217;
				break;
			
			case 82:
				*uParam1 = 9857;
				*uParam2 = 16800257;
				break;
			
			case 83:
				*uParam1 = 50350403;
				*uParam2 = 1;
				break;
			
			case 84:
				*uParam1 = 33554432;
				*uParam2 = 4672;
				break;
			
			case 85:
				*uParam1 = 50350404;
				*uParam2 = 14913;
				break;
			
			case 86:
				*uParam1 = 50350468;
				*uParam2 = 22016;
				break;
			
			case 87:
				*uParam1 = 50355012;
				*uParam2 = 22593;
				break;
			
			case 88:
				*uParam1 = 50355011;
				*uParam2 = 5120;
				break;
			
			case 89:
				*uParam1 = 9410;
				*uParam2 = 13376;
				break;
			
			case 90:
				*uParam1 = 9986;
				*uParam2 = 16785985;
				break;
			
			case 91:
				*uParam1 = 50350467;
				*uParam2 = 9281;
				break;
			
			case 92:
				*uParam1 = 9985;
				*uParam2 = 2177;
				break;
			
			case 93:
				*uParam1 = 33559040;
				*uParam2 = 5120;
				break;
			
			case 94:
				*uParam1 = 33554496;
				*uParam2 = 66;
				break;
			
			case 95:
				*uParam1 = 13441;
				*uParam2 = 16791104;
				break;
			
			case 96:
				*uParam1 = 33554432;
				*uParam2 = 4674;
				break;
			
			case 97:
				*uParam1 = 50350468;
				*uParam2 = 18560;
				break;
			
			case 98:
				*uParam1 = 50355011;
				*uParam2 = 8320;
				break;
			
			case 99:
				*uParam1 = 33559104;
				*uParam2 = 8193;
				break;
			
			case 100:
				*uParam1 = 50350467;
				*uParam2 = 8704;
				break;
			
			case 101:
				*uParam1 = 9409;
				*uParam2 = 16795265;
				break;
			
			case 102:
				*uParam1 = 13505;
				*uParam2 = 10752;
				break;
			
			case 103:
				*uParam1 = 50355012;
				*uParam2 = 17921;
				break;
			
			case 104:
				*uParam1 = 50350468;
				*uParam2 = 22080;
				break;
			
			case 105:
				*uParam1 = 9410;
				*uParam2 = 16785985;
				break;
			
			case 106:
				*uParam1 = 33554496;
				*uParam2 = 9281;
				break;
			
			case 107:
				*uParam1 = 50350467;
				*uParam2 = 5249;
				break;
			
			case 108:
				*uParam1 = 13570;
				*uParam2 = 4096;
				break;
			
			case 109:
				*uParam1 = 33559104;
				*uParam2 = 514;
				break;
			
			case 119:
				*uParam1 = 33559040;
				*uParam2 = 4160;
				break;
			
			case 120:
				*uParam1 = 9473;
				*uParam2 = 22593;
				break;
			
			case 146:
				*uParam1 = 33559040;
				*uParam2 = 9216;
				break;
			
			case 148:
				*uParam1 = 50350403;
				*uParam2 = 64;
				break;
			
			case 149:
				*uParam1 = 33554432;
				*uParam2 = 4674;
				break;
			
			case 150:
				*uParam1 = 50355011;
				*uParam2 = 1153;
				break;
			
			case 151:
				*uParam1 = 13954;
				*uParam2 = 16794240;
				break;
			
			case 152:
				*uParam1 = 33554496;
				*uParam2 = 1;
				break;
			
			case 153:
				*uParam1 = 13570;
				*uParam2 = 13441;
				break;
			
			case 154:
				*uParam1 = 50355076;
				*uParam2 = 22528;
				break;
			
			case 155:
				*uParam1 = 50350468;
				*uParam2 = 19073;
				break;
			
			case 157:
				*uParam1 = 9857;
				*uParam2 = 16783936;
				break;
			
			case 158:
				*uParam1 = 50355012;
				*uParam2 = 14913;
				break;
			
			case 159:
				*uParam1 = 50355011;
				*uParam2 = 4737;
				break;
			
			case 160:
				*uParam1 = 50350404;
				*uParam2 = 14336;
				break;
			
			case 161:
				*uParam1 = 9858;
				*uParam2 = 1025;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 15043;
				*uParam2 = 9281;
				break;
			
			case 1:
				*uParam1 = 513;
				*uParam2 = 5633;
				break;
			
			case 2:
				*uParam1 = 10562;
				*uParam2 = 9216;
				break;
			
			case 3:
				*uParam1 = 64;
				*uParam2 = 10241;
				break;
			
			case 4:
				*uParam1 = 641;
				*uParam2 = 13314;
				break;
			
			case 5:
				*uParam1 = 19203;
				*uParam2 = 4610;
				break;
			
			case 6:
				*uParam1 = 15620;
				*uParam2 = 5185;
				break;
			
			case 7:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 8:
				*uParam1 = 10050;
				*uParam2 = 1026;
				break;
			
			case 9:
				*uParam1 = 10050;
				*uParam2 = 4609;
				break;
			
			case 10:
				*uParam1 = 4097;
				*uParam2 = 5120;
				break;
			
			case 11:
				*uParam1 = 19139;
				*uParam2 = 8320;
				break;
			
			case 12:
				*uParam1 = 4608;
				*uParam2 = 8258;
				break;
			
			case 13:
				*uParam1 = 15620;
				*uParam2 = 130;
				break;
			
			case 14:
				*uParam1 = 4672;
				*uParam2 = 576;
				break;
			
			case 15:
				*uParam1 = 9538;
				*uParam2 = 5121;
				break;
			
			case 16:
				*uParam1 = 15620;
				*uParam2 = 130;
				break;
			
			case 17:
				*uParam1 = 15620;
				*uParam2 = 5185;
				break;
			
			case 18:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 19:
				*uParam1 = 19203;
				*uParam2 = 4610;
				break;
			
			case 20:
				*uParam1 = 4225;
				*uParam2 = 12800;
				break;
			
			case 21:
				*uParam1 = 9538;
				*uParam2 = 8192;
				break;
			
			case 22:
				*uParam1 = 0;
				*uParam2 = 1602;
				break;
			
			case 23:
				*uParam1 = 4225;
				*uParam2 = 12290;
				break;
			
			case 24:
				*uParam1 = 513;
				*uParam2 = 5633;
				break;
			
			case 25:
				*uParam1 = 9538;
				*uParam2 = 1538;
				break;
			
			case 26:
				*uParam1 = 4160;
				*uParam2 = 8193;
				break;
			
			case 27:
				*uParam1 = 19139;
				*uParam2 = 8320;
				break;
			
			case 28:
				*uParam1 = 15043;
				*uParam2 = 9281;
				break;
			
			case 29:
				*uParam1 = 64;
				*uParam2 = 1088;
				break;
			
			case 30:
				*uParam1 = 4225;
				*uParam2 = 4608;
				break;
			
			case 31:
				*uParam1 = 10562;
				*uParam2 = 8192;
				break;
			
			case 32:
				*uParam1 = 15043;
				*uParam2 = 9281;
				break;
			
			case 33:
				*uParam1 = 4160;
				*uParam2 = 1537;
				break;
			
			case 34:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 35:
				*uParam1 = 10562;
				*uParam2 = 514;
				break;
			
			case 36:
				*uParam1 = 513;
				*uParam2 = 13314;
				break;
			
			case 37:
				*uParam1 = 19203;
				*uParam2 = 4610;
				break;
			
			case 38:
				*uParam1 = 4225;
				*uParam2 = 14337;
				break;
			
			case 39:
				*uParam1 = 19139;
				*uParam2 = 8320;
				break;
			
			case 40:
				*uParam1 = 15620;
				*uParam2 = 5185;
				break;
			
			case 41:
				*uParam1 = 576;
				*uParam2 = 8768;
				break;
			
			case 42:
				*uParam1 = 10050;
				*uParam2 = 4097;
				break;
			
			case 43:
				*uParam1 = 15620;
				*uParam2 = 130;
				break;
			
			case 44:
				*uParam1 = 4608;
				*uParam2 = 66;
				break;
			
			case 45:
				*uParam1 = 15043;
				*uParam2 = 9281;
				break;
			
			case 46:
				*uParam1 = 0;
				*uParam2 = 66;
				break;
			
			case 47:
				*uParam1 = 15620;
				*uParam2 = 5185;
				break;
			
			case 48:
				*uParam1 = 1;
				*uParam2 = 12802;
				break;
			
			case 49:
				*uParam1 = 19203;
				*uParam2 = 4610;
				break;
			
			case 50:
				*uParam1 = 576;
				*uParam2 = 8193;
				break;
			
			case 51:
				*uParam1 = 4160;
				*uParam2 = 9792;
				break;
			
			case 52:
				*uParam1 = 9538;
				*uParam2 = 4609;
				break;
			
			case 53:
				*uParam1 = 19139;
				*uParam2 = 8320;
				break;
			
			case 54:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 55:
				*uParam1 = 15620;
				*uParam2 = 130;
				break;
			
			case 56:
				*uParam1 = 129;
				*uParam2 = 6145;
				break;
			
			case 57:
				*uParam1 = 10050;
				*uParam2 = 1538;
				break;
			
			case 58:
				*uParam1 = 10050;
				*uParam2 = 8192;
				break;
			
			case 59:
				*uParam1 = 4609;
				*uParam2 = 5122;
				break;
			
			case 60:
				*uParam1 = 513;
				*uParam2 = 5632;
				break;
			
			case 61:
				*uParam1 = 15043;
				*uParam2 = 9281;
				break;
			
			case 62:
				*uParam1 = 19203;
				*uParam2 = 4610;
				break;
			
			case 63:
				*uParam1 = 10050;
				*uParam2 = 5633;
				break;
			
			case 64:
				*uParam1 = 19139;
				*uParam2 = 8320;
				break;
			
			case 65:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 66:
				*uParam1 = 9538;
				*uParam2 = 1538;
				break;
			
			case 67:
				*uParam1 = 15620;
				*uParam2 = 5185;
				break;
			
			case 68:
				*uParam1 = 0;
				*uParam2 = 1090;
				break;
			
			case 69:
				*uParam1 = 15620;
				*uParam2 = 130;
				break;
			
			case 70:
				*uParam1 = 10050;
				*uParam2 = 8704;
				break;
			
			case 71:
				*uParam1 = 4672;
				*uParam2 = 576;
				break;
			
			case 72:
				*uParam1 = 129;
				*uParam2 = 13825;
				break;
			
			case 73:
				*uParam1 = 576;
				*uParam2 = 8705;
				break;
			
			case 74:
				*uParam1 = 4609;
				*uParam2 = 13824;
				break;
			
			case 75:
				*uParam1 = 10562;
				*uParam2 = 8704;
				break;
			
			case 76:
				*uParam1 = 15620;
				*uParam2 = 5185;
				break;
			
			case 77:
				*uParam1 = 4737;
				*uParam2 = 5122;
				break;
			
			case 78:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 79:
				*uParam1 = 15043;
				*uParam2 = 9281;
				break;
			
			case 80:
				*uParam1 = 4160;
				*uParam2 = 8705;
				break;
			
			case 81:
				*uParam1 = 4608;
				*uParam2 = 8258;
				break;
			
			case 82:
				*uParam1 = 19203;
				*uParam2 = 4610;
				break;
			
			case 83:
				*uParam1 = 19139;
				*uParam2 = 8320;
				break;
			
			case 84:
				*uParam1 = 15620;
				*uParam2 = 130;
				break;
			
			case 85:
				*uParam1 = 4225;
				*uParam2 = 14336;
				break;
			
			case 86:
				*uParam1 = 1;
				*uParam2 = 5121;
				break;
			
			case 87:
				*uParam1 = 64;
				*uParam2 = 64;
				break;
			
			case 88:
				*uParam1 = 9538;
				*uParam2 = 4609;
				break;
			
			case 89:
				*uParam1 = 10562;
				*uParam2 = 1026;
				break;
			
			case 90:
				*uParam1 = 15043;
				*uParam2 = 9281;
				break;
			
			case 91:
				*uParam1 = 9538;
				*uParam2 = 8192;
				break;
			
			case 92:
				*uParam1 = 15620;
				*uParam2 = 130;
				break;
			
			case 93:
				*uParam1 = 15620;
				*uParam2 = 5185;
				break;
			
			case 94:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 95:
				*uParam1 = 4225;
				*uParam2 = 6144;
				break;
			
			case 96:
				*uParam1 = 19139;
				*uParam2 = 8320;
				break;
			
			case 97:
				*uParam1 = 4608;
				*uParam2 = 66;
				break;
			
			case 98:
				*uParam1 = 64;
				*uParam2 = 9280;
				break;
			
			case 99:
				*uParam1 = 1;
				*uParam2 = 12802;
				break;
			
			case 100:
				*uParam1 = 641;
				*uParam2 = 5633;
				break;
			
			case 101:
				*uParam1 = 15107;
				*uParam2 = 8705;
				break;
			
			case 102:
				*uParam1 = 19139;
				*uParam2 = 5186;
				break;
			
			case 103:
				*uParam1 = 576;
				*uParam2 = 8705;
				break;
			
			case 104:
				*uParam1 = 15620;
				*uParam2 = 5185;
				break;
			
			case 105:
				*uParam1 = 513;
				*uParam2 = 13314;
				break;
			
			case 106:
				*uParam1 = 9538;
				*uParam2 = 1026;
				break;
			
			case 107:
				*uParam1 = 10050;
				*uParam2 = 9216;
				break;
			
			case 108:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 109:
				*uParam1 = 10562;
				*uParam2 = 5121;
				break;
			
			case 119:
				*uParam1 = 4097;
				*uParam2 = 14336;
				break;
			
			case 120:
				*uParam1 = 19652;
				*uParam2 = 8322;
				break;
			
			case 146:
				*uParam1 = 15107;
				*uParam2 = 128;
				break;
			
			case 148:
				*uParam1 = 4096;
				*uParam2 = 9794;
				break;
			
			case 149:
				*uParam1 = 4672;
				*uParam2 = 64;
				break;
			
			case 150:
				*uParam1 = 4225;
				*uParam2 = 4608;
				break;
			
			case 151:
				*uParam1 = 19652;
				*uParam2 = 8322;
				break;
			
			case 152:
				*uParam1 = 4097;
				*uParam2 = 13313;
				break;
			
			case 153:
				*uParam1 = 10050;
				*uParam2 = 4609;
				break;
			
			case 154:
				*uParam1 = 10562;
				*uParam2 = 8192;
				break;
			
			case 155:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 157:
				*uParam1 = 0;
				*uParam2 = 66;
				break;
			
			case 158:
				*uParam1 = 15107;
				*uParam2 = 128;
				break;
			
			case 159:
				*uParam1 = 4160;
				*uParam2 = 9792;
				break;
			
			case 160:
				*uParam1 = 15107;
				*uParam2 = 8705;
				break;
			
			case 161:
				*uParam1 = 4160;
				*uParam2 = 513;
				break;
			}
	}
}

void func_371(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 50350403;
				*uParam2 = 5120;
				break;
			
			case 1:
				*uParam1 = 50350468;
				*uParam2 = 22081;
				break;
			
			case 2:
				*uParam1 = 13505;
				*uParam2 = 16787585;
				break;
			
			case 3:
				*uParam1 = 13953;
				*uParam2 = 6720;
				break;
			
			case 4:
				*uParam1 = 33559104;
				*uParam2 = 578;
				break;
			
			case 5:
				*uParam1 = 9474;
				*uParam2 = 129;
				break;
			
			case 6:
				*uParam1 = 13954;
				*uParam2 = 16777856;
				break;
			
			case 7:
				*uParam1 = 33559104;
				*uParam2 = 5121;
				break;
			
			case 8:
				*uParam1 = 50355075;
				*uParam2 = 4097;
				break;
			
			case 9:
				*uParam1 = 50355076;
				*uParam2 = 19072;
				break;
			
			case 10:
				*uParam1 = 33554432;
				*uParam2 = 9280;
				break;
			
			case 11:
				*uParam1 = 50350404;
				*uParam2 = 14912;
				break;
			
			case 12:
				*uParam1 = 13506;
				*uParam2 = 16794624;
				break;
			
			case 13:
				*uParam1 = 50350404;
				*uParam2 = 18561;
				break;
			
			case 14:
				*uParam1 = 33559040;
				*uParam2 = 8193;
				break;
			
			case 15:
				*uParam1 = 33554496;
				*uParam2 = 4608;
				break;
			
			case 16:
				*uParam1 = 9986;
				*uParam2 = 17409;
				break;
			
			case 17:
				*uParam1 = 14081;
				*uParam2 = 16799808;
				break;
			
			case 18:
				*uParam1 = 50355075;
				*uParam2 = 1152;
				break;
			
			case 19:
				*uParam1 = 13505;
				*uParam2 = 14913;
				break;
			
			case 20:
				*uParam1 = 50350403;
				*uParam2 = 129;
				break;
			
			case 21:
				*uParam1 = 33554496;
				*uParam2 = 66;
				break;
			
			case 22:
				*uParam1 = 9346;
				*uParam2 = 8704;
				break;
			
			case 23:
				*uParam1 = 50350467;
				*uParam2 = 8705;
				break;
			
			case 24:
				*uParam1 = 50355076;
				*uParam2 = 14401;
				break;
			
			case 25:
				*uParam1 = 33554432;
				*uParam2 = 9280;
				break;
			
			case 26:
				*uParam1 = 50355012;
				*uParam2 = 22080;
				break;
			
			case 27:
				*uParam1 = 9857;
				*uParam2 = 16799360;
				break;
			
			case 28:
				*uParam1 = 33559040;
				*uParam2 = 5122;
				break;
			
			case 29:
				*uParam1 = 9473;
				*uParam2 = 16791169;
				break;
			
			case 30:
				*uParam1 = 33559104;
				*uParam2 = 577;
				break;
			
			case 31:
				*uParam1 = 50355011;
				*uParam2 = 8704;
				break;
			
			case 32:
				*uParam1 = 9922;
				*uParam2 = 4225;
				break;
			
			case 33:
				*uParam1 = 33554432;
				*uParam2 = 2;
				break;
			
			case 34:
				*uParam1 = 50355075;
				*uParam2 = 1153;
				break;
			
			case 35:
				*uParam1 = 50355076;
				*uParam2 = 18945;
				break;
			
			case 36:
				*uParam1 = 33559040;
				*uParam2 = 8257;
				break;
			
			case 37:
				*uParam1 = 13505;
				*uParam2 = 16779840;
				break;
			
			case 38:
				*uParam1 = 50350403;
				*uParam2 = 8832;
				break;
			
			case 39:
				*uParam1 = 50350404;
				*uParam2 = 18432;
				break;
			
			case 40:
				*uParam1 = 33554496;
				*uParam2 = 4608;
				break;
			
			case 41:
				*uParam1 = 9857;
				*uParam2 = 22017;
				break;
			
			case 42:
				*uParam1 = 9922;
				*uParam2 = 4609;
				break;
			
			case 43:
				*uParam1 = 13442;
				*uParam2 = 16781888;
				break;
			
			case 44:
				*uParam1 = 33554496;
				*uParam2 = 0;
				break;
			
			case 45:
				*uParam1 = 33554432;
				*uParam2 = 9281;
				break;
			
			case 46:
				*uParam1 = 50350404;
				*uParam2 = 22080;
				break;
			
			case 47:
				*uParam1 = 9986;
				*uParam2 = 16777281;
				break;
			
			case 48:
				*uParam1 = 13569;
				*uParam2 = 10240;
				break;
			
			case 49:
				*uParam1 = 50350467;
				*uParam2 = 5185;
				break;
			
			case 50:
				*uParam1 = 50355076;
				*uParam2 = 14401;
				break;
			
			case 51:
				*uParam1 = 13953;
				*uParam2 = 16792193;
				break;
			
			case 52:
				*uParam1 = 50350467;
				*uParam2 = 128;
				break;
			
			case 53:
				*uParam1 = 9474;
				*uParam2 = 8192;
				break;
			
			case 54:
				*uParam1 = 33559104;
				*uParam2 = 5185;
				break;
			
			case 55:
				*uParam1 = 33559040;
				*uParam2 = 514;
				break;
			
			case 56:
				*uParam1 = 33559104;
				*uParam2 = 8194;
				break;
			
			case 57:
				*uParam1 = 9986;
				*uParam2 = 16794753;
				break;
			
			case 58:
				*uParam1 = 33554432;
				*uParam2 = 4672;
				break;
			
			case 59:
				*uParam1 = 9409;
				*uParam2 = 13888;
				break;
			
			case 60:
				*uParam1 = 50355012;
				*uParam2 = 22145;
				break;
			
			case 61:
				*uParam1 = 50355075;
				*uParam2 = 4096;
				break;
			
			case 62:
				*uParam1 = 13442;
				*uParam2 = 17408;
				break;
			
			case 63:
				*uParam1 = 50355011;
				*uParam2 = 8705;
				break;
			
			case 64:
				*uParam1 = 50350404;
				*uParam2 = 14912;
				break;
			
			case 65:
				*uParam1 = 13953;
				*uParam2 = 16799809;
				break;
			
			case 66:
				*uParam1 = 50350467;
				*uParam2 = 8832;
				break;
			
			case 67:
				*uParam1 = 9986;
				*uParam2 = 16777793;
				break;
			
			case 68:
				*uParam1 = 33554432;
				*uParam2 = 1;
				break;
			
			case 69:
				*uParam1 = 9921;
				*uParam2 = 22016;
				break;
			
			case 70:
				*uParam1 = 33559104;
				*uParam2 = 5184;
				break;
			
			case 71:
				*uParam1 = 9922;
				*uParam2 = 16790656;
				break;
			
			case 72:
				*uParam1 = 50355076;
				*uParam2 = 19008;
				break;
			
			case 73:
				*uParam1 = 50355011;
				*uParam2 = 1025;
				break;
			
			case 74:
				*uParam1 = 50355076;
				*uParam2 = 22017;
				break;
			
			case 75:
				*uParam1 = 13569;
				*uParam2 = 10369;
				break;
			
			case 76:
				*uParam1 = 33554432;
				*uParam2 = 4610;
				break;
			
			case 77:
				*uParam1 = 33559104;
				*uParam2 = 576;
				break;
			
			case 78:
				*uParam1 = 33554432;
				*uParam2 = 9281;
				break;
			
			case 79:
				*uParam1 = 9409;
				*uParam2 = 16796160;
				break;
			
			case 80:
				*uParam1 = 9474;
				*uParam2 = 8193;
				break;
			
			case 81:
				*uParam1 = 50350404;
				*uParam2 = 14976;
				break;
			
			case 82:
				*uParam1 = 14081;
				*uParam2 = 16799809;
				break;
			
			case 83:
				*uParam1 = 50350403;
				*uParam2 = 65;
				break;
			
			case 84:
				*uParam1 = 50355011;
				*uParam2 = 8832;
				break;
			
			case 85:
				*uParam1 = 13442;
				*uParam2 = 13376;
				break;
			
			case 86:
				*uParam1 = 33559104;
				*uParam2 = 8194;
				break;
			
			case 87:
				*uParam1 = 9922;
				*uParam2 = 4224;
				break;
			
			case 88:
				*uParam1 = 50350468;
				*uParam2 = 22145;
				break;
			
			case 89:
				*uParam1 = 33554496;
				*uParam2 = 64;
				break;
			
			case 90:
				*uParam1 = 13506;
				*uParam2 = 16781889;
				break;
			
			case 91:
				*uParam1 = 50350403;
				*uParam2 = 5121;
				break;
			
			case 92:
				*uParam1 = 13441;
				*uParam2 = 18049;
				break;
			
			case 93:
				*uParam1 = 50355075;
				*uParam2 = 4160;
				break;
			
			case 94:
				*uParam1 = 33554432;
				*uParam2 = 9281;
				break;
			
			case 95:
				*uParam1 = 13953;
				*uParam2 = 16779776;
				break;
			
			case 96:
				*uParam1 = 33559040;
				*uParam2 = 513;
				break;
			
			case 97:
				*uParam1 = 33559104;
				*uParam2 = 5122;
				break;
			
			case 98:
				*uParam1 = 50350468;
				*uParam2 = 18433;
				break;
			
			case 99:
				*uParam1 = 50355012;
				*uParam2 = 14400;
				break;
			
			case 100:
				*uParam1 = 50350467;
				*uParam2 = 5184;
				break;
			
			case 101:
				*uParam1 = 13953;
				*uParam2 = 6720;
				break;
			
			case 102:
				*uParam1 = 13505;
				*uParam2 = 16787521;
				break;
			
			case 103:
				*uParam1 = 33559104;
				*uParam2 = 5186;
				break;
			
			case 104:
				*uParam1 = 50350404;
				*uParam2 = 22017;
				break;
			
			case 105:
				*uParam1 = 50355075;
				*uParam2 = 1;
				break;
			
			case 106:
				*uParam1 = 9986;
				*uParam2 = 4737;
				break;
			
			case 107:
				*uParam1 = 14018;
				*uParam2 = 16790656;
				break;
			
			case 108:
				*uParam1 = 50355012;
				*uParam2 = 14912;
				break;
			
			case 109:
				*uParam1 = 33559040;
				*uParam2 = 8768;
				break;
			
			case 119:
				*uParam1 = 33554496;
				*uParam2 = 9217;
				break;
			
			case 120:
				*uParam1 = 9857;
				*uParam2 = 16779392;
				break;
			
			case 146:
				*uParam1 = 33559040;
				*uParam2 = 1;
				break;
			
			case 148:
				*uParam1 = 50355075;
				*uParam2 = 5248;
				break;
			
			case 149:
				*uParam1 = 33554496;
				*uParam2 = 4608;
				break;
			
			case 150:
				*uParam1 = 14082;
				*uParam2 = 0;
				break;
			
			case 151:
				*uParam1 = 50350404;
				*uParam2 = 14976;
				break;
			
			case 152:
				*uParam1 = 9474;
				*uParam2 = 16789569;
				break;
			
			case 153:
				*uParam1 = 50350467;
				*uParam2 = 65;
				break;
			
			case 154:
				*uParam1 = 50350404;
				*uParam2 = 18497;
				break;
			
			case 155:
				*uParam1 = 33554432;
				*uParam2 = 66;
				break;
			
			case 157:
				*uParam1 = 14017;
				*uParam2 = 22017;
				break;
			
			case 158:
				*uParam1 = 33554432;
				*uParam2 = 2;
				break;
			
			case 159:
				*uParam1 = 13442;
				*uParam2 = 17408;
				break;
			
			case 160:
				*uParam1 = 50355076;
				*uParam2 = 22657;
				break;
			
			case 161:
				*uParam1 = 50355011;
				*uParam2 = 8833;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 10050;
				*uParam2 = 9216;
				break;
			
			case 1:
				*uParam1 = 641;
				*uParam2 = 13313;
				break;
			
			case 2:
				*uParam1 = 10050;
				*uParam2 = 514;
				break;
			
			case 3:
				*uParam1 = 15107;
				*uParam2 = 9217;
				break;
			
			case 4:
				*uParam1 = 576;
				*uParam2 = 8193;
				break;
			
			case 5:
				*uParam1 = 15043;
				*uParam2 = 4674;
				break;
			
			case 6:
				*uParam1 = 19652;
				*uParam2 = 4608;
				break;
			
			case 7:
				*uParam1 = 4609;
				*uParam2 = 5632;
				break;
			
			case 8:
				*uParam1 = 19716;
				*uParam2 = 1089;
				break;
			
			case 9:
				*uParam1 = 129;
				*uParam2 = 4610;
				break;
			
			case 10:
				*uParam1 = 15556;
				*uParam2 = 130;
				break;
			
			case 11:
				*uParam1 = 9538;
				*uParam2 = 5121;
				break;
			
			case 12:
				*uParam1 = 19203;
				*uParam2 = 8320;
				break;
			
			case 13:
				*uParam1 = 4096;
				*uParam2 = 9282;
				break;
			
			case 14:
				*uParam1 = 4160;
				*uParam2 = 2112;
				break;
			
			case 15:
				*uParam1 = 4097;
				*uParam2 = 13826;
				break;
			
			case 16:
				*uParam1 = 512;
				*uParam2 = 578;
				break;
			
			case 17:
				*uParam1 = 19652;
				*uParam2 = 4608;
				break;
			
			case 18:
				*uParam1 = 129;
				*uParam2 = 4096;
				break;
			
			case 19:
				*uParam1 = 15043;
				*uParam2 = 4674;
				break;
			
			case 20:
				*uParam1 = 15556;
				*uParam2 = 130;
				break;
			
			case 21:
				*uParam1 = 9538;
				*uParam2 = 2;
				break;
			
			case 22:
				*uParam1 = 19203;
				*uParam2 = 8320;
				break;
			
			case 23:
				*uParam1 = 4160;
				*uParam2 = 8705;
				break;
			
			case 24:
				*uParam1 = 513;
				*uParam2 = 13313;
				break;
			
			case 25:
				*uParam1 = 19716;
				*uParam2 = 1089;
				break;
			
			case 26:
				*uParam1 = 15107;
				*uParam2 = 9217;
				break;
			
			case 27:
				*uParam1 = 10562;
				*uParam2 = 4609;
				break;
			
			case 28:
				*uParam1 = 9538;
				*uParam2 = 8704;
				break;
			
			case 29:
				*uParam1 = 64;
				*uParam2 = 9280;
				break;
			
			case 30:
				*uParam1 = 15556;
				*uParam2 = 130;
				break;
			
			case 31:
				*uParam1 = 10050;
				*uParam2 = 2;
				break;
			
			case 32:
				*uParam1 = 10562;
				*uParam2 = 9216;
				break;
			
			case 33:
				*uParam1 = 15107;
				*uParam2 = 9217;
				break;
			
			case 34:
				*uParam1 = 4097;
				*uParam2 = 4096;
				break;
			
			case 35:
				*uParam1 = 19716;
				*uParam2 = 1089;
				break;
			
			case 36:
				*uParam1 = 4672;
				*uParam2 = 1;
				break;
			
			case 37:
				*uParam1 = 15043;
				*uParam2 = 4674;
				break;
			
			case 38:
				*uParam1 = 4737;
				*uParam2 = 13825;
				break;
			
			case 39:
				*uParam1 = 9538;
				*uParam2 = 5633;
				break;
			
			case 40:
				*uParam1 = 19652;
				*uParam2 = 4608;
				break;
			
			case 41:
				*uParam1 = 576;
				*uParam2 = 576;
				break;
			
			case 42:
				*uParam1 = 129;
				*uParam2 = 5634;
				break;
			
			case 43:
				*uParam1 = 4096;
				*uParam2 = 10306;
				break;
			
			case 44:
				*uParam1 = 19203;
				*uParam2 = 8320;
				break;
			
			case 45:
				*uParam1 = 10050;
				*uParam2 = 9728;
				break;
			
			case 46:
				*uParam1 = 19203;
				*uParam2 = 8320;
				break;
			
			case 47:
				*uParam1 = 19652;
				*uParam2 = 4608;
				break;
			
			case 48:
				*uParam1 = 576;
				*uParam2 = 8193;
				break;
			
			case 49:
				*uParam1 = 15043;
				*uParam2 = 4674;
				break;
			
			case 50:
				*uParam1 = 15107;
				*uParam2 = 9217;
				break;
			
			case 51:
				*uParam1 = 64;
				*uParam2 = 576;
				break;
			
			case 52:
				*uParam1 = 4097;
				*uParam2 = 12290;
				break;
			
			case 53:
				*uParam1 = 10562;
				*uParam2 = 4097;
				break;
			
			case 54:
				*uParam1 = 4225;
				*uParam2 = 5632;
				break;
			
			case 55:
				*uParam1 = 4096;
				*uParam2 = 2114;
				break;
			
			case 56:
				*uParam1 = 1;
				*uParam2 = 13313;
				break;
			
			case 57:
				*uParam1 = 19716;
				*uParam2 = 1089;
				break;
			
			case 58:
				*uParam1 = 10562;
				*uParam2 = 514;
				break;
			
			case 59:
				*uParam1 = 576;
				*uParam2 = 8705;
				break;
			
			case 60:
				*uParam1 = 15556;
				*uParam2 = 130;
				break;
			
			case 61:
				*uParam1 = 9538;
				*uParam2 = 8704;
				break;
			
			case 62:
				*uParam1 = 15043;
				*uParam2 = 4674;
				break;
			
			case 63:
				*uParam1 = 4737;
				*uParam2 = 13826;
				break;
			
			case 64:
				*uParam1 = 9538;
				*uParam2 = 4097;
				break;
			
			case 65:
				*uParam1 = 513;
				*uParam2 = 5120;
				break;
			
			case 66:
				*uParam1 = 19716;
				*uParam2 = 1089;
				break;
			
			case 67:
				*uParam1 = 19652;
				*uParam2 = 4608;
				break;
			
			case 68:
				*uParam1 = 19203;
				*uParam2 = 8320;
				break;
			
			case 69:
				*uParam1 = 4608;
				*uParam2 = 8770;
				break;
			
			case 70:
				*uParam1 = 10562;
				*uParam2 = 2;
				break;
			
			case 71:
				*uParam1 = 4160;
				*uParam2 = 1600;
				break;
			
			case 72:
				*uParam1 = 129;
				*uParam2 = 12289;
				break;
			
			case 73:
				*uParam1 = 15107;
				*uParam2 = 9217;
				break;
			
			case 74:
				*uParam1 = 15556;
				*uParam2 = 130;
				break;
			
			case 75:
				*uParam1 = 10050;
				*uParam2 = 1538;
				break;
			
			case 76:
				*uParam1 = 19652;
				*uParam2 = 4608;
				break;
			
			case 77:
				*uParam1 = 576;
				*uParam2 = 1;
				break;
			
			case 78:
				*uParam1 = 4609;
				*uParam2 = 5120;
				break;
			
			case 79:
				*uParam1 = 10050;
				*uParam2 = 8704;
				break;
			
			case 80:
				*uParam1 = 15107;
				*uParam2 = 9217;
				break;
			
			case 81:
				*uParam1 = 19203;
				*uParam2 = 8320;
				break;
			
			case 82:
				*uParam1 = 15043;
				*uParam2 = 4674;
				break;
			
			case 83:
				*uParam1 = 10050;
				*uParam2 = 5121;
				break;
			
			case 84:
				*uParam1 = 4096;
				*uParam2 = 8770;
				break;
			
			case 85:
				*uParam1 = 15556;
				*uParam2 = 130;
				break;
			
			case 86:
				*uParam1 = 513;
				*uParam2 = 13825;
				break;
			
			case 87:
				*uParam1 = 4160;
				*uParam2 = 2112;
				break;
			
			case 88:
				*uParam1 = 4225;
				*uParam2 = 5122;
				break;
			
			case 89:
				*uParam1 = 19716;
				*uParam2 = 1089;
				break;
			
			case 90:
				*uParam1 = 9538;
				*uParam2 = 9216;
				break;
			
			case 91:
				*uParam1 = 10050;
				*uParam2 = 2;
				break;
			
			case 92:
				*uParam1 = 0;
				*uParam2 = 1090;
				break;
			
			case 93:
				*uParam1 = 19652;
				*uParam2 = 4608;
				break;
			
			case 94:
				*uParam1 = 4097;
				*uParam2 = 12800;
				break;
			
			case 95:
				*uParam1 = 15556;
				*uParam2 = 130;
				break;
			
			case 96:
				*uParam1 = 9538;
				*uParam2 = 5633;
				break;
			
			case 97:
				*uParam1 = 19203;
				*uParam2 = 8320;
				break;
			
			case 98:
				*uParam1 = 64;
				*uParam2 = 8256;
				break;
			
			case 99:
				*uParam1 = 4672;
				*uParam2 = 1;
				break;
			
			case 100:
				*uParam1 = 641;
				*uParam2 = 5633;
				break;
			
			case 101:
				*uParam1 = 15107;
				*uParam2 = 4610;
				break;
			
			case 102:
				*uParam1 = 15043;
				*uParam2 = 9281;
				break;
			
			case 103:
				*uParam1 = 10562;
				*uParam2 = 9216;
				break;
			
			case 104:
				*uParam1 = 19716;
				*uParam2 = 5185;
				break;
			
			case 105:
				*uParam1 = 576;
				*uParam2 = 8705;
				break;
			
			case 106:
				*uParam1 = 513;
				*uParam2 = 13314;
				break;
			
			case 107:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 108:
				*uParam1 = 9538;
				*uParam2 = 1538;
				break;
			
			case 109:
				*uParam1 = 9538;
				*uParam2 = 4097;
				break;
			
			case 119:
				*uParam1 = 15620;
				*uParam2 = 130;
				break;
			
			case 120:
				*uParam1 = 4097;
				*uParam2 = 6144;
				break;
			
			case 146:
				*uParam1 = 19139;
				*uParam2 = 8320;
				break;
			
			case 148:
				*uParam1 = 4096;
				*uParam2 = 8768;
				break;
			
			case 149:
				*uParam1 = 4672;
				*uParam2 = 66;
				break;
			
			case 150:
				*uParam1 = 15620;
				*uParam2 = 130;
				break;
			
			case 151:
				*uParam1 = 4225;
				*uParam2 = 13824;
				break;
			
			case 152:
				*uParam1 = 4097;
				*uParam2 = 5121;
				break;
			
			case 153:
				*uParam1 = 10050;
				*uParam2 = 4097;
				break;
			
			case 154:
				*uParam1 = 19652;
				*uParam2 = 512;
				break;
			
			case 155:
				*uParam1 = 9538;
				*uParam2 = 514;
				break;
			
			case 157:
				*uParam1 = 0;
				*uParam2 = 64;
				break;
			
			case 158:
				*uParam1 = 19139;
				*uParam2 = 8320;
				break;
			
			case 159:
				*uParam1 = 4160;
				*uParam2 = 8770;
				break;
			
			case 160:
				*uParam1 = 15107;
				*uParam2 = 4610;
				break;
			
			case 161:
				*uParam1 = 10562;
				*uParam2 = 8704;
				break;
			}
	}
}

void func_372(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 50355011;
				*uParam2 = 0;
				break;
			
			case 1:
				*uParam1 = 33554432;
				*uParam2 = 4673;
				break;
			
			case 2:
				*uParam1 = 9410;
				*uParam2 = 16777793;
				break;
			
			case 3:
				*uParam1 = 50355075;
				*uParam2 = 5185;
				break;
			
			case 4:
				*uParam1 = 13569;
				*uParam2 = 22657;
				break;
			
			case 5:
				*uParam1 = 33559104;
				*uParam2 = 1026;
				break;
			
			case 6:
				*uParam1 = 13441;
				*uParam2 = 16783936;
				break;
			
			case 7:
				*uParam1 = 50355076;
				*uParam2 = 17920;
				break;
			
			case 8:
				*uParam1 = 13954;
				*uParam2 = 12288;
				break;
			
			case 9:
				*uParam1 = 50355012;
				*uParam2 = 22593;
				break;
			
			case 10:
				*uParam1 = 33559104;
				*uParam2 = 4672;
				break;
			
			case 11:
				*uParam1 = 50350404;
				*uParam2 = 22145;
				break;
			
			case 12:
				*uParam1 = 9985;
				*uParam2 = 16782848;
				break;
			
			case 13:
				*uParam1 = 33559040;
				*uParam2 = 8193;
				break;
			
			case 14:
				*uParam1 = 50350468;
				*uParam2 = 19072;
				break;
			
			case 15:
				*uParam1 = 33554432;
				*uParam2 = 9216;
				break;
			
			case 16:
				*uParam1 = 33554496;
				*uParam2 = 66;
				break;
			
			case 17:
				*uParam1 = 50350403;
				*uParam2 = 9281;
				break;
			
			case 18:
				*uParam1 = 50350467;
				*uParam2 = 0;
				break;
			
			case 19:
				*uParam1 = 9922;
				*uParam2 = 12929;
				break;
			
			case 20:
				*uParam1 = 9986;
				*uParam2 = 16798784;
				break;
			
			case 21:
				*uParam1 = 9345;
				*uParam2 = 18049;
				break;
			
			case 22:
				*uParam1 = 14017;
				*uParam2 = 10240;
				break;
			
			case 23:
				*uParam1 = 9346;
				*uParam2 = 16786496;
				break;
			
			case 24:
				*uParam1 = 33559104;
				*uParam2 = 1025;
				break;
			
			case 25:
				*uParam1 = 33559040;
				*uParam2 = 8256;
				break;
			
			case 26:
				*uParam1 = 50355076;
				*uParam2 = 14913;
				break;
			
			case 27:
				*uParam1 = 50355011;
				*uParam2 = 8833;
				break;
			
			case 28:
				*uParam1 = 13953;
				*uParam2 = 16796289;
				break;
			
			case 29:
				*uParam1 = 13570;
				*uParam2 = 65;
				break;
			
			case 30:
				*uParam1 = 50350468;
				*uParam2 = 14464;
				break;
			
			case 31:
				*uParam1 = 50350403;
				*uParam2 = 4608;
				break;
			
			case 32:
				*uParam1 = 33554432;
				*uParam2 = 4674;
				break;
			
			case 33:
				*uParam1 = 14017;
				*uParam2 = 19009;
				break;
			
			case 34:
				*uParam1 = 13954;
				*uParam2 = 16781312;
				break;
			
			case 35:
				*uParam1 = 33559104;
				*uParam2 = 4673;
				break;
			
			case 36:
				*uParam1 = 50355076;
				*uParam2 = 22528;
				break;
			
			case 37:
				*uParam1 = 50350403;
				*uParam2 = 65;
				break;
			
			case 38:
				*uParam1 = 50355075;
				*uParam2 = 8768;
				break;
			
			case 39:
				*uParam1 = 50355012;
				*uParam2 = 17921;
				break;
			
			case 40:
				*uParam1 = 33554432;
				*uParam2 = 9216;
				break;
			
			case 41:
				*uParam1 = 9410;
				*uParam2 = 513;
				break;
			
			case 42:
				*uParam1 = 33554496;
				*uParam2 = 2;
				break;
			
			case 43:
				*uParam1 = 9409;
				*uParam2 = 16795264;
				break;
			
			case 44:
				*uParam1 = 33559104;
				*uParam2 = 1024;
				break;
			
			case 45:
				*uParam1 = 50350468;
				*uParam2 = 14464;
				break;
			
			case 46:
				*uParam1 = 50355012;
				*uParam2 = 14977;
				break;
			
			case 47:
				*uParam1 = 33559040;
				*uParam2 = 4610;
				break;
			
			case 48:
				*uParam1 = 50355075;
				*uParam2 = 129;
				break;
			
			case 49:
				*uParam1 = 14082;
				*uParam2 = 16786560;
				break;
			
			case 50:
				*uParam1 = 33559104;
				*uParam2 = 8257;
				break;
			
			case 51:
				*uParam1 = 9474;
				*uParam2 = 9217;
				break;
			
			case 52:
				*uParam1 = 50355011;
				*uParam2 = 5184;
				break;
			
			case 53:
				*uParam1 = 9985;
				*uParam2 = 16799808;
				break;
			
			case 54:
				*uParam1 = 50350468;
				*uParam2 = 19008;
				break;
			
			case 55:
				*uParam1 = 9345;
				*uParam2 = 14913;
				break;
			
			case 56:
				*uParam1 = 13953;
				*uParam2 = 16778881;
				break;
			
			case 57:
				*uParam1 = 33554432;
				*uParam2 = 66;
				break;
			
			case 58:
				*uParam1 = 33554496;
				*uParam2 = 9280;
				break;
			
			case 59:
				*uParam1 = 50350467;
				*uParam2 = 9217;
				break;
			
			case 60:
				*uParam1 = 33554496;
				*uParam2 = 4609;
				break;
			
			case 61:
				*uParam1 = 50350403;
				*uParam2 = 4608;
				break;
			
			case 62:
				*uParam1 = 9409;
				*uParam2 = 6144;
				break;
			
			case 63:
				*uParam1 = 14082;
				*uParam2 = 21120;
				break;
			
			case 64:
				*uParam1 = 50350404;
				*uParam2 = 22145;
				break;
			
			case 65:
				*uParam1 = 13506;
				*uParam2 = 16789569;
				break;
			
			case 66:
				*uParam1 = 50355075;
				*uParam2 = 128;
				break;
			
			case 67:
				*uParam1 = 33559040;
				*uParam2 = 1026;
				break;
			
			case 68:
				*uParam1 = 50350404;
				*uParam2 = 14464;
				break;
			
			case 69:
				*uParam1 = 50355075;
				*uParam2 = 5185;
				break;
			
			case 70:
				*uParam1 = 33554432;
				*uParam2 = 64;
				break;
			
			case 71:
				*uParam1 = 13441;
				*uParam2 = 6656;
				break;
			
			case 72:
				*uParam1 = 50355012;
				*uParam2 = 14913;
				break;
			
			case 73:
				*uParam1 = 9986;
				*uParam2 = 16778240;
				break;
			
			case 74:
				*uParam1 = 33554432;
				*uParam2 = 9217;
				break;
			
			case 75:
				*uParam1 = 14018;
				*uParam2 = 129;
				break;
			
			case 76:
				*uParam1 = 13953;
				*uParam2 = 16787521;
				break;
			
			case 77:
				*uParam1 = 33559040;
				*uParam2 = 4672;
				break;
			
			case 78:
				*uParam1 = 50355012;
				*uParam2 = 22528;
				break;
			
			case 79:
				*uParam1 = 50350467;
				*uParam2 = 1;
				break;
			
			case 80:
				*uParam1 = 33554496;
				*uParam2 = 4674;
				break;
			
			case 81:
				*uParam1 = 50355012;
				*uParam2 = 17921;
				break;
			
			case 82:
				*uParam1 = 9474;
				*uParam2 = 20545;
				break;
			
			case 83:
				*uParam1 = 9346;
				*uParam2 = 16790528;
				break;
			
			case 84:
				*uParam1 = 50350467;
				*uParam2 = 4608;
				break;
			
			case 85:
				*uParam1 = 9409;
				*uParam2 = 18048;
				break;
			
			case 86:
				*uParam1 = 13569;
				*uParam2 = 16791553;
				break;
			
			case 87:
				*uParam1 = 9857;
				*uParam2 = 5760;
				break;
			
			case 88:
				*uParam1 = 33559104;
				*uParam2 = 8193;
				break;
			
			case 89:
				*uParam1 = 33554432;
				*uParam2 = 64;
				break;
			
			case 90:
				*uParam1 = 33554432;
				*uParam2 = 4610;
				break;
			
			case 91:
				*uParam1 = 13506;
				*uParam2 = 16794176;
				break;
			
			case 92:
				*uParam1 = 9922;
				*uParam2 = 16785921;
				break;
			
			case 93:
				*uParam1 = 50350403;
				*uParam2 = 9280;
				break;
			
			case 94:
				*uParam1 = 50350468;
				*uParam2 = 22144;
				break;
			
			case 95:
				*uParam1 = 50355011;
				*uParam2 = 8833;
				break;
			
			case 96:
				*uParam1 = 50350468;
				*uParam2 = 19008;
				break;
			
			case 97:
				*uParam1 = 14081;
				*uParam2 = 23169;
				break;
			
			case 98:
				*uParam1 = 33559104;
				*uParam2 = 8193;
				break;
			
			case 99:
				*uParam1 = 50350404;
				*uParam2 = 14465;
				break;
			
			case 100:
				*uParam1 = 16791169;
				*uParam2 = 14401;
				break;
			
			case 101:
				*uParam1 = 9985;
				*uParam2 = 16786944;
				break;
			
			case 102:
				*uParam1 = 50355075;
				*uParam2 = 8704;
				break;
			
			case 103:
				*uParam1 = 50350467;
				*uParam2 = 8769;
				break;
			
			case 104:
				*uParam1 = 14018;
				*uParam2 = 16512;
				break;
			
			case 105:
				*uParam1 = 9410;
				*uParam2 = 16798273;
				break;
			
			case 106:
				*uParam1 = 33559104;
				*uParam2 = 4674;
				break;
			
			case 107:
				*uParam1 = 33559040;
				*uParam2 = 1089;
				break;
			
			case 108:
				*uParam1 = 50355012;
				*uParam2 = 14337;
				break;
			
			case 109:
				*uParam1 = 50350468;
				*uParam2 = 19072;
				break;
			
			case 119:
				*uParam1 = 33554496;
				*uParam2 = 9216;
				break;
			
			case 120:
				*uParam1 = 9473;
				*uParam2 = 6784;
				break;
			
			case 146:
				*uParam1 = 33559040;
				*uParam2 = 8192;
				break;
			
			case 148:
				*uParam1 = 13441;
				*uParam2 = 1537;
				break;
			
			case 149:
				*uParam1 = 50355012;
				*uParam2 = 23104;
				break;
			
			case 150:
				*uParam1 = 33554496;
				*uParam2 = 4609;
				break;
			
			case 151:
				*uParam1 = 50355012;
				*uParam2 = 18049;
				break;
			
			case 152:
				*uParam1 = 33554432;
				*uParam2 = 66;
				break;
			
			case 153:
				*uParam1 = 9986;
				*uParam2 = 16794689;
				break;
			
			case 154:
				*uParam1 = 13442;
				*uParam2 = 21632;
				break;
			
			case 155:
				*uParam1 = 50355075;
				*uParam2 = 1153;
				break;
			
			case 157:
				*uParam1 = 50355011;
				*uParam2 = 4224;
				break;
			
			case 158:
				*uParam1 = 50350403;
				*uParam2 = 65;
				break;
			
			case 159:
				*uParam1 = 33554432;
				*uParam2 = 4609;
				break;
			
			case 160:
				*uParam1 = 9922;
				*uParam2 = 16777728;
				break;
			
			case 161:
				*uParam1 = 9346;
				*uParam2 = 12289;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 576;
				*uParam2 = 8258;
				break;
			
			case 1:
				*uParam1 = 4736;
				*uParam2 = 513;
				break;
			
			case 2:
				*uParam1 = 4097;
				*uParam2 = 4610;
				break;
			
			case 3:
				*uParam1 = 10050;
				*uParam2 = 8194;
				break;
			
			case 4:
				*uParam1 = 9538;
				*uParam2 = 4097;
				break;
			
			case 5:
				*uParam1 = 129;
				*uParam2 = 5121;
				break;
			
			case 6:
				*uParam1 = 15043;
				*uParam2 = 1090;
				break;
			
			case 7:
				*uParam1 = 15620;
				*uParam2 = 5121;
				break;
			
			case 8:
				*uParam1 = 10050;
				*uParam2 = 512;
				break;
			
			case 9:
				*uParam1 = 15556;
				*uParam2 = 8192;
				break;
			
			case 10:
				*uParam1 = 19715;
				*uParam2 = 4736;
				break;
			
			case 11:
				*uParam1 = 513;
				*uParam2 = 13312;
				break;
			
			case 12:
				*uParam1 = 19139;
				*uParam2 = 641;
				break;
			
			case 13:
				*uParam1 = 19716;
				*uParam2 = 9282;
				break;
			
			case 14:
				*uParam1 = 4160;
				*uParam2 = 10240;
				break;
			
			case 15:
				*uParam1 = 15556;
				*uParam2 = 8192;
				break;
			
			case 16:
				*uParam1 = 19716;
				*uParam2 = 8770;
				break;
			
			case 17:
				*uParam1 = 15043;
				*uParam2 = 66;
				break;
			
			case 18:
				*uParam1 = 15620;
				*uParam2 = 5121;
				break;
			
			case 19:
				*uParam1 = 4737;
				*uParam2 = 13825;
				break;
			
			case 20:
				*uParam1 = 19203;
				*uParam2 = 5248;
				break;
			
			case 21:
				*uParam1 = 1;
				*uParam2 = 5634;
				break;
			
			case 22:
				*uParam1 = 19139;
				*uParam2 = 641;
				break;
			
			case 23:
				*uParam1 = 9538;
				*uParam2 = 5121;
				break;
			
			case 24:
				*uParam1 = 0;
				*uParam2 = 65;
				break;
			
			case 25:
				*uParam1 = 10562;
				*uParam2 = 1024;
				break;
			
			case 26:
				*uParam1 = 9538;
				*uParam2 = 8706;
				break;
			
			case 27:
				*uParam1 = 4225;
				*uParam2 = 12288;
				break;
			
			case 28:
				*uParam1 = 0;
				*uParam2 = 1602;
				break;
			
			case 29:
				*uParam1 = 4160;
				*uParam2 = 9216;
				break;
			
			case 30:
				*uParam1 = 19203;
				*uParam2 = 4224;
				break;
			
			case 31:
				*uParam1 = 4097;
				*uParam2 = 4610;
				break;
			
			case 32:
				*uParam1 = 4672;
				*uParam2 = 578;
				break;
			
			case 33:
				*uParam1 = 10050;
				*uParam2 = 9218;
				break;
			
			case 34:
				*uParam1 = 15620;
				*uParam2 = 4097;
				break;
			
			case 35:
				*uParam1 = 10562;
				*uParam2 = 512;
				break;
			
			case 36:
				*uParam1 = 10050;
				*uParam2 = 5633;
				break;
			
			case 37:
				*uParam1 = 513;
				*uParam2 = 13825;
				break;
			
			case 38:
				*uParam1 = 512;
				*uParam2 = 8257;
				break;
			
			case 39:
				*uParam1 = 4737;
				*uParam2 = 13312;
				break;
			
			case 40:
				*uParam1 = 15043;
				*uParam2 = 66;
				break;
			
			case 41:
				*uParam1 = 4160;
				*uParam2 = 10240;
				break;
			
			case 42:
				*uParam1 = 15556;
				*uParam2 = 8704;
				break;
			
			case 43:
				*uParam1 = 19716;
				*uParam2 = 8258;
				break;
			
			case 44:
				*uParam1 = 19139;
				*uParam2 = 1153;
				break;
			
			case 45:
				*uParam1 = 64;
				*uParam2 = 1602;
				break;
			
			case 46:
				*uParam1 = 19139;
				*uParam2 = 641;
				break;
			
			case 47:
				*uParam1 = 15555;
				*uParam2 = 1090;
				break;
			
			case 48:
				*uParam1 = 10562;
				*uParam2 = 4097;
				break;
			
			case 49:
				*uParam1 = 129;
				*uParam2 = 5121;
				break;
			
			case 50:
				*uParam1 = 9538;
				*uParam2 = 9730;
				break;
			
			case 51:
				*uParam1 = 64;
				*uParam2 = 10240;
				break;
			
			case 52:
				*uParam1 = 15556;
				*uParam2 = 8704;
				break;
			
			case 53:
				*uParam1 = 513;
				*uParam2 = 13312;
				break;
			
			case 54:
				*uParam1 = 15620;
				*uParam2 = 4609;
				break;
			
			case 55:
				*uParam1 = 19716;
				*uParam2 = 9282;
				break;
			
			case 56:
				*uParam1 = 4608;
				*uParam2 = 65;
				break;
			
			case 57:
				*uParam1 = 9538;
				*uParam2 = 512;
				break;
			
			case 58:
				*uParam1 = 4609;
				*uParam2 = 5634;
				break;
			
			case 59:
				*uParam1 = 10562;
				*uParam2 = 5121;
				break;
			
			case 60:
				*uParam1 = 19203;
				*uParam2 = 5248;
				break;
			
			case 61:
				*uParam1 = 64;
				*uParam2 = 8770;
				break;
			
			case 62:
				*uParam1 = 129;
				*uParam2 = 4097;
				break;
			
			case 63:
				*uParam1 = 15556;
				*uParam2 = 8192;
				break;
			
			case 64:
				*uParam1 = 513;
				*uParam2 = 13824;
				break;
			
			case 65:
				*uParam1 = 15620;
				*uParam2 = 4097;
				break;
			
			case 66:
				*uParam1 = 9538;
				*uParam2 = 1024;
				break;
			
			case 67:
				*uParam1 = 15043;
				*uParam2 = 66;
				break;
			
			case 68:
				*uParam1 = 19139;
				*uParam2 = 641;
				break;
			
			case 69:
				*uParam1 = 19716;
				*uParam2 = 9282;
				break;
			
			case 70:
				*uParam1 = 4225;
				*uParam2 = 12290;
				break;
			
			case 71:
				*uParam1 = 4672;
				*uParam2 = 8704;
				break;
			
			case 72:
				*uParam1 = 0;
				*uParam2 = 2113;
				break;
			
			case 73:
				*uParam1 = 10562;
				*uParam2 = 8194;
				break;
			
			case 74:
				*uParam1 = 19203;
				*uParam2 = 4224;
				break;
			
			case 75:
				*uParam1 = 4225;
				*uParam2 = 5634;
				break;
			
			case 76:
				*uParam1 = 15043;
				*uParam2 = 1090;
				break;
			
			case 77:
				*uParam1 = 10050;
				*uParam2 = 4097;
				break;
			
			case 78:
				*uParam1 = 15620;
				*uParam2 = 4609;
				break;
			
			case 79:
				*uParam1 = 4672;
				*uParam2 = 66;
				break;
			
			case 80:
				*uParam1 = 10050;
				*uParam2 = 9730;
				break;
			
			case 81:
				*uParam1 = 19139;
				*uParam2 = 641;
				break;
			
			case 82:
				*uParam1 = 4609;
				*uParam2 = 13313;
				break;
			
			case 83:
				*uParam1 = 4225;
				*uParam2 = 4608;
				break;
			
			case 84:
				*uParam1 = 19716;
				*uParam2 = 9282;
				break;
			
			case 85:
				*uParam1 = 19203;
				*uParam2 = 4736;
				break;
			
			case 86:
				*uParam1 = 4608;
				*uParam2 = 577;
				break;
			
			case 87:
				*uParam1 = 64;
				*uParam2 = 1024;
				break;
			
			case 88:
				*uParam1 = 15556;
				*uParam2 = 8704;
				break;
			
			case 89:
				*uParam1 = 10050;
				*uParam2 = 1024;
				break;
			
			case 90:
				*uParam1 = 4160;
				*uParam2 = 9794;
				break;
			
			case 91:
				*uParam1 = 1;
				*uParam2 = 5122;
				break;
			
			case 92:
				*uParam1 = 19716;
				*uParam2 = 8258;
				break;
			
			case 93:
				*uParam1 = 15043;
				*uParam2 = 66;
				break;
			
			case 94:
				*uParam1 = 15620;
				*uParam2 = 4097;
				break;
			
			case 95:
				*uParam1 = 19203;
				*uParam2 = 5248;
				break;
			
			case 96:
				*uParam1 = 129;
				*uParam2 = 12288;
				break;
			
			case 97:
				*uParam1 = 19139;
				*uParam2 = 129;
				break;
			
			case 98:
				*uParam1 = 576;
				*uParam2 = 8768;
				break;
			
			case 99:
				*uParam1 = 10562;
				*uParam2 = 4609;
				break;
			
			case 100:
				*uParam1 = 4608;
				*uParam2 = 8257;
				break;
			
			case 101:
				*uParam1 = 9538;
				*uParam2 = 1538;
				break;
			
			case 102:
				*uParam1 = 10050;
				*uParam2 = 8704;
				break;
			
			case 103:
				*uParam1 = 15556;
				*uParam2 = 9216;
				break;
			
			case 104:
				*uParam1 = 4737;
				*uParam2 = 5633;
				break;
			
			case 105:
				*uParam1 = 19203;
				*uParam2 = 5121;
				break;
			
			case 106:
				*uParam1 = 15043;
				*uParam2 = 4674;
				break;
			
			case 107:
				*uParam1 = 19716;
				*uParam2 = 8834;
				break;
			
			case 108:
				*uParam1 = 513;
				*uParam2 = 5122;
				break;
			
			case 109:
				*uParam1 = 15556;
				*uParam2 = 129;
				break;
			
			case 119:
				*uParam1 = 19203;
				*uParam2 = 64;
				break;
			
			case 120:
				*uParam1 = 4160;
				*uParam2 = 514;
				break;
			
			case 146:
				*uParam1 = 9538;
				*uParam2 = 4097;
				break;
			
			case 148:
				*uParam1 = 4097;
				*uParam2 = 14336;
				break;
			
			case 149:
				*uParam1 = 576;
				*uParam2 = 8768;
				break;
			
			case 150:
				*uParam1 = 19203;
				*uParam2 = 64;
				break;
			
			case 151:
				*uParam1 = 64;
				*uParam2 = 1538;
				break;
			
			case 152:
				*uParam1 = 4096;
				*uParam2 = 1089;
				break;
			
			case 153:
				*uParam1 = 15556;
				*uParam2 = 129;
				break;
			
			case 154:
				*uParam1 = 19716;
				*uParam2 = 8834;
				break;
			
			case 155:
				*uParam1 = 129;
				*uParam2 = 12290;
				break;
			
			case 157:
				*uParam1 = 4225;
				*uParam2 = 14336;
				break;
			
			case 158:
				*uParam1 = 10050;
				*uParam2 = 5633;
				break;
			
			case 159:
				*uParam1 = 64;
				*uParam2 = 1600;
				break;
			
			case 160:
				*uParam1 = 10562;
				*uParam2 = 2;
				break;
			
			case 161:
				*uParam1 = 15556;
				*uParam2 = 9216;
				break;
			}
	}
}

void func_373(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 33554432;
				*uParam2 = 0;
				break;
			
			case 1:
				*uParam1 = 50350467;
				*uParam2 = 5121;
				break;
			
			case 2:
				*uParam1 = 50355011;
				*uParam2 = 4608;
				break;
			
			case 3:
				*uParam1 = 33559104;
				*uParam2 = 13313;
				break;
			
			case 4:
				*uParam1 = 13953;
				*uParam2 = 16786561;
				break;
			
			case 5:
				*uParam1 = 9858;
				*uParam2 = 0;
				break;
			
			case 6:
				*uParam1 = 9473;
				*uParam2 = 9856;
				break;
			
			case 7:
				*uParam1 = 50355012;
				*uParam2 = 9344;
				break;
			
			case 8:
				*uParam1 = 50350404;
				*uParam2 = 22593;
				break;
			
			case 9:
				*uParam1 = 13570;
				*uParam2 = 16777281;
				break;
			
			case 10:
				*uParam1 = 33559040;
				*uParam2 = 4162;
				break;
			
			case 11:
				*uParam1 = 9346;
				*uParam2 = 4673;
				break;
			
			case 12:
				*uParam1 = 13569;
				*uParam2 = 16782336;
				break;
			
			case 13:
				*uParam1 = 50355075;
				*uParam2 = 129;
				break;
			
			case 14:
				*uParam1 = 50350468;
				*uParam2 = 14912;
				break;
			
			case 15:
				*uParam1 = 33554496;
				*uParam2 = 13890;
				break;
			
			case 16:
				*uParam1 = 14018;
				*uParam2 = 16790080;
				break;
			
			case 17:
				*uParam1 = 33554496;
				*uParam2 = 9217;
				break;
			
			case 18:
				*uParam1 = 33554432;
				*uParam2 = 4608;
				break;
			
			case 19:
				*uParam1 = 50350467;
				*uParam2 = 128;
				break;
			
			case 20:
				*uParam1 = 50355012;
				*uParam2 = 13953;
				break;
			
			case 21:
				*uParam1 = 14017;
				*uParam2 = 1665;
				break;
			
			case 22:
				*uParam1 = 9409;
				*uParam2 = 9728;
				break;
			
			case 23:
				*uParam1 = 50350404;
				*uParam2 = 17921;
				break;
			
			case 24:
				*uParam1 = 50350467;
				*uParam2 = 8705;
				break;
			
			case 25:
				*uParam1 = 33559040;
				*uParam2 = 1602;
				break;
			
			case 26:
				*uParam1 = 13570;
				*uParam2 = 16781377;
				break;
			
			case 27:
				*uParam1 = 33559104;
				*uParam2 = 8769;
				break;
			
			case 28:
				*uParam1 = 9985;
				*uParam2 = 1665;
				break;
			
			case 29:
				*uParam1 = 50355011;
				*uParam2 = 64;
				break;
			
			case 30:
				*uParam1 = 50355076;
				*uParam2 = 13888;
				break;
			
			case 31:
				*uParam1 = 33559040;
				*uParam2 = 8704;
				break;
			
			case 32:
				*uParam1 = 14018;
				*uParam2 = 16789632;
				break;
			
			case 33:
				*uParam1 = 13953;
				*uParam2 = 16786433;
				break;
			
			case 34:
				*uParam1 = 50355012;
				*uParam2 = 9345;
				break;
			
			case 35:
				*uParam1 = 50350467;
				*uParam2 = 8833;
				break;
			
			case 36:
				*uParam1 = 50350404;
				*uParam2 = 17920;
				break;
			
			case 37:
				*uParam1 = 33559040;
				*uParam2 = 4161;
				break;
			
			case 38:
				*uParam1 = 33554496;
				*uParam2 = 4608;
				break;
			
			case 39:
				*uParam1 = 9474;
				*uParam2 = 4609;
				break;
			
			case 40:
				*uParam1 = 33554496;
				*uParam2 = 9282;
				break;
			
			case 41:
				*uParam1 = 50350467;
				*uParam2 = 5184;
				break;
			
			case 42:
				*uParam1 = 13954;
				*uParam2 = 576;
				break;
			
			case 43:
				*uParam1 = 13505;
				*uParam2 = 16782336;
				break;
			
			case 44:
				*uParam1 = 33554496;
				*uParam2 = 13890;
				break;
			
			case 45:
				*uParam1 = 50350468;
				*uParam2 = 22528;
				break;
			
			case 46:
				*uParam1 = 9410;
				*uParam2 = 65;
				break;
			
			case 47:
				*uParam1 = 13954;
				*uParam2 = 16785536;
				break;
			
			case 48:
				*uParam1 = 33554496;
				*uParam2 = 1;
				break;
			
			case 49:
				*uParam1 = 50350404;
				*uParam2 = 14913;
				break;
			
			case 50:
				*uParam1 = 50350467;
				*uParam2 = 1;
				break;
			
			case 51:
				*uParam1 = 50355075;
				*uParam2 = 4736;
				break;
			
			case 52:
				*uParam1 = 33559040;
				*uParam2 = 1536;
				break;
			
			case 53:
				*uParam1 = 9985;
				*uParam2 = 5696;
				break;
			
			case 54:
				*uParam1 = 50355012;
				*uParam2 = 9216;
				break;
			
			case 55:
				*uParam1 = 9345;
				*uParam2 = 16786945;
				break;
			
			case 56:
				*uParam1 = 13953;
				*uParam2 = 16790593;
				break;
			
			case 57:
				*uParam1 = 13954;
				*uParam2 = 12928;
				break;
			
			case 58:
				*uParam1 = 33559040;
				*uParam2 = 13378;
				break;
			
			case 59:
				*uParam1 = 33554496;
				*uParam2 = 13889;
				break;
			
			case 60:
				*uParam1 = 50350403;
				*uParam2 = 8769;
				break;
			
			case 61:
				*uParam1 = 33554432;
				*uParam2 = 4608;
				break;
			
			case 62:
				*uParam1 = 13569;
				*uParam2 = 1152;
				break;
			
			case 63:
				*uParam1 = 50350468;
				*uParam2 = 17985;
				break;
			
			case 64:
				*uParam1 = 13570;
				*uParam2 = 16785921;
				break;
			
			case 65:
				*uParam1 = 50350403;
				*uParam2 = 5248;
				break;
			
			case 66:
				*uParam1 = 33554496;
				*uParam2 = 0;
				break;
			
			case 67:
				*uParam1 = 9410;
				*uParam2 = 0;
				break;
			
			case 68:
				*uParam1 = 50350404;
				*uParam2 = 14848;
				break;
			
			case 69:
				*uParam1 = 33559040;
				*uParam2 = 1601;
				break;
			
			case 70:
				*uParam1 = 33559104;
				*uParam2 = 13314;
				break;
			
			case 71:
				*uParam1 = 9921;
				*uParam2 = 16787072;
				break;
			
			case 72:
				*uParam1 = 9922;
				*uParam2 = 16781889;
				break;
			
			case 73:
				*uParam1 = 50355076;
				*uParam2 = 13825;
				break;
			
			case 74:
				*uParam1 = 50355011;
				*uParam2 = 65;
				break;
			
			case 75:
				*uParam1 = 50350403;
				*uParam2 = 128;
				break;
			
			case 76:
				*uParam1 = 13569;
				*uParam2 = 5697;
				break;
			
			case 77:
				*uParam1 = 33559104;
				*uParam2 = 4162;
				break;
			
			case 78:
				*uParam1 = 50350468;
				*uParam2 = 22656;
				break;
			
			case 79:
				*uParam1 = 33554432;
				*uParam2 = 9281;
				break;
			
			case 80:
				*uParam1 = 9858;
				*uParam2 = 16781440;
				break;
			
			case 81:
				*uParam1 = 13442;
				*uParam2 = 577;
				break;
			
			case 82:
				*uParam1 = 50355075;
				*uParam2 = 4672;
				break;
			
			case 83:
				*uParam1 = 50355012;
				*uParam2 = 13953;
				break;
			
			case 84:
				*uParam1 = 33559040;
				*uParam2 = 8704;
				break;
			
			case 85:
				*uParam1 = 13505;
				*uParam2 = 16790656;
				break;
			
			case 86:
				*uParam1 = 9985;
				*uParam2 = 1025;
				break;
			
			case 87:
				*uParam1 = 14017;
				*uParam2 = 16786944;
				break;
			
			case 88:
				*uParam1 = 50355075;
				*uParam2 = 4673;
				break;
			
			case 89:
				*uParam1 = 33554496;
				*uParam2 = 66;
				break;
			
			case 90:
				*uParam1 = 14018;
				*uParam2 = 4672;
				break;
			
			case 91:
				*uParam1 = 50355012;
				*uParam2 = 9281;
				break;
			
			case 92:
				*uParam1 = 50350467;
				*uParam2 = 5248;
				break;
			
			case 93:
				*uParam1 = 33559104;
				*uParam2 = 1536;
				break;
			
			case 94:
				*uParam1 = 50350468;
				*uParam2 = 22528;
				break;
			
			case 95:
				*uParam1 = 33559040;
				*uParam2 = 8769;
				break;
			
			case 96:
				*uParam1 = 50350404;
				*uParam2 = 17920;
				break;
			
			case 97:
				*uParam1 = 9345;
				*uParam2 = 16786433;
				break;
			
			case 98:
				*uParam1 = 50350403;
				*uParam2 = 65;
				break;
			
			case 99:
				*uParam1 = 14082;
				*uParam2 = 12417;
				break;
			
			case 100:
				*uParam1 = 50350403;
				*uParam2 = 5120;
				break;
			
			case 101:
				*uParam1 = 33559104;
				*uParam2 = 12289;
				break;
			
			case 102:
				*uParam1 = 50355075;
				*uParam2 = 1;
				break;
			
			case 103:
				*uParam1 = 9857;
				*uParam2 = 16778304;
				break;
			
			case 104:
				*uParam1 = 13954;
				*uParam2 = 8320;
				break;
			
			case 105:
				*uParam1 = 9473;
				*uParam2 = 9793;
				break;
			
			case 106:
				*uParam1 = 33559040;
				*uParam2 = 5186;
				break;
			
			case 107:
				*uParam1 = 13570;
				*uParam2 = 16777345;
				break;
			
			case 108:
				*uParam1 = 50355012;
				*uParam2 = 9345;
				break;
			
			case 109:
				*uParam1 = 50350468;
				*uParam2 = 14464;
				break;
			
			case 119:
				*uParam1 = 33554496;
				*uParam2 = 13888;
				break;
			
			case 120:
				*uParam1 = 33554432;
				*uParam2 = 4609;
				break;
			
			case 146:
				*uParam1 = 33554496;
				*uParam2 = 9280;
				break;
			
			case 148:
				*uParam1 = 50350467;
				*uParam2 = 8768;
				break;
			
			case 149:
				*uParam1 = 50350404;
				*uParam2 = 23104;
				break;
			
			case 150:
				*uParam1 = 9474;
				*uParam2 = 4609;
				break;
			
			case 151:
				*uParam1 = 50350404;
				*uParam2 = 17921;
				break;
			
			case 152:
				*uParam1 = 33559040;
				*uParam2 = 514;
				break;
			
			case 153:
				*uParam1 = 13441;
				*uParam2 = 16782337;
				break;
			
			case 154:
				*uParam1 = 14018;
				*uParam2 = 12864;
				break;
			
			case 155:
				*uParam1 = 14017;
				*uParam2 = 16778880;
				break;
			
			case 157:
				*uParam1 = 50355075;
				*uParam2 = 4673;
				break;
			
			case 158:
				*uParam1 = 9921;
				*uParam2 = 16782848;
				break;
			
			case 159:
				*uParam1 = 13570;
				*uParam2 = 12801;
				break;
			
			case 160:
				*uParam1 = 14018;
				*uParam2 = 16781952;
				break;
			
			case 161:
				*uParam1 = 9409;
				*uParam2 = 1089;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 10050;
				*uParam2 = 1536;
				break;
			
			case 1:
				*uParam1 = 10562;
				*uParam2 = 9218;
				break;
			
			case 2:
				*uParam1 = 19652;
				*uParam2 = 4737;
				break;
			
			case 3:
				*uParam1 = 129;
				*uParam2 = 5632;
				break;
			
			case 4:
				*uParam1 = 9538;
				*uParam2 = 5633;
				break;
			
			case 5:
				*uParam1 = 4609;
				*uParam2 = 13825;
				break;
			
			case 6:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 7:
				*uParam1 = 4608;
				*uParam2 = 65;
				break;
			
			case 8:
				*uParam1 = 15556;
				*uParam2 = 9218;
				break;
			
			case 9:
				*uParam1 = 15620;
				*uParam2 = 128;
				break;
			
			case 10:
				*uParam1 = 513;
				*uParam2 = 13314;
				break;
			
			case 11:
				*uParam1 = 19139;
				*uParam2 = 578;
				break;
			
			case 12:
				*uParam1 = 15107;
				*uParam2 = 4161;
				break;
			
			case 13:
				*uParam1 = 4160;
				*uParam2 = 8770;
				break;
			
			case 14:
				*uParam1 = 64;
				*uParam2 = 9216;
				break;
			
			case 15:
				*uParam1 = 15620;
				*uParam2 = 128;
				break;
			
			case 16:
				*uParam1 = 576;
				*uParam2 = 578;
				break;
			
			case 17:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 18:
				*uParam1 = 4096;
				*uParam2 = 8257;
				break;
			
			case 19:
				*uParam1 = 4225;
				*uParam2 = 4609;
				break;
			
			case 20:
				*uParam1 = 4737;
				*uParam2 = 5122;
				break;
			
			case 21:
				*uParam1 = 19652;
				*uParam2 = 4737;
				break;
			
			case 22:
				*uParam1 = 15107;
				*uParam2 = 4161;
				break;
			
			case 23:
				*uParam1 = 9538;
				*uParam2 = 4609;
				break;
			
			case 24:
				*uParam1 = 10562;
				*uParam2 = 8194;
				break;
			
			case 25:
				*uParam1 = 15556;
				*uParam2 = 9218;
				break;
			
			case 26:
				*uParam1 = 1;
				*uParam2 = 12288;
				break;
			
			case 27:
				*uParam1 = 19139;
				*uParam2 = 578;
				break;
			
			case 28:
				*uParam1 = 10050;
				*uParam2 = 512;
				break;
			
			case 29:
				*uParam1 = 4672;
				*uParam2 = 0;
				break;
			
			case 30:
				*uParam1 = 4609;
				*uParam2 = 13826;
				break;
			
			case 31:
				*uParam1 = 19652;
				*uParam2 = 4737;
				break;
			
			case 32:
				*uParam1 = 10050;
				*uParam2 = 0;
				break;
			
			case 33:
				*uParam1 = 129;
				*uParam2 = 5120;
				break;
			
			case 34:
				*uParam1 = 0;
				*uParam2 = 9793;
				break;
			
			case 35:
				*uParam1 = 15556;
				*uParam2 = 9218;
				break;
			
			case 36:
				*uParam1 = 9538;
				*uParam2 = 5121;
				break;
			
			case 37:
				*uParam1 = 4225;
				*uParam2 = 4609;
				break;
			
			case 38:
				*uParam1 = 10050;
				*uParam2 = 9218;
				break;
			
			case 39:
				*uParam1 = 19139;
				*uParam2 = 578;
				break;
			
			case 40:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 41:
				*uParam1 = 576;
				*uParam2 = 512;
				break;
			
			case 42:
				*uParam1 = 15620;
				*uParam2 = 128;
				break;
			
			case 43:
				*uParam1 = 4160;
				*uParam2 = 1602;
				break;
			
			case 44:
				*uParam1 = 15107;
				*uParam2 = 4161;
				break;
			
			case 45:
				*uParam1 = 9538;
				*uParam2 = 0;
				break;
			
			case 46:
				*uParam1 = 15107;
				*uParam2 = 4161;
				break;
			
			case 47:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 48:
				*uParam1 = 10562;
				*uParam2 = 4609;
				break;
			
			case 49:
				*uParam1 = 4609;
				*uParam2 = 13825;
				break;
			
			case 50:
				*uParam1 = 1;
				*uParam2 = 5120;
				break;
			
			case 51:
				*uParam1 = 576;
				*uParam2 = 0;
				break;
			
			case 52:
				*uParam1 = 15620;
				*uParam2 = 128;
				break;
			
			case 53:
				*uParam1 = 19139;
				*uParam2 = 578;
				break;
			
			case 54:
				*uParam1 = 0;
				*uParam2 = 8257;
				break;
			
			case 55:
				*uParam1 = 4672;
				*uParam2 = 8770;
				break;
			
			case 56:
				*uParam1 = 10562;
				*uParam2 = 8706;
				break;
			
			case 57:
				*uParam1 = 15556;
				*uParam2 = 9218;
				break;
			
			case 58:
				*uParam1 = 19652;
				*uParam2 = 4737;
				break;
			
			case 59:
				*uParam1 = 9538;
				*uParam2 = 4609;
				break;
			
			case 60:
				*uParam1 = 641;
				*uParam2 = 13314;
				break;
			
			case 61:
				*uParam1 = 10562;
				*uParam2 = 1024;
				break;
			
			case 62:
				*uParam1 = 4737;
				*uParam2 = 13825;
				break;
			
			case 63:
				*uParam1 = 15620;
				*uParam2 = 128;
				break;
			
			case 64:
				*uParam1 = 19139;
				*uParam2 = 578;
				break;
			
			case 65:
				*uParam1 = 0;
				*uParam2 = 8257;
				break;
			
			case 66:
				*uParam1 = 15556;
				*uParam2 = 9218;
				break;
			
			case 67:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 68:
				*uParam1 = 15107;
				*uParam2 = 4161;
				break;
			
			case 69:
				*uParam1 = 4160;
				*uParam2 = 578;
				break;
			
			case 70:
				*uParam1 = 19652;
				*uParam2 = 4737;
				break;
			
			case 71:
				*uParam1 = 576;
				*uParam2 = 512;
				break;
			
			case 72:
				*uParam1 = 9538;
				*uParam2 = 8194;
				break;
			
			case 73:
				*uParam1 = 1;
				*uParam2 = 5120;
				break;
			
			case 74:
				*uParam1 = 641;
				*uParam2 = 13314;
				break;
			
			case 75:
				*uParam1 = 19652;
				*uParam2 = 4737;
				break;
			
			case 76:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 77:
				*uParam1 = 10050;
				*uParam2 = 5633;
				break;
			
			case 78:
				*uParam1 = 4608;
				*uParam2 = 8257;
				break;
			
			case 79:
				*uParam1 = 10050;
				*uParam2 = 512;
				break;
			
			case 80:
				*uParam1 = 4097;
				*uParam2 = 5632;
				break;
			
			case 81:
				*uParam1 = 15107;
				*uParam2 = 4161;
				break;
			
			case 82:
				*uParam1 = 4737;
				*uParam2 = 13825;
				break;
			
			case 83:
				*uParam1 = 19139;
				*uParam2 = 578;
				break;
			
			case 84:
				*uParam1 = 4672;
				*uParam2 = 8258;
				break;
			
			case 85:
				*uParam1 = 513;
				*uParam2 = 5122;
				break;
			
			case 86:
				*uParam1 = 9538;
				*uParam2 = 9218;
				break;
			
			case 87:
				*uParam1 = 4160;
				*uParam2 = 1024;
				break;
			
			case 88:
				*uParam1 = 15620;
				*uParam2 = 128;
				break;
			
			case 89:
				*uParam1 = 15556;
				*uParam2 = 9218;
				break;
			
			case 90:
				*uParam1 = 10562;
				*uParam2 = 0;
				break;
			
			case 91:
				*uParam1 = 19652;
				*uParam2 = 4737;
				break;
			
			case 92:
				*uParam1 = 64;
				*uParam2 = 1602;
				break;
			
			case 93:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 94:
				*uParam1 = 512;
				*uParam2 = 8769;
				break;
			
			case 95:
				*uParam1 = 129;
				*uParam2 = 12290;
				break;
			
			case 96:
				*uParam1 = 19139;
				*uParam2 = 578;
				break;
			
			case 97:
				*uParam1 = 15107;
				*uParam2 = 4161;
				break;
			
			case 98:
				*uParam1 = 64;
				*uParam2 = 512;
				break;
			
			case 99:
				*uParam1 = 9538;
				*uParam2 = 5633;
				break;
			
			case 100:
				*uParam1 = 10050;
				*uParam2 = 9218;
				break;
			
			case 101:
				*uParam1 = 10050;
				*uParam2 = 0;
				break;
			
			case 102:
				*uParam1 = 129;
				*uParam2 = 5633;
				break;
			
			case 103:
				*uParam1 = 513;
				*uParam2 = 13312;
				break;
			
			case 104:
				*uParam1 = 15043;
				*uParam2 = 9216;
				break;
			
			case 105:
				*uParam1 = 19652;
				*uParam2 = 9345;
				break;
			
			case 106:
				*uParam1 = 10050;
				*uParam2 = 4609;
				break;
			
			case 107:
				*uParam1 = 19716;
				*uParam2 = 4098;
				break;
			
			case 108:
				*uParam1 = 15620;
				*uParam2 = 640;
				break;
			
			case 109:
				*uParam1 = 4672;
				*uParam2 = 65;
				break;
			
			case 119:
				*uParam1 = 4609;
				*uParam2 = 13826;
				break;
			
			case 120:
				*uParam1 = 15043;
				*uParam2 = 4674;
				break;
			
			case 146:
				*uParam1 = 19203;
				*uParam2 = 65;
				break;
			
			case 148:
				*uParam1 = 4096;
				*uParam2 = 8770;
				break;
			
			case 149:
				*uParam1 = 64;
				*uParam2 = 9216;
				break;
			
			case 150:
				*uParam1 = 4225;
				*uParam2 = 4098;
				break;
			
			case 151:
				*uParam1 = 15043;
				*uParam2 = 4674;
				break;
			
			case 152:
				*uParam1 = 9538;
				*uParam2 = 9730;
				break;
			
			case 153:
				*uParam1 = 576;
				*uParam2 = 577;
				break;
			
			case 154:
				*uParam1 = 19716;
				*uParam2 = 4098;
				break;
			
			case 155:
				*uParam1 = 15620;
				*uParam2 = 640;
				break;
			
			case 157:
				*uParam1 = 4096;
				*uParam2 = 8770;
				break;
			
			case 158:
				*uParam1 = 19203;
				*uParam2 = 65;
				break;
			
			case 159:
				*uParam1 = 64;
				*uParam2 = 8192;
				break;
			
			case 160:
				*uParam1 = 10050;
				*uParam2 = 1536;
				break;
			
			case 161:
				*uParam1 = 4225;
				*uParam2 = 5120;
				break;
			}
	}
}

void func_374(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 16786561;
				*uParam2 = 16782912;
				break;
			
			case 1:
				*uParam1 = 50350467;
				*uParam2 = 5120;
				break;
			
			case 2:
				*uParam1 = 33559104;
				*uParam2 = 12289;
				break;
			
			case 3:
				*uParam1 = 14017;
				*uParam2 = 16786561;
				break;
			
			case 4:
				*uParam1 = 50355011;
				*uParam2 = 4673;
				break;
			
			case 5:
				*uParam1 = 33554432;
				*uParam2 = 4674;
				break;
			
			case 6:
				*uParam1 = 9986;
				*uParam2 = 129;
				break;
			
			case 7:
				*uParam1 = 50355012;
				*uParam2 = 9217;
				break;
			
			case 8:
				*uParam1 = 9346;
				*uParam2 = 8320;
				break;
			
			case 9:
				*uParam1 = 50355012;
				*uParam2 = 13952;
				break;
			
			case 10:
				*uParam1 = 33559104;
				*uParam2 = 576;
				break;
			
			case 11:
				*uParam1 = 50350468;
				*uParam2 = 14400;
				break;
			
			case 12:
				*uParam1 = 13506;
				*uParam2 = 16777729;
				break;
			
			case 13:
				*uParam1 = 50350467;
				*uParam2 = 8320;
				break;
			
			case 14:
				*uParam1 = 50350404;
				*uParam2 = 23169;
				break;
			
			case 15:
				*uParam1 = 33559040;
				*uParam2 = 5120;
				break;
			
			case 16:
				*uParam1 = 33554496;
				*uParam2 = 9282;
				break;
			
			case 17:
				*uParam1 = 14081;
				*uParam2 = 16782849;
				break;
			
			case 18:
				*uParam1 = 13441;
				*uParam2 = 13312;
				break;
			
			case 19:
				*uParam1 = 33559040;
				*uParam2 = 9793;
				break;
			
			case 20:
				*uParam1 = 9986;
				*uParam2 = 16777792;
				break;
			
			case 21:
				*uParam1 = 50350467;
				*uParam2 = 641;
				break;
			
			case 22:
				*uParam1 = 14018;
				*uParam2 = 65;
				break;
			
			case 23:
				*uParam1 = 14082;
				*uParam2 = 12928;
				break;
			
			case 24:
				*uParam1 = 50355075;
				*uParam2 = 0;
				break;
			
			case 25:
				*uParam1 = 33554496;
				*uParam2 = 13824;
				break;
			
			case 26:
				*uParam1 = 50350404;
				*uParam2 = 17920;
				break;
			
			case 27:
				*uParam1 = 14017;
				*uParam2 = 16786433;
				break;
			
			case 28:
				*uParam1 = 50350467;
				*uParam2 = 8257;
				break;
			
			case 29:
				*uParam1 = 33554432;
				*uParam2 = 1;
				break;
			
			case 30:
				*uParam1 = 50355012;
				*uParam2 = 13889;
				break;
			
			case 31:
				*uParam1 = 9345;
				*uParam2 = 16782336;
				break;
			
			case 32:
				*uParam1 = 33554496;
				*uParam2 = 13826;
				break;
			
			case 33:
				*uParam1 = 50350403;
				*uParam2 = 5249;
				break;
			
			case 34:
				*uParam1 = 9346;
				*uParam2 = 8320;
				break;
			
			case 35:
				*uParam1 = 50355075;
				*uParam2 = 128;
				break;
			
			case 36:
				*uParam1 = 50355012;
				*uParam2 = 9217;
				break;
			
			case 37:
				*uParam1 = 14081;
				*uParam2 = 16782913;
				break;
			
			case 38:
				*uParam1 = 13505;
				*uParam2 = 13888;
				break;
			
			case 39:
				*uParam1 = 50350468;
				*uParam2 = 14336;
				break;
			
			case 40:
				*uParam1 = 33559040;
				*uParam2 = 512;
				break;
			
			case 41:
				*uParam1 = 33559040;
				*uParam2 = 12353;
				break;
			
			case 42:
				*uParam1 = 33559104;
				*uParam2 = 9794;
				break;
			
			case 43:
				*uParam1 = 13442;
				*uParam2 = 16785985;
				break;
			
			case 44:
				*uParam1 = 33554432;
				*uParam2 = 4672;
				break;
			
			case 45:
				*uParam1 = 50350468;
				*uParam2 = 17985;
				break;
			
			case 46:
				*uParam1 = 50350404;
				*uParam2 = 23104;
				break;
			
			case 47:
				*uParam1 = 33559104;
				*uParam2 = 5186;
				break;
			
			case 48:
				*uParam1 = 14017;
				*uParam2 = 1153;
				break;
			
			case 49:
				*uParam1 = 14082;
				*uParam2 = 16781824;
				break;
			
			case 50:
				*uParam1 = 50350467;
				*uParam2 = 640;
				break;
			
			case 51:
				*uParam1 = 33554432;
				*uParam2 = 1;
				break;
			
			case 52:
				*uParam1 = 9985;
				*uParam2 = 9792;
				break;
			
			case 53:
				*uParam1 = 9410;
				*uParam2 = 16781441;
				break;
			
			case 54:
				*uParam1 = 50355012;
				*uParam2 = 9217;
				break;
			
			case 55:
				*uParam1 = 50355011;
				*uParam2 = 4673;
				break;
			
			case 56:
				*uParam1 = 50350467;
				*uParam2 = 8257;
				break;
			
			case 57:
				*uParam1 = 33554496;
				*uParam2 = 9218;
				break;
			
			case 58:
				*uParam1 = 33554496;
				*uParam2 = 4672;
				break;
			
			case 59:
				*uParam1 = 9409;
				*uParam2 = 1537;
				break;
			
			case 60:
				*uParam1 = 50355011;
				*uParam2 = 128;
				break;
			
			case 61:
				*uParam1 = 13505;
				*uParam2 = 16790592;
				break;
			
			case 62:
				*uParam1 = 14082;
				*uParam2 = 129;
				break;
			
			case 63:
				*uParam1 = 9474;
				*uParam2 = 16777728;
				break;
			
			case 64:
				*uParam1 = 50355076;
				*uParam2 = 13824;
				break;
			
			case 65:
				*uParam1 = 33559040;
				*uParam2 = 12353;
				break;
			
			case 66:
				*uParam1 = 9857;
				*uParam2 = 9344;
				break;
			
			case 67:
				*uParam1 = 33559040;
				*uParam2 = 5122;
				break;
			
			case 68:
				*uParam1 = 50350404;
				*uParam2 = 17921;
				break;
			
			case 69:
				*uParam1 = 13441;
				*uParam2 = 16787009;
				break;
			
			case 70:
				*uParam1 = 33559104;
				*uParam2 = 9728;
				break;
			
			case 71:
				*uParam1 = 9346;
				*uParam2 = 4097;
				break;
			
			case 72:
				*uParam1 = 50350468;
				*uParam2 = 23040;
				break;
			
			case 73:
				*uParam1 = 14082;
				*uParam2 = 4160;
				break;
			
			case 74:
				*uParam1 = 50350403;
				*uParam2 = 5248;
				break;
			
			case 75:
				*uParam1 = 33554432;
				*uParam2 = 9217;
				break;
			
			case 76:
				*uParam1 = 50355075;
				*uParam2 = 4737;
				break;
			
			case 77:
				*uParam1 = 33559104;
				*uParam2 = 576;
				break;
			
			case 78:
				*uParam1 = 50350404;
				*uParam2 = 14401;
				break;
			
			case 79:
				*uParam1 = 13505;
				*uParam2 = 16790593;
				break;
			
			case 80:
				*uParam1 = 33554496;
				*uParam2 = 13826;
				break;
			
			case 81:
				*uParam1 = 50350468;
				*uParam2 = 17984;
				break;
			
			case 82:
				*uParam1 = 33554432;
				*uParam2 = 65;
				break;
			
			case 83:
				*uParam1 = 9922;
				*uParam2 = 16781952;
				break;
			
			case 84:
				*uParam1 = 9985;
				*uParam2 = 1664;
				break;
			
			case 85:
				*uParam1 = 13442;
				*uParam2 = 16781825;
				break;
			
			case 86:
				*uParam1 = 50350467;
				*uParam2 = 513;
				break;
			
			case 87:
				*uParam1 = 13442;
				*uParam2 = 8257;
				break;
			
			case 88:
				*uParam1 = 50350467;
				*uParam2 = 8320;
				break;
			
			case 89:
				*uParam1 = 33554496;
				*uParam2 = 4608;
				break;
			
			case 90:
				*uParam1 = 33559104;
				*uParam2 = 9794;
				break;
			
			case 91:
				*uParam1 = 9410;
				*uParam2 = 8704;
				break;
			
			case 92:
				*uParam1 = 33559040;
				*uParam2 = 513;
				break;
			
			case 93:
				*uParam1 = 13441;
				*uParam2 = 16778880;
				break;
			
			case 94:
				*uParam1 = 50355012;
				*uParam2 = 13953;
				break;
			
			case 95:
				*uParam1 = 9985;
				*uParam2 = 5633;
				break;
			
			case 96:
				*uParam1 = 50350404;
				*uParam2 = 14401;
				break;
			
			case 97:
				*uParam1 = 50355075;
				*uParam2 = 4673;
				break;
			
			case 98:
				*uParam1 = 50350403;
				*uParam2 = 512;
				break;
			
			case 99:
				*uParam1 = 50350404;
				*uParam2 = 23104;
				break;
			
			case 100:
				*uParam1 = 50350403;
				*uParam2 = 5121;
				break;
			
			case 101:
				*uParam1 = 50355075;
				*uParam2 = 4608;
				break;
			
			case 102:
				*uParam1 = 33559104;
				*uParam2 = 5121;
				break;
			
			case 103:
				*uParam1 = 9857;
				*uParam2 = 1088;
				break;
			
			case 104:
				*uParam1 = 9473;
				*uParam2 = 16787073;
				break;
			
			case 105:
				*uParam1 = 13954;
				*uParam2 = 16785409;
				break;
			
			case 106:
				*uParam1 = 50355012;
				*uParam2 = 9344;
				break;
			
			case 107:
				*uParam1 = 33559040;
				*uParam2 = 12354;
				break;
			
			case 108:
				*uParam1 = 13442;
				*uParam2 = 4224;
				break;
			
			case 109:
				*uParam1 = 33559104;
				*uParam2 = 576;
				break;
			
			case 119:
				*uParam1 = 50355076;
				*uParam2 = 13889;
				break;
			
			case 120:
				*uParam1 = 50350403;
				*uParam2 = 8256;
				break;
			
			case 146:
				*uParam1 = 50350468;
				*uParam2 = 13953;
				break;
			
			case 148:
				*uParam1 = 50355075;
				*uParam2 = 65;
				break;
			
			case 149:
				*uParam1 = 33554432;
				*uParam2 = 9216;
				break;
			
			case 150:
				*uParam1 = 33554496;
				*uParam2 = 13890;
				break;
			
			case 151:
				*uParam1 = 9922;
				*uParam2 = 16781952;
				break;
			
			case 152:
				*uParam1 = 50350404;
				*uParam2 = 19008;
				break;
			
			case 153:
				*uParam1 = 13570;
				*uParam2 = 513;
				break;
			
			case 154:
				*uParam1 = 13569;
				*uParam2 = 16790593;
				break;
			
			case 155:
				*uParam1 = 14017;
				*uParam2 = 5632;
				break;
			
			case 157:
				*uParam1 = 33554432;
				*uParam2 = 4609;
				break;
			
			case 158:
				*uParam1 = 9921;
				*uParam2 = 5696;
				break;
			
			case 159:
				*uParam1 = 33554496;
				*uParam2 = 2;
				break;
			
			case 160:
				*uParam1 = 13505;
				*uParam2 = 16790657;
				break;
			
			case 161:
				*uParam1 = 14018;
				*uParam2 = 513;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 19652;
				*uParam2 = 5249;
				break;
			
			case 1:
				*uParam1 = 10562;
				*uParam2 = 1026;
				break;
			
			case 2:
				*uParam1 = 9538;
				*uParam2 = 5121;
				break;
			
			case 3:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 4:
				*uParam1 = 641;
				*uParam2 = 13824;
				break;
			
			case 5:
				*uParam1 = 9538;
				*uParam2 = 9728;
				break;
			
			case 6:
				*uParam1 = 4096;
				*uParam2 = 1601;
				break;
			
			case 7:
				*uParam1 = 15620;
				*uParam2 = 64;
				break;
			
			case 8:
				*uParam1 = 513;
				*uParam2 = 5121;
				break;
			
			case 9:
				*uParam1 = 15556;
				*uParam2 = 8706;
				break;
			
			case 10:
				*uParam1 = 4225;
				*uParam2 = 12802;
				break;
			
			case 11:
				*uParam1 = 4672;
				*uParam2 = 8258;
				break;
			
			case 12:
				*uParam1 = 15107;
				*uParam2 = 4737;
				break;
			
			case 13:
				*uParam1 = 19139;
				*uParam2 = 66;
				break;
			
			case 14:
				*uParam1 = 64;
				*uParam2 = 9216;
				break;
			
			case 15:
				*uParam1 = 15556;
				*uParam2 = 8706;
				break;
			
			case 16:
				*uParam1 = 19139;
				*uParam2 = 66;
				break;
			
			case 17:
				*uParam1 = 512;
				*uParam2 = 577;
				break;
			
			case 18:
				*uParam1 = 15620;
				*uParam2 = 64;
				break;
			
			case 19:
				*uParam1 = 10050;
				*uParam2 = 8192;
				break;
			
			case 20:
				*uParam1 = 4097;
				*uParam2 = 4098;
				break;
			
			case 21:
				*uParam1 = 10562;
				*uParam2 = 4609;
				break;
			
			case 22:
				*uParam1 = 15107;
				*uParam2 = 4737;
				break;
			
			case 23:
				*uParam1 = 4225;
				*uParam2 = 5632;
				break;
			
			case 24:
				*uParam1 = 10050;
				*uParam2 = 1026;
				break;
			
			case 25:
				*uParam1 = 4097;
				*uParam2 = 12289;
				break;
			
			case 26:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 27:
				*uParam1 = 4160;
				*uParam2 = 578;
				break;
			
			case 28:
				*uParam1 = 19652;
				*uParam2 = 5249;
				break;
			
			case 29:
				*uParam1 = 576;
				*uParam2 = 512;
				break;
			
			case 30:
				*uParam1 = 641;
				*uParam2 = 5122;
				break;
			
			case 31:
				*uParam1 = 10050;
				*uParam2 = 5633;
				break;
			
			case 32:
				*uParam1 = 19652;
				*uParam2 = 5249;
				break;
			
			case 33:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 34:
				*uParam1 = 15620;
				*uParam2 = 64;
				break;
			
			case 35:
				*uParam1 = 1;
				*uParam2 = 13313;
				break;
			
			case 36:
				*uParam1 = 4609;
				*uParam2 = 5632;
				break;
			
			case 37:
				*uParam1 = 9538;
				*uParam2 = 8704;
				break;
			
			case 38:
				*uParam1 = 10562;
				*uParam2 = 2;
				break;
			
			case 39:
				*uParam1 = 4672;
				*uParam2 = 8258;
				break;
			
			case 40:
				*uParam1 = 0;
				*uParam2 = 9793;
				break;
			
			case 41:
				*uParam1 = 64;
				*uParam2 = 9216;
				break;
			
			case 42:
				*uParam1 = 15556;
				*uParam2 = 8706;
				break;
			
			case 43:
				*uParam1 = 19139;
				*uParam2 = 66;
				break;
			
			case 44:
				*uParam1 = 15107;
				*uParam2 = 4737;
				break;
			
			case 45:
				*uParam1 = 19652;
				*uParam2 = 5249;
				break;
			
			case 46:
				*uParam1 = 15107;
				*uParam2 = 4737;
				break;
			
			case 47:
				*uParam1 = 4096;
				*uParam2 = 577;
				break;
			
			case 48:
				*uParam1 = 129;
				*uParam2 = 12288;
				break;
			
			case 49:
				*uParam1 = 10050;
				*uParam2 = 8704;
				break;
			
			case 50:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 51:
				*uParam1 = 4672;
				*uParam2 = 8192;
				break;
			
			case 52:
				*uParam1 = 15556;
				*uParam2 = 8706;
				break;
			
			case 53:
				*uParam1 = 576;
				*uParam2 = 578;
				break;
			
			case 54:
				*uParam1 = 15620;
				*uParam2 = 64;
				break;
			
			case 55:
				*uParam1 = 19139;
				*uParam2 = 66;
				break;
			
			case 56:
				*uParam1 = 9538;
				*uParam2 = 2;
				break;
			
			case 57:
				*uParam1 = 513;
				*uParam2 = 5633;
				break;
			
			case 58:
				*uParam1 = 10562;
				*uParam2 = 5121;
				break;
			
			case 59:
				*uParam1 = 4737;
				*uParam2 = 13312;
				break;
			
			case 60:
				*uParam1 = 1;
				*uParam2 = 13314;
				break;
			
			case 61:
				*uParam1 = 19652;
				*uParam2 = 5249;
				break;
			
			case 62:
				*uParam1 = 10050;
				*uParam2 = 8704;
				break;
			
			case 63:
				*uParam1 = 15556;
				*uParam2 = 8706;
				break;
			
			case 64:
				*uParam1 = 4160;
				*uParam2 = 1602;
				break;
			
			case 65:
				*uParam1 = 15620;
				*uParam2 = 64;
				break;
			
			case 66:
				*uParam1 = 4225;
				*uParam2 = 4097;
				break;
			
			case 67:
				*uParam1 = 0;
				*uParam2 = 8769;
				break;
			
			case 68:
				*uParam1 = 15107;
				*uParam2 = 4737;
				break;
			
			case 69:
				*uParam1 = 19139;
				*uParam2 = 66;
				break;
			
			case 70:
				*uParam1 = 10562;
				*uParam2 = 4609;
				break;
			
			case 71:
				*uParam1 = 576;
				*uParam2 = 512;
				break;
			
			case 72:
				*uParam1 = 9538;
				*uParam2 = 1538;
				break;
			
			case 73:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 74:
				*uParam1 = 513;
				*uParam2 = 5634;
				break;
			
			case 75:
				*uParam1 = 9538;
				*uParam2 = 5121;
				break;
			
			case 76:
				*uParam1 = 4608;
				*uParam2 = 8257;
				break;
			
			case 77:
				*uParam1 = 4737;
				*uParam2 = 13312;
				break;
			
			case 78:
				*uParam1 = 15620;
				*uParam2 = 64;
				break;
			
			case 79:
				*uParam1 = 19652;
				*uParam2 = 5249;
				break;
			
			case 80:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 81:
				*uParam1 = 15107;
				*uParam2 = 4737;
				break;
			
			case 82:
				*uParam1 = 10050;
				*uParam2 = 8192;
				break;
			
			case 83:
				*uParam1 = 64;
				*uParam2 = 578;
				break;
			
			case 84:
				*uParam1 = 19139;
				*uParam2 = 66;
				break;
			
			case 85:
				*uParam1 = 4225;
				*uParam2 = 12290;
				break;
			
			case 86:
				*uParam1 = 9538;
				*uParam2 = 514;
				break;
			
			case 87:
				*uParam1 = 4672;
				*uParam2 = 8704;
				break;
			
			case 88:
				*uParam1 = 15556;
				*uParam2 = 8706;
				break;
			
			case 89:
				*uParam1 = 1;
				*uParam2 = 5633;
				break;
			
			case 90:
				*uParam1 = 19652;
				*uParam2 = 5249;
				break;
			
			case 91:
				*uParam1 = 10050;
				*uParam2 = 5121;
				break;
			
			case 92:
				*uParam1 = 19139;
				*uParam2 = 66;
				break;
			
			case 93:
				*uParam1 = 512;
				*uParam2 = 8257;
				break;
			
			case 94:
				*uParam1 = 15620;
				*uParam2 = 64;
				break;
			
			case 95:
				*uParam1 = 4737;
				*uParam2 = 5122;
				break;
			
			case 96:
				*uParam1 = 4160;
				*uParam2 = 1090;
				break;
			
			case 97:
				*uParam1 = 15107;
				*uParam2 = 4737;
				break;
			
			case 98:
				*uParam1 = 4672;
				*uParam2 = 8704;
				break;
			
			case 99:
				*uParam1 = 513;
				*uParam2 = 13824;
				break;
			
			case 100:
				*uParam1 = 10562;
				*uParam2 = 2;
				break;
			
			case 101:
				*uParam1 = 19139;
				*uParam2 = 5248;
				break;
			
			case 102:
				*uParam1 = 10050;
				*uParam2 = 9728;
				break;
			
			case 103:
				*uParam1 = 19716;
				*uParam2 = 9217;
				break;
			
			case 104:
				*uParam1 = 4225;
				*uParam2 = 13824;
				break;
			
			case 105:
				*uParam1 = 10562;
				*uParam2 = 4609;
				break;
			
			case 106:
				*uParam1 = 513;
				*uParam2 = 13313;
				break;
			
			case 107:
				*uParam1 = 15556;
				*uParam2 = 8706;
				break;
			
			case 108:
				*uParam1 = 4672;
				*uParam2 = 65;
				break;
			
			case 109:
				*uParam1 = 19203;
				*uParam2 = 642;
				break;
			
			case 119:
				*uParam1 = 15620;
				*uParam2 = 4160;
				break;
			
			case 120:
				*uParam1 = 15043;
				*uParam2 = 65;
				break;
			
			case 146:
				*uParam1 = 513;
				*uParam2 = 5634;
				break;
			
			case 148:
				*uParam1 = 0;
				*uParam2 = 9280;
				break;
			
			case 149:
				*uParam1 = 4160;
				*uParam2 = 8706;
				break;
			
			case 150:
				*uParam1 = 15620;
				*uParam2 = 4160;
				break;
			
			case 151:
				*uParam1 = 15043;
				*uParam2 = 65;
				break;
			
			case 152:
				*uParam1 = 9538;
				*uParam2 = 2;
				break;
			
			case 153:
				*uParam1 = 19203;
				*uParam2 = 642;
				break;
			
			case 154:
				*uParam1 = 15556;
				*uParam2 = 8706;
				break;
			
			case 155:
				*uParam1 = 64;
				*uParam2 = 65;
				break;
			
			case 157:
				*uParam1 = 512;
				*uParam2 = 8768;
				break;
			
			case 158:
				*uParam1 = 4225;
				*uParam2 = 5122;
				break;
			
			case 159:
				*uParam1 = 64;
				*uParam2 = 2;
				break;
			
			case 160:
				*uParam1 = 19139;
				*uParam2 = 5248;
				break;
			
			case 161:
				*uParam1 = 19716;
				*uParam2 = 9217;
				break;
			}
	}
}

void func_375(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 14018;
				*uParam2 = 16785984;
				break;
			
			case 1:
				*uParam1 = 13506;
				*uParam2 = 4225;
				break;
			
			case 2:
				*uParam1 = 9985;
				*uParam2 = 16778305;
				break;
			
			case 3:
				*uParam1 = 33554496;
				*uParam2 = 4673;
				break;
			
			case 4:
				*uParam1 = 50355075;
				*uParam2 = 129;
				break;
			
			case 5:
				*uParam1 = 50350403;
				*uParam2 = 9280;
				break;
			
			case 6:
				*uParam1 = 50350404;
				*uParam2 = 13952;
				break;
			
			case 7:
				*uParam1 = 50355076;
				*uParam2 = 9217;
				break;
			
			case 8:
				*uParam1 = 33559040;
				*uParam2 = 12354;
				break;
			
			case 9:
				*uParam1 = 9857;
				*uParam2 = 5632;
				break;
			
			case 10:
				*uParam1 = 33554496;
				*uParam2 = 9216;
				break;
			
			case 11:
				*uParam1 = 9409;
				*uParam2 = 9216;
				break;
			
			case 12:
				*uParam1 = 50350404;
				*uParam2 = 22528;
				break;
			
			case 13:
				*uParam1 = 13570;
				*uParam2 = 16790145;
				break;
			
			case 14:
				*uParam1 = 50350468;
				*uParam2 = 19009;
				break;
			
			case 15:
				*uParam1 = 33559040;
				*uParam2 = 5120;
				break;
			
			case 16:
				*uParam1 = 50355011;
				*uParam2 = 4736;
				break;
			
			case 17:
				*uParam1 = 33559104;
				*uParam2 = 577;
				break;
			
			case 18:
				*uParam1 = 14082;
				*uParam2 = 0;
				break;
			
			case 19:
				*uParam1 = 9345;
				*uParam2 = 16782913;
				break;
			
			case 20:
				*uParam1 = 33554496;
				*uParam2 = 13826;
				break;
			
			case 21:
				*uParam1 = 50350403;
				*uParam2 = 4161;
				break;
			
			case 22:
				*uParam1 = 50355076;
				*uParam2 = 13824;
				break;
			
			case 23:
				*uParam1 = 33559040;
				*uParam2 = 9794;
				break;
			
			case 24:
				*uParam1 = 9346;
				*uParam2 = 16777345;
				break;
			
			case 25:
				*uParam1 = 33554432;
				*uParam2 = 0;
				break;
			
			case 26:
				*uParam1 = 13953;
				*uParam2 = 13824;
				break;
			
			case 27:
				*uParam1 = 33559040;
				*uParam2 = 9793;
				break;
			
			case 28:
				*uParam1 = 50350403;
				*uParam2 = 513;
				break;
			
			case 29:
				*uParam1 = 14081;
				*uParam2 = 1153;
				break;
			
			case 30:
				*uParam1 = 50350468;
				*uParam2 = 13953;
				break;
			
			case 31:
				*uParam1 = 13570;
				*uParam2 = 16781888;
				break;
			
			case 32:
				*uParam1 = 50350467;
				*uParam2 = 4160;
				break;
			
			case 33:
				*uParam1 = 50350403;
				*uParam2 = 577;
				break;
			
			case 34:
				*uParam1 = 33554496;
				*uParam2 = 9218;
				break;
			
			case 35:
				*uParam1 = 9858;
				*uParam2 = 8833;
				break;
			
			case 36:
				*uParam1 = 50355076;
				*uParam2 = 9217;
				break;
			
			case 37:
				*uParam1 = 33554496;
				*uParam2 = 65;
				break;
			
			case 38:
				*uParam1 = 14082;
				*uParam2 = 16785408;
				break;
			
			case 39:
				*uParam1 = 9345;
				*uParam2 = 5696;
				break;
			
			case 40:
				*uParam1 = 33559040;
				*uParam2 = 12288;
				break;
			
			case 41:
				*uParam1 = 9409;
				*uParam2 = 16786561;
				break;
			
			case 42:
				*uParam1 = 50355011;
				*uParam2 = 4736;
				break;
			
			case 43:
				*uParam1 = 50355012;
				*uParam2 = 13824;
				break;
			
			case 44:
				*uParam1 = 33554432;
				*uParam2 = 13824;
				break;
			
			case 45:
				*uParam1 = 50350468;
				*uParam2 = 22593;
				break;
			
			case 46:
				*uParam1 = 14017;
				*uParam2 = 13888;
				break;
			
			case 47:
				*uParam1 = 50350467;
				*uParam2 = 9344;
				break;
			
			case 48:
				*uParam1 = 33554496;
				*uParam2 = 4673;
				break;
			
			case 49:
				*uParam1 = 33559040;
				*uParam2 = 5186;
				break;
			
			case 50:
				*uParam1 = 9410;
				*uParam2 = 16777217;
				break;
			
			case 51:
				*uParam1 = 14017;
				*uParam2 = 1153;
				break;
			
			case 52:
				*uParam1 = 13954;
				*uParam2 = 16785920;
				break;
			
			case 53:
				*uParam1 = 50350468;
				*uParam2 = 19072;
				break;
			
			case 54:
				*uParam1 = 50355076;
				*uParam2 = 9217;
				break;
			
			case 55:
				*uParam1 = 50355011;
				*uParam2 = 65;
				break;
			
			case 56:
				*uParam1 = 50355011;
				*uParam2 = 4737;
				break;
			
			case 57:
				*uParam1 = 50350467;
				*uParam2 = 9280;
				break;
			
			case 58:
				*uParam1 = 33559104;
				*uParam2 = 512;
				break;
			
			case 59:
				*uParam1 = 33559040;
				*uParam2 = 9729;
				break;
			
			case 60:
				*uParam1 = 13442;
				*uParam2 = 4737;
				break;
			
			case 61:
				*uParam1 = 13954;
				*uParam2 = 16781376;
				break;
			
			case 62:
				*uParam1 = 50350404;
				*uParam2 = 13824;
				break;
			
			case 63:
				*uParam1 = 33554496;
				*uParam2 = 4674;
				break;
			
			case 64:
				*uParam1 = 9473;
				*uParam2 = 16786560;
				break;
			
			case 65:
				*uParam1 = 13505;
				*uParam2 = 13889;
				break;
			
			case 66:
				*uParam1 = 9986;
				*uParam2 = 4096;
				break;
			
			case 67:
				*uParam1 = 50350467;
				*uParam2 = 576;
				break;
			
			case 68:
				*uParam1 = 50350404;
				*uParam2 = 22657;
				break;
			
			case 69:
				*uParam1 = 33554496;
				*uParam2 = 1;
				break;
			
			case 70:
				*uParam1 = 33554432;
				*uParam2 = 9280;
				break;
			
			case 71:
				*uParam1 = 50350468;
				*uParam2 = 18944;
				break;
			
			case 72:
				*uParam1 = 9985;
				*uParam2 = 16778816;
				break;
			
			case 73:
				*uParam1 = 33554496;
				*uParam2 = 13890;
				break;
			
			case 74:
				*uParam1 = 14018;
				*uParam2 = 8705;
				break;
			
			case 75:
				*uParam1 = 13953;
				*uParam2 = 16778305;
				break;
			
			case 76:
				*uParam1 = 50355075;
				*uParam2 = 129;
				break;
			
			case 77:
				*uParam1 = 33559040;
				*uParam2 = 5120;
				break;
			
			case 78:
				*uParam1 = 50355012;
				*uParam2 = 13889;
				break;
			
			case 79:
				*uParam1 = 33559104;
				*uParam2 = 12289;
				break;
			
			case 80:
				*uParam1 = 50350403;
				*uParam2 = 4096;
				break;
			
			case 81:
				*uParam1 = 13505;
				*uParam2 = 5632;
				break;
			
			case 82:
				*uParam1 = 9345;
				*uParam2 = 16778241;
				break;
			
			case 83:
				*uParam1 = 33559040;
				*uParam2 = 578;
				break;
			
			case 84:
				*uParam1 = 9474;
				*uParam2 = 16781824;
				break;
			
			case 85:
				*uParam1 = 50350468;
				*uParam2 = 22656;
				break;
			
			case 86:
				*uParam1 = 50355011;
				*uParam2 = 4673;
				break;
			
			case 87:
				*uParam1 = 50350404;
				*uParam2 = 19072;
				break;
			
			case 88:
				*uParam1 = 13506;
				*uParam2 = 129;
				break;
			
			case 89:
				*uParam1 = 33559040;
				*uParam2 = 9728;
				break;
			
			case 90:
				*uParam1 = 50350467;
				*uParam2 = 576;
				break;
			
			case 91:
				*uParam1 = 33554432;
				*uParam2 = 9282;
				break;
			
			case 92:
				*uParam1 = 13505;
				*uParam2 = 16790593;
				break;
			
			case 93:
				*uParam1 = 13570;
				*uParam2 = 8832;
				break;
			
			case 94:
				*uParam1 = 50350404;
				*uParam2 = 13825;
				break;
			
			case 95:
				*uParam1 = 33554496;
				*uParam2 = 13889;
				break;
			
			case 96:
				*uParam1 = 50355076;
				*uParam2 = 13825;
				break;
			
			case 97:
				*uParam1 = 50355075;
				*uParam2 = 129;
				break;
			
			case 98:
				*uParam1 = 9986;
				*uParam2 = 8769;
				break;
			
			case 99:
				*uParam1 = 13953;
				*uParam2 = 16791168;
				break;
			
			case 100:
				*uParam1 = 50350403;
				*uParam2 = 5249;
				break;
			
			case 101:
				*uParam1 = 50350467;
				*uParam2 = 8192;
				break;
			
			case 102:
				*uParam1 = 9921;
				*uParam2 = 16778369;
				break;
			
			case 103:
				*uParam1 = 33554496;
				*uParam2 = 4610;
				break;
			
			case 104:
				*uParam1 = 14082;
				*uParam2 = 8321;
				break;
			
			case 105:
				*uParam1 = 50355012;
				*uParam2 = 9216;
				break;
			
			case 106:
				*uParam1 = 9345;
				*uParam2 = 16787008;
				break;
			
			case 107:
				*uParam1 = 9474;
				*uParam2 = 4096;
				break;
			
			case 108:
				*uParam1 = 33559040;
				*uParam2 = 13377;
				break;
			
			case 109:
				*uParam1 = 50355012;
				*uParam2 = 13889;
				break;
			
			case 119:
				*uParam1 = 33559104;
				*uParam2 = 576;
				break;
			
			case 120:
				*uParam1 = 50350467;
				*uParam2 = 576;
				break;
			
			case 146:
				*uParam1 = 33559040;
				*uParam2 = 4096;
				break;
			
			case 148:
				*uParam1 = 50355075;
				*uParam2 = 129;
				break;
			
			case 149:
				*uParam1 = 50350468;
				*uParam2 = 22081;
				break;
			
			case 150:
				*uParam1 = 13506;
				*uParam2 = 4672;
				break;
			
			case 151:
				*uParam1 = 33554496;
				*uParam2 = 13889;
				break;
			
			case 152:
				*uParam1 = 13441;
				*uParam2 = 16778368;
				break;
			
			case 153:
				*uParam1 = 50350404;
				*uParam2 = 18560;
				break;
			
			case 154:
				*uParam1 = 14018;
				*uParam2 = 16790017;
				break;
			
			case 155:
				*uParam1 = 33559040;
				*uParam2 = 9794;
				break;
			
			case 157:
				*uParam1 = 14081;
				*uParam2 = 1601;
				break;
			
			case 158:
				*uParam1 = 33554432;
				*uParam2 = 9218;
				break;
			
			case 159:
				*uParam1 = 13442;
				*uParam2 = 16781824;
				break;
			
			case 160:
				*uParam1 = 14018;
				*uParam2 = 12865;
				break;
			
			case 161:
				*uParam1 = 50350468;
				*uParam2 = 14976;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 4672;
				*uParam2 = 66;
				break;
			
			case 1:
				*uParam1 = 19715;
				*uParam2 = 4608;
				break;
			
			case 2:
				*uParam1 = 15043;
				*uParam2 = 514;
				break;
			
			case 3:
				*uParam1 = 4224;
				*uParam2 = 8705;
				break;
			
			case 4:
				*uParam1 = 9538;
				*uParam2 = 5632;
				break;
			
			case 5:
				*uParam1 = 19652;
				*uParam2 = 8321;
				break;
			
			case 6:
				*uParam1 = 513;
				*uParam2 = 5634;
				break;
			
			case 7:
				*uParam1 = 1;
				*uParam2 = 13312;
				break;
			
			case 8:
				*uParam1 = 9538;
				*uParam2 = 9217;
				break;
			
			case 9:
				*uParam1 = 10562;
				*uParam2 = 514;
				break;
			
			case 10:
				*uParam1 = 19716;
				*uParam2 = 1088;
				break;
			
			case 11:
				*uParam1 = 4225;
				*uParam2 = 13825;
				break;
			
			case 12:
				*uParam1 = 15107;
				*uParam2 = 5249;
				break;
			
			case 13:
				*uParam1 = 15556;
				*uParam2 = 8770;
				break;
			
			case 14:
				*uParam1 = 512;
				*uParam2 = 8768;
				break;
			
			case 15:
				*uParam1 = 10562;
				*uParam2 = 2;
				break;
			
			case 16:
				*uParam1 = 15556;
				*uParam2 = 9282;
				break;
			
			case 17:
				*uParam1 = 4609;
				*uParam2 = 5122;
				break;
			
			case 18:
				*uParam1 = 129;
				*uParam2 = 12288;
				break;
			
			case 19:
				*uParam1 = 19652;
				*uParam2 = 8321;
				break;
			
			case 20:
				*uParam1 = 19716;
				*uParam2 = 576;
				break;
			
			case 21:
				*uParam1 = 15043;
				*uParam2 = 2;
				break;
			
			case 22:
				*uParam1 = 15107;
				*uParam2 = 4225;
				break;
			
			case 23:
				*uParam1 = 9538;
				*uParam2 = 4096;
				break;
			
			case 24:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 25:
				*uParam1 = 10050;
				*uParam2 = 9729;
				break;
			
			case 26:
				*uParam1 = 64;
				*uParam2 = 1025;
				break;
			
			case 27:
				*uParam1 = 513;
				*uParam2 = 5633;
				break;
			
			case 28:
				*uParam1 = 4160;
				*uParam2 = 8258;
				break;
			
			case 29:
				*uParam1 = 576;
				*uParam2 = 512;
				break;
			
			case 30:
				*uParam1 = 19716;
				*uParam2 = 1088;
				break;
			
			case 31:
				*uParam1 = 15043;
				*uParam2 = 1026;
				break;
			
			case 32:
				*uParam1 = 4608;
				*uParam2 = 66;
				break;
			
			case 33:
				*uParam1 = 64;
				*uParam2 = 8769;
				break;
			
			case 34:
				*uParam1 = 4737;
				*uParam2 = 5120;
				break;
			
			case 35:
				*uParam1 = 10050;
				*uParam2 = 9217;
				break;
			
			case 36:
				*uParam1 = 10050;
				*uParam2 = 4608;
				break;
			
			case 37:
				*uParam1 = 19652;
				*uParam2 = 8321;
				break;
			
			case 38:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 39:
				*uParam1 = 4225;
				*uParam2 = 13825;
				break;
			
			case 40:
				*uParam1 = 1;
				*uParam2 = 12802;
				break;
			
			case 41:
				*uParam1 = 4672;
				*uParam2 = 8704;
				break;
			
			case 42:
				*uParam1 = 10050;
				*uParam2 = 2;
				break;
			
			case 43:
				*uParam1 = 15556;
				*uParam2 = 8258;
				break;
			
			case 44:
				*uParam1 = 15107;
				*uParam2 = 5249;
				break;
			
			case 45:
				*uParam1 = 4608;
				*uParam2 = 66;
				break;
			
			case 46:
				*uParam1 = 15107;
				*uParam2 = 4225;
				break;
			
			case 47:
				*uParam1 = 513;
				*uParam2 = 5634;
				break;
			
			case 48:
				*uParam1 = 9538;
				*uParam2 = 4608;
				break;
			
			case 49:
				*uParam1 = 19652;
				*uParam2 = 9345;
				break;
			
			case 50:
				*uParam1 = 64;
				*uParam2 = 1089;
				break;
			
			case 51:
				*uParam1 = 64;
				*uParam2 = 8192;
				break;
			
			case 52:
				*uParam1 = 10562;
				*uParam2 = 1026;
				break;
			
			case 53:
				*uParam1 = 4737;
				*uParam2 = 5121;
				break;
			
			case 54:
				*uParam1 = 4225;
				*uParam2 = 13824;
				break;
			
			case 55:
				*uParam1 = 15556;
				*uParam2 = 8770;
				break;
			
			case 56:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 57:
				*uParam1 = 10050;
				*uParam2 = 8193;
				break;
			
			case 58:
				*uParam1 = 15043;
				*uParam2 = 1026;
				break;
			
			case 59:
				*uParam1 = 10050;
				*uParam2 = 5632;
				break;
			
			case 60:
				*uParam1 = 19716;
				*uParam2 = 576;
				break;
			
			case 61:
				*uParam1 = 0;
				*uParam2 = 1090;
				break;
			
			case 62:
				*uParam1 = 19652;
				*uParam2 = 8321;
				break;
			
			case 63:
				*uParam1 = 9538;
				*uParam2 = 514;
				break;
			
			case 64:
				*uParam1 = 513;
				*uParam2 = 5633;
				break;
			
			case 65:
				*uParam1 = 1;
				*uParam2 = 12800;
				break;
			
			case 66:
				*uParam1 = 9538;
				*uParam2 = 8193;
				break;
			
			case 67:
				*uParam1 = 4225;
				*uParam2 = 4098;
				break;
			
			case 68:
				*uParam1 = 15107;
				*uParam2 = 4225;
				break;
			
			case 69:
				*uParam1 = 15556;
				*uParam2 = 9282;
				break;
			
			case 70:
				*uParam1 = 15043;
				*uParam2 = 1026;
				break;
			
			case 71:
				*uParam1 = 4672;
				*uParam2 = 8704;
				break;
			
			case 72:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 73:
				*uParam1 = 576;
				*uParam2 = 8257;
				break;
			
			case 74:
				*uParam1 = 19716;
				*uParam2 = 576;
				break;
			
			case 75:
				*uParam1 = 15043;
				*uParam2 = 2;
				break;
			
			case 76:
				*uParam1 = 4737;
				*uParam2 = 13314;
				break;
			
			case 77:
				*uParam1 = 10562;
				*uParam2 = 4608;
				break;
			
			case 78:
				*uParam1 = 4097;
				*uParam2 = 5632;
				break;
			
			case 79:
				*uParam1 = 4096;
				*uParam2 = 1090;
				break;
			
			case 80:
				*uParam1 = 512;
				*uParam2 = 65;
				break;
			
			case 81:
				*uParam1 = 15107;
				*uParam2 = 5249;
				break;
			
			case 82:
				*uParam1 = 19652;
				*uParam2 = 9345;
				break;
			
			case 83:
				*uParam1 = 1;
				*uParam2 = 12289;
				break;
			
			case 84:
				*uParam1 = 15556;
				*uParam2 = 8258;
				break;
			
			case 85:
				*uParam1 = 19716;
				*uParam2 = 1088;
				break;
			
			case 86:
				*uParam1 = 19203;
				*uParam2 = 4608;
				break;
			
			case 87:
				*uParam1 = 4160;
				*uParam2 = 576;
				break;
			
			case 88:
				*uParam1 = 10562;
				*uParam2 = 1026;
				break;
			
			case 89:
				*uParam1 = 10050;
				*uParam2 = 9217;
				break;
			
			case 90:
				*uParam1 = 4672;
				*uParam2 = 8706;
				break;
			
			case 91:
				*uParam1 = 15043;
				*uParam2 = 2;
				break;
			
			case 92:
				*uParam1 = 15556;
				*uParam2 = 8258;
				break;
			
			case 93:
				*uParam1 = 4737;
				*uParam2 = 13314;
				break;
			
			case 94:
				*uParam1 = 1;
				*uParam2 = 5632;
				break;
			
			case 95:
				*uParam1 = 19716;
				*uParam2 = 576;
				break;
			
			case 96:
				*uParam1 = 4737;
				*uParam2 = 5633;
				break;
			
			case 97:
				*uParam1 = 15107;
				*uParam2 = 4225;
				break;
			
			case 98:
				*uParam1 = 64;
				*uParam2 = 9216;
				break;
			
			case 99:
				*uParam1 = 9538;
				*uParam2 = 5632;
				break;
			
			case 100:
				*uParam1 = 4160;
				*uParam2 = 9793;
				break;
			
			case 101:
				*uParam1 = 9538;
				*uParam2 = 9217;
				break;
			
			case 102:
				*uParam1 = 19652;
				*uParam2 = 5249;
				break;
			
			case 103:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			
			case 104:
				*uParam1 = 10562;
				*uParam2 = 2;
				break;
			
			case 105:
				*uParam1 = 641;
				*uParam2 = 5120;
				break;
			
			case 106:
				*uParam1 = 10050;
				*uParam2 = 4608;
				break;
			
			case 107:
				*uParam1 = 19139;
				*uParam2 = 513;
				break;
			
			case 108:
				*uParam1 = 513;
				*uParam2 = 13826;
				break;
			
			case 109:
				*uParam1 = 15556;
				*uParam2 = 4160;
				break;
			
			case 119:
				*uParam1 = 15620;
				*uParam2 = 642;
				break;
			
			case 120:
				*uParam1 = 0;
				*uParam2 = 8770;
				break;
			
			case 146:
				*uParam1 = 4097;
				*uParam2 = 13313;
				break;
			
			case 148:
				*uParam1 = 15107;
				*uParam2 = 8258;
				break;
			
			case 149:
				*uParam1 = 4672;
				*uParam2 = 0;
				break;
			
			case 150:
				*uParam1 = 15620;
				*uParam2 = 642;
				break;
			
			case 151:
				*uParam1 = 512;
				*uParam2 = 578;
				break;
			
			case 152:
				*uParam1 = 64;
				*uParam2 = 8257;
				break;
			
			case 153:
				*uParam1 = 15556;
				*uParam2 = 4160;
				break;
			
			case 154:
				*uParam1 = 19139;
				*uParam2 = 513;
				break;
			
			case 155:
				*uParam1 = 4225;
				*uParam2 = 4610;
				break;
			
			case 157:
				*uParam1 = 15107;
				*uParam2 = 8258;
				break;
			
			case 158:
				*uParam1 = 4097;
				*uParam2 = 4097;
				break;
			
			case 159:
				*uParam1 = 576;
				*uParam2 = 512;
				break;
			
			case 160:
				*uParam1 = 9538;
				*uParam2 = 8193;
				break;
			
			case 161:
				*uParam1 = 19203;
				*uParam2 = 9216;
				break;
			}
	}
}

int func_376(int iParam0)
{
	iVar0 = func_454(iParam0, 0);
	switch (iVar0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

float func_377(int iParam0)
{
	iVar0 = func_427(iParam0, 0);
	if (iVar0 > -1)
	{
		fVar1 = func_378(iVar0);
		return (fVar1 + func_378(iParam0));
	}
	return func_378(iParam0);
}

float func_378(int iParam0)
{
	func_441(iParam0, &iVar0, &uVar1, 0);
	return func_430(iParam0, iVar0, 0);
}

Vector3 func_379(int iParam0)
{
	iVar0 = func_427(iParam0, 0);
	if (iVar0 > -1)
	{
		Var1 = { func_380(iVar0) };
		uVar4 = func_378(iVar0);
		return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1, uVar4, func_380(iParam0));
	}
	return func_380(iParam0);
}

Vector3 func_380(int iParam0)
{
	func_441(iParam0, &iVar0, &uVar1, 0);
	return func_435(iParam0, iVar0, 0);
}

void func_381(int iParam0, var uParam1)
{
	func_331(uParam1);
	switch (iParam0)
	{
		case 0:
			func_425(uParam1);
			break;
		
		case 20:
			func_424(uParam1);
			break;
		
		case 6:
			func_423(uParam1);
			break;
		
		case 9:
			func_422(uParam1);
			break;
		
		case 8:
			func_421(uParam1);
			break;
		
		case 7:
			func_420(uParam1);
			break;
		
		case 13:
			func_419(uParam1);
			break;
		
		case 10:
			if (func_6() != -1)
			{
				switch (Global_1316784)
				{
					case 0:
						func_330(uParam1);
						break;
					
					case 1:
						func_329(uParam1);
						break;
					
					case 2:
						func_328(uParam1, 0);
						break;
					
					case 3:
						func_327(uParam1);
						break;
					}
			}
			break;
		
		case 62:
			if (func_6() != -1)
			{
				switch (Global_1316784)
				{
					case 2:
						func_328(uParam1, 1);
						break;
					}
			}
			break;
		
		case 11:
			func_317(uParam1);
			break;
		
		case 12:
			func_314(uParam1);
			break;
		
		case 14:
			func_418(uParam1);
			break;
		
		case 15:
			func_417(uParam1);
			break;
		
		case 16:
			func_416(uParam1);
			break;
		
		case 17:
			func_415(uParam1);
			break;
		
		case 19:
			func_414(uParam1);
			break;
		
		case 18:
			func_413(uParam1);
			break;
		
		case 1:
			func_412(uParam1);
			break;
		
		case 2:
			func_411(uParam1);
			break;
		
		case 3:
			func_410(uParam1);
			break;
		
		case 5:
			func_409(uParam1);
			break;
		
		case 4:
			func_408(uParam1);
			break;
		
		case 21:
			func_407(uParam1);
			break;
		
		case 22:
			func_406(uParam1);
			break;
		
		case 23:
			func_405(uParam1);
			break;
		
		case 24:
			func_404(uParam1);
			break;
		
		case 25:
			func_403(uParam1);
			break;
		
		case 26:
			func_402(uParam1);
			break;
		
		case 27:
			func_401(uParam1);
			break;
		
		case 28:
			func_400(uParam1);
			break;
		
		case 29:
			func_399(uParam1);
			break;
		
		case 30:
			func_398(uParam1);
			break;
		
		case 31:
			func_397(uParam1);
			break;
		
		case 32:
			func_396(uParam1);
			break;
		
		case 33:
			func_395(uParam1);
			break;
		
		case 34:
			func_394(uParam1);
			break;
		
		case 35:
			func_319(uParam1);
			break;
		
		case 36:
			func_322(uParam1);
			break;
		
		case 37:
			func_326(uParam1);
			break;
		
		case 38:
			func_393(uParam1);
			break;
		
		case 39:
			func_392(uParam1);
			break;
		
		case 40:
			func_314(uParam1);
			break;
		
		case 41:
			func_323(uParam1);
			break;
		
		case 42:
			func_318(uParam1);
			break;
		
		case 43:
			func_320(uParam1);
			break;
		
		case 44:
			func_325(uParam1);
			break;
		
		case 45:
			func_317(uParam1);
			break;
		
		case 46:
			func_314(uParam1);
			break;
		
		case 47:
			func_324(uParam1);
			break;
		
		case 48:
			func_321(uParam1);
			break;
		
		case 50:
			func_314(uParam1);
			break;
		
		case 49:
			func_317(uParam1);
			break;
		
		case 51:
			func_314(uParam1);
			break;
		
		case 52:
			func_391(uParam1);
			break;
		
		case 53:
			func_390(uParam1);
			break;
		
		case 54:
			func_389(uParam1);
			break;
		
		case 55:
			func_388(uParam1);
			break;
		
		case 56:
			func_387(uParam1);
			break;
		
		case 57:
			func_386(uParam1);
			break;
		
		case 58:
			func_385(uParam1);
			break;
		
		case 59:
			func_384(uParam1);
			break;
		
		case 60:
			func_383(uParam1);
			break;
		
		case 61:
			func_382(uParam1);
			break;
	}
}

void func_382(var uParam0)
{
	*uParam0 = -961242577;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_383(var uParam0)
{
	*uParam0 = -868827412;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_384(var uParam0)
{
	*uParam0 = func_315(0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 2;
	uParam0->f_1[0].f_1 = 2;
	uParam0->f_1[2] = 2;
	uParam0->f_1[2].f_1 = 0;
	uParam0->f_1[3] = 2;
	uParam0->f_1[3].f_1 = 1;
	uParam0->f_1[4] = 4;
	uParam0->f_1[4].f_1 = 0;
	uParam0->f_1[8] = 4;
	uParam0->f_1[8].f_1 = 0;
	uParam0->f_38[0] = 2;
	uParam0->f_38[0].f_1 = 2;
}

void func_385(var uParam0)
{
	*uParam0 = 1511543927;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_386(var uParam0)
{
	*uParam0 = 1573528872;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_387(var uParam0)
{
	*uParam0 = -340063052;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_388(var uParam0)
{
	*uParam0 = -666714478;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_389(var uParam0)
{
	*uParam0 = 1135976220;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_390(var uParam0)
{
	*uParam0 = 1823868411;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[4] = 1;
}

void func_391(var uParam0)
{
	*uParam0 = func_315(1);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	switch (Global_1316782)
	{
		case 0:
			uParam0->f_1[0] = 0;
			uParam0->f_1[0].f_1 = 2;
			uParam0->f_1[2] = 1;
			uParam0->f_1[2].f_1 = 1;
			uParam0->f_1[3] = 1;
			uParam0->f_1[3].f_1 = 1;
			uParam0->f_1[4] = 3;
			uParam0->f_1[4].f_1 = 3;
			uParam0->f_1[8] = 0;
			uParam0->f_1[8].f_1 = 0;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			uParam0->f_1[0] = 0;
			uParam0->f_1[0].f_1 = 2;
			uParam0->f_1[2] = 1;
			uParam0->f_1[2].f_1 = 1;
			uParam0->f_1[3] = 1;
			uParam0->f_1[3].f_1 = 1;
			uParam0->f_1[4] = 3;
			uParam0->f_1[4].f_1 = 3;
			uParam0->f_1[8] = 0;
			uParam0->f_1[8].f_1 = 0;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = -1;
			break;
		
		case 2:
			uParam0->f_1[0] = 1;
			uParam0->f_1[0].f_1 = 0;
			uParam0->f_1[2] = 3;
			uParam0->f_1[2].f_1 = 2;
			uParam0->f_1[3] = 2;
			uParam0->f_1[3].f_1 = 5;
			uParam0->f_1[4] = 2;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 0;
			uParam0->f_1[8].f_1 = 0;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = -1;
			break;
	}
}

void func_392(var uParam0)
{
	*uParam0 = 1194880004;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_393(var uParam0)
{
	*uParam0 = 795497466;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_394(var uParam0)
{
	*uParam0 = 1299424319;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 2;
	uParam0->f_1[2] = 2;
	uParam0->f_1[3] = 1;
	uParam0->f_1[4] = 2;
}

void func_395(var uParam0)
{
	*uParam0 = 1221043248;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 5;
	uParam0->f_1[0].f_1 = 0;
	uParam0->f_1[3] = 5;
	uParam0->f_1[3].f_1 = 0;
	uParam0->f_1[4] = 5;
	uParam0->f_1[4].f_1 = 0;
	uParam0->f_1[8] = 4;
	uParam0->f_1[8].f_1 = 0;
}

void func_396(var uParam0)
{
	*uParam0 = 222643882;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6] = 1;
	uParam0->f_1[6].f_1 = 0;
	uParam0->f_1[2] = 1;
	uParam0->f_1[2].f_1 = 0;
	uParam0->f_1[0] = 1;
	uParam0->f_1[0].f_1 = 0;
	uParam0->f_1[4] = 1;
	uParam0->f_1[4].f_1 = 0;
	uParam0->f_1[3] = 0;
	uParam0->f_1[3].f_1 = 1;
}

void func_397(var uParam0)
{
	*uParam0 = 222643882;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_398(var uParam0)
{
	*uParam0 = 130590395;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6] = 1;
	uParam0->f_1[6].f_1 = 0;
	uParam0->f_1[2] = 1;
	uParam0->f_1[2].f_1 = 0;
	uParam0->f_1[0] = 1;
	uParam0->f_1[0].f_1 = 0;
	uParam0->f_1[11] = 1;
	uParam0->f_1[11].f_1 = 0;
	uParam0->f_1[4] = 1;
	uParam0->f_1[4].f_1 = 0;
	uParam0->f_1[3] = 1;
	uParam0->f_1[3].f_1 = 0;
	uParam0->f_38[6] = 1;
	uParam0->f_38[6].f_1 = 0;
}

void func_399(var uParam0)
{
	*uParam0 = 130590395;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[6] = 0;
	uParam0->f_38[6].f_1 = 0;
}

void func_400(var uParam0)
{
	*uParam0 = -1394433551;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6] = 1;
	uParam0->f_1[6].f_1 = 0;
	uParam0->f_1[2] = 1;
	uParam0->f_1[2].f_1 = 0;
	uParam0->f_1[0] = 1;
	uParam0->f_1[0].f_1 = 0;
	uParam0->f_1[11] = 1;
	uParam0->f_1[11].f_1 = 0;
	uParam0->f_1[4] = 1;
	uParam0->f_1[4].f_1 = 2;
	uParam0->f_1[3] = 1;
	uParam0->f_1[3].f_1 = 0;
}

void func_401(var uParam0)
{
	*uParam0 = -1394433551;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_402(var uParam0)
{
	*uParam0 = 1443057394;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[1] = 1;
	uParam0->f_1[1].f_1 = 0;
	uParam0->f_1[6] = 0;
	uParam0->f_1[6].f_1 = 1;
	uParam0->f_1[2] = 1;
	uParam0->f_1[2].f_1 = 0;
	uParam0->f_1[0] = 1;
	uParam0->f_1[0].f_1 = 0;
	uParam0->f_1[4] = 0;
	uParam0->f_1[4].f_1 = 2;
	uParam0->f_1[3] = 0;
	uParam0->f_1[3].f_1 = 1;
}

void func_403(var uParam0)
{
	*uParam0 = 1443057394;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_404(var uParam0)
{
	*uParam0 = -92584602;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6] = 1;
	uParam0->f_1[6].f_1 = 0;
	uParam0->f_1[2] = 1;
	uParam0->f_1[2].f_1 = 0;
	uParam0->f_1[0] = 1;
	uParam0->f_1[0].f_1 = 0;
	uParam0->f_1[11] = 1;
	uParam0->f_1[11].f_1 = 0;
	uParam0->f_1[4] = 1;
	uParam0->f_1[4].f_1 = 0;
	uParam0->f_1[3] = 1;
	uParam0->f_1[3].f_1 = 0;
	uParam0->f_38[6] = 1;
	uParam0->f_38[6].f_1 = 0;
	uParam0->f_38[2] = 0;
	uParam0->f_38[2].f_1 = 0;
	uParam0->f_38[0] = 0;
	uParam0->f_38[0].f_1 = 0;
}

void func_405(var uParam0)
{
	*uParam0 = -92584602;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[6] = 0;
	uParam0->f_38[6].f_1 = 0;
	uParam0->f_38[2] = -1;
	uParam0->f_38[2].f_1 = -1;
	uParam0->f_38[0] = -1;
	uParam0->f_38[0].f_1 = -1;
}

void func_406(var uParam0)
{
	*uParam0 = 2145639711;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6] = 1;
	uParam0->f_1[6].f_1 = 0;
	uParam0->f_1[2] = 1;
	uParam0->f_1[2].f_1 = 0;
	uParam0->f_1[0] = 1;
	uParam0->f_1[0].f_1 = 0;
	uParam0->f_1[11] = 1;
	uParam0->f_1[11].f_1 = 0;
	uParam0->f_1[4] = 0;
	uParam0->f_1[4].f_1 = 1;
	uParam0->f_38[0] = 0;
	uParam0->f_38[0].f_1 = 0;
}

void func_407(var uParam0)
{
	*uParam0 = 2145639711;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[7] = 1;
	uParam0->f_1[7].f_1 = 0;
	uParam0->f_38[0] = -1;
	uParam0->f_38[0].f_1 = -1;
}

void func_408(var uParam0)
{
	*uParam0 = -1613485779;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 1;
	uParam0->f_1[0].f_1 = 1;
	uParam0->f_1[3] = 1;
	uParam0->f_1[3].f_1 = 4;
}

void func_409(var uParam0)
{
	*uParam0 = -1613485779;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_410(var uParam0)
{
	*uParam0 = -1613485779;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 0;
	uParam0->f_1[0].f_1 = 2;
	uParam0->f_1[3] = 1;
	uParam0->f_1[3].f_1 = 2;
}

void func_411(var uParam0)
{
	*uParam0 = -1613485779;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 1;
	uParam0->f_1[0].f_1 = 0;
	uParam0->f_1[3].f_1 = 5;
	uParam0->f_1[11] = 1;
	uParam0->f_1[11].f_1 = 1;
}

void func_412(var uParam0)
{
	*uParam0 = 1299424319;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_413(var uParam0)
{
	*uParam0 = 1530424218;
}

void func_414(var uParam0)
{
	*uParam0 = 2109968527;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[4] = 1;
}

void func_415(var uParam0)
{
	*uParam0 = 761829301;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[1] = 0;
	uParam0->f_38[1].f_1 = 0;
}

void func_416(var uParam0)
{
	*uParam0 = 1153203121;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[3] = 1;
}

void func_417(var uParam0)
{
	*uParam0 = -566941131;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 0;
	uParam0->f_1[0].f_1 = 1;
	uParam0->f_1[2] = 3;
	uParam0->f_1[2].f_1 = 0;
	uParam0->f_1[3] = 5;
	uParam0->f_1[3].f_1 = 0;
	uParam0->f_1[4] = 1;
	uParam0->f_1[4].f_1 = 0;
	uParam0->f_1[6] = 1;
	uParam0->f_1[6].f_1 = 0;
	uParam0->f_1[8] = 3;
}

void func_418(var uParam0)
{
	*uParam0 = -2063317268;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[0] = -1;
	uParam0->f_38[1] = -1;
}

void func_419(var uParam0)
{
	*uParam0 = -1453933154;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 1;
	uParam0->f_1[0].f_1 = 2;
	uParam0->f_1[3] = 1;
	uParam0->f_1[3].f_1 = 1;
	uParam0->f_1[4] = 0;
	uParam0->f_1[4].f_1 = 2;
	uParam0->f_1[8] = 0;
	uParam0->f_1[8].f_1 = 0;
	uParam0->f_38[0] = 0;
	uParam0->f_38[0].f_1 = 0;
}

void func_420(var uParam0)
{
	*uParam0 = -1054459573;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 2;
	uParam0->f_1[2] = 2;
	uParam0->f_1[3] = 2;
	uParam0->f_1[4].f_1 = 2;
	uParam0->f_1[8].f_1 = 1;
	uParam0->f_38[0] = -1;
	uParam0->f_38[1] = -1;
}

void func_421(var uParam0)
{
	*uParam0 = 1299424319;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 1;
	uParam0->f_1[2] = 1;
	uParam0->f_1[3].f_1 = 1;
	uParam0->f_1[4] = 1;
	uParam0->f_38[0] = -1;
	uParam0->f_38[1] = -1;
}

void func_422(var uParam0)
{
	*uParam0 = -1054459573;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
}

void func_423(var uParam0)
{
	*uParam0 = 1299424319;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[0] = -1;
	uParam0->f_38[1] = -1;
}

void func_424(var uParam0)
{
	*uParam0 = -1054459573;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0] = 1;
	uParam0->f_1[2] = 1;
	uParam0->f_1[3] = 1;
	uParam0->f_1[4].f_1 = 1;
	uParam0->f_1[8] = 1;
	uParam0->f_38[0] = -1;
	uParam0->f_38[1] = -1;
}

void func_425(var uParam0)
{
	*uParam0 = -1613485779;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0].f_1 = 2;
	uParam0->f_1[2] = 1;
	uParam0->f_1[3] = 1;
	uParam0->f_1[3].f_1 = 1;
}

int func_426(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = (iParam1 + iParam2);
	if (iVar1 > 20)
	{
		iVar2 += 35;
	}
	else if (iVar1 > 12)
	{
		iVar2 += 20;
	}
	if (iVar2 > 130)
	{
		iVar3 = (iVar2 - 130);
		if (iVar3 > iParam3)
		{
		}
		return func_449(iParam0, iVar3);
	}
	return 0;
}

int func_427(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	iVar0 = -1;
	iVar0 = func_428(iParam0);
	switch (iParam0)
	{
		case 39:
			if (Global_1316786 == 1 || Global_1316786 == 3)
			{
				iVar0 = -1;
			}
			break;
	}
	return iVar0;
}

int func_428(int iParam0)
{
	func_429(&iParam0);
	switch (Global_1316795)
	{
		case 0:
			switch (iParam0)
			{
				case 12:
					return 11;
				
				case 16:
					return 29;
				
				case 20:
					return 5;
				
				case 22:
					return 2;
				
				case 27:
					return 2;
				
				case 32:
					return 10;
				
				case 33:
					return 6;
				
				case 36:
					return 11;
				
				case 37:
					return 28;
				
				case 38:
					return 15;
				
				case 39:
					return 4;
				
				case 59:
					return 54;
				
				case 61:
					return -1;
				
				case 62:
					return 51;
				
				case 63:
					return 56;
				
				case 64:
					return 56;
				
				case 65:
					return 55;
				
				case 68:
					return 50;
				
				case 69:
					return 51;
				
				case 73:
					return 72;
				
				case 76:
					return 74;
				
				case 79:
					return 75;
				
				case 81:
					return 75;
				
				case 82:
					return 80;
				
				case 83:
					return 80;
				
				case 89:
					return 88;
				
				case 91:
					return 90;
				
				case 92:
					return 90;
				
				case 104:
					return 103;
				
				case 106:
					return 105;
				
				case 108:
					return 107;
				
				case 109:
					return 107;
				
				case 112:
					return 111;
				
				case 116:
					return 113;
				
				case 124:
					return 123;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 59:
					return 54;
				
				case 104:
					return 103;
				
				case 33:
					return 6;
				
				case 124:
					return 123;
				
				case 108:
					return 107;
				
				case 109:
					return 107;
				
				case 112:
					return 111;
				
				case 73:
					return 72;
				
				case 81:
					return 75;
				
				case 79:
					return 75;
				
				case 116:
					return 113;
				
				case 82:
					return 80;
				
				case 76:
					return 74;
				
				case 94:
					return 93;
				
				case 63:
					return 56;
				
				case 64:
					return 56;
				
				case 106:
					return 105;
				
				case 32:
					return 10;
				
				case 62:
					return 51;
				
				case 69:
					return 51;
				
				case 65:
					return 55;
				
				case 89:
					return 88;
				
				case 67:
					return 60;
				
				case 12:
					return 11;
				
				case 36:
					return 11;
				
				case 38:
					return 15;
				
				case 68:
					return 50;
				
				case 91:
					return 90;
				
				case 20:
					return 5;
				
				case 22:
					return 2;
				
				case 27:
					return 2;
				
				case 39:
					return 4;
				
				case 37:
					return 28;
				
				case 29:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_429(var uParam0)
{
	if (*uParam0 >= func_452())
	{
		*uParam0 = -1;
	}
}

float func_430(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (Global_1316784)
	{
		case 0:
		case 1:
		case 3:
			switch (iParam0)
			{
				case 34:
					return 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 34:
					return 0f;
				
				case 119:
					return 0f;
				
				default:
			}
			break;
	}
	if (Global_1316777)
	{
		switch (Global_1316784)
		{
			case 0:
				switch (iParam0)
				{
					case 7:
						return 270f;
					
					case 21:
						return 270f;
					
					case 23:
						return 180f;
					
					case 24:
						return 180f;
					
					case 31:
						return 270f;
					
					case 35:
						return 246.8739f;
					
					case 100:
						return 290.85f;
					
					case 119:
						return 296.0898f;
					
					case 120:
						return 307.45f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 7:
						return 46.2988f;
					
					case 21:
						return 37.4912f;
					
					case 23:
						return 28.2821f;
					
					case 24:
						return 66.6067f;
					
					case 31:
						return 75.8284f;
					
					case 35:
						return 155.9619f;
					
					case 100:
						return 316.4757f;
					
					case 119:
						return 267.6706f;
					
					case 120:
						return 251.2963f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 7:
						return 270f;
					
					case 21:
						return 46.2988f;
					
					case 23:
						return 37.4912f;
					
					case 24:
						return 28.2821f;
					
					case 31:
						return 270f;
					
					case 35:
						return 203.3489f;
					
					case 100:
						return 350.4f;
					
					case 120:
						return 307.45f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 7:
						return 270f;
					
					case 21:
						return 37.4912f;
					
					case 23:
						return 28.2821f;
					
					case 24:
						return 66.6067f;
					
					case 31:
						return 270f;
					
					case 35:
						return 215.97f;
					
					case 100:
						return 320.725f;
					
					case 119:
						return 155.9619f;
					
					case 120:
						return 307.45f;
					
					default:
				}
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (Global_1316786)
			{
				case 0:
				case 1:
					return 89.2f;
				
				case 2:
					return 104.3978f;
				
				case 3:
					return 104.3978f;
				
				case 4:
					if (Global_1316781)
					{
						return 47.16f;
					}
					break;
			}
			break;
		
		case 9:
			if (iParam1 == 6)
			{
				return -2.52f;
			}
			else
			{
				return 358f;
			}
			break;
		
		case 31:
			return 270f;
		
		case 35:
			return 246.8739f;
		
		case 39:
			if (Global_1316786 == 1)
			{
				return 157.4273f;
			}
			else if (Global_1316786 == 3)
			{
				return 99.5985f;
			}
			else
			{
				return func_434(iParam1);
			}
			break;
		
		case 41:
			if (Global_1316786 == 1)
			{
				return 167.9987f;
			}
			else if (Global_1316786 == 3)
			{
				return 258.5985f;
			}
			else
			{
				return 82.44f;
			}
			break;
		
		case 42:
			if (Global_1316786 == 1)
			{
				return -90f;
			}
			else if (Global_1316786 == 3)
			{
				return -111.6f;
			}
			else
			{
				return 299.399f;
			}
			break;
		
		case 43:
			return func_433();
		
		case 44:
			return func_432(iParam1);
		
		case 48:
			if (iParam1 == 6)
			{
				return -2.52f;
			}
			else
			{
				return 356.199f;
			}
			break;
		
		case 49:
			if (iParam1 == 6)
			{
				return 140.04f;
			}
			else
			{
				return 141.798f;
			}
			break;
	}
	switch (Global_1316788)
	{
		case 0:
			switch (iParam0)
			{
				case 146:
					if (iParam1 == 6)
					{
						return 278.399f;
					}
					else if (iParam1 == 86)
					{
						return -85.25f;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 146:
					if (iParam1 == 6)
					{
						return 278.399f;
					}
					else if (iParam1 == 86)
					{
						return -85.25f;
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 146:
					if (iParam1 == 6)
					{
						return 278.399f;
					}
					else if (iParam1 == 86)
					{
						return -85.25f;
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 146:
					if (iParam1 == 6)
					{
						return 278.399f;
					}
					else if (iParam1 == 86)
					{
						return -85.25f;
					}
					break;
			}
			break;
	}
	switch (Global_1316788)
	{
		case 0:
			switch (iParam0)
			{
				case 147:
					return -175f;
				
				case 148:
					return 26.798f;
				
				case 149:
					return 190.198f;
				
				case 150:
					return 222.797f;
				
				case 151:
					return 17.798f;
				
				case 152:
					return 100.198f;
				
				case 153:
					return 260.822f;
				
				case 154:
					return 79.822f;
				
				case 155:
					return 145.598f;
				
				case 156:
					return 7.399f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 147:
					return -175f;
				
				case 148:
					return 181.355f;
				
				case 149:
					return 3.3798f;
				
				case 150:
					return 7.399f;
				
				case 151:
					return 192.399f;
				
				case 152:
					return 4.199f;
				
				case 153:
					return 209.747f;
				
				case 154:
					return 141.047f;
				
				case 155:
					return 270f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 147:
					return -175f;
				
				case 148:
					return 5.374f;
				
				case 149:
					return 194.398f;
				
				case 150:
					return 250.523f;
				
				case 151:
					return 68.598f;
				
				case 152:
					return 357.997f;
				
				case 153:
					return 190.596f;
				
				case 154:
					return 86.7605f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 147:
					return -175f;
				
				default:
			}
			break;
	}
	switch (Global_1316790)
	{
		case 0:
			switch (iParam0)
			{
				case 157:
					return 222.3817f;
				
				case 158:
					return 86.623f;
				
				case 159:
					return 272.199f;
				
				case 160:
					return 270f;
				
				case 161:
					return 261.4f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 157:
					return 222.3817f;
				
				case 158:
					return 345.5402f;
				
				case 159:
					return 99.1431f;
				
				case 160:
					return 115.628f;
				
				case 161:
					return 261.4f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 157:
					return 222.3817f;
				
				case 158:
					return 270f;
				
				case 159:
					return 99.1431f;
				
				case 160:
					return 182.3817f;
				
				case 161:
					return 293.932f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 157:
					return 222.3817f;
				
				default:
			}
			break;
	}
	return func_431(iParam0, iParam1);
}

float func_431(int iParam0, int iParam1)
{
	func_429(&iParam0);
	switch (Global_1316795)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 90f;
				
				case 2:
					return 44f;
				
				case 3:
					return 113.199f;
				
				case 4:
					return 144.72f;
				
				case 5:
					return 172.805f;
				
				case 6:
					return 98.1f;
				
				case 8:
					return 90f;
				
				case 10:
					return 146.6f;
				
				case 11:
					return 111.424f;
				
				case 12:
					return -102.76f;
				
				case 13:
					return 180f;
				
				case 14:
					return 63.6f;
				
				case 15:
					return 58.8f;
				
				case 16:
					return func_434(iParam1);
				
				case 17:
					return 72.8f;
				
				case 18:
					return 180f;
				
				case 19:
					return 358.6f;
				
				case 20:
					return func_434(iParam1);
				
				case 22:
					return func_434(iParam1);
				
				case 25:
					return 63.36f;
				
				case 26:
					return 120f;
				
				case 27:
					return func_434(iParam1);
				
				case 28:
					return 145.95f;
				
				case 29:
					return 49.825f;
				
				case 30:
					return 90.199f;
				
				case 32:
					return func_434(iParam1);
				
				case 33:
					return func_434(iParam1);
				
				case 36:
					return func_434(iParam1);
				
				case 37:
					return func_434(iParam1);
				
				case 38:
					return func_434(iParam1);
				
				case 40:
					return 224.999f;
				
				case 45:
					return 133.2557f;
				
				case 46:
					return 88.397f;
				
				case 47:
					return 314.4847f;
				
				case 50:
					return 119.6002f;
				
				case 51:
					return 82.82f;
				
				case 52:
					return 180f;
				
				case 53:
					return 90f;
				
				case 54:
					return -6.275f;
				
				case 55:
					return 37.44f;
				
				case 56:
					return 28.72f;
				
				case 57:
					return 180f;
				
				case 58:
					return 108.605f;
				
				case 59:
					return func_434(iParam1);
				
				case 60:
					return 61.5f;
				
				case 61:
					return -41.64f;
				
				case 62:
					return func_434(iParam1);
				
				case 63:
					return func_434(iParam1);
				
				case 64:
					return func_434(iParam1);
				
				case 65:
					return func_434(iParam1);
				
				case 66:
					return 265.399f;
				
				case 67:
					return 28.799f;
				
				case 68:
					return func_434(iParam1);
				
				case 69:
					return func_434(iParam1);
				
				case 70:
					return 270f;
				
				case 71:
					return 97.623f;
				
				case 73:
					return func_434(iParam1);
				
				case 74:
					return 191.52f;
				
				case 75:
					return 83.38f;
				
				case 76:
					return func_434(iParam1);
				
				case 77:
					return 176.398f;
				
				case 78:
					return 90f;
				
				case 79:
					return func_434(iParam1);
				
				case 80:
					return 161.28f;
				
				case 81:
					return func_434(iParam1);
				
				case 82:
					return func_434(iParam1);
				
				case 83:
					return func_434(iParam1);
				
				case 84:
					return 313.798f;
				
				case 85:
					return 120.7f;
				
				case 86:
					return -34.475f;
				
				case 87:
					return 153.41f;
				
				case 88:
					return 95f;
				
				case 89:
					return func_434(iParam1);
				
				case 90:
					return 123.5739f;
				
				case 91:
					return func_434(iParam1);
				
				case 92:
					return func_434(iParam1);
				
				case 93:
					return 74.724f;
				
				case 94:
					return 149.04f;
				
				case 95:
					return 118.999f;
				
				case 96:
					return 237.599f;
				
				case 97:
					return 336.45f;
				
				case 98:
					return 218.474f;
				
				case 99:
					return 292.273f;
				
				case 101:
					return 90f;
				
				case 102:
					return 270f;
				
				case 103:
					return 121.398f;
				
				case 104:
					return func_434(iParam1);
				
				case 105:
					return 122.4f;
				
				case 106:
					return func_434(iParam1);
				
				case 107:
					return 141.12f;
				
				case 108:
					return func_434(iParam1);
				
				case 109:
					return func_434(iParam1);
				
				case 110:
					return 180f;
				
				case 111:
					return 180.785f;
				
				case 112:
					return func_434(iParam1);
				
				case 113:
					return 72f;
				
				case 114:
					return 9.225f;
				
				case 115:
					return 192.575f;
				
				case 116:
					return func_434(iParam1);
				
				case 117:
					return 207.36f;
				
				case 118:
					return 102.1986f;
				
				case 121:
					return 270f;
				
				case 122:
					return 90f;
				
				case 123:
					return 45.36f;
				
				case 124:
					return func_434(iParam1);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					return 90f;
				
				case 2:
					return 123.275f;
				
				case 3:
					return 77.124f;
				
				case 4:
					return 144.72f;
				
				case 5:
					return 172.805f;
				
				case 6:
					return 36.425f;
				
				case 8:
					return 90f;
				
				case 10:
					return 84.35f;
				
				case 11:
					return 30.474f;
				
				case 12:
					return func_434(iParam1);
				
				case 13:
					return 274.125f;
				
				case 14:
					return 102.3f;
				
				case 15:
					return 94.075f;
				
				case 16:
					return 114.675f;
				
				case 17:
					return 72.8f;
				
				case 18:
					return 180f;
				
				case 19:
					return 358.6f;
				
				case 20:
					return func_434(iParam1);
				
				case 22:
					return func_434(iParam1);
				
				case 25:
					return 39.6f;
				
				case 26:
					return 120f;
				
				case 27:
					return func_434(iParam1);
				
				case 28:
					return 121.475f;
				
				case 29:
					return func_434(iParam1);
				
				case 30:
					return 90.199f;
				
				case 32:
					return func_434(iParam1);
				
				case 33:
					return func_434(iParam1);
				
				case 36:
					return func_434(iParam1);
				
				case 37:
					return func_434(iParam1);
				
				case 38:
					return func_434(iParam1);
				
				case 40:
					return 224.999f;
				
				case 45:
					return 133.2557f;
				
				case 46:
					return 88.397f;
				
				case 47:
					return 314.4847f;
				
				case 50:
					return 120.2502f;
				
				case 51:
					return 77.245f;
				
				case 53:
					return 90f;
				
				case 54:
					return 105.25f;
				
				case 55:
					return 144.89f;
				
				case 56:
					return 157.37f;
				
				case 57:
					return 331.75f;
				
				case 58:
					return 86.08f;
				
				case 59:
					return func_434(iParam1);
				
				case 60:
					return 0f;
				
				case 61:
					return -200.415f;
				
				case 62:
					return func_434(iParam1);
				
				case 63:
					return func_434(iParam1);
				
				case 64:
					return func_434(iParam1);
				
				case 65:
					return func_434(iParam1);
				
				case 66:
					return 270f;
				
				case 67:
					return func_434(iParam1);
				
				case 68:
					return func_434(iParam1);
				
				case 69:
					return func_434(iParam1);
				
				case 70:
					return 90f;
				
				case 71:
					return -89.19f;
				
				case 72:
					return 40.5f;
				
				case 73:
					return func_434(iParam1);
				
				case 74:
					return 193.795f;
				
				case 75:
					return 48.685f;
				
				case 76:
					return func_434(iParam1);
				
				case 77:
					return 180f;
				
				case 78:
					return 90f;
				
				case 79:
					return func_434(iParam1);
				
				case 80:
					return 164.83f;
				
				case 81:
					return func_434(iParam1);
				
				case 82:
					return func_434(iParam1);
				
				case 83:
					return 180f;
				
				case 84:
					return 270f;
				
				case 86:
					return -5.575f;
				
				case 87:
					return 172.285f;
				
				case 88:
					return 67.275f;
				
				case 89:
					return func_434(iParam1);
				
				case 90:
					return 143.1489f;
				
				case 91:
					return func_434(iParam1);
				
				case 92:
					return 101.315f;
				
				case 93:
					return 153.974f;
				
				case 94:
					return func_434(iParam1);
				
				case 95:
					return 116.099f;
				
				case 96:
					return 90f;
				
				case 97:
					return 288.75f;
				
				case 98:
					return 16.355f;
				
				case 99:
					return 322.598f;
				
				case 102:
					return 226.675f;
				
				case 103:
					return 89.073f;
				
				case 104:
					return func_434(iParam1);
				
				case 105:
					return 55.575f;
				
				case 106:
					return func_434(iParam1);
				
				case 107:
					return 159.795f;
				
				case 108:
					return func_434(iParam1);
				
				case 109:
					return func_434(iParam1);
				
				case 110:
					return 180f;
				
				case 111:
					return 235.835f;
				
				case 112:
					return func_434(iParam1);
				
				case 113:
					return 72f;
				
				case 114:
					return 167.85f;
				
				case 115:
					return 343.825f;
				
				case 116:
					return func_434(iParam1);
				
				case 117:
					return 134.1237f;
				
				case 118:
					return 94.0486f;
				
				case 121:
					return 180f;
				
				case 122:
					return 90f;
				
				case 123:
					return 28.61f;
				
				case 124:
					return func_434(iParam1);
				
				default:
			}
			break;
	}
	return -1f;
}

float func_432(int iParam0)
{
	switch (Global_1316786)
	{
		case 0:
			if (iParam0 == 69)
			{
				return -180f;
			}
			break;
		
		case 1:
			return 90f;
		
		case 2:
			return 95.76f;
		
		case 3:
			return -180f;
		
		case 4:
			if (Global_1316781)
			{
				if (func_486())
				{
					return 0f;
				}
				else
				{
					switch (Global_1316792)
					{
						case 0:
							return 90f;
						
						case 1:
						case 2:
						case 3:
							return 0f;
						
						case 4:
						case 5:
						case 6:
							return 0f;
						
						case 7:
							return -80f;
						}
					
					default:
				}
			}
			else
			{
				return -180f;
			}
			break;
	}
	return 0f;
}

float func_433()
{
	switch (Global_1316786)
	{
		case 0:
			return 90f;
		
		case 1:
			return 311.7981f;
		
		case 2:
			return 90f;
		
		case 3:
			return -180f;
		
		case 4:
			switch (Global_1316791)
			{
				case 0:
					return 90f;
				
				case 1:
					return 180f;
				
				case 2:
					return 180f;
				
				case 3:
					return 172f;
				
				case 4:
					return 90f;
				
				case 5:
					return 180f;
				
				case 6:
					return 88.438f;
				
				case 7:
					return 70.468f;
				
				case 8:
					return 271.7034f;
				
				default:
			}
			break;
	}
	return 0f;
}

float func_434(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 113.11f;
		
		case 39:
			return -0.4783f;
		
		case 47:
			return 15.56f;
		
		case 24:
			return -41.68f;
		
		case 35:
			return -73.09f;
		
		case 29:
			return 87.29f;
		
		case 32:
			return -31.36f;
		
		case 27:
			return -50.7f;
		
		case 31:
			return -68.87f;
		
		case 28:
			return 50.86f;
		
		default:
	}
	return 0f;
}

Vector3 func_435(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (Global_1316784)
	{
		case 0:
			switch (iParam0)
			{
				case 34:
					return -1604.66f, -3012.58f, -80f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 34:
					return -1604.66f, -3012.58f, -80f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 34:
				case 119:
					return -1604.66f, -3012.58f, -80f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 34:
					return -1604.66f, -3012.58f, -80f;
				
				default:
			}
			break;
	}
	if (Global_1316777)
	{
		switch (Global_1316784)
		{
			case 0:
				switch (iParam0)
				{
					case 7:
						return -1606.392f, -3013.346f, -77.8735f;
					
					case 21:
						return -1604.552f, -3011.278f, -77.956f;
					
					case 23:
						return -1598.286f, -3007.784f, -76.0051f;
					
					case 24:
						return -1599.23f, -3007.711f, -76.0051f;
					
					case 31:
						return -1606.449f, -3011.848f, -77.991f;
					
					case 35:
						return -1606.355f, -3011.065f, -77.7909f;
					
					case 100:
						return -1606.354f, -3014.1f, -77.8215f;
					
					case 119:
						return -1606.184f, -3014.767f, -77.8375f;
					
					case 120:
						return -1604.593f, -3013.845f, -77.8151f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 7:
						return -1596.926f, -3018.409f, -79.0061f;
					
					case 21:
						return -1598.194f, -3018.701f, -79.0061f;
					
					case 23:
						return -1598.899f, -3017.69f, -79.0061f;
					
					case 24:
						return -1590.624f, -3014.485f, -79.0061f;
					
					case 31:
						return -1595.099f, -3013.214f, -79.0061f;
					
					case 35:
						return -1599.416f, -3008.31f, -79.0061f;
					
					case 100:
						return -1604.47f, -3014.408f, -77.8151f;
					
					case 119:
						return -1606.465f, -3013.414f, -77.8151f;
					
					case 120:
						return -1606.306f, -3011.854f, -77.7984f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 7:
						return -1606.734f, -3013.353f, -77.8735f;
					
					case 21:
						return -1596.926f, -3018.409f, -79.0061f;
					
					case 23:
						return -1598.194f, -3018.701f, -79.0061f;
					
					case 24:
						return -1598.899f, -3017.69f, -79.0061f;
					
					case 31:
						return -1606.58f, -3011.875f, -77.991f;
					
					case 35:
						return -1605.806f, -3011.261f, -77.793f;
					
					case 100:
						return -1606.191f, -3014.125f, -77.8215f;
					
					case 120:
						return -1604.593f, -3014.017f, -77.8151f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 7:
						return -1606.462f, -3013.249f, -77.8735f;
					
					case 21:
						return -1598.194f, -3018.701f, -79.0061f;
					
					case 23:
						return -1598.899f, -3017.69f, -79.0061f;
					
					case 24:
						return -1590.624f, -3014.485f, -79.0061f;
					
					case 31:
						return -1606.449f, -3011.785f, -77.991f;
					
					case 35:
						return -1605.947f, -3010.969f, -77.793f;
					
					case 100:
						return -1606.035f, -3013.954f, -77.8215f;
					
					case 119:
						return -1599.416f, -3008.31f, -79.0061f;
					
					case 120:
						return -1604.593f, -3014.017f, -77.8151f;
					
					default:
				}
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (Global_1316786)
			{
				case 0:
				case 1:
					return -1595.808f, -3015.863f, -77.806f;
				
				case 2:
					return -1598.057f, -3011.655f, -79.0061f;
				
				case 3:
					return -1598.057f, -3011.655f, -79.0061f;
				
				case 4:
					if (Global_1316781)
					{
						switch (Global_1316795)
						{
							case 0:
								return -1599.948f, -3012.306f, -79.0059f;
							
							case 1:
								return -1599.948f, -3013.368f, -79.0059f;
							}
						
						default:
					}
					break;
			}
			break;
		
		case 9:
			if (iParam1 == 6)
			{
				return -1578.666f, -3016.553f, -78.972f;
			}
			else
			{
				return -1578.451f, -3016.493f, -79.082f;
			}
			break;
		
		case 39:
			if (Global_1316786 == 1)
			{
				return -1594.354f, -3008.868f, -80.0061f;
			}
			else if (Global_1316786 == 3)
			{
				return -1597.485f, -3012.238f, -79.0061f;
			}
			else
			{
				return func_440(iParam1);
			}
			break;
		
		case 41:
			if (Global_1316786 == 1)
			{
				return -1578.642f, -3017.878f, -79.006f;
			}
			else if (Global_1316786 == 3)
			{
				return -1583.323f, -3013.2f, -77.005f;
			}
			else if (iParam1 == 6)
			{
				return -1584.998f, -3013.158f, -76.012f;
			}
			else
			{
				return -1584.972f, -3013.211f, -75.924f;
			}
			break;
		
		case 42:
			if (Global_1316786 == 1)
			{
				return -1601.804f, -3013.341f, -78.77843f;
			}
			else if (Global_1316786 == 3)
			{
				return -1516.473f, -3042.204f, -79.7875f;
			}
			else
			{
				return -1605.667f, -3007.513f, -76.081f;
			}
			break;
		
		case 43:
			return func_438();
		
		case 44:
			return func_437();
		
		case 48:
			if (iParam1 == 6)
			{
				return -1576.875f, -3016.647f, -78.935f;
			}
			else
			{
				return -1576.951f, -3016.5f, -79.0059f;
			}
			break;
		
		case 49:
			if (iParam1 == 6)
			{
				return -1584.719f, -3015.336f, -76.012f;
			}
			else
			{
				return -1584.764f, -3015.29f, -76.081f;
			}
			break;
	}
	switch (Global_1316788)
	{
		case 0:
			switch (iParam0)
			{
				case 146:
					if (iParam1 == 6)
					{
						return -1572.239f, -3013.748f, -74.313f;
					}
					else if (iParam1 == 86)
					{
						return -1572.292f, -3013.121f, -74.64f;
					}
					else
					{
						return -1572.271f, -3013.729f, -74.306f;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 146:
					if (iParam1 == 6)
					{
						return -1572.239f, -3013.748f, -74.313f;
					}
					else if (iParam1 == 86)
					{
						return -1572.292f, -3013.121f, -74.64f;
					}
					else
					{
						return -1572.271f, -3013.729f, -74.306f;
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 146:
					if (iParam1 == 6)
					{
						return -1572.239f, -3013.748f, -74.313f;
					}
					else if (iParam1 == 86)
					{
						return -1572.292f, -3013.121f, -74.64f;
					}
					else
					{
						return -1572.271f, -3013.729f, -74.306f;
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 146:
					if (iParam1 == 6)
					{
						return -1572.239f, -3013.748f, -74.313f;
					}
					else if (iParam1 == 86)
					{
						return -1572.292f, -3013.121f, -74.64f;
					}
					else
					{
						return -1572.271f, -3013.729f, -74.306f;
					}
					break;
			}
			break;
	}
	switch (Global_1316788)
	{
		case 0:
			switch (iParam0)
			{
				case 147:
					return -1570.2f, -3002.593f, -76.197f;
				
				case 148:
					return -1570.294f, -3008.889f, -74.306f;
				
				case 149:
					return -1570.41f, -3007.983f, -74.306f;
				
				case 150:
					return Vector(-79.006f, -3003.019f, -1578.276f) + Vector(0.1f, 0f, 0f);
				
				case 151:
					return Vector(-79.006f, -3003.877f, -1578.01f) + Vector(0.1f, 0f, 0f);
				
				case 152:
					return Vector(-79.006f, -3003.228f, -1577.413f) + Vector(0.1f, 0f, 0f);
				
				case 153:
					return -1576.337f, -3003.017f, -78.906f;
				
				case 154:
					return -1575.505f, -3003.159f, -78.906f;
				
				case 155:
					return -1568.34f, -3002.723f, -76.106f;
				
				case 156:
					return -1568.479f, -3003.614f, -76.106f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 147:
					return -1570.2f, -3002.593f, -76.197f;
				
				case 148:
					return -1568.538f, -3002.843f, -76.106f;
				
				case 149:
					return Vector(-79.006f, -3003.433f, -1576.376f) + Vector(0.1f, 0f, 0f);
				
				case 150:
					return -1568.479f, -3003.614f, -76.106f;
				
				case 151:
					return -1568.251f, -3009.457f, -74.306f;
				
				case 152:
					return -1568.291f, -3010.29f, -74.306f;
				
				case 153:
					return -1576.759f, -3002.686f, -78.906f;
				
				case 154:
					return -1575.932f, -3002.764f, -78.906f;
				
				case 155:
					return -1570.564f, -3008.448f, -74.3612f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 147:
					return -1570.2f, -3002.593f, -76.197f;
				
				case 148:
					return -1578.125f, -3004.337f, -78.906f;
				
				case 149:
					return -1578.233f, -3003.49f, -78.906f;
				
				case 150:
					return -1576.212f, -3002.917f, -78.906f;
				
				case 151:
					return -1575.441f, -3003.009f, -78.906f;
				
				case 152:
					return -1570.309f, -3009.185f, -74.306f;
				
				case 153:
					return -1570.347f, -3008.238f, -74.306f;
				
				case 154:
					return -1568.138f, -3003.751f, -77.206f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 147:
					return -1570.2f, -3002.593f, -76.197f;
				
				default:
			}
			break;
	}
	switch (Global_1316790)
	{
		case 0:
			switch (iParam0)
			{
				case 157:
					return -1611.971f, -3009.217f, -79.202f;
				
				case 158:
					return -1609.225f, -3019.051f, -79.082f;
				
				case 159:
					return -1610.476f, -3019.137f, -79.082f;
				
				case 160:
					return -1608.705f, -3011.134f, -79.082f;
				
				case 161:
					return -1612.621f, -3011.208f, -79.2f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 157:
					return -1611.971f, -3009.217f, -79.202f;
				
				case 158:
					return -1611.225f, -3019.219f, -79.082f;
				
				case 159:
					return -1609.246f, -3018.693f, -78.972f;
				
				case 160:
					return -1611.74f, -3010.995f, -79.082f;
				
				case 161:
					return -1612.621f, -3011.208f, -79.2f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 157:
					return -1611.971f, -3009.217f, -79.202f;
				
				case 158:
					return -1608.542f, -3010.81f, -79.082f;
				
				case 159:
					return -1609.246f, -3018.693f, -78.972f;
				
				case 160:
					return -1610.782f, -3015.061f, -79.082f;
				
				case 161:
					return -1611.202f, -3016.077f, -79.082f;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 157:
					return -1611.971f, -3009.217f, -79.202f;
				
				default:
			}
			break;
	}
	return func_436(iParam0, iParam1);
}

Vector3 func_436(int iParam0, int iParam1)
{
	func_429(&iParam0);
	switch (Global_1316795)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return -1600.026f, -3011.433f, -79.006f;
				
				case 2:
					return -1599.484f, -3015.003f, -79.006f;
				
				case 3:
					return -1599.226f, -3009.996f, -79.006f;
				
				case 4:
					return -1597.858f, -3010.156f, -79.006f;
				
				case 5:
					return -1598.306f, -3008.335f, -79.006f;
				
				case 6:
					return -1589.347f, -3013.055f, -79.006f;
				
				case 8:
					return -1595.859f, -3013.515f, -79.006f;
				
				case 10:
					return -1594.318f, -3013.102f, -79.0135f;
				
				case 11:
					return -1596.98f, -3012.406f, -79.006f;
				
				case 12:
					return -0.4577f, 0.6838f, 0f;
				
				case 13:
					return -1579.819f, -3014.884f, -79.006f;
				
				case 14:
					return -1598.97f, -3011.468f, -79.006f;
				
				case 15:
					return -1597.684f, -3014.247f, -78.996f;
				
				case 16:
					return func_440(iParam1);
				
				case 17:
					return -1596.636f, -3011.024f, -79.006f;
				
				case 18:
					return -1596.083f, -3007.928f, -78.2081f;
				
				case 19:
					return -1598.524f, -3015.737f, -78.2102f;
				
				case 20:
					return func_440(iParam1);
				
				case 22:
					return func_440(iParam1);
				
				case 25:
					return -1596.593f, -3015.137f, -79.006f;
				
				case 26:
					return -1599.818f, -3009.345f, -79.006f;
				
				case 27:
					return func_440(iParam1);
				
				case 28:
					return -1599.998f, -3010.461f, -79.006f;
				
				case 29:
					return -1598.917f, -3013.345f, -79.006f;
				
				case 30:
					return -1599.986f, -3013.347f, -79.006f;
				
				case 32:
					return func_440(iParam1);
				
				case 33:
					return func_440(iParam1);
				
				case 36:
					return func_440(iParam1);
				
				case 37:
					return func_440(iParam1);
				
				case 38:
					return func_440(iParam1);
				
				case 40:
					return -1612.739f, -3005.532f, -79.006f;
				
				case 45:
					return -1594.845f, -3004.415f, -76.0051f;
				
				case 46:
					return -1590.476f, -3010.862f, -79.082f;
				
				case 47:
					return -1605.289f, -3017.847f, -78.4049f;
				
				case 50:
					return -1594.182f, -3009.279f, -79.006f;
				
				case 51:
					return -1591.673f, -3012.212f, -79.006f;
				
				case 52:
					return -1603.236f, -3004.793f, -79.006f;
				
				case 53:
					return -1591.088f, -3014.189f, -76.081f;
				
				case 54:
					return -1586.373f, -3012.294f, -79.006f;
				
				case 55:
					return -1594.636f, -3014.871f, -79.006f;
				
				case 56:
					return -1592.246f, -3014.996f, -79.006f;
				
				case 57:
					return -1577.709f, -3014.855f, -79.006f;
				
				case 58:
					return -1575.571f, -3012.931f, -79.006f;
				
				case 59:
					return func_440(iParam1);
				
				case 60:
					return -1596.957f, -3016.546f, -79.006f;
				
				case 61:
					return -1576.171f, -3013.313f, -79f;
				
				case 62:
					return func_440(iParam1);
				
				case 63:
					return func_440(iParam1);
				
				case 64:
					return func_440(iParam1);
				
				case 65:
					return func_440(iParam1);
				
				case 66:
					return -1586.802f, -3011.71f, -75.924f;
				
				case 67:
					return -1599.681f, -3016.968f, -79.006f;
				
				case 68:
					return func_440(iParam1);
				
				case 69:
					return func_440(iParam1);
				
				case 70:
					return -1601.582f, -3001.909f, -76.3115f;
				
				case 71:
					return -1600.265f, -3001.73f, -75.809f;
				
				case 72:
					return -1588.771f, -3018.274f, -76.081f;
				
				case 73:
					return func_440(iParam1);
				
				case 74:
					return -1591.34f, -3005.598f, -76.081f;
				
				case 75:
					return -1588.929f, -3010.517f, -76.081f;
				
				case 76:
					return func_440(iParam1);
				
				case 77:
					return -1593.606f, -3007.787f, -76.0051f;
				
				case 78:
					return -1591.093f, -3009.976f, -75.924f;
				
				case 79:
					return func_440(iParam1);
				
				case 80:
					return -1587.631f, -3006.97f, -75.809f;
				
				case 81:
					return func_440(iParam1);
				
				case 82:
					return func_440(iParam1);
				
				case 83:
					return func_440(iParam1);
				
				case 84:
					return -1612.776f, -3007.977f, -79.006f;
				
				case 85:
					return -1611.939f, -3006.888f, -79.006f;
				
				case 86:
					return -1576.775f, -3010.154f, -79.006f;
				
				case 87:
					return -1576.28f, -3009.415f, -79.006f;
				
				case 88:
					return -1595.623f, -3012.119f, -79.006f;
				
				case 89:
					return func_440(iParam1);
				
				case 90:
					return -1595.475f, -3009.902f, -79.006f;
				
				case 91:
					return func_440(iParam1);
				
				case 92:
					return func_440(iParam1);
				
				case 93:
					return -1600.525f, -3006.467f, -79.006f;
				
				case 94:
					return -1600.71f, -3005.546f, -79.006f;
				
				case 95:
					return -1578.623f, -3012.606f, -79.006f;
				
				case 96:
					return -1579.493f, -3012.47f, -79.006f;
				
				case 97:
					return -1579.187f, -3013.201f, -79.006f;
				
				case 98:
					return -1586.238f, -3009.107f, -76.206f;
				
				case 99:
					return -1586.793f, -3015.48f, -75.924f;
				
				case 101:
					return -1575.856f, -3014.947f, -79.006f;
				
				case 102:
					return -1586.745f, -3014.489f, -76.206f;
				
				case 103:
					return -1589.066f, -3011.339f, -79.0059f;
				
				case 104:
					return func_440(iParam1);
				
				case 105:
					return -1592.432f, -3009.479f, -79.006f;
				
				case 106:
					return func_440(iParam1);
				
				case 107:
					return -1594.814f, -3003.061f, -75.881f;
				
				case 108:
					return func_440(iParam1);
				
				case 109:
					return func_440(iParam1);
				
				case 110:
					return -1601.037f, -3007.83f, -76.0051f;
				
				case 111:
					return -1597.571f, -3001.864f, -75.881f;
				
				case 112:
					return func_440(iParam1);
				
				case 113:
					return -1590.936f, -3012.652f, -75.924f;
				
				case 114:
					return -1589.17f, -3015.665f, -75.924f;
				
				case 115:
					return -1589.277f, -3014.801f, -76.081f;
				
				case 116:
					return func_440(iParam1);
				
				case 117:
					return -1599.418f, -3003.091f, -75.7104f;
				
				case 118:
					return -1594.01f, -3010.673f, -79.0819f;
				
				case 121:
					return -1589.02f, -3006.418f, -79.082f;
				
				case 122:
					return -1593.525f, -3011.667f, -79.082f;
				
				case 123:
					return -1588.086f, -3017.538f, -79.082f;
				
				case 124:
					return func_440(iParam1);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					return -1600.226f, -3012.482f, -79.006f;
				
				case 2:
					return -1599.139f, -3009.726f, -79.006f;
				
				case 3:
					return -1599.114f, -3014.635f, -79.006f;
				
				case 4:
					return -1597.858f, -3010.156f, -79.006f;
				
				case 5:
					return -1598.306f, -3008.335f, -79.006f;
				
				case 6:
					return -1587.891f, -3014.03f, -79.006f;
				
				case 8:
					return -1595.543f, -3012.201f, -79.006f;
				
				case 10:
					return -1593.74f, -3013.647f, -79.0135f;
				
				case 11:
					return -1597.701f, -3014.577f, -79.006f;
				
				case 12:
					return func_440(iParam1);
				
				case 13:
					return -1581.606f, -3014.222f, -79.006f;
				
				case 14:
					return -1598.554f, -3011.312f, -79.006f;
				
				case 15:
					return -1597.457f, -3011.835f, -78.996f;
				
				case 16:
					return -1598.895f, -3012.523f, -79.006f;
				
				case 17:
					return -1596.465f, -3012.198f, -79.006f;
				
				case 18:
					return -1596.083f, -3007.928f, -78.2081f;
				
				case 19:
					return -1598.524f, -3015.737f, -78.2102f;
				
				case 20:
					return func_440(iParam1);
				
				case 22:
					return func_440(iParam1);
				
				case 25:
					return -1599.802f, -3016.384f, -79.006f;
				
				case 26:
					return -1599.957f, -3010.344f, -79.006f;
				
				case 27:
					return func_440(iParam1);
				
				case 28:
					return -1599.998f, -3011.388f, -79.006f;
				
				case 29:
					return func_440(iParam1);
				
				case 30:
					return -1599.986f, -3014.42f, -79.006f;
				
				case 32:
					return func_440(iParam1);
				
				case 33:
					return func_440(iParam1);
				
				case 36:
					return func_440(iParam1);
				
				case 37:
					return func_440(iParam1);
				
				case 38:
					return func_440(iParam1);
				
				case 40:
					return -1612.739f, -3005.532f, -79.006f;
				
				case 45:
					return -1594.845f, -3004.415f, -76.0051f;
				
				case 46:
					return -1590.476f, -3010.862f, -79.082f;
				
				case 47:
					return -1605.289f, -3017.847f, -78.4049f;
				
				case 50:
					return -1595.389f, -3010.908f, -79.006f;
				
				case 51:
					return -1593.349f, -3011.342f, -79.006f;
				
				case 52:
					return -1590.499f, -3019.168f, -79.0135f;
				
				case 53:
					return -1591.038f, -3017.743f, -76.081f;
				
				case 54:
					return -1586.175f, -3011.163f, -79.006f;
				
				case 55:
					return -1595.626f, -3013.306f, -79.006f;
				
				case 56:
					return -1592.246f, -3009.296f, -79.006f;
				
				case 57:
					return -1577.845f, -3014.897f, -79.041f;
				
				case 58:
					return -1580.757f, -3014.173f, -79.006f;
				
				case 59:
					return func_440(iParam1);
				
				case 60:
					return -1597.647f, -3017.154f, -79.006f;
				
				case 61:
					return -1577.509f, -3014.265f, -79f;
				
				case 62:
					return func_440(iParam1);
				
				case 63:
					return func_440(iParam1);
				
				case 64:
					return func_440(iParam1);
				
				case 65:
					return func_440(iParam1);
				
				case 66:
					return -1586.839f, -3010.966f, -76.289f;
				
				case 67:
					return func_440(iParam1);
				
				case 68:
					return func_440(iParam1);
				
				case 69:
					return func_440(iParam1);
				
				case 70:
					return -1593.311f, -3001.194f, -76.3165f;
				
				case 71:
					return -1594.678f, -3001.308f, -76.0065f;
				
				case 72:
					return -1595.844f, -3017.707f, -77.8485f;
				
				case 73:
					return func_440(iParam1);
				
				case 74:
					return -1590.932f, -3006.136f, -76.081f;
				
				case 75:
					return -1588.238f, -3017.236f, -76.081f;
				
				case 76:
					return func_440(iParam1);
				
				case 77:
					return -1593.606f, -3007.827f, -76.0051f;
				
				case 78:
					return -1591.013f, -3009.515f, -75.924f;
				
				case 79:
					return func_440(iParam1);
				
				case 80:
					return -1589.116f, -3008.218f, -75.809f;
				
				case 81:
					return func_440(iParam1);
				
				case 82:
					return func_440(iParam1);
				
				case 83:
					return -1586.767f, -3006.886f, -75.999f;
				
				case 84:
					return -1612.858f, -3006.614f, -79.006f;
				
				case 85:
					return -1608.028f, -3008.392f, -79.006f;
				
				case 86:
					return -1577.631f, -3007.808f, -79.006f;
				
				case 87:
					return -1577.567f, -3007.017f, -79.006f;
				
				case 88:
					return -1596.522f, -3014.504f, -79.006f;
				
				case 89:
					return func_440(iParam1);
				
				case 90:
					return -1595.151f, -3008.743f, -79.006f;
				
				case 91:
					return func_440(iParam1);
				
				case 92:
					return -1596.649f, -3009.792f, -79.006f;
				
				case 93:
					return -1601.306f, -3006.176f, -79.006f;
				
				case 94:
					return func_440(iParam1);
				
				case 95:
					return -1578.244f, -3012.205f, -79.006f;
				
				case 96:
					return -1575.89f, -3014.896f, -79.006f;
				
				case 97:
					return -1578.925f, -3012.486f, -79.006f;
				
				case 98:
					return -1589.265f, -3010.957f, -76.206f;
				
				case 99:
					return -1586.444f, -3016.23f, -76.284f;
				
				case 101:
					return -1581.965f, -3012.342f, -79.006f;
				
				case 102:
					return -1589.609f, -3010.094f, -76.206f;
				
				case 103:
					return -1589.079f, -3011.83f, -79.0059f;
				
				case 104:
					return func_440(iParam1);
				
				case 105:
					return -1592.724f, -3014.541f, -79.006f;
				
				case 106:
					return func_440(iParam1);
				
				case 107:
					return -1596.854f, -3001.708f, -75.881f;
				
				case 108:
					return func_440(iParam1);
				
				case 109:
					return func_440(iParam1);
				
				case 110:
					return -1601.037f, -3007.753f, -76.0051f;
				
				case 111:
					return -1599.766f, -3003.076f, -75.881f;
				
				case 112:
					return func_440(iParam1);
				
				case 113:
					return -1590.936f, -3013.347f, -75.924f;
				
				case 114:
					return -1589.287f, -3014.372f, -75.924f;
				
				case 115:
					return -1589.371f, -3015.429f, -76.081f;
				
				case 116:
					return func_440(iParam1);
				
				case 117:
					return -1594.89f, -3003.205f, -76.0329f;
				
				case 118:
					return -1592.246f, -3011.705f, -79.0819f;
				
				case 121:
					return -1587.183f, -3004.705f, -79.002f;
				
				case 122:
					return -1591.851f, -3012.904f, -79.082f;
				
				case 123:
					return -1589.595f, -3017.271f, -79.082f;
				
				case 124:
					return func_440(iParam1);
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_437()
{
	switch (Global_1316786)
	{
		case 0:
			return -1592.441f, -3005.082f, -76.02843f;
		
		case 1:
			return -1586.673f, -3012.85f, -76.03334f;
		
		case 2:
			return -1604.443f, -3012.558f, -77.8f;
		
		case 3:
			return -1595.686f, -2999.125f, -76.307f;
		
		case 4:
			if (Global_1316781)
			{
				if (func_486())
				{
					return -1602.464f, -3012.583f, -80f;
				}
				else
				{
					switch (Global_1316792)
					{
						case 0:
							return -1595.124f, -3018.683f, -80f;
						
						case 1:
							return -1602.464f, -3012.583f, -80f;
						
						case 2:
							return -1604.906f, -3012.583f, -80f;
						
						case 3:
							return -1604.664f, -3012.583f, -80f;
						
						case 4:
							return -1604.664f, -3015.983f, -80f;
						
						case 5:
						case 6:
							return -1604.664f, -3012.583f, -80f;
						
						case 7:
							return -1615.864f, -3036.183f, -80f;
						}
					
					default:
				}
			}
			else
			{
				return -1595.686f, -2999.125f, -76.307f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_438()
{
	switch (Global_1316786)
	{
		case 0:
			return -1586.656f, -3012.801f, -75.976f;
		
		case 1:
			return -1596.719f, -3010.698f, -79.0061f;
		
		case 2:
			return -1590.882f, -3012.506f, -75.99584f;
		
		case 3:
			return -1598.694f, -3007.746f, -76.008f;
		
		case 4:
			switch (Global_1316791)
			{
				case 0:
					if (Global_262145.f_8930)
					{
						return -1607.889f, -3014.886f, -75.225f;
					}
					else
					{
						return -1607.889f, -3019.1f, -75.225f;
					}
					break;
				
				case 1:
					return -1619.731f, -3010.966f, -75.602f;
				
				case 2:
					return -1609.693f, -3010.836f, -75.725f;
				
				case 3:
					if (func_439(func_6()))
					{
						return -1603.334f, -3007.744f, -76f;
					}
					else
					{
						return -1603.334f, -3007.754f, -76f;
					}
					break;
				
				case 4:
					return -1590.982f, -3010.904f, -76f;
				
				case 5:
					return -1598.817f, -2999.153f, -76.3375f;
				
				case 6:
					return -1594.358f, -3011.309f, -79.006f;
				
				case 7:
					return -1593.859f, -3014.669f, -79.006f;
				
				case 8:
					return -1605.619f, -3012.629f, -77.7909f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_439(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 4);
}

Vector3 func_440(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 0.5589f, 0.4361f, 0f;
		
		case 39:
			return -0.5463f, 0.5143f, 0f;
		
		case 47:
			return 0.8258f, 0.1277f, 0f;
		
		case 24:
			return -0.6732f, -0.2262f, 0f;
		
		case 35:
			return -0.6571f, 0.2906f, 0f;
		
		case 29:
			return 0.5387f, 0.7321f, 0f;
		
		case 32:
			return -0.574f, 0.1744f, 0f;
		
		case 27:
			return -0.6605f, 0.3297f, 0f;
		
		case 31:
			return -0.6257f, 0.2432f, 0f;
		
		case 28:
			return 0.6498f, 0.4307f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_441(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
	}
	iVar0 = iParam0;
	*uParam2 = 0;
	func_442(iParam0, uParam1, uParam2);
	iVar1 = *uParam1;
	switch (Global_1316788)
	{
		case 0:
			switch (iVar0)
			{
				case 146:
					iVar1 = 86;
					break;
				
				case 147:
					iVar1 = 0;
					break;
				
				case 148:
					iVar1 = 1;
					break;
				
				case 149:
					iVar1 = 2;
					break;
				
				case 150:
					iVar1 = 2;
					break;
				
				case 151:
					iVar1 = 1;
					break;
				
				case 152:
					iVar1 = 61;
					break;
				
				case 153:
					iVar1 = 2;
					break;
				
				case 154:
					iVar1 = 2;
					break;
				
				case 155:
					iVar1 = 2;
					break;
				
				case 156:
					iVar1 = 1;
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 146:
					iVar1 = 86;
					break;
				
				case 147:
					iVar1 = 0;
					break;
				
				case 148:
					iVar1 = 2;
					break;
				
				case 149:
					iVar1 = 1;
					break;
				
				case 150:
					iVar1 = 2;
					break;
				
				case 151:
					iVar1 = 2;
					break;
				
				case 152:
					iVar1 = 1;
					break;
				
				case 153:
					iVar1 = 2;
					break;
				
				case 154:
					iVar1 = 3;
					break;
				
				case 155:
					iVar1 = 66;
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 146:
					iVar1 = 86;
					break;
				
				case 147:
					iVar1 = 0;
					break;
				
				case 148:
					iVar1 = 1;
					break;
				
				case 149:
					iVar1 = 2;
					break;
				
				case 150:
					iVar1 = 2;
					break;
				
				case 151:
					iVar1 = 1;
					break;
				
				case 152:
					iVar1 = 2;
					break;
				
				case 153:
					iVar1 = 1;
					break;
				
				case 154:
					iVar1 = 66;
					break;
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 146:
					iVar1 = 86;
					break;
				
				case 147:
					iVar1 = 0;
					break;
			}
			break;
	}
	switch (Global_1316790)
	{
		case 0:
			switch (iVar0)
			{
				case 157:
					iVar1 = 78;
					break;
				
				case 158:
					iVar1 = 80;
					break;
				
				case 159:
					iVar1 = 3;
					break;
				
				case 160:
					iVar1 = 71;
					break;
				
				case 161:
					iVar1 = 79;
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 157:
					iVar1 = 78;
					break;
				
				case 158:
					iVar1 = 3;
					break;
				
				case 159:
					iVar1 = 81;
					break;
				
				case 160:
					iVar1 = 1;
					break;
				
				case 161:
					iVar1 = 79;
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 157:
					iVar1 = 78;
					break;
				
				case 158:
					iVar1 = 114;
					break;
				
				case 159:
					iVar1 = 81;
					break;
				
				case 160:
					iVar1 = 1;
					break;
				
				case 161:
					iVar1 = 2;
					break;
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 157:
					iVar1 = 78;
					break;
			}
			break;
	}
	switch (Global_1316793)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					if (Global_1316786 != 4)
					{
						iVar1 = 60;
					}
					else if (Global_1316781)
					{
						iVar1 = 18;
					}
					break;
				
				case 18:
				case 19:
					if (Global_1316778)
					{
						iVar1 = 67;
					}
					break;
				
				case 39:
					if (Global_1316786 == 1)
					{
						iVar1 = 75;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 74;
					}
					else
					{
						iVar1 = 32;
					}
					break;
				
				case 41:
					if (Global_1316786 == 1)
					{
						iVar1 = 77;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 77;
					}
					else
					{
						iVar1 = 6;
					}
					break;
				
				case 42:
					if (Global_1316786 == 1)
					{
						iVar1 = 72;
					}
					else if (Global_1316786 == 2)
					{
						iVar1 = 76;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				
				case 43:
					func_61(&iVar1, uParam2);
					break;
				
				case 44:
					func_60(&iVar1);
					break;
				
				case 45:
				case 46:
					if (Global_1316774)
					{
						iVar1 = 0;
						iVar1 = 0;
					}
					break;
				
				case 48:
				case 49:
					if (Global_1316775)
					{
						iVar1 = 6;
						iVar1 = 6;
					}
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					if (Global_1316786 != 4)
					{
						iVar1 = 60;
					}
					else if (Global_1316781)
					{
						iVar1 = 18;
					}
					break;
				
				case 18:
				case 19:
					if (Global_1316778)
					{
						iVar1 = 67;
					}
					break;
				
				case 39:
					if (Global_1316786 == 1)
					{
						iVar1 = 75;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 74;
					}
					else
					{
						iVar1 = 32;
					}
					break;
				
				case 41:
					if (Global_1316786 == 1)
					{
						iVar1 = 77;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 77;
					}
					else
					{
						iVar1 = 6;
					}
					break;
				
				case 42:
					if (Global_1316786 == 1)
					{
						iVar1 = 72;
					}
					else if (Global_1316786 == 2)
					{
						iVar1 = 76;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				
				case 43:
					func_61(&iVar1, uParam2);
					break;
				
				case 44:
					func_60(&iVar1);
					break;
				
				case 45:
				case 46:
					if (Global_1316774)
					{
						iVar1 = 0;
						iVar1 = 0;
					}
					break;
				
				case 48:
				case 49:
					if (Global_1316775)
					{
						iVar1 = 6;
						iVar1 = 6;
					}
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					if (Global_1316786 != 4)
					{
						iVar1 = 60;
					}
					else if (Global_1316781)
					{
						iVar1 = 18;
					}
					break;
				
				case 18:
				case 19:
					if (Global_1316778)
					{
						iVar1 = 67;
					}
					break;
				
				case 39:
					if (Global_1316786 == 1)
					{
						iVar1 = 75;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 74;
					}
					else
					{
						iVar1 = 32;
					}
					break;
				
				case 41:
					if (Global_1316786 == 1)
					{
						iVar1 = 77;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 77;
					}
					else
					{
						iVar1 = 6;
					}
					break;
				
				case 42:
					if (Global_1316786 == 1)
					{
						iVar1 = 72;
					}
					else if (Global_1316786 == 2)
					{
						iVar1 = 76;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				
				case 43:
					func_61(&iVar1, uParam2);
					break;
				
				case 44:
					func_60(&iVar1);
					break;
				
				case 45:
				case 46:
					if (Global_1316774)
					{
						iVar1 = 0;
						iVar1 = 0;
					}
					break;
				
				case 48:
				case 49:
					if (Global_1316775)
					{
						iVar1 = 6;
						iVar1 = 6;
					}
					break;
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 0:
					if (Global_1316786 != 4)
					{
						iVar1 = 60;
					}
					else if (Global_1316781)
					{
						iVar1 = 18;
					}
					break;
				
				case 18:
				case 19:
					if (Global_1316778)
					{
						iVar1 = 67;
					}
					break;
				
				case 39:
					if (Global_1316786 == 1)
					{
						iVar1 = 75;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 74;
					}
					else
					{
						iVar1 = 32;
					}
					break;
				
				case 41:
					if (Global_1316786 == 1)
					{
						iVar1 = 77;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 77;
					}
					else
					{
						iVar1 = 6;
					}
					break;
				
				case 42:
					if (Global_1316786 == 1)
					{
						iVar1 = 72;
					}
					else if (Global_1316786 == 2)
					{
						iVar1 = 76;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				
				case 43:
					func_61(&iVar1, uParam2);
					break;
				
				case 44:
					func_60(&iVar1);
					break;
				
				case 45:
				case 46:
					if (Global_1316774)
					{
						iVar1 = 0;
					}
					break;
				
				case 48:
				case 49:
					if (Global_1316775)
					{
						iVar1 = 6;
						iVar1 = 6;
					}
					break;
			}
			break;
		
		case 4:
			switch (iVar0)
			{
				case 0:
					if (Global_1316786 != 4)
					{
						iVar1 = 60;
					}
					else if (Global_1316781)
					{
						iVar1 = 18;
					}
					break;
				
				case 18:
				case 19:
					if (Global_1316778)
					{
						iVar1 = 67;
					}
					break;
				
				case 39:
					if (Global_1316786 == 1)
					{
						iVar1 = 75;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 74;
					}
					else
					{
						iVar1 = 32;
					}
					break;
				
				case 41:
					if (Global_1316786 == 1)
					{
						iVar1 = 77;
					}
					else if (Global_1316786 == 3)
					{
						iVar1 = 77;
					}
					else
					{
						iVar1 = 6;
					}
					break;
				
				case 42:
					if (Global_1316786 == 1)
					{
						iVar1 = 72;
					}
					else if (Global_1316786 == 2)
					{
						iVar1 = 76;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				
				case 43:
					func_61(&iVar1, uParam2);
					break;
				
				case 44:
					func_60(&iVar1);
					break;
				
				case 45:
				case 46:
					if (Global_1316774)
					{
						iVar1 = 0;
					}
					break;
				
				case 48:
				case 49:
					if (Global_1316775)
					{
						iVar1 = 6;
					}
					break;
			}
			break;
	}
	switch (Global_1316784)
	{
		case 0:
			switch (iVar0)
			{
				case 34:
					iVar1 = 7;
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 34:
					iVar1 = 8;
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 34:
					iVar1 = 9;
					break;
				
				case 119:
					iVar1 = 10;
					break;
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 34:
					iVar1 = 11;
					break;
			}
			break;
	}
	if (Global_1316777)
	{
		switch (Global_1316784)
		{
			case 0:
				switch (iVar0)
				{
					case 7:
						iVar1 = 96;
						break;
					
					case 21:
						iVar1 = 18;
						break;
					
					case 23:
						iVar1 = 100;
						break;
					
					case 24:
						iVar1 = 99;
						break;
					
					case 31:
						iVar1 = 97;
						break;
					
					case 35:
						iVar1 = 98;
						break;
					
					case 100:
						iVar1 = 95;
						break;
					
					case 119:
						iVar1 = 20;
						break;
					
					case 120:
						iVar1 = 21;
						break;
				}
				break;
			
			case 1:
				switch (iVar0)
				{
					case 7:
						iVar1 = 18;
						break;
					
					case 21:
						iVar1 = 13;
						break;
					
					case 23:
						iVar1 = 20;
						break;
					
					case 24:
						iVar1 = 21;
						break;
					
					case 31:
						iVar1 = 14;
						break;
					
					case 35:
						iVar1 = 22;
						break;
					
					case 100:
						iVar1 = 104;
						break;
					
					case 119:
						iVar1 = 12;
						break;
					
					case 120:
						iVar1 = 19;
						break;
				}
				break;
			
			case 2:
				switch (iVar0)
				{
					case 7:
						iVar1 = 93;
						break;
					
					case 21:
						iVar1 = 13;
						break;
					
					case 23:
						iVar1 = 20;
						break;
					
					case 24:
						iVar1 = 15;
						break;
					
					case 31:
						iVar1 = 94;
						break;
					
					case 35:
						iVar1 = 22;
						break;
					
					case 100:
						iVar1 = 19;
						break;
					
					case 120:
						iVar1 = 92;
						break;
				}
				break;
			
			case 3:
				switch (iVar0)
				{
					case 7:
						iVar1 = 102;
						break;
					
					case 21:
						iVar1 = 13;
						break;
					
					case 23:
						iVar1 = 22;
						break;
					
					case 24:
						iVar1 = 23;
						break;
					
					case 31:
						iVar1 = 103;
						break;
					
					case 35:
						iVar1 = 21;
						break;
					
					case 100:
						iVar1 = 19;
						break;
					
					case 119:
						iVar1 = 12;
						break;
					
					case 120:
						iVar1 = 101;
						break;
				}
				break;
			}
	}
	*uParam1 = iVar1;
}

void func_442(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 0;
	iVar0 = -1;
	func_429(&iParam0);
	switch (Global_1316795)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					iVar0 = 19;
					break;
				
				case 2:
					iVar0 = 25;
					break;
				
				case 3:
					iVar0 = 21;
					break;
				
				case 4:
					iVar0 = 34;
					break;
				
				case 5:
					iVar0 = 33;
					break;
				
				case 6:
					iVar0 = 33;
					break;
				
				case 8:
					iVar0 = 20;
					break;
				
				case 9:
					iVar0 = 6;
					break;
				
				case 10:
					iVar0 = 34;
					break;
				
				case 11:
					iVar0 = 30;
					break;
				
				case 12:
					iVar0 = 35;
					break;
				
				case 13:
					iVar0 = 2;
					break;
				
				case 14:
					iVar0 = 20;
					break;
				
				case 15:
					iVar0 = 37;
					break;
				
				case 16:
					iVar0 = 43;
					break;
				
				case 17:
					iVar0 = 23;
					break;
				
				case 20:
					iVar0 = 27;
					break;
				
				case 22:
					iVar0 = 31;
					break;
				
				case 25:
					iVar0 = 13;
					break;
				
				case 26:
					iVar0 = func_62(iParam0);
					*uParam2 = 1;
					break;
				
				case 27:
					iVar0 = 28;
					break;
				
				case 28:
					iVar0 = 26;
					break;
				
				case 29:
					iVar0 = 42;
					break;
				
				case 30:
					iVar0 = 12;
					break;
				
				case 32:
					iVar0 = 32;
					break;
				
				case 33:
					iVar0 = 27;
					*uParam2 = 1;
					break;
				
				case 36:
					iVar0 = 29;
					break;
				
				case 37:
					iVar0 = 24;
					break;
				
				case 38:
					iVar0 = 39;
					break;
				
				case 40:
					iVar0 = 0;
					break;
				
				case 47:
					iVar0 = 0;
					break;
				
				case 50:
					iVar0 = 41;
					break;
				
				case 51:
					iVar0 = 25;
					break;
				
				case 52:
					iVar0 = 16;
					break;
				
				case 53:
					iVar0 = func_443(iParam0);
					*uParam2 = 1;
					break;
				
				case 54:
					iVar0 = 41;
					break;
				
				case 55:
					iVar0 = 33;
					break;
				
				case 56:
					iVar0 = 30;
					break;
				
				case 57:
					iVar0 = 2;
					break;
				
				case 58:
					iVar0 = 2;
					break;
				
				case 59:
					iVar0 = 47;
					break;
				
				case 60:
					iVar0 = 18;
					break;
				
				case 61:
					iVar0 = 1;
					break;
				
				case 62:
					iVar0 = 31;
					break;
				
				case 63:
					iVar0 = 35;
					break;
				
				case 64:
					iVar0 = 29;
					break;
				
				case 65:
					iVar0 = 27;
					break;
				
				case 66:
					iVar0 = 2;
					break;
				
				case 67:
					iVar0 = func_62(iParam0);
					*uParam2 = 1;
					break;
				
				case 68:
					iVar0 = 47;
					break;
				
				case 69:
					iVar0 = 28;
					break;
				
				case 70:
					iVar0 = 4;
					break;
				
				case 71:
					iVar0 = 2;
					break;
				
				case 72:
					iVar0 = 42;
					break;
				
				case 73:
					iVar0 = 43;
					break;
				
				case 74:
					iVar0 = 33;
					break;
				
				case 75:
					iVar0 = 25;
					break;
				
				case 76:
					iVar0 = 27;
					break;
				
				case 77:
					iVar0 = 53;
					break;
				
				case 78:
					iVar0 = func_443(iParam0);
					*uParam2 = 1;
					break;
				
				case 79:
					iVar0 = 31;
					break;
				
				case 80:
					iVar0 = 30;
					break;
				
				case 81:
					iVar0 = 28;
					break;
				
				case 82:
					iVar0 = 35;
					break;
				
				case 83:
					iVar0 = 29;
					break;
				
				case 84:
					iVar0 = func_62(iParam0);
					*uParam2 = 1;
					break;
				
				case 85:
					iVar0 = func_62(iParam0);
					*uParam2 = 1;
					break;
				
				case 86:
					iVar0 = 2;
					break;
				
				case 87:
					iVar0 = 1;
					break;
				
				case 88:
					iVar0 = 26;
					break;
				
				case 89:
					iVar0 = 24;
					break;
				
				case 90:
					iVar0 = 30;
					break;
				
				case 91:
					iVar0 = 35;
					break;
				
				case 92:
					iVar0 = 29;
					break;
				
				case 93:
					iVar0 = 21;
					break;
				
				case 94:
					iVar0 = 22;
					break;
				
				case 95:
					iVar0 = 3;
					*uParam2 = 1;
					break;
				
				case 96:
					iVar0 = 2;
					*uParam2 = 1;
					break;
				
				case 97:
					iVar0 = 1;
					*uParam2 = 1;
					break;
				
				case 98:
					iVar0 = 87;
					break;
				
				case 99:
					iVar0 = 2;
					break;
				
				case 101:
					iVar0 = 66;
					break;
				
				case 102:
					iVar0 = 88;
					break;
				
				case 103:
					iVar0 = 42;
					break;
				
				case 104:
					iVar0 = 43;
					break;
				
				case 105:
					iVar0 = 26;
					break;
				
				case 106:
					iVar0 = 24;
					break;
				
				case 107:
					iVar0 = 25;
					break;
				
				case 108:
					iVar0 = 31;
					break;
				
				case 109:
					iVar0 = 28;
					break;
				
				case 110:
					iVar0 = 54;
					break;
				
				case 111:
					iVar0 = 33;
					break;
				
				case 112:
					iVar0 = 27;
					break;
				
				case 113:
					iVar0 = 41;
					break;
				
				case 114:
					iVar0 = 44;
					break;
				
				case 115:
					iVar0 = 40;
					break;
				
				case 116:
					iVar0 = 47;
					break;
				
				case 117:
					iVar0 = 21;
					break;
				
				case 118:
					iVar0 = 16;
					break;
				
				case 121:
					iVar0 = 69;
					break;
				
				case 122:
					iVar0 = 36;
					break;
				
				case 123:
					iVar0 = 41;
					break;
				
				case 124:
					iVar0 = 47;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					iVar0 = 16;
					break;
				
				case 2:
					iVar0 = 25;
					break;
				
				case 3:
					iVar0 = 21;
					break;
				
				case 4:
					iVar0 = 34;
					break;
				
				case 5:
					iVar0 = 33;
					break;
				
				case 6:
					iVar0 = 33;
					break;
				
				case 8:
					iVar0 = 20;
					break;
				
				case 9:
					iVar0 = 6;
					break;
				
				case 10:
					iVar0 = 42;
					break;
				
				case 11:
					iVar0 = 30;
					break;
				
				case 12:
					iVar0 = 35;
					break;
				
				case 13:
					iVar0 = 2;
					break;
				
				case 14:
					iVar0 = 20;
					break;
				
				case 15:
					iVar0 = 37;
					break;
				
				case 16:
					iVar0 = 33;
					break;
				
				case 17:
					iVar0 = 12;
					break;
				
				case 20:
					iVar0 = 27;
					break;
				
				case 22:
					iVar0 = 31;
					break;
				
				case 25:
					iVar0 = 13;
					break;
				
				case 26:
					iVar0 = 19;
					break;
				
				case 27:
					iVar0 = 28;
					break;
				
				case 28:
					iVar0 = 26;
					break;
				
				case 29:
					iVar0 = 27;
					break;
				
				case 30:
					iVar0 = 12;
					break;
				
				case 32:
					iVar0 = 43;
					break;
				
				case 33:
					iVar0 = 27;
					break;
				
				case 36:
					iVar0 = 29;
					break;
				
				case 37:
					iVar0 = 24;
					break;
				
				case 38:
					iVar0 = 39;
					break;
				
				case 40:
					iVar0 = 0;
					break;
				
				case 47:
					iVar0 = 0;
					break;
				
				case 50:
					iVar0 = 41;
					break;
				
				case 51:
					iVar0 = 25;
					break;
				
				case 52:
					iVar0 = 66;
					break;
				
				case 53:
					iVar0 = 58;
					break;
				
				case 54:
					iVar0 = 41;
					break;
				
				case 55:
					iVar0 = 33;
					break;
				
				case 56:
					iVar0 = 30;
					break;
				
				case 57:
					iVar0 = 2;
					break;
				
				case 58:
					iVar0 = 1;
					break;
				
				case 59:
					iVar0 = 47;
					break;
				
				case 60:
					iVar0 = 42;
					break;
				
				case 61:
					iVar0 = 1;
					break;
				
				case 62:
					iVar0 = 31;
					break;
				
				case 63:
					iVar0 = 35;
					break;
				
				case 64:
					iVar0 = 29;
					break;
				
				case 65:
					iVar0 = 27;
					break;
				
				case 66:
					iVar0 = 85;
					break;
				
				case 67:
					iVar0 = 43;
					break;
				
				case 68:
					iVar0 = 47;
					break;
				
				case 69:
					iVar0 = 28;
					break;
				
				case 70:
					iVar0 = 4;
					break;
				
				case 71:
					iVar0 = 1;
					break;
				
				case 72:
					iVar0 = 42;
					break;
				
				case 73:
					iVar0 = 43;
					break;
				
				case 74:
					iVar0 = 34;
					break;
				
				case 75:
					iVar0 = 25;
					break;
				
				case 76:
					iVar0 = 32;
					break;
				
				case 77:
					iVar0 = 54;
					break;
				
				case 78:
					iVar0 = 51;
					break;
				
				case 79:
					iVar0 = 31;
					break;
				
				case 80:
					iVar0 = 33;
					break;
				
				case 81:
					iVar0 = 28;
					break;
				
				case 82:
					iVar0 = 27;
					break;
				
				case 83:
					iVar0 = 69;
					break;
				
				case 84:
					iVar0 = 66;
					break;
				
				case 85:
					iVar0 = 69;
					break;
				
				case 86:
					iVar0 = 1;
					break;
				
				case 87:
					iVar0 = 2;
					break;
				
				case 88:
					iVar0 = 26;
					break;
				
				case 89:
					iVar0 = 24;
					break;
				
				case 90:
					iVar0 = 33;
					break;
				
				case 91:
					iVar0 = 27;
					break;
				
				case 92:
					iVar0 = 21;
					break;
				
				case 93:
					iVar0 = 41;
					break;
				
				case 94:
					iVar0 = 47;
					break;
				
				case 95:
					iVar0 = 2;
					break;
				
				case 96:
					iVar0 = 69;
					break;
				
				case 97:
					iVar0 = 1;
					break;
				
				case 98:
					iVar0 = 38;
					break;
				
				case 99:
					iVar0 = 85;
					break;
				
				case 101:
					iVar0 = 66;
					break;
				
				case 102:
					iVar0 = 36;
					break;
				
				case 103:
					iVar0 = 42;
					break;
				
				case 104:
					iVar0 = 43;
					break;
				
				case 105:
					iVar0 = 26;
					break;
				
				case 106:
					iVar0 = 24;
					break;
				
				case 107:
					iVar0 = 25;
					break;
				
				case 108:
					iVar0 = 31;
					break;
				
				case 109:
					iVar0 = 28;
					break;
				
				case 110:
					iVar0 = 49;
					break;
				
				case 111:
					iVar0 = 33;
					break;
				
				case 112:
					iVar0 = 27;
					break;
				
				case 113:
					iVar0 = 41;
					break;
				
				case 114:
					iVar0 = 44;
					break;
				
				case 115:
					iVar0 = 40;
					break;
				
				case 116:
					iVar0 = 47;
					break;
				
				case 117:
					iVar0 = 21;
					break;
				
				case 118:
					iVar0 = 20;
					break;
				
				case 121:
					iVar0 = 91;
					break;
				
				case 122:
					iVar0 = 36;
					break;
				
				case 123:
					iVar0 = 41;
					break;
				
				case 124:
					iVar0 = 47;
					break;
			}
			break;
	}
	*uParam1 = iVar0;
}

int func_443(int iParam0)
{
	if (func_56(iParam0))
	{
		return func_445(iParam0);
	}
	return func_444(iParam0);
}

int func_444(int iParam0)
{
	iVar0 = ((iParam0 + func_64()) % 6);
	switch (iVar0)
	{
		case 0:
			return 48;
		
		case 1:
			return 49;
		
		case 2:
			return 50;
		
		case 3:
			return 51;
		
		case 4:
			return 52;
		
		case 5:
			return 53;
		
		default:
	}
	return 48;
}

int func_445(int iParam0)
{
	iVar0 = ((iParam0 + func_64()) % 6);
	switch (iVar0)
	{
		case 0:
			return 54;
		
		case 1:
			return 55;
		
		case 2:
			return 56;
		
		case 3:
			return 57;
		
		case 4:
			return 58;
		
		case 5:
			return 59;
		
		default:
	}
	return 54;
}

void func_446(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 125)
	{
		if (SYSTEM::VMAG(func_380(iVar0)) > 0.1f && func_448(iVar0) != -1)
		{
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_7554 = iVar1;
	uParam0->f_7555 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(1, 0);
	uParam0->f_7556 = func_447();
}

int func_447()
{
	iVar1 = 0;
	while (iVar1 < 125)
	{
		if (func_449(iVar1, 125))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_448(int iParam0)
{
	return func_454(iParam0, 0);
}

int func_449(int iParam0, int iParam1)
{
	if (Global_1316795 == 0)
	{
		switch (iParam0)
		{
			case 1:
				if (iParam1 >= 1)
				{
					return 1;
				}
				break;
			
			case 3:
				if (iParam1 >= 2)
				{
					return 1;
				}
				break;
			
			case 13:
				if (iParam1 >= 3)
				{
					return 1;
				}
				break;
			
			case 52:
				if (iParam1 >= 4)
				{
					return 1;
				}
				break;
			
			case 53:
				if (iParam1 >= 5)
				{
					return 1;
				}
				break;
			
			case 57:
				if (iParam1 >= 6)
				{
					return 1;
				}
				break;
			
			case 58:
				if (iParam1 >= 7)
				{
					return 1;
				}
				break;
			
			case 60:
				if (iParam1 >= 8)
				{
					return 1;
				}
				break;
			
			case 61:
				if (iParam1 >= 9)
				{
					return 1;
				}
				break;
			
			case 65:
				if (iParam1 >= 10)
				{
					return 1;
				}
				break;
			
			case 66:
				if (iParam1 >= 11)
				{
					return 1;
				}
				break;
			
			case 67:
				if (iParam1 >= 12)
				{
					return 1;
				}
				break;
			
			case 77:
				if (iParam1 >= 13)
				{
					return 1;
				}
				break;
			
			case 78:
				if (iParam1 >= 14)
				{
					return 1;
				}
				break;
			
			case 84:
				if (iParam1 >= 15)
				{
					return 1;
				}
				break;
			
			case 85:
				if (iParam1 >= 16)
				{
					return 1;
				}
				break;
			
			case 86:
				if (iParam1 >= 17)
				{
					return 1;
				}
				break;
			
			case 87:
				if (iParam1 >= 18)
				{
					return 1;
				}
				break;
			
			case 93:
				if (iParam1 >= 19)
				{
					return 1;
				}
				break;
			
			case 94:
				if (iParam1 >= 20)
				{
					return 1;
				}
				break;
			
			case 95:
				if (iParam1 >= 21)
				{
					return 1;
				}
				break;
			
			case 96:
				if (iParam1 >= 22)
				{
					return 1;
				}
				break;
			
			case 97:
				if (iParam1 >= 23)
				{
					return 1;
				}
				break;
			
			case 98:
				if (iParam1 >= 24)
				{
					return 1;
				}
				break;
			
			case 99:
				if (iParam1 >= 25)
				{
					return 1;
				}
				break;
			
			case 101:
				if (iParam1 >= 26)
				{
					return 1;
				}
				break;
			
			case 102:
				if (iParam1 >= 27)
				{
					return 1;
				}
				break;
			
			case 110:
				if (iParam1 >= 28)
				{
					return 1;
				}
				break;
			
			case 121:
				if (iParam1 >= 29)
				{
					return 1;
				}
				break;
			
			case 103:
			case 104:
				if (iParam1 >= 30)
				{
					return 1;
				}
				break;
			
			case 113:
			case 116:
				if (iParam1 >= 32)
				{
					return 1;
				}
				break;
			
			case 123:
			case 124:
				if (iParam1 >= 34)
				{
					return 1;
				}
				break;
			
			case 5:
			case 20:
				if (iParam1 >= 36)
				{
					return 1;
				}
				break;
			
			case 50:
			case 68:
				if (iParam1 >= 38)
				{
					return 1;
				}
				break;
			
			case 54:
			case 59:
				if (iParam1 >= 40)
				{
					return 1;
				}
				break;
			
			case 6:
			case 33:
				if (iParam1 >= 42)
				{
					return 1;
				}
				break;
			
			case 72:
			case 73:
				if (iParam1 >= 44)
				{
					return 1;
				}
				break;
			
			case 74:
			case 76:
				if (iParam1 >= 46)
				{
					return 1;
				}
				break;
			
			case 80:
			case 82:
			case 83:
				if (iParam1 >= 48)
				{
					return 1;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				if (iParam1 >= 1)
				{
					return 1;
				}
				break;
			
			case 3:
				if (iParam1 >= 2)
				{
					return 1;
				}
				break;
			
			case 13:
				if (iParam1 >= 3)
				{
					return 1;
				}
				break;
			
			case 26:
				if (iParam1 >= 4)
				{
					return 1;
				}
				break;
			
			case 52:
				if (iParam1 >= 5)
				{
					return 1;
				}
				break;
			
			case 53:
				if (iParam1 >= 6)
				{
					return 1;
				}
				break;
			
			case 57:
				if (iParam1 >= 7)
				{
					return 1;
				}
				break;
			
			case 58:
				if (iParam1 >= 8)
				{
					return 1;
				}
				break;
			
			case 61:
				if (iParam1 >= 9)
				{
					return 1;
				}
				break;
			
			case 66:
				if (iParam1 >= 10)
				{
					return 1;
				}
				break;
			
			case 77:
				if (iParam1 >= 11)
				{
					return 1;
				}
				break;
			
			case 78:
				if (iParam1 >= 12)
				{
					return 1;
				}
				break;
			
			case 83:
				if (iParam1 >= 13)
				{
					return 1;
				}
				break;
			
			case 84:
				if (iParam1 >= 14)
				{
					return 1;
				}
				break;
			
			case 85:
				if (iParam1 >= 15)
				{
					return 1;
				}
				break;
			
			case 86:
				if (iParam1 >= 16)
				{
					return 1;
				}
				break;
			
			case 87:
				if (iParam1 >= 17)
				{
					return 1;
				}
				break;
			
			case 95:
				if (iParam1 >= 18)
				{
					return 1;
				}
				break;
			
			case 96:
				if (iParam1 >= 19)
				{
					return 1;
				}
				break;
			
			case 97:
				if (iParam1 >= 20)
				{
					return 1;
				}
				break;
			
			case 99:
				if (iParam1 >= 21)
				{
					return 1;
				}
				break;
			
			case 101:
				if (iParam1 >= 22)
				{
					return 1;
				}
				break;
			
			case 110:
				if (iParam1 >= 23)
				{
					return 1;
				}
				break;
			
			case 114:
				if (iParam1 >= 24)
				{
					return 1;
				}
				break;
			
			case 115:
				if (iParam1 >= 25)
				{
					return 1;
				}
				break;
			
			case 119:
				if (iParam1 >= 26)
				{
					return 1;
				}
				break;
			
			case 121:
				if (iParam1 >= 27)
				{
					return 1;
				}
				break;
			
			case 103:
			case 104:
				if (iParam1 >= 28)
				{
					return 1;
				}
				break;
			
			case 113:
			case 116:
				if (iParam1 >= 30)
				{
					return 1;
				}
				break;
			
			case 123:
			case 124:
				if (iParam1 >= 32)
				{
					return 1;
				}
				break;
			
			case 54:
			case 59:
				if (iParam1 >= 34)
				{
					return 1;
				}
				break;
			
			case 6:
			case 33:
				if (iParam1 >= 36)
				{
					return 1;
				}
				break;
			
			case 60:
			case 67:
				if (iParam1 >= 38)
				{
					return 1;
				}
				break;
			
			case 72:
			case 73:
				if (iParam1 >= 40)
				{
					return 1;
				}
				break;
			
			case 74:
			case 76:
				if (iParam1 >= 42)
				{
					return 1;
				}
				break;
			
			case 75:
			case 79:
			case 81:
				if (iParam1 >= 44)
				{
					return 1;
				}
				break;
			
			case 80:
			case 82:
				if (iParam1 >= 47)
				{
					return 1;
				}
				break;
			
			case 93:
			case 94:
				if (iParam1 >= 49)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case 11:
		case 12:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 60:
		case 61:
		case 15:
		case 16:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

void func_451(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam1]))
	{
		PED::DELETE_PED(uParam0[iParam1]);
	}
	if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam1]))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0[iParam1]->f_1[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0[iParam1]->f_1[iVar0]));
				uParam0[iParam1]->f_1[iVar0] = -1;
			}
			iVar0++;
		}
		if (uParam0[iParam1]->f_16 > -1)
		{
			if ((func_453(func_454(uParam0[iParam1]->f_16, 0)) && !MISC::IS_BIT_SET(uParam0->f_7573[uParam0[iParam1]->f_16], 0)) && !MISC::IS_BIT_SET(uParam0->f_7573[uParam0[iParam1]->f_16], 2))
			{
				uParam0->f_7557 = (uParam0->f_7557 - 1);
			}
			if (uParam0[iParam1]->f_16 == uParam0->f_7947)
			{
				uParam0->f_7947 = -1;
			}
			if (uParam0[iParam1]->f_16 == uParam0->f_7948)
			{
				uParam0->f_7948 = -1;
			}
			if (uParam0[iParam1]->f_16 == uParam0->f_7946)
			{
				uParam0->f_7946 = -1;
			}
			if (uParam0[iParam1]->f_16 == uParam0->f_7949)
			{
				uParam0->f_7949 = -1;
			}
			uParam0->f_7255[uParam0[iParam1]->f_16] = -1;
			uParam0[iParam1]->f_16 = -1;
		}
		uParam0[iParam1]->f_17 = 0;
		uParam0[iParam1]->f_28 = 0;
		(*uParam0)[iParam1] = -1;
		uParam0[iParam1]->f_6 = -1;
		uParam0[iParam1]->f_7 = 2;
		uParam0[iParam1]->f_8 = -1;
		uParam0[iParam1]->f_9 = 0;
		uParam0[iParam1]->f_10 = -1;
		uParam0[iParam1]->f_11 = -1;
		uParam0[iParam1]->f_12 = -1;
		uParam0[iParam1]->f_13 = { 0f, 0f, 0f };
		uParam0[iParam1]->f_16 = -1;
		uParam0[iParam1]->f_17 = 0;
		uParam0[iParam1]->f_18 = 0;
		uParam0[iParam1]->f_19 = -1;
		uParam0[iParam1]->f_21 = 0f;
		uParam0[iParam1]->f_22 = { 0f, 0f, 0f };
		uParam0[iParam1]->f_25 = { 0f, 0f, 0f };
		uParam0[iParam1]->f_28 = 0;
		uParam0[iParam1]->f_29 = 0;
		func_2(&(uParam0[iParam1]->f_30));
		uParam0[iParam1]->f_32[0] = -1;
		uParam0[iParam1]->f_32[1] = -1;
		uParam0[iParam1]->f_35 = 0;
		uParam0[iParam1]->f_36 = 0;
		uParam0[iParam1]->f_51 = 0;
		uParam0[iParam1]->f_52 = 0;
		uParam0[iParam1]->f_37 = 0;
		uParam0[iParam1]->f_54 = -1;
		uParam0[iParam1]->f_38 = 0;
		uParam0[iParam1]->f_39 = -1;
		uParam0[iParam1]->f_40 = -1;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			uParam0[iParam1]->f_41[iVar0] = -1;
			iVar0++;
		}
		uParam0[iParam1]->f_45 = { 0f, 0f, 0f };
		uParam0[iParam1]->f_48 = 0f;
		uParam0[iParam1]->f_49 = -1;
		uParam0[iParam1]->f_50 = -1;
		uParam0[iParam1]->f_55 = 0;
		func_2(&(uParam0[iParam1]->f_56));
	}
}

int func_452()
{
	switch (Global_1316793)
	{
		case 0:
			return 110;
		
		case 1:
			return 125;
		
		case 2:
			return 50;
		
		case 3:
			return 70;
		
		case 4:
			return 90;
		
		default:
	}
	return 0;
}

int func_453(int iParam0)
{
	switch (iParam0)
	{
		case 11:
		case 12:
		case 52:
			return 1;
		
		default:
	}
	return 0;
}

int func_454(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	iVar0 = func_457(iParam0);
	switch (Global_1316788)
	{
		case 0:
			switch (iParam0)
			{
				case 146:
					iVar0 = 20;
					break;
				
				case 147:
					iVar0 = 1;
					break;
				
				case 148:
					iVar0 = 12;
					break;
				
				case 149:
					iVar0 = 11;
					break;
				
				case 150:
					iVar0 = 12;
					break;
				
				case 151:
					iVar0 = 12;
					break;
				
				case 152:
					iVar0 = 11;
					break;
				
				case 153:
					iVar0 = 11;
					break;
				
				case 154:
					iVar0 = 12;
					break;
				
				case 155:
					iVar0 = 12;
					break;
				
				case 156:
					iVar0 = 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 146:
					iVar0 = 20;
					break;
				
				case 147:
					iVar0 = 1;
					break;
				
				case 148:
					iVar0 = 11;
					break;
				
				case 149:
					iVar0 = 11;
					break;
				
				case 150:
					iVar0 = 12;
					break;
				
				case 151:
					iVar0 = 12;
					break;
				
				case 152:
					iVar0 = 12;
					break;
				
				case 153:
					iVar0 = 12;
					break;
				
				case 154:
					iVar0 = 11;
					break;
				
				case 155:
					iVar0 = 11;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 146:
					iVar0 = 20;
					break;
				
				case 147:
					iVar0 = 1;
					break;
				
				case 148:
					iVar0 = 12;
					break;
				
				case 149:
					iVar0 = 11;
					break;
				
				case 150:
					iVar0 = 11;
					break;
				
				case 151:
					iVar0 = 11;
					break;
				
				case 152:
					iVar0 = 11;
					break;
				
				case 153:
					iVar0 = 12;
					break;
				
				case 154:
					iVar0 = 11;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 146:
					iVar0 = 20;
					break;
				
				case 147:
					iVar0 = 1;
					break;
				
				case 148:
					iVar0 = -1;
					break;
				
				case 149:
					iVar0 = -1;
					break;
				
				case 150:
					iVar0 = -1;
					break;
				
				case 151:
					iVar0 = -1;
					break;
				
				case 152:
					iVar0 = -1;
					break;
				
				case 153:
					iVar0 = -1;
					break;
				
				case 154:
					iVar0 = -1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 146:
					iVar0 = -1;
					break;
				
				case 147:
					iVar0 = -1;
					break;
				
				case 148:
					iVar0 = -1;
					break;
				
				case 149:
					iVar0 = -1;
					break;
				
				case 150:
					iVar0 = -1;
					break;
				
				case 151:
					iVar0 = -1;
					break;
				
				case 152:
					iVar0 = -1;
					break;
				
				case 153:
					iVar0 = -1;
					break;
				
				case 154:
					iVar0 = -1;
					break;
				
				case 155:
					iVar0 = -1;
					break;
			}
			break;
	}
	switch (Global_1316790)
	{
		case 0:
			switch (iParam0)
			{
				case 157:
					iVar0 = 34;
					break;
				
				case 158:
					iVar0 = 11;
					break;
				
				case 159:
					iVar0 = 11;
					break;
				
				case 160:
					iVar0 = 12;
					break;
				
				case 161:
					iVar0 = 52;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 157:
					iVar0 = 34;
					break;
				
				case 158:
					iVar0 = 12;
					break;
				
				case 159:
					iVar0 = 11;
					break;
				
				case 160:
					iVar0 = 11;
					break;
				
				case 161:
					iVar0 = 52;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 157:
					iVar0 = 34;
					break;
				
				case 158:
					iVar0 = 11;
					break;
				
				case 159:
					iVar0 = 11;
					break;
				
				case 160:
					iVar0 = 12;
					break;
				
				case 161:
					iVar0 = 11;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 157:
					iVar0 = 34;
					break;
				
				case 158:
					iVar0 = -1;
					break;
				
				case 159:
					iVar0 = -1;
					break;
				
				case 160:
					iVar0 = -1;
					break;
				
				case 161:
					iVar0 = -1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			if (Global_1316786 != 4)
			{
				iVar0 = 13;
			}
			else if (Global_1316781)
			{
				iVar0 = 12;
			}
			break;
		
		case 9:
			if (Global_1316780)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 18:
			if (Global_1316778)
			{
				if (Global_1316772 == 1)
				{
					if (Global_1316771 == 2)
					{
						iVar0 = 21;
					}
					else
					{
						iVar0 = 27;
					}
				}
				else if (Global_1316772 == 2)
				{
					if (Global_1316771 == 2)
					{
						iVar0 = 23;
					}
					else
					{
						iVar0 = 29;
					}
				}
				else if (Global_1316772 == 3)
				{
					if (Global_1316771 == 2)
					{
						iVar0 = 25;
					}
					else
					{
						iVar0 = 31;
					}
				}
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 19:
			if (Global_1316778 && !(Global_1316792 == 3 && !func_486()))
			{
				if (Global_1316772 == 1)
				{
					if (Global_1316771 == 2)
					{
						iVar0 = 22;
					}
					else if (Global_1316771 == 1)
					{
						iVar0 = 28;
					}
					else if (Global_1316771 == 3)
					{
						iVar0 = 22;
					}
				}
				else if (Global_1316772 == 2)
				{
					if (Global_1316771 == 2)
					{
						iVar0 = 24;
					}
					else if (Global_1316771 == 1)
					{
						iVar0 = 30;
					}
					else if (Global_1316771 == 3)
					{
						iVar0 = 24;
					}
				}
				else if (Global_1316772 == 3)
				{
					if (Global_1316771 == 2)
					{
						iVar0 = 26;
					}
					else if (Global_1316771 == 1)
					{
						iVar0 = 32;
					}
					else if (Global_1316771 == 3)
					{
						iVar0 = 26;
					}
				}
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 35:
			if (Global_1316779)
			{
				iVar0 = 10;
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 39:
			if (Global_1316786 == 1 || Global_1316786 == 3)
			{
				iVar0 = 1;
				break;
			}
			else
			{
				iVar0 = 12;
				break;
			}
			break;
		
		case 40:
			if (Global_1316780)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 41:
			if (Global_1316786 == 1 || Global_1316786 == 3)
			{
				iVar0 = 9;
			}
			else if (Global_1316780)
			{
				iVar0 = 9;
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 42:
			if (Global_1316786 == 1)
			{
				iVar0 = 33;
			}
			else if (Global_1316780)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 45:
			if (Global_1316774)
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 46:
			if (Global_1316774)
			{
				iVar0 = 5;
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 48:
			if (Global_1316775)
			{
				iVar0 = 7;
			}
			else
			{
				iVar0 = -1;
			}
			break;
		
		case 49:
			if (Global_1316775)
			{
				iVar0 = 8;
			}
			else
			{
				iVar0 = -1;
			}
			break;
	}
	switch (iParam0)
	{
		case 70:
			if (func_476(func_6(), 1))
			{
				iVar0 = 54;
			}
			break;
		
		case 117:
			if (func_476(func_6(), 2))
			{
				iVar0 = 60;
			}
			break;
		
		case 71:
			if (func_476(func_6(), 3))
			{
				iVar0 = 55;
			}
			break;
		
		case 108:
			if (func_476(func_6(), 4))
			{
				iVar0 = 53;
			}
			break;
		
		case 107:
			if (func_476(func_6(), 5))
			{
				iVar0 = 58;
			}
			break;
		
		case 109:
			if (func_476(func_6(), 5))
			{
				iVar0 = 59;
			}
			break;
		
		case 111:
			if (func_476(func_6(), 6))
			{
				iVar0 = 56;
			}
			break;
		
		case 112:
			if (func_476(func_6(), 6))
			{
				iVar0 = 57;
			}
			break;
	}
	switch (Global_1316784)
	{
		case 0:
			switch (iParam0)
			{
				case 34:
					iVar0 = 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 34:
					iVar0 = 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 34:
					iVar0 = 10;
					break;
				
				case 119:
					iVar0 = 62;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 34:
					iVar0 = 10;
					break;
			}
			break;
	}
	if (Global_1316777)
	{
		switch (Global_1316784)
		{
			case 0:
				switch (iParam0)
				{
					case 7:
						iVar0 = 36;
						break;
					
					case 21:
						iVar0 = 40;
						break;
					
					case 23:
						iVar0 = 38;
						break;
					
					case 24:
						iVar0 = 39;
						break;
					
					case 31:
						iVar0 = 37;
						break;
					
					case 35:
						iVar0 = 35;
						break;
					
					case 100:
						iVar0 = 40;
						break;
					
					case 119:
						iVar0 = 40;
						break;
					
					case 120:
						iVar0 = 40;
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 7:
						iVar0 = 12;
						break;
					
					case 21:
						iVar0 = 11;
						break;
					
					case 23:
						iVar0 = 12;
						break;
					
					case 24:
						iVar0 = 12;
						break;
					
					case 31:
						iVar0 = 11;
						break;
					
					case 35:
						iVar0 = 12;
						break;
					
					case 100:
						iVar0 = 44;
						break;
					
					case 119:
						iVar0 = 45;
						break;
					
					case 120:
						iVar0 = 46;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 7:
						iVar0 = 49;
						break;
					
					case 21:
						iVar0 = 11;
						break;
					
					case 23:
						iVar0 = 12;
						break;
					
					case 24:
						iVar0 = 11;
						break;
					
					case 31:
						iVar0 = 48;
						break;
					
					case 35:
						iVar0 = 50;
						break;
					
					case 100:
						iVar0 = 50;
						break;
					
					case 120:
						iVar0 = 47;
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 7:
						iVar0 = 42;
						break;
					
					case 21:
						iVar0 = 11;
						break;
					
					case 23:
						iVar0 = 12;
						break;
					
					case 24:
						iVar0 = 12;
						break;
					
					case 31:
						iVar0 = 43;
						break;
					
					case 35:
						iVar0 = 51;
						break;
					
					case 100:
						iVar0 = 51;
						break;
					
					case 119:
						iVar0 = 11;
						break;
					
					case 120:
						iVar0 = 41;
						break;
				}
				break;
			}
	}
	if (((((((((iVar0 == 0 || iVar0 == 20) || iVar0 == 6) || iVar0 == 4) || iVar0 == 5) || iVar0 == 3) || iVar0 == 2) || iVar0 == 7) || iVar0 == 8) && Global_1316780 == 0)
	{
		iVar0 = -1;
	}
	if ((((iVar0 == 11 || iVar0 == 12) || iVar0 == 52) || func_456(iVar0)) && Global_1316781 == 0)
	{
		iVar0 = -1;
	}
	if ((iVar0 == 10 && func_6() != -1) && Global_1316784 == -1)
	{
		iVar0 = -1;
	}
	if (((func_455(func_6(), 0) && func_455(func_6(), 1)) && func_455(func_6(), 4)) && (((iVar0 == 6 || iVar0 == 7) || iVar0 == 9) || iVar0 == 8))
	{
		iVar0 = -1;
	}
	if (Global_1316774 == 0 && (iVar0 == 4 || iVar0 == 5))
	{
	}
	if (iVar0 == 17 && (Global_1316786 == 1 || Global_1316786 == 2))
	{
		iVar0 = -1;
	}
	return iVar0;
}

int func_455(int iParam0, int iParam1)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 0);
			break;
		
		case 1:
			return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 1);
			break;
		
		case 4:
			return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 2);
			break;
		
		case 2:
			return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 3);
			break;
		
		case 3:
			return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 4);
			break;
		
		case 5:
			return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_7, 5);
			break;
	}
	return 0;
}

int func_456(int iParam0)
{
	switch (iParam0)
	{
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return 1;
		
		default:
	}
	return 0;
}

int func_457(int iParam0)
{
	iVar0 = -1;
	func_429(&iParam0);
	switch (Global_1316795)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 12;
				
				case 2:
					return 11;
				
				case 3:
					return 12;
				
				case 4:
					return 12;
				
				case 5:
					return 12;
				
				case 6:
					return 12;
				
				case 8:
					return 12;
				
				case 10:
					return 12;
				
				case 11:
					return 12;
				
				case 12:
					return 12;
				
				case 13:
					return 12;
				
				case 14:
					return 12;
				
				case 15:
					return 11;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				case 20:
					return 11;
				
				case 22:
					return 12;
				
				case 25:
					return 11;
				
				case 26:
					return 11;
				
				case 27:
					return 11;
				
				case 28:
					return 11;
				
				case 29:
					return 12;
				
				case 30:
					return 11;
				
				case 32:
					return 12;
				
				case 33:
					return 11;
				
				case 36:
					return 11;
				
				case 37:
					return 11;
				
				case 38:
					return 11;
				
				case 43:
					return 17;
				
				case 44:
					return 14;
				
				case 47:
					return 2;
				
				case 50:
					return 11;
				
				case 51:
					return 11;
				
				case 52:
					return 11;
				
				case 53:
					return 11;
				
				case 54:
					return 11;
				
				case 55:
					return 12;
				
				case 56:
					return 12;
				
				case 57:
					return 11;
				
				case 58:
					return 11;
				
				case 59:
					return 12;
				
				case 60:
					return 12;
				
				case 61:
					return 11;
				
				case 62:
					return 12;
				
				case 63:
					return 12;
				
				case 64:
					return 11;
				
				case 65:
					return 11;
				
				case 66:
					return 12;
				
				case 67:
					return 12;
				
				case 68:
					return 12;
				
				case 69:
					return 11;
				
				case 70:
					return 11;
				
				case 71:
					return 12;
				
				case 72:
					return 12;
				
				case 73:
					return 12;
				
				case 74:
					return 12;
				
				case 75:
					return 11;
				
				case 76:
					return 11;
				
				case 77:
					return 11;
				
				case 78:
					return 12;
				
				case 79:
					return 12;
				
				case 80:
					return 12;
				
				case 81:
					return 11;
				
				case 82:
					return 12;
				
				case 83:
					return 11;
				
				case 84:
					return 12;
				
				case 85:
					return 12;
				
				case 86:
					return 11;
				
				case 87:
					return 12;
				
				case 88:
					return 11;
				
				case 89:
					return 11;
				
				case 90:
					return 12;
				
				case 91:
					return 12;
				
				case 92:
					return 11;
				
				case 93:
					return 12;
				
				case 94:
					return 12;
				
				case 95:
					return 11;
				
				case 96:
					return 11;
				
				case 97:
					return 12;
				
				case 98:
					return 11;
				
				case 99:
					return 12;
				
				case 101:
					return 12;
				
				case 102:
					return 11;
				
				case 103:
					return 12;
				
				case 104:
					return 12;
				
				case 105:
					return 11;
				
				case 106:
					return 11;
				
				case 107:
					return 11;
				
				case 108:
					return 12;
				
				case 109:
					return 11;
				
				case 110:
					return 12;
				
				case 111:
					return 12;
				
				case 112:
					return 11;
				
				case 113:
					return 11;
				
				case 114:
					return 12;
				
				case 115:
					return 11;
				
				case 116:
					return 12;
				
				case 117:
					return 12;
				
				case 118:
					return 11;
				
				case 121:
					return 11;
				
				case 122:
					return 11;
				
				case 123:
					return 11;
				
				case 124:
					return 12;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					iVar0 = 11;
					break;
				
				case 2:
					iVar0 = 11;
					break;
				
				case 3:
					iVar0 = 12;
					break;
				
				case 4:
					iVar0 = 12;
					break;
				
				case 5:
					iVar0 = 12;
					break;
				
				case 6:
					iVar0 = 12;
					break;
				
				case 8:
					iVar0 = 12;
					break;
				
				case 10:
					iVar0 = 12;
					break;
				
				case 11:
					iVar0 = 12;
					break;
				
				case 12:
					iVar0 = 12;
					break;
				
				case 13:
					iVar0 = 11;
					break;
				
				case 14:
					iVar0 = 12;
					break;
				
				case 15:
					iVar0 = 11;
					break;
				
				case 16:
					iVar0 = 12;
					break;
				
				case 17:
					iVar0 = 11;
					break;
				
				case 20:
					iVar0 = 11;
					break;
				
				case 22:
					iVar0 = 12;
					break;
				
				case 25:
					iVar0 = 11;
					break;
				
				case 26:
					iVar0 = 12;
					break;
				
				case 27:
					iVar0 = 11;
					break;
				
				case 28:
					iVar0 = 11;
					break;
				
				case 29:
					iVar0 = 11;
					break;
				
				case 30:
					iVar0 = 11;
					break;
				
				case 32:
					iVar0 = 12;
					break;
				
				case 33:
					iVar0 = 11;
					break;
				
				case 36:
					iVar0 = 11;
					break;
				
				case 37:
					iVar0 = 11;
					break;
				
				case 38:
					iVar0 = 11;
					break;
				
				case 43:
					iVar0 = 17;
					break;
				
				case 44:
					iVar0 = 14;
					break;
				
				case 47:
					iVar0 = 2;
					break;
				
				case 50:
					iVar0 = 11;
					break;
				
				case 51:
					iVar0 = 11;
					break;
				
				case 52:
					iVar0 = 11;
					break;
				
				case 53:
					iVar0 = 12;
					break;
				
				case 54:
					iVar0 = 11;
					break;
				
				case 55:
					iVar0 = 12;
					break;
				
				case 56:
					iVar0 = 12;
					break;
				
				case 57:
					iVar0 = 12;
					break;
				
				case 58:
					iVar0 = 12;
					break;
				
				case 59:
					iVar0 = 12;
					break;
				
				case 60:
					iVar0 = 12;
					break;
				
				case 61:
					iVar0 = 11;
					break;
				
				case 62:
					iVar0 = 12;
					break;
				
				case 63:
					iVar0 = 12;
					break;
				
				case 64:
					iVar0 = 11;
					break;
				
				case 65:
					iVar0 = 11;
					break;
				
				case 66:
					iVar0 = 12;
					break;
				
				case 67:
					iVar0 = 12;
					break;
				
				case 68:
					iVar0 = 12;
					break;
				
				case 69:
					iVar0 = 11;
					break;
				
				case 70:
					iVar0 = 11;
					break;
				
				case 71:
					iVar0 = 12;
					break;
				
				case 72:
					iVar0 = 12;
					break;
				
				case 73:
					iVar0 = 12;
					break;
				
				case 74:
					iVar0 = 12;
					break;
				
				case 75:
					iVar0 = 11;
					break;
				
				case 76:
					iVar0 = 12;
					break;
				
				case 77:
					iVar0 = 12;
					break;
				
				case 78:
					iVar0 = 11;
					break;
				
				case 79:
					iVar0 = 12;
					break;
				
				case 80:
					iVar0 = 12;
					break;
				
				case 81:
					iVar0 = 11;
					break;
				
				case 82:
					iVar0 = 11;
					break;
				
				case 83:
					iVar0 = 11;
					break;
				
				case 84:
					iVar0 = 12;
					break;
				
				case 85:
					iVar0 = 11;
					break;
				
				case 86:
					iVar0 = 12;
					break;
				
				case 87:
					iVar0 = 11;
					break;
				
				case 88:
					iVar0 = 11;
					break;
				
				case 89:
					iVar0 = 11;
					break;
				
				case 90:
					iVar0 = 12;
					break;
				
				case 91:
					iVar0 = 11;
					break;
				
				case 92:
					iVar0 = 12;
					break;
				
				case 93:
					iVar0 = 11;
					break;
				
				case 94:
					iVar0 = 12;
					break;
				
				case 95:
					iVar0 = 11;
					break;
				
				case 96:
					iVar0 = 11;
					break;
				
				case 97:
					iVar0 = 12;
					break;
				
				case 98:
					iVar0 = 11;
					break;
				
				case 99:
					iVar0 = 12;
					break;
				
				case 101:
					iVar0 = 12;
					break;
				
				case 102:
					iVar0 = 11;
					break;
				
				case 103:
					iVar0 = 12;
					break;
				
				case 104:
					iVar0 = 12;
					break;
				
				case 105:
					iVar0 = 11;
					break;
				
				case 106:
					iVar0 = 11;
					break;
				
				case 107:
					iVar0 = 11;
					break;
				
				case 108:
					iVar0 = 12;
					break;
				
				case 109:
					iVar0 = 11;
					break;
				
				case 110:
					iVar0 = 11;
					break;
				
				case 111:
					iVar0 = 12;
					break;
				
				case 112:
					iVar0 = 11;
					break;
				
				case 113:
					iVar0 = 11;
					break;
				
				case 114:
					iVar0 = 12;
					break;
				
				case 115:
					iVar0 = 11;
					break;
				
				case 116:
					iVar0 = 12;
					break;
				
				case 117:
					iVar0 = 12;
					break;
				
				case 118:
					iVar0 = 12;
					break;
				
				case 121:
					iVar0 = 11;
					break;
				
				case 122:
					iVar0 = 11;
					break;
				
				case 123:
					iVar0 = 11;
					break;
				
				case 124:
					iVar0 = 12;
					break;
			}
			break;
	}
	return iVar0;
}

void func_458(var uParam0, int iParam1)
{
	bVar0 = false;
	if (MISC::IS_BIT_SET(uParam0->f_7573[iParam1], 8))
	{
		bVar0 = true;
	}
	uParam0->f_7573[iParam1] = 0;
	if (bVar0)
	{
		MISC::SET_BIT(&(uParam0->f_7573[iParam1]), 8);
	}
	Var1 = { func_379(iParam1) };
	if (func_506(Var1) || func_505(Var1))
	{
		MISC::SET_BIT(&(uParam0->f_7573[iParam1]), 0);
	}
	if (func_501(Var1))
	{
		MISC::SET_BIT(&(uParam0->f_7573[iParam1]), 1);
	}
	if (func_461(Var1))
	{
		MISC::SET_BIT(&(uParam0->f_7573[iParam1]), 2);
	}
	if (func_460(Var1) || func_459(Var1))
	{
		MISC::SET_BIT(&(uParam0->f_7573[iParam1]), 3);
	}
}

var func_459(struct<3> Param0)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1576.805f, -3005.231f, -79.9419f, -1576.782f, -3010.693f, -77.51352f, 4f, 0, 1);
}

var func_460(struct<3> Param0)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1574.861f, -3015.939f, -79.97835f, -1582.917f, -3015.265f, -77.35249f, 5f, 0, 1);
}

bool func_461(struct<3> Param0)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1610.974f, -3019.392f, -79.94099f, -1610.935f, -3005.203f, -76.56933f, 7.85f, 0, 1);
}

void func_462(int iParam0)
{
	Global_1316765 = iParam0;
}

void func_463(var uParam0)
{
	if (uParam0->f_7905 == 5)
	{
		if ((!uParam0->f_7945 && func_499(PLAYER::PLAYER_PED_ID())) || (uParam0->f_7945 && func_498(CAM::GET_FINAL_RENDERED_CAM_COORD())))
		{
			MISC::SET_BIT(&(uParam0->f_7418), 6);
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_7418), 7);
		}
	}
	if (uParam0->f_7905 == 5)
	{
		if (MISC::IS_BIT_SET(uParam0->f_7418, 2) != MISC::IS_BIT_SET(uParam0->f_7418, 6))
		{
			if (MISC::IS_BIT_SET(uParam0->f_7418, 6))
			{
				MISC::SET_BIT(&(uParam0->f_7418), 2);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam0->f_7418), 2);
			}
			if ((Global_1316765 != 4 && Global_1316765 != 3) && Global_1316765 != 2)
			{
				func_462(2);
			}
		}
		if (MISC::IS_BIT_SET(uParam0->f_7418, 3) != MISC::IS_BIT_SET(uParam0->f_7418, 7))
		{
			if (MISC::IS_BIT_SET(uParam0->f_7418, 7))
			{
				MISC::SET_BIT(&(uParam0->f_7418), 3);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam0->f_7418), 3);
			}
			if ((Global_1316765 != 4 && Global_1316765 != 3) && Global_1316765 != 2)
			{
				func_462(2);
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_7418), 6);
		MISC::CLEAR_BIT(&(uParam0->f_7418), 7);
	}
}

void func_464(var uParam0)
{
	switch ((uParam0->f_7905 - 0))
	{
		case 0:
			if ((!uParam0->f_7945 && func_509(PLAYER::PLAYER_PED_ID())) || (uParam0->f_7945 && func_506(CAM::GET_FINAL_RENDERED_CAM_COORD())))
			{
				MISC::SET_BIT(&(uParam0->f_7418), 4);
			}
			break;
		
		case 1:
			if ((!uParam0->f_7945 && func_508(PLAYER::PLAYER_PED_ID())) || (uParam0->f_7945 && func_505(CAM::GET_FINAL_RENDERED_CAM_COORD())))
			{
				MISC::SET_BIT(&(uParam0->f_7418), 4);
			}
			break;
		
		case 2:
			if ((!uParam0->f_7945 && func_507(PLAYER::PLAYER_PED_ID())) || (uParam0->f_7945 && func_504(CAM::GET_FINAL_RENDERED_CAM_COORD())))
			{
				MISC::SET_BIT(&(uParam0->f_7418), 4);
			}
			break;
		
		case 3:
			if ((!uParam0->f_7945 && func_503(PLAYER::PLAYER_PED_ID())) || (uParam0->f_7945 && func_501(CAM::GET_FINAL_RENDERED_CAM_COORD())))
			{
				MISC::SET_BIT(&(uParam0->f_7418), 5);
			}
			break;
		
		case 4:
			if ((!uParam0->f_7945 && func_502(PLAYER::PLAYER_PED_ID())) || (uParam0->f_7945 && func_500(CAM::GET_FINAL_RENDERED_CAM_COORD())))
			{
				MISC::SET_BIT(&(uParam0->f_7418), 5);
			}
			break;
	}
	if (uParam0->f_7905 == 5)
	{
		if (MISC::IS_BIT_SET(uParam0->f_7418, 0) != MISC::IS_BIT_SET(uParam0->f_7418, 4))
		{
			if (MISC::IS_BIT_SET(uParam0->f_7418, 4))
			{
				MISC::SET_BIT(&(uParam0->f_7418), 0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam0->f_7418), 0);
			}
			if ((Global_1316765 != 4 && Global_1316765 != 3) && Global_1316765 != 2)
			{
				func_462(2);
			}
		}
		if (MISC::IS_BIT_SET(uParam0->f_7418, 1) != MISC::IS_BIT_SET(uParam0->f_7418, 5))
		{
			if (MISC::IS_BIT_SET(uParam0->f_7418, 5))
			{
				MISC::SET_BIT(&(uParam0->f_7418), 1);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam0->f_7418), 1);
			}
			if ((Global_1316765 != 4 && Global_1316765 != 3) && Global_1316765 != 2)
			{
				func_462(2);
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_7418), 4);
		MISC::CLEAR_BIT(&(uParam0->f_7418), 5);
	}
}

int func_465(var uParam0, var uParam1)
{
	if (func_466(PLAYER::PLAYER_ID()) == 4)
	{
		if (Global_2537071.f_6584 == 1)
		{
		}
		else
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	else if (*uParam1 > 0)
	{
	}
	else
	{
		return 0;
	}
	if (uParam1->f_4 <= uParam0->f_7739)
	{
		return 0;
	}
	return 1;
}

int func_466(int iParam0)
{
	if (func_469(iParam0) == 237 || func_469(iParam0) == 250)
	{
		return func_467(iParam0);
	}
	return -1;
}

int func_467(int iParam0)
{
	if (func_468(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_468(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)
{
	if (func_468(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_470(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = AUDIO::_0x3E65CDE5215832C1(AUDIO::GET_RADIO_STATION_NAME(iParam0));
	iVar1 = 1;
	iVar2 = MISC::GET_HASH_KEY(func_237(MISC::GET_HASH_KEY(AUDIO::GET_RADIO_STATION_NAME(iParam0)), iVar1));
	while (iVar2 != AUDIO::_0x34D66BC058019CE0(AUDIO::GET_RADIO_STATION_NAME(iParam0)) && func_236(iVar2) != -1)
	{
		iVar0 = (iVar0 + (func_236(iVar2) - 1000));
		iVar1++;
		iVar2 = MISC::GET_HASH_KEY(func_237(MISC::GET_HASH_KEY(AUDIO::GET_RADIO_STATION_NAME(iParam0)), iVar1));
	}
	return iVar0;
}

int func_471()
{
	iVar0 = 0;
	Var3 = 2;
	Var3.f_1 = 1;
	Var3.f_3 = 1065353216;
	Var3.f_5 = 1065353216;
	Var3.f_6 = -1;
	Var3.f_7 = 4;
	Var3.f_7.f_1.f_9 = 1082130432;
	Var3.f_7.f_1.f_10 = -1065353216;
	Var3.f_7.f_1.f_12 = 2;
	Var3.f_7.f_1.f_12.f_1.f_11 = 1073741824;
	Var3.f_7.f_1.f_12.f_1.f_12 = 1073741824;
	Var3.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
	Var3.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
	Var3.f_7.f_1.f_41 = 2;
	Var3.f_7.f_1.f_41.f_1 = 1065353216;
	Var3.f_7.f_1.f_41.f_1.f_11 = -1;
	Var3.f_7.f_1.f_41.f_1.f_13 = 1065353216;
	Var3.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
	Var3.f_7.f_1.f_68 = 1;
	Var3.f_7.f_1.f_68.f_1 = 1073741824;
	Var3.f_7.f_1.f_68.f_1.f_1 = 1073741824;
	Var3.f_7.f_1.f_68.f_1.f_3 = -1082130432;
	Var3.f_7.f_1.f_79.f_9 = 1082130432;
	Var3.f_7.f_1.f_79.f_10 = -1065353216;
	Var3.f_7.f_1.f_79.f_12 = 2;
	Var3.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
	Var3.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
	Var3.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var3.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var3.f_7.f_1.f_79.f_41 = 2;
	Var3.f_7.f_1.f_79.f_41.f_1 = 1065353216;
	Var3.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
	Var3.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
	Var3.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
	Var3.f_7.f_1.f_79.f_68 = 1;
	Var3.f_7.f_1.f_79.f_68.f_1 = 1073741824;
	Var3.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
	Var3.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
	Var3.f_7.f_1.f_79.f_79.f_9 = 1082130432;
	Var3.f_7.f_1.f_79.f_79.f_10 = -1065353216;
	Var3.f_7.f_1.f_79.f_79.f_12 = 2;
	Var3.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_41 = 2;
	Var3.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
	Var3.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
	Var3.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var3.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var3.f_7.f_1.f_79.f_79.f_68 = 1;
	Var3.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var3.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
	Var3.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
	Var3.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
	Var3.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
	Var3.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
	Var3.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
	Var3.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var3.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var3.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
	Var3.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var3.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var3.f_324 = 2;
	Var3.f_324.f_1.f_18 = 1082130432;
	Var3.f_324.f_1.f_19 = -1065353216;
	Var3.f_324.f_1.f_20 = 1;
	Var3.f_324.f_1.f_21 = 2;
	Var3.f_324.f_1.f_21.f_1 = 1065353216;
	Var3.f_324.f_1.f_21.f_1.f_11 = -1;
	Var3.f_324.f_1.f_21.f_1.f_13 = 1065353216;
	Var3.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
	Var3.f_324.f_1.f_48.f_18 = 1082130432;
	Var3.f_324.f_1.f_48.f_19 = -1065353216;
	Var3.f_324.f_1.f_48.f_20 = 1;
	Var3.f_324.f_1.f_48.f_21 = 2;
	Var3.f_324.f_1.f_48.f_21.f_1 = 1065353216;
	Var3.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
	Var3.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
	Var3.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
	iVar424 = 1;
	iVar0 = 0;
	while (iVar0 < 162)
	{
		func_441(iVar0, &uVar1, &uVar2, 0);
		iVar425 = uVar1;
		func_148(iVar425, 0, 0, &Var3, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_324[0]))
		{
			STREAMING::REQUEST_ANIM_DICT(Var3.f_324[0]);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(Var3.f_324[0]))
			{
				iVar424 = 0;
			}
		}
		iVar0++;
	}
	iVar426 = 0;
	while (iVar426 < 4)
	{
		iVar427 = 0;
		while (iVar427 < 3)
		{
			sVar428 = func_246(iVar426, iVar427 + 1);
			STREAMING::REQUEST_ANIM_DICT(sVar428);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar428))
			{
				iVar424 = 0;
			}
			iVar427++;
		}
		iVar426++;
	}
	return iVar424;
}

int func_472()
{
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 1;
	Var0.f_5.f_3 = 1065353216;
	Var0.f_5.f_5 = 1065353216;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_7 = 4;
	Var0.f_5.f_7.f_1.f_9 = 1082130432;
	Var0.f_5.f_7.f_1.f_10 = -1065353216;
	Var0.f_5.f_7.f_1.f_12 = 2;
	Var0.f_5.f_7.f_1.f_12.f_1.f_11 = 1073741824;
	Var0.f_5.f_7.f_1.f_12.f_1.f_12 = 1073741824;
	Var0.f_5.f_7.f_1.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_5.f_7.f_1.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_5.f_7.f_1.f_41 = 2;
	Var0.f_5.f_7.f_1.f_41.f_1 = 1065353216;
	Var0.f_5.f_7.f_1.f_41.f_1.f_11 = -1;
	Var0.f_5.f_7.f_1.f_41.f_1.f_13 = 1065353216;
	Var0.f_5.f_7.f_1.f_41.f_1.f_13.f_11 = -1;
	Var0.f_5.f_7.f_1.f_68 = 1;
	Var0.f_5.f_7.f_1.f_68.f_1 = 1073741824;
	Var0.f_5.f_7.f_1.f_68.f_1.f_1 = 1073741824;
	Var0.f_5.f_7.f_1.f_68.f_1.f_3 = -1082130432;
	Var0.f_5.f_7.f_1.f_79.f_9 = 1082130432;
	Var0.f_5.f_7.f_1.f_79.f_10 = -1065353216;
	Var0.f_5.f_7.f_1.f_79.f_12 = 2;
	Var0.f_5.f_7.f_1.f_79.f_12.f_1.f_11 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_12.f_1.f_12 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_41 = 2;
	Var0.f_5.f_7.f_1.f_79.f_41.f_1 = 1065353216;
	Var0.f_5.f_7.f_1.f_79.f_41.f_1.f_11 = -1;
	Var0.f_5.f_7.f_1.f_79.f_41.f_1.f_13 = 1065353216;
	Var0.f_5.f_7.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
	Var0.f_5.f_7.f_1.f_79.f_68 = 1;
	Var0.f_5.f_7.f_1.f_79.f_68.f_1 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_68.f_1.f_1 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_68.f_1.f_3 = -1082130432;
	Var0.f_5.f_7.f_1.f_79.f_79.f_9 = 1082130432;
	Var0.f_5.f_7.f_1.f_79.f_79.f_10 = -1065353216;
	Var0.f_5.f_7.f_1.f_79.f_79.f_12 = 2;
	Var0.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_41 = 2;
	Var0.f_5.f_7.f_1.f_79.f_79.f_41.f_1 = 1065353216;
	Var0.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
	Var0.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var0.f_5.f_7.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var0.f_5.f_7.f_1.f_79.f_79.f_68 = 1;
	Var0.f_5.f_7.f_1.f_79.f_79.f_68.f_1 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_9 = 1082130432;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_10 = -1065353216;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_12 = 2;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_41 = 2;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_68 = 1;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
	Var0.f_5.f_7.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
	Var0.f_5.f_324 = 2;
	Var0.f_5.f_324.f_1.f_18 = 1082130432;
	Var0.f_5.f_324.f_1.f_19 = -1065353216;
	Var0.f_5.f_324.f_1.f_20 = 1;
	Var0.f_5.f_324.f_1.f_21 = 2;
	Var0.f_5.f_324.f_1.f_21.f_1 = 1065353216;
	Var0.f_5.f_324.f_1.f_21.f_1.f_11 = -1;
	Var0.f_5.f_324.f_1.f_21.f_1.f_13 = 1065353216;
	Var0.f_5.f_324.f_1.f_21.f_1.f_13.f_11 = -1;
	Var0.f_5.f_324.f_1.f_48.f_18 = 1082130432;
	Var0.f_5.f_324.f_1.f_48.f_19 = -1065353216;
	Var0.f_5.f_324.f_1.f_48.f_20 = 1;
	Var0.f_5.f_324.f_1.f_48.f_21 = 2;
	Var0.f_5.f_324.f_1.f_48.f_21.f_1 = 1065353216;
	Var0.f_5.f_324.f_1.f_48.f_21.f_1.f_11 = -1;
	Var0.f_5.f_324.f_1.f_48.f_21.f_1.f_13 = 1065353216;
	Var0.f_5.f_324.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
	Var0.f_426 = 2;
	Var0.f_426.f_1.f_19 = 11;
	Var0.f_426.f_1.f_31 = 11;
	Var0.f_426.f_1.f_43 = 11;
	Var0.f_426.f_1.f_55 = 11;
	Var0.f_426.f_1.f_67 = 11;
	Var0.f_426.f_1.f_79.f_19 = 11;
	Var0.f_426.f_1.f_79.f_31 = 11;
	Var0.f_426.f_1.f_79.f_43 = 11;
	Var0.f_426.f_1.f_79.f_55 = 11;
	Var0.f_426.f_1.f_79.f_67 = 11;
	Var0.f_592 = 4;
	Var0.f_597 = 4;
	iVar609 = 1;
	iVar607 = 0;
	while (iVar607 < 115)
	{
		iVar608 = 0;
		while (iVar608 < 4)
		{
			Var0.f_592[iVar608] = 0;
			iVar608++;
		}
		func_349(iVar607, &Var0);
		iVar608 = 0;
		while (iVar608 < 4)
		{
			if (!Var0.f_592[iVar608] == 0)
			{
				STREAMING::REQUEST_MODEL(Var0.f_592[iVar608]);
				if (!STREAMING::HAS_MODEL_LOADED(Var0.f_592[iVar608]))
				{
					iVar609 = 0;
				}
			}
			iVar608++;
		}
		iVar607++;
	}
	return iVar609;
}

int func_473()
{
	Var1.f_1 = 12;
	Var1.f_38 = 9;
	Var1.f_38.f_1 = -1;
	Var1.f_38.f_1.f_2 = -1;
	Var1.f_38.f_1.f_2.f_2 = -1;
	Var1.f_38.f_1.f_2.f_2.f_2 = -1;
	Var1.f_38.f_1.f_2.f_2.f_2.f_2 = -1;
	Var1.f_38.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var1.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var1.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var1.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var1.f_57 = -1569615261;
	iVar59 = 1;
	iVar0 = 0;
	while (iVar0 < 162)
	{
		func_381(func_454(iVar0, 0), &Var1);
		if (!Var1 == 0)
		{
			STREAMING::REQUEST_MODEL(Var1);
			if (!STREAMING::HAS_MODEL_LOADED(Var1))
			{
				iVar59 = 0;
			}
		}
		iVar0++;
	}
	return iVar59;
}

void func_474(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_6() != -1)
		{
			uParam0->f_3 = Global_1316783;
			Global_1316784 = Global_1316783;
		}
	}
	else
	{
		Global_1316784 = uParam0->f_3;
	}
	func_475();
}

void func_475()
{
	switch (Global_1316784)
	{
		case 2:
			if (func_487(func_6()))
			{
				Global_1316798 = AUDIO::FIND_RADIO_STATION_INDEX(1728275355);
			}
			else
			{
				Global_1316798 = AUDIO::FIND_RADIO_STATION_INDEX(534505150);
			}
			break;
		
		case 1:
			if (func_487(func_6()))
			{
				Global_1316798 = AUDIO::FIND_RADIO_STATION_INDEX(-2078417767);
			}
			else
			{
				Global_1316798 = AUDIO::FIND_RADIO_STATION_INDEX(-1266540061);
			}
			break;
		
		case 0:
			if (func_487(func_6()))
			{
				Global_1316798 = AUDIO::FIND_RADIO_STATION_INDEX(884956872);
			}
			else
			{
				Global_1316798 = AUDIO::FIND_RADIO_STATION_INDEX(2121858382);
			}
			break;
		
		case 3:
			if (func_487(func_6()))
			{
				Global_1316798 = AUDIO::FIND_RADIO_STATION_INDEX(-332827399);
			}
			else
			{
				Global_1316798 = AUDIO::FIND_RADIO_STATION_INDEX(2123736797);
			}
			break;
	}
}

int func_476(int iParam0, int iParam1)
{
	iVar1 = iParam0;
	if (iVar1 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_1628237[iVar1].f_11.f_514[iVar0] != 0 && Global_1628237[iVar1].f_11.f_514[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	if (iParam0 == func_34() || !func_112(iParam0))
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_322.f_7;
}

float func_478(int iParam0)
{
	if (iParam0 == func_34() || !func_112(iParam0))
	{
		return 0f;
	}
	return Global_1590535[iParam0].f_274.f_322.f_4;
}

bool func_479(int iParam0)
{
	if (iParam0 == func_34() || !func_112(iParam0))
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_2, 16);
}

bool func_480(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_3, 16);
}

int func_481()
{
	return func_482(22081, -1, -1);
}

int func_482(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_119();
	}
	iVar1 = func_484(iParam0, iParam1);
	uVar2 = func_483(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_483(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_484(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_119();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
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

int func_485(int iParam0)
{
	uVar0 = Global_1388054[func_118(-1)];
	if (MISC::IS_BIT_SET(uVar0, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_486()
{
	if (func_6() > -1)
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_476(func_6(), iVar0))
			{
				switch (iVar0)
				{
					case 1:
						iVar1 = 22;
						break;
					
					case 2:
						iVar1 = 23;
						break;
					
					case 3:
						iVar1 = 24;
						break;
					
					case 4:
						iVar1 = 25;
						break;
					
					case 5:
						iVar1 = 26;
						break;
					
					case 6:
						iVar1 = 27;
						break;
				}
				if (!MISC::IS_BIT_SET(Global_1316806, iVar1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	if (Global_1316792 == 8)
	{
		return 1;
	}
	return 0;
}

bool func_487(int iParam0)
{
	if (iParam0 == func_34() || !func_112(iParam0))
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_2, 1);
}

void func_488()
{
	Global_1316786 = 0;
	Global_1316780 = 0;
	Global_1316783 = -1;
	if (func_455(func_6(), 4))
	{
		if (func_497(func_6(), 2))
		{
			Global_1316783 = 2;
		}
		if (func_497(func_6(), 1))
		{
			Global_1316783 = 1;
		}
		if (func_497(func_6(), 0))
		{
			Global_1316783 = 0;
		}
		if (func_497(func_6(), 3))
		{
			Global_1316783 = 3;
		}
	}
	if (((func_496(func_6()) || func_495(func_6())) || func_494(func_6())) && func_455(func_6(), 4))
	{
		if (func_493(func_6()))
		{
			Global_1316771 = 1;
			if (func_496(func_6()))
			{
				Global_1316772 = 1;
			}
			else if (func_495(func_6()))
			{
				Global_1316772 = 2;
			}
			else if (func_494(func_6()))
			{
				Global_1316772 = 3;
			}
		}
		else if (func_492(func_6()))
		{
			Global_1316771 = 2;
			if (func_496(func_6()))
			{
				Global_1316772 = 1;
			}
			else if (func_495(func_6()))
			{
				Global_1316772 = 2;
			}
			else if (func_494(func_6()))
			{
				Global_1316772 = 3;
			}
		}
		else if (func_491(func_6()))
		{
			Global_1316771 = 3;
			if (func_496(func_6()))
			{
				Global_1316772 = 1;
			}
			else if (func_495(func_6()))
			{
				Global_1316772 = 2;
			}
			else if (func_494(func_6()))
			{
				Global_1316772 = 3;
			}
		}
		Global_1316778 = 1;
	}
	else
	{
		Global_1316771 = 0;
		Global_1316772 = 0;
		Global_1316778 = 0;
	}
	if (func_490(func_6()))
	{
		Global_1316775 = 1;
		Global_1316774 = 1;
	}
	else
	{
		Global_1316775 = 0;
		Global_1316774 = 0;
	}
	if ((func_455(func_6(), 0) && func_455(func_6(), 1)) && func_455(func_6(), 4))
	{
		Global_1316781 = 1;
		Global_1316780 = 1;
		Global_1316786 = 4;
		if (Global_1316783 == -1)
		{
			Global_1316783 = 0;
		}
	}
	else
	{
		if ((!func_455(func_6(), 0) && !func_455(func_6(), 1)) && !func_455(func_6(), 4))
		{
			Global_1316786 = 0;
		}
		if (!func_455(func_6(), 4))
		{
			if (func_455(func_6(), 0))
			{
				if (!func_455(func_6(), 1))
				{
					Global_1316786 = 1;
				}
			}
			else if (func_455(func_6(), 1))
			{
				Global_1316786 = 2;
			}
		}
		if (func_455(func_6(), 1) && func_455(func_6(), 0))
		{
			Global_1316786 = 3;
		}
		if (func_455(func_6(), 0))
		{
		}
		Global_1316781 = 0;
	}
	if (func_487(func_6()))
	{
		Global_1316781 = 0;
	}
	iVar0 = SYSTEM::FLOOR(func_478(func_6()));
	if (!iVar0 > 50)
	{
		Global_1316790 = 3;
		Global_1316788 = 3;
	}
	if (Global_1316786 != 4)
	{
		Global_1316790 = 4;
		Global_1316788 = 4;
	}
	Global_1316800 = SYSTEM::TO_FLOAT(iVar0);
	func_489(iVar0);
}

void func_489(int iParam0)
{
	if (iParam0 <= 20)
	{
		Global_1316793 = 2;
	}
	else if (iParam0 <= 40)
	{
		Global_1316793 = 3;
	}
	else if (iParam0 <= 60)
	{
		Global_1316793 = 4;
	}
	else if (iParam0 <= 80)
	{
		Global_1316793 = 0;
	}
	else
	{
		Global_1316793 = 1;
	}
}

bool func_490(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 19);
}

bool func_491(int iParam0)
{
	return (!func_493(iParam0) && !func_493(iParam0));
}

bool func_492(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 18);
}

bool func_493(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 17);
}

bool func_494(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 16);
}

bool func_495(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 15);
}

bool func_496(int iParam0)
{
	if (iParam0 == func_34())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 14);
}

bool func_497(int iParam0, int iParam1)
{
	if (iParam0 == func_34() || iParam1 == -1)
	{
		return 0;
	}
	iVar0 = iParam1 + 20;
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, iVar0);
}

int func_498(struct<3> Param0)
{
	if (((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1600.156f, -3006.084f, -79.94186f, -1607.026f, -3006.067f, -77.34952f, 6f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1613.315f, -2997.625f, -79.10899f, -1622.321f, -2997.599f, -75.71148f, 4f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1611.147f, -3005.565f, -80.10698f, -1611.038f, -2995.335f, -76.43851f, 5.25f, 0, 1)) || func_461(Param0))
	{
		return 1;
	}
	return 0;
}

int func_499(int iParam0)
{
	return func_498(ENTITY::GET_ENTITY_COORDS(uParam0, 0));
}

var func_500(struct<3> Param0)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1586.018f, -3012.4f, -79.92311f, -1623.579f, -3012.425f, -72.5406f, 20.75f, 0, 1);
}

bool func_501(struct<3> Param0)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1583.535f, -3012.318f, -76.99097f, -1591.419f, -3012.316f, -74.00504f, 14.75f, 0, 1);
}

var func_502(int iParam0)
{
	return func_500(ENTITY::GET_ENTITY_COORDS(uParam0, 0));
}

bool func_503(int iParam0)
{
	return func_501(ENTITY::GET_ENTITY_COORDS(uParam0, 0));
}

var func_504(struct<3> Param0)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1579.186f, -3004.477f, -79.85478f, -1579.184f, -3019.5f, -77.86129f, 13.75f, 0, 1);
}

var func_505(struct<3> Param0)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1567.861f, -3003.477f, -74.27821f, -1579.619f, -3003.576f, -79.96021f, 3f, 0, 1);
}

var func_506(struct<3> Param0)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1569.293f, -3002.447f, -77.98004f, -1569.389f, -3018.851f, -72.51322f, 7.5f, 0, 1);
}

var func_507(int iParam0)
{
	return func_504(ENTITY::GET_ENTITY_COORDS(uParam0, 0));
}

var func_508(int iParam0)
{
	return func_505(ENTITY::GET_ENTITY_COORDS(uParam0, 0));
}

var func_509(int iParam0)
{
	return func_506(ENTITY::GET_ENTITY_COORDS(uParam0, 0));
}

void func_510(var uParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (*uParam0 != Global_1316765)
		{
			*uParam0 = Global_1316765;
		}
	}
}

void func_511()
{
	if (Global_1316773 == 0)
	{
		func_462(8);
	}
}

void func_512(var uParam0, var uParam1)
{
	if (Global_1316765 > 0)
	{
		if ((((Global_1316784 != -1 && !func_480(PLAYER::PLAYER_ID())) && !func_479(func_6())) && !func_480(func_6())) && Global_1316798 > 0)
		{
			if (Global_1370521)
			{
				return;
			}
			if (func_5(&Global_1370517))
			{
				if (Global_1370523)
				{
					if (uParam0->f_7947 != -1)
					{
						if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7947]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7947], 0))
						{
							TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7947]);
						}
						uParam0[uParam0->f_7947]->f_10 = 0;
						uParam0[uParam0->f_7947]->f_17 = 0;
						uParam0->f_7421[uParam0->f_7947] = 1;
						if (func_144(uParam0[uParam0->f_7947]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0[uParam0->f_7947]->f_1[0]) && !ENTITY::IS_ENTITY_DEAD(uParam0[uParam0->f_7947]->f_1[0], 0))
							{
								ENTITY::SET_ENTITY_VISIBLE(uParam0[uParam0->f_7947]->f_1[0], false, 0);
							}
						}
					}
					if (uParam0->f_7948 != -1)
					{
						if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7948]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7948], 0))
						{
							TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7948]);
						}
						uParam0[uParam0->f_7948]->f_10 = 0;
						uParam0[uParam0->f_7948]->f_17 = 0;
						uParam0->f_7421[uParam0->f_7948] = 1;
					}
					Global_1370523 = 0;
				}
				if (!func_3(&Global_1370517, Global_1370519, 0))
				{
					uParam0->f_7252 = -1;
					func_518();
					return;
				}
				else
				{
					Global_1370520 = 0;
					func_2(&Global_1370517);
				}
			}
			else if (Global_1370520)
			{
				if (!func_5(&Global_1370517))
				{
					uParam0->f_7252 = -1;
					func_518();
					return;
				}
			}
			if ((NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && func_6() == PLAYER::PLAYER_ID()) || ((func_6() != func_34() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_6())))
			{
				if (uParam0->f_7252 != Global_1316798)
				{
					uParam0->f_7252 = Global_1316798;
					uParam0->f_7253 = 0;
					Global_1316770 = 0;
					sVar0 = AUDIO::GET_RADIO_STATION_NAME(uParam0->f_7252);
					uVar1 = func_237(MISC::GET_HASH_KEY(sVar0), 1);
					AUDIO::FREEZE_RADIO_STATION(sVar0);
					iVar2 = 0;
					if (!func_517(uParam0))
					{
						iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
						iVar2 = iVar3 * 60 * 1000;
					}
					if (func_6() != func_34())
					{
						if (!func_517(uParam0) && func_516(func_6()))
						{
							iVar2 = func_515(func_6());
						}
						else if (func_6() == PLAYER::PLAYER_ID())
						{
							func_514(iVar2);
						}
					}
					AUDIO::_SET_RADIO_TRACK_MIX(sVar0, uVar1, iVar2);
					AUDIO::UNFREEZE_RADIO_STATION(sVar0);
					uParam0->f_7943 = iVar2;
					uParam0->f_7942 = 0;
					if (uParam0->f_7947 != -1)
					{
						if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7947]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7947], 0))
						{
							TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7947]);
						}
						uParam0[uParam0->f_7947]->f_10 = 0;
						uParam0[uParam0->f_7947]->f_17 = 0;
						uParam0->f_7421[uParam0->f_7947] = 1;
						iVar4 = 0;
						while (iVar4 < 4)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0[uParam0->f_7947]->f_1[iVar4]) && !ENTITY::IS_ENTITY_DEAD(uParam0[uParam0->f_7947]->f_1[iVar4], 0))
							{
								if (ENTITY::GET_ENTITY_MODEL(uParam0[uParam0->f_7947]->f_1[iVar4]) == -648546264)
								{
									ENTITY::SET_ENTITY_VISIBLE(uParam0[uParam0->f_7947]->f_1[iVar4], false, 0);
								}
							}
							iVar4++;
						}
					}
					if (uParam0->f_7948 != -1)
					{
						if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7948]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7948], 0))
						{
							TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7948]);
						}
						uParam0[uParam0->f_7948]->f_10 = 0;
						uParam0[uParam0->f_7948]->f_17 = 0;
						uParam0->f_7421[uParam0->f_7948] = 1;
						iVar5 = 0;
						while (iVar5 < 4)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0[uParam0->f_7948]->f_1[iVar5]) && !ENTITY::IS_ENTITY_DEAD(uParam0[uParam0->f_7948]->f_1[iVar5], 0))
							{
								if (ENTITY::GET_ENTITY_MODEL(uParam0[uParam0->f_7948]->f_1[iVar5]) == -648546264)
								{
									ENTITY::SET_ENTITY_VISIBLE(uParam0[uParam0->f_7948]->f_1[iVar5], false, 0);
								}
							}
							iVar5++;
						}
					}
					func_95(&(uParam1->f_1), 0, 1);
					uParam1->f_1 = NETWORK::GET_TIME_OFFSET(uParam1->f_1, -iVar2);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Bogs", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Hall", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Stairs", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_garage", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area_2", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_office", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_rear_L_corridor", 1);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_Bogs", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_Entry_Hall", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_Entry_Stairs", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_garage", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_main_area_2", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_main_area", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_office", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_rear_L_corridor", sVar0);
					Global_1370522 = 0;
				}
			}
			else if (uParam0->f_7252 != Global_1316798)
			{
				if (func_5(&(uParam1->f_1)))
				{
					uParam0->f_7252 = Global_1316798;
					uParam0->f_7253 = 0;
					Global_1316770 = 0;
					iVar6 = func_513(&(uParam1->f_1), 0, 1);
					sVar0 = AUDIO::GET_RADIO_STATION_NAME(uParam0->f_7252);
					uVar7 = func_237(MISC::GET_HASH_KEY(sVar0), 1);
					if (func_6() != func_34() && func_6() == PLAYER::PLAYER_ID())
					{
						func_514(iVar6);
					}
					AUDIO::FREEZE_RADIO_STATION(sVar0);
					AUDIO::_SET_RADIO_TRACK_MIX(sVar0, uVar7, iVar6);
					AUDIO::UNFREEZE_RADIO_STATION(sVar0);
					uParam0->f_7943 = iVar6;
					uParam0->f_7942 = 0;
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Bogs", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Hall", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Stairs", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_garage", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area_2", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_office", 1);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_rear_L_corridor", 1);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_Bogs", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_Entry_Hall", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_Entry_Stairs", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_main_area_2", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_garage", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_main_area", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_office", sVar0);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_rear_L_corridor", sVar0);
					Global_1370522 = 0;
				}
			}
		}
		else if (func_480(PLAYER::PLAYER_ID()) || func_480(func_6()))
		{
			if (!Global_1370522)
			{
				Global_1370522 = 1;
			}
			if (uParam0->f_7252 != AUDIO::FIND_RADIO_STATION_INDEX(-675508082))
			{
				sVar0 = "RADIO_26_DLC_BATTLE_CLUB_WARMUP";
				AUDIO::FREEZE_RADIO_STATION(sVar0);
				AUDIO::_SET_RADIO_TRACK_MIX(sVar0, "DLC_BATTLE_MUSIC_BATTLE_MIX_WARMUP", 0);
				AUDIO::UNFREEZE_RADIO_STATION(sVar0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Bogs", 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Hall", 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Stairs", 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_garage", 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area_2", 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area", 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_office", 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_rear_L_corridor", 1);
				AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_Bogs", sVar0);
				AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_Entry_Hall", sVar0);
				AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_Entry_Stairs", sVar0);
				AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_main_area_2", sVar0);
				AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_garage", sVar0);
				AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_main_area", sVar0);
				AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_office", sVar0);
				AUDIO::SET_EMITTER_RADIO_STATION("SE_ba_dlc_int_01_rear_L_corridor", sVar0);
				uParam0->f_7252 = AUDIO::FIND_RADIO_STATION_INDEX(-675508082);
			}
		}
		else
		{
			if (func_479(func_6()))
			{
				func_95(&Global_1370517, 0, 0);
				Global_1370519 = 1000;
				Global_1370523 = 1;
			}
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Bogs", 0);
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Hall", 0);
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Stairs", 0);
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area_2", 0);
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_garage", 0);
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area", 0);
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_office", 0);
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_rear_L_corridor", 0);
		}
	}
}

var func_513(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_514(int iParam0)
{
	if (func_516(PLAYER::PLAYER_ID()))
	{
		func_2(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_10));
	}
	func_4(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_10), 0, 0);
	if (iParam0 > 0)
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_10 = NETWORK::GET_TIME_OFFSET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_322.f_10, -iParam0);
	}
}

int func_515(int iParam0)
{
	if (func_516(iParam0))
	{
		return func_513(&(Global_1590535[iParam0].f_274.f_322.f_10), 0, 0);
	}
	return -1;
}

int func_516(int iParam0)
{
	if (iParam0 != func_34())
	{
		return func_5(&(Global_1590535[iParam0].f_274.f_322.f_10));
	}
	return 0;
}

int func_517(var uParam0)
{
	if (uParam0->f_7568)
	{
		return 1;
	}
	else if (Global_1370522)
	{
		return 1;
	}
	return 0;
}

void func_518()
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Bogs", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Hall", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Stairs", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area_2", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_garage", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_office", 0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_rear_L_corridor", 0);
}

void func_519(var uParam0)
{
	if (uParam0->f_7252 != -1)
	{
		Global_1316769 = AUDIO::_0x3E65CDE5215832C1(AUDIO::GET_RADIO_STATION_NAME(uParam0->f_7252));
		iVar0 = Global_1316767;
		func_520(AUDIO::_0x34D66BC058019CE0(AUDIO::GET_RADIO_STATION_NAME(uParam0->f_7252)), Global_1316769, &Global_1316767, &Global_1316768, &Global_1316770, &(uParam0->f_7253));
		if (iVar0 != Global_1316767)
		{
			iVar1 = 0;
			while (iVar1 < 125)
			{
				if (func_134(uParam0[iVar1]->f_6))
				{
					uParam0[iVar1]->f_49 = -1;
					uParam0[iVar1]->f_52 = -1;
				}
				iVar1++;
			}
			switch (iVar0)
			{
				case 1:
				case 0:
					if (Global_1316767 != 1 && Global_1316767 != 0)
					{
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj@low_intesnsity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj_transitions@from_low_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups@low_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups_transitions@from_low_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props@low_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props_transitions@from_low_intensity");
						if (Global_1316767 != 2)
						{
							STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@club_ambientpeds@low-med_intensity");
						}
					}
					break;
				
				case 2:
					if (Global_1316767 != 2)
					{
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj@med_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj_transitions@from_med_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups@med_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups_transitions@from_med_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props@med_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props_transitions@from_med_intensity");
						if (Global_1316767 != 1 && Global_1316767 != 0)
						{
							STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@club_ambientpeds@low-med_intensity");
						}
					}
					break;
				
				case 3:
				case 4:
					if (Global_1316767 != 3 && Global_1316767 != 4)
					{
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj@hi_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj_transitions@from_hi_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups@hi_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups_transitions@from_hi_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props@hi_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props_transitions@from_hi_intensity");
						STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@dancers@club_ambientpeds@med-hi_intensity");
					}
					break;
			}
			switch (Global_1316767)
			{
				case 1:
				case 0:
					if (iVar0 != 1 && iVar0 != 0)
					{
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj@low_intesnsity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj_transitions@from_low_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups@low_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups_transitions@from_low_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props@low_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props_transitions@from_low_intensity");
						if (iVar0 != 2)
						{
							STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@club_ambientpeds@low-med_intensity");
						}
					}
					break;
				
				case 2:
					if (iVar0 != 2)
					{
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj@med_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj_transitions@from_med_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups@med_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups_transitions@from_med_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props@med_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props_transitions@from_med_intensity");
						if (iVar0 != 1 && iVar0 != 0)
						{
							STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@club_ambientpeds@low-med_intensity");
						}
					}
					break;
				
				case 3:
				case 4:
					if (iVar0 != 3 && iVar0 != 4)
					{
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj@hi_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_facedj_transitions@from_hi_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups@hi_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_groups_transitions@from_hi_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props@hi_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@crowddance_single_props_transitions@from_hi_intensity");
						STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@dancers@club_ambientpeds@med-hi_intensity");
					}
					break;
				}
			}
	}
}

void func_520(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	func_521(iParam0, *uParam5, &iVar2, &iVar0);
	if (iVar2 > iParam1 || iVar2 < 0)
	{
		*uParam5 = 0;
	}
	else
	{
		*uParam5++;
	}
	while (iVar2 < iParam1 && iVar2 >= 0)
	{
		iVar1 = iVar0;
		func_521(iParam0, *uParam5, &iVar2, &iVar0);
		*uParam5++;
	}
	if (iVar2 < 0)
	{
		iVar2 = -1;
	}
	*uParam4 = iVar2;
	*uParam5 = (*uParam5 - 2);
	if (*uParam5 < 0)
	{
		*uParam5 = 0;
	}
	*uParam2 = iVar1;
	*uParam3 = iVar0;
}

void func_521(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam2 = -1;
	*iParam3 = 0;
	switch (iParam0)
	{
		case 1511037175:
		case 1615677084:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 4;
					break;
				
				case 1:
					*iParam2 = 8571;
					*iParam3 = 1;
					break;
				
				case 2:
					*iParam2 = 40298;
					*iParam3 = 2;
					break;
				
				case 3:
					*iParam2 = 96807;
					*iParam3 = 3;
					break;
				
				case 4:
					*iParam2 = 133109;
					*iParam3 = 4;
					break;
				
				case 5:
					*iParam2 = 157311;
					*iParam3 = 3;
					break;
				
				case 6:
					*iParam2 = 221345;
					*iParam3 = 4;
					break;
				
				case 7:
					*iParam2 = 237479;
					*iParam3 = 3;
					break;
				
				case 8:
					*iParam2 = 273555;
					*iParam3 = 2;
					break;
				
				case 9:
					*iParam2 = 309502;
					*iParam3 = 4;
					break;
				
				case 10:
					*iParam2 = 325448;
					*iParam3 = 3;
					break;
				
				case 11:
					*iParam2 = 373109;
					*iParam3 = 2;
					break;
				
				case 12:
					*iParam2 = 404952;
					*iParam3 = 4;
					break;
				
				case 13:
					*iParam2 = 420768;
					*iParam3 = 2;
					break;
				
				case 14:
					*iParam2 = 436604;
					*iParam3 = 3;
					break;
				
				case 15:
					*iParam2 = 468185;
					*iParam3 = 4;
					break;
				
				case 16:
					*iParam2 = 483943;
					*iParam3 = 3;
					break;
				
				case 17:
					*iParam2 = 558655;
					*iParam3 = 2;
					break;
				
				case 18:
					*iParam2 = 619053;
					*iParam3 = 4;
					break;
				
				case 19:
					*iParam2 = 630756;
					*iParam3 = 3;
					break;
				
				case 20:
					*iParam2 = 648908;
					*iParam3 = 4;
					break;
				
				case 21:
					*iParam2 = 681236;
					*iParam3 = 2;
					break;
				
				case 22:
					*iParam2 = 696807;
					*iParam3 = 3;
					break;
				
				case 23:
					*iParam2 = 758518;
					*iParam3 = 4;
					break;
				
				case 24:
					*iParam2 = 774073;
					*iParam3 = 2;
					break;
				
				case 25:
					*iParam2 = 805061;
					*iParam3 = 3;
					break;
				
				case 26:
					*iParam2 = 851597;
					*iParam3 = 4;
					break;
				
				case 27:
					*iParam2 = 867127;
					*iParam3 = 2;
					break;
				
				case 28:
					*iParam2 = 898218;
					*iParam3 = 3;
					break;
				
				case 29:
					*iParam2 = 944874;
					*iParam3 = 4;
					break;
				
				case 30:
					*iParam2 = 956604;
					*iParam3 = 2;
					break;
				
				case 31:
					*iParam2 = 976093;
					*iParam3 = 4;
					break;
				
				case 32:
					*iParam2 = 983891;
					*iParam3 = 3;
					break;
				
				case 33:
					*iParam2 = 1018992;
					*iParam3 = 4;
					break;
				
				case 34:
					*iParam2 = 1038438;
					*iParam3 = 3;
					break;
				
				case 35:
					*iParam2 = 1077186;
					*iParam3 = 4;
					break;
				
				case 36:
					*iParam2 = 1093361;
					*iParam3 = 3;
					break;
				
				case 37:
					*iParam2 = 1116863;
					*iParam3 = 2;
					break;
				
				case 38:
					*iParam2 = 1124712;
					*iParam3 = 4;
					break;
				
				case 39:
					*iParam2 = 1136475;
					*iParam3 = 3;
					break;
				
				case 40:
					*iParam2 = 1165714;
					*iParam3 = 2;
					break;
				
				case 41:
					*iParam2 = 1171829;
					*iParam3 = 4;
					break;
				
				case 42:
					*iParam2 = 1187549;
					*iParam3 = 3;
					break;
				
				case 43:
					*iParam2 = 1296242;
					*iParam3 = 4;
					break;
				
				case 44:
					*iParam2 = 1312963;
					*iParam3 = 3;
					break;
				
				case 45:
					*iParam2 = 1387225;
					*iParam3 = 4;
					break;
				
				case 46:
					*iParam2 = 1406418;
					*iParam3 = 3;
					break;
				
				case 47:
					*iParam2 = 1476388;
					*iParam3 = 2;
					break;
				
				case 48:
					*iParam2 = 1544111;
					*iParam3 = 3;
					break;
				
				case 49:
					*iParam2 = 1554686;
					*iParam3 = 4;
					break;
				
				case 50:
					*iParam2 = 1570301;
					*iParam3 = 3;
					break;
				
				case 51:
					*iParam2 = 1617389;
					*iParam3 = 2;
					break;
				
				case 52:
					*iParam2 = func_236(iParam0);
					*iParam3 = 4;
					break;
			}
			break;
		
		case -1942586046:
		case 654464007:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 4;
					break;
				
				case 1:
					*iParam2 = 16673;
					*iParam3 = 3;
					break;
				
				case 2:
					*iParam2 = 74228;
					*iParam3 = 2;
					break;
				
				case 3:
					*iParam2 = 111694;
					*iParam3 = 3;
					break;
				
				case 4:
					*iParam2 = 126165;
					*iParam3 = 4;
					break;
				
				case 5:
					*iParam2 = 141796;
					*iParam3 = 3;
					break;
				
				case 6:
					*iParam2 = 157311;
					*iParam3 = 2;
					break;
				
				case 7:
					*iParam2 = 198878;
					*iParam3 = 4;
					break;
				
				case 8:
					*iParam2 = 216020;
					*iParam3 = 3;
					break;
				
				case 9:
					*iParam2 = 331158;
					*iParam3 = 2;
					break;
				
				case 10:
					*iParam2 = 346759;
					*iParam3 = 4;
					break;
				
				case 11:
					*iParam2 = 362314;
					*iParam3 = 3;
					break;
				
				case 12:
					*iParam2 = 440347;
					*iParam3 = 2;
					break;
				
				case 13:
					*iParam2 = 456020;
					*iParam3 = 3;
					break;
				
				case 14:
					*iParam2 = 471475;
					*iParam3 = 4;
					break;
				
				case 15:
					*iParam2 = 487012;
					*iParam3 = 3;
					break;
				
				case 16:
					*iParam2 = 564903;
					*iParam3 = 4;
					break;
				
				case 17:
					*iParam2 = 574133;
					*iParam3 = 3;
					break;
				
				case 18:
					*iParam2 = 611555;
					*iParam3 = 4;
					break;
				
				case 19:
					*iParam2 = 627140;
					*iParam3 = 3;
					break;
				
				case 20:
					*iParam2 = 704927;
					*iParam3 = 4;
					break;
				
				case 21:
					*iParam2 = 722304;
					*iParam3 = 2;
					break;
				
				case 22:
					*iParam2 = 813571;
					*iParam3 = 3;
					break;
				
				case 23:
					*iParam2 = 852391;
					*iParam3 = 4;
					break;
				
				case 24:
					*iParam2 = 867939;
					*iParam3 = 3;
					break;
				
				case 25:
					*iParam2 = 952968;
					*iParam3 = 4;
					break;
				
				case 26:
					*iParam2 = 966388;
					*iParam3 = 2;
					break;
				
				case 27:
					*iParam2 = 1014715;
					*iParam3 = 4;
					break;
				
				case 28:
					*iParam2 = 1029082;
					*iParam3 = 3;
					break;
				
				case 29:
					*iParam2 = 1045361;
					*iParam3 = 2;
					break;
				
				case 30:
					*iParam2 = 1106137;
					*iParam3 = 3;
					break;
				
				case 31:
					*iParam2 = 1119694;
					*iParam3 = 4;
					break;
				
				case 32:
					*iParam2 = 1134878;
					*iParam3 = 3;
					break;
				
				case 33:
					*iParam2 = 1152510;
					*iParam3 = 2;
					break;
				
				case 34:
					*iParam2 = 1198061;
					*iParam3 = 3;
					break;
				
				case 35:
					*iParam2 = 1274617;
					*iParam3 = 4;
					break;
				
				case 36:
					*iParam2 = 1282306;
					*iParam3 = 3;
					break;
				
				case 37:
					*iParam2 = 1305248;
					*iParam3 = 4;
					break;
				
				case 38:
					*iParam2 = 1320510;
					*iParam3 = 3;
					break;
				
				case 39:
					*iParam2 = 1366551;
					*iParam3 = 2;
					break;
				
				case 40:
					*iParam2 = 1382224;
					*iParam3 = 4;
					break;
				
				case 41:
					*iParam2 = 1393000;
					*iParam3 = 2;
					break;
				
				case 42:
					*iParam2 = 1427779;
					*iParam3 = 4;
					break;
				
				case 43:
					*iParam2 = 1443091;
					*iParam3 = 3;
					break;
				
				case 44:
					*iParam2 = 1626967;
					*iParam3 = 4;
					break;
				
				case 45:
					*iParam2 = 1653571;
					*iParam3 = 3;
					break;
				
				case 46:
					*iParam2 = 1760837;
					*iParam3 = 2;
					break;
				
				case 47:
					*iParam2 = 1780055;
					*iParam3 = 4;
					break;
				
				case 48:
					*iParam2 = 1795362;
					*iParam3 = 3;
					break;
				
				case 49:
					*iParam2 = 1825980;
					*iParam3 = 2;
					break;
				
				case 50:
					*iParam2 = 1856632;
					*iParam3 = 4;
					break;
				
				case 51:
					*iParam2 = 1871947;
					*iParam3 = 3;
					break;
				
				case 52:
					*iParam2 = 1927450;
					*iParam3 = 2;
					break;
				
				case 53:
					*iParam2 = 1947449;
					*iParam3 = 4;
					break;
				
				case 54:
					*iParam2 = 1960002;
					*iParam3 = 3;
					break;
				
				case 55:
					*iParam2 = 2117002;
					*iParam3 = 2;
					break;
				
				case 56:
					*iParam2 = 2132321;
					*iParam3 = 4;
					break;
				
				case 57:
					*iParam2 = 2139939;
					*iParam3 = 3;
					break;
				
				case 58:
					*iParam2 = 2162959;
					*iParam3 = 4;
					break;
				
				case 59:
					*iParam2 = 2178284;
					*iParam3 = 3;
					break;
				
				case 60:
					*iParam2 = 2242796;
					*iParam3 = 4;
					break;
				
				case 61:
					*iParam2 = 2256738;
					*iParam3 = 3;
					break;
				
				case 62:
					*iParam2 = 2277827;
					*iParam3 = 4;
					break;
				
				case 63:
					*iParam2 = 2293137;
					*iParam3 = 3;
					break;
				
				case 64:
					*iParam2 = func_236(iParam0);
					*iParam3 = 4;
					break;
			}
			break;
		
		case -1910046413:
		case 433535409:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 4;
					break;
				
				case 1:
					*iParam2 = 16320;
					*iParam3 = 3;
					break;
				
				case 2:
					*iParam2 = 31680;
					*iParam3 = 4;
					break;
				
				case 3:
					*iParam2 = 39303;
					*iParam3 = 3;
					break;
				
				case 4:
					*iParam2 = 70080;
					*iParam3 = 2;
					break;
				
				case 5:
					*iParam2 = 116160;
					*iParam3 = 4;
					break;
				
				case 6:
					*iParam2 = 138720;
					*iParam3 = 3;
					break;
				
				case 7:
					*iParam2 = 154080;
					*iParam3 = 4;
					break;
				
				case 8:
					*iParam2 = 161760;
					*iParam3 = 2;
					break;
				
				case 9:
					*iParam2 = 253645;
					*iParam3 = 3;
					break;
				
				case 10:
					*iParam2 = 284261;
					*iParam3 = 2;
					break;
				
				case 11:
					*iParam2 = 345600;
					*iParam3 = 4;
					break;
				
				case 12:
					*iParam2 = 360960;
					*iParam3 = 2;
					break;
				
				case 13:
					*iParam2 = 391633;
					*iParam3 = 4;
					break;
				
				case 14:
					*iParam2 = 406962;
					*iParam3 = 3;
					break;
				
				case 15:
					*iParam2 = 430002;
					*iParam3 = 2;
					break;
				
				case 16:
					*iParam2 = 483727;
					*iParam3 = 4;
					break;
				
				case 17:
					*iParam2 = 499123;
					*iParam3 = 3;
					break;
				
				case 18:
					*iParam2 = 606788;
					*iParam3 = 4;
					break;
				
				case 19:
					*iParam2 = 618324;
					*iParam3 = 3;
					break;
				
				case 20:
					*iParam2 = 668372;
					*iParam3 = 4;
					break;
				
				case 21:
					*iParam2 = 683792;
					*iParam3 = 3;
					break;
				
				case 22:
					*iParam2 = 861257;
					*iParam3 = 4;
					break;
				
				case 23:
					*iParam2 = 876700;
					*iParam3 = 3;
					break;
				
				case 24:
					*iParam2 = 892165;
					*iParam3 = 4;
					break;
				
				case 25:
					*iParam2 = 907609;
					*iParam3 = 3;
					break;
				
				case 26:
					*iParam2 = 938503;
					*iParam3 = 4;
					break;
				
				case 27:
					*iParam2 = 954025;
					*iParam3 = 3;
					break;
				
				case 28:
					*iParam2 = 1015680;
					*iParam3 = 2;
					break;
				
				case 29:
					*iParam2 = 1023647;
					*iParam3 = 4;
					break;
				
				case 30:
					*iParam2 = 1031520;
					*iParam3 = 2;
					break;
				
				case 31:
					*iParam2 = 1039180;
					*iParam3 = 4;
					break;
				
				case 32:
					*iParam2 = 1070170;
					*iParam3 = 3;
					break;
				
				case 33:
					*iParam2 = 1178751;
					*iParam3 = 4;
					break;
				
				case 34:
					*iParam2 = func_236(iParam0);
					*iParam3 = 4;
					break;
			}
			break;
		
		case -858019879:
		case 582584588:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 1;
					break;
				
				case 1:
					*iParam2 = 61935;
					*iParam3 = 2;
					break;
				
				case 2:
					*iParam2 = 77419;
					*iParam3 = 3;
					break;
				
				case 3:
					*iParam2 = 100652;
					*iParam3 = 4;
					break;
				
				case 4:
					*iParam2 = 131613;
					*iParam3 = 1;
					break;
				
				case 5:
					*iParam2 = 162581;
					*iParam3 = 2;
					break;
				
				case 6:
					*iParam2 = 209049;
					*iParam3 = 1;
					break;
				
				case 7:
					*iParam2 = 224516;
					*iParam3 = 3;
					break;
				
				case 8:
					*iParam2 = 286452;
					*iParam3 = 2;
					break;
				
				case 9:
					*iParam2 = 317419;
					*iParam3 = 4;
					break;
				
				case 10:
					*iParam2 = 356116;
					*iParam3 = 2;
					break;
				
				case 11:
					*iParam2 = 379355;
					*iParam3 = 4;
					break;
				
				case 12:
					*iParam2 = 425780;
					*iParam3 = 3;
					break;
				
				case 13:
					*iParam2 = 472257;
					*iParam3 = 2;
					break;
				
				case 14:
					*iParam2 = 503125;
					*iParam3 = 3;
					break;
				
				case 15:
					*iParam2 = 518710;
					*iParam3 = 1;
					break;
				
				case 16:
					*iParam2 = 534194;
					*iParam3 = 3;
					break;
				
				case 17:
					*iParam2 = 580645;
					*iParam3 = 4;
					break;
				
				case 18:
					*iParam2 = 619355;
					*iParam3 = 2;
					break;
				
				case 19:
					*iParam2 = 689032;
					*iParam3 = 3;
					break;
				
				case 20:
					*iParam2 = 735485;
					*iParam3 = 4;
					break;
				
				case 21:
					*iParam2 = 781938;
					*iParam3 = 3;
					break;
				
				case 22:
					*iParam2 = 847742;
					*iParam3 = 2;
					break;
				
				case 23:
					*iParam2 = 905806;
					*iParam3 = 3;
					break;
				
				case 24:
					*iParam2 = 936738;
					*iParam3 = 4;
					break;
				
				case 25:
					*iParam2 = 967742;
					*iParam3 = 1;
					break;
				
				case 26:
					*iParam2 = func_236(iParam0);
					*iParam3 = 1;
					break;
			}
			break;
		
		case -1104573835:
		case 956020112:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 1;
					break;
				
				case 1:
					*iParam2 = 2419;
					*iParam3 = 2;
					break;
				
				case 2:
					*iParam2 = 33387;
					*iParam3 = 3;
					break;
				
				case 3:
					*iParam2 = 64355;
					*iParam3 = 1;
					break;
				
				case 4:
					*iParam2 = 95323;
					*iParam3 = 4;
					break;
				
				case 5:
					*iParam2 = 153387;
					*iParam3 = 2;
					break;
				
				case 6:
					*iParam2 = 188226;
					*iParam3 = 4;
					break;
				
				case 7:
					*iParam2 = 219194;
					*iParam3 = 3;
					break;
				
				case 8:
					*iParam2 = 250161;
					*iParam3 = 1;
					break;
				
				case 9:
					*iParam2 = 265645;
					*iParam3 = 2;
					break;
				
				case 10:
					*iParam2 = 296613;
					*iParam3 = 3;
					break;
				
				case 11:
					*iParam2 = 358548;
					*iParam3 = 2;
					break;
				
				case 12:
					*iParam2 = 389529;
					*iParam3 = 4;
					break;
				
				case 13:
					*iParam2 = 435968;
					*iParam3 = 2;
					break;
				
				case 14:
					*iParam2 = 497419;
					*iParam3 = 1;
					break;
				
				case 15:
					*iParam2 = 513387;
					*iParam3 = 2;
					break;
				
				case 16:
					*iParam2 = 575323;
					*iParam3 = 4;
					break;
				
				case 17:
					*iParam2 = 606290;
					*iParam3 = 3;
					break;
				
				case 18:
					*iParam2 = 668226;
					*iParam3 = 2;
					break;
				
				case 19:
					*iParam2 = 735484;
					*iParam3 = 3;
					break;
				
				case 20:
					*iParam2 = 788226;
					*iParam3 = 4;
					break;
				
				case 21:
					*iParam2 = 810484;
					*iParam3 = 3;
					break;
				
				case 22:
					*iParam2 = 923710;
					*iParam3 = 4;
					break;
				
				case 23:
					*iParam2 = 957097;
					*iParam3 = 2;
					break;
				
				case 24:
					*iParam2 = 1003548;
					*iParam3 = 3;
					break;
				
				case 25:
					*iParam2 = 1047581;
					*iParam3 = 4;
					break;
				
				case 26:
					*iParam2 = 1109516;
					*iParam3 = 3;
					break;
				
				case 27:
					*iParam2 = 1140484;
					*iParam3 = 2;
					break;
				
				case 28:
					*iParam2 = 1155968;
					*iParam3 = 4;
					break;
				
				case 29:
					*iParam2 = 1194677;
					*iParam3 = 2;
					break;
				
				case 30:
					*iParam2 = 1210161;
					*iParam3 = 4;
					break;
				
				case 31:
					*iParam2 = 1241129;
					*iParam3 = 1;
					break;
				
				case 32:
					*iParam2 = func_236(iParam0);
					*iParam3 = 1;
					break;
			}
			break;
		
		case -396271872:
		case 105238565:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 1;
					break;
				
				case 1:
					*iParam2 = 1001;
					*iParam3 = 2;
					break;
				
				case 2:
					*iParam2 = 31935;
					*iParam3 = 3;
					break;
				
				case 3:
					*iParam2 = 47419;
					*iParam3 = 2;
					break;
				
				case 4:
					*iParam2 = 62903;
					*iParam3 = 1;
					break;
				
				case 5:
					*iParam2 = 80356;
					*iParam3 = 4;
					break;
				
				case 6:
					*iParam2 = 103548;
					*iParam3 = 2;
					break;
				
				case 7:
					*iParam2 = 122419;
					*iParam3 = 1;
					break;
				
				case 8:
					*iParam2 = 134549;
					*iParam3 = 4;
					break;
				
				case 9:
					*iParam2 = 150968;
					*iParam3 = 3;
					break;
				
				case 10:
					*iParam2 = 173226;
					*iParam3 = 4;
					break;
				
				case 11:
					*iParam2 = 189194;
					*iParam3 = 3;
					break;
				
				case 12:
					*iParam2 = 219710;
					*iParam3 = 2;
					break;
				
				case 13:
					*iParam2 = 260323;
					*iParam3 = 4;
					break;
				
				case 14:
					*iParam2 = 276290;
					*iParam3 = 3;
					break;
				
				case 15:
					*iParam2 = 288387;
					*iParam3 = 2;
					break;
				
				case 16:
					*iParam2 = 322258;
					*iParam3 = 4;
					break;
				
				case 17:
					*iParam2 = 336290;
					*iParam3 = 3;
					break;
				
				case 18:
					*iParam2 = 399677;
					*iParam3 = 1;
					break;
				
				case 19:
					*iParam2 = 430678;
					*iParam3 = 4;
					break;
				
				case 20:
					*iParam2 = 457742;
					*iParam3 = 2;
					break;
				
				case 21:
					*iParam2 = 504227;
					*iParam3 = 4;
					break;
				
				case 22:
					*iParam2 = 525517;
					*iParam3 = 3;
					break;
				
				case 23:
					*iParam2 = 558420;
					*iParam3 = 2;
					break;
				
				case 24:
					*iParam2 = 581646;
					*iParam3 = 4;
					break;
				
				case 25:
					*iParam2 = 624194;
					*iParam3 = 2;
					break;
				
				case 26:
					*iParam2 = 686129;
					*iParam3 = 3;
					break;
				
				case 27:
					*iParam2 = 717097;
					*iParam3 = 2;
					break;
				
				case 28:
					*iParam2 = 732581;
					*iParam3 = 4;
					break;
				
				case 29:
					*iParam2 = 748065;
					*iParam3 = 3;
					break;
				
				case 30:
					*iParam2 = 779065;
					*iParam3 = 2;
					break;
				
				case 31:
					*iParam2 = 842903;
					*iParam3 = 4;
					break;
				
				case 32:
					*iParam2 = 871935;
					*iParam3 = 3;
					break;
				
				case 33:
					*iParam2 = 918387;
					*iParam3 = 2;
					break;
				
				case 34:
					*iParam2 = 933871;
					*iParam3 = 4;
					break;
				
				case 35:
					*iParam2 = 949355;
					*iParam3 = 3;
					break;
				
				case 36:
					*iParam2 = 1026774;
					*iParam3 = 2;
					break;
				
				case 37:
					*iParam2 = 1113871;
					*iParam3 = 4;
					break;
				
				case 38:
					*iParam2 = 1137097;
					*iParam3 = 3;
					break;
				
				case 39:
					*iParam2 = 1175806;
					*iParam3 = 2;
					break;
				
				case 40:
					*iParam2 = 1206774;
					*iParam3 = 4;
					break;
				
				case 41:
					*iParam2 = 1223226;
					*iParam3 = 3;
					break;
				
				case 42:
					*iParam2 = 1254194;
					*iParam3 = 2;
					break;
				
				case 43:
					*iParam2 = 1291935;
					*iParam3 = 4;
					break;
				
				case 44:
					*iParam2 = func_236(iParam0);
					*iParam3 = 1;
					break;
			}
			break;
		
		case -289135594:
		case -174739804:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 4;
					break;
				
				case 1:
					*iParam2 = 16517;
					*iParam3 = 2;
					break;
				
				case 2:
					*iParam2 = 257017;
					*iParam3 = 4;
					break;
				
				case 3:
					*iParam2 = 273017;
					*iParam3 = 3;
					break;
				
				case 4:
					*iParam2 = 321110;
					*iParam3 = 4;
					break;
				
				case 5:
					*iParam2 = 363255;
					*iParam3 = 2;
					break;
				
				case 6:
					*iParam2 = 401310;
					*iParam3 = 3;
					break;
				
				case 7:
					*iParam2 = 417350;
					*iParam3 = 4;
					break;
				
				case 8:
					*iParam2 = 449717;
					*iParam3 = 2;
					break;
				
				case 9:
					*iParam2 = 482386;
					*iParam3 = 4;
					break;
				
				case 10:
					*iParam2 = 515194;
					*iParam3 = 3;
					break;
				
				case 11:
					*iParam2 = 615198;
					*iParam3 = 4;
					break;
				
				case 12:
					*iParam2 = 628531;
					*iParam3 = 2;
					break;
				
				case 13:
					*iParam2 = 646480;
					*iParam3 = 4;
					break;
				
				case 14:
					*iParam2 = 662890;
					*iParam3 = 3;
					break;
				
				case 15:
					*iParam2 = 728372;
					*iParam3 = 2;
					break;
				
				case 16:
					*iParam2 = 744942;
					*iParam3 = 3;
					break;
				
				case 17:
					*iParam2 = 811096;
					*iParam3 = 4;
					break;
				
				case 18:
					*iParam2 = 817249;
					*iParam3 = 2;
					break;
				
				case 19:
					*iParam2 = 843060;
					*iParam3 = 4;
					break;
				
				case 20:
					*iParam2 = 875360;
					*iParam3 = 3;
					break;
				
				case 21:
					*iParam2 = 907601;
					*iParam3 = 2;
					break;
				
				case 22:
					*iParam2 = 931834;
					*iParam3 = 4;
					break;
				
				case 23:
					*iParam2 = 964088;
					*iParam3 = 3;
					break;
				
				case 24:
					*iParam2 = 980233;
					*iParam3 = 2;
					break;
				
				case 25:
					*iParam2 = 996372;
					*iParam3 = 4;
					break;
				
				case 26:
					*iParam2 = 1028641;
					*iParam3 = 3;
					break;
				
				case 27:
					*iParam2 = 1044775;
					*iParam3 = 4;
					break;
				
				case 28:
					*iParam2 = 1077032;
					*iParam3 = 3;
					break;
				
				case 29:
					*iParam2 = func_236(iParam0);
					*iParam3 = 2;
					break;
			}
			break;
		
		case -1585084006:
		case -1075559614:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 2;
					break;
				
				case 1:
					*iParam2 = 33277;
					*iParam3 = 4;
					break;
				
				case 2:
					*iParam2 = 65546;
					*iParam3 = 3;
					break;
				
				case 3:
					*iParam2 = 267231;
					*iParam3 = 4;
					break;
				
				case 4:
					*iParam2 = 299496;
					*iParam3 = 3;
					break;
				
				case 5:
					*iParam2 = 364034;
					*iParam3 = 2;
					break;
				
				case 6:
					*iParam2 = 396303;
					*iParam3 = 4;
					break;
				
				case 7:
					*iParam2 = 412437;
					*iParam3 = 3;
					break;
				
				case 8:
					*iParam2 = 476975;
					*iParam3 = 2;
					break;
				
				case 9:
					*iParam2 = 493109;
					*iParam3 = 4;
					break;
				
				case 10:
					*iParam2 = 525378;
					*iParam3 = 3;
					break;
				
				case 11:
					*iParam2 = 541513;
					*iParam3 = 2;
					break;
				
				case 12:
					*iParam2 = 573782;
					*iParam3 = 4;
					break;
				
				case 13:
					*iParam2 = 606050;
					*iParam3 = 3;
					break;
				
				case 14:
					*iParam2 = 621681;
					*iParam3 = 2;
					break;
				
				case 15:
					*iParam2 = 636807;
					*iParam3 = 4;
					break;
				
				case 16:
					*iParam2 = 654454;
					*iParam3 = 3;
					break;
				
				case 17:
					*iParam2 = 698824;
					*iParam3 = 2;
					break;
				
				case 18:
					*iParam2 = 702857;
					*iParam3 = 4;
					break;
				
				case 19:
					*iParam2 = 718992;
					*iParam3 = 2;
					break;
				
				case 20:
					*iParam2 = 735126;
					*iParam3 = 3;
					break;
				
				case 21:
					*iParam2 = 772437;
					*iParam3 = 4;
					break;
				
				case 22:
					*iParam2 = 791597;
					*iParam3 = 3;
					break;
				
				case 23:
					*iParam2 = 857647;
					*iParam3 = 4;
					break;
				
				case 24:
					*iParam2 = 872269;
					*iParam3 = 3;
					break;
				
				case 25:
					*iParam2 = 904538;
					*iParam3 = 4;
					break;
				
				case 26:
					*iParam2 = 920672;
					*iParam3 = 3;
					break;
				
				case 27:
					*iParam2 = 969076;
					*iParam3 = 4;
					break;
				
				case 28:
					*iParam2 = 985210;
					*iParam3 = 3;
					break;
				
				case 29:
					*iParam2 = 1026555;
					*iParam3 = 4;
					break;
				
				case 30:
					*iParam2 = 1049748;
					*iParam3 = 3;
					break;
				
				case 31:
					*iParam2 = 1130420;
					*iParam3 = 2;
					break;
				
				case 32:
					*iParam2 = 1162689;
					*iParam3 = 3;
					break;
				
				case 33:
					*iParam2 = 1184370;
					*iParam3 = 4;
					break;
				
				case 34:
					*iParam2 = 1203025;
					*iParam3 = 3;
					break;
				
				case 35:
					*iParam2 = 1227227;
					*iParam3 = 2;
					break;
				
				case 36:
					*iParam2 = 1259496;
					*iParam3 = 4;
					break;
				
				case 37:
					*iParam2 = 1275630;
					*iParam3 = 3;
					break;
				
				case 38:
					*iParam2 = 1291765;
					*iParam3 = 4;
					break;
				
				case 39:
					*iParam2 = 1307899;
					*iParam3 = 3;
					break;
				
				case 40:
					*iParam2 = 1320000;
					*iParam3 = 2;
					break;
				
				case 41:
					*iParam2 = 1324034;
					*iParam3 = 3;
					break;
				
				case 42:
					*iParam2 = 1356303;
					*iParam3 = 4;
					break;
				
				case 43:
					*iParam2 = 1388571;
					*iParam3 = 2;
					break;
				
				case 44:
					*iParam2 = func_236(iParam0);
					*iParam3 = 4;
					break;
			}
			break;
		
		case 329117129:
		case 152065433:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 4;
					break;
				
				case 1:
					*iParam2 = 73613;
					*iParam3 = 3;
					break;
				
				case 2:
					*iParam2 = 120000;
					*iParam3 = 4;
					break;
				
				case 3:
					*iParam2 = 141176;
					*iParam3 = 3;
					break;
				
				case 4:
					*iParam2 = 190588;
					*iParam3 = 4;
					break;
				
				case 5:
					*iParam2 = 222857;
					*iParam3 = 3;
					break;
				
				case 6:
					*iParam2 = 339832;
					*iParam3 = 4;
					break;
				
				case 7:
					*iParam2 = 369076;
					*iParam3 = 3;
					break;
				
				case 8:
					*iParam2 = 432605;
					*iParam3 = 2;
					break;
				
				case 9:
					*iParam2 = 532613;
					*iParam3 = 4;
					break;
				
				case 10:
					*iParam2 = 560322;
					*iParam3 = 3;
					break;
				
				case 11:
					*iParam2 = 590523;
					*iParam3 = 4;
					break;
				
				case 12:
					*iParam2 = 607878;
					*iParam3 = 3;
					break;
				
				case 13:
					*iParam2 = 654489;
					*iParam3 = 4;
					break;
				
				case 14:
					*iParam2 = 670357;
					*iParam3 = 3;
					break;
				
				case 15:
					*iParam2 = 719013;
					*iParam3 = 2;
					break;
				
				case 16:
					*iParam2 = 740275;
					*iParam3 = 4;
					break;
				
				case 17:
					*iParam2 = 758622;
					*iParam3 = 3;
					break;
				
				case 18:
					*iParam2 = 782919;
					*iParam3 = 2;
					break;
				
				case 19:
					*iParam2 = 798318;
					*iParam3 = 4;
					break;
				
				case 20:
					*iParam2 = 814224;
					*iParam3 = 3;
					break;
				
				case 21:
					*iParam2 = 893498;
					*iParam3 = 2;
					break;
				
				case 22:
					*iParam2 = 925278;
					*iParam3 = 4;
					break;
				
				case 23:
					*iParam2 = 941101;
					*iParam3 = 3;
					break;
				
				case 24:
					*iParam2 = 956969;
					*iParam3 = 4;
					break;
				
				case 25:
					*iParam2 = 972840;
					*iParam3 = 3;
					break;
				
				case 26:
					*iParam2 = 1020519;
					*iParam3 = 4;
					break;
				
				case 27:
					*iParam2 = 1036308;
					*iParam3 = 3;
					break;
				
				case 28:
					*iParam2 = 1084407;
					*iParam3 = 4;
					break;
				
				case 29:
					*iParam2 = 1099779;
					*iParam3 = 2;
					break;
				
				case 30:
					*iParam2 = 1115691;
					*iParam3 = 4;
					break;
				
				case 31:
					*iParam2 = 1131514;
					*iParam3 = 3;
					break;
				
				case 32:
					*iParam2 = 1212341;
					*iParam3 = 4;
					break;
				
				case 33:
					*iParam2 = func_236(iParam0);
					*iParam3 = 4;
					break;
			}
			break;
		
		case -893816568:
		case -225724130:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 4;
					break;
				
				case 1:
					*iParam2 = 12500;
					*iParam3 = 2;
					break;
				
				case 2:
					*iParam2 = 44995;
					*iParam3 = 4;
					break;
				
				case 3:
					*iParam2 = 84500;
					*iParam3 = 3;
					break;
				
				case 4:
					*iParam2 = 111500;
					*iParam3 = 4;
					break;
				
				case 5:
					*iParam2 = 140500;
					*iParam3 = 3;
					break;
				
				case 6:
					*iParam2 = 204500;
					*iParam3 = 2;
					break;
				
				case 7:
					*iParam2 = 212500;
					*iParam3 = 4;
					break;
				
				case 8:
					*iParam2 = 224500;
					*iParam3 = 3;
					break;
				
				case 9:
					*iParam2 = 292880;
					*iParam3 = 2;
					break;
				
				case 10:
					*iParam2 = 308500;
					*iParam3 = 4;
					break;
				
				case 11:
					*iParam2 = 324500;
					*iParam3 = 3;
					break;
				
				case 12:
					*iParam2 = 372500;
					*iParam3 = 4;
					break;
				
				case 13:
					*iParam2 = 388508;
					*iParam3 = 3;
					break;
				
				case 14:
					*iParam2 = 436500;
					*iParam3 = 4;
					break;
				
				case 15:
					*iParam2 = 452500;
					*iParam3 = 2;
					break;
				
				case 16:
					*iParam2 = 470500;
					*iParam3 = 4;
					break;
				
				case 17:
					*iParam2 = 482500;
					*iParam3 = 3;
					break;
				
				case 18:
					*iParam2 = 500505;
					*iParam3 = 2;
					break;
				
				case 19:
					*iParam2 = 535827;
					*iParam3 = 4;
					break;
				
				case 20:
					*iParam2 = 548000;
					*iParam3 = 2;
					break;
				
				case 21:
					*iParam2 = 564500;
					*iParam3 = 4;
					break;
				
				case 22:
					*iParam2 = 584500;
					*iParam3 = 3;
					break;
				
				case 23:
					*iParam2 = 664000;
					*iParam3 = 2;
					break;
				
				case 24:
					*iParam2 = 682500;
					*iParam3 = 4;
					break;
				
				case 25:
					*iParam2 = 698500;
					*iParam3 = 3;
					break;
				
				case 26:
					*iParam2 = 715000;
					*iParam3 = 4;
					break;
				
				case 27:
					*iParam2 = 730500;
					*iParam3 = 3;
					break;
				
				case 28:
					*iParam2 = 778500;
					*iParam3 = 2;
					break;
				
				case 29:
					*iParam2 = 794500;
					*iParam3 = 4;
					break;
				
				case 30:
					*iParam2 = 806500;
					*iParam3 = 3;
					break;
				
				case 31:
					*iParam2 = 826500;
					*iParam3 = 4;
					break;
				
				case 32:
					*iParam2 = 842500;
					*iParam3 = 3;
					break;
				
				case 33:
					*iParam2 = 874500;
					*iParam3 = 4;
					break;
				
				case 34:
					*iParam2 = 882500;
					*iParam3 = 3;
					break;
				
				case 35:
					*iParam2 = 906500;
					*iParam3 = 2;
					break;
				
				case 36:
					*iParam2 = func_236(iParam0);
					*iParam3 = 2;
					break;
			}
			break;
		
		case -1124608635:
		case -532769660:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 2;
					break;
				
				case 1:
					*iParam2 = 81000;
					*iParam3 = 3;
					break;
				
				case 2:
					*iParam2 = 127399;
					*iParam3 = 4;
					break;
				
				case 3:
					*iParam2 = 145000;
					*iParam3 = 3;
					break;
				
				case 4:
					*iParam2 = 177000;
					*iParam3 = 4;
					break;
				
				case 5:
					*iParam2 = 189000;
					*iParam3 = 3;
					break;
				
				case 6:
					*iParam2 = 241000;
					*iParam3 = 2;
					break;
				
				case 7:
					*iParam2 = 257000;
					*iParam3 = 4;
					break;
				
				case 8:
					*iParam2 = 269000;
					*iParam3 = 3;
					break;
				
				case 9:
					*iParam2 = 287000;
					*iParam3 = 4;
					break;
				
				case 10:
					*iParam2 = 299000;
					*iParam3 = 3;
					break;
				
				case 11:
					*iParam2 = 311366;
					*iParam3 = 4;
					break;
				
				case 12:
					*iParam2 = 324961;
					*iParam3 = 3;
					break;
				
				case 13:
					*iParam2 = 345500;
					*iParam3 = 2;
					break;
				
				case 14:
					*iParam2 = 371500;
					*iParam3 = 4;
					break;
				
				case 15:
					*iParam2 = 388956;
					*iParam3 = 3;
					break;
				
				case 16:
					*iParam2 = 409000;
					*iParam3 = 2;
					break;
				
				case 17:
					*iParam2 = 463000;
					*iParam3 = 3;
					break;
				
				case 18:
					*iParam2 = 468000;
					*iParam3 = 4;
					break;
				
				case 19:
					*iParam2 = 478187;
					*iParam3 = 2;
					break;
				
				case 20:
					*iParam2 = 493474;
					*iParam3 = 4;
					break;
				
				case 21:
					*iParam2 = 506473;
					*iParam3 = 2;
					break;
				
				case 22:
					*iParam2 = 517468;
					*iParam3 = 3;
					break;
				
				case 23:
					*iParam2 = 565500;
					*iParam3 = 4;
					break;
				
				case 24:
					*iParam2 = 577000;
					*iParam3 = 2;
					break;
				
				case 25:
					*iParam2 = 680000;
					*iParam3 = 3;
					break;
				
				case 26:
					*iParam2 = 693500;
					*iParam3 = 4;
					break;
				
				case 27:
					*iParam2 = 707500;
					*iParam3 = 3;
					break;
				
				case 28:
					*iParam2 = 821500;
					*iParam3 = 4;
					break;
				
				case 29:
					*iParam2 = 837500;
					*iParam3 = 3;
					break;
				
				case 30:
					*iParam2 = 925500;
					*iParam3 = 2;
					break;
				
				case 31:
					*iParam2 = 942000;
					*iParam3 = 4;
					break;
				
				case 32:
					*iParam2 = 955500;
					*iParam3 = 3;
					break;
				
				case 33:
					*iParam2 = 990500;
					*iParam3 = 4;
					break;
				
				case 34:
					*iParam2 = 995000;
					*iParam3 = 3;
					break;
				
				case 35:
					*iParam2 = 1003481;
					*iParam3 = 4;
					break;
				
				case 36:
					*iParam2 = 1019500;
					*iParam3 = 3;
					break;
				
				case 37:
					*iParam2 = 1059000;
					*iParam3 = 4;
					break;
				
				case 38:
					*iParam2 = 1063500;
					*iParam3 = 3;
					break;
				
				case 39:
					*iParam2 = 1139500;
					*iParam3 = 4;
					break;
				
				case 40:
					*iParam2 = 1151542;
					*iParam3 = 3;
					break;
				
				case 41:
					*iParam2 = 1183747;
					*iParam3 = 2;
					break;
				
				case 42:
					*iParam2 = 1252000;
					*iParam3 = 4;
					break;
				
				case 43:
					*iParam2 = 1265774;
					*iParam3 = 3;
					break;
				
				case 44:
					*iParam2 = 1283762;
					*iParam3 = 4;
					break;
				
				case 45:
					*iParam2 = 1301500;
					*iParam3 = 3;
					break;
				
				case 46:
					*iParam2 = 1313223;
					*iParam3 = 4;
					break;
				
				case 47:
					*iParam2 = 1326021;
					*iParam3 = 3;
					break;
				
				case 48:
					*iParam2 = 1404267;
					*iParam3 = 4;
					break;
				
				case 49:
					*iParam2 = 1420751;
					*iParam3 = 3;
					break;
				
				case 50:
					*iParam2 = 1437000;
					*iParam3 = 4;
					break;
				
				case 51:
					*iParam2 = 1452655;
					*iParam3 = 3;
					break;
				
				case 52:
					*iParam2 = 1500500;
					*iParam3 = 2;
					break;
				
				case 53:
					*iParam2 = 1572752;
					*iParam3 = 3;
					break;
				
				case 54:
					*iParam2 = 1608767;
					*iParam3 = 4;
					break;
				
				case 55:
					*iParam2 = 1624748;
					*iParam3 = 3;
					break;
				
				case 56:
					*iParam2 = 1678707;
					*iParam3 = 4;
					break;
				
				case 57:
					*iParam2 = 1688700;
					*iParam3 = 3;
					break;
				
				case 58:
					*iParam2 = 1763000;
					*iParam3 = 4;
					break;
				
				case 59:
					*iParam2 = func_236(iParam0);
					*iParam3 = 3;
					break;
			}
			break;
		
		case -412341651:
		case 421430847:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 0;
					*iParam3 = 3;
					break;
				
				case 1:
					*iParam2 = 17000;
					*iParam3 = 2;
					break;
				
				case 2:
					*iParam2 = 41000;
					*iParam3 = 4;
					break;
				
				case 3:
					*iParam2 = 65000;
					*iParam3 = 3;
					break;
				
				case 4:
					*iParam2 = 97000;
					*iParam3 = 2;
					break;
				
				case 5:
					*iParam2 = 161000;
					*iParam3 = 4;
					break;
				
				case 6:
					*iParam2 = 175000;
					*iParam3 = 2;
					break;
				
				case 7:
					*iParam2 = 192724;
					*iParam3 = 4;
					break;
				
				case 8:
					*iParam2 = 208632;
					*iParam3 = 3;
					break;
				
				case 9:
					*iParam2 = 256761;
					*iParam3 = 2;
					break;
				
				case 10:
					*iParam2 = 288025;
					*iParam3 = 3;
					break;
				
				case 11:
					*iParam2 = 319743;
					*iParam3 = 4;
					break;
				
				case 12:
					*iParam2 = 367500;
					*iParam3 = 3;
					break;
				
				case 13:
					*iParam2 = 446797;
					*iParam3 = 4;
					break;
				
				case 14:
					*iParam2 = 462653;
					*iParam3 = 2;
					break;
				
				case 15:
					*iParam2 = 478500;
					*iParam3 = 3;
					break;
				
				case 16:
					*iParam2 = 494500;
					*iParam3 = 2;
					break;
				
				case 17:
					*iParam2 = 510338;
					*iParam3 = 3;
					break;
				
				case 18:
					*iParam2 = 559000;
					*iParam3 = 4;
					break;
				
				case 19:
					*iParam2 = 573829;
					*iParam3 = 3;
					break;
				
				case 20:
					*iParam2 = 589000;
					*iParam3 = 4;
					break;
				
				case 21:
					*iParam2 = 596000;
					*iParam3 = 3;
					break;
				
				case 22:
					*iParam2 = 615090;
					*iParam3 = 4;
					break;
				
				case 23:
					*iParam2 = 627107;
					*iParam3 = 3;
					break;
				
				case 24:
					*iParam2 = 639088;
					*iParam3 = 4;
					break;
				
				case 25:
					*iParam2 = 663000;
					*iParam3 = 3;
					break;
				
				case 26:
					*iParam2 = 705000;
					*iParam3 = 4;
					break;
				
				case 27:
					*iParam2 = 717000;
					*iParam3 = 3;
					break;
				
				case 28:
					*iParam2 = 804000;
					*iParam3 = 4;
					break;
				
				case 29:
					*iParam2 = 819000;
					*iParam3 = 2;
					break;
				
				case 30:
					*iParam2 = 830859;
					*iParam3 = 3;
					break;
				
				case 31:
					*iParam2 = 855000;
					*iParam3 = 4;
					break;
				
				case 32:
					*iParam2 = 872000;
					*iParam3 = 2;
					break;
				
				case 33:
					*iParam2 = 896749;
					*iParam3 = 4;
					break;
				
				case 34:
					*iParam2 = 912794;
					*iParam3 = 3;
					break;
				
				case 35:
					*iParam2 = 961500;
					*iParam3 = 4;
					break;
				
				case 36:
					*iParam2 = 981853;
					*iParam3 = 3;
					break;
				
				case 37:
					*iParam2 = 1026550;
					*iParam3 = 4;
					break;
				
				case 38:
					*iParam2 = 1042800;
					*iParam3 = 3;
					break;
				
				case 39:
					*iParam2 = 1138500;
					*iParam3 = 4;
					break;
				
				case 40:
					*iParam2 = 1158766;
					*iParam3 = 3;
					break;
				
				case 41:
					*iParam2 = 1292000;
					*iParam3 = 4;
					break;
				
				case 42:
					*iParam2 = 1309238;
					*iParam3 = 3;
					break;
				
				case 43:
					*iParam2 = 1354000;
					*iParam3 = 2;
					break;
				
				case 44:
					*iParam2 = 1377000;
					*iParam3 = 4;
					break;
				
				case 45:
					*iParam2 = func_236(iParam0);
					*iParam3 = 4;
					break;
			}
			break;
	}
}

void func_522()
{
	if (func_347(1137721765))
	{
		if (!iLocal_50)
		{
			uLocal_51 = OBJECT::CREATE_OBJECT_NO_OFFSET(1137721765, -1381.882f, -623.721f, 30.333f, 0, 1, 0);
			uLocal_51 = uLocal_51;
			iLocal_50 = 1;
		}
	}
}

void func_523(var uParam0)
{
	if (func_524())
	{
		func_252(uParam0);
	}
}

int func_524()
{
	func_532(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_531())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_530())
	{
		return 1;
	}
	if (func_529(159))
	{
		if (!func_528())
		{
			return 1;
		}
	}
	if (func_529(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_525() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_525()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_525()
{
	switch (func_527())
	{
		case 0:
			return func_526();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_526()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_527()
{
	return Global_30768;
}

bool func_528()
{
	return Global_2450632.f_598;
}

int func_529(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_530()
{
	return Global_2460680;
}

bool func_531()
{
	return Global_2450632.f_593;
}

void func_532(var uParam0)
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
					func_533(iVar0);
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

void func_533(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_88(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_534(uVar4, &bVar5))
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

int func_534(int iParam0, var uParam1)
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

void func_535(var uParam0)
{
	if (uParam0->f_7255[146] != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[uParam0->f_7255[146]]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[uParam0->f_7255[146]], 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7564))
			{
				STREAMING::REQUEST_MODEL(-1829764702);
				if (STREAMING::HAS_MODEL_LOADED(-1829764702))
				{
					uParam0->f_7564 = OBJECT::CREATE_OBJECT_NO_OFFSET(-1829764702, -1572.161f, -3013.132f, -75.4265f, 0, 1, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7564))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1829764702);
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_7564, 1);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7564, true);
					}
					MISC::CLEAR_AREA(-1572.161f, -3013.132f, -75.4265f, 10f, 1, 0, 0, 0);
				}
			}
		}
	}
	func_61(&iVar0, &uVar1);
	if (iVar0 != 5 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_7565))
	{
		if (func_352(func_6()))
		{
			iVar2 = 538002882;
		}
		else if (func_351(func_6()))
		{
			iVar2 = -829283643;
		}
		else
		{
			iVar2 = -992735415;
		}
		STREAMING::REQUEST_MODEL(iVar2);
		if (STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			uParam0->f_7565 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar2, -1619.62f, -3011.701f, -75.58f, 0, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7565))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_7565, 0f, 0f, 199.72f, 2, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_7565, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7565, true);
			}
		}
	}
	else if (iVar0 == 5 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_7565))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_7565));
	}
	func_60(&iVar0);
	if (iVar0 == 110 && uParam0->f_7566 == 0)
	{
		uParam0->f_7566 = func_350();
		ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(-1586.273f, -3009.073f, -77.006f, 0.5f, uParam0->f_7566, 0);
	}
	else if (iVar0 != 110 && uParam0->f_7566 != 0)
	{
		ENTITY::REMOVE_MODEL_HIDE(-1586.273f, -3009.073f, -77.006f, 0.5f, uParam0->f_7566, 0);
		uParam0->f_7566 = 0;
	}
}

int func_536()
{
	if (Global_1316764 != Global_1316765 && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_537(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 125)
	{
		func_451(uParam0, iVar0);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7564))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_7564));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7565))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_7565));
	}
	if (uParam0->f_7566 != 0)
	{
		ENTITY::REMOVE_MODEL_HIDE(-1586.273f, -3009.073f, -77.006f, 0.5f, uParam0->f_7566, 0);
		uParam0->f_7566 = 0;
	}
	func_462(0);
	Global_1316766 = 0;
	Global_1316770 = -1;
	Global_1316769 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_7950 = NETWORK::GET_NETWORK_TIME();
	}
	func_2(&Global_1316809);
	func_2(&Global_1316811);
}

void func_538(var uParam0, var uParam1)
{
	while (!NETWORK::_NETWORK_IS_THIS_SCRIPT_MARKED(32, 0, Global_1316799))
	{
		SYSTEM::WAIT(0);
	}
	Global_1316799++;
	func_539(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(uParam0, 14);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(uParam1, 33);
}

int func_539(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_253();
			}
			else
			{
				return 0;
			}
		}
		if (!func_540())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_253();
					}
					else
					{
						return 0;
					}
				}
				if (func_531())
				{
					if (!bParam2)
					{
						func_253();
					}
					else
					{
						return 0;
					}
				}
				if (func_529(157))
				{
					if (!bParam2)
					{
						func_253();
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
					func_253();
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
				func_253();
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
			func_253();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_540()
{
	return Global_1312854;
}

