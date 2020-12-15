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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 1176255488;
	var uScriptParam_4 = 1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = -1;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	func_47(&uScriptParam_0);
	while (true)
	{
		func_46();
		if (func_33())
		{
		}
		else
		{
			func_14();
		}
	}
	func_1();
}

void func_1()
{
	func_3(&uLocal_37);
	func_2();
}

void func_2()
{
	unk_0xD39E529EBE5DB04F();
}

void func_3(var uParam0)
{
	struct<7> Var0;
	
	func_4(0, 1, 1, 0, 0, 0, 0);
	if (unk_0x40397A9A17EEC1C5(uParam0->f_6))
	{
		unk_0xB8B0F7C8C1548C5B(uParam0->f_6, 0);
	}
	unk_0x37ACBA9BE0A0EC05(unk_0x9B0761B4C3EB8BC7());
	*uParam0 = { Var0 };
}

void func_4(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x967251943AD606D5(unk_0x460153A63B9477BC(), 0);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		func_13(1);
		unk_0x86529CF5C6F9D6AE();
		unk_0x6D3823E5CADC313B();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(0);
			}
			if (!func_12())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_11(1, iParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_13(0);
		unk_0x51C14866CB8A57BF();
		Global_61723 = 0;
		if (bParam1)
		{
			unk_0x86A985A804621EB7();
		}
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		func_11(0, iParam3, iParam2, 0);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_9(unk_0x460153A63B9477BC())) && !func_6(unk_0x460153A63B9477BC(), 0)) && !func_5()) && !bParam4) && !bParam5)
			{
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
		else if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_9(unk_0x460153A63B9477BC())) && !bParam4) && !bParam5)
		{
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		Global_76831 = 0;
	}
}

bool func_5()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

bool func_6(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
	}
	if (Global_1312876[iVar1] == 1)
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

int func_8()
{
	return Global_1312763;
}

int func_9(int iParam0)
{
	if (func_6(iParam0, 0))
	{
		return 1;
	}
	if (func_10())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_11(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x93914DE00496FC78() != iParam0 && uParam2)
		{
			unk_0x6D883C27212BF370(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 13);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 13);
	}
}

void func_14()
{
	if (func_15(&uLocal_37))
	{
		func_1();
	}
}

int func_15(var uParam0)
{
	unk_0xA86915034F55A3BF();
	unk_0xD10328357EA7B9E5();
	func_30(1);
	unk_0x7A242994FB80B8A6();
	func_24(0);
	if (unk_0xF0C12886E5C1B20E())
	{
		unk_0x405677AE50A393A8(0);
	}
	switch (func_23(uParam0))
	{
		case 0:
			func_18(uParam0);
			break;
		
		case 1:
			func_16(uParam0);
			break;
		
		case 2:
			return 1;
	}
	return 0;
}

void func_16(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0xAB6BAF5BFCAFB141(uParam0->f_5);
	if (unk_0x369E69441C066912(uVar0) >= 0.9f)
	{
		unk_0x71B9CAADD460F7CC(uParam0->f_5);
		unk_0x3ED9330214992278(0, 1, 3000, 1, 0, 0);
		unk_0xF0C2AEEDB4BDCF16(unk_0x460153A63B9477BC(), 1f, 2000, 0, 1, 0);
		func_17(uParam0, 2);
	}
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_18(var uParam0)
{
	var uVar0;
	
	uVar0 = func_20();
	unk_0x131ED02492676000(uVar0);
	if (!unk_0xC614DDE265D18415(uVar0))
	{
		return;
	}
	unk_0xFD45D90342D2A0CD(800);
	func_17(uParam0, 1);
	func_19(uParam0);
}

void func_19(var uParam0)
{
	var uVar0;
	
	uVar0 = func_20();
	uParam0->f_5 = unk_0xAA579EC5104BFDA9(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, 0, 0, 1065353216, 0, 1065353216);
	unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), uParam0->f_5, uVar0, "action", 1000f, -1.5f, 0, 0, 1148846080, 0);
	unk_0xB88AF19828BF16ED(uParam0->f_5);
	unk_0x68A762F748822351(unk_0x9B0761B4C3EB8BC7(), "HS4F_IG25_BEACH", 0);
	unk_0x1322CA891C5DF18A(unk_0x9B0761B4C3EB8BC7(), 0, 0);
	uParam0->f_6 = unk_0x7CD2F129A4A837A8(964613260, 1);
	unk_0x73642F148A2941F7(uParam0->f_6, "action_camera", uVar0, uParam0->f_1, 0f, 0f, uParam0->f_4, 0, 2);
	unk_0x3ED9330214992278(1, 0, 3000, 1, 0, 0);
	unk_0x1082C25039B168F8(uVar0);
}

