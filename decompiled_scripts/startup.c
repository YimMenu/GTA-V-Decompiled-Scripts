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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	Local_50 = { 1694.74f, 3276.502f, 41.2796f };
	Local_53 = { 8.79494f, 0.59893f, 154.8464f };
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	UI::_0x808519373FD336A3(0);
	GAMEPLAY::_0x4EBB7E87AA0DBED4(0);
	STREAMING::REMOVE_IPL("prologue_DistantLights");
	STREAMING::REMOVE_IPL("prologue_LODLights");
	iLocal_56 = 0;
	bVar0 = func_40();
	if (GAMEPLAY::_0xA049A5BE0F04F2F8() || GAMEPLAY::_0x3BBBD13E5041A79E())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		SCRIPT::_0xB1577667C3708F9B();
	}
	GAMEPLAY::_USE_FREEMODE_MAP_BEHAVIOR(0);
	func_39(-1391464465, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-1391464465);
	func_39(-879170170, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-879170170);
	func_39(1985326750, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(1985326750);
	func_39(1206468990, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(1206468990);
	func_39(2045980069, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(2045980069);
	func_39(889930491, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(889930491);
	func_39(734222582, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(734222582);
	func_39(-1286416747, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-1286416747);
	func_39(-556768532, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-556768532);
	func_39(-1350801275, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-1350801275);
	Global_4270623 = 0;
	func_39(-498440036, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-498440036);
	func_39(-2118035074, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-2118035074);
	func_38();
	switch (iLocal_56)
	{
		case 0:
			func_39(1790649497, 1424);
			SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(1790649497);
			break;
	}
	SYSTEM::WAIT(0);
	Global_76624 = 1;
	Global_2 = bVar0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	switch (iLocal_56)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_39(2003913879, 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("standard_global_reg");
			while ((!GAMEPLAY::IS_BIT_SET(Global_4270623, 0) || !GAMEPLAY::IS_BIT_SET(Global_4270623, 1)) || !GAMEPLAY::IS_BIT_SET(Global_4270623, 2))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_4270623, 0))
				{
				}
				if (!GAMEPLAY::IS_BIT_SET(Global_4270623, 1))
				{
				}
				if (!GAMEPLAY::IS_BIT_SET(Global_4270623, 2))
				{
				}
				SYSTEM::WAIT(0);
			}
			GAMEPLAY::START_SAVE_DATA(&Global_111638, 1, 1);
			GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&Global_111638, "fSaveVersion");
			GAMEPLAY::STOP_SAVE_DATA();
			if (Global_1)
			{
				Global_0 = Global_111638;
			}
			Global_111638 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_27(Global_0);
				}
			}
			break;
	}
	GAMEPLAY::START_SAVE_DATA(&Global_2097152, 10931, 0);
	GAMEPLAY::_START_SAVE_ARRAY(&Global_2097152, 10931, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_21(&(Global_2097152[iVar1]), iVar1);
		func_19(&(Global_2097152[iVar1]), iVar1);
		func_17(&(Global_2097152[iVar1]), iVar1);
		func_14(&(Global_2097152[iVar1]), iVar1);
		func_12(&(Global_2097152[iVar1]), iVar1);
		func_11(&(Global_2097152[iVar1]), iVar1);
		func_10(&(Global_2097152[iVar1]), iVar1);
		func_3(&(Global_2097152[iVar1]), iVar1);
		iVar1++;
	}
	GAMEPLAY::STOP_SAVE_STRUCT();
	GAMEPLAY::STOP_SAVE_DATA();
	iVar18 = 10931;
	iVar19 = GAMEPLAY::_0xA09F896CE912481F(0);
	if (iVar18 != iVar19)
	{
	}
	if (!NETWORK::_0xEA14EEF5B7CD2C30() && !NETWORK::_0x1D4DC17C38FEAFF0())
	{
		NETWORK::_0xB606E6CC59664972(0);
	}
	PATHFIND::_0x228E5C6AD4D74BFD(0);
	GAMEPLAY::_0x4EBB7E87AA0DBED4(0);
	func_2();
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()
{
	Global_150468 = 1;
	Global_150469 = 1;
}

