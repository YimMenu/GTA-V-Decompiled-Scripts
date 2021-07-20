#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int* iLocal_85 = NULL;
	var uLocal_86 = -1;
	int* iLocal_87 = NULL;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<20> Local_93[32];
	struct<3> Local_734[32];
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	var uLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857[4] = { 0, 0, 0, 0 };
	var uLocal_862[2] = { 0, 0 };
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	struct<8> Local_868 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	struct<8> Local_884 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902[4] = { 0, 0, 0, 0 };
	struct<35> Local_907 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, -1, -1, 0, 0, 0 } ;
	struct<6> Local_942[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

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
	iLocal_84 = Global_262145.f_18477;
	iLocal_851 = AUDIO::GET_SOUND_ID();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_1038(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_983(ScriptParam_0))
			{
				func_918(0, 1);
				func_852();
			}
		}
		else
		{
			func_852();
		}
	}
	else
	{
		func_918(0, 1);
		func_852();
	}
	while (true)
	{
		func_851();
		if (func_844(1))
		{
			func_918(0, 1);
			func_852();
		}
		if (func_836())
		{
			func_918(0, 1);
			func_852();
		}
		func_832();
		func_830();
		func_829();
		func_826();
		func_825();
		func_819();
		switch (func_818(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_817() == 1)
				{
					if (func_809())
					{
						func_808(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_817() == 1)
				{
					func_50();
				}
				else if (func_817() == 3)
				{
					func_808(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_852();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_33();
			if (func_32())
			{
				func_918(0, 1);
				func_31(3);
			}
			switch (func_817())
			{
				case 0:
					if (func_28())
					{
						func_31(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 3:
					func_852();
					break;
				}
		}
	}
}

void func_1()
{
	switch (func_27())
	{
		case 0:
			func_26(1);
			STATS::_0x6DEE77AFF8C21BD1(&(Local_907.f_33), &(Local_907.f_34));
			break;
		
		case 1:
			if (func_25() == 0)
			{
				func_18();
				if (func_17(6))
				{
					if (func_16())
					{
						func_15(10);
						func_26(2);
					}
					else
					{
						func_14(5);
						func_26(5);
					}
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 2:
			if (func_17(11))
			{
				func_26(3);
			}
			break;
		
		case 3:
			if (func_25() == 0)
			{
				func_6();
				if (!func_5(&(Local_907.f_5)))
				{
					func_4(&(Local_907.f_5), 0, 0);
				}
				else if (func_2(&(Local_907.f_5), func_3(), 0))
				{
					func_14(1);
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 5:
			if (func_17(0))
			{
				func_26(6);
			}
			break;
		
		case 6:
			func_31(3);
			break;
	}
}

int func_2(var uParam0, int iParam1, bool bParam2)
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

int func_3()
{
	return (1000 * Global_262145.f_18466);
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

void func_6()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_13();
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!MISC::IS_BIT_SET(Local_907.f_32, iVar1))
		{
			Var2 = { func_12(iVar1) };
			if (!func_11(Var2, 0f, 0f, 0f, 0))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_907.f_19[iVar1]))
				{
					if (func_8(&(uLocal_902[iVar1]), &(Local_907.f_19[iVar1]), Var2, 1))
					{
						MISC::SET_BIT(&(Local_907.f_32), iVar1);
						if (!func_5(&uLocal_852))
						{
							func_4(&uLocal_852, 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (func_2(&uLocal_852, 300000, 0))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (MISC::IS_BIT_SET(Local_907.f_32, iVar1))
			{
				MISC::CLEAR_BIT(&(Local_907.f_32), iVar1);
			}
			iVar1++;
		}
		func_7(&uLocal_852);
	}
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_8(var uParam0, var uParam1, struct<3> Param2, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (!func_10(Param2))
	{
		iVar0 = joaat("prop_gun_case_01");
		if (func_9(iVar0))
		{
			iVar1 = 0;
			MISC::SET_BIT(&iVar1, 0);
			MISC::SET_BIT(&iVar1, 1);
			MISC::SET_BIT(&iVar1, 9);
			MISC::SET_BIT(&iVar1, 4);
			*uParam0 = OBJECT::CREATE_AMBIENT_PICKUP(joaat("pickup_portable_crate_fixed_incar"), Param2 + Vector(0f, 0f, 0f), iVar1, -1, iVar0, bParam5, true);
			*uParam1 = NETWORK::OBJ_TO_NET(*uParam0);
			return 1;
		}
	}
	return 0;
}

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_10(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_12(int iParam0)
{
	switch (Local_907.f_31)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1378.065f, 3179.572f, 39.5194f;
				
				case 1:
					return 1386.56f, 3147.986f, 39.52f;
				
				case 2:
					return 1396.397f, 3111.702f, 39.5088f;
				
				case 3:
					return 1402.808f, 3087.676f, 39.5129f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1375.18f, -3033.337f, 12.9448f;
				
				case 1:
					return -1364.817f, -3015.949f, 12.9676f;
				
				case 2:
					return -1305.581f, -3048.433f, 12.9444f;
				
				case 3:
					return -1317.517f, -3067.379f, 12.9444f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2039.639f, 4749.277f, 40.013f;
				
				case 1:
					return 2028.618f, 4775.398f, 40.3574f;
				
				case 2:
					return 2134.54f, 4826.913f, 40.4972f;
				
				case 3:
					return 1936.858f, 4695.858f, 40.2577f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_13()
{
	switch (Local_907.f_31)
	{
		case 0:
			return 4;
		
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_14(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_907.f_14 = iParam0;
}

void func_15(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_907.f_1), iParam0);
}

bool func_16()
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)
{
	return MISC::IS_BIT_SET(Local_907.f_1, iParam0);
}

void func_18()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = func_24();
	if (func_17(4))
	{
		if (!func_17(5))
		{
			if (func_23() - func_22(&(Local_907.f_7), 0, 0)) >= func_21()
			{
				func_7(&(Local_907.f_7));
				func_15(5);
			}
		}
	}
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (!func_17(3))
	{
		if (bVar0)
		{
			if (func_5(&(Local_907.f_9)))
			{
				func_7(&(Local_907.f_9));
			}
			if (!func_5(&(Local_907.f_7)))
			{
				func_4(&(Local_907.f_7), 0, 0);
				if (Local_907.f_4 > 0)
				{
					iVar2 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), (-1 * Local_907.f_4));
					func_20(&(Local_907.f_7), iVar2);
					Local_907.f_4 = 0;
				}
			}
			else if (!func_17(6))
			{
				if ((iVar1 - func_22(&(Local_907.f_7), 0, 0)) <= 0)
				{
					func_15(6);
				}
			}
		}
		else
		{
			if (func_17(7))
			{
				if (func_5(&(Local_907.f_7)))
				{
					Local_907.f_4 = func_22(&(Local_907.f_7), 0, 0);
				}
			}
			else
			{
				Local_907.f_4 = 0;
			}
			if (func_5(&(Local_907.f_7)))
			{
				func_7(&(Local_907.f_7));
			}
			if (!func_5(&(Local_907.f_9)))
			{
				func_4(&(Local_907.f_9), 0, 0);
			}
			else
			{
				if (func_2(&(Local_907.f_9), func_19(), 0))
				{
					func_15(3);
					func_14(6);
				}
				if (func_2(&(Local_907.f_9), (func_19() - 30000), 0))
				{
					func_15(3);
					func_14(6);
				}
			}
		}
	}
}

int func_19()
{
	return 600000;
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_21()
{
	return 20000;
}

int func_22(var uParam0, bool bParam1, bool bParam2)
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

int func_23()
{
	return 180000;
}

var func_24()
{
	return (func_17(8) || func_17(9));
}

int func_25()
{
	return Local_907.f_14;
}

void func_26(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_907.f_13 = iParam0;
}

int func_27()
{
	return Local_907.f_13;
}

bool func_28()
{
	if (!func_17(1))
	{
		if (func_30() > -1)
		{
			if (func_30() == 0)
			{
				Local_907.f_31 = 0;
			}
			else if (func_30() == 1)
			{
				Local_907.f_31 = 1;
			}
			else
			{
				Local_907.f_31 = 2;
			}
		}
		else
		{
			Local_907.f_31 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		if (Global_262145.f_18471)
		{
			if (Local_907.f_31 == 0)
			{
				if (!Global_262145.f_18472)
				{
					Local_907.f_31 = 1;
				}
				else
				{
					Local_907.f_31 = 2;
				}
			}
		}
		else if (Global_262145.f_18472)
		{
			if (Local_907.f_31 == 1)
			{
				if (!Global_262145.f_18473)
				{
					Local_907.f_31 = 2;
				}
				else
				{
					Local_907.f_31 = 0;
				}
			}
		}
		else if (Global_262145.f_18473)
		{
			if (Local_907.f_31 == 2)
			{
				if (!Global_262145.f_18472)
				{
					Local_907.f_31 = 0;
				}
				else
				{
					Local_907.f_31 = 1;
				}
			}
		}
		Local_907.f_15 = PLAYER::PLAYER_ID();
		Local_907.f_16[0] = PLAYER::PLAYER_ID();
		Local_907.f_24[0] = iLocal_84;
		Local_907.f_16[1] = func_29();
		Local_907.f_24[1] = iLocal_84;
		func_15(1);
	}
	return func_17(1);
}

int func_29()
{
	return -1;
}

int func_30()
{
	return Global_2544210.f_5191.f_342;
}

void func_31(int iParam0)
{
	Local_907 = iParam0;
}

int func_32()
{
	if (Global_2544210.f_5191.f_41)
	{
		Global_2544210.f_5191.f_41 = 0;
		return 1;
	}
	return 0;
}

void func_33()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7[2];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	bVar2 = true;
	bVar3 = true;
	if (Local_907 != 3)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
				iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (!func_47(iVar13, 0))
				{
					iVar6++;
					if (func_17(1))
					{
						if (Local_907.f_16[1] == func_29())
						{
							if (func_45(iVar13))
							{
								if (iVar13 != Local_907.f_15)
								{
									Local_907.f_16[1] = iVar13;
								}
							}
						}
					}
					if (!func_17(8))
					{
						if (iVar13 == Local_907.f_16[0])
						{
							if (func_44(iVar1, 1))
							{
								func_15(8);
							}
						}
					}
					else if (iVar13 == Local_907.f_16[0])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(8);
						}
					}
					if (!func_17(9))
					{
						if (iVar13 == Local_907.f_16[1])
						{
							if (func_44(iVar1, 1))
							{
								func_15(9);
							}
						}
					}
					else if (iVar13 == Local_907.f_16[1])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(9);
						}
					}
					if (func_27() == 1)
					{
						if (func_44(iVar1, 2))
						{
							if (!MISC::IS_BIT_SET(Local_907.f_2, iVar0))
							{
								iVar5++;
								MISC::SET_BIT(&(Local_907.f_2), iVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (MISC::IS_BIT_SET(Local_907.f_2, iVar0))
						{
							MISC::CLEAR_BIT(&(Local_907.f_2), iVar0);
						}
					}
					else if (func_27() == 3)
					{
						if (Local_942[iVar0 /*6*/].f_3 > 0)
						{
							iVar11 = func_34(iVar13);
							iVar7[iVar11] = (iVar7[iVar11] + Local_942[iVar0 /*6*/].f_3);
						}
						if (Local_942[iVar0 /*6*/].f_4 > 0)
						{
							iVar11 = func_34(iVar13);
							iVar12 = (1 - iVar11);
							iVar7[iVar12] = (iVar7[iVar12] + Local_942[iVar0 /*6*/].f_4);
						}
					}
					if (func_27() <= 2)
					{
						if (!bVar4)
						{
							if (func_44(iVar1, 1))
							{
								if (!func_44(iVar1, 7))
								{
									bVar4 = true;
								}
							}
						}
					}
					if (func_45(iVar13))
					{
						bVar3 = false;
						if (func_27() == 1)
						{
							iVar10++;
						}
						else if (func_44(iVar1, 1))
						{
							iVar10++;
						}
					}
					if (!func_44(iVar1, 0))
					{
						bVar2 = false;
					}
				}
			}
			iVar0++;
		}
	}
	if (!func_17(7))
	{
		if (iVar5 > 0)
		{
			func_15(7);
		}
	}
	else if (iVar5 == 0)
	{
		func_43(7);
	}
	if (!func_17(2))
	{
		if (iVar5 > 1)
		{
			func_15(2);
		}
	}
	else if (iVar5 <= 1)
	{
		func_43(2);
	}
	if (!func_17(4))
	{
		if (iVar6 > 1)
		{
			if (iVar6 == iVar5)
			{
				func_15(4);
			}
		}
	}
	if (!func_17(11))
	{
		if (func_27() == 2)
		{
			if (!bVar4)
			{
				func_15(11);
			}
		}
	}
	if (func_27() == 1)
	{
		if (func_25() == 0)
		{
			if (!func_5(&(Local_907.f_11)))
			{
				func_4(&(Local_907.f_11), 0, 0);
			}
			else if (func_2(&(Local_907.f_11), 10000, 0))
			{
				if (iVar10 < 2)
				{
					func_14(5);
				}
			}
		}
	}
	else if (func_27() == 3)
	{
		if (func_25() == 0)
		{
			iVar16 = iVar7[1];
			iVar15 = (iLocal_84 - iVar16);
			Local_907.f_27[0] = iVar7[0];
			Local_907.f_27[1] = iVar7[1];
			if (Local_907.f_24[0] != iVar15)
			{
				iVar14 = 0;
				if (Local_907.f_24[0] < iVar15)
				{
					iVar14 = (iVar15 - Local_907.f_24[0]);
				}
				Local_907.f_24[0] = (iVar15 - iVar14);
			}
			iVar16 = iVar7[0];
			iVar15 = (iLocal_84 - iVar16);
			if (Local_907.f_24[1] != iVar15)
			{
				iVar14 = 0;
				if (Local_907.f_24[1] < iVar15)
				{
					iVar14 = (iVar15 - Local_907.f_24[1]);
				}
				Local_907.f_24[1] = (iVar15 - iVar14);
			}
			if (Local_907.f_27[0] >= iLocal_84)
			{
				Local_907.f_30 = 0;
			}
			else if (Local_907.f_27[1] >= iLocal_84)
			{
				Local_907.f_30 = 1;
			}
			if (iVar10 < 2)
			{
				func_14(5);
			}
		}
		else if (func_25() == 1)
		{
			if (Local_907.f_30 == -1)
			{
				if (Local_907.f_27[0] == Local_907.f_27[1])
				{
					Local_907.f_30 = 99;
				}
				else if (Local_907.f_27[0] > Local_907.f_27[1])
				{
					Local_907.f_30 = 0;
				}
				else
				{
					Local_907.f_30 = 1;
				}
			}
		}
	}
	if (bVar2)
	{
		if (!func_17(0))
		{
			func_15(0);
		}
	}
	else if (func_17(0))
	{
		func_43(0);
	}
	if (Local_907.f_3 != iVar5)
	{
		Local_907.f_3 = iVar5;
	}
	if (func_25() == 0)
	{
		if (bVar3)
		{
			func_14(2);
		}
		if (Local_907.f_30 != -1)
		{
			func_14(4);
		}
	}
}

int func_34(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)
{
	return func_36() == iParam0;
}

int func_36()
{
	return Local_907.f_15;
}

int func_37(int iParam0)
{
	return func_38(iParam0, func_36(), 0);
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	return func_39(iParam0, iParam1, bParam2, 1);
}

int func_39(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_29() && iParam0 != func_29())
	{
		if (!bParam2)
		{
			if (func_42(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_29())
		{
			if (iParam1 == Global_1630816[iParam0 /*597*/].f_11)
			{
				return func_40(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_40(int iParam0, int iParam1)
{
	if (func_41(iParam0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_29())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_29())
			{
				if (Global_1630816[iParam0 /*597*/].f_11 == iParam0)
				{
					if (Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_43(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_907.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_942[iParam0 /*6*/].f_1, iParam1);
}

bool func_45(int iParam0)
{
	return func_46(iParam0, 1);
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 != func_29())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_29())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_48(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
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

int func_48(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
	}
	if (Global_1312882[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_49()
{
	return Global_1312763;
}

void func_50()
{
	if (iLocal_847 > -1)
	{
		if ((!func_803() && !func_802()) && !func_801(179))
		{
			if (func_759(1, 1, 1, 0))
			{
				switch (Local_942[iLocal_847 /*6*/].f_5)
				{
					case 0:
						if (!func_758(2))
						{
							func_737(179, 1, -1, 0);
							iLocal_866 = func_736(PLAYER::PLAYER_ID());
							StringCopy(&Local_868, func_735(), 64);
							func_734(2);
						}
						if (!func_758(4))
						{
							func_629(-1, 0, 0, -1, 0, 0);
							func_734(4);
						}
						if (Local_907.f_13 > 0)
						{
							if (Local_907.f_13 > 1)
							{
								Local_942[iLocal_847 /*6*/].f_5 = 4;
							}
							else
							{
								Local_942[iLocal_847 /*6*/].f_5 = Local_907.f_13;
							}
						}
						break;
					
					case 1:
						func_587();
						func_586();
						func_563();
						func_549();
						if (Local_907.f_13 != 1)
						{
							if (func_44(NETWORK::PARTICIPANT_ID(), 1))
							{
								func_539(1);
								Local_942[iLocal_847 /*6*/].f_5 = Local_907.f_13;
							}
							else
							{
								func_532();
								Local_942[iLocal_847 /*6*/].f_5 = 4;
							}
						}
						break;
					
					case 2:
						func_587();
						func_531();
						PAD::DISABLE_CONTROL_ACTION(0, 140, true);
						PAD::DISABLE_CONTROL_ACTION(0, 141, true);
						PAD::DISABLE_CONTROL_ACTION(0, 142, true);
						PAD::DISABLE_CONTROL_ACTION(0, 143, true);
						PAD::DISABLE_CONTROL_ACTION(0, 24, true);
						PAD::DISABLE_CONTROL_ACTION(0, 345, true);
						PAD::DISABLE_CONTROL_ACTION(0, 346, true);
						PAD::DISABLE_CONTROL_ACTION(0, 347, true);
						if (func_44(NETWORK::PARTICIPANT_ID(), 1) || func_44(NETWORK::PARTICIPANT_ID(), 2))
						{
							if (!func_44(NETWORK::PARTICIPANT_ID(), 6))
							{
								func_530(1);
							}
							func_549();
						}
						func_525();
						if (Local_907.f_13 != 2)
						{
							func_524(&iLocal_87);
							Local_942[iLocal_847 /*6*/].f_5 = Local_907.f_13;
						}
						break;
					
					case 3:
						if (func_5(&(Local_907.f_5)))
						{
							func_517((func_3() - func_22(&(Local_907.f_5), 0, 0)), func_25() != 0, &iLocal_85, -1);
						}
						if (!func_758(3))
						{
							if (func_2(&(Local_907.f_5), 10000, 0))
							{
								func_516();
								func_734(3);
							}
						}
						if (func_25() == 0)
						{
							func_587();
							func_515();
							func_514();
							func_513();
							if (func_512())
							{
								if (Local_942[iLocal_847 /*6*/].f_5 == 3)
								{
									func_511();
								}
							}
							if (iLocal_847 > -1)
							{
								if (iLocal_847 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									func_525();
									func_387(&(Global_1368721.f_534), &Global_1368721, 28, &(Global_1368721.f_1), &(Global_1368721.f_117), -1, 0, 0);
								}
							}
						}
						if (Local_907.f_13 != 3)
						{
							Local_942[iLocal_847 /*6*/].f_5 = Local_907.f_13;
						}
						break;
					
					case 4:
						if (Local_907.f_13 > 4)
						{
							Local_942[iLocal_847 /*6*/].f_5 = Local_907.f_13;
						}
						break;
					
					case 5:
						func_532();
						func_87();
						break;
					
					case 6:
						break;
				}
			}
			else
			{
				func_51();
			}
		}
		else
		{
			func_51();
		}
	}
}

void func_51()
{
	int iVar0;
	
	if (!func_758(5))
	{
		func_532();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_44(NETWORK::PARTICIPANT_ID(), 4))
			{
				func_86(4);
				func_84(1);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_855))
		{
			HUD::REMOVE_BLIP(&iLocal_855);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_854))
		{
			HUD::REMOVE_BLIP(&iLocal_854);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_856))
		{
			HUD::REMOVE_BLIP(&iLocal_856);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_857[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_857[iVar0]));
			}
			iVar0++;
		}
		func_74();
		func_72();
		func_71();
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		func_524(&iLocal_87);
		func_52();
		func_734(5);
	}
}

void func_52()
{
	func_53(0, 0);
}

void func_53(int iParam0, int iParam1)
{
	Global_2405077.f_22 = iParam0;
	Global_2405077.f_23 = iParam1;
}

void func_54(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_70())
		{
			func_69();
		}
		Global_2405077.f_713.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405077.f_713.f_504 = iParam1;
		Global_2405077.f_713.f_505 = iParam2;
		Global_2405077.f_713.f_506 = iParam10;
		func_72();
		func_58(8, 0, 0, 0, 0);
		Global_2405077.f_713.f_507 = iParam11;
		Global_2405077.f_713.f_512 = iParam3;
		Global_2405077.f_713.f_513 = iParam4;
		Global_2405077.f_713.f_510 = iParam5;
		Global_2405077.f_713.f_511 = iParam6;
		Global_2405077.f_713.f_514 = iParam7;
		Global_2405077.f_713.f_515 = iParam8;
		Global_2405077.f_713.f_516 = iParam9;
		Global_2405077.f_713.f_517 = iParam14;
		Global_2405077.f_713.f_508 = iParam12;
		Global_2405077.f_713.f_509 = iParam13;
		Global_2405077.f_1752 = 1;
	}
	else
	{
		func_55();
	}
}

void func_55()
{
	if (func_70() && !func_57())
	{
		func_69();
	}
	if (func_57())
	{
		func_56();
	}
	else
	{
		func_72();
		func_58(0, 0, 0, 0, 0);
		Global_2405077.f_1752 = 0;
		Global_2405077.f_1751 = 0;
	}
}

void func_56()
{
	MISC::_COPY_MEMORY(&(Global_2405077.f_713), &(Global_2405077.f_1232), 519);
	Global_2405077.f_489 = { Global_2405077.f_495 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_713.f_518)
	{
		Global_2405077.f_1751 = 0;
	}
}

int func_57()
{
	if ((Global_2405077.f_1751 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_1232.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405077.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2441237.f_2012.f_703.f_16 != func_29())
	{
		if (MISC::IS_BIT_SET(Global_2426865[Global_2441237.f_2012.f_703.f_16 /*449*/].f_417, 0) && func_59())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412723 = 0;
	}
	Global_2405077.f_489 = iParam0;
	Global_2405077.f_489.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405077.f_489.f_2 = iParam1;
	Global_2405077.f_489.f_3 = iParam2;
	Global_2405077.f_489.f_4 = iParam3;
	Global_2405077.f_489.f_5 = iParam4;
}

int func_59()
{
	if ((((((func_67(PLAYER::PLAYER_ID()) == 229 || func_67(PLAYER::PLAYER_ID()) == 191) || func_66()) || func_65()) || func_64(PLAYER::PLAYER_ID())) || Global_2518927.f_227 == 1) || (Global_2405077.f_1752 && func_60(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)
{
	if (func_63(iParam0))
	{
		return 1;
	}
	if (func_61(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_61(int iParam0)
{
	return func_62(iParam0, 20);
}

bool func_62(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2518926;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
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

var func_65()
{
	return Global_1574420;
}

int func_66()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_68(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_69()
{
	if (func_57())
	{
		if (Global_2405077.f_713.f_518 == Global_2405077.f_1232.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_713.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2405077.f_1232), &(Global_2405077.f_713), 519);
		Global_2405077.f_495 = { Global_2405077.f_489 };
		Global_2405077.f_1751 = 1;
	}
}

int func_70()
{
	if ((Global_2405077.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_713.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405077.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_71()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405077.f_1754[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_1753 = 0;
}

void func_72()
{
	if (func_70() && !func_57())
	{
		func_69();
	}
	func_73();
	Global_2405077.f_713 = 0;
}

void func_73()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405077.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	int iVar1;
	
	if (!func_758(8))
	{
		func_734(8);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (MISC::IS_BIT_SET(iLocal_848, iVar0))
					{
						func_82(iVar1, 432, 0, 0);
						func_75(iVar1, func_81(iLocal_867), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_75(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_77(iParam0))
	{
		return;
	}
	if (func_76(&(Global_2416162.f_624[iParam0]), &(Global_2416162.f_987[iParam0]), &(Global_2416162.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_459[iParam0] = uParam1;
		}
	}
}

int func_76(var uParam0, var uParam1, int* iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
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

int func_77(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_78())
	{
		return 1;
	}
	return 0;
}

int func_78()
{
	switch (func_80())
	{
		case 0:
			return func_79();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_79()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_80()
{
	return Global_31345;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
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
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_82(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_77(iParam0))
	{
		return;
	}
	if (func_76(&(Global_2416162.f_591[iParam0]), &(Global_2416162.f_954[iParam0]), &(Global_2416162.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_83();
		}
	}
}

void func_83()
{
	Global_2416162.f_1651 = 1;
}

void func_84(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_85())
		{
			if (func_1038(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_1038(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_85()
{
	return Global_1312436;
}

void func_86(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), iParam0);
}

void func_87()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<20> Var3;
	int iVar26;
	
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = -1;
	Var3.f_18 = -1;
	Var3.f_19 = -1;
	if (!func_758(1))
	{
		if (func_25() != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_759(1, 1, 1, 0))
				{
					if (((!func_803() && !func_802()) && !func_801(179)) && func_44(NETWORK::PARTICIPANT_ID(), 1))
					{
						if (func_385())
						{
							iVar1 = func_34(PLAYER::PLAYER_ID());
							iVar2 = Local_907.f_30;
							switch (func_25())
							{
								case 2:
									HUD::CLEAR_HELP(true);
									break;
								
								case 3:
									HUD::CLEAR_HELP(true);
									break;
								
								case 1:
									HUD::CLEAR_HELP(true);
									if (Local_907.f_30 > -1)
									{
										if (Local_907.f_30 == 99)
										{
											func_383(88, "BK_RUN_OVER", "BIGM_JOUSTDR", &Local_868, iLocal_866, 0, -1, -1, -1, 2, -1);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_383(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_868, iLocal_866, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_383(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_868, iLocal_866, 0, -1, -1, -1, 2, -1);
										}
									}
									else
									{
										func_364(88, "BK_RUN_OVER", "BIGM_JOUSTLT", 1, -1, 2, 1, 0);
									}
									break;
								
								case 5:
									HUD::CLEAR_HELP(true);
									func_364(88, "BK_RUN_OVER", "BIGM_JOUSTNB", 1, -1, 2, 1, 0);
									break;
								
								case 4:
									HUD::CLEAR_HELP(true);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_383(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_868, iLocal_866, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_383(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_868, iLocal_866, 0, -1, -1, -1, 2, -1);
									}
									break;
								
								case 6:
									func_383(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_868, iLocal_866, 0, -1, -1, -1, 2, -1);
									break;
							}
						}
					}
				}
				iVar26 = PLAYER::PLAYER_ID();
				func_362(1, iVar26);
				if (bVar0)
				{
				}
				func_124(179, bVar0, &Var3, 0);
				func_918(bVar0, 0);
				func_51();
				func_734(1);
			}
		}
	}
	if (func_89(&uLocal_831, 1, 0))
	{
		func_88(0);
	}
}

void func_88(int iParam0)
{
	MISC::SET_BIT(&(Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), iParam0);
}

int func_89(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_123(29);
	if ((*uParam0 > 0 && !func_122()) && func_116(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_113())
		{
			func_112();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_5(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_2(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1681713.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2544210.f_4655), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_111(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_5(&(uParam0->f_5)))
			{
				if (func_2(&(uParam0->f_5), 3000, 0))
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
				func_101(iParam2);
				func_111(uParam0, 2);
			}
			break;
		
		case 2:
			func_101(0);
			if (func_2(&(uParam0->f_1), 15000, 0))
			{
				if (func_90(func_91(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				func_111(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_2(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2544210.f_4655), 1);
				MISC::CLEAR_BIT(&(Global_1681713.f_3), 2);
				func_111(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2544210.f_4655), 1);
			MISC::CLEAR_BIT(&(Global_1681713.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_90(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_91(int iParam0)
{
	if (((func_99(PLAYER::PLAYER_ID()) || func_98(PLAYER::PLAYER_ID())) || func_95()) || iParam0)
	{
		if (func_98(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_92(func_94()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_92(int iParam0)
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
	return func_93(iParam0, 0);
	return 0;
}

int func_93(int iParam0, int iParam1)
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

int func_94()
{
	return Global_1658176;
}

bool func_95()
{
	return (func_97() && func_45(func_96()));
}

int func_96()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_35;
}

bool func_97()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 148;
}

bool func_98(int iParam0)
{
	return func_93(func_67(iParam0), 0);
}

bool func_99(int iParam0)
{
	return func_100(func_67(iParam0));
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 148 && func_46(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_101(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2544210.f_4655, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2544210.f_836, 2)) && func_1038(PLAYER::PLAYER_ID(), 1, 1)) && !Global_74428) && !Global_59279) && !CAM::IS_SCREEN_FADED_OUT()) && !func_62(PLAYER::PLAYER_ID(), 22)) && func_116(PLAYER::PLAYER_ID()) != 0) && !func_109(func_110())) && !func_99(PLAYER::PLAYER_ID())) && !func_108(func_67(PLAYER::PLAYER_ID()))) && !func_107(func_67(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2544210.f_4655), 1);
			func_106(func_91(iParam0), -1);
			func_102(1);
			MISC::CLEAR_BIT(&(Global_2544210.f_4655), 0);
		}
	}
}

void func_102(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_103(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_122())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_103(bool bParam0)
{
	return func_104(PLAYER::PLAYER_ID(), bParam0);
}

bool func_104(int iParam0, bool bParam1)
{
	return func_105(iParam0, bParam1, 1);
}

int func_105(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_46(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_29() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_106(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_110()
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_112()
{
	Global_2465049 = 1;
}

int func_113()
{
	if (((((((func_67(PLAYER::PLAYER_ID()) == 170 || func_67(PLAYER::PLAYER_ID()) == 219) || func_67(PLAYER::PLAYER_ID()) == 221) || func_67(PLAYER::PLAYER_ID()) == 220) || func_67(PLAYER::PLAYER_ID()) == 216) || func_67(PLAYER::PLAYER_ID()) == 215) || func_67(PLAYER::PLAYER_ID()) == 214) || func_67(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_114(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
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
		case joaat("mpsv_lp0_31"):
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
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

int func_116(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_121(iParam0) && !func_120(iParam0)) && !MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 8));
	bVar2 = func_61(iParam0);
	bVar3 = func_85();
	bVar4 = func_803();
	if ((bVar1 && (func_63(iParam0) || func_119(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_118(iParam0)) && !func_117(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2544210.f_5191.f_219 != iVar0)
	{
		Global_2544210.f_5191.f_219 = iVar0;
	}
	return iVar0;
}

bool func_117(int iParam0)
{
	return func_62(iParam0, 19);
}

int func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_62(iParam0, 9);
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

bool func_120(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 2);
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

bool func_122()
{
	return Global_2441237.f_2841[0 /*80*/].f_1 != 0;
}

void func_123(int iParam0)
{
	MISC::SET_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_4), iParam0);
}

void func_124(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_360(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_359(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_358(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_355(iParam0))
	{
		if (bParam1)
		{
			if (func_354(PLAYER::PLAYER_ID()) > 0)
			{
				func_353();
			}
			else
			{
				func_352();
			}
		}
		else
		{
			func_351();
		}
	}
	func_335(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_333(iParam0, uParam2, &iVar0, &iVar5);
	func_307(iParam0, uParam2, &iVar0, &iVar5);
	func_304(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_287(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2544210.f_5191.f_385 = iVar4;
	}
	else
	{
		Global_2544210.f_5191.f_385 = iVar5;
	}
	iVar8 = func_96();
	if (iVar8 != func_29() && iParam0 != 148)
	{
		if (func_286(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_284(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_236(&iVar0, 1);
			}
		}
	}
	func_231(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1681722.f_10 = iVar1;
		func_230();
		func_180(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1681722.f_9 = iVar0;
		func_154(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_153(iParam0, iVar0);
		if (func_152(iParam0))
		{
			if (func_151(iParam0) > -1)
			{
				func_150(func_151(iParam0), iVar0);
			}
		}
		Global_2465707 = iVar0;
		func_149(&Global_2463963, 0, 0);
	}
	if (func_118(PLAYER::PLAYER_ID()) || func_61(PLAYER::PLAYER_ID()))
	{
		func_137(iParam0);
	}
	if (func_100(iParam0))
	{
		Global_1681740.f_13 = iVar0;
		Global_1681740.f_14 = iVar1;
	}
	if (func_108(iParam0))
	{
		Global_1681794.f_13 = iVar0;
		Global_1681794.f_14 = iVar1;
	}
	if (func_136(iParam0))
	{
		Global_1681857.f_12 = iVar0;
		Global_1681857.f_13 = iVar1;
	}
	if (func_135(iParam0))
	{
		Global_1681901.f_12 = iVar0;
		Global_1681901.f_13 = iVar1;
	}
	if (func_134(iParam0))
	{
		Global_1681955.f_12 = iVar0;
		Global_1681955.f_13 = iVar1;
	}
	if (func_107(iParam0))
	{
		if (func_133(iParam0))
		{
			Global_1682037.f_12 = iVar0;
			Global_1682037.f_13 = iVar1;
		}
		else if (func_129(iParam0))
		{
			Global_1682091.f_12 = iVar0;
			Global_1682091.f_13 = iVar1;
		}
	}
	if (func_128(iParam0))
	{
		Global_1682175.f_12 = iVar0;
		Global_1682175.f_13 = iVar1;
	}
	if (func_127(iParam0))
	{
		Global_1682250.f_16 = iVar0;
		Global_1682250.f_17 = iVar1;
	}
	if (func_126(iParam0))
	{
		Global_1682337.f_16 = iVar0;
		Global_1682337.f_17 = iVar1;
	}
	if (func_125(iParam0))
	{
		Global_1682470.f_15 = iVar0;
		Global_1682470.f_16 = iVar1;
	}
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_129(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_130(func_131(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_131(int iParam0)
{
	if (func_67(iParam0) == 237 || func_67(iParam0) == 250)
	{
		return func_132(iParam0);
	}
	return -1;
}

int func_132(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_133(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_137(int iParam0)
{
	if (func_148(PLAYER::PLAYER_ID()) && func_147())
	{
		if (func_146(iParam0))
		{
			func_140(10571, -1);
		}
		else if (func_139(iParam0))
		{
			func_140(10573, -1);
		}
		else if (func_93(iParam0, 1))
		{
			func_140(10574, -1);
		}
		else if (func_138(iParam0))
		{
			func_140(10575, -1);
		}
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_144(iParam0, func_145(iParam1), 0);
	iVar0++;
	if (!func_143(iParam0))
	{
		func_142(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_141(iParam0, iVar0, iParam1, 1);
	}
}

void func_141(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_145(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_145(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_145(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_145(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_145(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_145(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_145(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_145(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_145(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_145(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_145(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_145(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_145(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_145(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_145(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_145(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_145(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_145(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_145(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_145(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_145(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_145(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_145(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_145(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_145(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_145(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_145(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_145(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_145(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_145(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_145(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_145(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_145(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_145(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_145(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_145(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_145(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_145(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_145(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_145(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_145(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_145(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_145(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_145(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_145(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_145(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_145(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_145(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_145(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_145(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_145(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_145(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_145(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_142(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_143(int iParam0)
{
	if (Global_1390376)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10441:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
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
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
				return 1;
				break;
			}
	}
	return 0;
}

int func_144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_145(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_147()
{
	return func_45(PLAYER::PLAYER_ID());
}

bool func_148(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_125, 14);
}

void func_149(var uParam0, bool bParam1, bool bParam2)
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

void func_150(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23677 == 0 || Global_262145.f_23677 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23677 == 1)
			{
				Global_2544210.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6755)
				{
					iParam1 = Global_262145.f_6755;
				}
				Global_2544210.f_284 = iParam1;
				Global_2544210.f_285 = 0;
			}
		}
	}
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_153(int iParam0, int iParam1)
{
	if (func_148(PLAYER::PLAYER_ID()) && func_147())
	{
		if (func_146(iParam0) && iParam1 > 0)
		{
			func_142(10572, (func_144(10572, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_179();
	if (iVar5 != func_29())
	{
		func_178(iVar5, &iVar0, &iVar1);
	}
	bVar6 = !func_177(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_176())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_147())
			{
				if (!func_176())
				{
					Var7 = { func_175() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_174(Var7)), func_173(Var7), iParam4);
				}
			}
			else if (func_176())
			{
				func_161(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_160())
			{
				if (!func_176())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_174(func_159(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_176())
			{
				func_161(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_160())
			{
				if (!func_176())
				{
					iVar2 = func_155(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_176())
			{
				func_161(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(iVar0, iVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_176())
			{
				func_161(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(iParam1);
			}
			break;
		
		case 237:
			if (func_160())
			{
				if (!func_176())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_HUB_SELL(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_176())
			{
				func_161(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_176())
			{
				func_161(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(iParam1);
			}
			break;
		
		case 249:
			if (func_176())
			{
				func_161(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_176())
			{
				func_161(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_FMBB_BOSS_WORK(iParam1);
			}
			break;
		
		case 243:
			if (func_176())
			{
				func_161(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_176())
				{
					func_161(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					MONEY::_NETWORK_EARN_CASINO_HEIST(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_176())
			{
				func_161(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				MONEY::_NETWORK_EARN_CASINO_HEIST(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_176())
			{
				func_161(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_BOSS_AGENCY(iVar0, iVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_155(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_158(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_156(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_156(int iParam0, int iParam1)
{
	return (func_157(iParam0) * iParam1);
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22490;
		
		case 0:
			return Global_262145.f_22491;
		
		case 1:
			return Global_262145.f_22492;
		
		case 2:
			return Global_262145.f_22493;
		
		case 3:
			return Global_262145.f_22494;
		
		case 4:
			return Global_262145.f_22495;
		
		case 5:
			return Global_262145.f_22496;
		
		case 6:
			return Global_262145.f_22497;
		
		case 7:
			return Global_262145.f_22498;
		
		default:
	}
	return 0;
}

float func_158(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22500);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22502;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22499);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22502;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22499);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22504;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22501);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22504;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22501);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22504;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22501);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_159(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_185[5 /*12*/];
}

bool func_160()
{
	return func_41(PLAYER::PLAYER_ID());
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_176())
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
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_162(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_162(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -1752851493:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_162(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
			func_162(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_176())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_49()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4265506[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_169(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4265506[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4265506[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4267007 = 1;
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_168(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_163(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_164(iParam0);
	}
}

void func_164(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_176())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_167(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4265506[iParam0 /*85*/].f_66);
		}
		func_165(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_165(var uParam0)
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
	func_166(&(uParam0->f_14));
	func_166(&(uParam0->f_14.f_13));
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

void func_166(var uParam0)
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

int func_167(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_168(int iParam0, int iParam1)
{
	Global_2465846 = iParam1;
	Global_2465845 = iParam0;
}

int func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_176())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4265506[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4265506[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4265506[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4265506[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4265506[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4265506[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4265506[iVar0 /*85*/].f_66 = iParam0;
			Global_4265506[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4265506[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4265506[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4265506[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4265506[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4265506[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4266993 = 0;
			if (bParam6)
			{
				Global_4265506[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_170(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_170(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -384079069;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_172(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_171();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_171()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_172(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_174(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_175()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_194;
}

int func_176()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_177(bool bParam0)
{
	return func_286(PLAYER::PLAYER_ID(), bParam0);
}

void func_178(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630816[iParam0 /*597*/].f_11.f_8[0];
	*uParam2 = Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_179()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11;
}

int func_180(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_181(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_181(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_191(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_187(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_182(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_182(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_185(iParam0, 1) };
	if (iParam0 == func_184(PLAYER::PLAYER_PED_ID()))
	{
		func_183(1);
	}
	func_187(Var0, iParam1, 0, sParam2, iParam3);
}

void func_183(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_184(int iParam0)
{
	return iParam0;
}

Vector3 func_185(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_186(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_186(int iParam0)
{
	return iParam0;
}

void func_187(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2441237.f_1408[iVar0 /*30*/].f_6 == 0 || Global_2441237.f_1408[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2441237.f_1408[iVar1 /*30*/] = { Param0 };
			Global_2441237.f_1408[iVar1 /*30*/].f_6 = 1;
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_190(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam3;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam4;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_189();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_188();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_188()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_189()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_190(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
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

var func_191(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_192(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_229(PLAYER::PLAYER_ID()) || func_228(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9807 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9807;
		}
	}
	else if (func_225() || func_224(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22962 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22962;
		}
	}
	else if (Global_262145.f_6806 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6806;
	}
	if (func_223(sParam2))
	{
	}
	if (func_222())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_220(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_219(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_216(0, &iVar1);
					break;
				
				case 3:
					func_216(1, &iVar1);
					break;
				
				case 1:
					func_212(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1694735)
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
			func_211(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_203((func_210(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_36.f_2 != -1)
				{
					func_211(1166, iVar1, -1);
				}
				func_197(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_193((func_195(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_193((func_195(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_193(int iParam0)
{
	if (func_222())
	{
		Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_5 = iParam0;
		func_194(joaat("mpply_globalxp"), iParam0);
	}
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_195(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1038(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_196(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_196(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_197(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_202(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_200(func_201(&Var0));
			if (iVar13 == 0)
			{
				func_199(&Global_1390382, iParam0);
				func_198(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar13 == 1)
			{
				func_199(&Global_1390383, iParam0);
				func_198(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar13 == 2)
			{
				func_199(&Global_1390384, iParam0);
				func_198(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar13 == 3)
			{
				func_199(&Global_1390385, iParam0);
				func_198(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar13 == 4)
			{
				func_199(&Global_1390386, iParam0);
				func_198(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_198(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1390377 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1390380 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1390381 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1390382 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1390383 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1390384 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1390385 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1390386 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1390387 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1390388 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1390389 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1390390 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1390391 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1390392 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1390393 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_199(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_200(int iParam0)
{
	if (iParam0 == Global_1390377)
	{
		return 0;
	}
	else if (iParam0 == Global_1390378)
	{
		return 1;
	}
	else if (iParam0 == Global_1390379)
	{
		return 2;
	}
	else if (iParam0 == Global_1390380)
	{
		return 3;
	}
	else if (iParam0 == Global_1390381)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_201(int* iParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return Global_2463440;
		}
	}
	return Global_2463440;
}

struct<13> func_202(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_203(int iParam0, int iParam1, int iParam2)
{
	if (func_222())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_145(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_145(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
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
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_209(PLAYER::PLAYER_ID()))
		{
			Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_6 = func_207(iParam0, 1);
		}
		func_141(640, iParam0, -1, 1);
		func_142(641, func_207(iParam0, 1), -1, 1, 0);
		Global_1390527[func_145(-1)] = iParam0;
		func_204(-1109644434, 7, 0);
	}
}

void func_204(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_206(iParam1, iParam2))
	{
		iVar0 = func_205();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_205()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2463392[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_206(int iParam0, var uParam1)
{
	if (Global_1312890)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312902) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_207(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_208(iParam0, 0);
}

int func_208(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
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
		if (Global_293361[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_293361[iVar3] < iParam0)
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

int func_209(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2441237.f_1, iParam0);
	}
	return 1;
}

int func_210(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1390527[func_145(-1)];
			}
			else if (func_209(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_145(-1)];
	}
	return 0;
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_144(iParam0, func_145(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_143(iParam0))
	{
		func_142(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_141(iParam0, iVar0, iParam2, 1);
	}
}

void func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_215(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_214(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_213(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_213(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_213(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_214(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2518253 = { func_202(iParam0) };
		Global_2518266 = { func_202(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2518253))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2518266))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518183, 35, &Global_2518253);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518218, 35, &Global_2518266);
				if (Global_2518183 == Global_2518218)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_215(int iParam0, int iParam1, int iParam2)
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
					return MISC::IS_BIT_SET(Global_4456448.f_543, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_216(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_1038(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_214(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_1038(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_217(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_214(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_213(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_213(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_217(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_218(iParam0), func_218(iParam1));
	return 0f;
}

Vector3 func_218(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_219(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_213(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_220(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_210(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_210(PLAYER::PLAYER_ID());
		}
	}
	if (func_221(8000, 0, 0) > 0)
	{
		if (func_221(8000, 0, 0) < (iParam0 + func_210(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_221(8000, 0, 0) - func_210(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_221(int iParam0, bool bParam1, int iParam2)
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
	return Global_293361[iParam0];
}

int func_222()
{
	return 1;
}

int func_223(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	return func_134(func_67(iParam0));
}

bool func_225()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_227();
	}
	return func_226(Global_4456448.f_85535);
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_227()
{
	return Global_2453009.f_19;
}

bool func_228(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_229(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_230()
{
	Global_2465048 = 1;
}

void func_231(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_235(7))
	{
		return;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_233(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2544210.f_5191.f_268, NETWORK::GET_NETWORK_TIME()));
	if (func_232(iParam0) != -1)
	{
		if (iVar2 > func_232(iParam0))
		{
			iVar2 = func_232(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12573)
	{
		iVar2 = Global_262145.f_12573;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_232(int iParam0)
{
	if (func_93(iParam0, 0) || func_139(iParam0))
	{
		return Global_262145.f_18666;
	}
	if (func_146(iParam0))
	{
		return Global_262145.f_18665;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18662;
		
		case 191:
			return Global_262145.f_18664;
		
		case 190:
			return Global_262145.f_18663;
		
		case 227:
			return Global_262145.f_21224;
		
		case 226:
			return Global_262145.f_21212;
		
		case 225:
			return Global_262145.f_21232;
		
		case 230:
			return Global_262145.f_22487;
		
		case 229:
			return Global_262145.f_22391;
		
		case 233:
			return Global_262145.f_22967;
		
		case 237:
			return Global_262145.f_24130;
		
		case 238:
			return Global_262145.f_24241;
		
		case 249:
			return Global_262145.f_24257;
		
		case 243:
			return Global_262145.f_26590;
		
		default:
	}
	return -1;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12664;
		
		case 152:
			return Global_262145.f_12699;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12687;
		
		case 157:
			return Global_262145.f_12654;
		
		case 159:
			return Global_262145.f_12637;
		
		case 164:
			return Global_262145.f_12677;
		
		case 160:
			return Global_262145.f_12727;
		
		case 162:
			return Global_262145.f_12747;
		
		case 163:
			return Global_262145.f_12712;
		
		case 154:
			return Global_262145.f_12782;
		
		case 155:
			return Global_262145.f_12772;
		
		case 153:
			return Global_262145.f_12736;
		
		case 170:
			return Global_262145.f_15174;
		
		case 171:
			return Global_262145.f_15233;
		
		case 172:
			return Global_262145.f_15251;
		
		case 173:
			return Global_262145.f_15192;
		
		case 166:
			return Global_262145.f_15207;
		
		case 167:
			return Global_262145.f_15298;
		
		case 169:
			return Global_262145.f_15270;
		
		case 168:
			return Global_262145.f_15263;
		
		case 179:
			return Global_262145.f_18545;
		
		case 180:
			return Global_262145.f_18323;
		
		case 182:
			return Global_262145.f_18323;
		
		case 183:
			return Global_262145.f_18323;
		
		case 185:
			return Global_262145.f_18323;
		
		case 186:
			return Global_262145.f_18323;
		
		case 189:
			return Global_262145.f_18545;
		
		case 190:
			return Global_262145.f_18199;
		
		case 191:
			return Global_262145.f_18290;
		
		case 192:
			return Global_262145.f_18084;
		
		case 193:
			return Global_262145.f_18545;
		
		case 194:
			return Global_262145.f_18545;
		
		case 195:
			return Global_262145.f_18323;
		
		case 197:
			return Global_262145.f_18323;
		
		case 198:
			return Global_262145.f_18323;
		
		case 199:
			return Global_262145.f_18545;
		
		case 200:
			return Global_262145.f_18545;
		
		case 201:
			return Global_262145.f_18545;
		
		case 205:
			return Global_262145.f_18545;
		
		case 207:
			return Global_262145.f_18323;
		
		case 208:
			return Global_262145.f_18323;
		
		case 209:
			return Global_262145.f_18323;
		
		case 210:
			return Global_262145.f_18545;
		
		case 211:
			return Global_262145.f_18545;
		
		case 214:
			return Global_262145.f_19395;
		
		case 215:
			return Global_262145.f_19397;
		
		case 216:
			return Global_262145.f_19399;
		
		case 217:
			return Global_262145.f_19401;
		
		case 218:
			return Global_262145.f_19403;
		
		case 219:
			return Global_262145.f_19405;
		
		case 220:
			return Global_262145.f_19407;
		
		case 221:
			return Global_262145.f_19409;
		
		case 225:
			if (!func_160())
			{
				return Global_262145.f_21234;
			}
			break;
		
		case 226:
			if (!func_160())
			{
				return Global_262145.f_21214;
			}
			break;
		
		case 227:
			if (!func_160())
			{
				return Global_262145.f_21226;
			}
			break;
		
		case 229:
			if (!func_160())
			{
				return Global_262145.f_22393;
			}
			break;
		
		case 230:
			if (!func_160())
			{
				return Global_262145.f_22489;
			}
			break;
		
		case 233:
			if (!func_160())
			{
				return Global_262145.f_22966;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_160())
			{
				return Global_262145.f_24132;
			}
			break;
		
		case 238:
			if (!func_160())
			{
				return Global_262145.f_24243;
			}
			break;
		
		case 249:
			if (!func_160())
			{
				return Global_262145.f_24259;
			}
			break;
		
		case 243:
			if (!func_160())
			{
				return Global_262145.f_26593;
			}
			break;
		
		case 158:
			if (!func_160())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12663;
		
		case 152:
			return Global_262145.f_12698;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12686;
		
		case 157:
			return Global_262145.f_12653;
		
		case 159:
			return Global_262145.f_12636;
		
		case 164:
			return Global_262145.f_12676;
		
		case 160:
			return Global_262145.f_12726;
		
		case 162:
			return Global_262145.f_12746;
		
		case 163:
			return Global_262145.f_12711;
		
		case 154:
			return Global_262145.f_12781;
		
		case 155:
			return Global_262145.f_12771;
		
		case 153:
			return Global_262145.f_12735;
		
		case 170:
			return Global_262145.f_15173;
		
		case 171:
			return Global_262145.f_15232;
		
		case 172:
			return Global_262145.f_15250;
		
		case 173:
			return Global_262145.f_15191;
		
		case 166:
			return Global_262145.f_15206;
		
		case 179:
			return Global_262145.f_18544;
		
		case 180:
			return Global_262145.f_18322;
		
		case 182:
			return Global_262145.f_18322;
		
		case 183:
			return Global_262145.f_18322;
		
		case 185:
			return Global_262145.f_18322;
		
		case 186:
			return Global_262145.f_18322;
		
		case 189:
			return Global_262145.f_18544;
		
		case 193:
			return Global_262145.f_18544;
		
		case 194:
			return Global_262145.f_18544;
		
		case 195:
			return Global_262145.f_18322;
		
		case 197:
			return Global_262145.f_18322;
		
		case 198:
			return Global_262145.f_18322;
		
		case 199:
			return Global_262145.f_18544;
		
		case 200:
			return Global_262145.f_18544;
		
		case 201:
			return Global_262145.f_18544;
		
		case 205:
			return Global_262145.f_18544;
		
		case 207:
			return Global_262145.f_18322;
		
		case 208:
			return Global_262145.f_18322;
		
		case 209:
			return Global_262145.f_18322;
		
		case 210:
			return Global_262145.f_18544;
		
		case 211:
			return Global_262145.f_18544;
		
		case 190:
			if (func_103(0))
			{
				return Global_262145.f_18198;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_103(0))
			{
				return Global_262145.f_18289;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_103(0))
			{
				return Global_262145.f_18083;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19394;
		
		case 215:
			return Global_262145.f_19396;
		
		case 216:
			return Global_262145.f_19398;
		
		case 217:
			return Global_262145.f_19400;
		
		case 218:
			return Global_262145.f_19402;
		
		case 219:
			return Global_262145.f_19404;
		
		case 220:
			return Global_262145.f_19406;
		
		case 221:
			return Global_262145.f_19408;
		
		case 225:
			if (func_103(0))
			{
				return Global_262145.f_21233;
			}
			break;
		
		case 226:
			if (func_103(0))
			{
				return Global_262145.f_21213;
			}
			break;
		
		case 227:
			if (func_103(0))
			{
				return Global_262145.f_21225;
			}
			break;
		
		case 229:
			if (func_103(0))
			{
				return Global_262145.f_22392;
			}
			break;
		
		case 230:
			if (func_103(0))
			{
				return Global_262145.f_22488;
			}
			break;
		
		case 233:
			if (func_103(0))
			{
				return Global_262145.f_22968;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_103(0))
			{
				return Global_262145.f_24131;
			}
			break;
		
		case 238:
			if (func_103(0))
			{
				return Global_262145.f_24242;
			}
			break;
		
		case 249:
			if (func_103(0))
			{
				return Global_262145.f_24258;
			}
			break;
		
		case 243:
			return Global_262145.f_26589;
		
		case 158:
			if (func_103(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_235(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_46, iParam0);
}

void func_236(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_160())
		{
			if (func_177(0))
			{
				if (!func_103(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_179()))
					{
						if (func_283() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_283());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_281(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_241("GB_BCUT_TICK1", func_179(), iVar0, 0, 0, 1);
						}
						func_240(20);
						func_237(func_179(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1038(iParam0, 0, 1))
	{
		Var0 = -1855721397;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_239(iParam0);
		func_238(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_172(iParam0));
	}
}

void func_238(var uParam0, var uParam1)
{
	*uParam0 = Global_1658176.f_9;
	*uParam1 = Global_1658176.f_10;
}

var func_239(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_508;
}

void func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

int func_241(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
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
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_248(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_246(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_242(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_242(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_245() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_47(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_243(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1678174.f_5[iVar0 /*53*/] = iParam0;
		Global_1678174.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1678174.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1678174.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1678174.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1678174.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1678174.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_243(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_244(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1678174++;
	if (Global_1678174 > 5)
	{
		Global_1678174 = 5;
		return Global_1678174;
	}
	return (Global_1678174 - 1);
}

void func_244(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_245()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_246(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_247(&cVar0);
}

var func_247(char[4] cParam0)
{
	return cParam0;
}

int func_248(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_279(iParam0) && !bParam4)
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
			if (Global_4456448.f_80260[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_279(PLAYER::PLAYER_ID()) || (func_278() && func_277())) && !MISC::IS_BIT_SET(Global_2544210.f_4658, 31)) && !bParam4)
	{
		iVar1 = func_276();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1038(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_274(iParam1, iParam0, 0);
							}
							else
							{
								return func_260(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_260(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_274(iParam1, iParam0, 0);
				}
				else
				{
					return func_249(0, -1, 0);
				}
			}
			else
			{
				return func_249(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_274(iParam1, iParam0, 0);
		}
		else
		{
			return func_260(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_260(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_249(bool bParam0, int iParam1, bool bParam2)
{
	return func_250(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_250(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_259() || (func_258() && func_256())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_255(iParam2, iVar0);
		}
		else
		{
			return func_255(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_215(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_254(1);
				}
				else
				{
					return func_254(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_251(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_251(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_254(1);
	}
	return func_254(0);
}

int func_251(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_253(iParam0, iParam1, iParam3);
	if (func_252(Global_4456448.f_85535, 1))
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

int func_252(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_133963 == 65)
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
		if (iParam0 == Global_262145.f_9191[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_253(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_215(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_254(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_255(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_253(iParam1, iParam0, 4);
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

bool func_256()
{
	if (func_257())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_138135, 4);
}

bool func_257()
{
	return MISC::IS_BIT_SET(Global_4456448.f_127830, 12);
}

bool func_258()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_138135, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_138135, 0) || Global_1660806) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_259()
{
	if (func_257() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590908[iVar2 /*874*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_267())
			{
				iVar3 = func_265(iParam0);
				if (!iVar3 == -1)
				{
					return func_263(iVar3);
				}
			}
			if ((func_262(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_215(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_254(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_261(1);
			}
			else
			{
				return func_250(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_254(1);
			}
			else
			{
				return func_250(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_265(iParam0);
	if (!iVar4 == -1)
	{
		return func_263(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_261(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_262(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_263(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_264(iParam0);
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

var func_264(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_265(int iParam0)
{
	if (!iParam0 == func_29())
	{
		if (func_286(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_266(iParam0)];
		}
	}
	return -1;
}

int func_266(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_29();
}

int func_267()
{
	if (((((func_273() || func_272()) || func_227()) || func_271()) || func_270()) || func_268())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_268()
{
	return func_269(Global_4456448.f_85535);
}

int func_269(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30524[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_270()
{
	return Global_2453009.f_24;
}

var func_271()
{
	return Global_2453009.f_21;
}

var func_272()
{
	return Global_2453009.f_18;
}

var func_273()
{
	return Global_2453009.f_17;
}

int func_274(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_267())
	{
		iVar2 = func_265(iParam1);
		if (!iVar2 == -1)
		{
			return func_263(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_29())
	{
		if (Global_4456448.f_80260[iParam0] != -1 && Global_4456448.f_80260[iParam0] <= 4)
		{
			if (Global_4456448.f_80260[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_80260[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_80260[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_80260[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_80260[iParam0];
			}
		}
		else
		{
			iVar0 = func_250(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_275(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_215(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_261(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_275(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_134108;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_134109;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_134110;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_134111;
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

var func_276()
{
	return Global_2359302.f_2;
}

bool func_277()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_278()
{
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_36.f_18, 14);
}

int func_279(int iParam0)
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_280())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_280()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

void func_281(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_282(1);
	}
	else
	{
		iVar1 = func_282(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_282(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12568;
}

int func_283()
{
	return Global_262145.f_12567;
}

int func_284(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_29())
	{
		if (!bParam2)
		{
			if (func_285(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_29())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11;
		}
	}
	return 0;
}

int func_285(int iParam0, int iParam1)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_29())
			{
				if (Global_1630816[iParam0 /*597*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_286(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_41(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_29();
}

void func_287(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_103(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_160())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_179();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590908[iVar11 /*874*/].f_851.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590908[iVar11 /*874*/].f_851.f_2;
			}
			else
			{
				iVar2 = func_303(Global_1590908[iVar11 /*874*/].f_851, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_302(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_301("TICK_TCUT", iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1682037.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_300(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_298(*uParam3);
				}
				iVar6 = func_297(&uVar5);
				iVar7 = Global_262145.f_24161;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_24160));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_240(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_296(iVar23))
								{
									func_288(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_24133;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24134;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_240(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_290(iParam0);
	func_289(iParam0, uVar0, iParam1, iParam2);
}

void func_289(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 1152266822;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_239(iParam0);
	func_238(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_29())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_172(iParam0));
		}
	}
}

int func_290(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_295();
	iVar0 = func_293(iParam0, iVar0);
	iVar1 = Global_1630816[func_179() /*597*/].f_11.f_424;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_15134));
	if (iVar0 < func_292())
	{
		iVar0 = func_292();
	}
	if (iVar0 > func_291())
	{
		iVar0 = func_291();
	}
	return iVar0;
}

int func_291()
{
	return Global_262145.f_15135;
}

int func_292()
{
	return Global_262145.f_16310;
}

int func_293(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_354(iParam0) * func_294());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_294()
{
	return Global_262145.f_16309;
}

var func_295()
{
	return Global_262145.f_12559;
}

int func_296(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_284(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_62(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_297(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_47(iVar2, 0) && !func_284(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_47(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_298(int iParam0)
{
	func_299(iParam0, 7238);
}

void func_299(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_144(iParam1, -1, 0);
	func_142(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_300(int iParam0)
{
	func_299(iParam0, 7233);
}

int func_301(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	if (bParam2)
	{
		func_242(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_242(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_302(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_24162);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_303(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_304(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_103(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_160())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_179();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_156(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_155(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_306(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_301("SMTICK_RONCUT", func_306(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - func_306(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_305(iVar2, iVar9);
				iVar6 = func_297(&uVar5);
				iVar7 = Global_262145.f_22506;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22505));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_240(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_296(iVar20))
								{
									func_288(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22439;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22440;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_240(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_305(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_299(iParam0, 6118);
	}
	if (iParam1 > 0)
	{
		func_299(iParam1, 6119);
	}
}

int func_306(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22473);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22474))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22474);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_307(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_103(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_160())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_179();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_159(iVar15);
			iVar0 = (func_332(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_328(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21216));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21215));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_322(iVar16, iVar2);
				if (func_318(iVar16) >= Global_262145.f_20762 || iVar2 >= Global_262145.f_20762)
				{
					func_308(5);
				}
				iVar6 = func_297(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21218);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21217));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_240(108);
					}
					else
					{
						func_240(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_296(iVar20))
								{
									func_288(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21219;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21220;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_240(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20750)
			{
				if (func_310(Global_262145.f_20751))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20752)
			{
				if (func_310(Global_262145.f_20753))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20754)
			{
				if (func_310(Global_262145.f_20755))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20756)
			{
				if (func_310(Global_262145.f_20757))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20758)
			{
				if (func_310(Global_262145.f_20759))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20760)
			{
				if (func_310(Global_262145.f_20761))
				{
					func_301("CLOTHAWDSTRAP3", Global_262145.f_20762, 0);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20763)
			{
				if (func_310(Global_262145.f_20764))
				{
					func_301("CLOTHAWDSTRAP5", Global_262145.f_20898, 0);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20766)
			{
				if (func_310(Global_262145.f_20767))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20768)
			{
				if (func_310(Global_262145.f_20769))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20770)
			{
				if (func_310(Global_262145.f_20771))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20772)
			{
				if (func_310(Global_262145.f_20773))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20774)
			{
				if (func_310(Global_262145.f_20775))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20776)
			{
				if (func_310(Global_262145.f_20777))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20778)
			{
				if (func_310(Global_262145.f_20779))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20780)
			{
				if (func_310(Global_262145.f_20781))
				{
					func_309("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_309(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	else
	{
		Global_2518253 = { func_202(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518183, 35, &Global_2518253))
		{
			bVar1 = false;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
			{
				bVar1 = true;
			}
			if (Global_2518183.f_21 > 0)
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, bVar1, false, Global_2518183, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314059, Global_1314060, Global_1314061);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
	}
	func_242(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_315(15417, -1, -1))
			{
				func_314(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_315(15418, -1, -1))
			{
				func_314(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_315(15425, -1, -1))
			{
				func_314(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_315(15405, -1, -1))
			{
				func_314(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_315(15393, -1, -1))
			{
				func_314(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_315(15409, -1, -1))
			{
				func_314(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_315(15396, -1, -1))
			{
				func_314(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_315(15412, -1, -1))
			{
				func_314(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_315(15403, -1, -1))
			{
				func_314(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_315(15389, -1, -1))
			{
				func_314(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_315(15398, -1, -1))
			{
				func_314(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_315(15400, -1, -1))
			{
				func_314(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_315(15408, -1, -1))
			{
				func_314(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_315(15411, -1, -1))
			{
				func_314(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_315(15397, -1, -1))
			{
				func_314(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_315(15413, -1, -1))
			{
				func_314(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_315(15391, -1, -1))
			{
				func_314(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_315(15388, -1, -1))
			{
				func_314(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_315(15401, -1, -1))
			{
				func_314(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_315(15394, -1, -1))
			{
				func_314(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_315(15406, -1, -1))
			{
				func_314(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_315(15395, -1, -1))
			{
				func_314(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_315(15410, -1, -1))
			{
				func_314(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_315(15407, -1, -1))
			{
				func_314(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_315(15414, -1, -1))
			{
				func_314(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_315(15415, -1, -1))
			{
				func_314(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_315(15399, -1, -1))
			{
				func_314(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_315(15404, -1, -1))
			{
				func_314(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_315(15392, -1, -1))
			{
				func_314(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_315(15390, -1, -1))
			{
				func_314(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_315(15402, -1, -1))
			{
				func_314(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_315(15416, -1, -1))
			{
				func_314(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_313(209, -1))
			{
				func_311(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_315(15426, -1, -1))
			{
				func_314(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_315(15422, -1, -1))
			{
				func_314(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_315(15423, -1, -1))
			{
				func_314(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_315(15421, -1, -1))
			{
				func_314(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_315(15427, -1, -1))
			{
				func_314(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_315(15419, -1, -1))
			{
				func_314(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_315(15420, -1, -1))
			{
				func_314(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_311(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_312())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_145(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_312()
{
	return 1;
	return 0;
}

int func_313(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2592627[iParam0 /*3*/][func_145(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_314(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar25, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 31707), false, true, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 31707)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar26, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

bool func_315(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar1 = func_317(iParam0, iParam1);
	iVar2 = func_316(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_316(int iParam0)
{
	int iVar0;
	
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
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_317(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 31707), false, true, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

int func_318(int iParam0)
{
	int iVar0;
	
	iVar0 = func_320(iParam0);
	return func_144(func_319(iVar0), -1, 0);
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3953;
		
		case 1:
			return 3954;
		
		case 2:
			return 3955;
		
		case 3:
			return 3956;
		
		case 4:
			return 3957;
		
		case 5:
			return 5458;
		
		default:
	}
	return 3953;
}

int func_320(int iParam0)
{
	int iVar0;
	
	if (func_321(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_321(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_322(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_320(iParam0);
	iVar1 = func_319(iVar0);
	iVar2 = (func_144(iVar1, -1, 0) + iParam1);
	func_142(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_325(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
			{
				iVar1 = func_319(iVar0);
				iVar3 = (iVar3 + func_144(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_324(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_323(9357, iVar5, -1, 1);
	}
}

bool func_323(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), false, true, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30707), false, true, iParam2, "_TUNERPSTAT_INT");
		iVar1 = ((iParam0 - 30707) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	bVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, bParam3);
	return bVar2;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_325(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	iVar1 = func_327(iParam0, iParam1);
	iVar2 = func_326(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_326(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = ((iParam0 - 30707) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30707)) * 8) * 8;
	}
	return iVar0;
}

int func_327(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), false, true, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam1, "_HISLANDPSTAT_INT");
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30707), false, true, iParam1, "_TUNERPSTAT_INT");
	}
	return iVar0;
}

int func_328(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_173(iParam1);
	if (func_321(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17139;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17144);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17149);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17138;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17143);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17148);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17137;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17142);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17147);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17135;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17140);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17145);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17136;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17141);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17146);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21241;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21243);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21242);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_329(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_331(iParam0, iParam1))
	{
		iVar0 = func_330(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_330(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_321(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_331(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_321(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_332(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_321(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_333(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_147())
			{
				Var0 = { func_175() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_328(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18774);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18773);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_297(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18764);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18763));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_240(86);
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (func_103(0))
			{
				Var15 = { func_334(func_179()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_328(func_179(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18774));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18773));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18813;
				iVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18814;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_334(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_194;
}

void func_335(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_41(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_350();
			}
			func_349();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_41(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_341(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_183));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_340(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_297(&uVar2);
					iVar4 = Global_262145.f_16320;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15529));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_240(44);
					}
				}
				func_338(*iParam3);
				func_337();
				Global_2544210.f_5191.f_384 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_296(iVar9))
						{
							func_288(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_41(PLAYER::PLAYER_ID()))
		{
			func_336();
		}
	}
}

void func_336()
{
	int iVar0;
	
	iVar0 = Global_2595531[func_49()];
	iVar0++;
	func_141(3669, iVar0, -1, 1);
}

void func_337()
{
	int iVar0;
	
	iVar0 = Global_2595537[func_49()];
	iVar0++;
	func_141(3668, iVar0, -1, 1);
}

void func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2595540[func_49()];
	iVar0 = (iVar0 + iParam0);
	func_141(3670, iVar0, -1, 1);
	if (func_325(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_339(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_323(7666, iVar2, -1, 1);
	}
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16453;
			break;
		
		case 2:
			return Global_262145.f_16454;
			break;
		
		case 3:
			return Global_262145.f_16455;
			break;
		
		case 4:
			return Global_262145.f_16456;
			break;
		
		case 5:
			return Global_262145.f_16457;
			break;
		
		case 6:
			return Global_262145.f_16458;
			break;
		
		case 7:
			return Global_262145.f_16459;
			break;
		
		case 8:
			return Global_262145.f_16460;
			break;
		
		case 9:
			return Global_262145.f_16461;
			break;
		
		case 10:
			return Global_262145.f_16462;
			break;
		
		case 11:
			return Global_262145.f_16463;
			break;
		
		case 12:
			return Global_262145.f_16464;
			break;
		
		case 13:
			return Global_262145.f_16465;
			break;
		
		case 14:
			return Global_262145.f_16466;
			break;
		
		case 15:
			return Global_262145.f_16467;
			break;
		
		case 16:
			return Global_262145.f_16468;
			break;
		
		case 17:
			return Global_262145.f_16469;
			break;
		
		case 18:
			return Global_262145.f_16470;
			break;
		
		case 19:
			return Global_262145.f_16471;
			break;
		
		case 20:
			return Global_262145.f_16472;
			break;
		
		case 21:
			return Global_262145.f_16473;
			break;
		
		case 22:
			return Global_262145.f_16474;
			break;
		
		case 23:
			return Global_262145.f_16475;
			break;
		
		case 24:
			return Global_262145.f_16476;
			break;
	}
	return 0;
}

var func_340(int iParam0)
{
	if (iParam0 >= Global_262145.f_15507)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 >= Global_262145.f_15506)
	{
		return Global_262145.f_15527;
	}
	else if (iParam0 >= Global_262145.f_15505)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 >= Global_262145.f_15504)
	{
		return Global_262145.f_15525;
	}
	else if (iParam0 >= Global_262145.f_15503)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 >= Global_262145.f_15502)
	{
		return Global_262145.f_15523;
	}
	else if (iParam0 >= Global_262145.f_15501)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 >= Global_262145.f_15500)
	{
		return Global_262145.f_15521;
	}
	else if (iParam0 >= Global_262145.f_15499)
	{
		return Global_262145.f_15520;
	}
	else if (iParam0 >= Global_262145.f_15498)
	{
		return Global_262145.f_15519;
	}
	else if (iParam0 >= Global_262145.f_15497)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 >= Global_262145.f_15496)
	{
		return Global_262145.f_15517;
	}
	else if (iParam0 >= Global_262145.f_15495)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 >= Global_262145.f_15494)
	{
		return Global_262145.f_15515;
	}
	else if (iParam0 >= Global_262145.f_15493)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 >= Global_262145.f_15492)
	{
		return Global_262145.f_15513;
	}
	else if (iParam0 >= Global_262145.f_15491)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 >= Global_262145.f_15490)
	{
		return Global_262145.f_15511;
	}
	else if (iParam0 >= Global_262145.f_15489)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 >= Global_262145.f_15488)
	{
		return Global_262145.f_15509;
	}
	return Global_262145.f_15508;
}

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_348(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_347(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_346(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_342(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_342(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_346(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	if (func_345(iParam0))
	{
		iVar0 = func_343(func_344(iParam0));
		return func_144(iVar0, -1, 0);
	}
	return 0;
}

int func_343(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3648;
	}
	else if (iParam0 == 1)
	{
		return 3649;
	}
	else if (iParam0 == 2)
	{
		return 3650;
	}
	else if (iParam0 == 3)
	{
		return 3651;
	}
	else if (iParam0 == 4)
	{
		return 3652;
	}
	return 3648;
}

int func_344(int iParam0)
{
	int iVar0;
	
	if (func_345(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_345(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_346(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15707;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15705;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15709;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15703;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15701;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15711;
	}
	return 0;
}

int func_347(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_345(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1683674[iVar0] == iParam1 && Global_1683681[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;
	
	if (func_345(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_349()
{
	int iVar0;
	
	iVar0 = Global_2595528[func_49()];
	iVar0++;
	Global_2595528[func_49()] = iVar0;
	func_141(3667, iVar0, -1, 1);
}

void func_350()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2595525[func_49()];
	iVar1 = Global_2595534[func_49()];
	iVar0++;
	iVar1++;
	Global_2595525[func_49()] = iVar0;
	Global_2595534[func_49()] = iVar1;
	Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_130 = iVar1;
	func_141(3665, iVar0, -1, 1);
	func_141(3666, iVar1, -1, 1);
}

void func_351()
{
	if (func_160())
	{
		Global_2453903.f_3075.f_134 = 0;
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
	}
}

void func_352()
{
	if (func_160())
	{
		if (Global_2453903.f_3075.f_134 < 10)
		{
			Global_2453903.f_3075.f_134++;
			Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

void func_353()
{
	if (func_160())
	{
		if (Global_2453903.f_3075.f_134 > 0)
		{
			Global_2453903.f_3075.f_134 = (Global_2453903.f_3075.f_134 - 1);
			Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

int func_354(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_28;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_177(1) && !func_103(1))
			{
				if (func_357(func_179()))
				{
					return 1;
				}
			}
			break;
	}
	if (func_356(iParam0) == 0)
	{
		if (func_177(1) && !func_103(1))
		{
			if (func_357(func_179()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

bool func_357(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 26);
}

int func_358(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18460;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12689));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12634) * Global_262145.f_12639));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12661) * Global_262145.f_12665));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12674) * Global_262145.f_12678));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12696) * Global_262145.f_12701));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12858) * Global_262145.f_12859));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12864) * Global_262145.f_12865));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12862) * Global_262145.f_12863));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12856) * Global_262145.f_12857));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12860) * Global_262145.f_12861));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12854) * Global_262145.f_12855));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15230;
		
		case 172:
			return Global_262145.f_15246;
		
		case 173:
			return Global_262145.f_15189;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18468;
		
		case 180:
			return Global_262145.f_18343;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18351;
		
		case 185:
			return Global_262145.f_18360;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18556;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18573;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18420;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18604;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18482;
		
		case 205:
			return Global_262145.f_18591;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18449;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18586;
		
		case 211:
			return Global_262145.f_18550;
		
		case 214:
			return Global_262145.f_19144;
		
		case 215:
			return Global_262145.f_19154;
		
		case 216:
			return Global_262145.f_19164;
		
		case 217:
			return Global_262145.f_19173;
		
		case 218:
			return Global_262145.f_19182;
		
		case 219:
			return Global_262145.f_19198;
		
		case 241:
			return Global_262145.f_24278;
		
		case 242:
			return Global_262145.f_24274;
		
		case 248:
			return Global_262145.f_24277;
		
		case 244:
			return Global_262145.f_24275;
		
		case 239:
			return Global_262145.f_24279;
		
		case 240:
			return Global_262145.f_24280;
		
		case 243:
			return Global_262145.f_26588;
		
		default:
	}
	return 0;
}

int func_359(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18461;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12685) * Global_262145.f_12690));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12635) * Global_262145.f_12640));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12662) * Global_262145.f_12666));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12675) * Global_262145.f_12679));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12697) * Global_262145.f_12702));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12734) * Global_262145.f_12737));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12780) * Global_262145.f_12783));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12770) * Global_262145.f_12773));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12725) * Global_262145.f_12728));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12745) * Global_262145.f_12750));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12710) * Global_262145.f_12713));
		
		case 170:
			return Global_262145.f_15172;
		
		case 171:
			return Global_262145.f_15231;
		
		case 172:
			return Global_262145.f_15247;
		
		case 173:
			return Global_262145.f_15190;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17269;
		
		case 168:
			return Global_262145.f_17268;
		
		case 179:
			return Global_262145.f_18469;
		
		case 180:
			return Global_262145.f_18344;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18352;
		
		case 185:
			return Global_262145.f_18361;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18557;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18574;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18421;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18605;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18483;
		
		case 205:
			return Global_262145.f_18592;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18450;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18587;
		
		case 211:
			return Global_262145.f_18551;
		
		case 214:
			return Global_262145.f_19145;
		
		case 215:
			return Global_262145.f_19155;
		
		case 216:
			return Global_262145.f_19165;
		
		case 217:
			return Global_262145.f_19174;
		
		case 218:
			return Global_262145.f_19183;
		
		case 219:
			return Global_262145.f_19199;
		
		case 178:
			if (func_160())
			{
				return Global_262145.f_19022;
			}
			else if (bParam1)
			{
				return Global_262145.f_19023;
			}
			break;
		
		case 188:
			if (func_160())
			{
				return Global_262145.f_19106;
			}
			else if (bParam1)
			{
				return Global_262145.f_19107;
			}
			break;
		
		case 225:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21229;
				}
				else
				{
					return Global_262145.f_21230;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_21231;
			}
			break;
		
		case 226:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21209;
				}
				else
				{
					return Global_262145.f_21210;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_21211;
			}
			break;
		
		case 227:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21221;
				}
				else
				{
					return Global_262145.f_21222;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_21223;
			}
			break;
		
		case 229:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22388;
				}
				else
				{
					return Global_262145.f_22389;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_22390;
			}
			break;
		
		case 230:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22484;
				}
				else
				{
					return Global_262145.f_22485;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_22486;
			}
			break;
		
		case 233:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22964;
				}
				else
				{
					return Global_262145.f_22965;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_22963;
			}
			break;
		
		case 241:
			return Global_262145.f_24285;
		
		case 242:
			return Global_262145.f_24281;
		
		case 244:
			return Global_262145.f_24282;
		
		case 248:
			return Global_262145.f_24284;
		
		case 239:
			return Global_262145.f_24286;
		
		case 240:
			return Global_262145.f_24287;
		
		case 237:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24127;
				}
				else
				{
					return Global_262145.f_24128;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_24129;
			}
			break;
		
		case 238:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24238;
				}
				else
				{
					return Global_262145.f_24239;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_24240;
			}
			break;
		
		case 249:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24254;
				}
				else
				{
					return Global_262145.f_24255;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_24256;
			}
			break;
		
		case 243:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26591;
				}
				else
				{
					return Global_262145.f_26592;
				}
			}
			else if (func_147())
			{
				return Global_262145.f_26591;
			}
			break;
		
		case 158:
			if (func_160() && !func_147())
			{
				if (func_357(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_147())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_360(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_361(iParam0))
	{
		if (!func_160())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12578;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_286(PLAYER::PLAYER_ID(), 1))
	{
		if (func_100(iParam0))
		{
			*uParam1 = (Global_262145.f_18320 / 100f);
			*uParam2 = (Global_262145.f_18320 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24288;
			*uParam2 = Global_262145.f_24288;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24289;
			*uParam2 = Global_262145.f_24289;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24291;
			*uParam2 = Global_262145.f_24291;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24292;
			*uParam2 = Global_262145.f_24292;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24293;
			*uParam2 = Global_262145.f_24293;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24294;
			*uParam2 = Global_262145.f_24294;
		}
		else
		{
			*uParam1 = Global_262145.f_12575;
			*uParam2 = Global_262145.f_12574;
		}
	}
	else if (func_100(iParam0))
	{
		*uParam1 = (Global_262145.f_18321 / 100f);
		*uParam2 = (Global_262145.f_18321 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24295;
		*uParam2 = Global_262145.f_24295;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24296;
		*uParam2 = Global_262145.f_24296;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24298;
		*uParam2 = Global_262145.f_24298;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24299;
		*uParam2 = Global_262145.f_24299;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24300;
		*uParam2 = Global_262145.f_24300;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24301;
		*uParam2 = Global_262145.f_24301;
	}
	else
	{
		*uParam1 = Global_262145.f_12577;
		*uParam2 = Global_262145.f_12576;
	}
	iVar0 = func_96();
	if (iVar0 != func_29())
	{
		if (func_284(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_362(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_29())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (func_363(iParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_1038(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			Global_2544210.f_5191.f_386 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

int func_363(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_29() && iParam1 != func_29())
	{
		iVar0 = func_266(iParam0);
		if (iVar0 != func_29())
		{
			return iVar0 == func_266(iParam1);
		}
	}
	return 0;
}

int func_364(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_382(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_380(&(Var0.f_69), iParam7);
	}
	return func_365(&Var0);
}

int func_365(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_379(uParam0, uParam0->f_17);
	func_376(uParam0);
	if (func_227())
	{
		func_376(uParam0);
	}
	if (func_375(uParam0->f_1))
	{
		func_368();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_367(uParam0->f_69, 8192))
			{
				Global_1669340 = 1;
			}
			return 1;
		}
		if (((Global_2441237.f_2841[0 /*80*/].f_1 == 13 || Global_2441237.f_2841[0 /*80*/].f_1 == 53) || Global_2441237.f_2841[0 /*80*/].f_1 == 54) || Global_2441237.f_2841[0 /*80*/].f_1 == 58)
		{
			Global_2441237.f_2841[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2441237.f_2841[iVar0 + 1 /*80*/] = { Global_2441237.f_2841[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2441237.f_2841[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_368();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_380(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_367(uParam0->f_69, 128))
			{
				if (func_366(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_380(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_366(int iParam0)
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

bool func_367(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_368()
{
	bool bVar0;
	
	if (Global_2441237.f_3164)
	{
		return;
	}
	if (!Global_77516)
	{
		Global_77516 = 1;
		bVar0 = true;
	}
	func_369();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_369()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_373(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_370(&(Global_2441237.f_3165.f_1), 1);
}

void func_370(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_77516)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_77517)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_372(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_371(0);
}

void func_371(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_372(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_77496, 0);
}

void func_373(var uParam0)
{
	func_374(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_374(var uParam0)
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

int func_375(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_376(var uParam0)
{
	if (func_378(uParam0->f_1))
	{
		uParam0->f_72 = func_377();
	}
}

int func_377()
{
	return 21;
}

int func_378(int iParam0)
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
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_379(var uParam0, int iParam1)
{
	if (func_378(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_29() || !func_1038(iParam1, 0, 1))
	{
		return;
	}
	if (func_366(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_248(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_380(var uParam0, int iParam1)
{
	func_381(uParam0, iParam1);
}

void func_381(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_382(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_29();
	uParam1->f_18 = func_29();
	uParam1->f_19 = func_29();
	uParam1->f_20 = func_29();
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

int func_383(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_29();
	iVar1 = func_29();
	iVar2 = func_29();
	return func_384(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_384(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_382(uParam0, &Var0, uParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_380(&(Var0.f_69), 4);
	return func_365(&Var0);
}

int func_385()
{
	if ((func_1038(PLAYER::PLAYER_ID(), 1, 1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_386())
	{
		return 1;
	}
	return 0;
}

bool func_386()
{
	return MISC::GET_GAME_TIMER() <= Global_22670.f_6135 + 100;
}

void func_387(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_510(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_508() || iParam2 == 28)
	{
		if (func_459(iParam1, iParam2, uParam3, Global_1574200, 0, func_506(), sParam7))
		{
			func_458(1);
			if ((!func_457() && !func_456()) || MISC::IS_BIT_SET(Global_2544210.f_4655, 1))
			{
				if (func_455())
				{
					func_453();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_452(1);
						Global_1574200 = 0;
						iVar54 = -1;
						if (Global_1574421 != 1)
						{
							func_451(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
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
								if (func_1038(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_47(iVar35, 0))
									{
										if ((func_447(iVar35) || Global_2426865[iVar35 /*449*/].f_245 != -1) || func_446(iVar35))
										{
											iVar44 = iVar35;
											if (func_41(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_445(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_444(PLAYER::PLAYER_ID(), 0) && func_67(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_443())
							{
								if (func_1038(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_29();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_442(iVar35) && func_438(iVar35, iParam2)) && func_1038(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590908[iVar44 /*874*/].f_205.f_6;
								Var38 = { func_433(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_202(iVar35) };
								iVar37 = func_427(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574200++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_443())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_422(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_421(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_420(iVar35, 0);
								if (bVar34)
								{
									if (func_286(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_419(iParam5))
								{
									func_418(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_418(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_1038(iVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_29();
							}
							if (func_442(iVar35))
							{
								if (func_1038(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590908[iVar44 /*874*/].f_205.f_6;
									Var38 = { func_433(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_202(iVar35) };
									iVar37 = func_427(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574200++;
									iVar51 = func_420(iVar35, 1);
									if (bVar34)
									{
										if (func_286(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_400(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_397(uParam3, iParam1, iParam2);
						}
						func_7(&(uParam3->f_21));
						func_396();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_395(uParam3, iParam1);
							func_394(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_395(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_390(uParam3))
						{
							Global_1574421 = 1;
						}
						func_388(uParam3);
						if (Global_1574421 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574421 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_396();
			func_452(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_388(var uParam0)
{
	if (!func_5(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_2(&(uParam0->f_21), 250, 0))
	{
		func_7(&(uParam0->f_21));
		func_389(0);
	}
}

void func_389(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574421 != 2)
		{
			Global_1574421 = 2;
		}
	}
	else
	{
		switch (Global_1574421)
		{
			case 0:
				Global_1574421 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_390(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_29() && func_1038(iVar15, 0, 1))
	{
		Var2 = { func_202(iVar15) };
		iVar1 = func_393(uParam0, uParam0->f_37);
		if (func_392(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_391(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_391(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_391(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_391(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_391(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_391(uParam0, iVar0, 0);
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

void func_391(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_392(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_393(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_394(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_395(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_396()
{
	if (Global_1574421 != 0)
	{
		Global_1574421 = 0;
	}
}

void func_397(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_29())
		{
			if (func_1038(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_399(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_398(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590908[iVar0 /*874*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_398(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_399(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
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

void func_400(int iParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_417() && iParam4 < func_416())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574202)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_415("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_415(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_415("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_415("");
			if (uParam3->f_108 == 6)
			{
				func_415("");
			}
			else
			{
				func_415(&sParam5);
			}
			func_405(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_404(uParam3))
			{
				func_403("DPAD_FRIEND");
			}
			else if (func_402(uParam3))
			{
				func_403("DPAD_FRIEND");
			}
			else if (func_401(uParam3))
			{
				func_403("DPAD_CREW");
			}
			else
			{
				func_403("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_401(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_402(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_403(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_404(var uParam0)
{
	if (func_402(uParam0) && func_401(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_405(var uParam0, int iParam1)
{
	if (func_414(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_409(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2426865[iParam1 /*449*/].f_426, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_406())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_406()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_407() || func_273())
		{
			return 1;
		}
	}
	return 0;
}

int func_407()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_273();
	}
	return func_408(Global_4456448.f_85535);
}

int func_408(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_409(int iParam0)
{
	if ((func_1038(iParam0, 0, 1) && func_410()) && func_104(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_410()
{
	if (func_121(PLAYER::PLAYER_ID()) || func_413())
	{
		if (!func_411(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_411(int iParam0)
{
	if (func_412(iParam0) == 236 || func_412(iParam0) == 150)
	{
		return func_63(iParam0);
	}
	return 0;
}

int func_412(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/];
	}
	return -1;
}

int func_413()
{
	switch (func_67(PLAYER::PLAYER_ID()))
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

int func_414(int iParam0)
{
	if (func_406())
	{
		if (func_1038(iParam0, 0, 1))
		{
			return func_41(iParam0);
		}
	}
	if ((func_1038(iParam0, 0, 1) && func_410()) && func_46(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_415(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_416()
{
	int iVar0;
	
	if (Global_1574202)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_417()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574202)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_418(int iParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_417() && iParam3 < func_416())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574202)
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
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_415("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_403(sParam16);
				}
				else
				{
					func_415(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_415("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_443())
				{
					func_415("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_403(&(uParam2->f_104));
					}
					else
					{
						func_415("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_415("");
				}
				if (uParam2->f_108 == 6)
				{
					func_415("");
				}
				else
				{
					func_415(&sParam4);
				}
				func_405(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_415("");
					func_415("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_404(uParam2))
				{
					func_403("DPAD_FRIEND");
				}
				else if (func_402(uParam2))
				{
					func_403("DPAD_FRIEND");
				}
				else if (func_401(uParam2))
				{
					func_403("DPAD_CREW");
				}
				else
				{
					func_403("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_419(int iParam0)
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

int func_420(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_121(iParam0)) && !func_61(iParam0))
	{
		iVar0 = func_377();
	}
	iVar1 = func_265(iParam0);
	if (!iVar1 == -1)
	{
		return func_263(iVar1);
	}
	return iVar0;
}

char* func_421(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
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
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
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

int func_422(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_426(iParam3))
	{
		*fParam1 = (func_423(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_419(iParam3))
	{
		*fParam1 = (func_423(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_423(int iParam0, int iParam1)
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
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_425(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_424(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_424(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_425(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_426(int iParam0)
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

int func_427(int iParam0)
{
	int iVar0;
	
	iVar0 = func_430(iParam0);
	if (iVar0 == -1)
	{
		func_428(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_428(int iParam0, bool bParam1)
{
	if (!func_1038(iParam0, 0, 1))
	{
		return;
	}
	if (func_430(iParam0) != -1)
	{
		return;
	}
	if (Global_1391714)
	{
		if (iParam0 == Global_1391714.f_1)
		{
			return;
		}
	}
	if (func_429(iParam0))
	{
		return;
	}
	if (Global_1391752 >= 32)
	{
		return;
	}
	Global_1391719[Global_1391752] = iParam0;
	Global_1391752++;
	if (bParam1)
	{
	}
}

int func_429(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391752)
	{
		if (Global_1391719[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_430(int iParam0)
{
	int iVar0;
	
	if (!func_1038(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1391712 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391712)
	{
		if (Global_1391551[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1391551[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1391551[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_431(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_431(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1391712)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1391551[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1391551[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1391551[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1391551[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1391712)
	{
		Global_1391551[iVar32 /*5*/] = { Global_1391551[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_432(&(Global_1391551[iVar32 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_432(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_29();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_433(int iParam0)
{
	char cVar0[32];
	
	if (func_1038(iParam0, 0, 1))
	{
		Global_2518253 = { func_202(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_392(Global_2518253))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2518253))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_437(&Global_2518253))
		{
			Global_2518183 = { func_435(iParam0) };
			func_434(&Global_2518183, &cVar0);
		}
	}
	return cVar0;
}

void func_434(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_435(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_436(iParam0))
	{
		return Global_1312934[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_202(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_436(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_437(int* iParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_438(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_120(iParam0) || func_441(iParam0)) || func_440(iParam0))
		{
			return 0;
		}
	}
	if (!func_439(iParam0))
	{
		return 0;
	}
	if ((!func_447(iParam0) && Global_2426865[iParam0 /*449*/].f_245 == -1) && !func_446(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_439(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_139, 22);
}

bool func_440(int iParam0)
{
	if (func_120(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 8);
}

int func_441(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 10) || MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 9));
	}
	return 0;
}

int func_442(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_47(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1590908[iVar0 /*874*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_443()
{
	switch (func_67(PLAYER::PLAYER_ID()))
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
	switch (func_412(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_61(PLAYER::PLAYER_ID()))
	{
		switch (func_67(PLAYER::PLAYER_ID()))
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
	if (func_411(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_444(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 && func_92(Global_1630816[iParam0 /*597*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1)
	{
		if (func_92(Global_1630816[iParam0 /*597*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_445(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1038(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_47(iVar1, 0))
			{
				if ((func_447(iVar1) || Global_2426865[iVar1 /*449*/].f_245 != -1) || func_446(iVar1))
				{
					if (func_284(iVar1, iParam1, 0))
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

bool func_446(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192 != 0;
}

int func_447(int iParam0)
{
	if (!func_1038(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1038(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_448(iParam0))
	{
		return 0;
	}
	if ((NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_67(iParam0) == 233) || func_67(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_449(PLAYER::PLAYER_ID());
	bVar1 = func_449(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_449(int iParam0)
{
	return func_450(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_450(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_451(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_452(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1379105.f_2 == 0)
		{
			Global_1379105.f_2 = 1;
		}
	}
	else if (Global_1379105.f_2 == 1)
	{
		Global_1379105.f_2 = 0;
	}
}

void func_453()
{
	if (MISC::IS_BIT_SET(Global_2544210.f_4655, 1))
	{
		if (func_122())
		{
			func_454();
		}
	}
}

void func_454()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 != 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			func_380(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_455()
{
	if (MISC::IS_BIT_SET(Global_2544210.f_4655, 0) && func_122())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_4655, 1) && func_122())
	{
		return 1;
	}
	return 0;
}

int func_456()
{
	if (func_122())
	{
		if (func_366(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_457()
{
	if (func_122())
	{
		if (func_378(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_458(int iParam0)
{
	if (Global_1379105.f_1 != Global_1379105)
	{
		Global_1379105.f_1 = Global_1379105;
	}
	if (Global_1379105 != iParam0)
	{
		Global_1379105 = iParam0;
	}
}

int func_459(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_505(iParam1);
	fVar7 = func_504();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_503())
		{
			if (func_502() > 0 && Global_1574202)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_486())
		{
			func_485(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_4658, 26))
	{
		func_485(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_5(&(uParam2->f_19)))
	{
		if (func_502() == 1)
		{
			func_484(bVar6, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_485(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2544210.f_4659), 5);
		}
	}
	if (func_5(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_2(&(uParam2->f_19), 10000, 0) || (func_502() == 0 && !bParam5))
		{
			func_485(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_483();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_483();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_484(bVar6, iParam0, 0))
				{
					func_451(iParam0, 0, 0);
					sVar4 = func_481(iParam1, &(Global_4456448.f_85542), bParam4);
					Var0 = { func_479(iParam1) };
					if (bParam4)
					{
						func_476(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_469(iParam0, func_473(uParam2), func_470(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_467(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_465(iParam0, sVar9, func_466(), -1);
					}
					else if (func_406())
					{
						uParam2->f_34 = Global_1574201;
						func_476(iParam0, sVar4, &Var0, 1, -1, Global_1574201, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_460(iParam1);
						uParam2->f_34 = Global_1574201;
						func_476(iParam0, sVar4, "", 0, iVar8, Global_1574201, 1);
					}
					else
					{
						iVar8 = func_460(iParam1);
						func_476(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574200 = uParam3;
				Global_1574199 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574201)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_460(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_464())
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
		case 41:
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
			if (func_463(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_462(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_461(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_225())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_461(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 4;
}

bool func_462(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

bool func_463(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_464()
{
	return Global_4456448.f_1 == 0;
}

void func_465(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_403(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_403("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_466()
{
	switch (func_67(PLAYER::PLAYER_ID()))
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

char* func_467(var uParam0)
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
	switch (func_67(PLAYER::PLAYER_ID()))
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
			if (func_95())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_103(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_103(1))
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
			if (func_468(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_468(int iParam0)
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

void func_469(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_403(sParam1);
		}
		else if (func_412(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_403("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_470(var uParam0)
{
	int iVar0;
	
	iVar0 = func_412(PLAYER::PLAYER_ID());
	if (func_472())
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
			switch (func_471())
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

int func_471()
{
	if (func_412(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2544210.f_5112;
	}
	return -1;
}

bool func_472()
{
	return Global_1590781;
}

char* func_473(var uParam0)
{
	int iVar0;
	
	iVar0 = func_412(PLAYER::PLAYER_ID());
	if (func_472())
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
			if (func_475() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_475() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_471())
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
			if (func_474() == 1)
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

int func_474()
{
	return Global_2544210.f_5115;
}

int func_475()
{
	if (func_412(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2544210.f_5110;
	}
	return -1;
}

void func_476(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_415(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_403(sParam1);
		}
		if (func_503() && iParam6)
		{
			if (func_478())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_403(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_477(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_227())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_477(int iParam0)
{
	if (func_463(iParam0) || func_462(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_478()
{
	return Global_1574202;
}

struct<4> func_479(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_480(PLAYER::PLAYER_ID()) || func_461(PLAYER::PLAYER_ID()))
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
			StringIntConCat(&Var0, Global_4456448.f_527, 16);
			break;
	}
	if (func_406() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_527, 16);
	}
	return Var0;
}

bool func_480(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 5;
}

char* func_481(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_406() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_482();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574440 == 1)
		{
			Global_1574440 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
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

char* func_482()
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

void func_483()
{
	Global_42937 = 1;
}

bool func_484(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_485(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574200 = 0;
	func_396();
	Global_1574199 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_5(&(uParam1->f_19)))
		{
			func_7(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2544210.f_4659), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_486()
{
	if (func_386())
	{
		return 0;
	}
	if (func_501())
	{
		return 0;
	}
	if (!func_499())
	{
		return 0;
	}
	if (!func_497())
	{
		return 0;
	}
	if (func_496(8, -1))
	{
		return 0;
	}
	if (func_502() == 2)
	{
		return 0;
	}
	if (Global_2544210.f_4610)
	{
		return 0;
	}
	if (func_495())
	{
		return 0;
	}
	else if (!func_492(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_491(1) || func_489(1)) || Global_22531.f_124) || Global_22531)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_488() && Global_1702509 == 2)
	{
		return 0;
	}
	if (func_279(PLAYER::PLAYER_ID()) && !func_488())
	{
		return 0;
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (Global_1669339)
	{
		return 0;
	}
	if (func_235(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (Global_1372046)
	{
		return 0;
	}
	if ((Global_1696742.f_718.f_5 || Global_1699568.f_718.f_5) || Global_1695770.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1703513.f_724.f_5 || Global_1703513.f_744.f_724.f_5) || Global_1703513.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1710289.f_726.f_5)
	{
		return 0;
	}
	if (func_487(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1372082 || Global_1372083) || Global_1372084)
	{
		return 0;
	}
	return 1;
}

bool func_487(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319.f_4, 6);
}

bool func_488()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1702510, 0));
}

int func_489(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_490(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22531.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_490(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_491(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

int func_492(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_493(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_493(int iParam0)
{
	return func_494(iParam0);
}

bool func_494(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

bool func_495()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_192 != 0;
}

bool func_496(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1379108.f_1048, iParam0);
}

int func_497()
{
	if (func_498() == 0)
	{
		return 1;
	}
	return 0;
}

int func_498()
{
	return Global_1312485.f_18;
}

int func_499()
{
	if (func_500())
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
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_500()
{
	return Global_1312458;
}

bool func_501()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 5;
}

int func_502()
{
	return Global_1379108.f_68;
}

int func_503()
{
	if (Global_1574201 > 16)
	{
		return 1;
	}
	return 0;
}

float func_504()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_505(int iParam0)
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

int func_506()
{
	if (func_507(PLAYER::PLAYER_ID()))
	{
		return Global_1319186;
	}
	return 0;
}

int func_507(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_47(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_508()
{
	if (func_506())
	{
		return 1;
	}
	if (func_440(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_472())
	{
		return 1;
	}
	if (func_121(PLAYER::PLAYER_ID()))
	{
		switch (func_412(PLAYER::PLAYER_ID()))
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
				if (!func_509(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_509(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_509(PLAYER::PLAYER_ID()))
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

bool func_509(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 4);
}

int func_510(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_121(PLAYER::PLAYER_ID()) && !func_61(PLAYER::PLAYER_ID())) && !func_411(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_68(PLAYER::PLAYER_ID(), 0) && func_61(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_116(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_511()
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		func_531();
		PAD::DISABLE_CONTROL_ACTION(0, 140, true);
		PAD::DISABLE_CONTROL_ACTION(0, 141, true);
		PAD::DISABLE_CONTROL_ACTION(0, 142, true);
		PAD::DISABLE_CONTROL_ACTION(0, 143, true);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 345, true);
		PAD::DISABLE_CONTROL_ACTION(0, 346, true);
		PAD::DISABLE_CONTROL_ACTION(0, 347, true);
	}
}

bool func_512()
{
	return func_27() >= 2;
}

void func_513()
{
	func_53(3000, 3000);
}

void func_514()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (((((VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(iVar0) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("hydra")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("savage")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("buzzard")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("valkyrie"))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 68, true);
			PAD::DISABLE_CONTROL_ACTION(0, 69, true);
			PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		}
	}
}

void func_515()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_857[iVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_907.f_19[iVar0]))
			{
				iLocal_857[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_907.f_19[iVar0]));
				HUD::SET_BLIP_SPRITE(iLocal_857[iVar0], 351);
				HUD::SET_BLIP_COLOUR(iLocal_857[iVar0], 2);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_857[iVar0], "GB_AMMOPICKBLIP");
			}
		}
		iVar0++;
	}
}

void func_516()
{
	MISC::SET_BIT(&(Global_2544210.f_5190), 1);
}

void func_517(int iParam0, bool bParam1, int* iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == -1)
	{
		if (!func_61(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_523(iParam2);
		return;
	}
	iVar1 = func_67(PLAYER::PLAYER_ID());
	if (iParam3 != -1)
	{
		iVar1 = iParam3;
	}
	if (MISC::ARE_STRINGS_EQUAL(func_522(iVar1), "IE_PRE_COUNTDOWN_STOP"))
	{
		iVar0 = 35000;
	}
	else
	{
		iVar0 = 40000;
	}
	if (iParam2->f_1 > -1)
	{
		iVar0 = iParam2->f_1;
	}
	if (!MISC::IS_BIT_SET(*iParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(func_522(iVar1)))
			{
				MISC::SET_BIT(iParam2, 0);
				MISC::SET_BIT(iParam2, 1);
			}
		}
	}
	if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!MISC::IS_BIT_SET(*iParam2, 2))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT(func_521(iVar1)))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
					MISC::SET_BIT(iParam2, 2);
				}
			}
			if (!MISC::IS_BIT_SET(*iParam2, 3))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(func_520(iVar1)))
				{
					MISC::SET_BIT(iParam2, 3);
				}
			}
			if (MISC::IS_BIT_SET(*iParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!MISC::IS_BIT_SET(*iParam2, 4))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
						MISC::SET_BIT(iParam2, 4);
					}
					if (iParam0 <= 5000 && func_519(iVar1))
					{
						if (!MISC::IS_BIT_SET(*iParam2, 8))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							MISC::SET_BIT(iParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT(func_518(iVar1)))
						{
							AUDIO::CANCEL_MUSIC_EVENT(func_521(iVar1));
							MISC::CLEAR_BIT(iParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_518(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 236:
		case 243:
		case 150:
		case 158:
		case 256:
		case 258:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	if (func_356(iParam0) != -1)
	{
		return "IE_FADE_IN_RADIO";
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_519(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

char* func_520(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	if (func_356(iParam0) != -1)
	{
		return "IE_COUNTDOWN_30S";
	}
	return "FM_COUNTDOWN_30S";
}

char* func_521(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	if (func_356(iParam0) != -1)
	{
		return "IE_COUNTDOWN_30S_KILL";
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_522(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	if (func_356(iParam0) != -1)
	{
		return "IE_PRE_COUNTDOWN_STOP";
	}
	return "FM_PRE_COUNTDOWN_30S";
}

void func_523(int* iParam0)
{
	int iVar0;
	
	iVar0 = func_67(PLAYER::PLAYER_ID());
	if (MISC::IS_BIT_SET(*iParam0, 1))
	{
		if (!MISC::IS_BIT_SET(*iParam0, 5))
		{
			if (MISC::IS_BIT_SET(*iParam0, 2))
			{
				if (!MISC::IS_BIT_SET(*iParam0, 4))
				{
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
				}
			}
			if (!MISC::IS_BIT_SET(*iParam0, 6))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(func_521(iVar0)))
				{
					MISC::SET_BIT(iParam0, 6);
				}
			}
			if (MISC::IS_BIT_SET(*iParam0, 6))
			{
				if (!MISC::IS_BIT_SET(*iParam0, 7))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT(func_518(iVar0)))
					{
						MISC::SET_BIT(iParam0, 7);
					}
				}
				if (MISC::IS_BIT_SET(*iParam0, 7))
				{
					MISC::SET_BIT(iParam0, 5);
				}
			}
		}
	}
}

void func_524(int* iParam0)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HUD_MINI_GAME_SOUNDSET");
}

void func_525()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_44(NETWORK::PARTICIPANT_ID(), 8))
		{
			if (func_528())
			{
				func_88(8);
				if (func_5(&uLocal_900))
				{
					func_7(&uLocal_900);
				}
			}
		}
		else if (!func_528())
		{
			func_86(8);
		}
		if (iLocal_851 >= 0)
		{
			if (func_528())
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_851))
				{
					AUDIO::STOP_SOUND(iLocal_851);
				}
			}
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			if (Local_942[iLocal_847 /*6*/].f_5 == 3)
			{
				if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_231 == 99)
				{
					if (!func_44(NETWORK::PARTICIPANT_ID(), 8))
					{
						if (!func_5(&uLocal_900))
						{
							if (func_526())
							{
								AUDIO::PLAY_SOUND_FRONTEND(iLocal_851, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							else
							{
								AUDIO::PLAY_SOUND_FRONTEND(iLocal_851, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							func_4(&uLocal_900, 0, 0);
						}
						if (func_5(&uLocal_900))
						{
							if (!func_2(&uLocal_900, 10000, 0))
							{
							}
							else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, true, false, -1);
								Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
							}
							else
							{
								ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
								Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
							}
						}
					}
					if (!func_526())
					{
						func_531();
						PAD::DISABLE_CONTROL_ACTION(0, 140, true);
						PAD::DISABLE_CONTROL_ACTION(0, 141, true);
						PAD::DISABLE_CONTROL_ACTION(0, 142, true);
						PAD::DISABLE_CONTROL_ACTION(0, 143, true);
						PAD::DISABLE_CONTROL_ACTION(0, 24, true);
						PAD::DISABLE_CONTROL_ACTION(0, 24, true);
					}
				}
				else if (func_5(&uLocal_900))
				{
					func_7(&uLocal_900);
				}
			}
		}
	}
}

int func_526()
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar0 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (func_527(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_527(int iParam0)
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_528()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	func_529(&Var0, &Var3, &fVar6);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_529(var uParam0, var uParam1, var uParam2)
{
	switch (Local_907.f_31)
	{
		case 0:
			*uParam0 = { 1056.1f, 3042.89f, 30.78792f };
			*uParam1 = { 1727.083f, 3227.135f, 71.17491f };
			*uParam2 = 100f;
			break;
		
		case 1:
			*uParam0 = { -1689.147f, -2829.733f, 13.9444f };
			*uParam1 = { -989.6f, -3256.4f, 10.9444f };
			*uParam2 = 107f;
			break;
		
		case 2:
			*uParam0 = { 1914.747f, 4705.012f, 35.1674f };
			*uParam1 = { 2166.719f, 4826.836f, 45.523f };
			*uParam2 = 50f;
			break;
	}
}

void func_530(bool bParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
}

void func_531()
{
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 91, true);
	PAD::DISABLE_CONTROL_ACTION(0, 92, true);
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 257, true);
	PAD::DISABLE_CONTROL_ACTION(0, 37, true);
}

void func_532()
{
	if (!func_538())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312603.f_9)
	{
		return;
	}
	func_533();
}

void func_533()
{
	func_535();
	func_534(0);
}

void func_534(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_535()
{
	if (!func_537())
	{
	}
	if (func_538())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312603.f_12));
		func_536();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_536()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

bool func_537()
{
	if (!func_538())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312603.f_12));
	func_536();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_538()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

void func_539(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_34(PLAYER::PLAYER_ID());
	if (bParam0)
	{
		iLocal_865 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uLocal_862[iVar0]);
		func_84(0);
		func_542();
		func_540();
	}
}

void func_540()
{
	int iVar0;
	
	iVar0 = func_34(PLAYER::PLAYER_ID());
	func_71();
	switch (Local_907.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_541(1708.082f, 3257.124f, 40.0367f, 103.4795f);
					func_541(1708.174f, 3249.501f, 40.0217f, 105.6852f);
					func_541(1709.982f, 3241.591f, 39.9943f, 111.8098f);
					func_541(1713.491f, 3233.364f, 40.1406f, 102.9456f);
					func_541(1701.75f, 3218.817f, 40.4952f, 101.568f);
					func_541(1699.146f, 3212.31f, 41.0702f, 89.9389f);
					func_541(1684.962f, 3214.27f, 41.6779f, 93.4364f);
					func_541(1677.763f, 3224.455f, 39.5792f, 95.5699f);
					func_541(1674.756f, 3233.18f, 39.6863f, 100.0559f);
					func_541(1672.174f, 3242.395f, 39.6958f, 97.4521f);
					break;
				
				case 1:
					func_541(1056.888f, 3088.653f, 40.3451f, 278.7011f);
					func_541(1060.045f, 3081.229f, 40.2589f, 278.8035f);
					func_541(1062.256f, 3073.965f, 40.2523f, 286.0508f);
					func_541(1064.773f, 3066.959f, 40.2525f, 287.8311f);
					func_541(1066.519f, 3057.584f, 40.2967f, 275.5681f);
					func_541(1069.415f, 3042.697f, 40.3412f, 291.182f);
					func_541(1070.516f, 3033.868f, 40.3801f, 289.8516f);
					func_541(1075.104f, 3023.745f, 40.3225f, 276.9676f);
					func_541(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					func_541(1075.891f, 3067.573f, 39.8683f, 291.6247f);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_541(-1024.927f, -3260.799f, 12.9444f, 80.47f);
					func_541(-1022.464f, -3257.815f, 12.9444f, 80.47f);
					func_541(-1027.673f, -3254.468f, 12.9444f, 80.47f);
					func_541(-1022.058f, -3255.974f, 12.9444f, 80.47f);
					func_541(-1026.681f, -3253.933f, 12.9444f, 80.47f);
					func_541(-1028.014f, -3248.853f, 12.9444f, 80.47f);
					func_541(-1023.804f, -3248.954f, 12.9444f, 80.47f);
					func_541(-1026.189f, -3244.342f, 12.9444f, 80.47f);
					func_541(-1021.859f, -3244.705f, 12.9444f, 80.47f);
					break;
				
				case 1:
					func_541(-1650.909f, -2860.519f, 12.9444f, 250.7f);
					func_541(-1648.204f, -2866.492f, 12.9444f, 250.7f);
					func_541(-1641.552f, -2865.687f, 12.9452f, 250.7f);
					func_541(-1634.865f, -2869.221f, 12.948f, 250.7f);
					func_541(-1634.6f, -2874.042f, 12.9556f, 250.7f);
					func_541(-1629.217f, -2873.462f, 12.9513f, 250.7f);
					func_541(-1626.581f, -2878.242f, 12.9573f, 250.7f);
					func_541(-1621.161f, -2877.972f, 12.951f, 250.7f);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_541(2128.587f, 4814.231f, 40.1959f, 103.4795f);
					func_541(2131.345f, 4808.89f, 40.1959f, 103.4795f);
					func_541(2133.655f, 4803.1f, 40.1576f, 103.4795f);
					func_541(2127.704f, 4799.296f, 40.1545f, 103.4795f);
					func_541(2123.396f, 4801.777f, 40.0564f, 103.4795f);
					func_541(2119.169f, 4806.328f, 40.1959f, 103.4795f);
					func_541(2114.736f, 4804.185f, 40.1931f, 103.4795f);
					func_541(2113.656f, 4800.263f, 40.1573f, 103.4795f);
					func_541(2115.452f, 4795.467f, 40.1041f, 103.4795f);
					func_541(2110.035f, 4793.893f, 39.8382f, 103.4795f);
					break;
				
				case 1:
					func_541(1927.808f, 4712.542f, 40.1779f, 278.7011f);
					func_541(1928.894f, 4718.197f, 40.1608f, 278.7011f);
					func_541(1934.309f, 4718.631f, 40.098f, 278.7011f);
					func_541(1941.779f, 4714.215f, 40.0632f, 278.7011f);
					func_541(1945.644f, 4715.785f, 40.0656f, 278.7011f);
					func_541(1947.567f, 4720.629f, 40.0604f, 278.7011f);
					func_541(1947.436f, 4726.579f, 40.0851f, 278.7011f);
					func_541(1951.564f, 4730.475f, 40.1026f, 278.7011f);
					func_541(1955.027f, 4729.683f, 40.0806f, 278.7011f);
					func_541(1958.042f, 4726.624f, 40.0604f, 278.7011f);
					func_541(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_541(struct<3> Param0, float fParam3)
{
	if (Global_2405077.f_1753 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/] = { Param0 };
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/].f_3 = fParam3;
		Global_2405077.f_1753++;
	}
}

void func_542()
{
	int iVar0;
	
	iVar0 = func_34(PLAYER::PLAYER_ID());
	func_54(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1, 1, 0, 1109393408);
	func_545(1, joaat("hexer"), 0, 0, 0, 0, -1, 1, 0, 0, 0, 0);
	switch (Local_907.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_543(1708.082f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					func_543(1708.174f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					func_543(1709.982f, 3241.591f, 39.9943f, 111.8098f, 1065353216);
					func_543(1713.491f, 3233.364f, 40.1406f, 102.9456f, 1065353216);
					func_543(1701.75f, 3218.817f, 40.4952f, 101.568f, 1065353216);
					func_543(1699.146f, 3212.31f, 41.0702f, 89.9389f, 1065353216);
					func_543(1684.962f, 3214.27f, 41.6779f, 93.4364f, 1065353216);
					func_543(1677.763f, 3224.455f, 39.5792f, 95.5699f, 1065353216);
					func_543(1674.756f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					func_543(1672.174f, 3242.395f, 39.6958f, 97.4521f, 1065353216);
					break;
				
				case 1:
					func_543(1056.888f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					func_543(1060.045f, 3081.229f, 40.2589f, 278.8035f, 1065353216);
					func_543(1062.256f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					func_543(1064.773f, 3066.959f, 40.2525f, 287.8311f, 1065353216);
					func_543(1066.519f, 3057.584f, 40.2967f, 275.5681f, 1065353216);
					func_543(1069.415f, 3042.697f, 40.3412f, 291.182f, 1065353216);
					func_543(1070.516f, 3033.868f, 40.3801f, 289.8516f, 1065353216);
					func_543(1075.104f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					func_543(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					func_543(1075.891f, 3067.573f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_543(-1024.927f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					func_543(-1022.464f, -3257.815f, 12.9444f, 80.47f, 1065353216);
					func_543(-1027.673f, -3254.468f, 12.9444f, 80.47f, 1065353216);
					func_543(-1022.058f, -3255.974f, 12.9444f, 80.47f, 1065353216);
					func_543(-1026.681f, -3253.933f, 12.9444f, 80.47f, 1065353216);
					func_543(-1028.014f, -3248.853f, 12.9444f, 80.47f, 1065353216);
					func_543(-1023.804f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					func_543(-1026.189f, -3244.342f, 12.9444f, 80.47f, 1065353216);
					func_543(-1021.859f, -3244.705f, 12.9444f, 80.47f, 1065353216);
					break;
				
				case 1:
					func_543(-1650.909f, -2860.519f, 12.9444f, 250.7f, 1065353216);
					func_543(-1648.204f, -2866.492f, 12.9444f, 250.7f, 1065353216);
					func_543(-1641.552f, -2865.687f, 12.9452f, 250.7f, 1065353216);
					func_543(-1634.865f, -2869.221f, 12.948f, 250.7f, 1065353216);
					func_543(-1634.6f, -2874.042f, 12.9556f, 250.7f, 1065353216);
					func_543(-1629.217f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					func_543(-1626.581f, -2878.242f, 12.9573f, 250.7f, 1065353216);
					func_543(-1621.161f, -2877.972f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_543(2128.587f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					func_543(2131.345f, 4808.89f, 40.1959f, 103.4795f, 1065353216);
					func_543(2133.655f, 4803.1f, 40.1576f, 103.4795f, 1065353216);
					func_543(2127.704f, 4799.296f, 40.1545f, 103.4795f, 1065353216);
					func_543(2123.396f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					func_543(2119.169f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					func_543(2114.736f, 4804.185f, 40.1931f, 103.4795f, 1065353216);
					func_543(2113.656f, 4800.263f, 40.1573f, 103.4795f, 1065353216);
					func_543(2115.452f, 4795.467f, 40.1041f, 103.4795f, 1065353216);
					func_543(2110.035f, 4793.893f, 39.8382f, 103.4795f, 1065353216);
					break;
				
				case 1:
					func_543(1927.808f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					func_543(1928.894f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					func_543(1934.309f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					func_543(1941.779f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					func_543(1945.644f, 4715.785f, 40.0656f, 278.7011f, 1065353216);
					func_543(1947.567f, 4720.629f, 40.0604f, 278.7011f, 1065353216);
					func_543(1947.436f, 4726.579f, 40.0851f, 278.7011f, 1065353216);
					func_543(1951.564f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					func_543(1955.027f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					func_543(1958.042f, 4726.624f, 40.0604f, 278.7011f, 1065353216);
					func_543(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_543(struct<3> Param0, float fParam3, int iParam4)
{
	func_544(Param0, fParam3, iParam4);
}

void func_544(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2405077.f_1752)
	{
	}
	if (Global_2405077.f_713 < 100)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405077.f_713.f_1[Global_2405077.f_713 /*5*/] = { Param0 };
		Global_2405077.f_713.f_1[Global_2405077.f_713 /*5*/].f_3 = uParam3;
		Global_2405077.f_713.f_1[Global_2405077.f_713 /*5*/].f_4 = uParam4;
		Global_2405077.f_713++;
	}
}

void func_545(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	int iVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !STREAMING::IS_MODEL_IN_CDIMAGE(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2405077.f_45.f_65 = bParam0;
	Global_2405077.f_45.f_67 = iParam1;
	Global_2405077.f_45.f_68 = bParam2;
	Global_2405077.f_45.f_174 = iParam3;
	Global_2405077.f_45.f_66 = iParam4;
	Global_2405077.f_45.f_176 = bParam5;
	Global_2405077.f_45.f_177 = bParam7;
	Global_2405077.f_45.f_182 = iParam6;
	Global_2405077.f_45.f_178 = iParam8;
	Global_2405077.f_45.f_179 = iParam9;
	Global_2405077.f_45.f_180 = bParam10;
	Global_2405077.f_45.f_181 = iParam11;
	if (!bParam0)
	{
		func_548();
	}
	if (bParam2)
	{
		iVar0 = func_547();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
					bVar1 = true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(NETWORK::VEH_TO_NET(iVar0));
					}
				}
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (bVar1)
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				}
				if (bParam5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(iVar0, true);
					}
				}
				if (bParam7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, false);
					}
				}
				if (iParam6 > -1)
				{
					VEHICLE::SET_VEHICLE_COLOURS(iVar0, iParam6, iParam6);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_546(iVar0);
				}
			}
		}
	}
}

void func_546(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			if (Global_1695571 > -1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("GBMissionFire", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "GBMissionFire"))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "GBMissionFire", Global_1695571);
					}
				}
			}
		}
	}
}

var func_547()
{
	return Global_2405077.f_2667;
}

void func_548()
{
	struct<103> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2405077.f_45.f_69 = { Var0 };
	Global_2405077.f_45.f_172 = 0;
}

void func_549()
{
	if (!func_44(NETWORK::PARTICIPANT_ID(), 1))
	{
		return;
	}
	if (!func_758(7))
	{
		func_562(&iLocal_87);
		func_734(7);
		MISC::CLEAR_AREA_OF_PROJECTILES(func_561(func_34(PLAYER::PLAYER_ID())), 50f, 1);
	}
	if (!func_44(NETWORK::PARTICIPANT_ID(), 7))
	{
		if (func_560(&iLocal_87))
		{
			if (func_17(10))
			{
				if (func_550(&iLocal_87, 1, 0, 1))
				{
					func_88(7);
				}
			}
		}
	}
}

int func_550(int* iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_560(iParam0))
	{
		if (!func_559(&(iParam0->f_3)))
		{
			func_557(&(iParam0->f_3));
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = SYSTEM::FLOOR(func_554(&(iParam0->f_3)));
		iVar1 = MISC::ABSI((iVar0 - 3));
		bVar2 = false;
		if (func_367(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!func_367(iParam0->f_1, 16))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					func_380(&(iParam0->f_1), 16);
					AUDIO::STOP_STREAM();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!func_367(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_367(iParam0->f_1, 1))
			{
				func_380(&(iParam0->f_1), 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_553(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_367(iParam0->f_1, 2))
			{
				func_380(&(iParam0->f_1), 2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_553(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_367(iParam0->f_1, 4))
			{
				func_380(&(iParam0->f_1), 4);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_553(iParam0, iVar1);
			}
			else if (iVar1 == 0 && !func_367(iParam0->f_1, 8))
			{
				func_380(&(iParam0->f_1), 8);
				AUDIO::TRIGGER_MUSIC_EVENT("BIKER_JOUST_FIGHT");
				HUD::GET_HUD_COLOUR(18, &iVar3, &iVar4, &iVar5, &uVar6);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
				func_403("CNTDWN_GO");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_88(6);
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_552()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				func_551(&(iParam0->f_3));
			}
			AUDIO::STOP_AUDIO_SCENE("RACES_RADIO_MUTE_scene");
			AUDIO::START_AUDIO_SCENE("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7)))
				{
					iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7));
					if (iVar8 != PLAYER::PLAYER_ID())
					{
						iVar9 = PLAYER::GET_PLAYER_PED(iVar8);
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar9, false))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(iVar9, false);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_551(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_552()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_553(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_554(var uParam0)
{
	if (func_559(uParam0))
	{
		if (func_556(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_555(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_555(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_556(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_557(int* iParam0)
{
	func_558(iParam0, 0f);
}

void func_558(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_555(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_559(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_560(int* iParam0)
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_561(int iParam0)
{
	switch (Local_907.f_31)
	{
		case 0:
			if (iParam0 == 0)
			{
				return 1706.612f, 3251.994f, 40.1522f;
			}
			return 1066.192f, 3078.314f, 40.9174f;
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				return -1004.147f, -3235.733f, 12.9444f;
			}
			return -1675.056f, -2848.475f, 12.9444f;
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				return 2141.719f, 4811.836f, 40.1823f;
			}
			return 1928.747f, 4713.012f, 40.1674f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_562(int* iParam0)
{
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
}

void func_563()
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_86(1);
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 2))
		{
			func_86(2);
		}
		return;
	}
	if (func_585() || func_582())
	{
		func_531();
		PAD::DISABLE_CONTROL_ACTION(0, 140, true);
		PAD::DISABLE_CONTROL_ACTION(0, 141, true);
		PAD::DISABLE_CONTROL_ACTION(0, 142, true);
		PAD::DISABLE_CONTROL_ACTION(0, 143, true);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 345, true);
		PAD::DISABLE_CONTROL_ACTION(0, 346, true);
		PAD::DISABLE_CONTROL_ACTION(0, 347, true);
	}
	if (func_585())
	{
		if (!func_44(NETWORK::PARTICIPANT_ID(), 4))
		{
			func_88(4);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (func_581(2))
			{
				func_580(2);
			}
			if (!func_85())
			{
				if (func_581(3))
				{
					func_580(3);
				}
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				iVar0 = ENTITY::GET_ENTITY_MODEL(iVar1);
				if (func_527(iVar0))
				{
					VEHICLE::_0x73561D4425A021A2(iVar1, 1);
					func_579(3);
					if (func_581(4))
					{
						func_580(4);
					}
					if (!func_44(NETWORK::PARTICIPANT_ID(), 2))
					{
						func_88(2);
					}
					if (MISC::IS_BIT_SET(Local_907.f_2, NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						if (!func_44(NETWORK::PARTICIPANT_ID(), 1))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("BIKER_JOUST_START");
							func_88(1);
							func_577();
							NETWORK::_0x13F1FCB111B820B0(true);
						}
						if (!func_576() || !func_575())
						{
							if (func_45(PLAYER::PLAYER_ID()))
							{
								if (!func_576())
								{
									func_564(6);
								}
							}
							else
							{
								func_564(7);
							}
						}
						else
						{
							func_564(8);
						}
					}
				}
				else
				{
					if (func_44(NETWORK::PARTICIPANT_ID(), 1))
					{
						func_86(1);
					}
					if (func_44(NETWORK::PARTICIPANT_ID(), 2))
					{
						func_86(2);
					}
					func_564(4);
				}
			}
			else
			{
				if (func_44(NETWORK::PARTICIPANT_ID(), 1))
				{
					func_86(1);
				}
				if (func_44(NETWORK::PARTICIPANT_ID(), 2))
				{
					func_86(2);
				}
				if (func_44(NETWORK::PARTICIPANT_ID(), 4))
				{
					func_86(4);
				}
				func_564(3);
			}
		}
		else
		{
			if (func_44(NETWORK::PARTICIPANT_ID(), 1))
			{
				func_86(1);
			}
			if (func_44(NETWORK::PARTICIPANT_ID(), 2))
			{
				func_86(2);
			}
			func_564(2);
		}
	}
	else
	{
		if (func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_86(1);
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 2))
		{
			func_86(2);
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 4))
		{
			func_86(4);
			func_84(0);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		}
	}
}

void func_564(int iParam0)
{
	struct<8> Var0;
	int iVar16;
	
	if (func_574())
	{
		if (!func_581(iParam0))
		{
			switch (iParam0)
			{
				case 3:
					func_106("JST_PASSMD", -1);
					break;
				
				case 2:
					func_106("JST_NOBIKE", -1);
					break;
				
				case 5:
					break;
				
				case 6:
					func_106("JST_HRBOSS", -1);
					break;
				
				case 7:
					func_106("JST_HWBOSS", -1);
					break;
				
				case 8:
					func_106("JST_HTBOSS", -1);
					break;
				
				case 9:
					func_106("JST_KBIKE", -1);
					break;
				
				case 11:
					func_106("JST_OAREA", -1);
					break;
				
				case 12:
					func_106("JST_HSTART", -1);
					break;
				
				case 13:
					if (func_147())
					{
						func_573("JST_HTBLAUNCH", "JST_BLIP", iLocal_866, -1);
					}
					else
					{
						func_573("JST_HGNLNCH", "JST_BLIP", iLocal_866, -1);
					}
					break;
				
				case 14:
					func_573("JST_HGNLNCH", "JST_BLIP", iLocal_866, -1);
					break;
				
				case 10:
					func_573("JST_FIGHT", "HUNT_TARBLP", iLocal_867, -1);
					break;
				
				case 15:
					func_573("JST_AMMOH", "JST_AMMOBL", 18, -1);
					break;
				
				case 16:
					StringCopy(&Var0, func_567(func_36()), 64);
					iVar16 = func_736(func_36());
					func_566("JST_RVLLNCH", &Var0, iVar16, "JST_BLIP", iLocal_866, -1);
					break;
				
				case 17:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) != joaat("oppressor"))
						{
							func_106("JST_DOUB", -1);
						}
					}
					break;
				
				default:
					break;
			}
			func_102(1);
			func_565(iParam0);
		}
	}
}

void func_565(int iParam0)
{
	MISC::SET_BIT(&iLocal_839, iParam0);
}

void func_566(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam5);
}

char* func_567(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_572(&(Global_1630816[iParam0 /*597*/].f_11.f_105));
		return sVar0;
	}
	if (Global_1630816[iParam0 /*597*/].f_11.f_121 != Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_121)
	{
		sVar0 = func_570(iParam0, 0);
		return sVar0;
	}
	if (((func_62(iParam0, 28) || func_62(PLAYER::PLAYER_ID(), 28)) || func_569(iParam0)) && !func_568(iParam0))
	{
		return func_570(iParam0, 0);
	}
	iVar1 = func_266(iParam0);
	if (iVar1 != func_29())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_570(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_29())
	{
		sVar0 = func_572(&(Global_1630816[iVar1 /*597*/].f_11.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_570(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_568(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_202(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_569(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_29())
	{
		Var0 = { func_202(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_570(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_104(iParam0, 1))
		{
			return func_571();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_571()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_572(var uParam0)
{
	return uParam0;
}

void func_573(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

int func_574()
{
	if (((((!func_386() && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && func_1038(PLAYER::PLAYER_ID(), 1, 1)) && !func_122()) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 1;
	}
	return 0;
}

bool func_575()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_34(PLAYER::PLAYER_ID());
	if (iVar1 == 0)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 9;
	}
	return func_17(iVar0);
}

bool func_576()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (1 - func_34(PLAYER::PLAYER_ID()));
	if (iVar0 == 0)
	{
		iVar1 = 8;
	}
	else
	{
		iVar1 = 9;
	}
	return func_17(iVar1);
}

void func_577()
{
	if (!func_578(PLAYER::PLAYER_ID()))
	{
		func_123(25);
	}
}

bool func_578(int iParam0)
{
	return func_62(iParam0, 25);
}

void func_579(int iParam0)
{
	Global_2405077.f_45.f_304 = iParam0;
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_2405077.f_45.f_304);
	if (Global_2405077.f_45.f_304 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 115, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 115, false);
	}
}

void func_580(int iParam0)
{
	MISC::CLEAR_BIT(&iLocal_839, iParam0);
}

bool func_581(int iParam0)
{
	return MISC::IS_BIT_SET(iLocal_839, iParam0);
}

int func_582()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var3 = { func_561(func_584(PLAYER::PLAYER_ID())) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, false);
	fVar7 = (func_583(func_584(PLAYER::PLAYER_ID())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (MISC::ABSF((Var3.f_2 - Var0.f_2)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

float func_583(int iParam0)
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_584(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_585()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var3 = { func_561(func_34(PLAYER::PLAYER_ID())) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, false);
	fVar7 = (func_583(func_34(PLAYER::PLAYER_ID())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (MISC::ABSF((Var3.f_2 - Var0.f_2)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

void func_586()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	HUD::GET_HUD_COLOUR(iLocal_866, &iVar0, &iVar1, &iVar2, &iVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_583(func_34(PLAYER::PLAYER_ID()));
	Var7 = { func_561(func_34(PLAYER::PLAYER_ID())) };
	Var7.f_2 = (Var7.f_2 - fVar5);
	GRAPHICS::DRAW_MARKER(1, Var7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, iVar0, iVar1, iVar2, iVar3, false, false, 2, false, 0, 0, false);
}

void func_587()
{
	if (func_626())
	{
		func_620();
		func_619();
		func_606();
		func_589();
		func_588();
	}
	else
	{
		switch (func_116(PLAYER::PLAYER_ID()))
		{
			case 0:
				func_532();
				break;
			
			case 1:
				func_620();
				break;
			
			case 2:
				func_588();
				break;
			
			case 3:
				func_620();
				func_619();
				func_606();
				func_588();
				func_589();
				break;
			}
	}
}

void func_588()
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(NETWORK::PARTICIPANT_ID(), 1))
			{
				if (!func_581(10))
				{
					func_564(10);
				}
				else
				{
					func_564(15);
				}
				if (!func_581(17))
				{
					func_564(17);
				}
			}
		}
		else if (!func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_564(12);
		}
		else
		{
			func_564(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_626())
		{
			if (PLAYER::PLAYER_ID() == Local_907.f_16[0])
			{
				func_564(13);
			}
			else
			{
				func_564(14);
			}
		}
		else
		{
			func_564(16);
		}
	}
}

void func_589()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_5(&uLocal_900))
	{
		if (func_5(&(Local_907.f_5)))
		{
			iLocal_850 = (func_3() - func_22(&(Local_907.f_5), 0, 0));
			if (iLocal_850 < func_3())
			{
				if (iLocal_850 > 30000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				func_605();
				iVar2 = func_34(PLAYER::PLAYER_ID());
				iVar3 = (1 - iVar2);
				iVar4 = func_736(PLAYER::PLAYER_ID());
				iVar5 = Local_907.f_16[iVar3];
				if (Local_907.f_24[iVar2] > 0)
				{
					func_602(Local_907.f_27[iVar2], "JST_TEAML", -1, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_84, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				else
				{
					func_602(Local_907.f_27[iVar2], "JST_TEAML", 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_84, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				if (iVar5 != func_29())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_884))
						{
							iVar4 = func_736(iVar5);
							func_602(Local_907.f_27[iVar3], "JST_ETEAML", -1, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_84, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
						}
					}
				}
				if (iLocal_850 > 0)
				{
					func_601(iLocal_850, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_601(0, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
		}
		else
		{
			func_590();
		}
	}
	else
	{
		iVar0 = (10000 - func_22(&uLocal_900, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (func_1038(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_605();
			func_601(iVar0, "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
		}
	}
}

void func_590()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_512())
	{
		return;
	}
	bVar0 = func_24();
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (bVar0)
	{
		iVar2 = func_600();
		if (iVar2 > iLocal_844)
		{
			iVar2 = iLocal_844;
		}
		if (iVar3 != Local_907.f_3)
		{
			iVar3 = Local_907.f_3;
		}
		if ((iVar1 - func_22(&(Local_907.f_7), 0, 0)) >= 0)
		{
			func_599((iVar1 - func_22(&(Local_907.f_7), 0, 0)));
			func_591(iVar3, iVar2, (iVar1 - func_22(&(Local_907.f_7), 0, 0)), 1, func_598(-1));
		}
		else
		{
			func_591(iVar3, iVar2, 0, 1, func_598(-1));
		}
	}
}

void func_591(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_596(0) == 0)
	{
		return;
	}
	func_595();
	func_592(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_223(sParam4))
	{
		sVar0 = sParam4;
	}
	func_601(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_592(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_594(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_593(4, iVar0);
		Global_1380638.f_3305[iVar0] = iParam0;
		Global_1380638.f_3305.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1380638.f_3305.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1380638.f_3305.f_183[iVar0] = iParam3;
		Global_1380638.f_3305.f_216[iVar0] = iParam5;
		Global_1380638.f_3305.f_194[iVar0] = iParam4;
		Global_1380638.f_3305.f_227[iVar0] = iParam6;
		Global_1380638.f_3305.f_270[iVar0] = iParam7;
		Global_1380638.f_3305.f_281[iVar0] = iParam8;
		Global_1380638.f_3305.f_292[iVar0] = iParam9;
		Global_1380638.f_3305.f_303[iVar0] = iParam10;
		Global_1380638.f_3305.f_314[iVar0] = iParam11;
		Global_1380638.f_3305.f_325[iVar0] = iParam13;
		Global_1380638.f_3305.f_336[iVar0] = iParam14;
		Global_1380638.f_3305.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1380638.f_1130 = 1;
		}
	}
}

void func_593(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1380638.f_6736[iParam0]), iParam1);
}

bool func_594(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1380638.f_6736[iParam0], iParam1);
}

void func_595()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2465052 = 1;
}

int func_596(bool bParam0)
{
	if (func_597())
	{
		return 0;
	}
	if (func_495())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1038(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_597()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

char* func_598(int iParam0)
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_599(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2544210.f_5028 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!MISC::IS_BIT_SET(Global_2544210.f_5028, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2544210.f_5028 = 0;
			MISC::SET_BIT(&(Global_2544210.f_5028), 1);
		}
	}
}

int func_600()
{
	return 16;
}

void func_601(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_594(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_593(7, iVar0);
		Global_1380638.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_4617.f_172[iVar0] = iParam2;
		Global_1380638.f_4617.f_216[iVar0] = iParam3;
		Global_1380638.f_4617.f_183[iVar0] = iParam4;
		Global_1380638.f_4617.f_194[iVar0] = iParam5;
		Global_1380638.f_4617.f_249[iVar0] = iParam6;
		Global_1380638.f_4617.f_260[iVar0] = iParam7;
		Global_1380638.f_4617.f_205[iVar0] = iParam8;
		Global_1380638.f_4617.f_314[iVar0] = iParam9;
		Global_1380638.f_4617.f_325[iVar0] = iParam10;
		Global_1380638.f_4617.f_357[iVar0] = iParam11;
		Global_1380638.f_4617.f_238[iVar0] = iParam12;
		Global_1380638.f_4617.f_271[iVar0] = iParam13;
		Global_1380638.f_4617.f_368[iVar0] = iParam14;
		Global_1380638.f_4617.f_379[iVar0] = iParam15;
		Global_1380638.f_4617.f_390[iVar0] = iParam16;
		Global_1380638.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_602(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_594(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_593(6, iVar0);
		Global_1380638.f_3999[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_3999.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_3999.f_183[iVar0] = iParam3;
		Global_1380638.f_3999.f_172[iVar0] = iParam2;
		Global_1380638.f_3999.f_260[iVar0] = iParam4;
		Global_1380638.f_3999.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1380638.f_3999.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1380638.f_3999.f_443[iVar0] = iParam7;
		Global_1380638.f_3999.f_454[iVar0] = iParam8;
		Global_1380638.f_3999.f_497[iVar0] = iParam9;
		Global_1380638.f_3999.f_508[iVar0] = iParam10;
		Global_1380638.f_3999.f_205[iVar0] = iParam11;
		Global_1380638.f_3999.f_216[iVar0] = iParam12;
		Global_1380638.f_3999.f_227[iVar0] = uParam13;
		Global_1380638.f_3999.f_238[iVar0] = iParam14;
		Global_1380638.f_3999.f_249[iVar0] = iParam15;
		Global_1380638.f_3999.f_519[iVar0] = iParam16;
		Global_1380638.f_3999.f_530[iVar0] = iParam17;
		Global_1380638.f_3999.f_541[iVar0] = iParam18;
		Global_1380638.f_3999.f_552[iVar0] = iParam19;
		Global_1380638.f_3999.f_563[iVar0] = iParam20;
		Global_1380638.f_3999.f_574[iVar0] = iParam21;
		Global_1380638.f_3999.f_585[iVar0] = iParam22;
		Global_1380638.f_3999.f_596[iVar0] = iParam23;
		Global_1380638.f_3999.f_607[iVar0] = iParam24;
		Global_1380638.f_3999.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_604())
		{
			Global_1380638.f_1130 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1380638.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1380638.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1380638.f_1130 = 1;
			}
			if (func_603())
			{
				Global_1380638.f_1134 = 1;
			}
		}
	}
}

int func_603()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_604()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_605()
{
	Global_1380638.f_1130 = 1;
}

void func_606()
{
	if (iLocal_847 > -1)
	{
		if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_847), 1))
		{
			if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_847), 6))
			{
				if (func_528())
				{
					if (func_526())
					{
						if (!func_618("JST_OBJ_KILL"))
						{
							func_617("JST_OBJ_KILL", &Local_884, iLocal_867, 0);
						}
					}
					else
					{
						if (func_618("JST_OBJ_KILL"))
						{
							func_532();
						}
						if (!func_618("JST_FBIKE"))
						{
							func_614("JST_FBIKE", 0);
						}
						if (!func_44(NETWORK::PARTICIPANT_ID(), 10))
						{
							func_88(10);
							func_613("JST_FBIKEGUNS", -1);
						}
					}
				}
				else if (func_526())
				{
					if (!func_618("JST_OBKAREA"))
					{
						func_614("JST_OBKAREA", 0);
					}
				}
				else
				{
					if (func_618("JST_OBJ_KILL"))
					{
						func_532();
					}
					if (!func_618("JST_FBIKE"))
					{
						func_614("JST_FBIKE", 0);
					}
				}
			}
			else if (func_758(9))
			{
				if (func_526())
				{
					if (!func_618("JST_OBJ_CHARGE"))
					{
						func_617("JST_OBJ_CHARGE", &Local_884, iLocal_867, 0);
					}
				}
			}
		}
		else if (!func_585())
		{
			if (!func_618("JST_OGOAREA"))
			{
				func_607("JST_OGOAREA", "JST_START", iLocal_866, 0);
			}
		}
		else if (!func_526())
		{
			if (!func_618("JST_OBIKE"))
			{
				func_614("JST_OBIKE", 0);
			}
		}
	}
}

void func_607(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_608(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 19;
		Global_1312603.f_56 = iParam2;
	}
}

int func_608(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_612(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_533();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312603.f_9 = MISC::GET_HASH_KEY(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = uParam3;
	Global_1312603.f_56 = uParam3;
	func_611();
	func_610(bParam2);
	func_609();
	return 1;
}

void func_609()
{
	MISC::SET_BIT(&(Global_1312603.f_59), 1);
}

void func_610(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312603.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312603.f_59), 0);
}

void func_611()
{
	Global_1312603.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_612(char* sParam0, char* sParam1)
{
	if (!func_538())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
}

void func_613(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_614(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_615(sParam0))
	{
		return;
	}
	func_533();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312603.f_9 = MISC::GET_HASH_KEY(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_611();
	func_610(bParam1);
	func_609();
}

bool func_615(char* sParam0)
{
	if (!func_538())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_616(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12));
}

bool func_616(char* sParam0)
{
	if (!func_538())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
}

void func_617(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_608(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 16;
		Global_1312603.f_56 = iParam2;
	}
}

int func_618(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_538())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_615(sParam0);
}

void func_619()
{
}

void func_620()
{
	if (!func_512())
	{
		func_625();
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_855))
		{
			HUD::REMOVE_BLIP(&iLocal_855);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_854))
		{
			HUD::REMOVE_BLIP(&iLocal_854);
		}
		if (iLocal_847 > -1)
		{
			if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_847), 1))
			{
				func_621();
			}
		}
	}
}

void func_621()
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	int iVar5;
	
	func_624(&Var0);
	if (!HUD::DOES_BLIP_EXIST(iLocal_856))
	{
		func_623(&fVar3, &fVar4, &iVar5);
		iLocal_856 = HUD::_ADD_BLIP_FOR_AREA(Var0, fVar3, fVar4);
		HUD::SET_BLIP_ROTATION(iLocal_856, iVar5);
		func_622(&iLocal_856, 29);
		HUD::SET_BLIP_ALPHA(iLocal_856, 180);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_856, false);
	}
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_81(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

void func_623(var uParam0, var uParam1, var uParam2)
{
	if (Local_907.f_31 == 0)
	{
		*uParam0 = 696f;
		*uParam1 = 101.5f;
		*uParam2 = 16;
	}
	else if (Local_907.f_31 == 1)
	{
		*uParam0 = 817f;
		*uParam1 = 101.5f;
		*uParam2 = 149;
	}
	else if (Local_907.f_31 == 2)
	{
		*uParam0 = 280f;
		*uParam1 = 50.5f;
		*uParam2 = 205;
	}
}

void func_624(var uParam0)
{
	switch (Local_907.f_31)
	{
		case 0:
			*uParam0 = { 1392.895f, 3132.5f, 39.4141f };
			break;
		
		case 1:
			*uParam0 = { -1342.056f, -3041.475f, 10.9444f };
			break;
		
		case 2:
			*uParam0 = { 2039.747f, 4768.012f, 40.1674f };
			break;
	}
}

void func_625()
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_855))
	{
		iLocal_855 = HUD::ADD_BLIP_FOR_COORD(func_561(func_34(PLAYER::PLAYER_ID())));
		HUD::SET_BLIP_SPRITE(iLocal_855, 495);
		HUD::SET_BLIP_FLASHES(iLocal_855, true);
		HUD::SET_BLIP_FLASH_TIMER(iLocal_855, 7000);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_855, "CELL_JOUST");
		HUD::SET_BLIP_PRIORITY(iLocal_855, 9);
		Global_2544210.f_267 = 1;
		func_622(&iLocal_855, iLocal_866);
		if (!func_758(6))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
			func_734(6);
		}
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_854))
	{
		iLocal_854 = HUD::ADD_BLIP_FOR_RADIUS(func_561(func_34(PLAYER::PLAYER_ID())), (func_583(func_34(PLAYER::PLAYER_ID())) / 2f));
		func_622(&iLocal_854, iLocal_866);
		HUD::SET_BLIP_ALPHA(iLocal_854, 100);
		HUD::SET_BLIP_SCALE(iLocal_854, 1.4f);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_854, false);
	}
}

int func_626()
{
	if (func_628() || func_627())
	{
		return 1;
	}
	return 0;
}

int func_627()
{
	return func_37(PLAYER::PLAYER_ID());
}

bool func_628()
{
	return func_35(PLAYER::PLAYER_ID());
}

void func_629(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_412(PLAYER::PLAYER_ID());
		Global_1682001 = iVar0;
		Global_1682001.f_1 = iParam0;
		if (func_179() != func_29())
		{
			Global_1682001.f_2 = func_733(func_179());
			Global_1682001.f_3 = func_732(func_179());
		}
		if (func_96() != func_29())
		{
			func_178(func_96(), &(Global_1682001.f_2), &(Global_1682001.f_3));
		}
		Global_1682001.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1682001.f_28 = func_731(PLAYER::PLAYER_ID());
		Global_1682001.f_13 = 0;
		Global_1682001.f_14 = 0;
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682001.f_23 = func_730(func_103(1));
		}
	}
	else
	{
		iVar0 = func_67(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_100(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1681740 = iVar0;
		if (func_146(iVar0))
		{
			Global_1681740.f_1 = 4;
		}
		else if (func_729(iVar0))
		{
			Global_1681740.f_1 = 5;
		}
		else if (func_93(iVar0, 0))
		{
			Global_1681740.f_1 = 2;
			if (func_138(iVar0))
			{
				Global_1681740.f_1 = 3;
			}
		}
		else
		{
			Global_1681740.f_1 = 1;
		}
		if (func_179() != func_29())
		{
			Global_1681740.f_4 = func_733(func_179());
			Global_1681740.f_5 = func_732(func_179());
		}
		if (func_96() != func_29())
		{
			func_178(func_96(), &(Global_1681740.f_6), &(Global_1681740.f_7));
		}
		Global_1681740.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1681740.f_27 = 1;
			Global_1681740.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1681740.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1681740.f_40 = func_173(iParam1);
			Global_1681740.f_41 = func_728();
			Global_1681740.f_42 = func_332(PLAYER::PLAYER_ID(), iParam1);
			Global_1681740.f_44 = func_727(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_160() || iVar0 != 192)
		{
			Global_1681740.f_53 = 0;
		}
	}
	else if (func_136(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1681857 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1681857 = iParam0 + 1;
		}
		else
		{
			Global_1681857 = func_726(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_132(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1681857.f_1 = 0;
				}
				else
				{
					Global_1681857.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1681857.f_1 = 2;
				break;
			
			case 227:
				Global_1681857.f_1 = 3;
				break;
		}
		Global_1681857.f_21 = 1;
		Global_1681857.f_22 = 1;
		if (func_179() != func_29())
		{
			Global_1681857.f_4 = func_733(func_179());
			Global_1681857.f_5 = func_732(func_179());
		}
		if (func_96() != func_29())
		{
			func_178(func_96(), &(Global_1681857.f_4), &(Global_1681857.f_5));
		}
		Global_1681857.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1681857.f_20 = iParam0;
		}
	}
	else if (func_108(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1681794 = iVar0;
		Global_1681740.f_1 = 1;
		if (func_179() != func_29())
		{
			Global_1681794.f_4 = func_733(func_179());
			Global_1681794.f_5 = func_732(func_179());
		}
		if (func_96() != func_29())
		{
			func_178(func_96(), &(Global_1681794.f_6), &(Global_1681794.f_7));
		}
		Global_1681794.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1681794.f_21 = iParam0;
		}
	}
	else if (func_135(iVar0))
	{
		Global_1681901 = iVar0;
		Global_1681901.f_1 = iParam0;
		Global_1681901.f_21 = 1;
		Global_1681901.f_22 = 1;
		if (func_179() != func_29())
		{
			Global_1681901.f_4 = func_733(func_179());
			Global_1681901.f_5 = func_732(func_179());
		}
		if (func_96() != func_29())
		{
			func_178(func_96(), &(Global_1681901.f_4), &(Global_1681901.f_5));
		}
		Global_1681901.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1681901.f_20 = iParam0;
		}
		Global_1681901.f_27 = func_724(func_49(), 5);
		Global_1681901.f_28 = func_730(func_723(PLAYER::PLAYER_ID()));
		Global_1681901.f_29 = func_144(6109, -1, 0);
		Global_1681901.f_30 = func_144(6105, -1, 0);
		Global_1681901.f_31 = func_144(6106, -1, 0);
		Global_1681901.f_32 = func_144(6108, -1, 0);
		Global_1681901.f_33 = func_144(6107, -1, 0);
		Global_1681901.f_34 = func_144(6110, -1, 0);
		Global_1681901.f_7 = func_721();
		Global_1681901.f_51 = func_730(bParam4);
	}
	else if (func_134(iVar0))
	{
		Global_1681955 = iVar0;
		Global_1681955.f_1 = iParam0;
		Global_1681955.f_21 = 1;
		Global_1681955.f_22 = 1;
		if (func_179() != func_29())
		{
			Global_1681955.f_4 = func_733(func_179());
			Global_1681955.f_5 = func_732(func_179());
		}
		if (func_96() != func_29())
		{
			func_178(func_96(), &(Global_1681955.f_4), &(Global_1681955.f_5));
		}
		Global_1681955.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1681955.f_20 = iParam0;
		}
		Global_1681955.f_24 = func_144(6159, -1, 0);
		Global_1681955.f_25 = func_144(6164, -1, 0);
		Global_1681955.f_26 = func_144(6165, -1, 0);
		Global_1681955.f_27 = func_730((((func_720() || func_719()) || func_718()) || func_717(PLAYER::PLAYER_ID())));
		Global_1681955.f_28 = func_144(6166, -1, 0);
		Global_1681955.f_29 = func_730(func_716());
		Global_1681955.f_31 = 0;
		Global_1681955.f_30 = 0;
		Global_1681955.f_32 = 0;
		Global_1681955.f_33 = 0;
		Global_1681955.f_34 = 0;
		Global_1681955.f_16 = 0;
		Global_1681955.f_7 = func_721();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_130(func_131(PLAYER::PLAYER_ID()))))
	{
		Global_1682091 = iVar0;
		Global_1682091.f_1 = iParam0;
		Global_1682091.f_21 = 1;
		Global_1682091.f_22 = 1;
		Global_1682091.f_7 = func_721();
		if (func_179() != func_29())
		{
			Global_1682091.f_4 = func_733(func_179());
			Global_1682091.f_5 = func_732(func_179());
		}
		if (func_96() != func_29())
		{
			func_178(func_96(), &(Global_1682091.f_4), &(Global_1682091.f_5));
		}
		if (func_179() != -1)
		{
			Global_1682091.f_17 = func_715(func_179());
		}
		Global_1682091.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1682091.f_28 = func_731(PLAYER::PLAYER_ID());
		Global_1682091.f_16 = 0;
		Global_1682091.f_24 = 0;
		Global_1682091.f_23 = 0;
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682091.f_33 = func_730(func_103(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1682037 = iVar0;
		Global_1682037.f_1 = iParam0;
		Global_1682037.f_21 = 1;
		Global_1682037.f_22 = 1;
		Global_1682037.f_7 = func_721();
		Global_1682037.f_24 = 0;
		Global_1682037.f_23 = 0;
		Global_1682037.f_16 = 0;
		if (func_179() != func_29())
		{
			Global_1682037.f_4 = func_733(func_179());
			Global_1682037.f_5 = func_732(func_179());
		}
		Global_1682037.f_28 = func_731(PLAYER::PLAYER_ID());
		if (Global_1682037.f_28)
		{
			Global_1682037.f_29 = func_714(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1682037.f_29 = 0;
		}
		Global_1682037.f_30 = func_698(PLAYER::PLAYER_ID(), 4, -1);
		Global_1682037.f_31 = func_697(PLAYER::PLAYER_ID());
		Global_1682037.f_32 = func_730(func_696(PLAYER::PLAYER_ID()));
		Global_1682037.f_33 = func_730(func_695(PLAYER::PLAYER_ID()));
		Global_1682037.f_34 = func_730(func_694(PLAYER::PLAYER_ID()));
		Global_1682037.f_35 = func_730(func_693(PLAYER::PLAYER_ID()));
		Global_1682037.f_36 = func_692(PLAYER::PLAYER_ID());
		Global_1682037.f_37 = func_691(PLAYER::PLAYER_ID());
		Global_1682037.f_39 = func_690(PLAYER::PLAYER_ID());
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682037.f_41 = func_730(func_103(1));
		}
		if (func_96() != func_29())
		{
			func_178(func_96(), &(Global_1682037.f_4), &(Global_1682037.f_5));
		}
		Global_1682037.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1682037.f_28 = func_731(PLAYER::PLAYER_ID());
	}
	else if (func_128(iVar0))
	{
		Global_1682175 = iVar0;
		Global_1682175.f_1 = func_132(PLAYER::PLAYER_ID());
		Global_1682175.f_2 = func_689();
		Global_1682175.f_3 = func_688();
		Global_1682175.f_4 = func_733(func_179());
		Global_1682175.f_5 = func_732(func_179());
		Global_1682175.f_7 = func_721();
		Global_1682175.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (func_179() != -1)
		{
			Global_1682175.f_17 = func_715(func_179());
		}
		Global_1682175.f_21 = 1;
		Global_1682175.f_22 = 1;
		Global_1682175.f_25 = iParam0;
		Global_1682175.f_27 = func_730(func_687(PLAYER::PLAYER_ID()));
		Global_1682175.f_28 = func_684(21, -1);
	}
	else if (func_127(iVar0))
	{
		Global_1682250 = Global_786547.f_1;
		Global_1682250.f_2 = Global_786547;
		Global_1682250.f_6 = func_733(func_179());
		Global_1682250.f_7 = func_732(func_179());
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682250.f_8 = func_730(func_103(1));
		}
		if (func_179() != -1)
		{
			Global_1682250.f_9 = func_715(func_179());
		}
		Global_1682250.f_10 = func_721();
		Global_1682250.f_19 = 1;
		Global_1682250.f_20 = 1;
		Global_1682250.f_21 = 0;
		Global_1682250.f_22 = 0;
		Global_1682250.f_23 = 0;
		Global_1710053 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else if (func_126(iVar0))
	{
		Global_1682337 = Global_786547.f_1;
		Global_1682337.f_3 = Global_786547;
		Global_1682337.f_6 = func_733(func_179());
		Global_1682337.f_7 = func_732(func_179());
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682337.f_8 = func_730(func_103(1));
		}
		if (func_179() != -1)
		{
			Global_1682337.f_9 = func_715(func_179());
		}
		Global_1682337.f_10 = func_721();
		Global_1682337.f_21 = 0;
		Global_1682337.f_22 = 0;
		Global_1682337.f_23 = 0;
		Global_1682337.f_26 = func_666(1);
		Global_1682337.f_34 = func_666(0);
		Global_1682337.f_15 = !func_284(PLAYER::PLAYER_ID(), func_96(), 1);
	}
	else if (func_665(iVar0))
	{
		Global_1682449 = iParam0;
		Global_1682449.f_1 = iVar0;
		Global_1682449.f_3 = func_733(func_179());
		Global_1682449.f_4 = func_732(func_179());
		Global_1682449.f_5 = func_730(func_103(1));
		Global_1682449.f_6 = func_721();
		Global_1682449.f_7 = func_715(func_179());
		Global_1682449.f_8 = 0;
	}
	else if (func_125(iVar0))
	{
		Global_1682470 = Global_786547.f_1;
		Global_1682470.f_27 = Global_786547;
		Global_1682470.f_5 = func_733(func_179());
		Global_1682470.f_6 = func_732(func_179());
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682470.f_7 = func_730(func_103(1));
		}
		if (func_179() != -1)
		{
			Global_1682470.f_8 = func_715(func_179());
		}
		Global_1682470.f_9 = func_721();
		Global_1682470.f_18 = 1;
		Global_1682470.f_19 = 1;
		Global_1682470.f_20 = 0;
		Global_1682470.f_21 = 0;
		Global_1682470.f_22 = 0;
		Global_1682470.f_23 = func_666(1);
		Global_1682470.f_24 = func_666(0);
		Global_1682470.f_14 = !func_284(PLAYER::PLAYER_ID(), func_96(), 1);
	}
	else
	{
		if (func_179() != func_29())
		{
			Global_1681722 = func_733(func_179());
			Global_1681722.f_1 = func_732(func_179());
		}
		Global_1681722.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1681722.f_13 = func_664();
		Global_1681722.f_15 = 0;
		if (func_177(1))
		{
			if (func_96() == func_179())
			{
				Global_1681722.f_15 = 1;
			}
		}
		if (func_663())
		{
			Global_1681857.f_28 = 1;
		}
		if (((((func_662() || func_661()) || func_660()) || func_659()) || func_658()) || func_657(PLAYER::PLAYER_ID()))
		{
			Global_1681857.f_30 = 1;
		}
		if (func_655(func_656(joaat("trailersmall2"))))
		{
			Global_1681857.f_32 = 1;
		}
		if (func_638(func_654(joaat("caddy"))))
		{
			Global_1681857.f_31 = 1;
		}
		if (func_637(PLAYER::PLAYER_ID()) || func_636(PLAYER::PLAYER_ID()))
		{
			Global_1681857.f_29 = 1;
		}
		if (func_635(PLAYER::PLAYER_ID()))
		{
			Global_1681857.f_33 = 1;
			Global_1681857.f_34 = 1;
		}
		if (func_634(PLAYER::PLAYER_ID()))
		{
			Global_1681857.f_36 = 1;
		}
		if (func_633(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1681857.f_35 = 1;
		}
		if (func_632(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1681857.f_37 = 1;
		}
		if (func_632(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1681857.f_38 = 1;
		}
		if (func_631(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_630(PLAYER::PLAYER_ID(), iVar2);
				if (func_329(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1681857.f_39 = 1;
				}
				if (func_329(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1681857.f_40 = 1;
				}
				if (func_329(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1681857.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_630(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_321(Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/]))
	{
		uVar0 = Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/];
	}
	return uVar0;
}

int func_631(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_632(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_633(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_633(int iParam0, int iParam1)
{
	if (iParam1 == func_29())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590908[iParam1 /*874*/].f_267.f_261, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_634(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 7);
}

bool func_635(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 8);
}

bool func_636(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 11);
}

bool func_637(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 10);
}

int func_638(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_684(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_652(11));
		func_651(iVar1, &iVar0, 1);
		iVar2 = func_684(func_640(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_144(func_639(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_639(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case joaat("mpsv_lp0_31"):
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				case 307:
					return 9636;
				
				case 308:
					return 9643;
				
				case 309:
					return 9650;
				
				case 310:
					return 9657;
				
				case 311:
					return 9664;
				
				case 312:
					return 9671;
				
				case 313:
					return 9678;
				
				case 314:
					return 9685;
				
				case 315:
					return 9692;
				
				case 316:
					return 9699;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case joaat("mpsv_lp0_31"):
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				case 307:
					return 9637;
				
				case 308:
					return 9644;
				
				case 309:
					return 9651;
				
				case 310:
					return 9658;
				
				case 311:
					return 9665;
				
				case 312:
					return 9672;
				
				case 313:
					return 9679;
				
				case 314:
					return 9686;
				
				case 315:
					return 9693;
				
				case 316:
					return 9700;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case joaat("mpsv_lp0_31"):
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 291:
					return 9057;
				
				case 292:
					return 9063;
				
				case 293:
					return 9069;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				case 304:
					return 9145;
				
				case 305:
					return 9151;
				
				case 306:
					return 9157;
				
				case 307:
					return 9638;
				
				case 308:
					return 9645;
				
				case 309:
					return 9652;
				
				case 310:
					return 9659;
				
				case 311:
					return 9666;
				
				case 312:
					return 9673;
				
				case 313:
					return 9680;
				
				case 314:
					return 9687;
				
				case 315:
					return 9694;
				
				case 316:
					return 9701;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3336;
				
				case 78:
					return 3344;
				
				case joaat("mpsv_lp0_31"):
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4132;
				
				case 101:
					return 4140;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4292;
				
				case 121:
					return 4300;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4452;
				
				case 141:
					return 4460;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8988;
				
				case 282:
					return 8995;
				
				case 283:
					return 9002;
				
				case 284:
					return 9009;
				
				case 285:
					return 9016;
				
				case 286:
					return 9023;
				
				case 287:
					return 9030;
				
				case 288:
					return 9037;
				
				case 289:
					return 9044;
				
				case 290:
					return 9051;
				
				case 291:
					return 9058;
				
				case 292:
					return 9064;
				
				case 293:
					return 9070;
				
				case 294:
					return 9076;
				
				case 295:
					return 9083;
				
				case 296:
					return 9090;
				
				case 297:
					return 9097;
				
				case 298:
					return 9104;
				
				case 299:
					return 9111;
				
				case 300:
					return 9118;
				
				case 301:
					return 9125;
				
				case 302:
					return 9132;
				
				case 303:
					return 9139;
				
				case 304:
					return 9146;
				
				case 305:
					return 9152;
				
				case 306:
					return 9158;
				
				case 307:
					return 9639;
				
				case 308:
					return 9646;
				
				case 309:
					return 9653;
				
				case 310:
					return 9660;
				
				case 311:
					return 9667;
				
				case 312:
					return 9674;
				
				case 313:
					return 9681;
				
				case 314:
					return 9688;
				
				case 315:
					return 9695;
				
				case 316:
					return 9702;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 23:
					return 1864;
				
				case 24:
					return 1870;
				
				case 25:
					return 1876;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 36:
					return 2241;
				
				case 37:
					return 2247;
				
				case 38:
					return 2253;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 49:
					return 2904;
				
				case 50:
					return 2910;
				
				case 51:
					return 2916;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 62:
					return 3028;
				
				case 63:
					return 3034;
				
				case 64:
					return 3040;
				
				case 65:
					return 3241;
				
				case 66:
					return 3249;
				
				case 67:
					return 3257;
				
				case 68:
					return 3265;
				
				case 69:
					return 3273;
				
				case 70:
					return 3281;
				
				case 71:
					return 3289;
				
				case 72:
					return 3297;
				
				case 73:
					return 3305;
				
				case 74:
					return 3313;
				
				case 75:
					return 3321;
				
				case 76:
					return 3329;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case joaat("mpsv_lp0_31"):
					return 3353;
				
				case 80:
					return 3361;
				
				case 81:
					return 3369;
				
				case 82:
					return 3377;
				
				case 83:
					return 3385;
				
				case 84:
					return 3393;
				
				case 85:
					return 3401;
				
				case 86:
					return 3408;
				
				case 87:
					return 3415;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				
				case 89:
					return 4045;
				
				case 90:
					return 4053;
				
				case 91:
					return 4061;
				
				case 92:
					return 4069;
				
				case 93:
					return 4077;
				
				case 94:
					return 4085;
				
				case 95:
					return 4093;
				
				case 96:
					return 4101;
				
				case 97:
					return 4109;
				
				case 98:
					return 4117;
				
				case 99:
					return 4125;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4149;
				
				case 103:
					return 4157;
				
				case 104:
					return 4165;
				
				case 105:
					return 4173;
				
				case 106:
					return 4181;
				
				case 107:
					return 4189;
				
				case 108:
					return 4197;
				
				case 109:
					return 4205;
				
				case 110:
					return 4213;
				
				case 111:
					return 4221;
				
				case 112:
					return 4229;
				
				case 113:
					return 4237;
				
				case 114:
					return 4245;
				
				case 115:
					return 4253;
				
				case 116:
					return 4261;
				
				case 117:
					return 4269;
				
				case 118:
					return 4277;
				
				case 119:
					return 4285;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4309;
				
				case 123:
					return 4317;
				
				case 124:
					return 4325;
				
				case 125:
					return 4333;
				
				case 126:
					return 4341;
				
				case 127:
					return 4349;
				
				case 128:
					return 4357;
				
				case 129:
					return 4365;
				
				case 130:
					return 4373;
				
				case 131:
					return 4381;
				
				case 132:
					return 4389;
				
				case 133:
					return 4397;
				
				case 134:
					return 4405;
				
				case 135:
					return 4413;
				
				case 136:
					return 4421;
				
				case 137:
					return 4429;
				
				case 138:
					return 4437;
				
				case 139:
					return 4445;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4469;
				
				case 143:
					return 4477;
				
				case 144:
					return 4485;
				
				case 145:
					return 4493;
				
				case 146:
					return 4501;
				
				case 147:
					return 4509;
				
				case 148:
					return 4517;
				
				case 149:
					return 4525;
				
				case 150:
					return 4533;
				
				case 151:
					return 4541;
				
				case 152:
					return 4549;
				
				case 153:
					return 4557;
				
				case 154:
					return 4565;
				
				case 155:
					return 4573;
				
				case 156:
					return 4581;
				
				case 157:
					return 4589;
				
				case 158:
					return 5482;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8989;
				
				case 282:
					return 8996;
				
				case 283:
					return 9003;
				
				case 284:
					return 9010;
				
				case 285:
					return 9017;
				
				case 286:
					return 9024;
				
				case 287:
					return 9031;
				
				case 288:
					return 9038;
				
				case 289:
					return 9045;
				
				case 290:
					return 9052;
				
				case 291:
					return 9059;
				
				case 292:
					return 9065;
				
				case 293:
					return 9071;
				
				case 294:
					return 9077;
				
				case 295:
					return 9084;
				
				case 296:
					return 9091;
				
				case 297:
					return 9098;
				
				case 298:
					return 9105;
				
				case 299:
					return 9112;
				
				case 300:
					return 9119;
				
				case 301:
					return 9126;
				
				case 302:
					return 9133;
				
				case 303:
					return 9140;
				
				case 304:
					return 9147;
				
				case 305:
					return 9153;
				
				case 306:
					return 9159;
				
				case 307:
					return 9640;
				
				case 308:
					return 9647;
				
				case 309:
					return 9654;
				
				case 310:
					return 9661;
				
				case 311:
					return 9668;
				
				case 312:
					return 9675;
				
				case 313:
					return 9682;
				
				case 314:
					return 9689;
				
				case 315:
					return 9696;
				
				case 316:
					return 9703;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1636;
				
				case 1:
					return 1643;
				
				case 2:
					return 1650;
				
				case 3:
					return 1657;
				
				case 4:
					return 1664;
				
				case 5:
					return 1671;
				
				case 6:
					return 1678;
				
				case 7:
					return 1685;
				
				case 8:
					return 1692;
				
				case 9:
					return 1699;
				
				case 13:
					return 1724;
				
				case 14:
					return 1803;
				
				case 15:
					return 1810;
				
				case 16:
					return 1817;
				
				case 17:
					return 1824;
				
				case 18:
					return 1831;
				
				case 19:
					return 1838;
				
				case 20:
					return 1845;
				
				case 21:
					return 1852;
				
				case 22:
					return 1859;
				
				case 26:
					return 2173;
				
				case 27:
					return 2180;
				
				case 28:
					return 2187;
				
				case 29:
					return 2194;
				
				case 30:
					return 2201;
				
				case 31:
					return 2208;
				
				case 32:
					return 2215;
				
				case 33:
					return 2222;
				
				case 34:
					return 2229;
				
				case 35:
					return 2236;
				
				case 39:
					return 2836;
				
				case 40:
					return 2843;
				
				case 41:
					return 2850;
				
				case 42:
					return 2857;
				
				case 43:
					return 2864;
				
				case 44:
					return 2871;
				
				case 45:
					return 2878;
				
				case 46:
					return 2885;
				
				case 47:
					return 2892;
				
				case 48:
					return 2899;
				
				case 52:
					return 2960;
				
				case 53:
					return 2967;
				
				case 54:
					return 2974;
				
				case 55:
					return 2981;
				
				case 56:
					return 2988;
				
				case 57:
					return 2995;
				
				case 58:
					return 3002;
				
				case 59:
					return 3009;
				
				case 60:
					return 3016;
				
				case 61:
					return 3023;
				
				case 65:
					return 3244;
				
				case 66:
					return 3252;
				
				case 67:
					return 3260;
				
				case 68:
					return 3268;
				
				case 69:
					return 3276;
				
				case 70:
					return 3284;
				
				case 71:
					return 3292;
				
				case 72:
					return 3300;
				
				case 73:
					return 3308;
				
				case 74:
					return 3316;
				
				case 75:
					return 3324;
				
				case 76:
					return 3332;
				
				case 77:
					return 3340;
				
				case 78:
					return 3348;
				
				case joaat("mpsv_lp0_31"):
					return 3356;
				
				case 80:
					return 3364;
				
				case 81:
					return 3372;
				
				case 82:
					return 3380;
				
				case 83:
					return 3388;
				
				case 84:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4040;
				
				case 89:
					return 4048;
				
				case 90:
					return 4056;
				
				case 91:
					return 4064;
				
				case 92:
					return 4072;
				
				case 93:
					return 4080;
				
				case 94:
					return 4088;
				
				case 95:
					return 4096;
				
				case 96:
					return 4104;
				
				case 97:
					return 4112;
				
				case 98:
					return 4120;
				
				case 99:
					return 4128;
				
				case 100:
					return 4136;
				
				case 101:
					return 4144;
				
				case 102:
					return 4152;
				
				case 103:
					return 4160;
				
				case 104:
					return 4168;
				
				case 105:
					return 4176;
				
				case 106:
					return 4184;
				
				case 107:
					return 4192;
				
				case 108:
					return 4200;
				
				case 109:
					return 4208;
				
				case 110:
					return 4216;
				
				case 111:
					return 4224;
				
				case 112:
					return 4232;
				
				case 113:
					return 4240;
				
				case 114:
					return 4248;
				
				case 115:
					return 4256;
				
				case 116:
					return 4264;
				
				case 117:
					return 4272;
				
				case 118:
					return 4280;
				
				case 119:
					return 4288;
				
				case 120:
					return 4296;
				
				case 121:
					return 4304;
				
				case 122:
					return 4312;
				
				case 123:
					return 4320;
				
				case 124:
					return 4328;
				
				case 125:
					return 4336;
				
				case 126:
					return 4344;
				
				case 127:
					return 4352;
				
				case 128:
					return 4360;
				
				case 129:
					return 4368;
				
				case 130:
					return 4376;
				
				case 131:
					return 4384;
				
				case 132:
					return 4392;
				
				case 133:
					return 4400;
				
				case 134:
					return 4408;
				
				case 135:
					return 4416;
				
				case 136:
					return 4424;
				
				case 137:
					return 4432;
				
				case 138:
					return 4440;
				
				case 139:
					return 4448;
				
				case 140:
					return 4456;
				
				case 141:
					return 4464;
				
				case 142:
					return 4472;
				
				case 143:
					return 4480;
				
				case 144:
					return 4488;
				
				case 145:
					return 4496;
				
				case 146:
					return 4504;
				
				case 147:
					return 4512;
				
				case 148:
					return 4520;
				
				case 149:
					return 4528;
				
				case 150:
					return 4536;
				
				case 151:
					return 4544;
				
				case 152:
					return 4552;
				
				case 153:
					return 4560;
				
				case 154:
					return 4568;
				
				case 155:
					return 4576;
				
				case 156:
					return 4584;
				
				case 157:
					return 4592;
				
				case 158:
					return 5485;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5933;
				
				case 160:
					return 5940;
				
				case 161:
					return 5947;
				
				case 162:
					return 5954;
				
				case 163:
					return 5961;
				
				case 164:
					return 5968;
				
				case 165:
					return 5975;
				
				case 166:
					return 5982;
				
				case 167:
					return 5989;
				
				case 168:
					return 5996;
				
				case 169:
					return 6003;
				
				case 170:
					return 6010;
				
				case 171:
					return 6017;
				
				case 172:
					return 6024;
				
				case 173:
					return 6031;
				
				case 174:
					return 6038;
				
				case 175:
					return 6045;
				
				case 176:
					return 6052;
				
				case 177:
					return 6059;
				
				case 178:
					return 6066;
				
				case 179:
					return 6073;
				
				case 180:
					return 6080;
				
				case 181:
					return 6087;
				
				case 182:
					return 6094;
				
				case 183:
					return 6101;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6178;
				
				case 185:
					return 6185;
				
				case 186:
					return 6192;
				
				case 187:
					return 6199;
				
				case 188:
					return 6206;
				
				case 189:
					return 6213;
				
				case 190:
					return 6220;
				
				case 191:
					return 6227;
				
				case 192:
					return 6234;
				
				case 193:
					return 6241;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6575;
				
				case 195:
					return 6582;
				
				case 196:
					return 6589;
				
				case 197:
					return 6596;
				
				case 198:
					return 6603;
				
				case 199:
					return 6610;
				
				case 200:
					return 6617;
				
				case 201:
					return 6624;
				
				case 202:
					return 6631;
				
				case 203:
					return 6638;
				
				case 204:
					return 6645;
				
				case 205:
					return 6652;
				
				case 206:
					return 6659;
				
				case 207:
					return 6666;
				
				case 208:
					return 6673;
				
				case 209:
					return 6680;
				
				case 210:
					return 6687;
				
				case 211:
					return 6694;
				
				case 212:
					return 6701;
				
				case 213:
					return 6708;
				
				case 214:
					return 6715;
				
				case 215:
					return 6722;
				
				case 216:
					return 6729;
				
				case 217:
					return 6736;
				
				case 218:
					return 6743;
				
				case 219:
					return 6750;
				
				case 220:
					return 6757;
				
				case 221:
					return 6764;
				
				case 222:
					return 6771;
				
				case 223:
					return 6778;
				
				case 224:
					return 6785;
				
				case 225:
					return 6792;
				
				case 226:
					return 6799;
				
				case 227:
					return 6806;
				
				case 228:
					return 6813;
				
				case 229:
					return 6820;
				
				case 230:
					return 6827;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7297;
				
				case 232:
					return 7304;
				
				case 233:
					return 7311;
				
				case 234:
					return 7318;
				
				case 235:
					return 7325;
				
				case 236:
					return 7332;
				
				case 237:
					return 7339;
				
				case 238:
					return 7346;
				
				case 239:
					return 7353;
				
				case 240:
					return 7360;
				
				case 241:
					return 7367;
				
				case 242:
					return 7374;
				
				case 243:
					return 7381;
				
				case 244:
					return 7388;
				
				case 245:
					return 7395;
				
				case 246:
					return 7402;
				
				case 247:
					return 7409;
				
				case 248:
					return 7416;
				
				case 249:
					return 7423;
				
				case 250:
					return 7430;
				
				case 251:
					return 7437;
				
				case 252:
					return 7444;
				
				case 253:
					return 7451;
				
				case 254:
					return 7458;
				
				case 255:
					return 7465;
				
				case 256:
					return 7472;
				
				case 257:
					return 7479;
				
				case 258:
					return 7486;
				
				case 259:
					return 7493;
				
				case 260:
					return 7500;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8020;
				
				case 262:
					return 8027;
				
				case 263:
					return 8034;
				
				case 264:
					return 8041;
				
				case 265:
					return 8048;
				
				case 266:
					return 8055;
				
				case 267:
					return 8062;
				
				case 268:
					return 8069;
				
				case 269:
					return 8076;
				
				case 270:
					return 8083;
				
				case 271:
					return 8544;
				
				case 272:
					return 8551;
				
				case 273:
					return 8558;
				
				case 274:
					return 8565;
				
				case 275:
					return 8572;
				
				case 276:
					return 8579;
				
				case 277:
					return 8586;
				
				case 278:
					return 8593;
				
				case 279:
					return 8600;
				
				case 280:
					return 8607;
				
				case 281:
					return 8991;
				
				case 282:
					return 8998;
				
				case 283:
					return 9005;
				
				case 284:
					return 9012;
				
				case 285:
					return 9019;
				
				case 286:
					return 9026;
				
				case 287:
					return 9033;
				
				case 288:
					return 9040;
				
				case 289:
					return 9047;
				
				case 290:
					return 9054;
				
				case 294:
					return 9079;
				
				case 295:
					return 9086;
				
				case 296:
					return 9093;
				
				case 297:
					return 9100;
				
				case 298:
					return 9107;
				
				case 299:
					return 9114;
				
				case 300:
					return 9121;
				
				case 301:
					return 9128;
				
				case 302:
					return 9135;
				
				case 303:
					return 9142;
				
				case 307:
					return 9642;
				
				case 308:
					return 9649;
				
				case 309:
					return 9656;
				
				case 310:
					return 9663;
				
				case 311:
					return 9670;
				
				case 312:
					return 9677;
				
				case 313:
					return 9684;
				
				case 314:
					return 9691;
				
				case 315:
					return 9698;
				
				case 316:
					return 9705;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 10:
					return 1705;
				
				case 11:
					return 1711;
				
				case 12:
					return 1717;
				
				case 13:
					return 1723;
				
				case 14:
					return 1802;
				
				case 15:
					return 1809;
				
				case 16:
					return 1816;
				
				case 17:
					return 1823;
				
				case 18:
					return 1830;
				
				case 19:
					return 1837;
				
				case 20:
					return 1844;
				
				case 21:
					return 1851;
				
				case 22:
					return 1858;
				
				case 23:
					return 1865;
				
				case 24:
					return 1871;
				
				case 25:
					return 1877;
				
				case 26:
					return 2172;
				
				case 27:
					return 2179;
				
				case 28:
					return 2186;
				
				case 29:
					return 2193;
				
				case 30:
					return 2200;
				
				case 31:
					return 2207;
				
				case 32:
					return 2214;
				
				case 33:
					return 2221;
				
				case 34:
					return 2228;
				
				case 35:
					return 2235;
				
				case 36:
					return 2242;
				
				case 37:
					return 2248;
				
				case 38:
					return 2254;
				
				case 39:
					return 2835;
				
				case 40:
					return 2842;
				
				case 41:
					return 2849;
				
				case 42:
					return 2856;
				
				case 43:
					return 2863;
				
				case 44:
					return 2870;
				
				case 45:
					return 2877;
				
				case 46:
					return 2884;
				
				case 47:
					return 2891;
				
				case 48:
					return 2898;
				
				case 49:
					return 2905;
				
				case 50:
					return 2911;
				
				case 51:
					return 2917;
				
				case 52:
					return 2959;
				
				case 53:
					return 2966;
				
				case 54:
					return 2973;
				
				case 55:
					return 2980;
				
				case 56:
					return 2987;
				
				case 57:
					return 2994;
				
				case 58:
					return 3001;
				
				case 59:
					return 3008;
				
				case 60:
					return 3015;
				
				case 61:
					return 3022;
				
				case 62:
					return 3029;
				
				case 63:
					return 3035;
				
				case 64:
					return 3041;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3339;
				
				case 78:
					return 3347;
				
				case joaat("mpsv_lp0_31"):
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				case 85:
					return 3402;
				
				case 86:
					return 3409;
				
				case 87:
					return 3416;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4135;
				
				case 101:
					return 4143;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4295;
				
				case 121:
					return 4303;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4455;
				
				case 141:
					return 4463;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				
				case 160:
					return 5939;
				
				case 161:
					return 5946;
				
				case 162:
					return 5953;
				
				case 163:
					return 5960;
				
				case 164:
					return 5967;
				
				case 165:
					return 5974;
				
				case 166:
					return 5981;
				
				case 167:
					return 5988;
				
				case 168:
					return 5995;
				
				case 169:
					return 6002;
				
				case 170:
					return 6009;
				
				case 171:
					return 6016;
				
				case 172:
					return 6023;
				
				case 173:
					return 6030;
				
				case 174:
					return 6037;
				
				case 175:
					return 6044;
				
				case 176:
					return 6051;
				
				case 177:
					return 6058;
				
				case 178:
					return 6065;
				
				case 179:
					return 6072;
				
				case 180:
					return 6079;
				
				case 181:
					return 6086;
				
				case 182:
					return 6093;
				
				case 183:
					return 6100;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				
				case 185:
					return 6184;
				
				case 186:
					return 6191;
				
				case 187:
					return 6198;
				
				case 188:
					return 6205;
				
				case 189:
					return 6212;
				
				case 190:
					return 6219;
				
				case 191:
					return 6226;
				
				case 192:
					return 6233;
				
				case 193:
					return 6240;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				
				case 195:
					return 6581;
				
				case 196:
					return 6588;
				
				case 197:
					return 6595;
				
				case 198:
					return 6602;
				
				case 199:
					return 6609;
				
				case 200:
					return 6616;
				
				case 201:
					return 6623;
				
				case 202:
					return 6630;
				
				case 203:
					return 6637;
				
				case 204:
					return 6644;
				
				case 205:
					return 6651;
				
				case 206:
					return 6658;
				
				case 207:
					return 6665;
				
				case 208:
					return 6672;
				
				case 209:
					return 6679;
				
				case 210:
					return 6686;
				
				case 211:
					return 6693;
				
				case 212:
					return 6700;
				
				case 213:
					return 6707;
				
				case 214:
					return 6714;
				
				case 215:
					return 6721;
				
				case 216:
					return 6728;
				
				case 217:
					return 6735;
				
				case 218:
					return 6742;
				
				case 219:
					return 6749;
				
				case 220:
					return 6756;
				
				case 221:
					return 6763;
				
				case 222:
					return 6770;
				
				case 223:
					return 6777;
				
				case 224:
					return 6784;
				
				case 225:
					return 6791;
				
				case 226:
					return 6798;
				
				case 227:
					return 6805;
				
				case 228:
					return 6812;
				
				case 229:
					return 6819;
				
				case 230:
					return 6826;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				
				case 232:
					return 7303;
				
				case 233:
					return 7310;
				
				case 234:
					return 7317;
				
				case 235:
					return 7324;
				
				case 236:
					return 7331;
				
				case 237:
					return 7338;
				
				case 238:
					return 7345;
				
				case 239:
					return 7352;
				
				case 240:
					return 7359;
				
				case 241:
					return 7366;
				
				case 242:
					return 7373;
				
				case 243:
					return 7380;
				
				case 244:
					return 7387;
				
				case 245:
					return 7394;
				
				case 246:
					return 7401;
				
				case 247:
					return 7408;
				
				case 248:
					return 7415;
				
				case 249:
					return 7422;
				
				case 250:
					return 7429;
				
				case 251:
					return 7436;
				
				case 252:
					return 7443;
				
				case 253:
					return 7450;
				
				case 254:
					return 7457;
				
				case 255:
					return 7464;
				
				case 256:
					return 7471;
				
				case 257:
					return 7478;
				
				case 258:
					return 7485;
				
				case 259:
					return 7492;
				
				case 260:
					return 7499;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				
				case 262:
					return 8026;
				
				case 263:
					return 8033;
				
				case 264:
					return 8040;
				
				case 265:
					return 8047;
				
				case 266:
					return 8054;
				
				case 267:
					return 8061;
				
				case 268:
					return 8068;
				
				case 269:
					return 8075;
				
				case 270:
					return 8082;
				
				case 271:
					return 8543;
				
				case 272:
					return 8550;
				
				case 273:
					return 8557;
				
				case 274:
					return 8564;
				
				case 275:
					return 8571;
				
				case 276:
					return 8578;
				
				case 277:
					return 8585;
				
				case 278:
					return 8592;
				
				case 279:
					return 8599;
				
				case 280:
					return 8606;
				
				case 281:
					return 8990;
				
				case 282:
					return 8997;
				
				case 283:
					return 9004;
				
				case 284:
					return 9011;
				
				case 285:
					return 9018;
				
				case 286:
					return 9025;
				
				case 287:
					return 9032;
				
				case 288:
					return 9039;
				
				case 289:
					return 9046;
				
				case 290:
					return 9053;
				
				case 291:
					return 9060;
				
				case 292:
					return 9066;
				
				case 293:
					return 9072;
				
				case 294:
					return 9078;
				
				case 295:
					return 9085;
				
				case 296:
					return 9092;
				
				case 297:
					return 9099;
				
				case 298:
					return 9106;
				
				case 299:
					return 9113;
				
				case 300:
					return 9120;
				
				case 301:
					return 9127;
				
				case 302:
					return 9134;
				
				case 303:
					return 9141;
				
				case 304:
					return 9148;
				
				case 305:
					return 9154;
				
				case 306:
					return 9160;
				
				case 307:
					return 9641;
				
				case 308:
					return 9648;
				
				case 309:
					return 9655;
				
				case 310:
					return 9662;
				
				case 311:
					return 9669;
				
				case 312:
					return 9676;
				
				case 313:
					return 9683;
				
				case 314:
					return 9690;
				
				case 315:
					return 9697;
				
				case 316:
					return 9704;
				
				default:
			}
			break;
	}
	return 1630;
}

int func_640(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 317)
	{
		iVar0 = 0;
		while (iVar0 < 26)
		{
			if (iParam0 >= func_652(iVar0) && iParam0 < func_641(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_641(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_650(iParam0);
		return func_649(iVar0);
	}
	return (func_642(iParam0, -1, 1) * iParam0 + 1);
}

int func_642(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_645(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_644(iParam1))
			{
				return 0;
			}
			else if (func_643(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 <= 127 && iParam1 > 0)
			{
				if (Global_1049961[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
	}
	return 0;
}

int func_643(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_644(int iParam0)
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

int func_645(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_646(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_646(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_646(int iParam0, bool bParam1)
{
	if (Global_1590744 != func_29())
	{
		if (!func_648(Global_1590744))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590744)
			{
				if (MISC::IS_BIT_SET(Global_2426865[Global_1590744 /*449*/].f_199, 24) || func_647(Global_1590744))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_199, 24);
}

int func_647(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_199, 9);
	}
	return 0;
}

int func_648(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 2);
	}
	return 0;
}

int func_649(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_650(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

void func_651(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10335)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1678528[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_652(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
		
		case 25:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_650(iParam0);
		return func_653(iVar0);
	}
	return (func_642(iParam0, -1, 1) * iParam0);
}

int func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

int func_654(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_655(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_651(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_144(func_639(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_657(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_341 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_658()
{
	return func_144(6544, -1, 0) != 0;
}

bool func_659()
{
	return func_144(6165, -1, 0) != 0;
}

bool func_660()
{
	return func_144(5382, -1, 0) != 0;
}

bool func_661()
{
	return func_144(3830, -1, 0) != 0;
}

bool func_662()
{
	return func_144(3225, -1, 0) != 0;
}

bool func_663()
{
	return func_144(5381, -1, 0) != 0;
}

int func_664()
{
	int iVar0;
	
	iVar0 = func_179();
	if (iVar0 != func_29())
	{
		return Global_1630816[iVar0 /*597*/].f_11.f_99;
	}
	return 0;
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		
		default:
	}
	return 0;
}

var func_666(bool bParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (func_681(4, 0))
		{
			MISC::SET_BIT(&uVar0, 0);
		}
		if (func_681(5, 0))
		{
			MISC::SET_BIT(&uVar0, 1);
		}
		if (func_681(6, 1))
		{
			MISC::SET_BIT(&uVar0, 2);
		}
		if (func_681(1, 0))
		{
			MISC::SET_BIT(&uVar0, 3);
		}
		if (func_681(2, 0))
		{
			MISC::SET_BIT(&uVar0, 4);
		}
		if (func_681(3, 0))
		{
			MISC::SET_BIT(&uVar0, 5);
		}
		if ((((func_680(61) || func_680(62)) || func_680(63)) || func_680(64)) || func_680(65))
		{
			MISC::SET_BIT(&uVar0, 6);
		}
		if (func_357(iVar1))
		{
			MISC::SET_BIT(&uVar0, 7);
		}
		if (func_678(iVar1, 0))
		{
			MISC::SET_BIT(&uVar0, 8);
		}
		if (func_678(iVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 9);
		}
		if (func_678(iVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 10);
		}
		if (func_148(iVar1))
		{
			MISC::SET_BIT(&uVar0, 11);
		}
		if (func_674(iVar1, 3))
		{
			MISC::SET_BIT(&uVar0, 12);
		}
		if (func_674(iVar1, 4))
		{
			MISC::SET_BIT(&uVar0, 13);
		}
		if (func_674(iVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 14);
		}
		if (func_674(iVar1, 6))
		{
			MISC::SET_BIT(&uVar0, 15);
		}
		if (func_674(iVar1, 5))
		{
			MISC::SET_BIT(&uVar0, 16);
		}
		if (func_672(iVar1))
		{
			MISC::SET_BIT(&uVar0, 17);
		}
		if (func_674(iVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 18);
		}
		if (func_723(iVar1))
		{
			MISC::SET_BIT(&uVar0, 19);
		}
		if (func_717(iVar1))
		{
			MISC::SET_BIT(&uVar0, 20);
		}
		if (func_657(iVar1))
		{
			MISC::SET_BIT(&uVar0, 21);
		}
		if (func_731(iVar1))
		{
			MISC::SET_BIT(&uVar0, 22);
		}
		if (func_687(iVar1))
		{
			MISC::SET_BIT(&uVar0, 23);
		}
		if (func_671(iVar1))
		{
			MISC::SET_BIT(&uVar0, 24);
		}
		if (func_670(iVar1))
		{
			MISC::SET_BIT(&uVar0, 25);
		}
		if (func_634(iVar1))
		{
			MISC::SET_BIT(&uVar0, 26);
		}
		if (func_669(iVar1))
		{
			MISC::SET_BIT(&uVar0, 27);
		}
		if (func_697(iVar1))
		{
			MISC::SET_BIT(&uVar0, 28);
		}
		if (func_668(iVar1))
		{
			MISC::SET_BIT(&uVar0, 29);
		}
		if (func_667(iVar1))
		{
			MISC::SET_BIT(&uVar0, 30);
		}
	}
	return uVar0;
}

bool func_667(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_267.f_452 != 0;
}

bool func_668(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_445, 0);
}

int func_669(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_272, 1);
	}
	return 0;
}

bool func_670(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_270;
}

int func_671(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_395 != 0;
	}
	return 0;
}

bool func_672(int iParam0)
{
	return func_673(iParam0) != 0;
}

int func_673(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_136;
}

int func_674(int iParam0, int iParam1)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return func_677(iParam0);
		
		case 2:
			return func_676(iParam0, 4);
		
		case 3:
			return func_676(iParam0, 3);
		
		case 4:
			return func_676(iParam0, 1);
		
		case 5:
			return func_676(iParam0, 0);
		
		case 6:
			return func_676(iParam0, 2);
		
		case 0:
			if (func_723(iParam0) || func_675(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_675(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_676(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
		{
			iVar1 = Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/];
			if (func_173(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_677(int iParam0)
{
	return func_159(iParam0) != 0;
}

int func_678(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/] != 0)
		{
			if (func_679(Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/]) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_679(int iParam0)
{
	if (func_345(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_680(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_681(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 < 1 || iParam0 > 10)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 127)
	{
		if (func_683(iVar0) == iParam0 && (!func_682(iVar0) || !bParam1))
		{
			if (func_680(iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		
		default:
	}
	return 0;
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
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
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_684(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_49();
	}
	if (iParam0 == 7 && !Global_262145.f_17163)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_650(iParam0);
		if (iVar1 == 0 && func_144(5395, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_686(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_731(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_685(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1390533[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2595490[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 26)
		{
			return 0;
		}
		return Global_2595335[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_685(int iParam0)
{
	return func_144(9516, iParam0, 0) != 0;
}

bool func_686(int iParam0)
{
	if (!Global_262145.f_23851)
	{
		return 0;
	}
	return func_144(7209, iParam0, 0) != 0;
}

int func_687(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_371 != 0;
	}
	return 0;
}

int func_688()
{
	if (Global_1681722.f_3 != 0)
	{
		return Global_1681722.f_3;
	}
	return -1;
}

int func_689()
{
	if (Global_1681722.f_2 != 0)
	{
		return Global_1681722.f_2;
	}
	return -1;
}

int func_690(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_336, 12);
	}
	return 0;
}

int func_691(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_336, 10);
	}
	return 0;
}

int func_692(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_336, 11);
	}
	return 0;
}

bool func_693(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 4);
}

bool func_694(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 3);
}

bool func_695(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 2);
}

bool func_696(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 1);
}

int func_697(int iParam0)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_127840.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 31);
	}
	return 0;
}

int func_698(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_29() || !func_713(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_708(iParam0, iParam2);
		
		case 1:
			return func_706(iParam0, iParam2);
		
		case 3:
			return func_705(iParam0);
		
		case 2:
			return func_700(iParam0, iParam2);
		
		case 4:
			return func_699(iParam0);
		
		default:
	}
	return 0;
}

bool func_699(int iParam0)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_127840.f_14, 6);
	}
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 6);
}

int func_700(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_704(iParam0);
		
		case 11:
			return func_703(iParam0);
		
		case 12:
			return func_702(iParam0);
		
		case 13:
			return func_701(iParam0);
		
		default:
	}
	return 0;
}

bool func_701(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 15);
}

bool func_702(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 14);
}

bool func_703(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 13);
}

bool func_704(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 12);
}

bool func_705(int iParam0)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_127840.f_14, 11);
	}
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 5);
}

int func_706(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_707(iParam0);
		
		case 6:
			return func_696(iParam0);
		
		case 7:
			return func_695(iParam0);
		
		case 8:
			return func_694(iParam0);
		
		case 9:
			return func_693(iParam0);
		
		default:
	}
	return 0;
}

bool func_707(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 0);
}

int func_708(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_712(iParam0);
		
		case 1:
			return func_711(iParam0);
		
		case 2:
			return func_710(iParam0);
		
		case 3:
			return func_709(iParam0);
		
		case 4:
			return func_697(iParam0);
		
		default:
	}
	return 0;
}

bool func_709(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 10);
}

bool func_710(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 9);
}

bool func_711(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 8);
}

bool func_712(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 7);
}

bool func_713(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_714(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_698(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_698(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_698(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_698(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_715(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_205.f_6;
}

bool func_716()
{
	return func_144(6158, -1, 0) != 0;
}

int func_717(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_273 != 0;
	}
	return 0;
}

bool func_718()
{
	return func_144(6166, -1, 0) == 3;
}

bool func_719()
{
	return func_144(6166, -1, 0) == 2;
}

bool func_720()
{
	return func_144(6166, -1, 0) == 1;
}

int func_721()
{
	int iVar0;
	
	if (func_147())
	{
		return 4;
	}
	else if (func_160())
	{
		if (func_357(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_103(1))
	{
		iVar0 = func_722(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_177(1))
	{
		if (func_357(func_179()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_722(int iParam0)
{
	if (func_286(iParam0, 1))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_426;
	}
	return -1;
}

int func_723(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_266 != 0;
	}
	return 0;
}

int func_724(int iParam0, int iParam1)
{
	return func_144(func_725(iParam1), iParam0, 0);
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3900;
		
		case 1:
			return 3929;
		
		case 2:
			return 3933;
		
		case 3:
			return 3937;
		
		case 4:
			return 3941;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3900;
}

int func_726(int iParam0)
{
	if (func_67(iParam0) == 225 || func_67(iParam0) == 226)
	{
		return func_132(iParam0);
	}
	return -1;
}

int func_727(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_321(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_728()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_331(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_730(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_731(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_324 != 0;
	}
	return 0;
}

int func_732(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_733(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[0];
}

void func_734(int iParam0)
{
	MISC::SET_BIT(&iLocal_838, iParam0);
}

char* func_735()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_266(PLAYER::PLAYER_ID());
	if (iVar0 != func_29())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_62(iVar0, 28) || func_62(PLAYER::PLAYER_ID(), 28)) || func_569(iVar0)) && !func_568(iVar0))
			{
				return func_570(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_570(iVar0, 0);
			}
		}
		sVar1 = func_572(&(Global_1630816[iVar0 /*597*/].f_11.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_570(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_736(int iParam0)
{
	int iVar0;
	
	iVar0 = func_265(iParam0);
	if (iVar0 != -1)
	{
		return func_263(iVar0);
	}
	return 1;
}

void func_737(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 != iParam0)
	{
		func_757(-1);
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 = iParam0;
		if (func_30() != -1)
		{
			func_756(-1);
		}
		if (func_755() != -1)
		{
			func_754(-1);
		}
		func_753(iParam2);
		func_751(iParam0);
		if (!func_750(iParam0))
		{
			fVar0 = func_749(iParam0);
			if (fVar0 != 1f)
			{
				func_748(fVar0);
				MISC::SET_BIT(&(Global_1681713.f_3), 1);
			}
		}
		if (!func_747(iParam0) || iParam3)
		{
			if (func_746(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1681713.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_85())
		{
			func_123(27);
		}
		if (bParam1)
		{
			if (!func_803())
			{
				func_744(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2544210.f_4622, 1) || MISC::IS_BIT_SET(Global_2544210.f_4622, 4)) || MISC::IS_BIT_SET(Global_2544210.f_4622, 0))
			{
				func_240(6);
			}
			func_743();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_121(PLAYER::PLAYER_ID()) && func_118(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_1), 8);
		}
		func_739();
		if (func_738(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1681713.f_3), 6);
		}
		Global_2544210.f_6682 = 0;
	}
}

int func_738(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_739()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_742();
	iVar2 = func_266(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_284(iVar1, iVar2, 1) || func_740(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, iVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_740(int iParam0, int iParam1)
{
	if (func_286(iParam0, 1) && func_286(iParam1, 1))
	{
		return (func_741(iParam0) == func_266(iParam1) || func_741(iParam1) == func_266(iParam0));
	}
	return 0;
}

int func_741(int iParam0)
{
	if (func_286(iParam0, 1))
	{
		return Global_1630816[func_266(iParam0) /*597*/].f_11.f_459;
	}
	return func_29();
}

int func_742()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179();
	if (iVar0 != func_29())
	{
		if (func_1038(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1630816[iVar1 /*597*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_743()
{
	if (MISC::IS_BIT_SET(Global_2544210.f_4622, 1))
	{
		MISC::CLEAR_BIT(&(Global_2544210.f_4622), 1);
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_4622, 4))
	{
		MISC::CLEAR_BIT(&(Global_2544210.f_4622), 4);
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_4622, 6))
	{
		MISC::CLEAR_BIT(&(Global_2544210.f_4622), 6);
	}
	MISC::CLEAR_BIT(&(Global_2544210.f_4622), 0);
	MISC::CLEAR_BIT(&(Global_2544210.f_4622), 2);
	MISC::CLEAR_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873), 17);
	if (Global_2544210.f_4624 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2544210.f_4624);
	}
	Global_2544210.f_4623 = 0;
}

void func_744(int iParam0)
{
	if (func_745() && iParam0)
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

int func_745()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_746(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
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
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_748(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_78())
	{
		return;
	}
	fVar0 = (Global_2544210.f_5186 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2544210.f_5186 = fParam0;
	Global_2544210.f_5187 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

float func_749(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		
		default:
	}
	if (func_356(iParam0) == 0)
	{
		return 0f;
	}
	return 1f;
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_751(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_144(3793, -1, 0);
	iVar1 = func_752(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_142(3793, iVar0, -1, 1, 0);
	}
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_753(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1630816[iVar0 /*597*/].f_11.f_182 != iParam0)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_182 = iParam0;
	}
}

void func_754(int iParam0)
{
	if (Global_2544210.f_5191.f_343 != iParam0)
	{
		Global_2544210.f_5191.f_343 = iParam0;
	}
}

int func_755()
{
	return Global_2544210.f_5191.f_343;
}

void func_756(int iParam0)
{
	if (Global_2544210.f_5191.f_342 != iParam0)
	{
		Global_2544210.f_5191.f_342 = iParam0;
	}
}

void func_757(int iParam0)
{
	Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_32 = iParam0;
}

bool func_758(int iParam0)
{
	return MISC::IS_BIT_SET(iLocal_838, iParam0);
}

int func_759(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_800(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_799(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_799(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_439(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_798(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_797())
	{
		return 0;
	}
	if (func_501())
	{
		return 0;
	}
	if (func_796())
	{
		return 0;
	}
	if (func_495())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_493(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_497())
	{
		return 0;
	}
	if (func_799(PLAYER::PLAYER_ID(), 0) || func_799(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_799(PLAYER::PLAYER_ID(), 12) || func_799(PLAYER::PLAYER_ID(), 14)) || func_799(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_793(PLAYER::PLAYER_ID(), 0, -1))
	{
		if (!func_771())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_770())
		{
			return 0;
		}
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (func_769(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_768())
	{
		return 0;
	}
	if (func_767(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_766(PLAYER::PLAYER_ID()) && func_765(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_764())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (func_763(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_64(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_61(PLAYER::PLAYER_ID()))
	{
		if (func_762(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_760())
	{
		return 0;
	}
	return 1;
}

bool func_760()
{
	return func_761() == 1;
}

int func_761()
{
	return Global_1710155;
}

int func_762(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627455[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_763(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_270.f_4 != 0 || Global_2426865[iParam0 /*449*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_764()
{
	return Global_1683970.f_4477 != -1;
}

int func_765(int iParam0)
{
	if (iParam0 != func_29() && func_1038(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_766(int iParam0)
{
	if (iParam0 != func_29() && func_1038(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_767(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 11))
	{
		return 1;
	}
	return 0;
}

int func_768()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_769(int iParam0)
{
	if (!func_1038(iParam0, 0, 1))
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873, 2);
}

bool func_770()
{
	return Global_99422.f_364 > 0;
}

int func_771()
{
	int iVar0;
	
	iVar0 = func_67(PLAYER::PLAYER_ID());
	if (((func_644(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_29) || func_792(PLAYER::PLAYER_ID())) || func_791(PLAYER::PLAYER_ID())) || func_790(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_789(PLAYER::PLAYER_ID()))
	{
		if (func_146(iVar0) || func_729(iVar0))
		{
			return 1;
		}
	}
	if (func_114(PLAYER::PLAYER_ID()))
	{
		if (func_729(iVar0))
		{
			return 1;
		}
	}
	if (func_788(PLAYER::PLAYER_ID()))
	{
		if (func_136(iVar0))
		{
			return 1;
		}
	}
	if (func_787(PLAYER::PLAYER_ID()))
	{
		if (func_135(iVar0))
		{
			return 1;
		}
	}
	if (func_786(PLAYER::PLAYER_ID()))
	{
		if (func_134(iVar0))
		{
			return 1;
		}
	}
	if (func_785(PLAYER::PLAYER_ID()))
	{
		if (func_784(iVar0))
		{
			return 1;
		}
	}
	if (func_783(PLAYER::PLAYER_ID(), 0))
	{
		if (func_782(iVar0))
		{
			if (func_780(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_779(PLAYER::PLAYER_ID()))
	{
		if (func_127(iVar0))
		{
			return 1;
		}
		if (func_126(iVar0))
		{
			return 1;
		}
		if (func_778())
		{
			return 1;
		}
	}
	if (func_777(PLAYER::PLAYER_ID()))
	{
		if (func_776())
		{
			return 1;
		}
	}
	if (func_775(PLAYER::PLAYER_ID()))
	{
		if (func_126(iVar0))
		{
			return 1;
		}
	}
	if (func_774(PLAYER::PLAYER_ID()))
	{
		if (func_125(iVar0))
		{
			return 1;
		}
	}
	if (func_773(PLAYER::PLAYER_ID()))
	{
		if (func_772(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_773(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_774(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_775(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_29())
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_776()
{
	return Global_2544210.f_6695;
}

int func_777(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_778()
{
	return Global_2544210.f_6694;
}

int func_779(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_780(int iParam0)
{
	if (func_781(iParam0) != func_29())
	{
		return func_781(iParam0) == func_266(iParam0);
	}
	return 0;
}

int func_781(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_35;
}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_783(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_29())
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_785(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_786(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_787(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_788(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_789(int iParam0)
{
	if (func_643(Global_1590908[iParam0 /*874*/].f_267.f_29, -1))
	{
		return 1;
	}
	return 0;
}

int func_790(int iParam0)
{
	if (func_645(Global_1590908[iParam0 /*874*/].f_267.f_29, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_791(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_792(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_793(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1590908[iParam0 /*874*/].f_267.f_29 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_115(Global_2426865[iParam0 /*449*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_794(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_794(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	if (func_795(iParam0) != -1)
	{
		iVar0 = func_115(func_795(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_286(iParam0, 0))
			{
				return func_266(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_29();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_29();
}

int func_795(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_1038(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_1038(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

bool func_796()
{
	return Global_1312902;
}

bool func_797()
{
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_36.f_18, 0);
}

int func_798(int iParam0)
{
	if (func_492(iParam0, 1, 0))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_799(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

bool func_800(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_11.f_5, iParam1);
}

int func_801(int iParam0)
{
	if (!func_160() && !func_286(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_118(PLAYER::PLAYER_ID()))
		{
			if (func_803())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_802()
{
	return 0;
}

int func_803()
{
	if ((func_62(PLAYER::PLAYER_ID(), 21) || func_62(PLAYER::PLAYER_ID(), 22)) || func_807())
	{
		return 1;
	}
	if (func_804())
	{
		func_123(22);
		return 1;
	}
	return 0;
}

int func_804()
{
	if (func_68(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_85() && !func_806()) || func_799(PLAYER::PLAYER_ID(), 21)) || func_799(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_805(27);
		}
	}
	return 0;
}

void func_805(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_4), iParam0);
}

bool func_806()
{
	return Global_1312436.f_1;
}

bool func_807()
{
	return func_313(390, -1);
}

void func_808(int iParam0, int iParam1)
{
	Local_942[iParam0 /*6*/] = iParam1;
}

bool func_809()
{
	if (!func_44(NETWORK::PARTICIPANT_ID(), 3))
	{
		if (func_17(1))
		{
			func_811("JCMcBpPl9UWmcdOYFza0Tg");
			func_811("jDF4fBBUqG9ZuI9TR7mw");
			func_88(3);
			func_810();
		}
	}
	return func_44(NETWORK::PARTICIPANT_ID(), 3);
}

void func_810()
{
	Global_1679103 = 1;
	if (!MISC::IS_BIT_SET(Global_2553359, 0))
	{
		MISC::SET_BIT(&Global_2553359, 0);
		MISC::SET_BIT(&Global_1679104, 0);
	}
	if (!MISC::IS_BIT_SET(Global_2553359, 1))
	{
		MISC::SET_BIT(&Global_2553359, 1);
		MISC::SET_BIT(&Global_1679104, 1);
	}
	if (!MISC::IS_BIT_SET(Global_2553359, 5))
	{
		MISC::SET_BIT(&Global_2553359, 5);
		MISC::SET_BIT(&Global_1679104, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

void func_811(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_812(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_812(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_814(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_813(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_813(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_814(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_814(var uParam0)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_816(uParam0->f_1))
	{
		if (func_815(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (MISC::IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
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
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (MISC::IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_815(var uParam0)
{
	if (Global_2398103)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_816(int iParam0)
{
	return iParam0 == 9999;
}

int func_817()
{
	return Local_907;
}

int func_818(int iParam0)
{
	return Local_942[iParam0 /*6*/];
}

void func_819()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &uVar2, 2);
				break;
			
			case 185:
				func_820(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_820(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var0))
			{
				iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
				if (PED::IS_PED_A_PLAYER(iVar13))
				{
					iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar13);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar14))
					{
						if (Var0.f_5)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
							{
								if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
								{
									iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
									if (PED::IS_PED_A_PLAYER(iVar13))
									{
										iVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar13);
										if (iVar15 == PLAYER::PLAYER_ID())
										{
											if (func_526())
											{
												if (func_528())
												{
													if (!func_363(iVar15, iVar14) && func_823(iVar15))
													{
														if (func_821(Var0))
														{
															if (func_45(iVar14))
															{
																Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + (Global_262145.f_18475 * Global_262145.f_18476));
															}
															else
															{
																Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + (Global_262145.f_18474 * Global_262145.f_18476));
															}
														}
														else if (func_45(iVar14))
														{
															Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + Global_262145.f_18475);
														}
														else
														{
															Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + Global_262145.f_18474);
														}
													}
													else if (iVar15 == iVar14 || !func_363(iVar15, iVar14))
													{
														if (func_821(Var0))
														{
															Local_942[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_564(11);
												}
											}
											else
											{
												func_564(9);
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

int func_821(struct<12> Param0, var uParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)) && !ENTITY::IS_ENTITY_DEAD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1), false))
	{
		if (func_822(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
		{
			iVar0 = WEAPON::GET_WEAPON_DAMAGE_TYPE(Param0.f_6);
			iVar1 = Param0.f_6;
			iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
			if (((Param0.f_11 || iVar1 == joaat("weapon_unarmed")) || iVar2 == joaat("GROUP_MELEE")) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_822(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_ON_ANY_BIKE(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if ((((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("chimera") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer2")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer3")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

int func_823(int iParam0)
{
	int iVar0;
	int iVar1;
	
	PLAYER::GET_PLAYER_NAME(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
		iVar1 = func_824(iVar0);
		if (func_363(iVar1, iParam0) || iVar1 == iParam0)
		{
			PLAYER::GET_PLAYER_NAME(iParam0);
			PLAYER::GET_PLAYER_NAME(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_824(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (!PED::IS_PED_INJURED(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (!iVar1 == func_29())
				{
					if (func_1038(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

void func_825()
{
	int iVar0;
	
	if (func_17(1))
	{
		if (!func_758(9))
		{
			iVar0 = (1 - func_34(PLAYER::PLAYER_ID()));
			if (Local_907.f_16[1] != Local_907.f_16[0])
			{
				if (Local_907.f_16[iVar0] != func_29())
				{
					StringCopy(&Local_884, func_567(Local_907.f_16[iVar0]), 64);
					iLocal_867 = func_736(Local_907.f_16[iVar0]);
					func_734(9);
				}
			}
		}
	}
}

void func_826()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::_IS_ENTITY_GHOSTED_TO_LOCAL_PLAYER(PLAYER::PLAYER_PED_ID()))
	{
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (!MISC::IS_BIT_SET(iLocal_846, iVar0))
				{
					NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, false);
					MISC::SET_BIT(&iLocal_846, iVar0);
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!MISC::IS_BIT_SET(iLocal_845, iVar0))
							{
								if (((!func_828(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)) && !func_827(PLAYER::GET_PLAYER_PED(iVar1))) && !func_363(PLAYER::PLAYER_ID(), iVar1)) && (func_585() || func_582()))
								{
									NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, true);
									MISC::SET_BIT(&iLocal_845, iVar0);
								}
							}
							else if (func_828(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)))
							{
								NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, false);
								MISC::CLEAR_BIT(&iLocal_845, iVar0);
							}
							else if (func_827(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, false);
								MISC::CLEAR_BIT(&iLocal_845, iVar0);
							}
							else if (func_363(PLAYER::PLAYER_ID(), iVar1))
							{
								NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, false);
								MISC::CLEAR_BIT(&iLocal_845, iVar0);
							}
							else if (!func_585() && !func_582())
							{
								NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, false);
								MISC::CLEAR_BIT(&iLocal_845, iVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(NETWORK::PARTICIPANT_ID(), 1))
				{
					if (Local_942[iLocal_847 /*6*/].f_5 >= 2)
					{
						if (!func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
						{
							if (!MISC::IS_BIT_SET(iLocal_845, iVar0))
							{
								if (!(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1))))
								{
									if (!func_828(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)) && !func_827(PLAYER::GET_PLAYER_PED(iVar1)))
									{
										NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, true);
										MISC::SET_BIT(&iLocal_845, iVar0);
									}
								}
							}
							else if (!(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1))))
							{
								if (func_828(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)) || func_827(PLAYER::GET_PLAYER_PED(iVar1)))
								{
									NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, false);
									MISC::CLEAR_BIT(&iLocal_845, iVar0);
								}
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_845, iVar0))
						{
							if (func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
							{
								NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, false);
								MISC::CLEAR_BIT(&iLocal_845, iVar0);
							}
						}
					}
				}
				else
				{
					if (!MISC::IS_BIT_SET(iLocal_845, iVar0))
					{
						if (func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
						{
							NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, true);
							MISC::SET_BIT(&iLocal_845, iVar0);
						}
					}
					if (!func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
					{
						if (MISC::IS_BIT_SET(iLocal_845, iVar0))
						{
							NETWORK::_SET_RELATIONSHIP_TO_PLAYER(iVar1, false);
							MISC::CLEAR_BIT(&iLocal_845, iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (iVar2 != iParam0)
				{
					if (func_828(iParam0, iVar2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_828(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, false) == PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
}

void func_829()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_849);
	iVar2 = func_34(PLAYER::PLAYER_ID());
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (iLocal_847 > -1)
			{
				if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_847), 1))
				{
					if (func_758(9))
					{
						if (iVar0 != NETWORK::PARTICIPANT_ID())
						{
							iVar3 = func_34(iVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!MISC::IS_BIT_SET(iLocal_848, iLocal_849))
										{
											func_82(iVar1, 432, 1, 0);
											func_75(iVar1, func_81(iLocal_867), 1, 0);
											MISC::SET_BIT(&iLocal_848, iLocal_849);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_848, iLocal_849))
		{
			func_82(iVar1, 432, 0, 0);
			func_75(iVar1, func_81(iLocal_867), 0, 0);
			MISC::CLEAR_BIT(&iLocal_848, iLocal_849);
		}
	}
	iLocal_849++;
	if (iLocal_849 >= 32)
	{
		iLocal_849 = 0;
	}
}

void func_830()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	int iVar20;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Local_734[iVar1 /*3*/] = func_29();
		Local_734[iVar1 /*3*/].f_1 = -1;
		Local_734[iVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&iLocal_841, iVar1);
		MISC::CLEAR_BIT(&iLocal_843, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_93[iVar0 /*20*/] = func_831();
		Local_93[iVar0 /*20*/].f_1 = -1;
		MISC::CLEAR_BIT(&iLocal_842, iVar0);
		Local_93[iVar0 /*20*/].f_2 = { Var4 };
		Local_93[iVar0 /*20*/].f_18 = 0;
		Local_93[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar20 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_93[iVar0 /*20*/] = iVar0;
			MISC::SET_BIT(&iLocal_842, iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_93[iVar0 /*20*/]);
			iVar1 = iVar2;
			if (func_1038(iVar2, 0, 1))
			{
				iVar20++;
				Local_734[iVar1 /*3*/] = iVar2;
				Local_93[iVar0 /*20*/].f_1 = iVar1;
				Local_734[iVar1 /*3*/].f_1 = iVar0;
				Local_734[iVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_93[iVar0 /*20*/].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				MISC::SET_BIT(&iLocal_841, iVar1);
				if (ENTITY::IS_ENTITY_DEAD(Local_734[iVar1 /*3*/].f_2, false))
				{
					MISC::SET_BIT(&iLocal_843, iVar1);
				}
				if (func_45(Local_734[iVar1 /*3*/]))
				{
					Local_93[iVar0 /*20*/].f_18 = 1;
				}
				else if (func_104(Local_734[iVar1 /*3*/], 0))
				{
					Local_93[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_847 == iVar0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_734[iVar1 /*3*/].f_2, false))
					{
					}
				}
				if (Local_93[iVar0 /*20*/].f_18)
				{
					if (!MISC::IS_BIT_SET(iLocal_843, iVar1) && !MISC::IS_BIT_SET(iLocal_843, PLAYER::PLAYER_ID()))
					{
					}
				}
				else if (Local_93[iVar0 /*20*/].f_19)
				{
				}
			}
		}
		iVar0++;
	}
	if (iLocal_844 != iVar20)
	{
		iLocal_844 = iVar20;
	}
}

int func_831()
{
	return -1;
}

void func_832()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_847 = -1;
	if (MISC::IS_BIT_SET(iLocal_841, PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(iLocal_842, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!func_279(PLAYER::PLAYER_ID()))
			{
				iLocal_847 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			else if (func_277() && !func_835())
			{
				iVar0 = func_833();
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
						iLocal_847 = iVar2;
					}
				}
			}
		}
	}
}

var func_833()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_834()))
	{
		return func_834();
	}
	return func_276();
}

var func_834()
{
	return Global_2359302.f_3;
}

bool func_835()
{
	return MISC::IS_BIT_SET(Global_2359302, 11);
}

int func_836()
{
	var uVar0;
	
	func_841(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_840())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_839())
	{
		return 1;
	}
	if (func_838(159))
	{
		if (!func_837())
		{
			return 1;
		}
	}
	if (func_838(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_78() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_78()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_837()
{
	return Global_2453009.f_698;
}

int func_838(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_839()
{
	return Global_2463497;
}

bool func_840()
{
	return Global_2453009.f_693;
}

void func_841(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -771178269:
					func_842(iVar0);
					break;
				
				case -1320260596:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -2138305833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_842(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_1038(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_843(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_843(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_844(bool bParam0)
{
	if (!func_850(PLAYER::PLAYER_ID(), 3) && func_848(1))
	{
		return 1;
	}
	if (Global_2544210.f_5191.f_42)
	{
		Global_2544210.f_5191.f_42 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_96() == func_29() || !func_1038(func_96(), 0, 1))
		{
			return 1;
		}
	}
	if (func_850(PLAYER::PLAYER_ID(), 1) && !func_780(PLAYER::PLAYER_ID()))
	{
		if (func_845())
		{
			return 1;
		}
	}
	return 0;
}

int func_845()
{
	if (func_847(PLAYER::PLAYER_ID()) && func_846())
	{
		return 1;
	}
	if (func_760())
	{
		return 1;
	}
	return 0;
}

int func_846()
{
	switch (func_115(func_765(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_847(int iParam0)
{
	if (iParam0 != func_29() && func_1038(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_848(bool bParam0)
{
	bool bVar0;
	
	if (!func_177(1) && func_96() != PLAYER::PLAYER_ID())
	{
		bVar0 = false;
		if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57 != func_29())
		{
			if (func_1038(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57, 0, 1))
			{
				if ((Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_24 == 4 || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_24 == 8) || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_849(func_67(PLAYER::PLAYER_ID())) == 0 || func_849(func_67(PLAYER::PLAYER_ID())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_240(31);
				if (func_100(func_67(PLAYER::PLAYER_ID())))
				{
					func_240(81);
				}
				if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57 != func_29() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57))
				{
					Global_1627034 = func_248(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_45(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57))
					{
						func_240(88);
					}
				}
				else
				{
					Global_1627034 = 1;
				}
				Global_1627018 = { Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_850(int iParam0, int iParam1)
{
	if (func_68(iParam0, 0))
	{
		return func_849(Global_1630816[iParam0 /*597*/].f_11.f_33) == iParam1;
	}
	return 0;
}

void func_851()
{
	SYSTEM::WAIT(0);
}

void func_852()
{
	int iVar0;
	int iVar1;
	
	if (!func_917(&iLocal_85))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_STOP");
	}
	NETWORK::_0x13F1FCB111B820B0(false);
	func_523(&iLocal_85);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == uLocal_862[0] || PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == uLocal_862[1])
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_865);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44(NETWORK::PARTICIPANT_ID(), 9))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			func_86(9);
		}
	}
	func_51();
	Global_2544210.f_267 = 0;
	func_915(Global_1681722, -1, -1, -1, -1);
	func_856(1, 0);
	func_855();
	func_532();
	func_71();
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_527(iVar1))
		{
			VEHICLE::_0x73561D4425A021A2(iVar0, 0);
		}
	}
	func_579(0);
	func_854();
	func_853();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_853()
{
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_862[0]);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_862[1]);
}

void func_854()
{
	if (Global_1679103)
	{
		if (MISC::IS_BIT_SET(Global_1679104, 0))
		{
			MISC::CLEAR_BIT(&Global_2553359, 0);
		}
		if (MISC::IS_BIT_SET(Global_1679104, 1))
		{
			MISC::CLEAR_BIT(&Global_2553359, 1);
		}
		if (MISC::IS_BIT_SET(Global_1679104, 5))
		{
			MISC::CLEAR_BIT(&Global_2553359, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1679104 = 0;
	}
	Global_1679103 = 0;
}

void func_855()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573914 = { Var0 };
	Global_1573914.f_13 = func_29();
	if (MISC::IS_BIT_SET(Global_1573348, 3))
	{
		MISC::CLEAR_BIT(&Global_1573348, 3);
	}
}

void func_856(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1368721.f_1.f_108 != 0)
	{
		Global_1368721.f_1.f_108 = 0;
	}
	Global_1368721.f_1.f_109 = -1;
	Global_1368721.f_1.f_110 = -1;
	if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 167 || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 168)
	{
		func_913();
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 4);
	}
	if ((func_147() && iParam1 != 0) && Global_262145.f_17160)
	{
		if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 190 || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 192)
		{
			func_895(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 164 || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 208) || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 250) || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 != -1)
	{
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574671.f_1, 14) && !func_121(PLAYER::PLAYER_ID()))
		{
			func_744(0);
		}
	}
	else if (func_893(PLAYER::PLAYER_ID()) != -1)
	{
		func_757(-1);
	}
	func_892(func_29());
	if (func_235(16))
	{
		func_891(16);
	}
	func_888(0);
	func_753(-1);
	func_855();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_886(iVar0);
		iVar0++;
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 5);
	}
	iVar1 = func_110();
	if ((func_92(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_885(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_146(iVar1))
	{
		func_882(-1, 1);
	}
	else if (((((func_109(iVar1) || func_881(iVar1)) || func_880(iVar1)) || func_136(iVar1)) || func_135(iVar1)) || func_134(iVar1))
	{
	}
	else
	{
		func_882(-1, 1);
	}
	func_805(19);
	func_805(20);
	func_805(21);
	func_805(22);
	func_805(27);
	func_891(3);
	func_891(4);
	func_891(7);
	func_879();
	if (func_118(PLAYER::PLAYER_ID()))
	{
		func_878(0);
	}
	func_805(29);
	Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57 = func_29();
	if (Global_2544210.f_5191.f_42 != 0)
	{
		Global_2544210.f_5191.f_42 = 0;
	}
	if (bParam0)
	{
		func_871();
	}
	if (!func_121(PLAYER::PLAYER_ID()))
	{
		func_870();
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 8))
	{
		func_869("IMPEXP_SELFDES", 0);
		func_859("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 8);
	}
	func_857(iVar1, 0);
}

void func_857(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1681713.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_858(iParam0));
			MISC::SET_BIT(&(Global_1681713.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1681713.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_858(iParam0));
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 9);
	}
}

char* func_858(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_859(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_861();
					Global_112293.f_14139[iVar0 /*104*/].f_99[Global_19798] = 0;
					if (func_860(iVar0))
					{
					}
					else
					{
						Global_112293.f_14139[iVar0 /*104*/].f_24 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_28 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_112293.f_14139[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_860(int iParam0)
{
	if ((Global_112293.f_14139[iParam0 /*104*/].f_99[0] == 1 || Global_112293.f_14139[iParam0 /*104*/].f_99[1] == 1) || Global_112293.f_14139[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_861()
{
	if (func_868(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_862();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

var func_862()
{
	func_863();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_863()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_866(Global_112293.f_2361.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_865(PLAYER::PLAYER_PED_ID());
			if (func_864(iVar0) && (!func_868(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_864(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_864(int iParam0)
{
	return iParam0 < 3;
}

int func_865(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_866(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_866(int iParam0)
{
	if (func_864(iParam0))
	{
		return func_867(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_867(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_868(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_869(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_112293.f_14139[iVar0 /*104*/].f_24 = 1;
				if (Global_112293.f_14139[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_112293.f_14049[0 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_112293.f_14049[1 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_112293.f_14049[2 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_112293.f_14049[3 /*20*/].f_17 = 0;
					}
					Global_112293.f_14139[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_112293.f_14139[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_870()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2544210.f_5186 < 1f)
		{
			return;
		}
	}
	Global_2544210.f_5187 = -1;
	Global_2544210.f_5186 = 1f;
}

void func_871()
{
	MISC::_COPY_MEMORY(&(Global_2405077.f_24), &Global_2409343, 2);
	MISC::_COPY_MEMORY(&(Global_2405077.f_26), &Global_2409345, 19);
	func_876();
	func_872(1, 1, 0);
	func_52();
}

void func_872(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405077.f_45), &Global_2409364, 322);
	}
	else
	{
		Global_2405077.f_45 = { Global_2409364 };
		Global_2405077.f_45.f_49 = { Global_2409364.f_49 };
		Global_2405077.f_45.f_52 = Global_2409364.f_52;
		Global_2405077.f_45.f_53 = Global_2409364.f_53;
	}
	if (bParam0)
	{
		func_875();
	}
	if (!bParam2)
	{
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_874(0);
	func_873();
}

void func_873()
{
	struct<6> Var0;
	
	if (Global_2405077.f_489.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405077.f_489 = { Var0 };
	}
}

void func_874(bool bParam0)
{
	if (bParam0)
	{
		Global_2405077.f_712 = 0;
	}
	else
	{
		Global_2405077.f_712 = 1;
	}
}

void func_875()
{
	MISC::_COPY_MEMORY(&(Global_2405077.f_367), &Global_2409686, 121);
}

void func_876()
{
	func_877();
}

void func_877()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405077.f_2262[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_2261 = 0;
}

void func_878(bool bParam0)
{
	if (bParam0)
	{
		if (!func_62(PLAYER::PLAYER_ID(), 9))
		{
			if (func_116(PLAYER::PLAYER_ID()) != 0)
			{
				func_123(9);
			}
		}
	}
	else if (func_62(PLAYER::PLAYER_ID(), 9))
	{
		func_805(9);
	}
}

void func_879()
{
	if (func_578(PLAYER::PLAYER_ID()))
	{
		func_805(25);
	}
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_881(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_882(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_110();
	}
	if (iParam0 > 0)
	{
		if (func_179() != func_29())
		{
			if (func_781(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2519724.f_93[func_884(iParam0)] = 1;
			}
		}
		iVar0 = func_884(159);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(157);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(148);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(164);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(142);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(152);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(166);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(170);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(173);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(179);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(200);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(201);
		if (func_883(iVar0, Global_262145.f_12784, bParam1))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(182);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(183);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(185);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(186);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(180);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(195);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(197);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(198);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(207);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(208);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(209);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(214);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(215);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(216);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(217);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(218);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(219);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(220);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(221);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_883(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_62(PLAYER::PLAYER_ID(), 19) && !func_62(PLAYER::PLAYER_ID(), 20)) && !func_62(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2519724.f_93[iParam0] == 1 && func_5(&(Global_2519724[iParam0 /*2*/])))
	{
		if (func_22(&(Global_2519724[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2519724.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_884(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_885(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_110();
	}
	if (iParam0 > 0)
	{
		if (func_179() != func_29())
		{
			Global_2519724.f_93[func_884(iParam0)] = 1;
		}
		iVar0 = func_884(155);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(163);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(160);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(153);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(162);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(154);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(171);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(172);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(199);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(194);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(193);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(210);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(205);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(189);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_884(211);
		if (func_883(iVar0, Global_262145.f_12785, 0))
		{
			func_7(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_886(int iParam0)
{
	if (!func_11(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_151[iParam0 /*3*/], func_887(), 0))
	{
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_151[iParam0 /*3*/] = { func_887() };
	}
	if (!func_11(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_126[iParam0 /*3*/], func_887(), 0))
	{
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_126[iParam0 /*3*/] = { func_887() };
	}
}

Vector3 func_887()
{
	struct<3> Var0;
	
	return Var0;
}

void func_888(bool bParam0)
{
	if (bParam0)
	{
		if (!func_800(PLAYER::PLAYER_ID(), 14))
		{
			func_890(14);
		}
	}
	else if (func_800(PLAYER::PLAYER_ID(), 14))
	{
		func_889(14);
	}
}

void func_889(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_5), iParam0);
}

void func_890(int iParam0)
{
	MISC::SET_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_5), iParam0);
}

void func_891(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_46), iParam0);
}

void func_892(int iParam0)
{
	if (func_41(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_459 != iParam0)
			{
				Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_459 = iParam0;
				if (iParam0 != func_29())
				{
				}
			}
		}
	}
}

int func_893(int iParam0)
{
	if (func_894(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_32;
	}
	return -1;
}

int func_894(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_32 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_895(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_331(iParam0, iParam1) && func_912(iParam0, iParam1))
	{
		iVar0 = func_330(iParam0, iParam1);
		func_899(iVar0, bParam2, bParam3);
		func_896(iVar0, 1);
	}
}

void func_896(int iParam0, bool bParam1)
{
	if (!func_898(iParam0))
	{
		return;
	}
	func_314(func_897(iParam0), bParam1, -1, 1);
	Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iParam0 /*12*/].f_6 = bParam1;
}

int func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_898(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_899(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_630(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_911(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2518510[iParam0];
		iVar0 = func_910(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1683820 = -1;
		}
		func_909(iParam0, 0, bParam2);
	}
	else if (func_907(iParam0, bParam2))
	{
		iVar0 = func_906(iVar2, 0);
		iVar3 = func_727(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_905(iVar2, bParam2);
		iVar5 = func_906(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_904(iVar2) && func_903(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_911(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_902(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_901(iParam0, (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iParam0 /*12*/].f_2 - (func_905(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_906(iVar2, bParam2) / func_902(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_904(iVar2) && func_903(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_900(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_900(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (func_321(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590908[iParam0 /*874*/].f_267.f_259 = iParam2;
				}
				else
				{
					Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_901(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iParam0 /*12*/].f_2)
	{
		Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_902(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_321(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_903(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_321(iParam1) && func_904(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_904(int iParam0)
{
	return func_173(iParam0) == 5;
}

int func_905(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_173(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_17129;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17134;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_17128;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17133;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_17127;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17132;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_17125;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17130;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_17126;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17131;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21255;
				if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21256;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21239;
				if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21240;
				}
			}
			break;
	}
	return uVar0;
}

int func_906(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_173(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_17110;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17119);
			}
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17124);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_17111;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17118);
			}
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17123);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_17112;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17117);
			}
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17122);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_17113;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17115);
			}
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17120);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_17114;
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17116);
			}
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17121);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21252;
			}
			else
			{
				iVar0 = Global_262145.f_21236;
			}
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21253);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21237);
				}
			}
			if (func_329(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21254);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21238);
				}
			}
			if (func_903(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_907(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_315(15384, -1, -1);
	}
	return func_315(func_908(iParam0), -1, -1);
}

int func_908(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_909(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_314(15384, bParam1, -1, 1);
		return;
	}
	func_314(func_908(iParam0), bParam1, -1, 1);
}

int func_910(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2518510[iParam0];
	iVar1 = func_630(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2518517;
	}
	if (func_904(iVar1))
	{
		if (func_903(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_911(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2518517 = iParam1;
		return;
	}
	Global_2518510[iParam0] = iParam1;
}

int func_912(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_331(iParam0, iParam1))
	{
		iVar0 = func_330(iParam0, iParam1);
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_4 > 0 && Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_913()
{
	MISC::CLEAR_BIT(&(Global_2544210.f_1800), 28);
	MISC::CLEAR_BIT(&(Global_2544210.f_1800), 29);
	func_914(24);
}

void func_914(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

void func_915(struct<14> Param0, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var16;
	struct<19> Var35;
	struct<16> Var54;
	struct<17> Var70;
	struct<15> Var87;
	struct<17> Var102;
	struct<17> Var119;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam14;
			STATS::_0x7B18DA61F6BAE9D5(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
		{
			Var16 = { Param0 };
			Var16.f_14 = Global_1681722.f_14;
			Var16.f_15 = iParam14;
			Var16.f_16 = iParam15;
			Var16.f_17 = iParam16;
			Var16.f_18 = iParam17;
			STATS::_0x06EAF70AE066441E(&Var16);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
		{
			Var35 = { Param0 };
			Var35.f_14 = Global_1681722.f_14;
			Var35.f_15 = iParam14;
			Var35.f_16 = iParam15;
			Var35.f_17 = iParam16;
			Var35.f_18 = iParam17;
			STATS::_0x14EDA9EE27BD1626(&Var35);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
		{
			Var54 = { Param0 };
			Var54.f_14 = Global_1681722.f_14;
			Var54.f_15 = iParam14;
			STATS::_0x930F504203F561C9(&Var54);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var70 = { Param0 };
			Var70.f_14 = Global_1681722.f_14;
			Var70.f_15 = iParam14;
			Var70.f_16 = iParam15;
			STATS::_0xE3261D791EB44ACB(&Var70);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
		{
			Var87 = { Param0 };
			Var87.f_14 = Global_1681722.f_14;
			STATS::_0x73001E34F85137F8(&Var87);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
		{
			Var102 = { Param0 };
			Var102.f_14 = iParam14;
			Var102.f_15 = (SYSTEM::TO_FLOAT(iParam14) / SYSTEM::TO_FLOAT(iParam15));
			Var102.f_16 = iParam16;
			STATS::_0x53CAE13E9B426993(&Var102);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
		{
			Var119 = { Param0 };
			Var119.f_14 = iParam14;
			Var119.f_15 = iParam15;
			Var119.f_16 = Global_1681722.f_14;
			STATS::_0x7D36291161859389(&Var119);
		}
	}
	func_916();
}

void func_916()
{
	struct<18> Var0;
	
	Global_1681722 = { Var0 };
}

bool func_917(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 0);
}

void func_918(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_758(0))
	{
		uVar1 = func_982(func_25(), bParam0, bVar0, bParam1);
		Global_1681722.f_2 = Local_907.f_33;
		Global_1681722.f_3 = Local_907.f_34;
		func_919(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0);
		func_734(0);
	}
}

void func_919(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_412(PLAYER::PLAYER_ID());
		Global_1682001.f_4 = func_689();
		Global_1682001.f_5 = func_688();
		if (func_119(PLAYER::PLAYER_ID()) || func_63(PLAYER::PLAYER_ID()))
		{
			Global_1682001.f_6 = 1;
		}
		else
		{
			Global_1682001.f_6 = 0;
		}
		Global_1682001.f_1 = func_976(bParam9);
		Global_1682001.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1682001.f_9 = func_730(bParam0);
		Global_1682001.f_10 = uParam1;
		Global_1682001.f_17 = Global_1682001.f_2;
		Global_1682001.f_18 = Global_1682001.f_2;
		Global_1682001.f_19 = func_721();
		Global_1682001.f_21 = (Global_1682001.f_8 - Global_1682001.f_7);
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682001.f_23 = func_730(func_103(1));
		}
		Global_1682001.f_24 = func_975(PLAYER::PLAYER_ID());
		Global_1682001.f_28 = func_731(PLAYER::PLAYER_ID());
		if (Global_1682001.f_24 > 2)
		{
			Global_1682001.f_24 = 2;
		}
		func_973(iVar0);
	}
	else
	{
		iVar0 = func_67(PLAYER::PLAYER_ID());
	}
	if (func_100(iVar0))
	{
		Global_1681740.f_2 = func_689();
		Global_1681740.f_3 = func_688();
		Global_1681740.f_50 = iParam4;
		Global_1681740.f_51 = iParam5;
		Global_1681740.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1681740.f_20 = (Global_1681740.f_10 - Global_1681740.f_9);
		Global_1681740.f_12 = uParam1;
		Global_1681740.f_19 = func_969(iVar0, bParam0, func_972(bParam3));
		if (bParam0)
		{
			Global_1681740.f_11 = 1;
		}
		else
		{
			Global_1681740.f_11 = 0;
		}
		if ((func_118(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID())) || func_61(PLAYER::PLAYER_ID()))
		{
			Global_1681740.f_8 = 1;
		}
		else
		{
			Global_1681740.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1681740.f_43 = 0;
			Global_1681740.f_45 = func_727(func_179(), iParam2);
			Global_1681740.f_47 = iParam7;
			Global_1681740.f_46 = iParam6;
			Global_1681740.f_52 = func_968(func_179(), iParam2);
		}
		func_966(iVar0);
	}
	else if (func_108(iVar0))
	{
		Global_1681794.f_2 = func_689();
		Global_1681794.f_3 = func_688();
		Global_1681794.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1681794.f_19 = (Global_1681794.f_10 - Global_1681794.f_9);
		Global_1681794.f_12 = uParam1;
		if (bParam0)
		{
			Global_1681794.f_11 = 1;
		}
		else
		{
			Global_1681794.f_11 = 0;
		}
		if ((func_118(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID())) || func_61(PLAYER::PLAYER_ID()))
		{
			Global_1681794.f_8 = 1;
		}
		else
		{
			Global_1681794.f_8 = 0;
		}
		func_964(iVar0);
	}
	else if (func_136(iVar0))
	{
		Global_1681857.f_2 = func_689();
		Global_1681857.f_3 = func_688();
		Global_1681857.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1681857.f_18 = (Global_1681857.f_9 - Global_1681857.f_8);
		Global_1681857.f_11 = uParam1;
		Global_1681857.f_7 = func_721();
		Global_1681857.f_42 = func_724(func_49(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_159(iVar1);
		Global_1681857.f_28 = iVar2;
		Global_1681857.f_29 = func_730((func_637(iVar1) || func_636(iVar1)));
		Global_1681857.f_30 = func_730(func_963(iVar1));
		Global_1681857.f_32 = func_730(func_634(iVar1));
		Global_1681857.f_33 = func_730(func_635(iVar1));
		Global_1681857.f_34 = func_730(func_962(iVar1));
		Global_1681857.f_35 = func_730(func_633(0, iVar1) == 1);
		Global_1681857.f_36 = func_730(func_961(iVar1));
		Global_1681857.f_37 = func_730(func_960(iVar1));
		Global_1681857.f_38 = func_730(func_959(iVar1));
		Global_1681857.f_39 = func_730(func_329(iVar1, iVar2, 0));
		Global_1681857.f_40 = func_730(func_329(iVar1, iVar2, 2));
		Global_1681857.f_41 = func_730(func_329(iVar1, iVar2, 1));
		if (func_958(iVar1))
		{
			Global_1681857.f_31 = 2;
		}
		else if (func_957(iVar1))
		{
			Global_1681857.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1681857.f_10 = 1;
		}
		else
		{
			Global_1681857.f_10 = 0;
		}
		if ((func_118(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID())) || func_61(PLAYER::PLAYER_ID()))
		{
			Global_1681857.f_6 = 1;
		}
		else
		{
			Global_1681857.f_6 = 0;
		}
		Global_1681857.f_21 = -2;
		Global_1681857.f_22 = -2;
		func_955(iVar0);
	}
	else if (func_135(iVar0))
	{
		Global_1681901.f_2 = func_689();
		Global_1681901.f_3 = func_688();
		if ((func_118(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID())) || func_61(PLAYER::PLAYER_ID()))
		{
			Global_1681901.f_6 = 1;
		}
		else
		{
			Global_1681901.f_6 = 0;
		}
		Global_1681901.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1681901.f_10 = func_730(bParam0);
		Global_1681901.f_11 = uParam1;
		Global_1681901.f_17 = func_722(func_96());
		Global_1681901.f_18 = (Global_1681901.f_9 - Global_1681901.f_8);
		Global_1681901.f_20 = iParam8;
		Global_1681901.f_21 = -2;
		Global_1681901.f_22 = -2;
		Global_1681901.f_27 = func_954();
		Global_1681901.f_29 = func_144(6109, -1, 0);
		Global_1681901.f_30 = func_144(6105, -1, 0);
		Global_1681901.f_31 = func_144(6106, -1, 0);
		Global_1681901.f_32 = func_144(6108, -1, 0);
		Global_1681901.f_33 = func_144(6107, -1, 0);
		Global_1681901.f_34 = func_144(6110, -1, 0);
		Global_1681901.f_36 = func_730(func_103(1));
		Global_1681901.f_37 = func_952();
		func_942();
		func_940(iVar0);
	}
	else if (func_134(iVar0))
	{
		Global_1681955.f_2 = func_689();
		Global_1681955.f_3 = func_688();
		if ((func_118(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID())) || func_61(PLAYER::PLAYER_ID()))
		{
			Global_1681955.f_6 = 1;
		}
		else
		{
			Global_1681955.f_6 = 0;
		}
		Global_1681955.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1681955.f_10 = func_730(bParam0);
		Global_1681955.f_11 = uParam1;
		Global_1681955.f_18 = (Global_1681955.f_9 - Global_1681955.f_8);
		Global_1681955.f_20 = iParam8;
		Global_1681955.f_23 = Global_786547;
		Global_1681955.f_36 = Global_786547.f_1;
		Global_1681955.f_24 = func_144(6159, -1, 0);
		Global_1681955.f_25 = func_144(6164, -1, 0);
		Global_1681955.f_26 = func_144(6165, -1, 0);
		Global_1681955.f_27 = func_730((((func_720() || func_719()) || func_718()) || func_717(PLAYER::PLAYER_ID())));
		Global_1681955.f_28 = func_144(6166, -1, 0);
		Global_1681955.f_29 = func_730(func_716());
		Global_1681955.f_35 = -1;
		Global_1681955.f_38 = -1;
		Global_1681955.f_39 = Global_1681955.f_4;
		Global_1681955.f_40 = Global_1681955.f_5;
		Global_1681955.f_41 = func_689();
		Global_1681955.f_42 = func_730(func_103(1));
		Global_1681955.f_44 = Global_1681955.f_18;
		func_938(iVar0);
	}
	else if (func_129(iVar0))
	{
		if (Global_1682091.f_2 == -1)
		{
			Global_1682091.f_2 = func_689();
		}
		if (Global_1682091.f_3 == -1)
		{
			Global_1682091.f_3 = func_688();
		}
		if ((func_118(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID())) || func_61(PLAYER::PLAYER_ID()))
		{
			Global_1682091.f_6 = 1;
		}
		else
		{
			Global_1682091.f_6 = 0;
		}
		Global_1682091.f_1 = func_976(0);
		Global_1682091.f_7 = func_721();
		Global_1682091.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1682091.f_10 = func_730(bParam0);
		Global_1682091.f_11 = uParam1;
		if (func_179() != -1)
		{
			Global_1682091.f_17 = func_715(func_179());
		}
		Global_1682091.f_18 = (Global_1682091.f_9 - Global_1682091.f_8);
		Global_1682091.f_19 = Global_2544210.f_6682;
		Global_1682091.f_28 = func_731(PLAYER::PLAYER_ID());
		Global_1682091.f_29 = func_730(func_937(PLAYER::PLAYER_ID()));
		Global_1682091.f_30 = func_730(func_936(PLAYER::PLAYER_ID()));
		Global_1682091.f_31 = func_697(PLAYER::PLAYER_ID());
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682091.f_33 = func_730(func_103(1));
		}
		if (Global_1682091.f_34 > 2)
		{
			Global_1682091.f_34 = 2;
		}
		func_934(iVar0);
	}
	else if (func_133(iVar0))
	{
		Global_1682037.f_2 = func_689();
		Global_1682037.f_3 = func_688();
		if ((func_118(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID())) || func_61(PLAYER::PLAYER_ID()))
		{
			Global_1682037.f_6 = 1;
		}
		else
		{
			Global_1682037.f_6 = 0;
		}
		Global_1682037.f_1 = func_976(0);
		Global_1682037.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1682037.f_10 = func_730(bParam0);
		Global_1682037.f_11 = uParam1;
		Global_1682037.f_18 = (Global_1682037.f_9 - Global_1682037.f_8);
		Global_1682037.f_28 = func_731(PLAYER::PLAYER_ID());
		if (Global_1682037.f_28)
		{
			Global_1682037.f_29 = func_714(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1682037.f_29 = 0;
		}
		Global_1682037.f_30 = func_698(PLAYER::PLAYER_ID(), 4, -1);
		Global_1682037.f_31 = func_697(PLAYER::PLAYER_ID());
		Global_1682037.f_32 = func_730(func_696(PLAYER::PLAYER_ID()));
		Global_1682037.f_33 = func_730(func_695(PLAYER::PLAYER_ID()));
		Global_1682037.f_34 = func_730(func_694(PLAYER::PLAYER_ID()));
		Global_1682037.f_35 = func_730(func_693(PLAYER::PLAYER_ID()));
		Global_1682037.f_36 = func_692(PLAYER::PLAYER_ID());
		Global_1682037.f_37 = func_691(PLAYER::PLAYER_ID());
		Global_1682037.f_39 = func_690(PLAYER::PLAYER_ID());
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682037.f_41 = func_730(func_103(1));
		}
		if (Global_1682037.f_42 > 2)
		{
			Global_1682037.f_42 = 2;
		}
		func_932(iVar0);
	}
	else if (func_128(iVar0))
	{
		Global_1682175.f_2 = func_689();
		Global_1682175.f_3 = func_688();
		Global_1682175.f_4 = func_733(func_179());
		Global_1682175.f_5 = func_732(func_179());
		if ((func_118(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID())) || func_61(PLAYER::PLAYER_ID()))
		{
			Global_1682175.f_6 = 1;
		}
		else
		{
			Global_1682175.f_6 = 0;
		}
		Global_1682175.f_7 = func_721();
		Global_1682175.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1682175.f_10 = func_730(bParam0);
		Global_1682175.f_11 = uParam1;
		if (func_96() != -1)
		{
			Global_1682175.f_17 = func_715(func_96());
		}
		Global_1682175.f_18 = (Global_1682175.f_9 - Global_1682175.f_8);
		Global_1682175.f_21 = 1;
		Global_1682175.f_22 = 1;
		Global_1682175.f_25 = func_931(PLAYER::PLAYER_ID());
		Global_1682175.f_27 = func_730(func_687(PLAYER::PLAYER_ID()));
		Global_1682175.f_28 = func_684(21, -1);
		Global_1682175.f_29 = func_730(func_930(PLAYER::PLAYER_ID()));
		func_928(iVar0);
	}
	else if (func_127(iVar0))
	{
		if (func_179() != -1)
		{
			Global_1682250.f_6 = func_733(func_179());
			Global_1682250.f_7 = func_732(func_179());
		}
		if (func_286(PLAYER::PLAYER_ID(), 1))
		{
			Global_1682250.f_8 = func_730(func_103(1));
		}
		Global_1682250.f_10 = func_721();
		Global_1682250.f_11 = 1;
		Global_1682250.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1710053);
		Global_1682250.f_14 = uParam1;
		Global_1682250.f_19 = 1;
		Global_1682250.f_20 = 1;
		func_926(iVar0);
	}
	else if (func_126(iVar0))
	{
		Global_1682337.f_2 = func_689();
		if (func_179() != -1)
		{
			Global_1682337.f_6 = func_733(func_179());
			Global_1682337.f_7 = func_732(func_179());
		}
		Global_1682337.f_8 = func_730(func_103(1));
		Global_1682337.f_10 = func_721();
		Global_1682337.f_11 = 1;
		Global_1682337.f_14 = uParam1;
		func_924(iVar0);
	}
	else if (func_665(iVar0))
	{
		Global_1682449.f_2 = func_689();
		Global_1682449.f_9 = 1;
		Global_1682449.f_10 = bParam0;
		Global_1682449.f_11 = uParam1;
		func_922(iVar0);
	}
	else if (func_125(iVar0))
	{
		if (func_179() != -1)
		{
			Global_1682470.f_5 = func_733(func_179());
			Global_1682470.f_6 = func_732(func_179());
		}
		Global_1682470.f_7 = func_730(func_103(1));
		Global_1682470.f_9 = func_721();
		Global_1682470.f_10 = 1;
		Global_1682470.f_13 = uParam1;
		func_920(iVar0);
	}
	else
	{
		Global_1681722.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1681722.f_7 = 1;
		}
		else
		{
			Global_1681722.f_7 = 0;
		}
		Global_1681722.f_8 = uParam1;
		if (Global_1681722.f_4 == 0)
		{
			if ((func_118(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID())) || func_61(PLAYER::PLAYER_ID()))
			{
				Global_1681722.f_4 = 1;
			}
		}
	}
}

void func_920(int iParam0)
{
	STATS::_0x1A67DFBF1F5C3835(&Global_1682470);
	func_921();
}

void func_921()
{
	struct<32> Var0;
	
	Global_1682470 = { Var0 };
}

void func_922(int iParam0)
{
	STATS::_0xD6CA58B3B53A0F22(&Global_1682449);
	func_923();
}

void func_923()
{
	struct<21> Var0;
	
	Global_1682449 = { Var0 };
}

void func_924(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xDFCDB14317A9B361(&Global_1682337);
	func_925();
}

void func_925()
{
	struct<35> Var0;
	
	Global_1682337 = { Var0 };
	Global_1682337.f_23 = 0;
	Global_1682337.f_22 = 0;
	Global_1682337.f_21 = 0;
}

void func_926(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x53C31853EC9531FF(&Global_1682250);
	func_927();
}

void func_927()
{
	struct<36> Var0;
	
	Global_1682250 = { Var0 };
	Global_1682250.f_23 = 0;
	Global_1682250.f_22 = 0;
	Global_1682250.f_21 = 0;
}

void func_928(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1682175);
	func_929();
}

void func_929()
{
	struct<31> Var0;
	
	Global_1682175 = { Var0 };
}

int func_930(int iParam0)
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_371.f_2, 6);
	}
	return 0;
}

int func_931(int iParam0)
{
	if (func_67(iParam0) == 243)
	{
		return func_132(iParam0);
	}
	return -1;
}

void func_932(int iParam0)
{
	STATS::_0x2D7A9B577E72385E(&Global_1682037);
	func_933();
}

void func_933()
{
	struct<54> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1682037 = { Var0 };
}

void func_934(int iParam0)
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1682091);
	func_935();
}

void func_935()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1682091 = { Var0 };
}

bool func_936(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_324.f_1, 0);
}

bool func_937(int iParam0)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_127840.f_14, 5);
	}
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_324.f_1, 19);
}

void func_938(int iParam0)
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1681955);
	func_939();
}

void func_939()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1681955 = { Var0 };
	Global_1681955.f_16 = 0;
}

void func_940(int iParam0)
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1681901);
	func_941();
}

void func_941()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1681901 = { Var0 };
	Global_1681901.f_23 = 0;
	Global_1681901.f_24 = 0;
	Global_1681901.f_16 = 0;
}

void func_942()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_652(12));
		func_651(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323703[iVar1 /*142*/].f_66 != 0 && func_944(Global_1323703[iVar1 /*142*/].f_66, 1))
			{
				if (Global_2544210.f_958 != iVar1)
				{
					if (func_943(Global_1323703[iVar1 /*142*/].f_66))
					{
						if (Global_1323703[iVar1 /*142*/].f_66 != 0)
						{
							iVar3 = Global_1323703[iVar1 /*142*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1681901.f_38 = iVar3;
								break;
							
							case 1:
								Global_1681901.f_39 = iVar3;
								break;
							
							case 2:
								Global_1681901.f_40 = iVar3;
								break;
							
							case 3:
								Global_1681901.f_41 = iVar3;
								break;
							
							case 4:
								Global_1681901.f_42 = iVar3;
								break;
							
							case 5:
								Global_1681901.f_43 = iVar3;
								break;
							
							case 6:
								Global_1681901.f_44 = iVar3;
								break;
							
							case 7:
								Global_1681901.f_45 = iVar3;
								break;
							
							case 8:
								Global_1681901.f_46 = iVar3;
								break;
							
							case 9:
								Global_1681901.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_943(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_944(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_951())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_950() && !func_949()) && !func_948()) && !func_947()) && !func_951())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_948())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_946(iParam0))
		{
			return 0;
		}
	}
	if (!func_945(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_945(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_176())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_946(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2518293)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6770 && !Global_262145.f_13100) && iVar1 < Global_262145.f_13101)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14400 && iVar1 < Global_262145.f_14412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14396 && iVar1 < Global_262145.f_14408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14397 && iVar1 < Global_262145.f_14409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14398 && iVar1 < Global_262145.f_14410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14399 && iVar1 < Global_262145.f_14411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14401 && iVar1 < Global_262145.f_14413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14402 && iVar1 < Global_262145.f_14405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14403 && iVar1 < Global_262145.f_14406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14404 && iVar1 < Global_262145.f_14407)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_16997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_16992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_16996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_16995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_16989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_16990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_16993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_16994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_16991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_16999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_16988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_16987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_16986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_16998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17037 && iVar1 < Global_262145.f_17002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17038 && iVar1 < Global_262145.f_17003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17039 && iVar1 < Global_262145.f_17004)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17186 && iVar1 < Global_262145.f_17208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17187 && iVar1 < Global_262145.f_17209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17188 && iVar1 < Global_262145.f_17210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17189 && iVar1 < Global_262145.f_17211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17190 && iVar1 < Global_262145.f_17212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17191 && iVar1 < Global_262145.f_17213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17193 && iVar1 < Global_262145.f_17214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17194 && iVar1 < Global_262145.f_17215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17195 && iVar1 < Global_262145.f_17216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17196 && iVar1 < Global_262145.f_17217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17197 && iVar1 < Global_262145.f_17218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17198 && iVar1 < Global_262145.f_17219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17199 && iVar1 < Global_262145.f_17220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17205 && iVar1 < Global_262145.f_17227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17202 && iVar1 < Global_262145.f_17223)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17203 && iVar1 < Global_262145.f_17224)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17204 && iVar1 < Global_262145.f_17225)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17192 && iVar1 < Global_262145.f_17226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17200 && iVar1 < Global_262145.f_17221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17201 && iVar1 < Global_262145.f_17222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18838 && iVar1 < Global_262145.f_18935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18839 && iVar1 < Global_262145.f_18936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18840 && iVar1 < Global_262145.f_18937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18841 && iVar1 < Global_262145.f_18938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18842 && iVar1 < Global_262145.f_18939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18843 && iVar1 < Global_262145.f_18940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18844 && iVar1 < Global_262145.f_18941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18849 && iVar1 < Global_262145.f_18946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18850 && iVar1 < Global_262145.f_18947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18851 && iVar1 < Global_262145.f_18948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18852 && iVar1 < Global_262145.f_18949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18853 && iVar1 < Global_262145.f_18950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18854 && iVar1 < Global_262145.f_18951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18855 && iVar1 < Global_262145.f_18952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18856 && iVar1 < Global_262145.f_18953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18857 && iVar1 < Global_262145.f_18954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18858 && iVar1 < Global_262145.f_18955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18859 && iVar1 < Global_262145.f_18956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18860 && iVar1 < Global_262145.f_18957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18861 && iVar1 < Global_262145.f_18958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18862 && iVar1 < Global_262145.f_18959)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19922 && iVar1 < Global_262145.f_19918)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20800 && iVar1 < Global_262145.f_20808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20801 && iVar1 < Global_262145.f_20809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20802 && iVar1 < Global_262145.f_20810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20803 && iVar1 < Global_262145.f_20811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20804 && iVar1 < Global_262145.f_20812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20805 && iVar1 < Global_262145.f_20813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21580 && iVar1 < Global_262145.f_21600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21592 && iVar1 < Global_262145.f_21612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21583 && iVar1 < Global_262145.f_21603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21593 && iVar1 < Global_262145.f_21613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21581 && iVar1 < Global_262145.f_21601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21597 && iVar1 < Global_262145.f_21617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21595 && iVar1 < Global_262145.f_21615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21596 && iVar1 < Global_262145.f_21616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21591 && iVar1 < Global_262145.f_21611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21598 && iVar1 < Global_262145.f_21618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21594 && iVar1 < Global_262145.f_21614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21590 && iVar1 < Global_262145.f_21610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21582 && iVar1 < Global_262145.f_21602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21584 && iVar1 < Global_262145.f_21604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21585 && iVar1 < Global_262145.f_21605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21586 && iVar1 < Global_262145.f_21606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21587 && iVar1 < Global_262145.f_21607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21588 && iVar1 < Global_262145.f_21608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21589 && iVar1 < Global_262145.f_21609)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22541 && iVar1 < Global_262145.f_22569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22542 && iVar1 < Global_262145.f_22570)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22543 && iVar1 < Global_262145.f_22571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22544 && iVar1 < Global_262145.f_22572)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22545 && iVar1 < Global_262145.f_22573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22546 && iVar1 < Global_262145.f_22574)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22547 && iVar1 < Global_262145.f_22575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22548 && iVar1 < Global_262145.f_22576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22549 && iVar1 < Global_262145.f_22577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22550 && iVar1 < Global_262145.f_22578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22551 && iVar1 < Global_262145.f_22579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22552 && iVar1 < Global_262145.f_22580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22553 && iVar1 < Global_262145.f_22581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22554 && iVar1 < Global_262145.f_22582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22555 && iVar1 < Global_262145.f_22583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22556 && iVar1 < Global_262145.f_22584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22557 && iVar1 < Global_262145.f_22585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22558 && iVar1 < Global_262145.f_22586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22559 && iVar1 < Global_262145.f_22587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22560 && iVar1 < Global_262145.f_22588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22561 && iVar1 < Global_262145.f_22589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22562 && iVar1 < Global_262145.f_22590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22563 && iVar1 < Global_262145.f_22591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22564 && iVar1 < Global_262145.f_22592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22565 && iVar1 < Global_262145.f_22593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22566 && iVar1 < Global_262145.f_22594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22567 && iVar1 < Global_262145.f_22595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22568 && iVar1 < Global_262145.f_22596)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23761 && iVar1 < Global_262145.f_23777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23762 && iVar1 < Global_262145.f_23778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23766 && iVar1 < Global_262145.f_23782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23769 && iVar1 < Global_262145.f_23785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23774 && iVar1 < Global_262145.f_23790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23768 && iVar1 < Global_262145.f_23784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23760 && iVar1 < Global_262145.f_23776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23767 && iVar1 < Global_262145.f_23783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23773 && iVar1 < Global_262145.f_23789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23772 && iVar1 < Global_262145.f_23788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23763 && iVar1 < Global_262145.f_23779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23765 && iVar1 < Global_262145.f_23781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23775 && iVar1 < Global_262145.f_23791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23771 && iVar1 < Global_262145.f_23787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23764 && iVar1 < Global_262145.f_23780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23770 && iVar1 < Global_262145.f_23786)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23845)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26267 && iVar1 < Global_262145.f_26269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25280 && iVar1 < Global_262145.f_25273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25281 && iVar1 < Global_262145.f_25274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25282 && iVar1 < Global_262145.f_25275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25283 && iVar1 < Global_262145.f_25276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26268 && iVar1 < Global_262145.f_26270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25284 && iVar1 < Global_262145.f_25277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25285 && iVar1 < Global_262145.f_25278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25286 && iVar1 < Global_262145.f_25279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25291 && iVar1 < Global_262145.f_25312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25292 && iVar1 < Global_262145.f_25313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25293 && iVar1 < Global_262145.f_25314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25294 && iVar1 < Global_262145.f_25315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25295 && iVar1 < Global_262145.f_25316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25296 && iVar1 < Global_262145.f_25317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25297 && iVar1 < Global_262145.f_25318)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25298 && iVar1 < Global_262145.f_25319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25299 && iVar1 < Global_262145.f_25320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25300 && iVar1 < Global_262145.f_25321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25301 && iVar1 < Global_262145.f_25322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25302 && iVar1 < Global_262145.f_25323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25303 && iVar1 < Global_262145.f_25324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25304 && iVar1 < Global_262145.f_25325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25305 && iVar1 < Global_262145.f_25326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25306 && iVar1 < Global_262145.f_25327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25307 && iVar1 < Global_262145.f_25328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25308 && iVar1 < Global_262145.f_25329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25309 && iVar1 < Global_262145.f_25330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25310 && iVar1 < Global_262145.f_25331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25311 && iVar1 < Global_262145.f_25332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28111 && iVar1 < Global_262145.f_28132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28112 && iVar1 < Global_262145.f_28133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28113 && iVar1 < Global_262145.f_28134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28114 && iVar1 < Global_262145.f_28135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28115 && iVar1 < Global_262145.f_28136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28116 && iVar1 < Global_262145.f_28137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28117 && iVar1 < Global_262145.f_28138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28118 && iVar1 < Global_262145.f_28139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28119 && iVar1 < Global_262145.f_28140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28120 && iVar1 < Global_262145.f_28141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28121 && iVar1 < Global_262145.f_28142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28122 && iVar1 < Global_262145.f_28143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28123 && iVar1 < Global_262145.f_28144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28124 && iVar1 < Global_262145.f_28145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28125 && iVar1 < Global_262145.f_28146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28126 && iVar1 < Global_262145.f_28147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28127 && iVar1 < Global_262145.f_28148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28128 && iVar1 < Global_262145.f_28149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28129 && iVar1 < Global_262145.f_28150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28130 && iVar1 < Global_262145.f_28151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28131 && iVar1 < Global_262145.f_28152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28154 && iVar1 < Global_262145.f_28155) && !Global_262145.f_28109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28157 && iVar1 < Global_262145.f_28158) && !Global_262145.f_28110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28162 && iVar1 < Global_262145.f_28165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28163 && iVar1 < Global_262145.f_28166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28164 && iVar1 < Global_262145.f_28167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29178 && iVar1 < Global_262145.f_28843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28829 && iVar1 < Global_262145.f_28850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28830 && iVar1 < Global_262145.f_28836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29176 && iVar1 < Global_262145.f_28844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29177 && iVar1 < Global_262145.f_28845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28823 && iVar1 < Global_262145.f_28842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28824 && iVar1 < Global_262145.f_28851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28825 && iVar1 < Global_262145.f_28841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28826 && iVar1 < Global_262145.f_28839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29172 && iVar1 < Global_262145.f_28846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29173 && iVar1 < Global_262145.f_28847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29174 && iVar1 < Global_262145.f_28848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29175 && iVar1 < Global_262145.f_28849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28827 && iVar1 < Global_262145.f_28838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28828 && iVar1 < Global_262145.f_28840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29620 && iVar1 < Global_262145.f_29603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29621 && iVar1 < Global_262145.f_29604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29622 && iVar1 < Global_262145.f_29605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29623 && iVar1 < Global_262145.f_29606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29624 && iVar1 < Global_262145.f_29607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29625 && iVar1 < Global_262145.f_29608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29626 && iVar1 < Global_262145.f_29609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29627 && iVar1 < Global_262145.f_29610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29628 && iVar1 < Global_262145.f_29611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29637)
		{
		}
		else if (!Global_262145.f_29629 && iVar1 < Global_262145.f_29612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29630 && iVar1 < Global_262145.f_29613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29631 && iVar1 < Global_262145.f_29614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29632 && iVar1 < Global_262145.f_29615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29633 && iVar1 < Global_262145.f_29616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29638)
		{
		}
		else if (!Global_262145.f_29634 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29635 && iVar1 < Global_262145.f_29618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29636 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30484 && iVar1 < Global_262145.f_30467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30485 && iVar1 < Global_262145.f_30468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30486 && iVar1 < Global_262145.f_30469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30487 && iVar1 < Global_262145.f_30470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30488 && iVar1 < Global_262145.f_30471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30489 && iVar1 < Global_262145.f_30472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30490 && iVar1 < Global_262145.f_30473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30491 && iVar1 < Global_262145.f_30474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30492 && iVar1 < Global_262145.f_30475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30493 && iVar1 < Global_262145.f_30476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30494 && iVar1 < Global_262145.f_30477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30495 && iVar1 < Global_262145.f_30478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30496 && iVar1 < Global_262145.f_30479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30497 && iVar1 < Global_262145.f_30480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30498 && iVar1 < Global_262145.f_30481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30499 && iVar1 < Global_262145.f_30482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30500 && iVar1 < Global_262145.f_30483)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_947()
{
	return 0;
}

int func_948()
{
	return 1;
}

int func_949()
{
	return 1;
}

int func_950()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_951()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_952()
{
	var uVar0;
	
	uVar0 = func_953();
	if (!func_160())
	{
		if (func_179() != func_29())
		{
			uVar0 = func_975(func_179()) + 1;
		}
	}
	return uVar0;
}

int func_953()
{
	return func_975(PLAYER::PLAYER_ID()) + 1;
}

int func_954()
{
	return func_144(6115, -1, 0);
}

void func_955(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1681857);
	func_956();
}

void func_956()
{
	struct<44> Var0;
	
	Global_1681857 = { Var0 };
	Global_1681857.f_23 = 0;
	Global_1681857.f_24 = 0;
	Global_1681857.f_16 = 0;
}

bool func_957(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 12);
}

bool func_958(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 13);
}

int func_959(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 12) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 13)) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_960(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 0) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_961(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (((((MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 3) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 4)) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 5)) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 0)) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_962(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 6) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 7)) || MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_261, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_963(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 9);
}

void func_964(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1681794);
	func_965();
}

void func_965()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1681794 = { Var0 };
	Global_1681794.f_24 = 0;
	Global_1681794.f_25 = 0;
	Global_1681794.f_17 = 0;
}

void func_966(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1681740);
	func_967();
}

void func_967()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1681740 = { Var0 };
	Global_1681740.f_29 = 0;
	Global_1681740.f_30 = 0;
	Global_1681740.f_17 = 0;
}

int func_968(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_329(iParam0, iParam1, 2);
	bVar1 = func_329(iParam0, iParam1, 1);
	bVar2 = func_329(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_969(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_146(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17878;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17877;
		}
		else
		{
			iVar0 = Global_262145.f_17859;
		}
		iVar1 = 19;
	}
	else if (func_729(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_93(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17858;
			iVar1 = 20;
		}
	}
	else if (func_100(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17878;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17877;
		}
		else
		{
			iVar0 = Global_262145.f_17859;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_733(func_179()), func_732(func_179()), func_689(), func_688(), iVar1, iVar0);
	}
	func_971(iVar0);
	func_970(iVar0);
	return iVar0;
}

void func_970(int iParam0)
{
	int iVar0;
	
	iVar0 = func_144(3970, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_465 = iVar0;
	func_142(3970, iVar0, -1, 1, 0);
}

void func_971(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1630816[iVar0 /*597*/].f_11.f_464 = (Global_1630816[iVar0 /*597*/].f_11.f_464 + iParam0);
	if (Global_1630816[iVar0 /*597*/].f_11.f_464 < -9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
	else if (Global_1630816[iVar0 /*597*/].f_11.f_464 > 9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
}

int func_972(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_118(PLAYER::PLAYER_ID()) || func_61(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_973(var uParam0)
{
	STATS::_0x316DB59CD14C1774(&Global_1682001);
	func_974();
}

void func_974()
{
	struct<36> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1682001 = { Var0 };
}

int func_975(int iParam0)
{
	if (func_266(iParam0) == func_29())
	{
		return 0;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_19;
}

int func_976(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_412(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_67(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_981(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_979(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_978(PLAYER::PLAYER_ID());
			if (func_130(func_131(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_978(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_977(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_977(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_977(int iParam0)
{
	if (func_67(PLAYER::PLAYER_ID()) == 238 || func_67(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_474;
	}
	return -1;
}

int func_978(int iParam0)
{
	if (func_67(PLAYER::PLAYER_ID()) == 237 || func_67(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_473;
	}
	return -1;
}

int func_979(int iParam0)
{
	return func_980(iParam0, 150);
}

int func_980(int iParam0, int iParam1)
{
	if (func_412(iParam0) == iParam1)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_471;
	}
	return -1;
}

int func_981(int iParam0)
{
	return func_980(iParam0, 236);
}

int func_982(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_983(struct<21> Param0)
{
	func_1035(func_1036(Param0), Param0);
	func_1032(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_907, 35);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_942, 193);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_986(0, 0, 0);
	func_984();
	return 1;
}

void func_984()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	PED::ADD_RELATIONSHIP_GROUP("relJoust0", &(uLocal_862[0]));
	PED::ADD_RELATIONSHIP_GROUP("relJoust1", &(uLocal_862[1]));
	iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574988[iVar1], uLocal_862[iVar2]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_862[iVar2], Global_1574988[iVar1]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, uLocal_862[iVar2], joaat("COP"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, joaat("COP"), uLocal_862[iVar2]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_862[iVar2], Global_1575036[5]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575036[5], uLocal_862[iVar2]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_862[iVar2], Global_1575021);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575021, uLocal_862[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_862[0], uLocal_862[1]);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_862[1], uLocal_862[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, uLocal_862[iVar2]);
		func_985(&(uLocal_862[iVar2]));
		iVar2++;
	}
}

void func_985(var uParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1285976420);
}

void func_986(int iParam0, int iParam1, bool bParam2)
{
	func_1031();
	if (func_780(PLAYER::PLAYER_ID()))
	{
		func_990(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_989(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1681708, 0);
				break;
			}
	}
	if (!func_160() && !func_286(PLAYER::PLAYER_ID(), 1))
	{
		if (func_807())
		{
			func_988(3);
		}
	}
	func_988(4);
	if (func_177(0))
	{
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57 = func_179();
	}
	if (func_100(iParam0))
	{
		func_967();
		Global_1681740.f_18 = func_722(func_96());
	}
	else if (func_108(func_893(PLAYER::PLAYER_ID())))
	{
		func_965();
		Global_1681794.f_18 = func_722(func_96());
	}
	if (bParam2)
	{
		if (!func_803())
		{
			func_744(1);
		}
	}
	func_987();
}

void func_987()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1368721.f_534[iVar0 /*42*/].f_1 = func_29();
		Global_1368721.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_988(int iParam0)
{
	MISC::SET_BIT(&(Global_2544210.f_5191.f_46), iParam0);
}

int func_989(int iParam0, bool bParam1)
{
	return func_284(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_990(bool bParam0)
{
	int iVar0;
	
	func_914(33);
	func_914(34);
	func_914(35);
	func_914(36);
	func_914(37);
	func_914(38);
	func_914(39);
	func_914(40);
	func_914(43);
	func_914(41);
	func_914(54);
	func_914(42);
	func_914(47);
	func_1030(23);
	func_1030(24);
	func_914(92);
	MISC::CLEAR_BIT(&(Global_2544210.f_1800), 2);
	func_1029();
	func_1024();
	func_1019();
	func_1014();
	func_1003();
	func_999();
	func_995();
	func_992();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2544210.f_5191.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_991(3))
	{
		func_1030(3);
	}
	else if (func_991(4))
	{
		func_1030(4);
	}
	else if (func_991(5))
	{
		func_1030(5);
	}
	else if (func_991(6))
	{
		func_1030(6);
	}
	else if (func_991(7))
	{
		func_1030(7);
	}
	else if (((((((((((((((((func_991(0) || func_991(1)) || func_991(2)) || func_991(8)) || func_991(9)) || func_991(10)) || func_991(11)) || func_991(12)) || func_991(13)) || func_991(14)) || func_991(15)) || func_991(16)) || func_991(17)) || func_991(18)) || func_991(19)) || func_991(20)) || func_991(21)) || func_991(22))
	{
		func_1030(8);
		func_1030(0);
		func_1030(1);
		func_1030(2);
		func_1030(9);
		func_1030(10);
		func_1030(11);
		func_1030(12);
		func_1030(13);
		func_1030(14);
		func_1030(15);
		func_1030(16);
		func_1030(17);
		func_1030(18);
		func_1030(19);
		func_1030(20);
		func_1030(21);
		func_1030(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2544210.f_5191.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_991(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_14[iVar0], iVar1);
}

void func_992()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		if (func_994(iVar0))
		{
			func_993(iVar0);
		}
		iVar0++;
	}
}

void func_993(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_35[iVar0]), iVar1);
}

bool func_994(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_35[iVar0], iVar1);
}

void func_995()
{
	if (func_997())
	{
		func_996(0);
		func_996(1);
		func_996(2);
		func_996(3);
	}
}

void func_996(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_33[iVar0]), iVar1);
}

int func_997()
{
	if (((func_998(0) || func_998(1)) || func_998(2)) || func_998(3))
	{
		return 1;
	}
	return 0;
}

bool func_998(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_33[iVar0], iVar1);
}

void func_999()
{
	if (func_1001())
	{
		func_1000(4);
		func_1000(5);
		func_1000(6);
		func_1000(7);
	}
}

void func_1000(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_31[iVar0]), iVar1);
}

int func_1001()
{
	if (((func_1002(4) || func_1002(5)) || func_1002(6)) || func_1002(7))
	{
		return 1;
	}
	return 0;
}

bool func_1002(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_31[iVar0], iVar1);
}

void func_1003()
{
	int iVar0;
	
	if (func_1013())
	{
		func_1012(8);
		func_1012(9);
		func_1012(10);
		func_1012(12);
		func_1012(13);
		func_1012(14);
		func_1012(19);
		func_1012(20);
		func_1012(21);
		func_1012(22);
		func_1012(23);
		func_1012(24);
		func_1012(25);
		func_1012(26);
		func_1012(15);
		func_1012(16);
		func_1012(17);
		func_1012(18);
		func_1012(35);
		func_1012(45);
		func_1012(46);
		if (func_1011(11))
		{
			func_1012(11);
			iVar0 = func_144(7228, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_142(7228, iVar0, -1, 1, 0);
		}
	}
	if (func_1011(48))
	{
		if (func_1009(151, 3))
		{
			func_1007(151, 3);
		}
		func_1012(48);
	}
	if (func_1011(49))
	{
		if (func_1009(152, 3))
		{
			func_1007(152, 3);
		}
		func_1012(49);
	}
	if (func_1011(50))
	{
		if (func_1009(153, 3))
		{
			func_1007(153, 3);
		}
		func_1012(50);
	}
	if (func_1011(51))
	{
		if (func_1009(func_1004(), 3))
		{
			func_1007(func_1004(), 3);
		}
		func_1012(51);
	}
}

int func_1004()
{
	if (func_1006())
	{
		func_1005(154, Global_19798, 1);
	}
	return 154;
}

void func_1005(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_1006()
{
	int iVar0;
	
	iVar0 = func_266(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_29()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1007(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1008(iParam0, iVar0, 0);
			func_1005(iParam0, iVar0, 0);
		}
	}
}

void func_1008(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_1009(int iParam0, int iParam1)
{
	if (func_1010(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1010(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_12[iParam1];
}

bool func_1011(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_26[iVar0], iVar1);
}

void func_1012(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_26[iVar0]), iVar1);
}

int func_1013()
{
	if (((((((((((((((((((((func_1011(8) || func_1011(9)) || func_1011(10)) || func_1011(12)) || func_1011(11)) || func_1011(13)) || func_1011(14)) || func_1011(19)) || func_1011(20)) || func_1011(21)) || func_1011(22)) || func_1011(23)) || func_1011(24)) || func_1011(25)) || func_1011(26)) || func_1011(15)) || func_1011(16)) || func_1011(17)) || func_1011(18)) || func_1011(35)) || func_1011(45)) || func_1011(46))
	{
		return 1;
	}
	return 0;
}

void func_1014()
{
	if (func_1018())
	{
		func_1017(0);
		func_1017(1);
		func_1017(2);
		func_1017(3);
		func_1017(4);
		func_1017(5);
		if (func_1016(32))
		{
			if (func_1009(func_1015(), 3))
			{
				func_1007(func_1015(), 3);
			}
			func_1017(32);
		}
	}
}

int func_1015()
{
	if (func_1006())
	{
		func_1005(12, Global_19798, 1);
	}
	return 12;
}

bool func_1016(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_23[iVar0], iVar1);
}

void func_1017(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_23[iVar0]), iVar1);
}

int func_1018()
{
	if ((((func_1016(1) || func_1016(0)) || func_1016(2)) || func_1016(4)) || func_1016(5))
	{
		return 1;
	}
	return 0;
}

void func_1019()
{
	if (func_1023())
	{
		func_1022(0);
		func_1022(1);
		func_1022(2);
		func_1022(3);
		func_1022(4);
		func_1022(5);
		func_1022(6);
		func_1022(7);
		if (func_1021(8))
		{
			func_1022(8);
		}
		if (func_1021(15))
		{
			if (func_1009(func_1020(), 3))
			{
				func_1007(func_1020(), 3);
			}
			func_1022(15);
		}
	}
}

int func_1020()
{
	if (func_1006())
	{
		func_1005(20, Global_19798, 1);
	}
	return 20;
}

bool func_1021(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_21[iVar0], iVar1);
}

void func_1022(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_21[iVar0]), iVar1);
}

int func_1023()
{
	if ((((((((func_1021(0) || func_1021(1)) || func_1021(2)) || func_1021(3)) || func_1021(4)) || func_1021(5)) || func_1021(6)) || func_1021(7)) || func_1021(8))
	{
		return 1;
	}
	return 0;
}

void func_1024()
{
	if (func_1028())
	{
		func_1027(0);
		func_1027(1);
		func_1027(2);
		func_1027(3);
		func_1027(4);
		func_1027(5);
		func_1027(6);
		func_1027(7);
		func_1027(8);
		func_1027(9);
		func_1027(10);
		func_1027(11);
		func_1027(12);
		if (func_1026(13))
		{
			if (func_1009(func_1025(), 3))
			{
				func_1007(func_1025(), 3);
			}
			func_1027(13);
		}
	}
}

int func_1025()
{
	if (func_1006())
	{
		func_1005(76, Global_19798, 1);
	}
	return 76;
}

bool func_1026(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_19[iVar0], iVar1);
}

void func_1027(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_19[iVar0]), iVar1);
}

int func_1028()
{
	if ((((((((((((func_1026(0) || func_1026(1)) || func_1026(2)) || func_1026(3)) || func_1026(4)) || func_1026(5)) || func_1026(6)) || func_1026(7)) || func_1026(8)) || func_1026(9)) || func_1026(10)) || func_1026(11)) || func_1026(12))
	{
		return 1;
	}
	return 0;
}

void func_1029()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2544210.f_5191.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1030(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_14[iVar0]), iVar1);
}

void func_1031()
{
	struct<14> Var0;
	
	Global_1681722 = { Var0 };
	Global_1681722.f_14 = 0;
	Global_1681722.f_15 = 0;
}

int func_1032(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1034();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1033())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1034();
					}
					else
					{
						return 0;
					}
				}
				if (func_840())
				{
					if (!bParam2)
					{
						func_1034();
					}
					else
					{
						return 0;
					}
				}
				if (func_838(157))
				{
					if (!bParam2)
					{
						func_1034();
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
					func_1034();
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
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_1034();
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
			func_1034();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1033()
{
	return Global_1312878;
}

void func_1034()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1035(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1034();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_1036(int iParam0)
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
		
		case joaat("mpsv_lp0_31"):
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
		
		case 141:
			return 32;
		
		case 142:
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
		
		case 153:
			return 32;
		
		case 154:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 32;
		
		case 148:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 155:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 2;
		
		case 164:
			return 1;
		
		case 160:
			return 2;
		
		case 161:
			return 4;
		
		case 162:
			return 2;
		
		case 163:
			return 2;
		
		case 145:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 0;
		
		case 187:
			return 1;
		
		case 172:
			return 4;
		
		case 175:
			return 4;
		
		case 176:
			return 1;
		
		case 177:
			return 1;
		
		case 183:
			return 1;
		
		case 179:
			return 2;
		
		case 184:
			return 1;
		
		case 180:
			return 1;
		
		case 178:
			return 2;
		
		case 181:
			return 8;
		
		case 182:
			return 8;
		
		case 185:
			return 1;
		
		case 186:
			return 2;
		
		case 173:
			return 16;
		
		case 174:
			return 32;
		
		default:
	}
	switch (func_356(func_1037(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_1037(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 159:
			return 15;
		
		case 166:
			return 8;
		
		case 160:
			return 14;
		
		case 164:
			return 122;
		
		case 167:
			return 1;
		
		case 165:
			return 5;
		
		case 168:
			return 6;
		
		case 161:
			return 11;
		
		case 169:
			return 0;
		
		case 170:
			return 2;
		
		case 162:
			return 13;
		
		case 171:
			return 3;
		
		case 163:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 269;
		
		case 139:
			return 270;
		
		case 140:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 281;
}

int func_1038(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
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
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