char* func_20()
{
	if (func_21())
	{
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";
	}
	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

bool func_21()
{
	return func_22(unk_0x460153A63B9477BC());
}

int func_22(int iParam0)
{
	if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_23(var uParam0)
{
	return *uParam0;
}

void func_24(int iParam0)
{
	if (func_29())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_28(0))
		{
			func_25(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_25(int iParam0)
{
	if (func_29())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_27())
		{
			func_26(1, 1);
		}
		else
		{
			func_26(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(0);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 30);
	}
	if (!func_12())
	{
		Global_19681.f_1 = 3;
	}
}

void func_26(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_28(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			unk_0x241AFEE3D5B4FF70(Global_19618);
		}
		else
		{
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
}

bool func_27()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
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
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_29()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		func_32();
	}
	func_31(4, -1);
	func_31(6, -1);
	func_31(7, -1);
	func_31(3, -1);
	func_31(1, -1);
	func_31(2, -1);
	func_31(11, -1);
	func_31(13, -1);
	func_31(14, -1);
	func_31(16, -1);
}

void func_31(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1377236.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377236.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_32()
{
	Global_2540384.f_4595 = 0;
}

int func_33()
{
	if (func_34())
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	var uVar0;
	
	func_42(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_41())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39(159))
	{
		if (!func_38())
		{
			return 1;
		}
	}
	if (func_39(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_35() != 0)
	{
		if (unk_0x7B70881748D166CD(func_35()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	switch (func_37())
	{
		case 0:
			return func_36();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_36()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_37()
{
	return Global_30968;
}

bool func_38()
{
	return Global_2451787.f_696;
}

int func_39(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_40()
{
	return Global_2462250;
}

bool func_41()
{
	return Global_2451787.f_691;
}

void func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_43(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_43(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_45(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(uVar3))
			{
				if (unk_0x47DBF174A0CB9D55(uVar3, 0))
				{
					uVar4 = unk_0xA5D5B1042E8F47BD(uVar3, 0);
					if (unk_0x292280AF1BBBD6AC(uVar4, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_44(uVar4, &bVar5))
						{
							unk_0xADCDA8AF77C0D19D(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE730EAF558C97567(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_44(var uParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		if (!unk_0x1758275D343D5BA3(uParam0))
		{
			if (unk_0x38CC98C4A0688263(uParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(uParam0)))
				{
					unk_0x4F3C4F457D44BB0F(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x1D2A3118784C0272(uParam0, 0))
		{
			if (unk_0xAA5B806352173DEA(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_45(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_46()
{
	SYSTEM::WAIT(0);
}

void func_47(var uParam0)
{
	unk_0xA88557896B79E30D(32, 0, -1);
	func_48(&uLocal_37, *uParam0, uParam0->f_3);
}

void func_48(var uParam0, struct<3> Param1, var uParam4)
{
	func_50(uParam0, Param1);
	func_49(uParam0, uParam4);
	func_4(1, 1, 1, 0, 0, 0, 0);
	unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Param1, 1, 0, 0, 1);
	if (unk_0x03DB5C6AABF8DA46())
	{
		unk_0xE2817E00BFDDDB34();
	}
}

void func_49(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_50(var uParam0, struct<3> Param1)
{
	uParam0->f_1 = { Param1 };
}