void func_3(var uParam0, int iParam1)
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10903.f_19), 8, &cVar0);
	GAMEPLAY::_START_SAVE_STRUCT(&(uParam0->f_10903.f_19[0]), 7, "TEMPSTAT_DATE");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10903.f_19[0]), "TEMPSTAT_DATE.year");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10903.f_19[0].f_1), "TEMPSTAT_DATE.month");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10903.f_19[0].f_2), "TEMPSTAT_DATE.day");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10903.f_19[0].f_3), "TEMPSTAT_DATE.hour");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10903.f_19[0].f_4), "TEMPSTAT_DATE.minute");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10903.f_19[0].f_5), "TEMPSTAT_DATE.seconds");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10903.f_19[0].f_6), "TEMPSTAT_DATE.Milliseconds");
	GAMEPLAY::STOP_SAVE_STRUCT();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_5(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10903.f_15), 4, &cVar0);
	GAMEPLAY::_START_SAVE_STRUCT(&(uParam0->f_10903.f_15[0]), 3, "TEMPSTAT_VEC");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10903.f_15[0]), "TEMPSTAT_VEC.x");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10903.f_15[0].f_1), "TEMPSTAT_VEC.y");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10903.f_15[0].f_2), "TEMPSTAT_VEC.z");
	GAMEPLAY::STOP_SAVE_STRUCT();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_6(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10903.f_6), 9, &cVar0);
	GAMEPLAY::_0x8269816F6CFD40F8(&(uParam0->f_10903.f_6[0]), "TEMPSTAT_LABEL");
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_7(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10903.f_4), 2, &cVar0);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_10903.f_4[0]), "TEMPSTAT_BOOL");
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_8(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10903.f_2), 2, &cVar0);
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10903.f_2[0]), "TEMPSTAT_FLOAT");
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_9(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10903), 2, &cVar0);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10903[0]), "TEMPSTAT_INT1");
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_10(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	GAMEPLAY::_START_SAVE_STRUCT(&(uParam0->f_10753), 150, &cVar0);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10753), "MPATM_CARET_");
	iVar6 = 0;
	StringCopy(&Var7, "MPATMLOGVAL", 16);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10753.f_1), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar11 = { Var7 };
		StringIntConCat(&cVar11, iVar6, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10753.f_1[iVar6]), &cVar11);
		iVar6++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	StringCopy(&Var7, "MPATMLOGSCRS", 16);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10753.f_18), 97, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar15 = { Var7 };
		StringIntConCat(&cVar15, iVar6, 16);
		GAMEPLAY::_0x48F069265A0E4BEC(&(uParam0->f_10753.f_18[iVar6]), &cVar15);
		iVar6++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	StringCopy(&Var7, "MPATMLOGACT", 16);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10753.f_115), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar19 = { Var7 };
		StringIntConCat(&cVar19, iVar6, 16);
		GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_10753.f_115[iVar6]), &cVar19);
		iVar6++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	StringCopy(&Var7, "MPATMLOGDAT", 16);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10753.f_132), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar23 = { Var7 };
		StringIntConCat(&cVar23, iVar6, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10753.f_132[iVar6]), &cVar23);
		iVar6++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_10753.f_149), "mpAnyVecBought");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_11(var uParam0, int iParam1)
{
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	GAMEPLAY::_START_SAVE_STRUCT(&(uParam0->f_10512), 241, &Var0);
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512), "BOUNTY_GAMERH64_1");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_1), "BOUNTY_GAMERH64_2");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_2), "BOUNTY_GAMERH64_3");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_3), "BOUNTY_GAMERH64_4");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_4), "BOUNTY_GAMERH64_5");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_5), "BOUNTY_GAMERH64_6");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_6), "BOUNTY_GAMERH64_7");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_7), "BOUNTY_GAMERH64_8");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_8), "BOUNTY_GAMERH64_9");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_9), "BOUNTY_GAMERH64_10");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_10), "BOUNTY_GAMERH64_11");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_11), "BOUNTY_GAMERH64_12");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_12), "BOUNTY_GAMERH64_13");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10512.f_13), "BOUNTY_TIME");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10512.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10512.f_15), 209, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_1", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14]), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_2", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_1), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_3", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_2), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_4", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_3), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_5", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_4), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_6", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_5), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_7", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_6), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_8", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_7), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_9", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_8), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_10", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_9), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_11", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_10), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_12", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_11), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_13", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10512.f_15[iVar14].f_12), &cVar6);
		iVar14++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_10512.f_224), 17, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringIntConCat(&cVar6, iVar14, 32);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10512.f_224[iVar14]), &cVar6);
		iVar14++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_12(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_6174), &cVar0);
}

void func_13(var uParam0, char[4] cParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 4338, cParam1);
	GAMEPLAY::REGISTER_INT_TO_SAVE(uParam0, "CASH_GIVEN_TOTAL");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "CASH_GIVEN_TIME");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "LAST_SAVED_CAR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iNewVehPurchased");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "WHEELIE_TIMER");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "WHEELIE_UPDATES");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "WHEELIE_TIME");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_7), "GRAB_TIME");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iLastSoldVehicleTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "ilasttimeplayed");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iSaveCoupons");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iLastBruciePillReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iLastSecVanReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iLastBountyReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iLastParaReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iLastCrateDropReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLastGangAttackReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "iLastImpExpReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iLastInsuranceReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iLastSurvivalReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "iLastBikerBackupReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "iLastVagosBackupReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "iLastLesterVehReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "iLastPersonalVehDeliveryReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iLastPegasusVehicleReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iLastMerryweatherReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "iLastLesterHelpReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "iLastLesterReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "iLastGeraldReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "iLastSimeonReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_31), "iLastMartinReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iLastRonReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_33), "iRecentlyPassedMissionBitset");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_34), "iRecentlyPassedMissionTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_35), "iLastImportExportDelTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_36), "iLastImportExportListTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_37), "iMyLastImportExportListDay");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_38), "iVehicleWebsiteReminderTime");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bDefaultClothesSet");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_40), 6, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		StringCopy(&Var1, "CLOTHES", 16);
		StringIntConCat(&Var1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_40[iVar0]), &Var1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_46), 1225, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_46[iVar0]), &Var1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1271), "iLastCrewCharWasIn");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1272), "iStripperUnlockedBS");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1273), "iGeneralBS");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1274), "iCarsModifiedTimeStamp");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1275), 10, "GOLF_fLongestDriveHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_1275)
	{
		StringCopy(&cVar6, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1275[iVar5]), &cVar6);
		iVar5++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1285), 10, "GOLF_fLongestPuttHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_1285)
	{
		StringCopy(&cVar6, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1285[iVar5]), &cVar6);
		iVar5++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1295), "GOLF_iBestRound");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1296), "GOLF_fLongestDrive");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1297), "GOLF_fLongestPutt");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1298), "iShareLJCashTotal");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1299), "iShareLJCashTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1300), "iReceiveLJCashTotal");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1301), "iReceiveLJCashTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1302), "LAST_ACC_PROP");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1303), "MULTI1_PROP_VAL");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1328), "LAST_ACC_SMPLINT");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1304), 24, "PROP_ARY_VAL");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1304)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1304[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1329), "KR_PATCH_UPDATE");
	iVar22 = 0;
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2685), 919, "DLC_MODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_2685)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2685[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	iVar22 = 0;
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_3604), 502, "DLC_SUPERMODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_3604)
	{
		StringCopy(&Var1, "DLC_SMODS_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3604[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1330), 274, "OUTFIT_CompDraw");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1330[iVar22]), 13, &Var1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1330[iVar22][iVar23]), &Var1);
			iVar23++;
		}
		GAMEPLAY::STOP_SAVE_ARRAY();
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1604), 274, "OUTFIT_CompTex");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1604[iVar22]), 13, &Var1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1604[iVar22][iVar23]), &Var1);
			iVar23++;
		}
		GAMEPLAY::STOP_SAVE_ARRAY();
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1878), 211, "OUTFIT_PropID");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1878[iVar22]), 10, &Var1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1878[iVar22][iVar23]), &Var1);
			iVar23++;
		}
		GAMEPLAY::STOP_SAVE_ARRAY();
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2089), 211, "OUTFIT_PropTex");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2089[iVar22]), 10, &Var1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2089[iVar22][iVar23]), &Var1);
			iVar23++;
		}
		GAMEPLAY::STOP_SAVE_ARRAY();
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2300), 22, "OUTFIT_Stored");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2300[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2322), 22, "OUTFIT_CrewTatA");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2322[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2344), 22, "OUTFIT_CrewTatB");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2344[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2366), 22, "OUTFIT_CrewTatC");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2366[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2388), 22, "OUTFIT_CrewTatD");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2388[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2410), 22, "OUTFIT_CrewTatE");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalE", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2410[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2432), 22, "OUTFIT_CrewTatF");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalF", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2432[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2623), 22, "OUTFIT_Shirt");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2623[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2454), 169, "OUTFIT_Name");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_0x8269816F6CFD40F8(&(uParam0->f_2454[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2645), 40, "LAST_JobGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_1", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22]), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_2", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_1), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_3", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_2), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_4", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_3), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_5", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_4), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_6", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_5), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_7", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_6), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_8", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_7), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_9", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_8), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_10", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_9), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_11", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_10), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_12", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_11), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_13", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2645[iVar22].f_12), &cVar24);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4106), "DO_CompletedObjectives");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4107), "DO_LoggedInToday");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4108), "DO_xValue");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4109), "DO_LastHistoryLength");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4110), "DO_LastResetTime");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4111), 10, "DO_Objectives");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4111[iVar22]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4111[iVar22].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4111[iVar22].f_2), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4121), 25, "DO_History");
	iVar22 = 0;
	while (iVar22 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4121[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4146), 49, "LAST_JobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar28 = { Var1 };
		StringConCat(&cVar28, "_1", 16);
		GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_4146[iVar22]), &cVar28);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4195), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "BGSAVEINT", 16);
		StringIntConCat(&Var1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4195[iVar0]), &Var1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4206), 3, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4206)
	{
		StringCopy(&Var1, "PROPLIB", 16);
		StringIntConCat(&Var1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4206[iVar0]), &Var1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4209), 40, "LAST_GOGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastGOG64_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_1", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22]), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_2", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_1), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_3", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_2), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_4", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_3), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_5", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_4), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_6", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_5), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_7", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_6), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_8", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_7), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_9", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_8), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_10", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_9), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_11", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_10), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_12", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_11), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_13", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4209[iVar22].f_12), &cVar32);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4249), 40, "LAST_GOJobGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastGJG64_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_1", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22]), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_2", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_1), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_3", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_2), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_4", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_3), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_5", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_4), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_6", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_5), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_7", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_6), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_8", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_7), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_9", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_8), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_10", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_9), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_11", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_10), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_12", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_11), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_13", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4249[iVar22].f_12), &cVar36);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4289), 49, "LAST_GOJobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastGJTL_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar40 = { Var1 };
		StringConCat(&cVar40, "_1", 16);
		GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_4289[iVar22]), &cVar40);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_14(var uParam0, int iParam1)
{
	func_15(&(uParam0->f_6086), iParam1);
}

void func_15(var uParam0, int iParam1)
{
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_41), 11, "CAR_HIDDEN");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_41[iVar16]), &cVar0);
		iVar16++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	func_16(uParam0, "CAR_APP_ORDER");
	StringCopy(&cVar0, "bUpdateMods", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_52), &cVar0);
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_53), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_55), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_54), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_60), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	GAMEPLAY::_0x6F7794F28C6B2535(&(uParam0->f_56), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_61), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_62), &cVar0);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_63), 11, "SAVED_VEH_SLOT");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_63[iVar16]), &cVar0);
		iVar16++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_74), 11, "SAVED_VEH_PRIO");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_74[iVar16]), &cVar0);
		iVar16++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_85), "LAST_USED");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_86), "NEW_SAVED");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_87), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 41, sParam1);
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iColour1Group");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColour2Group");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iWindowTint");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iTyreSmokeG");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iTyreSmokeB");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iEngine");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iBrakes");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iWheels");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iWheelType");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iExhaust");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iSuspension");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iArmour");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iHorn");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLights");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "bBulletProofTyres");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iTurbo");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iTyreSmoke");
	GAMEPLAY::_0x6F7794F28C6B2535(&(uParam0->f_21), "tlPlateText");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iPlateBack");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "UID");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "Cost");
	GAMEPLAY::_0x6F7794F28C6B2535(&(uParam0->f_28), "tlPlateText_pending");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iPlateBack_pending");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_33), "bProcessOrder");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_36), "bOrderPending");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_35), "bOrderReceivedOnBoot");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_34), "bOrderForPlayerVehicle");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_37), "bCheckPlateProfanity");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "bOrderPaidFor");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_38), "bSCProfanityFailed");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bOrderFailedFunds");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_17(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_18(&(uParam0->f_5506), &cVar0);
}

void func_18(var uParam0, char[4] cParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 580, cParam1);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(uParam0, "TV_ON");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "TV_CHANNEL_ID");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), "PENTHOUSE_TV_ON");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "PENTHOUSE_TV_CHANNEL_ID");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4), "MEDIA_ROOM_TV_ON");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "MEDIA_ROOM_TV_CHANNEL_ID");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_6), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_6[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_9), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_12), "GARAGE_TV_ON");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "GARAGE_TV_CHANNEL_ID");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_14), "GARAGE_RADIO_ON");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "GARAGE_RADIO_STATION_ID");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "NUMBERS_TIMES_SMOKED");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "NUMBER_TIMES_DRANK");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "NUMBER_TIMES_STRIPPERS");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "NUMBERS_TIMES_SMOKED_SECOND");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "NUMBER_TIMES_DRANK_SECOND");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "NUMBER_TIMES_STRIPPERS_SECOND");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "NUMBERS_TIMES_SMOKED3");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "NUMBER_TIMES_DRANK3");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "NUMBER_TIMES_STRIPPERS3");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "NUMBERS_TIMES_SMOKED4");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "NUMBER_TIMES_DRANK4");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "NUMBER_TIMES_STRIPPERS4");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "NUMBERS_TIMES_SMOKED5");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "NUMBER_TIMES_DRANK5");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "NUMBER_TIMES_STRIPPERS5");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_31), "NUMBERS_TIMES_SMOKEDYacht");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "NUMBER_TIMES_DRANKYacht");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_33), "NUMBER_TIMES_STRIPPERSYacht");
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_34), "DATE_LAST_CLEANED_APARTMENT");
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_35), "SHOWERS_TAKEN");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_36), 21, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_36[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_36[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_57), 21, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_57[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_57[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_78), 21, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_78[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_78[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_99), 481, "PROP_NAMEDVEHS");
	iVar0 = 0;
	while (iVar0 < 30)
	{
		StringCopy(&cVar1, "NAMEDVEH_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_99[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_19(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_20(&(uParam0->f_5500), &cVar0);
}

void func_20(var uParam0, char[4] cParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 6, cParam1);
	GAMEPLAY::REGISTER_INT_TO_SAVE(uParam0, "BAV_Timestamp");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1), 5, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_21(var uParam0, int iParam1)
{
	StringCopy(&Var0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_22(uParam0, &Var0);
}

void func_22(var uParam0, char* sParam1)
{
	iVar0 = 0;
	GAMEPLAY::_START_SAVE_ARRAY(uParam0, 5500, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&cVar1, "MP_VEHICLE", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		func_23(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_23(var uParam0, char[4] cParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 141, cParam1);
	func_24(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_102), "VEHICLE_BS");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_104), "PAID_PREMIUM");
	GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_105), "PAID_PLAYER");
	GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_121), "RADIO_STATION");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_103), "IMPOUND_TIME");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_137), "COLOUR_GROUP1");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_138), "COLOUR_GROUP2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_139), "PRICE_PAID");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_140), "OBTAIN_TIME");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_24(var uParam0, char* sParam1)
{
	func_26(uParam0, "VEHICLE_SETUP_STRUCT");
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 102, sParam1);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_78), "iSpawnVehicleHorn");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_79), "iHornID");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_80), "fEnveffScale");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_97), "iColour5");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_98), "iLivery2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_99), "iColour6");
	func_25(&(uParam0->f_81), "GamerHandleOfCarOwner");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_94), "OwnerStatus");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_95), "iFlags");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_96), "iPVSlot");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_100), "iPlayerIndex");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_101), "iIEPlayerVehicle");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_25(var uParam0, char* sParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 13, sParam1);
	GAMEPLAY::_0xA735353C77334EA0(uParam0, "Data64_1");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_1), "Data64_2");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2), "Data64_3");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_3), "Data64_4");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4), "Data64_5");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_5), "Data64_6");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_6), "Data64_7");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_7), "Data64_8");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_8), "Data64_9");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_9), "Data64_10");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10), "Data64_11");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_11), "Data64_12");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12), "Data64_13");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_26(var uParam0, char* sParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 78, sParam1);
	GAMEPLAY::REGISTER_INT_TO_SAVE(uParam0, "iPlateIndex");
	GAMEPLAY::_0x6F7794F28C6B2535(&(uParam0->f_1), "tlPlateText");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iColour1");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iColour2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iColourExtra1");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iColourExtra2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_62), "iTyreR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_63), "iTyreG");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_64), "iTyreB");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_65), "iWindowTintColour");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_67), "iLivery");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_69), "iWheelType");
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_68), "eRoofState");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_77), "iFlags");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_71), "iCustomR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_72), "iCustomG");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_73), "iCustomB");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_74), "iNeonR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_75), "iNeonG");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_76), "iNeonB");
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_66), "eModel");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_9), 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_59), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_70), "eLockState");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_27(float fParam0)
{
	func_36();
	if (fParam0 == 1f)
	{
		func_34();
	}
	if (fParam0 <= 1.1f)
	{
		func_33();
	}
	if (fParam0 < 1.5f)
	{
		func_31();
	}
	if (fParam0 <= 1.5f)
	{
		func_30();
	}
	if (fParam0 == 1.5f)
	{
		func_29();
	}
	if (fParam0 < 1.7f)
	{
		func_28();
	}
}

void func_28()
{
	Global_111638.f_26429.f_4 = 0;
}

void func_29()
{
	STATS::STAT_GET_INT(748568812, &iVar0, -1);
	STATS::STAT_GET_INT(-444882618, &iVar1, -1);
	STATS::STAT_GET_INT(-1467624267, &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_111638.f_668.f_1307 = (Global_111638.f_668.f_1307 - iVar0);
	}
}

void func_30()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_111638.f_25177[iVar1], iVar0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_111638.f_25177[iVar1]), iVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				GAMEPLAY::SET_BIT(&(Global_111638.f_25177[iVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_31()
{
	if ((((func_32(54) || func_32(55)) || func_32(56)) || func_32(57)) || func_32(58))
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_10011.f_25), 6);
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

void func_33()
{
}

void func_34()
{
	if (Global_111638.f_9080.f_99.f_205[7] != 0)
	{
		if (!Global_111638.f_9080.f_330[86])
		{
			Global_111638.f_9080.f_330[86] = 1;
		}
	}
	if (Global_111638.f_9080.f_99.f_205[8] != 0)
	{
		if (!Global_111638.f_9080.f_330[71])
		{
			Global_111638.f_9080.f_330[71] = 1;
		}
	}
	if (Global_111638.f_9080.f_99.f_205[9] != 0)
	{
		if (!Global_111638.f_9080.f_330[91])
		{
			Global_111638.f_9080.f_330[91] = 1;
		}
	}
	if (Global_111638.f_9080.f_99.f_205[10] != 0)
	{
		if (!Global_111638.f_9080.f_330[67])
		{
			Global_111638.f_9080.f_330[67] = 1;
		}
	}
	if (Global_111638.f_9080.f_99.f_205[11] != 0)
	{
		if (!Global_111638.f_9080.f_330[77])
		{
			Global_111638.f_9080.f_330[77] = 1;
		}
	}
	func_35(195, 198);
	func_35(195, 197);
	func_35(195, 196);
}

void func_35(int iParam0, int iParam1)
{
	Var0 = { Global_111638.f_10189[iParam0] };
	uVar4 = Global_111638.f_10189[iParam0].f_4;
	uVar5 = Global_111638.f_10189[iParam0].f_5;
	uVar6 = Global_111638.f_10189[iParam0].f_6;
	uVar7 = Global_111638.f_10189[iParam0].f_7;
	uVar8 = Global_111638.f_10189[iParam0].f_8;
	uVar9 = Global_111638.f_10189[iParam0].f_9;
	uVar10 = Global_111638.f_10189[iParam0].f_10;
	uVar11 = Global_111638.f_10189[iParam0].f_11;
	Global_111638.f_10189[iParam0] = { Global_111638.f_10189[iParam1] };
	Global_111638.f_10189[iParam0].f_4 = Global_111638.f_10189[iParam1].f_4;
	Global_111638.f_10189[iParam0].f_5 = Global_111638.f_10189[iParam1].f_5;
	Global_111638.f_10189[iParam0].f_6 = Global_111638.f_10189[iParam1].f_6;
	Global_111638.f_10189[iParam0].f_7 = Global_111638.f_10189[iParam1].f_7;
	Global_111638.f_10189[iParam0].f_8 = Global_111638.f_10189[iParam1].f_8;
	Global_111638.f_10189[iParam0].f_9 = Global_111638.f_10189[iParam1].f_9;
	Global_111638.f_10189[iParam0].f_10 = Global_111638.f_10189[iParam1].f_10;
	Global_111638.f_10189[iParam0].f_11 = Global_111638.f_10189[iParam1].f_11;
	Global_111638.f_10189[iParam1] = { Var0 };
	Global_111638.f_10189[iParam1].f_4 = uVar4;
	Global_111638.f_10189[iParam1].f_5 = uVar5;
	Global_111638.f_10189[iParam1].f_6 = uVar6;
	Global_111638.f_10189[iParam1].f_7 = uVar7;
	Global_111638.f_10189[iParam1].f_8 = uVar8;
	Global_111638.f_10189[iParam1].f_9 = uVar9;
	Global_111638.f_10189[iParam1].f_10 = uVar10;
	Global_111638.f_10189[iParam1].f_11 = uVar11;
}

void func_36()
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_37(Global_111638.f_24899[iVar0]))
		{
			if (Global_111638.f_24899[iVar0] != 145)
			{
				Global_111638.f_24899[iVar0] = 145;
			}
		}
		iVar0++;
	}
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

void func_38()
{
	UNK2::_0x7E2BD3EF6C205F09("No_Filter", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam1", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam2", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam3", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam4", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam5", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam6", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam7", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam9", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam12", 0);
}

void func_39(int iParam0, int iParam1)
{
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	}
	SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iParam0, iParam1);
}

int func_40()
{
	if (((UNK::_0xEF7D17BC6C85264C() || UNK::_0xF2CA003F167E21D2()) || NETWORK::_0x88B588B41FF7868E()) || NETWORK::_0x67FC09BC554A75E5())
	{
		return 1;
	}
	return 0;
}

