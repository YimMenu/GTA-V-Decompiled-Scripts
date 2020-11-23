#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	struct<3> Local_21[32];
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = 0;
	bool bLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_31 = 0;
	var uLocal_32[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<67> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = -1;
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
	var uLocal_84 = 0;
	var uLocal_85 = -1;
	var uLocal_86 = 1;
	var uLocal_87 = 0;
	var uLocal_88 = 132;
	var uLocal_89 = -1;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	struct<3> Local_147 = { 0, 0, 0 } ;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175 = 0;
	int iLocal_176[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_177[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_178[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	bool bLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	bool bLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	bool bLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	var uLocal_217 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.40.51";
	iLocal_6 = 1;
	iLocal_9 = -1;
	iLocal_55 = -1;
	iLocal_148 = -1;
	unk_0xAC09235E2065C253(0);
	unk_0x945226432ACF160F();
	if (iScriptParam_216 == iScriptParam_216)
	{
	}
	iVar0 = unk_0x3732B96D7A1859B4() + 10000;
	while (unk_0x3732B96D7A1859B4() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	Global_1315783 = unk_0xCAEDBF30E3EA14FC(sLocal_0);
	while (true)
	{
		if (func_466())
		{
			func_465();
			if (bLocal_1)
			{
				unk_0xA039A39804D96298(0f, 0.23f);
				unk_0x7A83819F1CCA85D1(255, 255, 255, 255);
				func_464(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x591AF4C50B46E014() && Global_2453064.f_3)
		{
			func_462();
			func_461();
			func_459();
			func_458();
			func_457();
			func_456();
			func_451();
			func_450();
			func_449();
			func_448();
			func_446();
			func_444();
			func_443();
			func_442();
			func_439();
			func_431();
			func_430();
			func_428();
			func_426();
			func_424();
			func_421();
			func_420();
			func_418();
			func_415();
			func_414();
			func_411();
			func_406();
			func_405();
			func_387();
			func_383();
			func_381();
			func_378();
			func_374();
			func_372();
			func_371();
			func_300();
			func_299();
			func_296();
			func_264();
			func_251();
			func_249();
			func_245();
			func_244();
			func_232();
			func_231();
			func_229();
			func_223();
			func_222();
			func_221();
			func_220();
			func_217();
			func_214();
			func_208();
			func_205();
			func_201();
			func_200();
			func_197();
			func_196();
			func_195();
			func_193();
			func_152();
			func_151();
			func_147();
			func_146();
			func_132();
			func_119();
			func_111();
			func_100();
			func_96();
			func_85();
			func_65();
			if (unk_0x5018862FF5D9F844())
			{
				func_63();
				func_62();
			}
			func_61();
			func_15(0);
		}
		else
		{
			iLocal_40 = 0;
		}
		func_13();
		func_8();
		func_1();
		iLocal_3++;
		if (iLocal_3 >= 32)
		{
			iLocal_3 = 0;
		}
		SYSTEM::WAIT(0);
	}
	if (unk_0x2137828D03306CAF(iLocal_54))
	{
		unk_0xA613FDAC42DBBFAD(&iLocal_54);
	}
	unk_0xA232817B0B36F2E5();
}

void func_1()
{
	if (func_7(11))
	{
		if (func_6())
		{
			func_3();
			func_2(0);
		}
	}
}

void func_2(int iParam0)
{
	Global_2456869 = iParam0;
}

void func_3()
{
	if (func_5() == 0)
	{
		if (unk_0x56B2B0DE21A90764() == 0 || unk_0x56B2B0DE21A90764() == 1)
		{
			unk_0x44343638BCDB0DAA(0);
		}
		func_4(1);
	}
	else if (func_5() == 1)
	{
		if (unk_0x56B2B0DE21A90764() == 1 || unk_0x56B2B0DE21A90764() == 0)
		{
			unk_0x44343638BCDB0DAA(1);
		}
		func_4(1);
	}
	else if (func_5() == 2)
	{
		if (unk_0x56B2B0DE21A90764() == 2 || unk_0x56B2B0DE21A90764() == 3)
		{
			unk_0x44343638BCDB0DAA(2);
		}
		func_4(1);
	}
	else if (func_5() == 3)
	{
		if (unk_0x56B2B0DE21A90764() == 3 || unk_0x56B2B0DE21A90764() == 2)
		{
			unk_0x44343638BCDB0DAA(3);
		}
		func_4(1);
	}
}

void func_4(int iParam0)
{
	Global_2456895 = iParam0;
}

int func_5()
{
	return Global_2456894;
}

bool func_6()
{
	return Global_2456869;
}

bool func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_1312752[iVar0], iVar1);
}

void func_8()
{
	if (func_6())
	{
		if ((func_12() || func_11()) || func_10())
		{
			func_9();
		}
	}
}

void func_9()
{
	var uVar0;
	
	Global_2456954 = uVar0;
}

bool func_10()
{
	return unk_0xAA4F14DA15DB0B51(Global_2456954, 2);
}

bool func_11()
{
	return unk_0xAA4F14DA15DB0B51(Global_2456954, 0);
}

bool func_12()
{
	return unk_0xAA4F14DA15DB0B51(Global_2456954, 1);
}

void func_13()
{
	if ((unk_0x591AF4C50B46E014() || func_14() == -1) && unk_0x09952BA662A7629B(joaat("director_mode")) > 0)
	{
		unk_0x04DAF3C7909A0BC6();
	}
}

int func_14()
{
	return Global_25222;
}

void func_15(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		switch (iVar1)
		{
			case 223:
				if (bParam0)
				{
					func_60(iVar0);
				}
				break;
			
			case 171:
				if (!bParam0)
				{
					func_16(iVar0);
				}
				break;
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	
	unk_0xD9298AF91B40C8C4(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 1933223176:
			func_26(iParam0);
			break;
		
		case 730797863:
			if (unk_0x5018862FF5D9F844())
			{
				func_17(iParam0);
			}
			break;
	}
}

void func_17(int iParam0)
{
	struct<10> Var0;
	
	if (unk_0xD9298AF91B40C8C4(1, uParam0, &Var0, 10))
	{
		if (func_25(Var0.f_7) || func_24(Var0.f_7))
		{
			if (Var0.f_4 == unk_0x0FFED3E94261A832())
			{
				func_19(&uLocal_155, &iLocal_154, 1, 5000);
				func_19(&uLocal_158, &iLocal_157, 2, 30000);
				func_19(&uLocal_161, &iLocal_160, 3, 60000);
				func_19(&uLocal_164, &iLocal_163, 5, 300000);
			}
		}
		else if (func_18(Var0.f_7))
		{
			if (Var0.f_5 == unk_0x0FFED3E94261A832())
			{
				if (Var0.f_9 == 0 || Var0.f_9 == 97)
				{
					iLocal_168 = 1;
				}
			}
		}
	}
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
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
			return 1;
		
		default:
	}
	return 0;
}

void func_19(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_23(uParam0))
	{
		func_22(uParam0, 0, 0);
		*uParam1++;
	}
	else if (func_21(uParam0, iParam3, 0))
	{
		func_20(uParam0, 0, 0);
		*uParam1 = 1;
	}
	else
	{
		*uParam1++;
	}
	if (*uParam1 > iParam2)
	{
		unk_0xF6082E2ADA1C795B(&Global_1779861, 7);
		unk_0xF6082E2ADA1C795B(&Global_1779861, 8);
		if (!func_23(&uLocal_166))
		{
			func_22(&uLocal_166, 0, 0);
		}
		else
		{
			func_20(&uLocal_166, 0, 0);
		}
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x11ABC381A58DD5AB();
		}
		else
		{
			*uParam0 = unk_0xFD0C6B49DA615791();
		}
	}
	else
	{
		*uParam0 = unk_0x3732B96D7A1859B4();
	}
	uParam0->f_1 = 1;
}

int func_21(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_22(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_22(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_23(var uParam0)
{
	return uParam0->f_1;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
			return 1;
		
		default:
	}
	return 0;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 1;
		
		default:
	}
	return 0;
}

void func_26(int iParam0)
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	
	if (!unk_0x5018862FF5D9F844())
	{
		return;
	}
	if (unk_0xD9298AF91B40C8C4(1, uParam0, &Var0, 8))
	{
		if ((func_59(Var0.f_5) && func_58(Var0.f_6, Var0.f_7)) && func_56())
		{
			bVar2 = !func_55(0);
			if (bVar2)
			{
				return;
			}
			if (Var0.f_3 > 3)
			{
				return;
			}
			switch (Var0.f_3)
			{
				case 0:
				case 2:
					if (func_52(unk_0x0FFED3E94261A832()) != 0)
					{
						return;
					}
					break;
				
				case 1:
					return;
				
				case 3:
					if (func_52(unk_0x0FFED3E94261A832()) != 0 && func_52(unk_0x0FFED3E94261A832()) != 1)
					{
						return;
					}
					break;
			}
			if (func_51())
			{
				func_42(-856006867, Var0.f_2, &iVar3, 0, 0, 0);
				Global_2595364[iVar3 /*76*/].f_8.f_54 = func_40(func_41());
				Global_2595364[iVar3 /*76*/].f_8.f_55 = func_38(func_41());
				Global_2595364[iVar3 /*76*/].f_8.f_56 = bVar2;
				bVar1 = true;
			}
			else
			{
				unk_0xD2924B7B97D1AE97(func_40(func_41()), func_38(func_41()), Var0.f_2, bVar2);
				bVar1 = true;
			}
			if (bVar1)
			{
				uVar4 = unk_0x9FF6FFD9EB30D086();
				unk_0x08BE237DBCD9CBD9(uVar4, "Goon_Paid_Large", "GTAO_Boss_Goons_FM_Soundset", 0);
			}
			if (!Var0.f_4)
			{
				func_37(0);
				func_36(unk_0xDA84A1E29323722E());
				if (func_35(func_41()))
				{
					func_28("GB_GOT_GPAYC", Var0.f_2, 1);
				}
				else
				{
					func_28("GB_GOT_GPAY", Var0.f_2, 1);
				}
			}
			else
			{
				switch (Var0.f_3)
				{
					case 2:
						func_28("GB_GOT_GPAYSIE", Var0.f_2, 1);
						if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_1701, 17))
						{
							func_27("GB_GOTGPAYSIEH", -1);
							unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1701), 17);
						}
						break;
					
					case 3:
						if (func_35(func_41()))
						{
							func_28("GR_CWAGEB_T", Var0.f_2, 1);
						}
						else
						{
							func_28("GR_VWAGEB_T", Var0.f_2, 1);
						}
						if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_1701, 28))
						{
							if (func_35(func_41()))
							{
								func_27("GR_CWAGEB_H", -1);
							}
							else
							{
								func_27("GR_VWAGEB_H", -1);
							}
							unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1701), 28);
						}
						break;
					
					default:
						func_28("GB_GOT_GPAYS", Var0.f_2, 1);
						break;
					}
				}
		}
	}
}

void func_27(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

int func_28(char* sParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	unk_0xEA97619D8B89D387(uParam1);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_29(3, sParam0, 1, "", uParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_29(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_466() || !unk_0x1B154DE2D4606530()) || !func_32(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_30(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1769933.f_5[iVar0 /*53*/] = iParam0;
		Global_1769933.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1769933.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1769933.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1769933.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1769933.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1769933.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_31(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1769933++;
	if (Global_1769933 > 5)
	{
		Global_1769933 = 5;
		return Global_1769933;
	}
	return (Global_1769933 - 1);
}

void func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_33(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_34()
{
	return Global_1312735;
}

bool func_35(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 26);
}

void func_36(var uParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_3 = uParam0;
}

void func_37(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_27 = iParam0;
}

int func_38(int iParam0)
{
	if (iParam0 == func_39())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_39()
{
	return -1;
}

int func_40(int iParam0)
{
	if (iParam0 == func_39())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[0];
}

int func_41()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

void func_42(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_51())
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
			if (iParam1 > 0)
			{
				func_43(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_43(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_43(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_34()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_50(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_49(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_44(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_44(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_45(iParam0);
	}
}

void func_45(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_48(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_46(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_46(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_47(&(uParam0->f_8.f_3));
	func_47(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_47(var uParam0)
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

int func_48(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_49(int iParam0, int iParam1)
{
	Global_2457026 = iParam1;
	Global_2457025 = iParam0;
}

int func_50(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_51())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = iParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = iParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_51()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (func_53(iParam0, 1))
	{
		return Global_1622795[func_41() /*431*/].f_11.f_317;
	}
	return -1;
}

bool func_53(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_54(iParam0))
		{
			return 0;
		}
	}
	return Global_1622795[iParam0 /*431*/].f_11 != func_39();
}

int func_54(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_39())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_55(bool bParam0)
{
	return func_53(unk_0x0FFED3E94261A832(), bParam0);
}

int func_56()
{
	if (Global_1366489.f_11 != 0)
	{
		if (!func_23(&(Global_1366489.f_9)))
		{
			func_22(&(Global_1366489.f_9), 0, 0);
			return 1;
		}
		else if (!func_21(&(Global_1366489.f_9), Global_1366489.f_11, 0))
		{
			return 0;
		}
		func_57(&(Global_1366489.f_9));
	}
	return 1;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 != 0 || iParam1 != 0)
	{
		if (((iParam0 == Global_1636589.f_9 || iParam0 == Global_1636589.f_10) || iParam1 == Global_1636589.f_9) || iParam1 == Global_1636589.f_10)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	if (iParam0 != 0)
	{
		if (iParam0 == Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_377 || iParam0 == Global_1636588)
		{
			return 1;
		}
	}
	return 0;
}

void func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &iVar0, 3))
	{
		iVar1 = 0;
		bVar2 = false;
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (iVar0 != 2147483647 && iLocal_153[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			iVar1++;
		}
		if (!bVar2)
		{
			iLocal_152++;
		}
	}
}

void func_61()
{
	if (!Global_1574132)
	{
		if (bLocal_214)
		{
			bLocal_214 = false;
		}
	}
	else if (!bLocal_214)
	{
		if (Global_262145.f_2329 > 25)
		{
			bLocal_214 = true;
		}
	}
	if (!bLocal_214)
	{
		if (!Global_2497344.f_4804)
		{
			Global_2497344.f_4804 = 1;
		}
	}
	else if (Global_2497344.f_4804)
	{
		Global_2497344.f_4804 = 0;
	}
}

void func_62()
{
	if (Global_2484621.f_36 > Global_262145.f_17682)
	{
		Global_2484621.f_36 = 0;
		func_57(&(Global_2484621.f_38));
		func_57(&(Global_2484621.f_40));
	}
	if (iLocal_168)
	{
		if (!func_23(&uLocal_212))
		{
			func_22(&uLocal_212, 0, 0);
		}
		else if (func_21(&uLocal_212, 250, 0))
		{
			func_57(&uLocal_212);
			iLocal_168 = 0;
		}
		if (Global_2484621.f_36 > 0)
		{
			Global_2484621.f_36 = 0;
			func_57(&(Global_2484621.f_38));
			func_57(&(Global_2484621.f_40));
			func_57(&uLocal_212);
			iLocal_168 = 0;
		}
	}
}

void func_63()
{
	func_64();
	if (func_23(&uLocal_166) && func_21(&uLocal_166, 1800000, 0))
	{
		func_57(&uLocal_166);
		unk_0x507FE690B1271947(&Global_1779861, 7);
		unk_0x507FE690B1271947(&Global_1779861, 8);
	}
}

void func_64()
{
	if (func_23(&uLocal_155) && func_21(&uLocal_155, 5000, 0))
	{
		iLocal_154 = 0;
		func_57(&uLocal_155);
	}
	if (func_23(&uLocal_158) && func_21(&uLocal_158, 30000, 0))
	{
		iLocal_157 = 0;
		func_57(&uLocal_158);
	}
	if (func_23(&uLocal_161) && func_21(&uLocal_161, 60000, 0))
	{
		iLocal_160 = 0;
		func_57(&uLocal_161);
	}
	if (func_23(&uLocal_164) && func_21(&uLocal_164, 300000, 0))
	{
		iLocal_163 = 0;
		func_57(&uLocal_164);
	}
}

void func_65()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[20];
	int iVar5;
	int iVar6;
	
	if (!func_84(unk_0x0FFED3E94261A832()))
	{
		return;
	}
	if ((((func_83(unk_0x0FFED3E94261A832()) || func_82(unk_0x0FFED3E94261A832(), 1, 0)) || (Global_1774803.f_9 != -1 && func_81(Global_1774803.f_9) == 4)) || (Global_1774803.f_9 != -1 && func_81(Global_1774803.f_9) == 5)) || func_80())
	{
		iVar1 = 1;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		bVar0 = false;
		if (((unk_0xAA4F14DA15DB0B51(Global_1592456[iVar2 /*635*/].f_259.f_97, 31) || unk_0xAA4F14DA15DB0B51(Global_1592456[iVar2 /*635*/].f_259.f_235, 30)) || unk_0xAA4F14DA15DB0B51(Global_1780637, iVar2)) && iVar1)
		{
			iVar3 = 0;
			if (unk_0x3756406E4D76B25E(Global_2422215[iVar2 /*387*/].f_49))
			{
				iVar3 = unk_0xECBE9D2902B2B964(Global_2422215[iVar2 /*387*/].f_49);
			}
			else if (Global_1780639 && (((func_79(unk_0x0FFED3E94261A832()) || func_84(unk_0x0FFED3E94261A832())) || func_78(unk_0x0FFED3E94261A832())) || unk_0xAA4F14DA15DB0B51(Global_1774803, 6)))
			{
				if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iVar2 /*635*/].f_259.f_235, 30) || unk_0xAA4F14DA15DB0B51(Global_1780637, iVar2)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iVar2 /*635*/].f_259.f_97, 31))
				{
					iVar6 = unk_0x0C5DD04D80C0EC83(unk_0x2A5EB8B0FE590B91(), &uVar4);
					iVar5 = 0;
					iVar5 = 0;
					while (iVar5 < iVar6)
					{
						if (func_74(uVar4[iVar5], unk_0x7C214DA899F05536(iVar2)))
						{
							iVar3 = uVar4[iVar5];
							iVar5 = iVar6;
						}
						iVar5++;
					}
				}
			}
			if (unk_0x2137828D03306CAF(iVar3) && unk_0x7FAC45D56235AB39(iVar3, 0))
			{
				if (func_69(iVar2, iVar3, 0))
				{
					bVar0 = true;
				}
			}
		}
		if (!bVar0)
		{
			if (((((unk_0x2137828D03306CAF(Global_2434604.f_570[iVar2]) && unk_0x7FAC45D56235AB39(Global_2434604.f_570[iVar2], 0)) && !func_83(unk_0x7C214DA899F05536(iVar2))) && !func_78(unk_0x7C214DA899F05536(iVar2))) && !unk_0xAA4F14DA15DB0B51(Global_1774803, 6)) && (!func_68() || func_67()))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_1048576.f_469, iVar2))
				{
					if (unk_0x036065ED9D0D535E(Global_2434604.f_570[iVar2]))
					{
						if (!func_68() || func_67())
						{
						}
						unk_0x5A68F196ACBED903(Global_2434604.f_570[iVar2], 0);
						unk_0x507FE690B1271947(&(Global_1048576.f_469), iVar2);
						if (func_66(unk_0x7C214DA899F05536(iVar2), 0, 1))
						{
						}
					}
					else
					{
						unk_0x507FE690B1271947(&(Global_1048576.f_469), iVar2);
					}
				}
			}
		}
		iVar2++;
	}
}

int func_66(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x885F483F34E47503(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0xB8B285A272E7A79E(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2434604.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_67()
{
	return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1, 23);
}

bool func_68()
{
	return unk_0xAA4F14DA15DB0B51(Global_1774803, 14);
}

int func_69(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 1)
	{
	}
	if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam1, 1))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 30) || unk_0xAA4F14DA15DB0B51(Global_1780637, iParam0))
	{
		if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam1, 1))
		{
			if (bParam2 == 1)
			{
			}
			return 1;
		}
		else if (bParam2 == 1)
		{
		}
	}
	if (Global_1592456[iParam0 /*635*/].f_259.f_248 == 0)
	{
		if ((Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15 > 0 && Global_1592456[iParam0 /*635*/].f_259.f_247 > 0) && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15 != Global_1592456[iParam0 /*635*/].f_259.f_247)
		{
			return 1;
		}
		if ((unk_0x7C214DA899F05536(Global_1592456[iParam0 /*635*/].f_259.f_246) != func_39() && func_73(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_52)) && unk_0xC6D53C3DB8415FF9(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_52)) != unk_0x7C214DA899F05536(Global_1592456[iParam0 /*635*/].f_259.f_246))
		{
			return 1;
		}
		if ((unk_0x0FFED3E94261A832() == iParam0 && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15 > 0) && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15 != Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_247)
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/].f_259.f_248 == 1)
	{
		if (unk_0x0FFED3E94261A832() == unk_0x7C214DA899F05536(iParam0) && func_67())
		{
			return 0;
		}
		if (func_72(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_1) != Global_1592456[iParam0 /*635*/].f_259.f_247 && !((func_80() && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)) && unk_0x0FFED3E94261A832() == unk_0x7C214DA899F05536(iParam0)))
		{
			if ((unk_0x0FFED3E94261A832() == iParam0 && func_71(unk_0x0FFED3E94261A832())) && (func_84(unk_0x0FFED3E94261A832()) || func_80()))
			{
			}
			else
			{
				if (bParam2)
				{
				}
				return 1;
			}
		}
		else if ((func_80() && iParam0 != unk_0x0FFED3E94261A832()) && func_70(unk_0x2A5EB8B0FE590B91(), 0) == -1)
		{
			if (bParam2)
			{
			}
			return 1;
		}
		else if (Global_1592456[iParam0 /*635*/].f_259.f_246 != -1 && Global_1592305 != unk_0x7C214DA899F05536(Global_1592456[iParam0 /*635*/].f_259.f_246))
		{
			if (bParam2)
			{
			}
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/].f_259.f_248 == 2)
	{
		if (unk_0x0FFED3E94261A832() == unk_0x7C214DA899F05536(iParam0) && func_67())
		{
			return 0;
		}
		if (Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_1 != Global_1592456[iParam0 /*635*/].f_259.f_247 && !((func_80() && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)) && unk_0x0FFED3E94261A832() == unk_0x7C214DA899F05536(iParam0)))
		{
			if (bParam2)
			{
			}
			return 1;
		}
		else if (Global_1592456[iParam0 /*635*/].f_259.f_246 != -1 && Global_1592304 != unk_0x7C214DA899F05536(Global_1592456[iParam0 /*635*/].f_259.f_246))
		{
			if (bParam2)
			{
			}
			return 1;
		}
		else if (((Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_2 != Global_2422215[iParam0 /*387*/].f_318.f_2 && Global_2422215[iParam0 /*387*/].f_318.f_2 != -1) && func_84(unk_0x0FFED3E94261A832())) && func_84(unk_0x7C214DA899F05536(iParam0)))
		{
			if (bParam2)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xC4A39E4229BD3ABE(iParam0, iParam1))
		{
			uVar0 = unk_0x0C20E539D876C5B3(iParam0, iParam1);
			if (unk_0x2137828D03306CAF(uVar0))
			{
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					iVar1 = unk_0xF0178FC88859A30C(unk_0xD3B21CE53AA7BE51(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x457D9E478E06E354(iVar0, iVar3, 0))
						{
							if (unk_0x8F8E5C33266ED978(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
					if (iVar1 == 1 && unk_0xD3B21CE53AA7BE51(iVar0) == joaat("trailersmall2"))
					{
						iVar3 = -1;
						return iVar3;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_71(int iParam0)
{
	if (iParam0 != func_39())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318, 6);
	}
	return 0;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case joaat("MPSV_LP0_31"):
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

var func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

int func_74(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x82DF3B947FC3E281(iParam0))
	{
		if (func_77(iParam0, 1) && func_75(iParam0) == iParam1)
		{
			if ((unk_0x4D1A8278BAE26361("PV_Slot", 3) && unk_0x30BD96CB13063EC9(iParam0, "PV_Slot")) && unk_0x01307FD0B54F50D3(iParam0, "PV_Slot") >= 0)
			{
				if (unk_0x35302CD5A5D37EED(unk_0xF995FC030D2E2345(iParam0, &uVar0), "freemode"))
				{
					if (unk_0x4D1A8278BAE26361("MPBitset", 3) && unk_0x30BD96CB13063EC9(iParam0, "MPBitset"))
					{
						iVar1 = unk_0x01307FD0B54F50D3(iParam0, "MPBitset");
						if (unk_0xAA4F14DA15DB0B51(iVar1, 24))
						{
							if (unk_0x8CB6BD8E4A44CC64(iParam0, 1060.325f, -3064.239f, -100.9374f, 821.32f, -3255.345f, -75f, 0, 0, 0) || unk_0x8CB6BD8E4A44CC64(iParam0, 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, 0, 0, 0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	int iVar0;
	
	if (!func_77(iParam0, 1))
	{
		return func_39();
	}
	iVar0 = unk_0x01307FD0B54F50D3(iParam0, "Player_Vehicle");
	return func_76(iVar0, 0);
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0x7C214DA899F05536(iVar1);
		if (func_66(iVar0, 0, 1) || (iParam1 && unk_0x95F2D475E01A4B15(iVar0)))
		{
			if (iParam0 == unk_0xA417460779EE0AF0(iVar0))
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return func_39();
}

int func_77(int iParam0, bool bParam1)
{
	if (Global_69800)
	{
		if (unk_0x2137828D03306CAF(iParam0) && (!bParam1 || unk_0x7FAC45D56235AB39(iParam0, 0)))
		{
			if (unk_0x30BD96CB13063EC9(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (iParam0 != func_39() && func_66(iParam0, 1, 1))
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318, 3);
	}
	return 0;
}

int func_79(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (func_66(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_81(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

bool func_80()
{
	return unk_0xAA4F14DA15DB0B51(Global_1774803, 12);
}

int func_81(int iParam0)
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
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
	}
	return -1;
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_39())
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 14))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (func_66(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1 && Global_2422215[iParam0 /*387*/].f_318.f_4 != func_39())
			{
				return func_81(Global_2422215[iParam0 /*387*/].f_318.f_1) == 5;
			}
		}
	}
	return 0;
}

void func_85()
{
	struct<3> Var0;
	
	if (!unk_0x2137828D03306CAF(func_91()))
	{
		return;
	}
	func_88(81, &Var0);
	if (func_86(Var0))
	{
		if (!Global_2484780)
		{
			Global_2484780 = 1;
			iLocal_215 = 1;
		}
	}
	else if (iLocal_215)
	{
		Global_2484780 = 0;
		iLocal_215 = 0;
	}
}

int func_86(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_87(Global_1048576.f_856[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (SYSTEM::VDIST2(Global_1048576.f_856[iVar0 /*3*/], Param0) <= 400f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_87(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_88(int iParam0, var uParam1)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 81:
			if (unk_0x2137828D03306CAF(func_91()) && !unk_0xA9A04898798AE9E6(func_91(), 0))
			{
				if (unk_0xD3B21CE53AA7BE51(func_91()) == joaat("trailerlarge"))
				{
					*uParam1 = { unk_0x82D9CF397BA8C885(func_91(), 0f, -8.9f, -2f) };
					if (unk_0xE423CA97BB7EA540(*uParam1, &uVar0, 0))
					{
						*uParam1 = { *uParam1, uParam1->f_1, uVar0 };
					}
					else
					{
						*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
					}
				}
			}
			break;
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (func_90(unk_0x0FFED3E94261A832()))
		{
			if (func_89(*uParam1))
			{
				if (Global_1774803.f_1720 != func_39())
				{
					if (!func_89(Global_2422215[Global_1774803.f_1720 /*387*/].f_318.f_5))
					{
						*uParam1 = { Global_2422215[Global_1774803.f_1720 /*387*/].f_318.f_5 };
					}
				}
			}
		}
	}
}

int func_89(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)
{
	if (iParam0 != func_39())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318, 8);
	}
	return 0;
}

int func_91()
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar3;
	int iVar4;
	int iVar5;
	var uVar6[25];
	int iVar7;
	int iVar8;
	var uVar9[25];
	int iVar10;
	
	if ((Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_11 != -1 && func_95(unk_0x0FFED3E94261A832())) && func_81(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_11) == 4)
	{
		return -1;
	}
	if (func_79(unk_0x0FFED3E94261A832()) && !func_90(unk_0x0FFED3E94261A832()))
	{
		iVar4 = unk_0x0C5DD04D80C0EC83(unk_0x2A5EB8B0FE590B91(), &uVar2);
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (unk_0x2137828D03306CAF(uVar2[iVar0]) && unk_0x82DF3B947FC3E281(uVar2[iVar0]))
			{
				if (!unk_0xA9A04898798AE9E6(uVar2[iVar0], 0))
				{
					if (unk_0x4D1A8278BAE26361("Player_Truck", 3))
					{
						if (func_94(uVar2[iVar0], 1))
						{
							sVar3 = unk_0xF995FC030D2E2345(uVar2[iVar0], &uVar1);
							if (!unk_0x58478145CAF8429C(sVar3))
							{
								if (unk_0x35302CD5A5D37EED(sVar3, "am_mp_bunker"))
								{
									if (func_66(Global_1592305, 1, 1))
									{
										if (func_93(uVar2[iVar0]) == Global_1592305)
										{
											return uVar2[iVar0];
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
	}
	if (func_53(unk_0x0FFED3E94261A832(), 0) && !func_79(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x0FFED3E94261A832() != func_41())
		{
			iVar7 = unk_0x0C5DD04D80C0EC83(unk_0x2A5EB8B0FE590B91(), &uVar6);
			iVar5 = 0;
			while (iVar5 < iVar7)
			{
				if (unk_0x2137828D03306CAF(uVar6[iVar5]) && unk_0x82DF3B947FC3E281(uVar6[iVar5]))
				{
					if (!unk_0xA9A04898798AE9E6(uVar6[iVar5], 0))
					{
						if (unk_0x4D1A8278BAE26361("Player_Truck", 3))
						{
							if (func_94(uVar6[iVar5], 1))
							{
								if (func_66(func_41(), 1, 1))
								{
									if (func_93(uVar6[iVar5]) == func_41())
									{
										return uVar6[iVar5];
									}
								}
							}
						}
					}
				}
				iVar5++;
			}
		}
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (func_90(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0x2137828D03306CAF(Global_2497344.f_278))
			{
				iVar10 = unk_0x0C5DD04D80C0EC83(unk_0x2A5EB8B0FE590B91(), &uVar9);
				iVar8 = 0;
				while (iVar8 < iVar10)
				{
					if (unk_0x2137828D03306CAF(uVar9[iVar8]) && unk_0x82DF3B947FC3E281(uVar9[iVar8]))
					{
						if (!unk_0xA9A04898798AE9E6(uVar9[iVar8], 0))
						{
							if (unk_0x4D1A8278BAE26361("Player_Truck", 3))
							{
								if (func_94(uVar9[iVar8], 1))
								{
									if (func_66(Global_1774803.f_1720, 1, 1))
									{
										if (func_93(uVar9[iVar8]) == Global_1774803.f_1720)
										{
											Global_2497344.f_278 = uVar9[iVar8];
											return uVar9[iVar8];
										}
									}
								}
							}
						}
					}
					iVar8++;
				}
			}
			else
			{
				return Global_2497344.f_278;
			}
		}
	}
	else if (func_90(unk_0x0FFED3E94261A832()))
	{
		func_92(0);
	}
	return Global_2497344.f_286[1];
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 8))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 8);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 8))
	{
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 8);
	}
}

int func_93(int iParam0)
{
	int iVar0;
	
	if (!func_94(iParam0, 1))
	{
		return func_39();
	}
	if (unk_0x2137828D03306CAF(iParam0))
	{
		iVar0 = unk_0x01307FD0B54F50D3(iParam0, "Player_Truck");
		return func_76(iVar0, 0);
	}
	return func_39();
}

int func_94(int iParam0, bool bParam1)
{
	if (Global_69800)
	{
		if (unk_0x2137828D03306CAF(iParam0) && (!bParam1 || unk_0x7FAC45D56235AB39(iParam0, 0)))
		{
			if (unk_0x30BD96CB13063EC9(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95(int iParam0)
{
	if (iParam0 != func_39() && func_66(iParam0, 1, 1))
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318, 4);
	}
	return 0;
}

void func_96()
{
	if (Global_1774803.f_22 && Global_1774803.f_23 == 81)
	{
		if (!iLocal_207)
		{
			if (Global_1774803.f_25 && unk_0xF4EE9D6C8E60AE22())
			{
				if (Global_1774803.f_9 != 81)
				{
					iLocal_207 = 1;
					func_22(&uLocal_208, 1, 0);
					func_97(1, 81);
				}
				else
				{
					iLocal_207 = 1;
				}
			}
		}
		else if (func_23(&uLocal_208) && !func_21(&uLocal_208, 1000, 1))
		{
			if (Global_1774803.f_9 != 81)
			{
				func_97(1, 81);
			}
		}
		else if (!Global_1774803.f_25)
		{
			iLocal_207 = 0;
			func_57(&uLocal_208);
		}
	}
	else
	{
		iLocal_207 = 0;
		func_57(&uLocal_208);
	}
}

void func_97(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_1774803.f_9 = iParam1;
		Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_1 = iParam1;
	}
	else
	{
		Global_1774803.f_9 = -1;
		Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_1 = -1;
		if (((!func_80() && !func_99(unk_0x0FFED3E94261A832())) && !func_68()) && !func_98())
		{
			Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_4 = func_39();
			Global_1774803.f_10 = 0;
			Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_3 = 0;
		}
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 0);
	}
}

bool func_98()
{
	return unk_0xAA4F14DA15DB0B51(Global_1774803, 17);
}

int func_99(int iParam0)
{
	if (iParam0 != func_39())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318.f_9, 1);
	}
	return 0;
}

void func_100()
{
	int iVar0;
	
	if (func_84(unk_0x0FFED3E94261A832()))
	{
		if (func_110(unk_0x0FFED3E94261A832()))
		{
			iLocal_211 = 1;
		}
	}
	else if (!iLocal_210 && !func_23(&(Global_2434604.f_502.f_27)))
	{
		if (iLocal_211)
		{
			iLocal_211 = 0;
		}
	}
	if (func_23(&(Global_2434604.f_502.f_27)))
	{
		if (!iLocal_210)
		{
			iVar0 = -1;
			func_109(156, &iVar0, 1);
			if (func_108() != -1 && func_108() != iVar0)
			{
				if (func_110(unk_0x0FFED3E94261A832()) || iLocal_211)
				{
					if (func_107() != -1)
					{
						if (Global_2097152[func_107() /*10885*/].f_7546.f_2 != -1 && Global_2434604.f_502.f_30)
						{
							func_102(1, 0, 1, 0, 0, 0, 0);
						}
					}
					if (iVar0 >= 0)
					{
						func_101(iVar0);
					}
					iLocal_210 = 1;
				}
			}
			else
			{
				iLocal_210 = 1;
			}
		}
	}
	else if (iLocal_210)
	{
		iLocal_210 = 0;
	}
}

void func_101(int iParam0)
{
	Global_2097152[func_107() /*10885*/].f_7546.f_2 = iParam0;
}

void func_102(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_108() < 0 && Global_1780640)
	{
		return;
	}
	if (func_106(35))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_105(2);
	}
	else
	{
		func_105(1);
	}
	if (bParam1)
	{
		func_105(11);
	}
	if (bParam2)
	{
		func_105(32);
		if (bParam3)
		{
			if (func_108() >= 0 && unk_0xAA4F14DA15DB0B51(Global_1319066[func_108() /*140*/].f_101, 0))
			{
				func_105(33);
			}
		}
		else
		{
			func_104(33);
		}
		if (func_108() >= 0)
		{
			if (func_103(Global_1319066[func_108() /*140*/].f_66))
			{
				func_105(40);
			}
		}
	}
	else if (bParam5)
	{
		func_105(37);
	}
	if (bParam4)
	{
		func_105(36);
	}
	if (func_106(36))
	{
		if (func_106(2))
		{
			func_104(36);
		}
	}
	if (bParam6)
	{
		func_105(38);
	}
	if (unk_0x591AF4C50B46E014())
	{
		Global_2497344.f_366 = unk_0x11ABC381A58DD5AB();
	}
}

int func_103(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_104(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2434604.f_502.f_1, iParam0))
		{
			unk_0x507FE690B1271947(&(Global_2434604.f_502.f_1), iParam0);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_2434604.f_502.f_2, (iParam0 - 32)))
	{
		unk_0x507FE690B1271947(&(Global_2434604.f_502.f_2), (iParam0 - 32));
	}
}

void func_105(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2434604.f_502.f_1, iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2434604.f_502.f_1), iParam0);
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(Global_2434604.f_502.f_2, (iParam0 - 32)))
	{
		unk_0xF6082E2ADA1C795B(&(Global_2434604.f_502.f_2), (iParam0 - 32));
	}
}

bool func_106(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_502.f_1, iParam0);
	}
	return unk_0xAA4F14DA15DB0B51(Global_2434604.f_502.f_2, (iParam0 - 32));
}

int func_107()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_108()
{
	return Global_2097152[func_107() /*10885*/].f_7546.f_2;
}

void func_109(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_8827)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1770284[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_110(int iParam0)
{
	if (iParam0 != func_39())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 12) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 13)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 14))
		{
			return 1;
		}
	}
	return 0;
}

void func_111()
{
	int iVar0;
	
	if (Global_1592304 != func_39())
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 5))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (Global_1592304 == unk_0x0FFED3E94261A832())
			{
				if (!unk_0xBBC6067B2AA3BE97(iVar0))
				{
					return;
				}
				if (unk_0x57A397BDF5F38342())
				{
					return;
				}
				if (((((unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -828834893) == 1 || unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -828834893) == 0) || unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -1794415470) == 1) || unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -1794415470) == 0) || unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), 451360105) == 1) || unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), 451360105) == 0)
				{
					return;
				}
				if (unk_0xDFB0689E65E50D74(unk_0x2A5EB8B0FE590B91(), 373))
				{
					return;
				}
				if (unk_0x07E119839AD14892(unk_0x2A5EB8B0FE590B91(), 2))
				{
					return;
				}
				if (func_117())
				{
					return;
				}
				if ((unk_0xB656ABB38B36F992(iVar0) && Global_1779844 == 1) && !func_95(unk_0x0FFED3E94261A832()))
				{
					if (((((unk_0xDC21082B45236352(0, 71) != 0f || unk_0xDC21082B45236352(0, 72) != 0f) || unk_0x83F6A1E4E653AD75(0, 71)) || unk_0x83F6A1E4E653AD75(0, 72)) || unk_0x92BC4A8239BDDACC(0, 71)) || unk_0x92BC4A8239BDDACC(0, 72))
					{
						if (Global_1774797 < 11 && Global_1774797 >= 7)
						{
							unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 0, 0);
							func_112(1);
						}
					}
				}
			}
		}
	}
}

void func_112(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_116(0))
		{
			func_113(iParam0);
		}
		unk_0xF6082E2ADA1C795B(&Global_2314, 2);
	}
}

void func_113(int iParam0)
{
	if (Global_14604)
	{
		func_115(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_114())
	{
		Global_14443.f_1 = 3;
	}
}

int func_114()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_115(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_116(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_116(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_117()
{
	int iVar0;
	int iVar1;
	
	if (func_66(unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iLocal_181 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x2137828D03306CAF(iVar0))
			{
				iVar1 = 0;
				while (iVar1 < 32)
				{
					if (func_66(unk_0x7C214DA899F05536(iVar1), 1, 1))
					{
						if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(unk_0x7C214DA899F05536(iVar1)), iVar0, 0))
						{
							if (func_118(unk_0x7C214DA899F05536(iVar1)))
							{
								return 1;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	if (iParam0 != func_39())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318, 10);
	}
	return 0;
}

void func_119()
{
	if (Global_1779844)
	{
		if (Global_1312466.f_18 != 0 || func_131())
		{
			Global_1779844 = 0;
			unk_0x91DDBE4C49E9ADC7(1, 0, 0);
		}
	}
	if (func_84(unk_0x0FFED3E94261A832()) && func_120())
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -828834893) != 1 && unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -828834893) != 0)
			{
				unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 0, 576);
			}
		}
	}
}

int func_120()
{
	if (((((((((func_130() || func_129()) || func_128()) || func_127()) || (func_126() && !unk_0x1B154DE2D4606530())) || (func_123() && !func_122())) || Global_2394683) || Global_2394683.f_1 != 0) || Global_2394756 != 0) || (func_121() == 2 && !unk_0x1B154DE2D4606530()))
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	return Global_979818;
}

bool func_122()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 27);
}

int func_123()
{
	if (func_125() || func_124())
	{
		return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 == 8;
	}
	return 0;
}

var func_124()
{
	return Global_2445217.f_614;
}

bool func_125()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 11);
}

bool func_126()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 5);
}

bool func_127()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_128()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 2);
}

bool func_129()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 20);
}

var func_130()
{
	return Global_2445217.f_578;
}

int func_131()
{
	if (unk_0x0AFBA1AD6DC1C540())
	{
		if (unk_0xD7037D74D866BD7D() != 3)
		{
			if (unk_0xE858C2EA240D3C68() > 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_132()
{
	int iVar0;
	var uVar1[25];
	int iVar2;
	struct<3> Var3;
	
	if (unk_0x2137828D03306CAF(func_91()) && !unk_0xA9A04898798AE9E6(func_91(), 0))
	{
		func_88(81, &Var3);
		if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar2 = unk_0x0C5DD04D80C0EC83(unk_0x2A5EB8B0FE590B91(), &uVar1);
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (unk_0x2137828D03306CAF(uVar1[iVar0]) && unk_0x82DF3B947FC3E281(uVar1[iVar0]))
				{
					if (!unk_0xA9A04898798AE9E6(uVar1[iVar0], 0))
					{
						if (func_145(uVar1[iVar0], Var3, 1) < 1.5f)
						{
							bLocal_201 = true;
							Global_2484780 = 1;
						}
					}
				}
				iVar0++;
			}
		}
		else if (bLocal_201)
		{
			bLocal_201 = false;
			Global_2484780 = 0;
		}
	}
	if (func_144() || func_143(unk_0x2A5EB8B0FE590B91(), 1))
	{
		Global_2484780 = 1;
		func_20(&uLocal_202, 1, 0);
		if (iLocal_206 == 0)
		{
			iLocal_206 = unk_0x895FB9FE885E36ED(1000, 1750);
		}
		if (func_136())
		{
			unk_0x4E6996123FABDB93(0, 23, 1);
		}
	}
	else if ((func_23(&uLocal_202) && !func_21(&uLocal_202, iLocal_206, 1)) || func_134())
	{
		if (func_136())
		{
			unk_0x4E6996123FABDB93(0, 23, 1);
		}
	}
	else
	{
		func_57(&uLocal_202);
		iLocal_206 = 0;
	}
	if (func_127())
	{
		func_20(&uLocal_204, 1, 0);
		Global_2484780 = 1;
	}
	if ((func_136() || func_133(10f)) && func_134())
	{
		unk_0x4E6996123FABDB93(0, 23, 1);
		if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			unk_0x654FFF4D16298AC5(unk_0x2A5EB8B0FE590B91());
		}
	}
	if ((func_143(unk_0x2A5EB8B0FE590B91(), 1) || (func_23(&uLocal_202) && !func_21(&uLocal_202, 500, 1))) || (func_23(&uLocal_204) && !func_21(&uLocal_204, 2000, 1)))
	{
		if (func_136())
		{
			unk_0x4E6996123FABDB93(0, 23, 1);
		}
		iLocal_200 = 1;
		Global_2484780 = 1;
	}
	else if (iLocal_200 && !bLocal_201)
	{
		iLocal_200 = 0;
		Global_2484780 = 0;
	}
}

int func_133(float fParam0)
{
	struct<3> Var0;
	
	if (unk_0x2137828D03306CAF(func_91()) && !unk_0xA9A04898798AE9E6(func_91(), 0))
	{
		if (unk_0xD3B21CE53AA7BE51(func_91()) == joaat("trailerlarge"))
		{
			Var0 = { unk_0x82D9CF397BA8C885(func_91(), 0f, -8.9f, -2f) };
			if (unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Var0, 1) <= fParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_134()
{
	if (func_135())
	{
		return Global_1774803.f_22 == 1;
	}
	return 0;
}

bool func_135()
{
	return Global_1774803.f_21;
}

int func_136()
{
	if (unk_0x2137828D03306CAF(func_91()) && !unk_0xA9A04898798AE9E6(func_91(), 0))
	{
		if (unk_0xD3B21CE53AA7BE51(func_91()) == joaat("trailerlarge"))
		{
			if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0xEBB6A451E594E1A8(unk_0xD1EE0E9FCD74A37B(func_91(), 1), unk_0x6DAB28241B34DEED(func_91()), 0f, -15f, -7f), unk_0xEBB6A451E594E1A8(unk_0xD1EE0E9FCD74A37B(func_91(), 1), unk_0x6DAB28241B34DEED(func_91()), 0f, -6.5f, 2.5f), (func_137(joaat("trailerlarge")) * 2.5f), 0, 1, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

float func_137(int iParam0)
{
	float fVar0;
	float fVar1;
	
	func_138(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	return unk_0x3FEF699D13BCC798((fVar0 - fVar1));
}

void func_138(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x88516260CF32A1A0(iParam0))
	{
		unk_0xDE3E0D9E2E663E9A(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_141(iParam0);
		if (iVar0 != 0)
		{
			func_139(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_139(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_140(iParam0, &Global_1315786);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x88516260CF32A1A0(Global_1315786[iVar0]))
		{
			unk_0xDE3E0D9E2E663E9A(Global_1315786[iVar0], &(Global_1315790[iVar0 /*3*/]), &(Global_1315797[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315790[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315797[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315790[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315797[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315804[iVar0] = (Global_1315797[iVar0 /*3*/] - Global_1315790[iVar0 /*3*/]);
		Global_1315807[iVar0] = (Global_1315797[iVar0 /*3*/].f_1 - Global_1315790[iVar0 /*3*/].f_1);
		Global_1315810[iVar0] = (Global_1315797[iVar0 /*3*/].f_2 - Global_1315790[iVar0 /*3*/].f_2);
		if (Global_1315804[iVar0] > Global_1315813)
		{
			Global_1315813 = Global_1315804[iVar0];
		}
		if (Global_1315810[iVar0] > Global_1315814)
		{
			Global_1315814 = Global_1315810[iVar0];
		}
		iVar0++;
	}
	Global_1315815 = (Global_1315813 * -0.5f);
	Global_1315818 = (Global_1315813 * 0.5f);
	Global_1315815.f_1 = ((((0.5f * Global_1315807[0]) + Global_1315807[1]) + Global_1315786.f_3) * -1f);
	Global_1315818.f_1 = (0.5f * Global_1315807[0]);
	Global_1315815.f_2 = (Global_1315810[0] * -0.5f);
	Global_1315818.f_2 = (Global_1315810[0] * 0.5f);
	*uParam1 = { Global_1315815 };
	*uParam2 = { Global_1315818 };
}

void func_140(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	}
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_142(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

int func_143(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0x2137828D03306CAF(iParam0) || unk_0xA9A04898798AE9E6(iParam0, 0)))
	{
		return 0;
	}
	if (unk_0x07E119839AD14892(iParam0, 2))
	{
		return 1;
	}
	if (unk_0xEAA28D53063883A2(iParam0) != 0 || unk_0x73E10648CA4D8C19(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

float func_145(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Param1, iParam2);
}

void func_146()
{
	if (!unk_0x5018862FF5D9F844())
	{
		return;
	}
	Global_1365522.f_495 = 1;
	Global_1365522.f_496 = 1;
}

void func_147()
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (((unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 5) && func_95(unk_0x0FFED3E94261A832())) && func_150(unk_0x0FFED3E94261A832()) == 81) && func_110(unk_0x0FFED3E94261A832()))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (func_149(iVar0, 1) && !func_148(iVar0))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_1592110.f_22, 19))
				{
					unk_0x507FE690B1271947(&(Global_1592110.f_22), 19);
				}
			}
		}
	}
	else if (func_136() && func_110(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1592110.f_22, 19))
		{
			unk_0x507FE690B1271947(&(Global_1592110.f_22), 19);
		}
	}
}

int func_148(int iParam0)
{
	switch (unk_0xD3B21CE53AA7BE51(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_149(int iParam0, bool bParam1)
{
	if (Global_69800)
	{
		if (unk_0x2137828D03306CAF(iParam0) && (!bParam1 || unk_0x7FAC45D56235AB39(iParam0, 0)))
		{
			if (unk_0x30BD96CB13063EC9(iParam0, "Player_Vehicle"))
			{
				if (unk_0x01307FD0B54F50D3(iParam0, "Player_Vehicle") == unk_0xA417460779EE0AF0(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_150(int iParam0)
{
	if (iParam0 != func_39() && func_66(iParam0, 1, 1))
	{
		return Global_2422215[iParam0 /*387*/].f_318.f_11;
	}
	return -1;
}

void func_151()
{
	if (!unk_0x58478145CAF8429C(&(Global_17290.f_1)) && func_144())
	{
		if (unk_0x35302CD5A5D37EED(&(Global_17290.f_1), "ARMORY_TITLE"))
		{
			if (func_143(unk_0x2A5EB8B0FE590B91(), 1) && !iLocal_199)
			{
				iLocal_199 = 1;
			}
		}
		else if (iLocal_199)
		{
			if (Global_2484780)
			{
				Global_2484780 = 0;
			}
			iLocal_199 = 0;
		}
	}
	else if (iLocal_199)
	{
		if (Global_2484780)
		{
			Global_2484780 = 0;
		}
		iLocal_199 = 0;
	}
	if (iLocal_199)
	{
		if (!func_143(unk_0x2A5EB8B0FE590B91(), 1) && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iLocal_199 = 0;
			Global_2484780 = 0;
		}
		else if (!Global_2484780)
		{
			Global_2484780 = 1;
		}
	}
}

void func_152()
{
	if (unk_0x591AF4C50B46E014() && func_66(unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (!iLocal_197)
		{
			if (func_192())
			{
				iLocal_198 = (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_225 - Global_262145.f_19516);
				Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_225 = Global_262145.f_19516;
				func_155(0);
				iLocal_197 = 1;
			}
		}
		else if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_225 == 0)
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_225 = func_153(5417, -1, 0);
			if (iLocal_198 != Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_225)
			{
			}
			iLocal_197 = 0;
		}
	}
}

int func_153(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_154(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_154(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_34();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

void func_155(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_190();
	iVar0 = func_187(9359, -1, -1);
	iVar1 = func_153(5472, -1, 0);
	if (!func_183(func_186(iVar1), -1, -1))
	{
		if (iVar0 == 1 || iVar1 == 1)
		{
			func_180(func_182(iVar1), func_181(iVar1), 1, 1, 0);
		}
		else
		{
			func_180(func_182(iVar1), func_181(iVar1), 1, 1, 1);
		}
		func_179(func_186(iVar1), 1, -1, 1);
	}
	iVar2 = func_153(5439, -1, 0);
	if (iVar0 == 1 && iVar1 != 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(iVar2, 8))
		{
			func_178(18);
			unk_0xF6082E2ADA1C795B(&iVar2, 8);
			func_177(5439, iVar2, -1, 1, 0);
		}
	}
	else if (iVar1 == 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(iVar2, 9))
		{
			func_178(19);
			unk_0xF6082E2ADA1C795B(&iVar2, 9);
			func_177(5439, iVar2, -1, 1, 0);
		}
	}
	func_170();
	func_162(1, iVar1, 0, 0, 0, func_166(unk_0x0FFED3E94261A832(), func_169(unk_0x0FFED3E94261A832())), bParam0);
	switch (iVar1)
	{
		case 1:
			break;
		
		case 23:
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_232), 10);
			break;
		
		default:
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_232), 11);
			break;
	}
	if (func_156())
	{
		unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1698), 27);
	}
}

int func_156()
{
	int iVar0;
	
	if (func_161())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (!func_158(iVar0) && !func_157(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
			return !Global_262145.f_19080;
		
		case 11:
		case 12:
		case 13:
		case 14:
			return !Global_262145.f_19079;
		
		default:
	}
	return 0;
}

int func_158(int iParam0)
{
	if (func_160(iParam0))
	{
		return 1;
	}
	return func_159(iParam0);
}

int func_159(int iParam0)
{
	return func_183(func_186(iParam0), -1, -1);
}

int func_160(int iParam0)
{
	if (Global_262145.f_19821)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_19770;
		
		case 1:
			return Global_262145.f_19771;
		
		case 2:
			return Global_262145.f_19772;
		
		case 3:
			return Global_262145.f_19773;
		
		case 4:
			return Global_262145.f_19774;
		
		case 5:
			return Global_262145.f_19775;
		
		case 6:
			return Global_262145.f_19776;
		
		case 7:
			return Global_262145.f_19777;
		
		case 8:
			return Global_262145.f_19778;
		
		case 9:
			return Global_262145.f_19779;
		
		case 10:
			return Global_262145.f_19780;
		
		case 11:
			return Global_262145.f_19781;
		
		case 12:
			return Global_262145.f_19782;
		
		case 13:
			return Global_262145.f_19783;
		
		case 14:
			return Global_262145.f_19784;
		
		case 15:
			return Global_262145.f_19785;
		
		case 16:
			return Global_262145.f_19786;
		
		case 17:
			return Global_262145.f_19787;
		
		case 18:
			return Global_262145.f_19788;
		
		case 19:
			return Global_262145.f_19789;
		
		case 20:
			return Global_262145.f_19790;
		
		case 21:
			return Global_262145.f_19791;
		
		case 22:
			return Global_262145.f_19792;
		
		case 23:
			return Global_262145.f_19793;
		
		case 24:
			return Global_262145.f_19794;
		
		case 25:
			return Global_262145.f_19795;
		
		case 26:
			return Global_262145.f_19796;
		
		case 27:
			return Global_262145.f_19797;
		
		case 28:
			return Global_262145.f_19798;
		
		case 29:
			return Global_262145.f_19799;
		
		case 30:
			return Global_262145.f_19800;
		
		case 31:
			return Global_262145.f_19801;
		
		case 32:
			return Global_262145.f_19802;
		
		case 33:
			return Global_262145.f_19803;
		
		case 34:
			return Global_262145.f_19804;
		
		case 35:
			return Global_262145.f_19805;
		
		case 36:
			return Global_262145.f_19806;
		
		case 37:
			return Global_262145.f_19807;
		
		case 38:
			return Global_262145.f_19808;
		
		case 39:
			return Global_262145.f_19809;
		
		case 40:
			return Global_262145.f_19810;
		
		case 41:
			return Global_262145.f_19811;
		
		case 42:
			return Global_262145.f_19812;
		
		case 43:
			return Global_262145.f_19813;
		
		case 44:
			return Global_262145.f_19814;
		
		case 45:
			return Global_262145.f_19815;
		
		case 46:
			return Global_262145.f_19816;
		
		case 47:
			return Global_262145.f_19817;
		
		case 48:
			return Global_262145.f_19818;
		
		case 49:
			return Global_262145.f_19819;
		
		case 50:
			return Global_262145.f_19820;
		
		default:
	}
	return 0;
}

bool func_161()
{
	return func_187(9359, -1, -1) == 51;
}

void func_162(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6)
{
	struct<7> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x0FFED3E94261A832();
	iVar2 = func_169(iVar1);
	iVar3 = func_166(iVar1, iVar2);
	unk_0xAC5ECC9C2C15B800(func_34(), &Var0, &(Var0.f_1));
	Var0.f_2 = func_165(iVar3, bParam0, bParam2, bParam3, bParam4, uParam5, bParam6);
	if (iParam1 != -1)
	{
		Var0.f_3 = iParam1 + 1;
	}
	else
	{
		Var0.f_3 = 0;
	}
	if (bParam2)
	{
		Var0.f_4 = 3;
	}
	else if (iVar3 == 2)
	{
		Var0.f_4 = 2;
	}
	else if (iVar3 == 0)
	{
		Var0.f_4 = 1;
	}
	else
	{
		Var0.f_4 = 0;
	}
	Var0.f_5 = Global_1345028[5];
	Var0.f_6 = func_163(iVar1, iVar2);
	STATS::_0xDAF80797FC534BEC(&Var0);
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_39())
	{
		return 0;
	}
	if (func_164(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_165(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		if (bParam6)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (bParam2)
	{
		iVar0 = 1;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam4)
	{
		iVar1 = uParam0;
		iVar2 = uParam5;
		iVar1 += 10;
		iVar2 += 20;
		unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
		unk_0xF6082E2ADA1C795B(&iVar0, iVar2);
		return iVar0;
	}
	return iVar0;
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_39())
	{
		return 0;
	}
	if (func_164(iParam1) && func_167(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_167(int iParam0)
{
	return func_168(iParam0) == 5;
}

int func_168(int iParam0)
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

int func_169(int iParam0)
{
	if (iParam0 == func_39())
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_259.f_152[5 /*12*/];
}

void func_170()
{
	int iVar0;
	
	iVar0 = func_171();
	func_177(5472, iVar0, -1, 1, 0);
}

int func_171()
{
	float fVar0[51];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	
	iVar4 = 0;
	if (func_176() < 7)
	{
		fVar5 = 0f;
		switch (func_176())
		{
			case 0:
				if ((!func_158(23) && func_175()) && func_174())
				{
					return 23;
				}
				fVar5 = Global_262145.f_19712;
				break;
			
			case 1:
				fVar5 = Global_262145.f_19713;
				break;
			
			case 2:
				fVar5 = Global_262145.f_19714;
				break;
			
			case 3:
				fVar5 = Global_262145.f_19715;
				break;
			
			case 4:
				fVar5 = Global_262145.f_19716;
				break;
			
			case 5:
				fVar5 = Global_262145.f_19717;
				break;
			
			case 6:
				fVar5 = Global_262145.f_19718;
				break;
		}
		if (fVar5 > unk_0x399F81B56505EE6F(0f, 1f))
		{
			iVar4 = 1;
		}
	}
	iVar6 = 0;
	while (iVar6 < 51)
	{
		if (!func_158(iVar6) && !func_157(iVar6))
		{
			if (func_176() < 7)
			{
				if (func_173(iVar6) == iVar4)
				{
					fVar0[iVar6] = func_172(iVar6);
				}
				else
				{
					fVar0[iVar6] = 0f;
				}
			}
			else
			{
				fVar0[iVar6] = func_172(iVar6);
			}
		}
		else
		{
			fVar0[iVar6] = 0f;
		}
		iVar6++;
	}
	iVar6 = 0;
	while (iVar6 < 51)
	{
		fVar2 = (fVar2 + fVar0[iVar6]);
		iVar6++;
	}
	fVar3 = unk_0x399F81B56505EE6F(0f, fVar2);
	iVar6 = 0;
	while (iVar6 < 51)
	{
		fVar1 = (fVar1 + fVar0[iVar6]);
		if (fVar3 < fVar1)
		{
			return iVar6;
		}
		iVar6++;
	}
	return -1;
}

float func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_19719;
		
		case 1:
			return Global_262145.f_19720;
		
		case 2:
			return Global_262145.f_19721;
		
		case 3:
			return Global_262145.f_19722;
		
		case 4:
			return Global_262145.f_19723;
		
		case 5:
			return Global_262145.f_19724;
		
		case 6:
			return Global_262145.f_19725;
		
		case 7:
			return Global_262145.f_19726;
		
		case 8:
			return Global_262145.f_19727;
		
		case 9:
			return Global_262145.f_19728;
		
		case 10:
			return Global_262145.f_19729;
		
		case 11:
			return Global_262145.f_19730;
		
		case 12:
			return Global_262145.f_19731;
		
		case 13:
			return Global_262145.f_19732;
		
		case 14:
			return Global_262145.f_19733;
		
		case 15:
			return Global_262145.f_19734;
		
		case 16:
			return Global_262145.f_19735;
		
		case 17:
			return Global_262145.f_19736;
		
		case 18:
			return Global_262145.f_19737;
		
		case 19:
			return Global_262145.f_19738;
		
		case 20:
			return Global_262145.f_19739;
		
		case 21:
			return Global_262145.f_19740;
		
		case 22:
			return Global_262145.f_19741;
		
		case 23:
			return Global_262145.f_19742;
		
		case 24:
			return Global_262145.f_19743;
		
		case 25:
			return Global_262145.f_19744;
		
		case 26:
			return Global_262145.f_19745;
		
		case 27:
			return Global_262145.f_19746;
		
		case 28:
			return Global_262145.f_19747;
		
		case 29:
			return Global_262145.f_19748;
		
		case 30:
			return Global_262145.f_19749;
		
		case 31:
			return Global_262145.f_19750;
		
		case 32:
			return Global_262145.f_19751;
		
		case 33:
			return Global_262145.f_19752;
		
		case 34:
			return Global_262145.f_19753;
		
		case 35:
			return Global_262145.f_19754;
		
		case 36:
			return Global_262145.f_19755;
		
		case 37:
			return Global_262145.f_19756;
		
		case 38:
			return Global_262145.f_19757;
		
		case 39:
			return Global_262145.f_19758;
		
		case 40:
			return Global_262145.f_19759;
		
		case 41:
			return Global_262145.f_19760;
		
		case 42:
			return Global_262145.f_19761;
		
		case 43:
			return Global_262145.f_19762;
		
		case 44:
			return Global_262145.f_19763;
		
		case 45:
			return Global_262145.f_19764;
		
		case 46:
			return Global_262145.f_19765;
		
		case 47:
			return Global_262145.f_19766;
		
		case 48:
			return Global_262145.f_19767;
		
		case 49:
			return Global_262145.f_19768;
		
		case 50:
			return Global_262145.f_19769;
		
		default:
	}
	return 0f;
}

int func_173(int iParam0)
{
	switch (iParam0)
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
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 24:
			return 0;
		
		case 25:
			return 0;
		
		case 26:
			return 0;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 0;
		
		case 30:
			return 0;
		
		case 31:
			return 0;
		
		case 32:
			return 0;
		
		case 33:
			return 0;
		
		case 34:
			return 0;
		
		case 35:
			return 0;
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 0;
		
		case 42:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 0;
		
		case 45:
			return 0;
		
		case 46:
			return 0;
		
		case 47:
			return 0;
		
		case 48:
			return 0;
		
		case 49:
			return 0;
		
		case 50:
			return 0;
		
		default:
	}
	return 0;
}

int func_174()
{
	if ((func_187(15268, -1, -1) == 1 || func_187(15269, -1, -1) == 1) || func_187(15270, -1, -1) == 1)
	{
		return 1;
	}
	return 0;
}

bool func_175()
{
	return func_153(5368, -1, 0) != 0;
}

int func_176()
{
	return func_187(9359, -1, -1);
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_154(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

void func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_17[iVar0]), iVar1);
}

int func_179(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_180(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_94023 = 1;
	StringCopy(&Global_94024, sParam0, 16);
	Global_94022 = iParam1;
	Global_94030 = iParam2;
	Global_94028 = iParam3;
	Global_94029 = iParam4;
	StringCopy(&Global_94031, "GR_RSRCH_", 16);
	if (iParam1 == 0)
	{
		StringConCat(&Global_94031, "WEP_", 16);
	}
	else if (iParam1 == 1)
	{
		StringConCat(&Global_94031, "VEH_", 16);
	}
	else if (iParam1 == 2)
	{
		StringConCat(&Global_94031, "GEN_", 16);
	}
	else
	{
		StringConCat(&Global_94031, "GEN_", 16);
	}
	StringIntConCat(&Global_94031, unk_0x895FB9FE885E36ED(0, 3), 16);
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
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
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 24:
			return 0;
		
		case 25:
			return 0;
		
		case 26:
			return 0;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 0;
		
		case 30:
			return 0;
		
		case 31:
			return 0;
		
		case 32:
			return 0;
		
		case 33:
			return 0;
		
		case 34:
			return 0;
		
		case 35:
			return 0;
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 0;
		
		case 42:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 0;
		
		case 45:
			return 0;
		
		case 46:
			return 0;
		
		case 47:
			return 0;
		
		case 48:
			return 0;
		
		case 49:
			return 0;
		
		case 50:
			return 0;
		
		default:
	}
	return -1;
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WT_APC_SAM";
		
		case 1:
			return "WT_BALLISTIC";
		
		case 2:
			return "WT_HT_QUAD_CAN";
		
		case 3:
			return "WT_T_DUAL_MINI";
		
		case 4:
			return "WT_T_REAR_MORT";
		
		case 5:
			return "WT_T_FNT_MISSL";
		
		case 6:
			return "WT_T_HVY_CHSS";
		
		case 7:
			return "WT_D_GRND_LNCH";
		
		case 8:
			return "WT_D_MINI";
		
		case 9:
			return "WT_I_CAL_GUN";
		
		case 10:
			return "WT_I_LVL3_ARMOR";
		
		case 11:
			return "WT_TEC_MINI";
		
		case 12:
			return "WT_TEC_RAM_BAR";
		
		case 13:
			return "WT_TEC_BRT_BAR";
		
		case 14:
			return "WT_TEC_HVY_CHSS";
		
		case 15:
			return "WT_OPP_RKETS";
		
		case 16:
			return "WT_LIV_FRAC";
		
		case 17:
			return "WT_LIV_DIG";
		
		case 18:
			return "WT_LIV_GEO";
		
		case 19:
			return "WT_LIV_NAT";
		
		case 20:
			return "WT_LIV_NAV";
		
		case 21:
			return "WT_AA_FLAK";
		
		case 22:
			return "WT_AA_MISSL";
		
		case 23:
			return "WT_MOC_TURR";
		
		case 24:
			return "WT_AMMO_INC";
		
		case 25:
			return "WT_AMMO_HP";
		
		case 26:
			return "WT_AMMO_AP";
		
		case 27:
			return "WT_AMMO_FMJ";
		
		case 28:
			return "WT_AMMO_EX";
		
		case 29:
			return "WT_PI_RAIL";
		
		case 30:
			return "WT_PI_COMP";
		
		case 31:
			return "WT_SMG_HOLO";
		
		case 32:
			return "WT_SMG_BARREL";
		
		case 33:
			return "WT_HS_NV";
		
		case 34:
			return "WT_HS_THERMAL";
		
		case 35:
			return "WT_HS_BARREL";
		
		case 36:
			return "WT_CMG_HOLO";
		
		case 37:
			return "WT_CMG_BARREL";
		
		case 38:
			return "WT_AR_HOLO";
		
		case 39:
			return "WT_AR_BARREL";
		
		case 40:
			return "WT_CR_HOLO";
		
		case 41:
			return "WT_CR_BARREL";
		
		case 42:
			return "WT_PROX_M";
		
		case 43:
			return "WT_WLIV_TIG";
		
		case 44:
			return "WT_WLIV_SKU";
		
		case 45:
			return "WT_WLIV_SSN";
		
		case 46:
			return "WT_WLIV_PRS";
		
		case 47:
			return "WT_WLIV_LEO";
		
		case 48:
			return "WT_WLIV_ZEB";
		
		case 49:
			return "WT_WLIV_GEO";
		
		case 50:
			return "WT_WLIV_KBM";
		
		default:
	}
	return "";
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar1 = func_185(iParam0, iParam1);
	uVar2 = func_184(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
	}
	return iVar0;
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	return iVar0;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15381;
		
		case 1:
			return 15382;
		
		case 2:
			return 15428;
		
		case 3:
			return 15429;
		
		case 4:
			return 15430;
		
		case 5:
			return 15431;
		
		case 6:
			return 15491;
		
		case 7:
			return 15432;
		
		case 8:
			return 15433;
		
		case 9:
			return 15434;
		
		case 10:
			return 15435;
		
		case 11:
			return 15436;
		
		case 12:
			return 15437;
		
		case 13:
			return 15438;
		
		case 14:
			return 15439;
		
		case 15:
			return 15447;
		
		case 16:
			return 15448;
		
		case 17:
			return 15449;
		
		case 18:
			return 15450;
		
		case 19:
			return 15451;
		
		case 20:
			return 15452;
		
		case 21:
			return 15453;
		
		case 22:
			return 15454;
		
		case 23:
			return 15455;
		
		case 24:
			return 15456;
		
		case 25:
			return 15457;
		
		case 26:
			return 15458;
		
		case 27:
			return 15459;
		
		case 28:
			return 15460;
		
		case 29:
			return 15461;
		
		case 30:
			return 15462;
		
		case 31:
			return 15463;
		
		case 32:
			return 15464;
		
		case 33:
			return 15465;
		
		case 34:
			return 15466;
		
		case 35:
			return 15467;
		
		case 36:
			return 15468;
		
		case 37:
			return 15469;
		
		case 38:
			return 15470;
		
		case 39:
			return 15471;
		
		case 40:
			return 15472;
		
		case 41:
			return 15473;
		
		case 42:
			return 15474;
		
		case 43:
			return 15492;
		
		case 44:
			return 15493;
		
		case 45:
			return 15494;
		
		case 46:
			return 15495;
		
		case 47:
			return 15496;
		
		case 48:
			return 15497;
		
		case 49:
			return 15498;
		
		case 50:
			return 15499;
		
		default:
	}
	return 15381;
}

int func_187(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	iVar1 = func_189(iParam0, iParam1);
	uVar2 = func_188(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xF50DB4BA5DAF8F6F(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_190()
{
	int iVar0;
	
	iVar0 = func_187(9359, -1, -1);
	func_191(9359, iVar0 + 1, -1, 1);
}

var func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x46377A59ACA37C91(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

bool func_192()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_225 > Global_262145.f_19516;
}

void func_193()
{
	if (func_66(unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (func_70(unk_0x2A5EB8B0FE590B91(), 0) == -1)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 5))
				{
					iLocal_196 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				}
			}
		}
	}
	if (!func_194(unk_0x0FFED3E94261A832()) && !func_82(unk_0x0FFED3E94261A832(), 1, 0))
	{
		if (unk_0x2137828D03306CAF(iLocal_196) && !unk_0xA9A04898798AE9E6(iLocal_196, 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 5))
			{
				if (!unk_0xE859AB9471BCFE37(iLocal_196))
				{
					if (unk_0x1979A7D1D0538188(iLocal_196))
					{
						unk_0xF65C7766FB8D4B2C(iLocal_196, 0);
					}
					else
					{
						unk_0xC620100105DBAFCF(iLocal_196);
					}
				}
			}
		}
	}
}

int func_194(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (func_66(iParam0, 1, 1))
		{
			return Global_2422215[iParam0 /*387*/].f_318.f_1 != -1;
		}
	}
	return 0;
}

void func_195()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 10)
	{
		func_109(iLocal_195, &iVar0, 1);
		if (iVar0 >= 0)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1319066[iVar0 /*140*/].f_101, 10))
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_1319066[iVar0 /*140*/].f_101, 12))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1319066[iVar0 /*140*/].f_101), 12);
				}
			}
		}
		iLocal_195++;
		if (iLocal_195 >= 159)
		{
			iLocal_195 = 0;
		}
		iVar1++;
	}
}

void func_196()
{
	int iVar0;
	
	if (unk_0x0FFED3E94261A832() != func_39())
	{
		if (func_136())
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 5))
				{
					iLocal_193 = 1;
				}
				iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (unk_0x7FAC45D56235AB39(iVar0, 0))
				{
					if (unk_0x2137828D03306CAF(unk_0x8F8E5C33266ED978(iVar0, 0, 0)))
					{
						if (unk_0xA9A04898798AE9E6(unk_0x8F8E5C33266ED978(iVar0, 0, 0), 0))
						{
							Global_262145.f_19064 = 1;
							iLocal_194 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_194)
		{
			iLocal_194 = 0;
			Global_262145.f_19064 = 0;
		}
		if (((iLocal_193 && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)) && !func_95(unk_0x0FFED3E94261A832())) && !unk_0x57A397BDF5F38342())
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 5))
			{
				unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 5);
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1774803.f_1, 12))
			{
				unk_0x507FE690B1271947(&(Global_1774803.f_1), 12);
			}
			if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 19))
			{
				unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 19);
			}
			iLocal_193 = 0;
		}
	}
}

void func_197()
{
	if (!Global_1770276)
	{
		if (func_198())
		{
			Global_1770276 = 1;
		}
	}
	else if (!func_198())
	{
		Global_1770276 = 0;
	}
}

int func_198()
{
	if ((func_82(unk_0x0FFED3E94261A832(), 1, 0) && !unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 14)) && !unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 11))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (func_199())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_199()
{
	if (func_106(2) || func_106(1))
	{
		return 1;
	}
	return 0;
}

void func_200()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (Global_2497344.f_776 && !iLocal_192)
		{
			iLocal_192 = 1;
		}
	}
	else if (iLocal_192)
	{
		iLocal_192 = 0;
	}
	if (Global_2497344.f_778 || iLocal_192)
	{
		if (!iLocal_191)
		{
			uLocal_190 = unk_0xFD0C6B49DA615791();
			iLocal_191 = 1;
		}
		else if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0xB54451B05F280358(iVar0))
			{
				iVar1 = 2000;
			}
			else
			{
				iVar1 = 4000;
			}
			if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0xFD0C6B49DA615791(), uLocal_190)) > iVar1)
			{
				if (unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -828834893) != 1 && unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -828834893) != 0)
				{
					unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 0, 576);
				}
				else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0xFD0C6B49DA615791(), uLocal_190)) > 7000)
				{
					unk_0x5DE3EC94E90BB96F(unk_0x2A5EB8B0FE590B91());
				}
			}
		}
	}
	else if (iLocal_191)
	{
		iLocal_191 = 0;
	}
}

void func_201()
{
	if (Global_1592303 != func_39())
	{
		if (func_202(unk_0x0FFED3E94261A832(), 0))
		{
			if (Global_1592303 == unk_0x0FFED3E94261A832())
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_204, 26))
				{
					if (Global_1312466.f_18 != 0)
					{
						if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_205, 2))
						{
							unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_205), 2);
						}
						if (unk_0x2137828D03306CAF(Global_93946))
						{
							if (unk_0x1979A7D1D0538188(Global_93946))
							{
								unk_0x216B434C1A609F5B(Global_93946, 0, 1);
								unk_0xA613FDAC42DBBFAD(&Global_93946);
								unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_204), 26);
								unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_205), 2);
							}
							else
							{
								unk_0xC620100105DBAFCF(Global_93946);
							}
						}
					}
				}
			}
			else if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				if (func_70(unk_0x2A5EB8B0FE590B91(), 0) != -1)
				{
					if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_205, 5))
					{
						iLocal_187 = 1;
						func_57(&uLocal_188);
					}
				}
			}
			else if (iLocal_187 && unk_0x0B21CC5276C2CE1B())
			{
				iLocal_187 = 0;
				func_57(&uLocal_188);
			}
		}
		if (Global_1592303 != unk_0x0FFED3E94261A832())
		{
			if (unk_0xF4EE9D6C8E60AE22())
			{
				if (iLocal_187)
				{
					if (!func_23(&uLocal_188))
					{
						func_22(&uLocal_188, 0, 0);
					}
					else if (func_21(&uLocal_188, 15000, 0))
					{
						if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
						{
							unk_0x9B0467159FAB9F56(500);
							unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
							unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_205), 5);
							unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_204), 27);
							iLocal_187 = 0;
							func_57(&uLocal_188);
						}
						else
						{
							unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 0, 0);
						}
					}
				}
			}
			else if ((unk_0x0B21CC5276C2CE1B() && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)) && !unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592303 /*387*/].f_204, 26))
			{
				if (iLocal_187)
				{
					iLocal_187 = 0;
					func_57(&uLocal_188);
				}
			}
		}
	}
}

bool func_202(int iParam0, bool bParam1)
{
	if (Global_1592303 != func_39())
	{
		if (!func_204(Global_1592303))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x0FFED3E94261A832() != Global_1592303)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592303 /*387*/].f_204, 24) || func_203(Global_1592303))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 24);
}

int func_203(int iParam0)
{
	if (iParam0 != func_39())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 9);
	}
	return 0;
}

int func_204(int iParam0)
{
	if (iParam0 != func_39())
	{
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 2);
	}
	return 0;
}

void func_205()
{
	int iVar0;
	
	if (func_78(unk_0x0FFED3E94261A832()))
	{
		iVar0 = func_150(unk_0x0FFED3E94261A832());
		if ((iVar0 != -1 && func_81(iVar0) != 4) && func_81(iVar0) != 5)
		{
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1), 3);
			Global_2484780 = 1;
			iLocal_186 = 1;
		}
		else if (func_81(iVar0) == 5)
		{
			Global_262145.f_13910 = 1;
		}
	}
	else if (Global_262145.f_13910)
	{
		if (!func_206())
		{
			Global_262145.f_13910 = 0;
		}
	}
	else if (Global_2484780 && iLocal_186)
	{
		Global_2484780 = 0;
		iLocal_186 = 0;
	}
}

int func_206()
{
	struct<3> Var0;
	
	if (!func_207(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		if (unk_0x2137828D03306CAF(func_91()) && !unk_0xA9A04898798AE9E6(func_91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(func_91()) == joaat("trailerlarge"))
			{
				if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0xEBB6A451E594E1A8(unk_0xD1EE0E9FCD74A37B(func_91(), 1), unk_0x6DAB28241B34DEED(func_91()), 0f, -17f, -10f), unk_0xEBB6A451E594E1A8(unk_0xD1EE0E9FCD74A37B(func_91(), 1), unk_0x6DAB28241B34DEED(func_91()), 0f, -3.5f, 5.5f), (func_137(joaat("trailerlarge")) * 4f), 0, 1, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	else
	{
		Var0 = { 0f, 0f, 0f };
		func_88(81, &Var0);
		return unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Var0, 3.2f, 3.2f, 3.2f, 0, 1, 0);
	}
	return 0;
}

int func_207(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (!unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_208()
{
	if (func_54(unk_0x0FFED3E94261A832()))
	{
		if (func_212(unk_0x0FFED3E94261A832()) == 225)
		{
			if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_184 == 38)
			{
				if (!func_209())
				{
					Global_2497344.f_4828.f_23 = 1;
				}
			}
		}
	}
}

int func_209()
{
	int iVar0;
	
	iVar0 = Global_262145.f_14865;
	if (func_210(func_34(), 5) < iVar0)
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0, int iParam1)
{
	return func_153(func_211(iParam1), iParam0, 0);
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3873;
		
		case 1:
			return 3902;
		
		case 2:
			return 3906;
		
		case 3:
			return 3910;
		
		case 4:
			return 3914;
		
		case 5:
			return 5425;
		
		default:
	}
	return 3873;
}

int func_212(int iParam0)
{
	if (func_213(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_213(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_214()
{
	if (func_136())
	{
		if (func_216() || unk_0x9E5289F5D782437C())
		{
			if (!Global_262145.f_19064)
			{
				Global_262145.f_19064 = 1;
				iLocal_184 = 1;
			}
		}
		else if (iLocal_184)
		{
			Global_262145.f_19064 = 0;
			iLocal_184 = 0;
		}
	}
	else if (iLocal_184)
	{
		Global_262145.f_19064 = 0;
		iLocal_184 = 0;
	}
	if (func_215(81))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (func_70(unk_0x2A5EB8B0FE590B91(), 0) == -1)
			{
				if (func_136())
				{
					if (unk_0x92BC4A8239BDDACC(2, 51))
					{
						iLocal_185 = 1;
						unk_0xBF33903C684D3B0C(0);
						if (func_125() || func_124())
						{
							Global_2445217.f_635 = 1;
						}
					}
					if (iLocal_185)
					{
						unk_0xCF3FB52D0C1B0347();
						unk_0xBF33903C684D3B0C(0);
						if (!unk_0x9E5289F5D782437C())
						{
							iLocal_185 = 0;
						}
					}
				}
				else if (iLocal_185)
				{
					iLocal_185 = 0;
				}
			}
		}
	}
}

int func_215(int iParam0)
{
	if (unk_0x7E810282244275E0(unk_0x0FFED3E94261A832(), "AM_MP_SMPL_INTERIOR_EXT", iParam0) || unk_0xAA8734FF6F62B60F("AM_MP_SMPL_INTERIOR_EXT", iParam0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_216()
{
	return unk_0x237515DD54DDE573() != 0;
}

void func_217()
{
	if (func_215(81))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (func_70(unk_0x2A5EB8B0FE590B91(), 0) == -1)
			{
				if (func_136())
				{
					if (!func_218(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
					{
						unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 1);
						bLocal_183 = true;
						unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 0);
					}
				}
				else
				{
					unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
					if (bLocal_183)
					{
						bLocal_183 = false;
						unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
					}
				}
			}
		}
	}
	else if (bLocal_183)
	{
		bLocal_183 = false;
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 398, 0);
		unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
	}
	if (bLocal_183)
	{
		unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 0);
	}
}

int func_218(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_219(unk_0x0FFED3E94261A832()))
		{
			if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
			{
				if (unk_0x30BD96CB13063EC9(iParam0, "Player_Vehicle"))
				{
					if (unk_0x01307FD0B54F50D3(iParam0, "Player_Vehicle") != unk_0xA417460779EE0AF0(unk_0x0FFED3E94261A832()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_219(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
	}
	return 1;
}

void func_220()
{
	int iVar0;
	
	func_109(156, &iVar0, 1);
	if (iVar0 >= 0)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1319066[iVar0 /*140*/].f_101, 10))
		{
			if (!iLocal_182)
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_1319066[iVar0 /*140*/].f_101, 12))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1319066[iVar0 /*140*/].f_101), 12);
				}
				iLocal_182 = 1;
			}
		}
		else
		{
			iLocal_182 = 0;
		}
	}
	else
	{
		iLocal_182 = 0;
	}
}

void func_221()
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (func_70(unk_0x2A5EB8B0FE590B91(), 0) != -1)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 8))
			{
				if (unk_0x908783EBF098B817() && func_66(Global_1774803.f_1720, 1, 1))
				{
					if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1774803.f_1720 /*387*/].f_318, 5))
					{
						unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 0, 0);
						unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 8);
					}
				}
			}
		}
	}
}

void func_222()
{
	if (func_215(81))
	{
		if (func_136())
		{
			if (unk_0x908783EBF098B817() && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				iLocal_180 = 1;
				iLocal_181 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
	}
	if (!func_84(unk_0x0FFED3E94261A832()))
	{
		if (((iLocal_180 && (!unk_0x2137828D03306CAF(Global_2497344.f_286[1]) || (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_9, 8) && unk_0x2137828D03306CAF(Global_2497344.f_286[1])))) && unk_0x2137828D03306CAF(iLocal_181)) && !unk_0x908783EBF098B817())
		{
			if (!unk_0xA9A04898798AE9E6(iLocal_181, 0))
			{
				if (!unk_0xE859AB9471BCFE37(iLocal_181))
				{
					if (unk_0x1979A7D1D0538188(iLocal_181))
					{
						unk_0xF65C7766FB8D4B2C(iLocal_181, 0);
						iLocal_180 = 0;
					}
				}
			}
		}
		else if (!unk_0x2137828D03306CAF(iLocal_181))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				iLocal_181 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
	}
	else if (iLocal_180)
	{
		iLocal_180 = 0;
	}
}

void func_223()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!iLocal_179)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iLocal_176[iVar0] = 0;
			iLocal_177[iVar0] = -1;
			iLocal_178[iVar0] = -1;
			iVar0++;
		}
		iLocal_179 = 1;
	}
	if (func_228())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_227(iVar0))
			{
				if (!iLocal_176[iVar0])
				{
					iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/];
					iVar2 = Global_1345028[iVar0];
					if (iVar1 != 0)
					{
						if (iLocal_177[iVar0] < Global_262145.f_17028)
						{
							iVar3 = func_225(1, iVar2, 0);
							iVar4 = (unk_0x82157B4962CD9980() + unk_0x0A157779750902D2(-1));
							iLocal_177[iVar0] = (iVar4 - iVar3);
						}
						if (iLocal_178[iVar0] > -1)
						{
							if (Global_2595364[iLocal_178[iVar0] /*76*/].f_4 != 268924934)
							{
								iVar6 = (unk_0x82157B4962CD9980() + unk_0x0A157779750902D2(-1));
								if (iVar6 > iLocal_177[iVar0])
								{
									Global_1345004[iVar0] = 0;
									iLocal_176[iVar0] = 0;
									iLocal_177[iVar0] = -1;
									iLocal_178[iVar0] = -1;
									func_177(func_224(iVar0), 0, -1, 1, 0);
								}
								else
								{
									iLocal_176[iVar0] = 1;
								}
							}
						}
						else
						{
							iVar5 = 0;
							while (iVar5 < 5)
							{
								if (Global_2595364[iVar5 /*76*/].f_4 == 268924934)
								{
									iLocal_178[iVar0] = iVar5;
								}
								iVar5++;
							}
						}
					}
				}
				else if (iLocal_176[iVar0])
				{
					iLocal_178[iVar0] = -1;
					iLocal_177[iVar0] = -1;
				}
			}
			else if (iLocal_176[iVar0])
			{
				iLocal_176[iVar0] = 0;
			}
			iVar0++;
		}
	}
	else if ((unk_0x5E60CE6A99DCBE0A() % 10) == 0)
	{
		iLocal_179 = 0;
	}
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3848;
		
		case 1:
			return 3849;
		
		case 2:
			return 3850;
		
		case 3:
			return 3851;
		
		case 4:
			return 3852;
		
		case 5:
			return 5419;
		
		default:
	}
	return 3848;
}

int func_225(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (bParam2)
	{
		iVar0 = Global_262145.f_19524;
	}
	else if (bParam0)
	{
		iVar0 = Global_262145.f_16180;
	}
	else
	{
		iVar0 = Global_262145.f_17028;
	}
	fVar2 = (SYSTEM::TO_FLOAT((100 - iParam1)) / 20f);
	iVar1 = SYSTEM::CEIL(fVar2);
	iVar1 = func_226(iVar1, 0, 5);
	return (iVar1 * iVar0);
}

int func_226(int iParam0, int iParam1, int iParam2)
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

bool func_227(int iParam0)
{
	return Global_1345004[iParam0] != 0;
}

int func_228()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_227(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_229()
{
	int iVar0;
	
	if (!iLocal_175)
	{
		if (Global_1574132)
		{
			iVar0 = func_230(joaat("MPPLY_CHAR_EXPLOIT_LEVEL"));
			if (iVar0 >= 4)
			{
				Global_262145.f_8790 = 1;
			}
			iLocal_175 = 1;
		}
	}
	else if (!Global_1574132)
	{
		iLocal_175 = 0;
	}
}

int func_230(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_231()
{
	if (func_66(unk_0x0FFED3E94261A832(), 1, 1))
	{
		if ((unk_0x908783EBF098B817() && !func_136()) || Global_1312466.f_18 != 0)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 5))
			{
				unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 5);
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1774803.f_1, 12))
			{
				unk_0x507FE690B1271947(&(Global_1774803.f_1), 12);
			}
		}
	}
}

void func_232()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = -1;
	if (func_127())
	{
		iVar5 = 0;
		while (iVar5 < 12)
		{
			if (iLocal_174[iVar5])
			{
				iLocal_174[iVar5] = 0;
			}
			iVar5++;
		}
	}
	else if (func_82(unk_0x0FFED3E94261A832(), 0, 0))
	{
		iVar5 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_79;
		if ((iVar5 > -1 && iVar5 < 12) && !iLocal_174[iVar5])
		{
			iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15;
			iVar2 = func_242(iVar5);
			iVar0 = 0;
			while (iVar0 < func_239(iVar5, -1))
			{
				iVar3 = (iVar0 + iVar2);
				func_109(iVar3, &iVar4, 0);
				if (func_233(iVar3, iVar1, iVar5))
				{
					if (iVar4 > -1)
					{
						unk_0xF6082E2ADA1C795B(&(Global_1319066[iVar4 /*140*/].f_101), 12);
					}
				}
				else if (iVar4 > -1)
				{
					unk_0x507FE690B1271947(&(Global_1319066[iVar4 /*140*/].f_101), 12);
				}
				iVar0++;
			}
			iLocal_174[iVar5] = 1;
		}
	}
}

int func_233(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 > 0 && iParam1 <= 115) && func_238(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_242(iParam2)) >= 0 && (iParam0 - func_242(iParam2)) < Global_1049460[iParam1 /*1943*/].f_33) && iParam0 < 159)
			{
				return 1;
			}
			if (Global_1049460[iParam1 /*1943*/].f_33 == 2 && iParam0 == (10 + func_242(iParam2)))
			{
				return 1;
			}
			if ((Global_1049460[iParam1 /*1943*/].f_33 == 6 && iParam0 >= (10 + func_242(iParam2))) && iParam0 <= (11 + func_242(iParam2)))
			{
				return 1;
			}
			if (Global_1049460[iParam1 /*1943*/].f_33 == 10)
			{
				if (func_237(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_242(iParam2)) && iParam0 <= (12 + func_242(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_242(iParam2)) && iParam0 <= func_234(iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_234(int iParam0)
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
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_236(iParam0);
		return func_235(iVar0);
	}
	return (func_239(iParam0, -1) * iParam0 + 1);
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_236(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

int func_237(int iParam0, int iParam1)
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

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

int func_239(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_241(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_240(iParam1))
			{
				return 0;
			}
			else if (func_237(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 <= 115 && iParam1 > 0)
			{
				if (Global_1049460[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 10)
				{
					return 13;
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
	}
	return 0;
}

int func_240(int iParam0)
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

int func_241(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_202(unk_0x0FFED3E94261A832(), 0);
	}
	if (bParam1)
	{
		if (func_202(unk_0x0FFED3E94261A832(), 0))
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

int func_242(int iParam0)
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
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_236(iParam0);
		return func_243(iVar0);
	}
	return (func_239(iParam0, -1) * iParam0);
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

void func_244()
{
	int iVar0;
	
	if (unk_0x5018862FF5D9F844())
	{
		if (bLocal_52)
		{
			iLocal_173 = 1;
			func_57(&uLocal_171);
		}
		else if (iLocal_173)
		{
			func_22(&uLocal_171, 0, 0);
			iLocal_173 = 0;
		}
		else if (func_23(&uLocal_171) && !func_21(&uLocal_171, 15000, 0))
		{
		}
		else
		{
			func_57(&uLocal_171);
			func_15(1);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_153)
		{
			iLocal_153[iVar0] = Global_2595364[iVar0 /*76*/];
			iVar0++;
		}
		if (unk_0x591AF4C50B46E014())
		{
			if (func_66(unk_0x0FFED3E94261A832(), 1, 1))
			{
				if (iLocal_152 >= 3)
				{
					unk_0x91DDBE4C49E9ADC7(14, 0, 0);
				}
				if (func_23(&uLocal_169))
				{
					if (func_21(&uLocal_169, 300000, 0))
					{
						func_57(&uLocal_169);
						iLocal_152 = 0;
					}
				}
				else
				{
					func_22(&uLocal_169, 0, 0);
				}
			}
		}
	}
}

void func_245()
{
	if (func_247(unk_0x0FFED3E94261A832()) == 227)
	{
		if (func_246() == unk_0x0FFED3E94261A832())
		{
			if (iLocal_148 == -1)
			{
				iLocal_148 = unk_0x895FB9FE885E36ED(0, 2);
				if (iLocal_148 == 0)
				{
					Global_262145.f_19673 = 1;
					Global_262145.f_19678 = 0;
				}
				else
				{
					Global_262145.f_19678 = 1;
					Global_262145.f_19673 = 0;
				}
			}
		}
	}
	else if (iLocal_148 != -1)
	{
		iLocal_148 = -1;
	}
}

int func_246()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34;
}

int func_247(int iParam0)
{
	if (func_248(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_31;
	}
	return -1;
}

int func_248(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_31 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_249()
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	if (func_95(unk_0x0FFED3E94261A832()) && func_150(unk_0x0FFED3E94261A832()) == 81)
	{
		bVar0 = true;
		if (func_89(Local_147))
		{
			func_88(81, &Local_147);
		}
	}
	if (bVar0)
	{
		if (func_207(unk_0x2A5EB8B0FE590B91()) && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			func_88(81, &Var1);
			if (((func_66(unk_0x0FFED3E94261A832(), 1, 1) && !unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0)) && !func_89(Local_147)) && !func_89(Var1))
			{
				if ((func_145(unk_0x2A5EB8B0FE590B91(), Var1, 1) > 2f && func_145(unk_0x2A5EB8B0FE590B91(), Local_147, 1) < 4f) && unk_0x0B21CC5276C2CE1B())
				{
					func_250(0, 81, 0);
				}
			}
		}
	}
	else
	{
		Local_147 = { 0f, 0f, 0f };
	}
}

void func_250(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (Global_1774803.f_23 == -1)
		{
			Global_1774803.f_23 = iParam1;
			Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_11 = iParam1;
			Global_1774803.f_21 = 1;
			Global_1774803.f_22 = bParam2;
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 3);
			if (bParam2)
			{
				unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 4);
			}
			else
			{
				unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 4);
			}
			Global_70068 = 1;
		}
	}
	else if (Global_1774803.f_23 == iParam1)
	{
		Global_1774803.f_23 = -1;
		Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_11 = -1;
		Global_1774803.f_21 = 0;
		Global_1774803.f_22 = 0;
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 3);
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 4);
		Global_70068 = 0;
	}
}

void func_251()
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = false;
	if ((func_66(unk_0x0FFED3E94261A832(), 1, 1) && !unk_0x1B154DE2D4606530()) && !func_263())
	{
		bVar1 = func_206();
		if (bVar1)
		{
			if (!func_194(unk_0x0FFED3E94261A832()))
			{
				iLocal_149 = 1;
				Global_262145.f_13910 = 1;
				if (((func_261() && func_258()) && !func_252()) && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					if (!iLocal_150)
					{
						if (!Global_1573333)
						{
							Global_1573333 = 1;
							iLocal_150 = 1;
						}
					}
				}
				else if (iLocal_150)
				{
					iLocal_150 = 0;
					Global_1573333 = 0;
				}
				if (!iLocal_151)
				{
					if (!Global_1751545)
					{
						Global_1751545 = 1;
						iLocal_151 = 1;
					}
				}
			}
		}
		else
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
		if (iLocal_149)
		{
			iLocal_149 = 0;
			Global_262145.f_13910 = 0;
			if (iLocal_150)
			{
				Global_1573333 = 0;
				iLocal_150 = 0;
			}
			if (iLocal_151)
			{
				Global_1751545 = 0;
				iLocal_151 = 0;
			}
		}
	}
}

int func_252()
{
	if (func_213(unk_0x0FFED3E94261A832(), 1) && func_255(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (func_254(unk_0x0FFED3E94261A832()) || func_253(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_255(int iParam0)
{
	if (func_254(iParam0))
	{
		return 1;
	}
	if (func_256(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_257(iParam0, 9);
	}
	return 0;
}

bool func_257(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

int func_258()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_54(unk_0x0FFED3E94261A832()) || !func_53(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = unk_0x0FFED3E94261A832();
	}
	else
	{
		iVar0 = func_260(unk_0x0FFED3E94261A832());
	}
	if (iVar0 == func_39())
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (Global_1592456[iVar0 /*635*/].f_259.f_152[iVar1 /*12*/] != 0)
		{
			iVar2 = func_259(Global_1592456[iVar0 /*635*/].f_259.f_152[iVar1 /*12*/]);
			if (func_215(iVar2))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 83)
	{
		if (func_72(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_260(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_39();
}

int func_261()
{
	int iVar0;
	
	if (func_54(unk_0x0FFED3E94261A832()) || !func_53(unk_0x0FFED3E94261A832(), 0))
	{
		return func_262(unk_0x0FFED3E94261A832());
	}
	iVar0 = func_260(unk_0x0FFED3E94261A832());
	if (iVar0 == func_39())
	{
		return 0;
	}
	return func_262(iVar0);
}

bool func_262(int iParam0)
{
	if (iParam0 == func_39())
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_259.f_152[0 /*12*/] != 0;
}

int func_263()
{
	int iVar0;
	
	if (func_54(unk_0x0FFED3E94261A832()) || !func_53(unk_0x0FFED3E94261A832(), 0))
	{
		if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_236 == joaat("hauler2") || Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_236 == joaat("phantom3"))
		{
			return func_71(unk_0x0FFED3E94261A832());
		}
	}
	else
	{
		iVar0 = func_260(unk_0x0FFED3E94261A832());
		if (iVar0 != func_39())
		{
			if (Global_1592456[iVar0 /*635*/].f_259.f_236 == joaat("hauler2") || Global_1592456[iVar0 /*635*/].f_259.f_236 == joaat("phantom3"))
			{
				return func_71(iVar0);
			}
		}
	}
	return 1;
}

void func_264()
{
	if (Global_1315779 == 1)
	{
		if (iLocal_146 == 0)
		{
			iLocal_146 = 1;
			func_265(joaat("weapon_assaultrifle"));
			func_265(joaat("weapon_combatmg"));
			func_265(joaat("weapon_heavysniper"));
			func_265(joaat("weapon_carbinerifle"));
			func_265(joaat("weapon_smg"));
		}
	}
	else if (iLocal_146 == 1)
	{
		iLocal_146 = 0;
	}
}

void func_265(int iParam0)
{
	if (!func_291(iParam0, -1))
	{
		if (func_288(1623028892, iParam0, -1))
		{
			if (!unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), func_287(iParam0), 0))
			{
				unk_0x0013D519C885E60B(unk_0x2A5EB8B0FE590B91(), func_287(iParam0), 0, 0, 1);
				func_285(func_287(iParam0));
				func_272(func_287(iParam0));
				unk_0xED8B70EF5DA72F44(unk_0x2A5EB8B0FE590B91(), unk_0xACE6D09949AACBF7(unk_0x2A5EB8B0FE590B91(), iParam0), func_269(iParam0));
				func_266(func_287(iParam0));
			}
		}
	}
}

void func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_268(&iVar2, iParam0, iVar1))
		{
			iVar3 = unk_0xAA31B04A2542A446(unk_0x2A5EB8B0FE590B91(), iVar2);
			iVar4 = func_267(iParam0, iVar2);
			if (iVar4 > iVar3)
			{
				WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(unk_0x2A5EB8B0FE590B91(), iVar2, (iVar4 - iVar3));
			}
			else if (iVar3 == 0 && iVar4 == 0)
			{
				WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(unk_0x2A5EB8B0FE590B91(), iVar2, 0);
			}
		}
		iVar1++;
	}
}

int func_267(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_PISTOL_FMJ"):
					return func_153(5555, -1, 0);
					break;
				
				case joaat("AMMO_PISTOL_HOLLOWPOINT"):
					return func_153(5556, -1, 0);
					break;
				
				case joaat("AMMO_PISTOL_INCENDIARY"):
					return func_153(5557, -1, 0);
					break;
				
				case joaat("AMMO_PISTOL_TRACER"):
					return func_153(5558, -1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_RIFLE_ARMORPIERCING"):
					return func_153(5539, -1, 0);
					break;
				
				case joaat("AMMO_RIFLE_FMJ"):
					return func_153(5540, -1, 0);
					break;
				
				case joaat("AMMO_RIFLE_INCENDIARY"):
					return func_153(5541, -1, 0);
					break;
				
				case joaat("AMMO_RIFLE_TRACER"):
					return func_153(5542, -1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_RIFLE_ARMORPIERCING"):
					return func_153(5543, -1, 0);
					break;
				
				case joaat("AMMO_RIFLE_FMJ"):
					return func_153(5544, -1, 0);
					break;
				
				case joaat("AMMO_RIFLE_INCENDIARY"):
					return func_153(5545, -1, 0);
					break;
				
				case joaat("AMMO_RIFLE_TRACER"):
					return func_153(5546, -1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_MG_ARMORPIERCING"):
					return func_153(5547, -1, 0);
					break;
				
				case joaat("AMMO_MG_FMJ"):
					return func_153(5548, -1, 0);
					break;
				
				case joaat("AMMO_MG_INCENDIARY"):
					return func_153(5549, -1, 0);
					break;
				
				case joaat("AMMO_MG_TRACER"):
					return func_153(5550, -1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_SNIPER_ARMORPIERCING"):
					return func_153(5551, -1, 0);
					break;
				
				case joaat("AMMO_SNIPER_EXPLOSIVE"):
					return func_153(5552, -1, 0);
					break;
				
				case joaat("AMMO_SNIPER_FMJ"):
					return func_153(5553, -1, 0);
					break;
				
				case joaat("AMMO_SNIPER_INCENDIARY"):
					return func_153(5554, -1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam1)
			{
				case joaat("AMMO_SMG_FMJ"):
					return func_153(5559, -1, 0);
					break;
				
				case joaat("AMMO_SMG_HOLLOWPOINT"):
					return func_153(5560, -1, 0);
					break;
				
				case joaat("AMMO_SMG_INCENDIARY"):
					return func_153(5561, -1, 0);
					break;
				
				case joaat("AMMO_SMG_TRACER"):
					return func_153(5562, -1, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_268(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = joaat("AMMO_SPACE_ROCKET");
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_PISTOL_FMJ");
					break;
				
				case 1:
					*uParam0 = joaat("AMMO_PISTOL_HOLLOWPOINT");
					break;
				
				case 2:
					*uParam0 = joaat("AMMO_PISTOL_INCENDIARY");
					break;
				
				case 3:
					*uParam0 = joaat("AMMO_PISTOL_TRACER");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_RIFLE_ARMORPIERCING");
					break;
				
				case 1:
					*uParam0 = joaat("AMMO_RIFLE_FMJ");
					break;
				
				case 2:
					*uParam0 = joaat("AMMO_RIFLE_INCENDIARY");
					break;
				
				case 3:
					*uParam0 = joaat("AMMO_RIFLE_TRACER");
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_RIFLE_ARMORPIERCING");
					break;
				
				case 1:
					*uParam0 = joaat("AMMO_RIFLE_FMJ");
					break;
				
				case 2:
					*uParam0 = joaat("AMMO_RIFLE_INCENDIARY");
					break;
				
				case 3:
					*uParam0 = joaat("AMMO_RIFLE_TRACER");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_MG_ARMORPIERCING");
					break;
				
				case 1:
					*uParam0 = joaat("AMMO_MG_FMJ");
					break;
				
				case 2:
					*uParam0 = joaat("AMMO_MG_INCENDIARY");
					break;
				
				case 3:
					*uParam0 = joaat("AMMO_MG_TRACER");
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_SNIPER_ARMORPIERCING");
					break;
				
				case 1:
					*uParam0 = joaat("AMMO_SNIPER_EXPLOSIVE");
					break;
				
				case 2:
					*uParam0 = joaat("AMMO_SNIPER_FMJ");
					break;
				
				case 3:
					*uParam0 = joaat("AMMO_SNIPER_INCENDIARY");
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("AMMO_SMG_FMJ");
					break;
				
				case 1:
					*uParam0 = joaat("AMMO_SMG_HOLLOWPOINT");
					break;
				
				case 2:
					*uParam0 = joaat("AMMO_SMG_INCENDIARY");
					break;
				
				case 3:
					*uParam0 = joaat("AMMO_SMG_TRACER");
					break;
			}
			break;
	}
	return *uParam0 != joaat("AMMO_SPACE_ROCKET");
}

var func_269(int iParam0)
{
	var uVar0;
	
	uVar0 = func_270(iParam0, -1);
	return uVar0;
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_271(iParam0);
	if (iVar0 < 6309)
	{
		return func_153(iVar0, iParam1, 0);
	}
	return 0;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 254;
			break;
		
		case joaat("weapon_smg"):
			return 304;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 323;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 332;
			break;
		
		case joaat("weapon_combatmg"):
			return 359;
			break;
		
		case joaat("weapon_heavysniper"):
			return 433;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (func_288(joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WEAPON_ASSAULTRIFLE_MK2"), -1))
			{
				return 5539;
				break;
			}
			else if (func_288(joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WEAPON_ASSAULTRIFLE_MK2"), -1))
			{
				return 5540;
				break;
			}
			else if (func_288(joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WEAPON_ASSAULTRIFLE_MK2"), -1))
			{
				return 5541;
				break;
			}
			else if (func_288(joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WEAPON_ASSAULTRIFLE_MK2"), -1))
			{
				return 5542;
				break;
			}
			else
			{
				return 323;
				break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (func_288(joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WEAPON_CARBINERIFLE_MK2"), -1))
			{
				return 5543;
				break;
			}
			else if (func_288(joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WEAPON_CARBINERIFLE_MK2"), -1))
			{
				return 5544;
				break;
			}
			else if (func_288(joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WEAPON_CARBINERIFLE_MK2"), -1))
			{
				return 5545;
				break;
			}
			else if (func_288(joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WEAPON_CARBINERIFLE_MK2"), -1))
			{
				return 5546;
				break;
			}
			else
			{
				return 332;
				break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			if (func_288(joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WEAPON_COMBATMG_MK2"), -1))
			{
				return 5547;
				break;
			}
			else if (func_288(joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WEAPON_COMBATMG_MK2"), -1))
			{
				return 5548;
				break;
			}
			else if (func_288(joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WEAPON_COMBATMG_MK2"), -1))
			{
				return 5549;
				break;
			}
			else if (func_288(joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WEAPON_COMBATMG_MK2"), -1))
			{
				return 5550;
				break;
			}
			else
			{
				return 359;
				break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (func_288(joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WEAPON_HEAVYSNIPER_MK2"), -1))
			{
				return 5551;
				break;
			}
			else if (func_288(joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WEAPON_HEAVYSNIPER_MK2"), -1))
			{
				return 5552;
				break;
			}
			else if (func_288(joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WEAPON_HEAVYSNIPER_MK2"), -1))
			{
				return 5553;
				break;
			}
			else if (func_288(joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WEAPON_HEAVYSNIPER_MK2"), -1))
			{
				return 5554;
				break;
			}
			else
			{
				return 433;
				break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			if (func_288(joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WEAPON_PISTOL_MK2"), -1))
			{
				return 5555;
				break;
			}
			else if (func_288(joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WEAPON_PISTOL_MK2"), -1))
			{
				return 5556;
				break;
			}
			else if (func_288(joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WEAPON_PISTOL_MK2"), -1))
			{
				return 5557;
				break;
			}
			else if (func_288(joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WEAPON_PISTOL_MK2"), -1))
			{
				return 5558;
				break;
			}
			else
			{
				return 254;
				break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			if (func_288(joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WEAPON_SMG_MK2"), -1))
			{
				return 5559;
				break;
			}
			else if (func_288(joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WEAPON_SMG_MK2"), -1))
			{
				return 5560;
				break;
			}
			else if (func_288(joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WEAPON_SMG_MK2"), -1))
			{
				return 5561;
				break;
			}
			else if (func_288(joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WEAPON_SMG_MK2"), -1))
			{
				return 5562;
				break;
			}
			else
			{
				return 304;
				break;
			}
			break;
	}
	return 6309;
}

void func_272(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 11;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_282(&iVar2, iParam0, iVar0))
		{
			if (func_275(iVar2, iParam0, -1))
			{
				if (func_288(iVar2, iParam0, -1))
				{
					unk_0x89D366E494B209DB(unk_0x2A5EB8B0FE590B91(), iParam0, iVar2);
					func_273(unk_0x2A5EB8B0FE590B91(), iParam0, iVar2);
				}
			}
		}
		iVar0++;
	}
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_274(iParam2);
	if (iVar0 != 0)
	{
		unk_0x89D366E494B209DB(iParam0, iParam1, iVar0);
	}
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
	}
	return 0;
}

bool func_275(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_279(iParam0, iParam1, iParam2);
	iVar1 = func_277(iParam0, iParam1);
	return unk_0xAA4F14DA15DB0B51(uVar0, func_276(iVar1));
}

int func_276(int iParam0)
{
	return (iParam0 % 32);
}

int func_277(int iParam0, int iParam1)
{
	return func_278(iParam0, iParam1);
}

int func_278(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
	}
	return 0;
}

int func_279(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_153(func_280(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

int func_280(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_277(iParam0, iParam1);
	iVar1 = func_281(iVar0);
	switch (iVar1)
	{
		case 0:
			return 806;
			break;
		
		case 1:
			return 807;
			break;
		
		case 2:
			return 808;
			break;
		
		case 3:
			return 809;
			break;
		
		case 4:
			return 1746;
			break;
		
		case 5:
			return 2418;
			break;
		
		case 6:
			return 2810;
			break;
		
		case 7:
			return 5474;
			break;
		
		case 8:
			return 5478;
			break;
		
		case 9:
			return 5482;
			break;
		
		case 10:
			return 5595;
			break;
		
		case 11:
			return 5599;
			break;
		
		case 12:
			return 5603;
			break;
		
		case 13:
			return 5607;
			break;
	}
	return 6309;
}

int func_281(int iParam0)
{
	return (iParam0 / 32);
}

bool func_282(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<4> Var4;
	
	*uParam0 = 0;
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO");
					break;
				
				case 1:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_02");
					break;
				
				case 2:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_03");
					break;
				
				case 3:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_04");
					break;
				
				case 4:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_05");
					break;
				
				case 5:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_06");
					break;
				
				case 6:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_07");
					break;
				
				case 7:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_08");
					break;
				
				case 8:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_09");
					break;
				
				case 9:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_10");
					break;
				
				case 10:
					*uParam0 = joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO");
					break;
				
				case 1:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02");
					break;
				
				case 2:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03");
					break;
				
				case 3:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04");
					break;
				
				case 4:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05");
					break;
				
				case 5:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06");
					break;
				
				case 6:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07");
					break;
				
				case 7:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08");
					break;
				
				case 8:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09");
					break;
				
				case 9:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10");
					break;
				
				case 10:
					*uParam0 = joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01");
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO");
					break;
				
				case 1:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02");
					break;
				
				case 2:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03");
					break;
				
				case 3:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04");
					break;
				
				case 4:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05");
					break;
				
				case 5:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06");
					break;
				
				case 6:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07");
					break;
				
				case 7:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08");
					break;
				
				case 8:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09");
					break;
				
				case 9:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10");
					break;
				
				case 10:
					*uParam0 = joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO");
					break;
				
				case 1:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_02");
					break;
				
				case 2:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_03");
					break;
				
				case 3:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_04");
					break;
				
				case 4:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_05");
					break;
				
				case 5:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_06");
					break;
				
				case 6:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_07");
					break;
				
				case 7:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_08");
					break;
				
				case 8:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_09");
					break;
				
				case 9:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_10");
					break;
				
				case 10:
					*uParam0 = joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01");
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO");
					break;
				
				case 1:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02");
					break;
				
				case 2:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03");
					break;
				
				case 3:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04");
					break;
				
				case 4:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05");
					break;
				
				case 5:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06");
					break;
				
				case 6:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07");
					break;
				
				case 7:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08");
					break;
				
				case 8:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09");
					break;
				
				case 9:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10");
					break;
				
				case 10:
					*uParam0 = joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01");
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO");
					break;
				
				case 1:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_02");
					break;
				
				case 2:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_03");
					break;
				
				case 3:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_04");
					break;
				
				case 4:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_05");
					break;
				
				case 5:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_06");
					break;
				
				case 6:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_07");
					break;
				
				case 7:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_08");
					break;
				
				case 8:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_09");
					break;
				
				case 9:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_10");
					break;
				
				case 10:
					*uParam0 = joaat("COMPONENT_SMG_MK2_CAMO_IND_01");
					break;
			}
			break;
		
		default:
			iVar0 = func_284(iParam1, &uVar3);
			if (iVar0 != -1)
			{
				iVar1 = 0;
				while (iVar1 < unk_0xE4DF013DB87812E6(iVar0))
				{
					if (unk_0x5D038A5F54FB9F50(iVar0, iVar1, &Var4))
					{
						if (!func_283(Var4.f_3))
						{
							if (iVar2 == iParam2)
							{
								*uParam0 = Var4.f_3;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
			}
			break;
	}
	return *uParam0 != 0;
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_284(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x963D77592D01E990();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xAEF11B8C6B59FE54(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (func_286(&iVar1, iParam0, iVar0))
		{
			if (func_275(iVar1, iParam0, -1))
			{
				if (func_288(iVar1, iParam0, -1))
				{
					unk_0x89D366E494B209DB(unk_0x2A5EB8B0FE590B91(), iParam0, iVar1);
					func_273(unk_0x2A5EB8B0FE590B91(), iParam0, iVar1);
				}
			}
		}
		iVar0++;
	}
}

bool func_286(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<4> Var4;
	
	*uParam0 = 0;
	iVar0 = func_284(iParam1, &uVar3);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < unk_0xE4DF013DB87812E6(iVar0))
		{
			if (unk_0x5D038A5F54FB9F50(iVar0, iVar1, &Var4))
			{
				if (!func_283(Var4.f_3))
				{
					if (iVar2 == iParam2)
					{
						*uParam0 = Var4.f_3;
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	return *uParam0 != 0;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return joaat("WEAPON_PISTOL_MK2");
		
		case joaat("weapon_smg"):
			return joaat("WEAPON_SMG_MK2");
		
		case joaat("weapon_assaultrifle"):
			return joaat("WEAPON_ASSAULTRIFLE_MK2");
		
		case joaat("weapon_carbinerifle"):
			return joaat("WEAPON_CARBINERIFLE_MK2");
		
		case joaat("weapon_combatmg"):
			return joaat("WEAPON_COMBATMG_MK2");
		
		case joaat("weapon_heavysniper"):
			return joaat("WEAPON_HEAVYSNIPER_MK2");
		
		default:
	}
	return 0;
}

bool func_288(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_289(iParam0, iParam1, iParam2);
	iVar1 = func_277(iParam0, iParam1);
	return unk_0xAA4F14DA15DB0B51(uVar0, func_276(iVar1));
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_153(func_290(iParam0, iParam1), iParam2, 0);
	return iVar0;
}

int func_290(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_277(iParam0, iParam1);
	iVar1 = func_281(iVar0);
	switch (iVar1)
	{
		case 0:
			return 683;
			break;
		
		case 1:
			return 684;
			break;
		
		case 2:
			return 685;
			break;
		
		case 3:
			return 686;
			break;
		
		case 4:
			return 1748;
			break;
		
		case 5:
			return 2420;
			break;
		
		case 6:
			return 2812;
			break;
		
		case 7:
			return 5476;
			break;
		
		case 8:
			return 5480;
			break;
		
		case 9:
			return 5484;
			break;
		
		case 10:
			return 5597;
			break;
		
		case 11:
			return 5601;
			break;
		
		case 12:
			return 5605;
			break;
		
		case 13:
			return 5609;
			break;
	}
	return 1748;
}

bool func_291(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_294(iParam0, iParam1);
	iVar1 = func_292(iParam0);
	return unk_0xAA4F14DA15DB0B51(uVar0, func_276(iVar1));
}

int func_292(int iParam0)
{
	return func_293(iParam0);
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 5;
			break;
	}
	return 0;
}

int func_294(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_153(func_295(iParam0), iParam1, 0);
	return iVar0;
}

int func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_292(iParam0);
	iVar1 = func_281(iVar0);
	switch (iVar1)
	{
		case 0:
			return 795;
			break;
		
		case 1:
			return 796;
			break;
		
		case 2:
			return 2403;
			break;
	}
	return 6309;
}

void func_296()
{
	bool bVar0;
	
	if (func_82(unk_0x0FFED3E94261A832(), 1, 0))
	{
		if (func_241(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15, 0, 0) && Global_1592303 != unk_0x0FFED3E94261A832())
		{
			if (func_298(unk_0x0FFED3E94261A832(), 1))
			{
				if (!func_298(unk_0x0FFED3E94261A832(), 0) || (func_298(unk_0x0FFED3E94261A832(), 0) && func_297(unk_0x0FFED3E94261A832())))
				{
					if (!unk_0xEF08C8E0C4679477() && !unk_0xF4EE9D6C8E60AE22())
					{
						bVar0 = true;
						unk_0x4E6996123FABDB93(0, 23, 1);
						if (unk_0x908783EBF098B817())
						{
							if (!iLocal_142)
							{
								iLocal_142 = 1;
							}
							if (!iLocal_143)
							{
								iLocal_143 = 1;
							}
							func_57(&uLocal_144);
						}
						else if (iLocal_142)
						{
							unk_0x5BFE0E837BA0AF60(0);
							func_20(&uLocal_144, 1, 0);
							iLocal_142 = 0;
						}
					}
				}
				else if (iLocal_143)
				{
					iLocal_143 = 0;
				}
			}
			else if (iLocal_143)
			{
				if (!func_298(unk_0x0FFED3E94261A832(), 0) || (func_298(unk_0x0FFED3E94261A832(), 0) && func_297(unk_0x0FFED3E94261A832())))
				{
					if (!unk_0xEF08C8E0C4679477() && !unk_0xF4EE9D6C8E60AE22())
					{
						bVar0 = true;
						unk_0x4E6996123FABDB93(0, 23, 1);
						func_57(&uLocal_144);
						iLocal_143 = 0;
						iLocal_142 = 0;
						unk_0x91DDBE4C49E9ADC7(1, 0, 0);
					}
				}
				else if (iLocal_143)
				{
					iLocal_143 = 0;
				}
			}
		}
	}
	if (unk_0x0B21CC5276C2CE1B() || unk_0x908783EBF098B817())
	{
		func_57(&uLocal_144);
	}
	if (!bVar0)
	{
		if (iLocal_142)
		{
			iLocal_142 = 0;
		}
		if (iLocal_143)
		{
			iLocal_143 = 0;
		}
		if (func_23(&uLocal_144))
		{
			if (func_21(&uLocal_144, 15000, 1))
			{
				unk_0x9B0467159FAB9F56(0);
			}
		}
	}
}

bool func_297(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_205, 5);
}

bool func_298(int iParam0, bool bParam1)
{
	if (Global_1592303 != func_39())
	{
		if (!func_204(Global_1592303))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x0FFED3E94261A832() != Global_1592303)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592303 /*387*/].f_204, 24) || func_203(Global_1592303))
				{
					return 1;
				}
			}
		}
	}
	if (iParam0 == func_39())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 24);
}

void func_299()
{
	if (Global_1345093 && !iLocal_135)
	{
		iLocal_136 = unk_0xAA31B04A2542A446(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_PISTOL"));
		iLocal_137 = unk_0xAA31B04A2542A446(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_SMG"));
		iLocal_138 = unk_0xAA31B04A2542A446(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_RIFLE"));
		iLocal_139 = unk_0xAA31B04A2542A446(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_RIFLE"));
		iLocal_140 = unk_0xAA31B04A2542A446(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_MG"));
		iLocal_141 = unk_0xAA31B04A2542A446(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_SNIPER"));
		iLocal_135 = 1;
	}
	else if (iLocal_135 && !Global_1345093)
	{
		unk_0xED8B70EF5DA72F44(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_PISTOL"), iLocal_136);
		unk_0xED8B70EF5DA72F44(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_SMG"), iLocal_137);
		unk_0xED8B70EF5DA72F44(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_RIFLE"), iLocal_138);
		unk_0xED8B70EF5DA72F44(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_RIFLE"), iLocal_139);
		unk_0xED8B70EF5DA72F44(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_MG"), iLocal_140);
		unk_0xED8B70EF5DA72F44(unk_0x2A5EB8B0FE590B91(), joaat("AMMO_SNIPER"), iLocal_141);
		iLocal_136 = 0;
		iLocal_137 = 0;
		iLocal_138 = 0;
		iLocal_139 = 0;
		iLocal_140 = 0;
		iLocal_141 = 0;
		iLocal_135 = 0;
	}
}

void func_300()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	if (!func_51())
	{
		return;
	}
	if (!bLocal_52)
	{
		if (func_23(&uLocal_131))
		{
			func_20(&uLocal_131, 1, 0);
		}
		else if (!func_21(&uLocal_131, 15000, 0))
		{
			return;
		}
		if (unk_0x3227E797058C3C9A())
		{
			iLocal_130 = 0;
			func_20(&uLocal_133, 1, 0);
			return;
		}
		else if (unk_0x436DA77C694B34C5())
		{
			iLocal_130 = 0;
			func_20(&uLocal_133, 1, 0);
			return;
		}
		else if (func_23(&uLocal_133))
		{
			if (!func_21(&uLocal_133, 3000, 0))
			{
				return;
			}
			func_57(&uLocal_133);
		}
		if (Global_68165 || func_370())
		{
			return;
		}
		if (func_153(5368, -1, 0) == 0)
		{
			return;
		}
		iVar0 = -1;
		func_368(158, &iVar0, -1);
		if (iVar0 != -1)
		{
			if (!iLocal_130)
			{
				func_351(iVar0, &Local_56, -1, 0, 0);
				iLocal_130 = 1;
			}
			if (Local_56.f_66 == Global_1319066[iVar0 /*140*/].f_66)
			{
				if (!func_349(&Local_56, &(Global_1319066[iVar0 /*140*/])))
				{
					Global_68325 = { Global_1319066[iVar0 /*140*/] };
					iLocal_55 = -1;
					bLocal_52 = true;
					iLocal_53 = 0;
				}
			}
		}
	}
	else
	{
		iVar1 = -1;
		func_368(158, &iVar1, -1);
		if (!unk_0x2137828D03306CAF(iLocal_54))
		{
			if (!func_343(&Global_68325, &iLocal_54))
			{
			}
		}
		else
		{
			iVar2 = Global_68325.f_66;
			bVar3 = true;
			uVar4 = func_341(iVar2, bVar3);
			iVar5 = func_340(iVar1);
			if (!func_303(&iLocal_55, 0, iVar2, -1224924353, -897111558, uVar4, iVar5, 0, 0, 0, iLocal_54))
			{
				switch (iLocal_55)
				{
					case 0:
						if (unk_0x2137828D03306CAF(iLocal_54))
						{
							unk_0xA613FDAC42DBBFAD(&iLocal_54);
						}
						unk_0xFD213087BC4CC3B3(iVar2);
						break;
					
					case 2:
						break;
					
					default:
						break;
				}
				if (func_51())
				{
					func_45(func_301());
				}
				if (unk_0x2137828D03306CAF(iLocal_54))
				{
					unk_0xA613FDAC42DBBFAD(&iLocal_54);
				}
				unk_0xFD213087BC4CC3B3(iVar2);
				iLocal_130 = 0;
				func_57(&uLocal_131);
				func_57(&uLocal_133);
			}
		}
	}
}

int func_301()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_302(iVar0) != 2147483647)
		{
			if (func_48(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_302(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/];
	}
	return -1;
}

int func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	if (bLocal_52)
	{
		if (!unk_0x34C4AEAA38B25021(func_34()) || unk_0x3227E797058C3C9A())
		{
			iLocal_53 = 3;
		}
		switch (iLocal_53)
		{
			case 0:
				if (func_337(78225582, iParam3, uParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
				{
					iVar0 = -1;
					func_368(158, &iVar0, -1);
					if (func_308(iVar0, iParam10, 1))
					{
						if (func_306())
						{
							iLocal_53 = 1;
						}
						else
						{
							iLocal_53 = 3;
						}
					}
					else
					{
						iLocal_53 = 3;
					}
				}
				else
				{
					iLocal_53 = 3;
				}
				break;
			
			case 1:
				if (func_305(func_301()))
				{
					if (func_304(func_301()) == 2)
					{
						iLocal_53 = 2;
					}
					else
					{
						iLocal_53 = 3;
					}
				}
				break;
			
			case 2:
				bLocal_52 = false;
				iLocal_53 = 0;
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_45(func_301());
				bLocal_52 = false;
				iLocal_53 = 0;
				*iParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	if (iLocal_53 == 3)
	{
		func_45(func_301());
		bLocal_52 = false;
		iLocal_53 = 0;
		*iParam0 = 0;
		return 0;
	}
	iLocal_53 = 0;
	*iParam0 = -1;
	return 0;
}

int func_304(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_2;
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_2 != 1;
	}
	return 0;
}

int func_306()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	iVar1 = func_301();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_34()) || unk_0x3227E797058C3C9A())
		{
			if (func_307(Global_2595364[iVar1 /*76*/].f_6, Global_2595364[iVar1 /*76*/].f_4, Global_2595364[iVar1 /*76*/].f_1) == 1)
			{
				Global_2595874 = 1;
			}
			return 0;
		}
		if (Global_2455861)
		{
			if (Global_2595364[iVar1 /*76*/].f_6 == 1067618600 || Global_2595364[iVar1 /*76*/].f_6 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_302(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar2))
		{
			if (bVar0)
			{
				Global_2595364[iVar1 /*76*/].f_69 = 1;
			}
			Global_2595364[iVar1 /*76*/].f_75 = 0;
			Global_2595864 = 1;
			return 1;
		}
	}
	return 0;
}

int func_307(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_308(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	char* sVar28;
	
	iVar10 = func_336(unk_0xD3B21CE53AA7BE51(iParam1));
	if (((!Global_2599120 || !unk_0x2137828D03306CAF(iParam1)) || !unk_0x7FAC45D56235AB39(iParam1, 0)) || unk_0x300A7FCC6B376752(iParam1) <= 0)
	{
		if (unk_0x300A7FCC6B376752(iParam1) <= 0 && func_335(unk_0xD3B21CE53AA7BE51(iParam1)))
		{
			func_334(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &sVar5, &iVar8, &iVar9, 0);
			if (!func_333(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!func_333(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &sVar5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!func_331(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_332(iVar0)))
			{
				return 0;
			}
			if (!func_333(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!func_331(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_332(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (unk_0x2137828D03306CAF(iParam1) && unk_0x7FAC45D56235AB39(iParam1, 0))
	{
		iVar12 = func_329(unk_0xD3B21CE53AA7BE51(iParam1));
		iVar13 = func_328(unk_0xD3B21CE53AA7BE51(iParam1));
		iVar14 = func_327(unk_0xD3B21CE53AA7BE51(iParam1));
		iVar15 = func_326(unk_0xD3B21CE53AA7BE51(iParam1));
		if (bVar11)
		{
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", unk_0x855369FDBD418C02(iParam1, 0) + 1, 14, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", unk_0x855369FDBD418C02(iParam1, 1) + 1, 34, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", unk_0x855369FDBD418C02(iParam1, 2) + 11, 35, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", unk_0x855369FDBD418C02(iParam1, 3) + 1, 13, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", unk_0x855369FDBD418C02(iParam1, 4) + 1, 6, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", unk_0x855369FDBD418C02(iParam1, 5) + 1, 4, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", unk_0x855369FDBD418C02(iParam1, 6) + 1, 8, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", unk_0x855369FDBD418C02(iParam1, 7) + 1, 9, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", unk_0x855369FDBD418C02(iParam1, 8) + 1, 36, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", unk_0x855369FDBD418C02(iParam1, 9) + 6, 37, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", unk_0x855369FDBD418C02(iParam1, 10) + 1, 12, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", unk_0x855369FDBD418C02(iParam1, 11) + 1, 5, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", unk_0x855369FDBD418C02(iParam1, 12) + 1, 2, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", unk_0x855369FDBD418C02(iParam1, 13) + 1, 16, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", unk_0x855369FDBD418C02(iParam1, 15) + 1, 15, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", unk_0x855369FDBD418C02(iParam1, 16) + 1, 1, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_324(unk_0x9CFA3995FF093229(iParam1, 18)), 17, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_324(unk_0x9CFA3995FF093229(iParam1, 22)), 11, iVar12, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", unk_0x855369FDBD418C02(iParam1, 25) + 1, 41, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", unk_0x855369FDBD418C02(iParam1, 26) + 1, 42, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", unk_0x855369FDBD418C02(iParam1, 27) + 1, 43, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", unk_0x855369FDBD418C02(iParam1, 28) + 1, 44, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", unk_0x855369FDBD418C02(iParam1, 29) + 1, 45, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", unk_0x855369FDBD418C02(iParam1, 30) + 1, 46, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", unk_0x855369FDBD418C02(iParam1, 31) + 1, 47, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", unk_0x855369FDBD418C02(iParam1, 32) + 1, 48, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", unk_0x855369FDBD418C02(iParam1, 33) + 1, 49, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", unk_0x855369FDBD418C02(iParam1, 34) + 1, 50, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", unk_0x855369FDBD418C02(iParam1, 35) + 1, 51, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", unk_0x855369FDBD418C02(iParam1, 36) + 1, 52, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", unk_0x855369FDBD418C02(iParam1, 37) + 1, 53, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", unk_0x855369FDBD418C02(iParam1, 38) + 1, 54, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", unk_0x855369FDBD418C02(iParam1, 39) + 1, 55, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", unk_0x855369FDBD418C02(iParam1, 40) + 1, 56, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", unk_0x855369FDBD418C02(iParam1, 41) + 1, 57, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", unk_0x855369FDBD418C02(iParam1, 42) + 1, 58, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", unk_0x855369FDBD418C02(iParam1, 43) + 1, 59, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", unk_0x855369FDBD418C02(iParam1, 44) + 1, 60, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", unk_0x855369FDBD418C02(iParam1, 45) + 1, 61, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", unk_0x855369FDBD418C02(iParam1, 46) + 1, 62, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", unk_0x855369FDBD418C02(iParam1, 47) + 1, 63, iVar13, -1))
			{
				return 0;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", unk_0x855369FDBD418C02(iParam1, 48) + 1, 64, iVar14, -1))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar16 = func_323(unk_0x51E31F2D62FEB7A5(iParam1, 14, unk_0x855369FDBD418C02(iParam1, 14)));
			if (!func_321(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_322(uVar16), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!func_320(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!func_320(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!func_318(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar17 = 0;
			switch (unk_0x289A21B43A9C74AA(iParam1))
			{
				case 0:
					iVar17 = 0;
					break;
				
				case 3:
					iVar17 = 1;
					break;
				
				case 2:
					iVar17 = 2;
					break;
				
				case 1:
					iVar17 = 3;
					break;
				
				case 4:
					iVar17 = 4;
					break;
				
				case 5:
					iVar17 = 5;
					break;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar17, 33, iVar12, -1))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (unk_0x8721B6183C713CE4(iParam1))
			{
				case 3:
					iVar18 = 0;
					break;
				
				case 0:
					iVar18 = 1;
					break;
				
				case 4:
					iVar18 = 2;
					break;
				
				case 2:
					iVar18 = 3;
					break;
				
				case 1:
					iVar18 = 4;
					break;
			}
			if (!func_325(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar18, 23, iVar12, -1))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (unk_0xF9562C9903A5FC6A(iParam1, 23) == 0)
			{
				if (!func_325(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1))
				{
					return 0;
				}
			}
			else if (!func_325(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1))
			{
				return 0;
			}
			if (unk_0xF9562C9903A5FC6A(iParam1, 24) == 0)
			{
				if (!func_325(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1))
				{
					return 0;
				}
			}
			else if (!func_325(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1))
			{
				return 0;
			}
		}
		func_334(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &sVar5, &iVar8, &iVar9, 1);
		iVar19 = func_317(iVar9);
		if (!func_325(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar19, 29, iVar10, -1))
		{
			return 0;
		}
		unk_0xC2C096B78AB918EB(iParam1, iVar6, iVar7);
		unk_0x1225B25A5432A577(iParam1, iVar8, iVar9);
		if (!func_333(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!func_333(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &sVar5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!func_331(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_332(iVar0)))
		{
			return 0;
		}
		if (!func_333(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!func_331(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_332(iVar1)))
		{
			return 0;
		}
		unk_0xA6349759D1FE6F1C(iParam1, &iVar20, &iVar21, &iVar22);
		switch (func_316(iVar20, iVar21, iVar22))
		{
			case 1:
				iVar23 = 3;
				break;
			
			case 2:
				iVar23 = 4;
				break;
			
			case 3:
				iVar23 = 5;
				break;
			
			case 4:
				iVar23 = 6;
				break;
			
			case 5:
				iVar23 = 11;
				break;
			
			case 6:
				iVar23 = 7;
				break;
			
			case 7:
				iVar23 = 10;
				break;
			
			case 8:
				iVar23 = 8;
				break;
			
			case 9:
				iVar23 = 12;
				break;
			
			case 10:
				iVar23 = 13;
				break;
			
			case 11:
				iVar23 = -1;
				break;
			
			case 12:
				iVar23 = 9;
				break;
		}
		if (bVar11)
		{
			if (!func_315(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar23, 18, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!unk_0x7C5D0771C19AD7FF(iParam1))
			{
				if (!func_314(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			unk_0x3D1322AE2DC09A02(iParam1, &iVar27);
			bVar24 = false;
			iVar25 = 0;
			while (func_313(iVar25, &iVar26) && !bVar24)
			{
				if (iVar26 == iVar27)
				{
					bVar24 = true;
					sVar28 = func_312(iVar25);
				}
				else
				{
					iVar25++;
				}
			}
			if (bVar24)
			{
				func_311(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar28, 38, 5, 3);
			}
			unk_0xCD2A4E2B322FD4B4(iParam1, &iVar27);
			bVar24 = false;
			iVar25 = 0;
			while (func_310(iVar25, &iVar26) && !bVar24)
			{
				if (iVar26 == iVar27)
				{
					bVar24 = true;
					sVar28 = func_309(iVar25);
				}
				else
				{
					iVar25++;
				}
			}
			if (!bVar24)
			{
				if (iVar27 == 0)
				{
					sVar28 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar24 = true;
				}
				else if (iVar27 == 132)
				{
					sVar28 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar24 = true;
				}
			}
			if (bVar24)
			{
				func_311(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar28, 65, 6, 3);
			}
		}
		if (iParam2 && bVar11)
		{
		}
		else if (bVar11)
		{
		}
		return 1;
	}
	return 0;
}

char* func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

bool func_310(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_311(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0xC877C73FCCFD8DE2())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	if (!unk_0x9D8C78CA322057EC(unk_0xCAEDBF30E3EA14FC(&cVar1)))
	{
		StringCopy(&cVar1, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar1, iParam4, 64);
		StringConCat(&cVar1, "_", 64);
		StringConCat(&cVar1, sParam2, 64);
		StringConCat(&cVar1, "_t", 64);
		StringIntConCat(&cVar1, iParam3, 64);
		StringConCat(&cVar1, "_v", 64);
		StringIntConCat(&cVar1, iParam5, 64);
	}
	if (!unk_0x9D8C78CA322057EC(unk_0xCAEDBF30E3EA14FC(&cVar1)))
	{
		return 1;
	}
	return func_337(78225582, -1224924353, unk_0xCAEDBF30E3EA14FC(&cVar1), 478352891, 1, 0, 1, 4, unk_0xCAEDBF30E3EA14FC(&cVar0), 3);
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

bool func_313(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_314(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0xC877C73FCCFD8DE2())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!unk_0x9D8C78CA322057EC(unk_0xCAEDBF30E3EA14FC(&cVar1)))
	{
		return 1;
	}
	return func_337(78225582, -1224924353, unk_0xCAEDBF30E3EA14FC(&cVar1), 478352891, 1, 0, 1, 4, unk_0xCAEDBF30E3EA14FC(&cVar0), 3);
}

int func_315(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0xC877C73FCCFD8DE2())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar1, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!unk_0x9D8C78CA322057EC(unk_0xCAEDBF30E3EA14FC(&cVar1)))
	{
		return 1;
	}
	return func_337(78225582, -1224924353, unk_0xCAEDBF30E3EA14FC(&cVar1), 478352891, 1, 0, 1, 4, unk_0xCAEDBF30E3EA14FC(&cVar0), 3);
}

int func_316(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314009 && iParam1 == Global_1314010) && iParam2 == Global_1314011)
	{
		return 12;
	}
	unk_0xF9C830438D0097FD(21, &iVar0, &iVar1, &iVar2, &uVar3);
	if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
	{
		return 5;
	}
	unk_0xF9C830438D0097FD(18, &iVar0, &iVar1, &iVar2, &uVar3);
	if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
	{
		return 7;
	}
	if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
	{
		return 7;
	}
	unk_0xF9C830438D0097FD(24, &iVar0, &iVar1, &iVar2, &uVar3);
	if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
	{
		return 9;
	}
	unk_0xF9C830438D0097FD(107, &iVar0, &iVar1, &iVar2, &uVar3);
	if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
	{
		return 10;
	}
	return 1;
}

int func_317(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_318(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	
	if (unk_0xC877C73FCCFD8DE2())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar1 = func_319(unk_0xEDE232D4FB7953E1(iParam2));
	if (!unk_0x9D8C78CA322057EC(iVar1))
	{
		return 1;
	}
	return func_337(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, unk_0xCAEDBF30E3EA14FC(&cVar0), 3);
}

int func_319(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

int func_320(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	
	if (unk_0xC877C73FCCFD8DE2())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	iVar2 = unk_0x855369FDBD418C02(iParam2, iParam3);
	if (iVar2 == -1 || (iParam3 == 24 && !unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iParam2))))
	{
		if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iParam2)))
		{
			StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar1, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar1, unk_0x0E5B8F76E9B66F81(iParam2, iParam3, iVar2), 64);
	}
	StringConCat(&cVar1, "_t19_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!unk_0x9D8C78CA322057EC(unk_0xCAEDBF30E3EA14FC(&cVar1)))
	{
		return 1;
	}
	return func_337(78225582, -1224924353, unk_0xCAEDBF30E3EA14FC(&cVar1), 478352891, 1, 0, 1, 4, unk_0xCAEDBF30E3EA14FC(&cVar0), 3);
}

int func_321(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0xC877C73FCCFD8DE2())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!unk_0x9D8C78CA322057EC(unk_0xCAEDBF30E3EA14FC(&cVar1)))
	{
		return 1;
	}
	return func_337(78225582, -1224924353, unk_0xCAEDBF30E3EA14FC(&cVar1), 478352891, 1, 0, 1, 4, unk_0xCAEDBF30E3EA14FC(&cVar0), 3);
}

char* func_322(var uParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
	}
	return sVar0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case -722822506:
			return 1;
			break;
		
		case -493570582:
			return 2;
			break;
		
		case -1451310145:
			return 3;
			break;
		
		case -953155807:
			return 4;
			break;
		
		case 444549672:
			return 5;
			break;
		
		case 1603064898:
			return 6;
			break;
		
		case 240366033:
			return 7;
			break;
		
		case 960137118:
			return 8;
			break;
		
		case 771284519:
			return 9;
			break;
		
		case -1708346067:
			return 10;
			break;
		
		case 283386134:
			return 11;
			break;
		
		case -410464896:
			return 12;
			break;
		
		case 265723083:
			return 13;
			break;
		
		case 1746883687:
			return 14;
			break;
		
		case 1919870950:
			return 15;
			break;
		
		case 1085277077:
			return 16;
			break;
		
		case -666433007:
			return 17;
			break;
		
		case -402413174:
			return 18;
			break;
		
		case -182074418:
			return 19;
			break;
		
		case 116877169:
			return 20;
			break;
		
		case -1609983577:
			return 21;
			break;
		
		case -1312277212:
			return 22;
			break;
		
		case -1091676304:
			return 23;
			break;
		
		case -1394589232:
			return 24;
			break;
		
		case -1095309955:
			return 25;
			break;
		
		case -338772048:
			return 26;
			break;
		
		case 2099578296:
			return 27;
			break;
		
		case 676333254:
			return 28;
			break;
		
		case 1373384483:
			return 29;
			break;
		
		case 310529291:
			return 30;
			break;
		
		case 55291550:
			return 31;
			break;
		
		case -1329398309:
			return 32;
			break;
		
		case 965054819:
			return 33;
			break;
		
		case -1378191490:
			return 34;
			break;
		
		case -1683107035:
			return 35;
			break;
		
		case -580260344:
			return 36;
			break;
		
		case -1088196937:
			return 37;
			break;
		
		case 55862314:
			return 38;
			break;
		
		case 400002352:
			return 39;
			break;
		
		case 560832604:
			return 40;
			break;
		
		case -2138224118:
			return 41;
			break;
		
		case 897484282:
			return 42;
			break;
		
		case 314232747:
			return 43;
			break;
		
		case 1307678422:
			return 46;
			break;
		
		case -208525380:
			return 45;
			break;
		
		case 1646559452:
			return 44;
			break;
		
		case 50707886:
			return 47;
			break;
		
		case 273438779:
			return 48;
			break;
		
		case 1592391033:
			return 49;
			break;
		
		case -319516276:
			return 50;
			break;
		
		case 993865248:
			return 51;
			break;
		
		case 632950117:
			return 52;
			break;
	}
	return 0;
}

int func_324(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_325(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0xC877C73FCCFD8DE2())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar1, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar1, "_n", 64);
		StringIntConCat(&cVar1, iParam6, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!unk_0x9D8C78CA322057EC(unk_0xCAEDBF30E3EA14FC(&cVar1)))
	{
		return 1;
	}
	return func_337(78225582, -1224924353, unk_0xCAEDBF30E3EA14FC(&cVar1), 478352891, 1, 0, 1, 4, unk_0xCAEDBF30E3EA14FC(&cVar0), 3);
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction3"):
			return 12;
			break;
		
		case joaat("diablous"):
			return 4;
			break;
		
		case joaat("fcr"):
			return 4;
			break;
	}
	return func_336(iParam0);
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case joaat("btype2"):
			return 9;
			break;
		
		case joaat("lurcher"):
			return 8;
			break;
		
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
		
		case joaat("btype3"):
			return 5;
			break;
		
		case joaat("omnis"):
			return 13;
			break;
		
		case joaat("bf400"):
			return 14;
			break;
		
		case joaat("tropos"):
			return 15;
			break;
		
		case joaat("brioso"):
			return 16;
			break;
		
		case joaat("trophytruck"):
			return 17;
			break;
		
		case joaat("trophytruck2"):
			return 18;
			break;
		
		case joaat("cliffhanger"):
			return 19;
			break;
		
		case joaat("tampa2"):
			return 20;
			break;
		
		case joaat("gargoyle"):
			return 21;
			break;
		
		case joaat("le7b"):
			return 22;
			break;
		
		case joaat("lynx"):
			return 24;
			break;
		
		case joaat("sheava"):
			return 25;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
	}
	return 3;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 3;
			break;
		
		case joaat("sabregt2"):
			return 3;
			break;
		
		case joaat("slamvan3"):
			return 3;
			break;
		
		case joaat("tornado5"):
			return 3;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
	}
	return 3;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
	}
	switch (iParam0)
	{
		case joaat("apc"):
			return 29;
			break;
		
		case joaat("halftrack"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("dune3"):
			return 30;
			break;
		
		case joaat("insurgent3"):
			return 30;
			break;
		
		case joaat("tampa3"):
			return 30;
			break;
		
		case joaat("technical3"):
			return 30;
			break;
		
		case joaat("oppressor"):
			return 31;
			break;
		
		case joaat("phantom3"):
			return 32;
			break;
		
		case joaat("hauler2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
	}
	if (func_330(iParam0))
	{
		return 3;
	}
	if (unk_0x4BD9974FDDE2D1EC(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
			return 3;
			break;
	}
	return 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return 1;
			break;
		
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
	}
	return 0;
}

int func_331(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	
	if (unk_0xC877C73FCCFD8DE2())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!unk_0x9D8C78CA322057EC(iParam2))
	{
		return 1;
	}
	return func_337(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, unk_0xCAEDBF30E3EA14FC(&cVar0), 3);
}

int func_332(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

int func_333(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0xC877C73FCCFD8DE2())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar1, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar1, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar1, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar1, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar1, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar1, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar1, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar1, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 6)
	{
		StringConCat(&cVar1, "MCT_NONE_", 64);
	}
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (iParam6 == 6)
	{
		StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar1, iParam7, 64);
	}
	if (!unk_0x9D8C78CA322057EC(unk_0xCAEDBF30E3EA14FC(&cVar1)))
	{
		return 1;
	}
	return func_337(78225582, -1224924353, unk_0xCAEDBF30E3EA14FC(&cVar1), 478352891, 1, 0, 1, 4, unk_0xCAEDBF30E3EA14FC(&cVar0), 3);
}

void func_334(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	unk_0x89AFA08324111FDC(iParam0, iParam3, iParam6);
	unk_0xA410C943ACB84245(iParam0, iParam9, uParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		unk_0x05E005EA5C9DD9F7(iParam0, iParam1, &uVar0, &uVar2);
		unk_0xFC554E56023C10DA(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar5 = unk_0x596043E74FC62B90(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				unk_0xA645E869B019EA62(iParam0, iVar3, iVar4, uVar2);
				unk_0x89AFA08324111FDC(iParam0, &iVar6, &uVar9);
				if (iVar6 == *iParam3)
				{
					*iParam1 = iVar3;
					StringCopy(sParam2, unk_0xF5738D29BDFFA98C(iParam0, 0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (unk_0x58478145CAF8429C(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (unk_0x58478145CAF8429C(sParam2))
	{
		*iParam1 = 6;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = unk_0x596043E74FC62B90(0, 1);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			unk_0xA645E869B019EA62(iParam0, 0, iVar4, iVar4);
			unk_0xA410C943ACB84245(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, unk_0xF5738D29BDFFA98C(iParam0, 0), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (unk_0x58478145CAF8429C(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 6;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar4 = 0;
			iVar5 = unk_0x596043E74FC62B90(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				unk_0x287D6840DE3E0D79(iParam0, iVar3, iVar4);
				unk_0x89AFA08324111FDC(iParam0, &uVar9, &iVar7);
				if (iVar7 == *iParam6)
				{
					*iParam4 = iVar3;
					StringCopy(sParam5, unk_0x8FE1535275A65039(iParam0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (unk_0x58478145CAF8429C(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (unk_0x58478145CAF8429C(sParam5))
	{
		*iParam4 = 6;
		IntToString(sParam5, *iParam6, 16);
	}
	unk_0xC2C096B78AB918EB(iParam0, *iParam3, *iParam6);
	unk_0x1225B25A5432A577(iParam0, *iParam9, *uParam10);
}

int func_335(int iParam0)
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("btype3"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("diablous2"):
		case joaat("fcr2"):
		case joaat("italigtb2"):
		case joaat("specter2"):
		case joaat("nero2"):
		case joaat("comet3"):
		case joaat("elegy"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("trailersmall2"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("trailerlarge"):
		case joaat("hauler2"):
		case joaat("phantom3"):
			return 3;
			break;
	}
	return func_329(iParam0);
}

int func_337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_34()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_301();
	if (iVar1 == -1)
	{
		if (!func_339(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_338(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2595364[iVar1 /*76*/].f_73 = Var2;
		Global_2595364[iVar1 /*76*/].f_74 = Var2.f_1;
		if (bVar0 || unk_0x70CDCB3891FCDCDA(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_339(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_34()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2595364[iVar1 /*76*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x923AFE55C7140DE8())
		{
			unk_0x9C51DBB1481E20AE();
		}
	}
	if (bVar0 || unk_0x51EFC5363ABAF281(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_50(uVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_340(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_1", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_2", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_3", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_4", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_5", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_6", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_7", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_8", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_9", 64);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_10", 64);
			break;
		
		case 11:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_11", 64);
			break;
		
		case 12:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_12", 64);
			break;
		
		case 13:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_13", 64);
			break;
		
		case 14:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_14", 64);
			break;
		
		case 15:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_15", 64);
			break;
		
		case 16:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_16", 64);
			break;
		
		case 17:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_17", 64);
			break;
		
		case 18:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_18", 64);
			break;
		
		case 19:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_19", 64);
			break;
		
		case 20:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_20", 64);
			break;
		
		case 21:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_21", 64);
			break;
		
		case 22:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_22", 64);
			break;
		
		case 23:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_23", 64);
			break;
		
		case 24:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_24", 64);
			break;
		
		case 25:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_25", 64);
			break;
		
		case 26:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_26", 64);
			break;
		
		case 27:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_27", 64);
			break;
		
		case 28:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_28", 64);
			break;
		
		case 29:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_29", 64);
			break;
		
		case 30:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_30", 64);
			break;
		
		case 31:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_31", 64);
			break;
		
		case 32:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_32", 64);
			break;
		
		case 33:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_33", 64);
			break;
		
		case 34:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_34", 64);
			break;
		
		case 35:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_35", 64);
			break;
		
		case 36:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_36", 64);
			break;
		
		case 37:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_37", 64);
			break;
		
		case 38:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_38", 64);
			break;
		
		case 39:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_39", 64);
			break;
		
		case 40:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_40", 64);
			break;
		
		case 41:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_41", 64);
			break;
		
		case 42:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_42", 64);
			break;
		
		case 43:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_43", 64);
			break;
		
		case 44:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_44", 64);
			break;
		
		case 45:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_45", 64);
			break;
		
		case 46:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_46", 64);
			break;
		
		case 47:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_47", 64);
			break;
		
		case 48:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_48", 64);
			break;
		
		case 49:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_49", 64);
			break;
		
		case 50:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_50", 64);
			break;
		
		case 51:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_51", 64);
			break;
	}
	if (iParam0 >= 52)
	{
		StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
	}
	if (unk_0x58478145CAF8429C(&cVar0))
	{
		return -1;
	}
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

int func_341(int iParam0, bool bParam1)
{
	int iVar0;
	struct<4> Var1;
	char* sVar2;
	
	iVar0 = func_329(iParam0);
	StringCopy(&Var1, unk_0xEC2E6F44E3202181(iParam0), 16);
	if (bParam1)
	{
		func_342(&sVar2, Var1, iParam0, 4, 1, iVar0, -1, -1, 0);
	}
	else
	{
		func_342(&sVar2, Var1, iParam0, 4, 0, iVar0, -1, -1, 0);
	}
	return unk_0xCAEDBF30E3EA14FC(&sVar2);
}

void func_342(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	switch (unk_0xCAEDBF30E3EA14FC(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_68146)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_68147)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_68148)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, unk_0xEC2E6F44E3202181(iParam4), 16);
				if (unk_0x58478145CAF8429C(&cParam1) || unk_0xCAEDBF30E3EA14FC(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				if (iParam4 == joaat("fcr2"))
				{
					StringCopy(&cParam1, "FCR2", 16);
				}
				else if (iParam4 == joaat("diablous2"))
				{
					StringCopy(&cParam1, "DIABLOUS2", 16);
				}
				else if (iParam4 == joaat("comet3"))
				{
					StringCopy(&cParam1, "COMET3", 16);
				}
				else
				{
					StringCopy(&cParam1, unk_0xEC2E6F44E3202181(iParam4), 16);
					if (unk_0x58478145CAF8429C(&cParam1))
					{
						return;
					}
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			break;
	}
}

int func_343(var uParam0, int iParam1)
{
	struct<3> Var0;
	
	unk_0x0F39DF6675B2333E(uParam0->f_66);
	if (!unk_0xA1FC9D7AEA164881(uParam0->f_66))
	{
		return 0;
	}
	Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(unk_0x8A41C463063AFC8E()), 0) };
	*iParam1 = unk_0xE42A511281C9895B(uParam0->f_66, Var0.x, Var0.f_1, (Var0.f_2 + 200f), 0f, 0, 0, 0);
	func_344(*iParam1, uParam0, 1, 1);
	unk_0xA32D9C84C1A93920(*iParam1, 1);
	unk_0x4C1FCB3943DAF647(*iParam1, 0, 0);
	unk_0x81642E3BC0111BF2(*iParam1, 0, 0);
	return 1;
}

void func_344(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if ((unk_0x591AF4C50B46E014() && unk_0x1979A7D1D0538188(iParam0)) || !unk_0x591AF4C50B46E014())
		{
			if (unk_0x0FFED3E94261A832() != func_39())
			{
				uParam1->f_99 = unk_0x0FFED3E94261A832();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_345(iParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1)
			{
				if (uParam1->f_9[14] == -1)
				{
					unk_0x7A0A4F4F39CC725A(iParam0, 1, uParam1->f_78);
				}
			}
			unk_0x9A030C582B35313F(iParam0, uParam1->f_79);
			unk_0xC3F82DE59E7B7F13(iParam0, uParam1->f_96);
			unk_0xA65636C717973F03(iParam0, uParam1->f_98);
			if (unk_0x5EDEA5B6746DDC9E(iParam0) > 1 && uParam1->f_97 >= 0)
			{
				unk_0xBB1C43B9214FA4F3(iParam0, uParam1->f_97);
			}
			switch (uParam1->f_93)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0xAA4F14DA15DB0B51(uParam1->f_94, 1) && unk_0xAA4F14DA15DB0B51(uParam1->f_94, 2))
					{
						if (unk_0xAA4F14DA15DB0B51(uParam1->f_94, 3))
						{
						}
					}
					else if (unk_0x4D1A8278BAE26361("Player_Vehicle", 3))
					{
						unk_0xE7B1DEED5908F19B(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (unk_0xAA4F14DA15DB0B51(uParam1->f_94, 1) && unk_0xAA4F14DA15DB0B51(uParam1->f_94, 2))
					{
						if (unk_0x4D1A8278BAE26361("Veh_Modded_By_Player", 3))
						{
							unk_0xE7B1DEED5908F19B(iParam0, "Veh_Modded_By_Player", unk_0xA417460779EE0AF0(unk_0x0FFED3E94261A832()));
						}
					}
					else if (unk_0x4D1A8278BAE26361("Veh_Modded_By_Player", 3))
					{
						if (func_73(uParam1->f_80) && unk_0xB8CB95DC79AC0689(&(uParam1->f_80)))
						{
							unk_0xE7B1DEED5908F19B(iParam0, "Veh_Modded_By_Player", unk_0xA417460779EE0AF0(unk_0xC6D53C3DB8415FF9(&(uParam1->f_80))));
						}
						else
						{
							unk_0xE7B1DEED5908F19B(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_345(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (unk_0xCAEDBF30E3EA14FC(&(uParam1->f_1)) != 0)
		{
			unk_0x08DCA8665D0C20FA(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x00007E94C64D5DBF())
		{
			unk_0xA7314A354509BF8F(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, func_348(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), func_348(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, func_348(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), func_348(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, 0);
			if (unk_0x855369FDBD418C02(iParam0, 5) != -1)
			{
				VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, 1);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 13))
		{
			unk_0xA04F6B54BF8EB9D3(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE8D649FA91E8C52B(iParam0);
		}
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 12))
		{
			unk_0xAA12D8CEA5E8A7D4(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x29321171ADCB78EF(iParam0);
		}
		unk_0xC2C096B78AB918EB(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x1225B25A5432A577(iParam0, uParam1->f_7, uParam1->f_8);
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 15) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0))
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xB1546B6A0A948EEF(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x81B2B4427379A53A(iParam0, 0);
		}
		else
		{
			unk_0x81B2B4427379A53A(iParam0, 0);
			unk_0x81B2B4427379A53A(iParam0, uParam1->f_65);
		}
		unk_0x11C8DD1ABA391722(iParam0, !unk_0xAA4F14DA15DB0B51(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD1A53D507962BF1F(iParam0, uParam1->f_70);
		}
		unk_0xFB949D3CEFC55756(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xAF068518EE1A2969(iParam0, 2, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 28));
		unk_0xAF068518EE1A2969(iParam0, 3, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 29));
		unk_0xAF068518EE1A2969(iParam0, 0, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 30));
		unk_0xAF068518EE1A2969(iParam0, 1, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 31));
		unk_0xC0CE5D00E49597D9(iParam0, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 10));
		if (unk_0x7006FCC790371C48(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x8F60D3A8849F5D7E(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(iParam0)))
			{
				if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_347(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_347(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x4294F2710818C474(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x9DF0C51BF038A196(iParam0, 1);
			}
			else
			{
				unk_0x1D58A0C9ED6B3B38(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_346(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x0F93427D94EAEAA2(uParam1->f_66) && !unk_0xC6B6C45D0DE76B0B(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, func_348(iVar2 + 1)))
				{
					if (!unk_0x519A3AD50A2673BF(iParam0, iVar2 + 1))
					{
						unk_0xE4246493481B5222(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x519A3AD50A2673BF(iParam0, iVar2 + 1))
				{
					unk_0xE4246493481B5222(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0xD3B21CE53AA7BE51(iParam0) == joaat("sheava") || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("omnis")) || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("le7b"))
		{
			if (unk_0x855369FDBD418C02(iParam0, 0) == -1)
			{
				unk_0xE4246493481B5222(iParam0, 1, 0);
			}
		}
		if (unk_0xDA6E804770521A18(uParam1->f_66))
		{
			if (!unk_0xAA4F14DA15DB0B51(uParam1->f_77, 23))
			{
				if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 22))
				{
					unk_0x0C2EA5A202FDF476(iParam0, 2);
				}
				else
				{
					unk_0x0C2EA5A202FDF476(iParam0, 3);
				}
			}
			else
			{
				unk_0x0C2EA5A202FDF476(iParam0, 4);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 27))
		{
			unk_0x7009DB24B44E9BF0(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x7009DB24B44E9BF0(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_346(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7FAC45D56235AB39(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x300A7FCC6B376752(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x3EEE06C64BC5D39B(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4F10E5AD7F210123(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x855369FDBD418C02(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x74971716DDE7C473(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x7940803ED711B46E(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x7940803ED711B46E(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x7940803ED711B46E(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_347(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x300A7FCC6B376752(iParam0) > 0)
	{
		unk_0x3EEE06C64BC5D39B(iParam0, 0);
		iVar0 = unk_0x855369FDBD418C02(iParam0, 24);
		iVar1 = unk_0xF9562C9903A5FC6A(iParam0, 24);
		unk_0xF2EEE6F25AF5D5B9(iParam0, uParam1);
		if (unk_0xD3B21CE53AA7BE51(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x74971716DDE7C473(iParam0, 24);
		}
		else
		{
			unk_0x7940803ED711B46E(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_349(var uParam0, var uParam1)
{
	if (!func_350(uParam0, uParam1))
	{
		return 0;
	}
	if (!uParam1->f_79 == uParam0->f_79)
	{
		return 0;
	}
	else if (!uParam1->f_96 == uParam0->f_96)
	{
		return 0;
	}
	else if (!uParam1->f_98 == uParam0->f_98)
	{
		return 0;
	}
	return 1;
}

int func_350(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!uParam1->f_66 == uParam0->f_66)
	{
		return 0;
	}
	else if (!*uParam1 == *uParam0)
	{
		return 0;
	}
	else if (!unk_0x35302CD5A5D37EED(&(uParam1->f_1), &(uParam0->f_1)))
	{
		return 0;
	}
	else if (!uParam1->f_5 == uParam0->f_5)
	{
		return 0;
	}
	else if (!uParam1->f_6 == uParam0->f_6)
	{
		return 0;
	}
	else if (!uParam1->f_7 == uParam0->f_7)
	{
		return 0;
	}
	else if (!uParam1->f_8 == uParam0->f_8)
	{
		return 0;
	}
	else if (!uParam1->f_65 == uParam0->f_65)
	{
		return 0;
	}
	else if (!uParam1->f_69 == uParam0->f_69)
	{
		return 0;
	}
	else if (!uParam1->f_74 == uParam0->f_74)
	{
		return 0;
	}
	else if (!uParam1->f_75 == uParam0->f_75)
	{
		return 0;
	}
	else if (!uParam1->f_76 == uParam0->f_76)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (!uParam1->f_9[iVar0] == uParam0->f_9[iVar0])
		{
			if (iVar0 != 20)
			{
				iVar1 = 0;
				while (iVar1 < 49)
				{
					iVar1++;
				}
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!uParam1->f_59[iVar0] == uParam0->f_59[iVar0])
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				iVar2++;
			}
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_351(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	iVar1 = func_367(1411, iParam0);
	uParam1->f_136 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1412, iParam0);
	uParam1->f_137 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1413, iParam0);
	*uParam1 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (iVar0 < 25)
		{
			iVar1 = (func_367(1414, iParam0) + iVar0);
			uParam1->f_9[iVar0] = func_187(iVar1, iParam2, -1);
			if (!bParam3)
			{
			}
		}
		else
		{
			iVar1 = (func_366(iParam0) + (iVar0 - 25));
			uParam1->f_9[iVar0] = func_187(iVar1, iParam2, -1);
			if (!bParam3)
			{
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = (func_367(1439, iParam0) + iVar0);
		uParam1->f_59[iVar0] = func_187(iVar1, iParam2, -1);
		if (!bParam3)
		{
		}
		iVar0++;
	}
	if (func_51())
	{
		if (func_187(func_367(1439, iParam0), iParam2, -1) == 1)
		{
			if (uParam1->f_59[1] != 1)
			{
				uParam1->f_59[1] = 1;
			}
		}
	}
	iVar1 = func_367(1441, iParam0);
	uParam1->f_62 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1442, iParam0);
	uParam1->f_63 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1443, iParam0);
	uParam1->f_64 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	if (func_51())
	{
		iVar1 = func_365(iParam0);
		iVar2 = func_364(func_187(iVar1, iParam2, -1));
		func_363(iVar2, &uVar3, &uVar4, &uVar5);
		if (iVar2 == 0)
		{
			uParam1->f_9[20] = 0;
		}
		else if (iVar2 == 12)
		{
			uParam1->f_62 = Global_1314009;
			uParam1->f_63 = Global_1314010;
			uParam1->f_64 = Global_1314011;
			uParam1->f_9[20] = 1;
		}
		else
		{
			uParam1->f_62 = uVar3;
			uParam1->f_63 = uVar4;
			uParam1->f_64 = uVar5;
			uParam1->f_9[20] = 1;
		}
	}
	iVar1 = func_367(1444, iParam0);
	uParam1->f_65 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1445, iParam0);
	uParam1->f_67 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1446, iParam0);
	uParam1->f_68 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1447, iParam0);
	uParam1->f_69 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1448, iParam0);
	uParam1->f_70 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1449, iParam0);
	uParam1->f_71 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1450, iParam0);
	uParam1->f_72 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1451, iParam0);
	uParam1->f_73 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1452, iParam0);
	uParam1->f_5 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1453, iParam0);
	uParam1->f_6 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1454, iParam0);
	uParam1->f_7 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(1455, iParam0);
	uParam1->f_8 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(3880, iParam0);
	uParam1->f_74 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(3881, iParam0);
	uParam1->f_75 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_367(3882, iParam0);
	uParam1->f_76 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	if (func_51())
	{
		iVar1 = func_362(iParam0);
		if (func_361(func_187(iVar1, iParam2, -1), &uVar6, &uVar7, &uVar8))
		{
			uParam1->f_74 = uVar6;
			uParam1->f_75 = uVar7;
			uParam1->f_76 = uVar8;
		}
	}
	iVar1 = func_360(iParam0);
	uParam1->f_96 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_359(iParam0);
	uParam1->f_98 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	iVar1 = func_358(iParam0);
	uParam1->f_97 = func_187(iVar1, iParam2, -1);
	if (!bParam3)
	{
	}
	if (!bParam4)
	{
		Global_2097152[func_107() /*10885*/].f_7546.f_1085 = func_153(1624, iParam2, 0);
	}
	uParam1->f_101 = func_153(func_357(1, iParam0), iParam2, 0);
	uParam1->f_102 = func_153(func_357(2, iParam0), iParam2, 0);
	uParam1->f_103 = func_153(func_357(3, iParam0), iParam2, 0);
	uParam1->f_66 = func_153(func_357(4, iParam0), iParam2, 0);
	uParam1->f_77 = func_153(func_357(5, iParam0), iParam2, 0);
	uParam1->f_138 = func_153(func_357(7, iParam0), iParam2, 0);
	if (func_51())
	{
		if (uParam1->f_66 == joaat("coquette"))
		{
			if (uParam1->f_9[10] == 0)
			{
			}
			else if (uParam1->f_9[10] == 1)
			{
				unk_0x507FE690B1271947(&(uParam1->f_77), 1);
				uParam1->f_9[10] = 0;
			}
			else if (uParam1->f_9[10] == 2)
			{
				unk_0x507FE690B1271947(&(uParam1->f_77), 1);
				uParam1->f_9[10] = 1;
			}
		}
		else if (uParam1->f_66 == joaat("pfister811"))
		{
			if (uParam1->f_9[10] == 0)
			{
			}
			else if (uParam1->f_9[10] == 1)
			{
				unk_0x507FE690B1271947(&(uParam1->f_77), 0);
				uParam1->f_9[10] = 0;
			}
			else if (uParam1->f_9[10] == 2)
			{
				unk_0x507FE690B1271947(&(uParam1->f_77), 0);
				uParam1->f_9[10] = 1;
			}
		}
	}
	if (!unk_0x58478145CAF8429C(func_356(func_357(6, iParam0), iParam2, 0)))
	{
		StringCopy(&(uParam1->f_1), func_356(func_357(6, iParam0), iParam2, 0), 16);
	}
	else if (!bParam3)
	{
	}
	if (func_51())
	{
		iVar1 = func_355(iParam0);
		if (func_187(iVar1, iParam2, -1) != 0)
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_101), 2);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_101), 2);
		}
	}
	if (func_51())
	{
		if (iParam0 > 38)
		{
			iVar1 = func_354(iParam0);
			if (func_187(iVar1, iParam2, -1) != 0)
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_94), 9);
			}
			else
			{
				unk_0x507FE690B1271947(&(uParam1->f_94), 9);
			}
		}
		else
		{
			iVar1 = func_354(iParam0);
			if (func_183(iVar1, iParam2, -1))
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_94), 9);
			}
			else
			{
				unk_0x507FE690B1271947(&(uParam1->f_94), 9);
			}
		}
	}
	if (func_51())
	{
		iVar1 = func_353(iParam0);
		iVar9 = func_187(iVar1, iParam2, -1);
		if (func_352(iVar9, 2))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 28);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 28);
		}
		if (func_352(iVar9, 3))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 29);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 29);
		}
		if (func_352(iVar9, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 30);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 30);
		}
		if (func_352(iVar9, 1))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 31);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 31);
		}
	}
	if (!bParam3)
	{
	}
	return 1;
	return 0;
}

int func_352(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0 || iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 4:
			if (iParam1 == 2 || iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 5:
			if ((iParam1 == 2 || iParam1 == 0) || iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 6:
			if ((iParam1 == 3 || iParam1 == 0) || iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 7:
			if (((iParam1 == 2 || iParam1 == 3) || iParam1 == 0) || iParam1 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_353(int iParam0)
{
	if (iParam0 < 10)
	{
		return (4106 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return ((4106 + iParam0) - 3);
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return ((4106 + iParam0) - 6);
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((5925 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7222 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9250 + iParam0) - 65);
	}
	else if (iParam0 < func_234(11))
	{
		return ((14874 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14874 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15358;
	}
	return 0;
}

int func_354(int iParam0)
{
	if (iParam0 < 10)
	{
		return (4212 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return ((4212 + iParam0) - 3);
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return ((4212 + iParam0) - 6);
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 < func_234(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	return 0;
}

int func_355(int iParam0)
{
	if (iParam0 < 10)
	{
		return (4076 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return ((4076 + iParam0) - 3);
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return ((4076 + iParam0) - 6);
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((5915 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7212 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9230 + iParam0) - 65);
	}
	else if (iParam0 < func_234(11))
	{
		return ((14804 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14804 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15357;
	}
	return 0;
}

var func_356(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_154(iParam1)];
	return unk_0x5616A2F349FD0887(uVar0);
}

int func_357(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1625;
				
				case 1:
					return 1632;
				
				case 2:
					return 1639;
				
				case 3:
					return 1646;
				
				case 4:
					return 1653;
				
				case 5:
					return 1660;
				
				case 6:
					return 1667;
				
				case 7:
					return 1674;
				
				case 8:
					return 1681;
				
				case 9:
					return 1688;
				
				case 10:
					return 1695;
				
				case 11:
					return 1701;
				
				case 12:
					return 1707;
				
				case 13:
					return 1713;
				
				case 14:
					return 1790;
				
				case 15:
					return 1797;
				
				case 16:
					return 1804;
				
				case 17:
					return 1811;
				
				case 18:
					return 1818;
				
				case 19:
					return 1825;
				
				case 20:
					return 1832;
				
				case 21:
					return 1839;
				
				case 22:
					return 1846;
				
				case 23:
					return 1853;
				
				case 24:
					return 1859;
				
				case 25:
					return 1865;
				
				case 26:
					return 2160;
				
				case 27:
					return 2167;
				
				case 28:
					return 2174;
				
				case 29:
					return 2181;
				
				case 30:
					return 2188;
				
				case 31:
					return 2195;
				
				case 32:
					return 2202;
				
				case 33:
					return 2209;
				
				case 34:
					return 2216;
				
				case 35:
					return 2223;
				
				case 36:
					return 2230;
				
				case 37:
					return 2236;
				
				case 38:
					return 2242;
				
				case 39:
					return 2813;
				
				case 40:
					return 2820;
				
				case 41:
					return 2827;
				
				case 42:
					return 2834;
				
				case 43:
					return 2841;
				
				case 44:
					return 2848;
				
				case 45:
					return 2855;
				
				case 46:
					return 2862;
				
				case 47:
					return 2869;
				
				case 48:
					return 2876;
				
				case 49:
					return 2883;
				
				case 50:
					return 2889;
				
				case 51:
					return 2895;
				
				case 52:
					return 2937;
				
				case 53:
					return 2944;
				
				case 54:
					return 2951;
				
				case 55:
					return 2958;
				
				case 56:
					return 2965;
				
				case 57:
					return 2972;
				
				case 58:
					return 2979;
				
				case 59:
					return 2986;
				
				case 60:
					return 2993;
				
				case 61:
					return 3000;
				
				case 62:
					return 3007;
				
				case 63:
					return 3013;
				
				case 64:
					return 3019;
				
				case 65:
					return 3220;
				
				case 66:
					return 3228;
				
				case 67:
					return 3236;
				
				case 68:
					return 3244;
				
				case 69:
					return 3252;
				
				case 70:
					return 3260;
				
				case 71:
					return 3268;
				
				case 72:
					return 3276;
				
				case 73:
					return 3284;
				
				case 74:
					return 3292;
				
				case 75:
					return 3300;
				
				case 76:
					return 3308;
				
				case 77:
					return 3316;
				
				case 78:
					return 3324;
				
				case joaat("MPSV_LP0_31"):
					return 3332;
				
				case 80:
					return 3340;
				
				case 81:
					return 3348;
				
				case 82:
					return 3356;
				
				case 83:
					return 3364;
				
				case 84:
					return 3372;
				
				case 85:
					return 3380;
				
				case 86:
					return 3387;
				
				case 87:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4006;
				
				case 89:
					return 4014;
				
				case 90:
					return 4022;
				
				case 91:
					return 4030;
				
				case 92:
					return 4038;
				
				case 93:
					return 4046;
				
				case 94:
					return 4054;
				
				case 95:
					return 4062;
				
				case 96:
					return 4070;
				
				case 97:
					return 4078;
				
				case 98:
					return 4086;
				
				case 99:
					return 4094;
				
				case 100:
					return 4102;
				
				case 101:
					return 4110;
				
				case 102:
					return 4118;
				
				case 103:
					return 4126;
				
				case 104:
					return 4134;
				
				case 105:
					return 4142;
				
				case 106:
					return 4150;
				
				case 107:
					return 4158;
				
				case 108:
					return 4166;
				
				case 109:
					return 4174;
				
				case 110:
					return 4182;
				
				case 111:
					return 4190;
				
				case 112:
					return 4198;
				
				case 113:
					return 4206;
				
				case 114:
					return 4214;
				
				case 115:
					return 4222;
				
				case 116:
					return 4230;
				
				case 117:
					return 4238;
				
				case 118:
					return 4246;
				
				case 119:
					return 4254;
				
				case 120:
					return 4262;
				
				case 121:
					return 4270;
				
				case 122:
					return 4278;
				
				case 123:
					return 4286;
				
				case 124:
					return 4294;
				
				case 125:
					return 4302;
				
				case 126:
					return 4310;
				
				case 127:
					return 4318;
				
				case 128:
					return 4326;
				
				case 129:
					return 4334;
				
				case 130:
					return 4342;
				
				case 131:
					return 4350;
				
				case 132:
					return 4358;
				
				case 133:
					return 4366;
				
				case 134:
					return 4374;
				
				case 135:
					return 4382;
				
				case 136:
					return 4390;
				
				case 137:
					return 4398;
				
				case 138:
					return 4406;
				
				case 139:
					return 4414;
				
				case 140:
					return 4422;
				
				case 141:
					return 4430;
				
				case 142:
					return 4438;
				
				case 143:
					return 4446;
				
				case 144:
					return 4454;
				
				case 145:
					return 4462;
				
				case 146:
					return 4470;
				
				case 147:
					return 4478;
				
				case 148:
					return 4486;
				
				case 149:
					return 4494;
				
				case 150:
					return 4502;
				
				case 151:
					return 4510;
				
				case 152:
					return 4518;
				
				case 153:
					return 4526;
				
				case 154:
					return 4534;
				
				case 155:
					return 4542;
				
				case 156:
					return 4550;
				
				case 157:
					return 4558;
				
				case 158:
					return 5451;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1791;
				
				case 15:
					return 1798;
				
				case 16:
					return 1805;
				
				case 17:
					return 1812;
				
				case 18:
					return 1819;
				
				case 19:
					return 1826;
				
				case 20:
					return 1833;
				
				case 21:
					return 1840;
				
				case 22:
					return 1847;
				
				case 23:
					return 1854;
				
				case 24:
					return 1860;
				
				case 25:
					return 1866;
				
				case 26:
					return 2161;
				
				case 27:
					return 2168;
				
				case 28:
					return 2175;
				
				case 29:
					return 2182;
				
				case 30:
					return 2189;
				
				case 31:
					return 2196;
				
				case 32:
					return 2203;
				
				case 33:
					return 2210;
				
				case 34:
					return 2217;
				
				case 35:
					return 2224;
				
				case 36:
					return 2231;
				
				case 37:
					return 2237;
				
				case 38:
					return 2243;
				
				case 39:
					return 2814;
				
				case 40:
					return 2821;
				
				case 41:
					return 2828;
				
				case 42:
					return 2835;
				
				case 43:
					return 2842;
				
				case 44:
					return 2849;
				
				case 45:
					return 2856;
				
				case 46:
					return 2863;
				
				case 47:
					return 2870;
				
				case 48:
					return 2877;
				
				case 49:
					return 2884;
				
				case 50:
					return 2890;
				
				case 51:
					return 2896;
				
				case 52:
					return 2938;
				
				case 53:
					return 2945;
				
				case 54:
					return 2952;
				
				case 55:
					return 2959;
				
				case 56:
					return 2966;
				
				case 57:
					return 2973;
				
				case 58:
					return 2980;
				
				case 59:
					return 2987;
				
				case 60:
					return 2994;
				
				case 61:
					return 3001;
				
				case 62:
					return 3008;
				
				case 63:
					return 3014;
				
				case 64:
					return 3020;
				
				case 65:
					return 3221;
				
				case 66:
					return 3229;
				
				case 67:
					return 3237;
				
				case 68:
					return 3245;
				
				case 69:
					return 3253;
				
				case 70:
					return 3261;
				
				case 71:
					return 3269;
				
				case 72:
					return 3277;
				
				case 73:
					return 3285;
				
				case 74:
					return 3293;
				
				case 75:
					return 3301;
				
				case 76:
					return 3309;
				
				case 77:
					return 3317;
				
				case 78:
					return 3325;
				
				case joaat("MPSV_LP0_31"):
					return 3333;
				
				case 80:
					return 3341;
				
				case 81:
					return 3349;
				
				case 82:
					return 3357;
				
				case 83:
					return 3365;
				
				case 84:
					return 3373;
				
				case 85:
					return 3381;
				
				case 86:
					return 3388;
				
				case 87:
					return 3395;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4007;
				
				case 89:
					return 4015;
				
				case 90:
					return 4023;
				
				case 91:
					return 4031;
				
				case 92:
					return 4039;
				
				case 93:
					return 4047;
				
				case 94:
					return 4055;
				
				case 95:
					return 4063;
				
				case 96:
					return 4071;
				
				case 97:
					return 4079;
				
				case 98:
					return 4087;
				
				case 99:
					return 4095;
				
				case 100:
					return 4103;
				
				case 101:
					return 4111;
				
				case 102:
					return 4119;
				
				case 103:
					return 4127;
				
				case 104:
					return 4135;
				
				case 105:
					return 4143;
				
				case 106:
					return 4151;
				
				case 107:
					return 4159;
				
				case 108:
					return 4167;
				
				case 109:
					return 4175;
				
				case 110:
					return 4183;
				
				case 111:
					return 4191;
				
				case 112:
					return 4199;
				
				case 113:
					return 4207;
				
				case 114:
					return 4215;
				
				case 115:
					return 4223;
				
				case 116:
					return 4231;
				
				case 117:
					return 4239;
				
				case 118:
					return 4247;
				
				case 119:
					return 4255;
				
				case 120:
					return 4263;
				
				case 121:
					return 4271;
				
				case 122:
					return 4279;
				
				case 123:
					return 4287;
				
				case 124:
					return 4295;
				
				case 125:
					return 4303;
				
				case 126:
					return 4311;
				
				case 127:
					return 4319;
				
				case 128:
					return 4327;
				
				case 129:
					return 4335;
				
				case 130:
					return 4343;
				
				case 131:
					return 4351;
				
				case 132:
					return 4359;
				
				case 133:
					return 4367;
				
				case 134:
					return 4375;
				
				case 135:
					return 4383;
				
				case 136:
					return 4391;
				
				case 137:
					return 4399;
				
				case 138:
					return 4407;
				
				case 139:
					return 4415;
				
				case 140:
					return 4423;
				
				case 141:
					return 4431;
				
				case 142:
					return 4439;
				
				case 143:
					return 4447;
				
				case 144:
					return 4455;
				
				case 145:
					return 4463;
				
				case 146:
					return 4471;
				
				case 147:
					return 4479;
				
				case 148:
					return 4487;
				
				case 149:
					return 4495;
				
				case 150:
					return 4503;
				
				case 151:
					return 4511;
				
				case 152:
					return 4519;
				
				case 153:
					return 4527;
				
				case 154:
					return 4535;
				
				case 155:
					return 4543;
				
				case 156:
					return 4551;
				
				case 157:
					return 4559;
				
				case 158:
					return 5452;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2815;
				
				case 40:
					return 2822;
				
				case 41:
					return 2829;
				
				case 42:
					return 2836;
				
				case 43:
					return 2843;
				
				case 44:
					return 2850;
				
				case 45:
					return 2857;
				
				case 46:
					return 2864;
				
				case 47:
					return 2871;
				
				case 48:
					return 2878;
				
				case 49:
					return 2885;
				
				case 50:
					return 2891;
				
				case 51:
					return 2897;
				
				case 52:
					return 2939;
				
				case 53:
					return 2946;
				
				case 54:
					return 2953;
				
				case 55:
					return 2960;
				
				case 56:
					return 2967;
				
				case 57:
					return 2974;
				
				case 58:
					return 2981;
				
				case 59:
					return 2988;
				
				case 60:
					return 2995;
				
				case 61:
					return 3002;
				
				case 62:
					return 3009;
				
				case 63:
					return 3015;
				
				case 64:
					return 3021;
				
				case 65:
					return 3222;
				
				case 66:
					return 3230;
				
				case 67:
					return 3238;
				
				case 68:
					return 3246;
				
				case 69:
					return 3254;
				
				case 70:
					return 3262;
				
				case 71:
					return 3270;
				
				case 72:
					return 3278;
				
				case 73:
					return 3286;
				
				case 74:
					return 3294;
				
				case 75:
					return 3302;
				
				case 76:
					return 3310;
				
				case 77:
					return 3318;
				
				case 78:
					return 3326;
				
				case joaat("MPSV_LP0_31"):
					return 3334;
				
				case 80:
					return 3342;
				
				case 81:
					return 3350;
				
				case 82:
					return 3358;
				
				case 83:
					return 3366;
				
				case 84:
					return 3374;
				
				case 85:
					return 3382;
				
				case 86:
					return 3389;
				
				case 87:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4008;
				
				case 89:
					return 4016;
				
				case 90:
					return 4024;
				
				case 91:
					return 4032;
				
				case 92:
					return 4040;
				
				case 93:
					return 4048;
				
				case 94:
					return 4056;
				
				case 95:
					return 4064;
				
				case 96:
					return 4072;
				
				case 97:
					return 4080;
				
				case 98:
					return 4088;
				
				case 99:
					return 4096;
				
				case 100:
					return 4104;
				
				case 101:
					return 4112;
				
				case 102:
					return 4120;
				
				case 103:
					return 4128;
				
				case 104:
					return 4136;
				
				case 105:
					return 4144;
				
				case 106:
					return 4152;
				
				case 107:
					return 4160;
				
				case 108:
					return 4168;
				
				case 109:
					return 4176;
				
				case 110:
					return 4184;
				
				case 111:
					return 4192;
				
				case 112:
					return 4200;
				
				case 113:
					return 4208;
				
				case 114:
					return 4216;
				
				case 115:
					return 4224;
				
				case 116:
					return 4232;
				
				case 117:
					return 4240;
				
				case 118:
					return 4248;
				
				case 119:
					return 4256;
				
				case 120:
					return 4264;
				
				case 121:
					return 4272;
				
				case 122:
					return 4280;
				
				case 123:
					return 4288;
				
				case 124:
					return 4296;
				
				case 125:
					return 4304;
				
				case 126:
					return 4312;
				
				case 127:
					return 4320;
				
				case 128:
					return 4328;
				
				case 129:
					return 4336;
				
				case 130:
					return 4344;
				
				case 131:
					return 4352;
				
				case 132:
					return 4360;
				
				case 133:
					return 4368;
				
				case 134:
					return 4376;
				
				case 135:
					return 4384;
				
				case 136:
					return 4392;
				
				case 137:
					return 4400;
				
				case 138:
					return 4408;
				
				case 139:
					return 4416;
				
				case 140:
					return 4424;
				
				case 141:
					return 4432;
				
				case 142:
					return 4440;
				
				case 143:
					return 4448;
				
				case 144:
					return 4456;
				
				case 145:
					return 4464;
				
				case 146:
					return 4472;
				
				case 147:
					return 4480;
				
				case 148:
					return 4488;
				
				case 149:
					return 4496;
				
				case 150:
					return 4504;
				
				case 151:
					return 4512;
				
				case 152:
					return 4520;
				
				case 153:
					return 4528;
				
				case 154:
					return 4536;
				
				case 155:
					return 4544;
				
				case 156:
					return 4552;
				
				case 157:
					return 4560;
				
				case 158:
					return 5453;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2816;
				
				case 40:
					return 2823;
				
				case 41:
					return 2830;
				
				case 42:
					return 2837;
				
				case 43:
					return 2844;
				
				case 44:
					return 2851;
				
				case 45:
					return 2858;
				
				case 46:
					return 2865;
				
				case 47:
					return 2872;
				
				case 48:
					return 2879;
				
				case 49:
					return 2886;
				
				case 50:
					return 2892;
				
				case 51:
					return 2898;
				
				case 52:
					return 2940;
				
				case 53:
					return 2947;
				
				case 54:
					return 2954;
				
				case 55:
					return 2961;
				
				case 56:
					return 2968;
				
				case 57:
					return 2975;
				
				case 58:
					return 2982;
				
				case 59:
					return 2989;
				
				case 60:
					return 2996;
				
				case 61:
					return 3003;
				
				case 62:
					return 3010;
				
				case 63:
					return 3016;
				
				case 64:
					return 3022;
				
				case 65:
					return 3223;
				
				case 66:
					return 3231;
				
				case 67:
					return 3239;
				
				case 68:
					return 3247;
				
				case 69:
					return 3255;
				
				case 70:
					return 3263;
				
				case 71:
					return 3271;
				
				case 72:
					return 3279;
				
				case 73:
					return 3287;
				
				case 74:
					return 3295;
				
				case 75:
					return 3303;
				
				case 76:
					return 3311;
				
				case 77:
					return 3319;
				
				case 78:
					return 3327;
				
				case joaat("MPSV_LP0_31"):
					return 3335;
				
				case 80:
					return 3343;
				
				case 81:
					return 3351;
				
				case 82:
					return 3359;
				
				case 83:
					return 3367;
				
				case 84:
					return 3375;
				
				case 85:
					return 3383;
				
				case 86:
					return 3390;
				
				case 87:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4009;
				
				case 89:
					return 4017;
				
				case 90:
					return 4025;
				
				case 91:
					return 4033;
				
				case 92:
					return 4041;
				
				case 93:
					return 4049;
				
				case 94:
					return 4057;
				
				case 95:
					return 4065;
				
				case 96:
					return 4073;
				
				case 97:
					return 4081;
				
				case 98:
					return 4089;
				
				case 99:
					return 4097;
				
				case 100:
					return 4105;
				
				case 101:
					return 4113;
				
				case 102:
					return 4121;
				
				case 103:
					return 4129;
				
				case 104:
					return 4137;
				
				case 105:
					return 4145;
				
				case 106:
					return 4153;
				
				case 107:
					return 4161;
				
				case 108:
					return 4169;
				
				case 109:
					return 4177;
				
				case 110:
					return 4185;
				
				case 111:
					return 4193;
				
				case 112:
					return 4201;
				
				case 113:
					return 4209;
				
				case 114:
					return 4217;
				
				case 115:
					return 4225;
				
				case 116:
					return 4233;
				
				case 117:
					return 4241;
				
				case 118:
					return 4249;
				
				case 119:
					return 4257;
				
				case 120:
					return 4265;
				
				case 121:
					return 4273;
				
				case 122:
					return 4281;
				
				case 123:
					return 4289;
				
				case 124:
					return 4297;
				
				case 125:
					return 4305;
				
				case 126:
					return 4313;
				
				case 127:
					return 4321;
				
				case 128:
					return 4329;
				
				case 129:
					return 4337;
				
				case 130:
					return 4345;
				
				case 131:
					return 4353;
				
				case 132:
					return 4361;
				
				case 133:
					return 4369;
				
				case 134:
					return 4377;
				
				case 135:
					return 4385;
				
				case 136:
					return 4393;
				
				case 137:
					return 4401;
				
				case 138:
					return 4409;
				
				case 139:
					return 4417;
				
				case 140:
					return 4425;
				
				case 141:
					return 4433;
				
				case 142:
					return 4441;
				
				case 143:
					return 4449;
				
				case 144:
					return 4457;
				
				case 145:
					return 4465;
				
				case 146:
					return 4473;
				
				case 147:
					return 4481;
				
				case 148:
					return 4489;
				
				case 149:
					return 4497;
				
				case 150:
					return 4505;
				
				case 151:
					return 4513;
				
				case 152:
					return 4521;
				
				case 153:
					return 4529;
				
				case 154:
					return 4537;
				
				case 155:
					return 4545;
				
				case 156:
					return 4553;
				
				case 157:
					return 4561;
				
				case 158:
					return 5454;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case joaat("MPSV_LP0_31"):
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4010;
				
				case 89:
					return 4018;
				
				case 90:
					return 4026;
				
				case 91:
					return 4034;
				
				case 92:
					return 4042;
				
				case 93:
					return 4050;
				
				case 94:
					return 4058;
				
				case 95:
					return 4066;
				
				case 96:
					return 4074;
				
				case 97:
					return 4082;
				
				case 98:
					return 4090;
				
				case 99:
					return 4098;
				
				case 100:
					return 4106;
				
				case 101:
					return 4114;
				
				case 102:
					return 4122;
				
				case 103:
					return 4130;
				
				case 104:
					return 4138;
				
				case 105:
					return 4146;
				
				case 106:
					return 4154;
				
				case 107:
					return 4162;
				
				case 108:
					return 4170;
				
				case 109:
					return 4178;
				
				case 110:
					return 4186;
				
				case 111:
					return 4194;
				
				case 112:
					return 4202;
				
				case 113:
					return 4210;
				
				case 114:
					return 4218;
				
				case 115:
					return 4226;
				
				case 116:
					return 4234;
				
				case 117:
					return 4242;
				
				case 118:
					return 4250;
				
				case 119:
					return 4258;
				
				case 120:
					return 4266;
				
				case 121:
					return 4274;
				
				case 122:
					return 4282;
				
				case 123:
					return 4290;
				
				case 124:
					return 4298;
				
				case 125:
					return 4306;
				
				case 126:
					return 4314;
				
				case 127:
					return 4322;
				
				case 128:
					return 4330;
				
				case 129:
					return 4338;
				
				case 130:
					return 4346;
				
				case 131:
					return 4354;
				
				case 132:
					return 4362;
				
				case 133:
					return 4370;
				
				case 134:
					return 4378;
				
				case 135:
					return 4386;
				
				case 136:
					return 4394;
				
				case 137:
					return 4402;
				
				case 138:
					return 4410;
				
				case 139:
					return 4418;
				
				case 140:
					return 4426;
				
				case 141:
					return 4434;
				
				case 142:
					return 4442;
				
				case 143:
					return 4450;
				
				case 144:
					return 4458;
				
				case 145:
					return 4466;
				
				case 146:
					return 4474;
				
				case 147:
					return 4482;
				
				case 148:
					return 4490;
				
				case 149:
					return 4498;
				
				case 150:
					return 4506;
				
				case 151:
					return 4514;
				
				case 152:
					return 4522;
				
				case 153:
					return 4530;
				
				case 154:
					return 4538;
				
				case 155:
					return 4546;
				
				case 156:
					return 4554;
				
				case 157:
					return 4562;
				
				case 158:
					return 5455;
				
				default:
			}
			break;
		
		case 6:
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
				
				case 13:
					return 1719;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case joaat("MPSV_LP0_31"):
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4013;
				
				case 89:
					return 4021;
				
				case 90:
					return 4029;
				
				case 91:
					return 4037;
				
				case 92:
					return 4045;
				
				case 93:
					return 4053;
				
				case 94:
					return 4061;
				
				case 95:
					return 4069;
				
				case 96:
					return 4077;
				
				case 97:
					return 4085;
				
				case 98:
					return 4093;
				
				case 99:
					return 4101;
				
				case 100:
					return 4109;
				
				case 101:
					return 4117;
				
				case 102:
					return 4125;
				
				case 103:
					return 4133;
				
				case 104:
					return 4141;
				
				case 105:
					return 4149;
				
				case 106:
					return 4157;
				
				case 107:
					return 4165;
				
				case 108:
					return 4173;
				
				case 109:
					return 4181;
				
				case 110:
					return 4189;
				
				case 111:
					return 4197;
				
				case 112:
					return 4205;
				
				case 113:
					return 4213;
				
				case 114:
					return 4221;
				
				case 115:
					return 4229;
				
				case 116:
					return 4237;
				
				case 117:
					return 4245;
				
				case 118:
					return 4253;
				
				case 119:
					return 4261;
				
				case 120:
					return 4269;
				
				case 121:
					return 4277;
				
				case 122:
					return 4285;
				
				case 123:
					return 4293;
				
				case 124:
					return 4301;
				
				case 125:
					return 4309;
				
				case 126:
					return 4317;
				
				case 127:
					return 4325;
				
				case 128:
					return 4333;
				
				case 129:
					return 4341;
				
				case 130:
					return 4349;
				
				case 131:
					return 4357;
				
				case 132:
					return 4365;
				
				case 133:
					return 4373;
				
				case 134:
					return 4381;
				
				case 135:
					return 4389;
				
				case 136:
					return 4397;
				
				case 137:
					return 4405;
				
				case 138:
					return 4413;
				
				case 139:
					return 4421;
				
				case 140:
					return 4429;
				
				case 141:
					return 4437;
				
				case 142:
					return 4445;
				
				case 143:
					return 4453;
				
				case 144:
					return 4461;
				
				case 145:
					return 4469;
				
				case 146:
					return 4477;
				
				case 147:
					return 4485;
				
				case 148:
					return 4493;
				
				case 149:
					return 4501;
				
				case 150:
					return 4509;
				
				case 151:
					return 4517;
				
				case 152:
					return 4525;
				
				case 153:
					return 4533;
				
				case 154:
					return 4541;
				
				case 155:
					return 4549;
				
				case 156:
					return 4557;
				
				case 157:
					return 4565;
				
				case 158:
					return 5458;
				
				default:
			}
			break;
		
		case 7:
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
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case joaat("MPSV_LP0_31"):
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4011;
				
				case 89:
					return 4019;
				
				case 90:
					return 4027;
				
				case 91:
					return 4035;
				
				case 92:
					return 4043;
				
				case 93:
					return 4051;
				
				case 94:
					return 4059;
				
				case 95:
					return 4067;
				
				case 96:
					return 4075;
				
				case 97:
					return 4083;
				
				case 98:
					return 4091;
				
				case 99:
					return 4099;
				
				case 100:
					return 4108;
				
				case 101:
					return 4116;
				
				case 102:
					return 4123;
				
				case 103:
					return 4131;
				
				case 104:
					return 4139;
				
				case 105:
					return 4147;
				
				case 106:
					return 4155;
				
				case 107:
					return 4163;
				
				case 108:
					return 4171;
				
				case 109:
					return 4179;
				
				case 110:
					return 4187;
				
				case 111:
					return 4195;
				
				case 112:
					return 4203;
				
				case 113:
					return 4211;
				
				case 114:
					return 4219;
				
				case 115:
					return 4227;
				
				case 116:
					return 4235;
				
				case 117:
					return 4243;
				
				case 118:
					return 4251;
				
				case 119:
					return 4259;
				
				case 120:
					return 4268;
				
				case 121:
					return 4276;
				
				case 122:
					return 4283;
				
				case 123:
					return 4291;
				
				case 124:
					return 4299;
				
				case 125:
					return 4307;
				
				case 126:
					return 4315;
				
				case 127:
					return 4323;
				
				case 128:
					return 4331;
				
				case 129:
					return 4339;
				
				case 130:
					return 4347;
				
				case 131:
					return 4355;
				
				case 132:
					return 4363;
				
				case 133:
					return 4371;
				
				case 134:
					return 4379;
				
				case 135:
					return 4387;
				
				case 136:
					return 4395;
				
				case 137:
					return 4403;
				
				case 138:
					return 4411;
				
				case 139:
					return 4419;
				
				case 140:
					return 4428;
				
				case 141:
					return 4436;
				
				case 142:
					return 4443;
				
				case 143:
					return 4451;
				
				case 144:
					return 4459;
				
				case 145:
					return 4467;
				
				case 146:
					return 4475;
				
				case 147:
					return 4483;
				
				case 148:
					return 4491;
				
				case 149:
					return 4499;
				
				case 150:
					return 4507;
				
				case 151:
					return 4515;
				
				case 152:
					return 4523;
				
				case 153:
					return 4531;
				
				case 154:
					return 4539;
				
				case 155:
					return 4547;
				
				case 156:
					return 4555;
				
				case 157:
					return 4563;
				
				case 158:
					return 5456;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 6019;
				
				case 1:
					return 6020;
				
				case 2:
					return 6021;
				
				case 3:
					return 6022;
				
				case 4:
					return 6023;
				
				case 5:
					return 6024;
				
				case 6:
					return 6025;
				
				case 7:
					return 6026;
				
				case 8:
					return 6027;
				
				case 9:
					return 6028;
				
				case 10:
					return 6029;
				
				case 11:
					return 6030;
				
				case 12:
					return 6031;
				
				case 13:
					return 6032;
				
				case 14:
					return 6033;
				
				case 15:
					return 6034;
				
				case 16:
					return 6035;
				
				case 17:
					return 6036;
				
				case 18:
					return 6037;
				
				case 19:
					return 6038;
				
				case 20:
					return 6039;
				
				case 21:
					return 6040;
				
				case 22:
					return 6041;
				
				case 23:
					return 6042;
				
				case 24:
					return 6043;
				
				case 25:
					return 6044;
				
				case 26:
					return 2249;
				
				case 27:
					return 2250;
				
				case 28:
					return 2251;
				
				case 29:
					return 2252;
				
				case 30:
					return 2253;
				
				case 31:
					return 2254;
				
				case 32:
					return 2255;
				
				case 33:
					return 2256;
				
				case 34:
					return 2257;
				
				case 35:
					return 2258;
				
				case 36:
					return 2259;
				
				case 37:
					return 2260;
				
				case 38:
					return 2261;
				
				case 39:
					return 2901;
				
				case 40:
					return 2902;
				
				case 41:
					return 2903;
				
				case 42:
					return 2904;
				
				case 43:
					return 2905;
				
				case 44:
					return 2906;
				
				case 45:
					return 2907;
				
				case 46:
					return 2908;
				
				case 47:
					return 2909;
				
				case 48:
					return 2910;
				
				case 49:
					return 2911;
				
				case 50:
					return 2912;
				
				case 51:
					return 2913;
				
				case 52:
					return 3025;
				
				case 53:
					return 3026;
				
				case 54:
					return 3027;
				
				case 55:
					return 3028;
				
				case 56:
					return 3029;
				
				case 57:
					return 3030;
				
				case 58:
					return 3031;
				
				case 59:
					return 3032;
				
				case 60:
					return 3033;
				
				case 61:
					return 3034;
				
				case 62:
					return 3035;
				
				case 63:
					return 3036;
				
				case 64:
					return 3037;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case joaat("MPSV_LP0_31"):
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4012;
				
				case 89:
					return 4020;
				
				case 90:
					return 4028;
				
				case 91:
					return 4036;
				
				case 92:
					return 4044;
				
				case 93:
					return 4052;
				
				case 94:
					return 4060;
				
				case 95:
					return 4068;
				
				case 96:
					return 4076;
				
				case 97:
					return 4084;
				
				case 98:
					return 4092;
				
				case 99:
					return 4100;
				
				case 100:
					return 4107;
				
				case 101:
					return 4115;
				
				case 102:
					return 4124;
				
				case 103:
					return 4132;
				
				case 104:
					return 4140;
				
				case 105:
					return 4148;
				
				case 106:
					return 4156;
				
				case 107:
					return 4164;
				
				case 108:
					return 4172;
				
				case 109:
					return 4180;
				
				case 110:
					return 4188;
				
				case 111:
					return 4196;
				
				case 112:
					return 4204;
				
				case 113:
					return 4212;
				
				case 114:
					return 4220;
				
				case 115:
					return 4228;
				
				case 116:
					return 4236;
				
				case 117:
					return 4244;
				
				case 118:
					return 4252;
				
				case 119:
					return 4260;
				
				case 120:
					return 4267;
				
				case 121:
					return 4275;
				
				case 122:
					return 4284;
				
				case 123:
					return 4292;
				
				case 124:
					return 4300;
				
				case 125:
					return 4308;
				
				case 126:
					return 4316;
				
				case 127:
					return 4324;
				
				case 128:
					return 4332;
				
				case 129:
					return 4340;
				
				case 130:
					return 4348;
				
				case 131:
					return 4356;
				
				case 132:
					return 4364;
				
				case 133:
					return 4372;
				
				case 134:
					return 4380;
				
				case 135:
					return 4388;
				
				case 136:
					return 4396;
				
				case 137:
					return 4404;
				
				case 138:
					return 4412;
				
				case 139:
					return 4420;
				
				case 140:
					return 4427;
				
				case 141:
					return 4435;
				
				case 142:
					return 4444;
				
				case 143:
					return 4452;
				
				case 144:
					return 4460;
				
				case 145:
					return 4468;
				
				case 146:
					return 4476;
				
				case 147:
					return 4484;
				
				case 148:
					return 4492;
				
				case 149:
					return 4500;
				
				case 150:
					return 4508;
				
				case 151:
					return 4516;
				
				case 152:
					return 4524;
				
				case 153:
					return 4532;
				
				case 154:
					return 4540;
				
				case 155:
					return 4548;
				
				case 156:
					return 4556;
				
				case 157:
					return 4564;
				
				case 158:
					return 5457;
				
				default:
			}
			break;
	}
	return 1625;
}

int func_358(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 < func_234(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	return 0;
}

int func_359(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 < func_234(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	return 0;
}

int func_360(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 < func_234(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	return 0;
}

bool func_361(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = -1;
	*uParam2 = -1;
	*uParam3 = -1;
	switch (iParam0)
	{
		case 2:
			*uParam1 = 222;
			*uParam2 = 222;
			*uParam3 = 255;
			break;
		
		case 3:
			*uParam1 = 2;
			*uParam2 = 21;
			*uParam3 = 255;
			break;
		
		case 4:
			*uParam1 = 3;
			*uParam2 = 83;
			*uParam3 = 255;
			break;
		
		case 5:
			*uParam1 = 0;
			*uParam2 = 255;
			*uParam3 = 140;
			break;
		
		case 6:
			*uParam1 = 94;
			*uParam2 = 255;
			*uParam3 = 1;
			break;
		
		case 7:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 0;
			break;
		
		case 8:
			*uParam1 = 255;
			*uParam2 = 150;
			*uParam3 = 5;
			break;
		
		case 9:
			*uParam1 = 255;
			*uParam2 = 62;
			*uParam3 = 0;
			break;
		
		case 10:
			*uParam1 = 255;
			*uParam2 = 1;
			*uParam3 = 1;
			break;
		
		case 11:
			*uParam1 = 255;
			*uParam2 = 50;
			*uParam3 = 100;
			break;
		
		case 12:
			*uParam1 = 255;
			*uParam2 = 5;
			*uParam3 = 190;
			break;
		
		case 13:
			*uParam1 = 35;
			*uParam2 = 1;
			*uParam3 = 255;
			break;
		
		case 14:
			*uParam1 = 15;
			*uParam2 = 3;
			*uParam3 = 255;
			break;
	}
	return ((*uParam1 != -1 && *uParam2 != -1) && *uParam3 != -1);
}

int func_362(int iParam0)
{
	if (iParam0 < 10)
	{
		return (4006 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return ((4006 + iParam0) - 3);
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return ((4006 + iParam0) - 6);
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((5895 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7189 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9187 + iParam0) - 65);
	}
	else if (iParam0 < func_234(11))
	{
		return ((14664 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14664 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15355;
	}
	return 0;
}

void func_363(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	*uParam1 = 255;
	*uParam2 = 255;
	*uParam3 = 255;
	switch (iParam0)
	{
		case 1:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
		
		case 11:
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam3 = 0;
			break;
		
		case 6:
			*uParam1 = 255;
			*uParam2 = 127;
			*uParam3 = 0;
			break;
		
		case 4:
			*uParam1 = 252;
			*uParam2 = 238;
			*uParam3 = 0;
			break;
		
		case 3:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 8:
			*uParam1 = 226;
			*uParam2 = 6;
			*uParam3 = 6;
			break;
		
		case 2:
			*uParam1 = 20;
			*uParam2 = 20;
			*uParam3 = 20;
			break;
		
		case 12:
			*uParam1 = Global_1314009;
			*uParam2 = Global_1314010;
			*uParam3 = Global_1314011;
			break;
		
		case 5:
			unk_0xF9C830438D0097FD(21, uParam1, uParam2, uParam3, &uVar0);
			break;
		
		case 7:
			unk_0xF9C830438D0097FD(18, uParam1, uParam2, uParam3, &uVar0);
			break;
		
		case 9:
			unk_0xF9C830438D0097FD(24, uParam1, uParam2, uParam3, &uVar0);
			break;
		
		case 10:
			unk_0xF9C830438D0097FD(107, uParam1, uParam2, uParam3, &uVar0);
			break;
	}
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 255:
			return 0;
			break;
		
		case 1:
			return 12;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 11;
			break;
		
		case 4:
			return 6;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 3;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 2;
			break;
		
		case 9:
			return 5;
			break;
		
		case 10:
			return 7;
			break;
		
		case 11:
			return 9;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_365(int iParam0)
{
	if (iParam0 < 10)
	{
		return (3976 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return ((3976 + iParam0) - 3);
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return ((3976 + iParam0) - 6);
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((5885 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7179 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9167 + iParam0) - 65);
	}
	else if (iParam0 < func_234(11))
	{
		return ((14594 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14594 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15354;
	}
	return 0;
}

int func_366(int iParam0)
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 < func_234(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	return 0;
}

int func_367(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_234(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_234(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_234(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_234(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	return iVar0;
}

void func_368(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (func_187(func_369(iParam0), iParam2, -1) - 1);
}

int func_369(int iParam0)
{
	if (iParam0 <= 38)
	{
		return (4036 + iParam0);
	}
	else if (iParam0 <= 48)
	{
		return ((5905 + iParam0) - 39);
	}
	else if (iParam0 <= 51)
	{
		return ((6025 + iParam0) - 49);
	}
	else if (iParam0 <= 64)
	{
		return ((7199 + iParam0) - 52);
	}
	else if (iParam0 <= 87)
	{
		return ((9207 + iParam0) - 65);
	}
	else if (iParam0 < 158)
	{
		return ((14734 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	return (4036 + iParam0);
}

bool func_370()
{
	return Global_91829.f_310 > 0;
}

void func_371()
{
	if (func_66(unk_0x0FFED3E94261A832(), 1, 1) && func_54(unk_0x0FFED3E94261A832()))
	{
		if (func_212(unk_0x0FFED3E94261A832()) == 225 && !iLocal_49)
		{
			iLocal_49 = 1;
			iLocal_50 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_7;
			iLocal_51 = func_153(5418, -1, 0);
		}
		else if (func_212(unk_0x0FFED3E94261A832()) != 225 && iLocal_49)
		{
			iLocal_49 = 0;
			if (!iLocal_50 || iLocal_51 == func_153(5418, -1, 0))
			{
				iLocal_50 = 0;
				iLocal_51 = 0;
				return;
			}
			iLocal_50 = 0;
			iLocal_51 = 0;
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_11 == 0)
			{
				func_179(15372, 0, -1, 1);
			}
			else if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_11 == 1)
			{
				func_179(15384, 0, -1, 1);
			}
			else
			{
				func_179(15384, 0, -1, 1);
				func_179(15372, 0, -1, 1);
			}
		}
	}
}

void func_372()
{
	if (!func_23(&uLocal_47))
	{
		func_22(&uLocal_47, 0, 0);
	}
	else if (func_21(&uLocal_47, 2000, 0))
	{
		if (Global_2497344.f_823 == 1)
		{
			if ((((((((((Global_1774803.f_9 == 70 || Global_1774803.f_9 == 71) || Global_1774803.f_9 == 72) || Global_1774803.f_9 == 73) || Global_1774803.f_9 == 74) || Global_1774803.f_9 == 75) || Global_1774803.f_9 == 76) || Global_1774803.f_9 == 77) || Global_1774803.f_9 == 78) || Global_1774803.f_9 == 79) || Global_1774803.f_9 == 80)
			{
				Global_2497344.f_821 = 1;
			}
		}
		if (func_373())
		{
			if (iLocal_46 == 0)
			{
				uLocal_45 = Global_262145.f_19537;
				Global_262145.f_19537 = 1;
				iLocal_46 = 1;
			}
		}
		else if (iLocal_46 == 1)
		{
			iLocal_46 = 0;
			Global_262145.f_19537 = uLocal_45;
		}
		func_57(&uLocal_47);
	}
}

int func_373()
{
	struct<3> Var0;
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
	if ((((((((((SYSTEM::VDIST2(Var0, 492.8395f, 3014.057f, 39.9793f) < 400f || SYSTEM::VDIST2(Var0, 849.603f, 3021.697f, 40.3076f) < 400f) || SYSTEM::VDIST2(Var0, 39.5967f, 2930.506f, 54.8034f) < 400f) || SYSTEM::VDIST2(Var0, 1572.078f, 2226.001f, 77.2829f) < 400f) || SYSTEM::VDIST2(Var0, 2110.019f, 3326.12f, 44.3526f) < 400f) || SYSTEM::VDIST2(Var0, 2489.36f, 3162.12f, 48.0015f) < 400f) || SYSTEM::VDIST2(Var0, 1801.273f, 4705.483f, 38.8253f) < 400f) || SYSTEM::VDIST2(Var0, -755.5687f, 5943.835f, 18.9008f) < 400f) || SYSTEM::VDIST2(Var0, -388.8392f, 4340.109f, 55.1741f) < 400f) || SYSTEM::VDIST2(Var0, -3031.356f, 3334.059f, 9.1805f) < 400f) || SYSTEM::VDIST2(Var0, -3157.599f, 1376.695f, 15.866f) < 400f)
	{
		return 1;
	}
	return 0;
}

void func_374()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	if (func_84(unk_0x0FFED3E94261A832()))
	{
		if (Global_1592304 != func_39())
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592304 /*387*/].f_318, 6))
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_1774803, 30))
				{
					iVar0 = func_377(Global_1592304);
					if (iVar0 != -1)
					{
						if (!func_215(iVar0))
						{
							unk_0x5C727A4B63D5C338("AM_MP_SMPL_INTERIOR_EXT");
							if (unk_0x7AE6E004B57B6658("AM_MP_SMPL_INTERIOR_EXT"))
							{
								Var1.x = iVar0;
								Var1.f_2 = iVar0;
								if (!unk_0xAA8734FF6F62B60F("AM_MP_SMPL_INTERIOR_EXT", Var1.f_2, 1, 0))
								{
									SYSTEM::START_NEW_SCRIPT_WITH_ARGS("AM_MP_SMPL_INTERIOR_EXT", &Var1, 3, 1624);
									unk_0x57667D0A25494543("AM_MP_SMPL_INTERIOR_EXT");
									func_375(12, iVar0);
								}
							}
						}
					}
				}
			}
			if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 25) && func_84(Global_1592304))
			{
				if (unk_0x96F884333528B1D3(unk_0x2A5EB8B0FE590B91()) != -25693127)
				{
					if (!func_23(&uLocal_43))
					{
						func_22(&uLocal_43, 0, 0);
					}
					else if (func_21(&uLocal_43, 6000, 0) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						Var2 = { unk_0xD1EE0E9FCD74A37B(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 1) };
						Var3 = { unk_0x5895D6D5B19334A9(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) };
						if (unk_0x3FEF699D13BCC798((Var3.f_2 - Var2.f_2)) > 10f)
						{
							unk_0x593F9D920944A61E(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 1);
						}
						else
						{
							func_57(&uLocal_43);
						}
					}
				}
			}
			else if (func_23(&uLocal_43))
			{
				func_57(&uLocal_43);
			}
		}
	}
	else if (func_79(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (func_70(unk_0x2A5EB8B0FE590B91(), 0) != -1)
			{
				if (unk_0xF4EE9D6C8E60AE22())
				{
					if (unk_0xAA4F14DA15DB0B51(Global_1774803, 17) || unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 7))
					{
						iVar4 = unk_0x8F8E5C33266ED978(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), -1, 0);
						iVar5 = unk_0xB0BB7458627D389F(iVar4);
						if (!func_23(&uLocal_41) && func_79(iVar5))
						{
							func_22(&uLocal_41, 0, 0);
						}
						else if (func_21(&uLocal_41, 6000, 0) && unk_0x96F884333528B1D3(unk_0x2A5EB8B0FE590B91()) == -1116396409)
						{
							Global_1774803.f_11 = 1;
							unk_0x9B0467159FAB9F56(500);
							unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
							unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 7);
							unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_235), 15);
							unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 5);
							unk_0x507FE690B1271947(&Global_1774803, 17);
							func_57(&uLocal_41);
						}
					}
				}
			}
		}
	}
}

void func_375(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_376(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1115[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1119[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1123[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1461[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1465[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1656[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1660[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1664[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1678[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1682[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1469[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1668[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1672[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1474[iVar0]), iVar1);
			return;
			break;
	}
}

void func_376(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_377(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_39())
	{
		return -1;
	}
	iVar0 = func_169(iParam0);
	if (!iVar0 == 0)
	{
		return func_259(iVar0);
	}
	return -1;
}

void func_378()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_40 != Global_967476)
	{
		iVar0 = 0;
		while (iVar0 <= 30)
		{
			if (func_380(Global_967476.f_1[iVar0]) || func_379(Global_967476.f_1[iVar0]))
			{
				iVar1 = iVar0;
				while (iVar1 <= 29)
				{
					Global_967476.f_1[iVar1] = Global_967476.f_1[iVar1 + 1];
					Global_967476.f_33[iVar1 /*88*/] = { Global_967476.f_33[iVar1 + 1 /*88*/] };
					Global_967476.f_2762[iVar1] = Global_967476.f_2762[iVar1 + 1];
					iVar1++;
				}
				Global_967476 = (Global_967476 - 1);
				iVar0 = (iVar0 - 1);
			}
			iVar0++;
		}
		iLocal_40 = Global_967476;
	}
}

int func_379(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5068[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_380(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_381()
{
	int iVar0;
	
	if (func_382())
	{
		if (!iLocal_39)
		{
			iLocal_39 = 1;
		}
	}
	else if (iLocal_39)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x2137828D03306CAF(iVar0))
			{
				if (func_149(iVar0, 1))
				{
					if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iVar0)))
					{
						VEHICLE::_0x1312DDD8385AEE4E(iVar0, 1);
						iLocal_39 = 0;
					}
					else
					{
						iLocal_39 = 0;
					}
				}
			}
		}
	}
}

int func_382()
{
	if (unk_0xAA4F14DA15DB0B51(Global_1774803.f_10, 31))
	{
		return 1;
	}
	return 0;
}

void func_383()
{
	if (Global_2484621.f_15 || func_384())
	{
		if (unk_0x09952BA662A7629B(joaat("gb_ie_delivery_cutscene")) > 0)
		{
			func_112(Global_2484621.f_15);
		}
	}
}

int func_384()
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	if (!unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()) || unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		return 0;
	}
	if (Global_2484621.f_5 != -1)
	{
		Var0 = { func_386(Global_2484621.f_5) };
		if (!func_89(Var0))
		{
			fVar1 = SYSTEM::VDIST2(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Var0);
			fVar2 = 100f;
			if (func_385())
			{
				fVar2 = 400f;
			}
			if (fVar1 < fVar2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_385()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 1);
		if (unk_0x2137828D03306CAF(iVar0) && !unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			iVar1 = unk_0xD3B21CE53AA7BE51(iVar0);
			if (((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3")) || iVar1 == joaat("cargobob4"))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_386(int iParam0)
{
	switch (iParam0)
	{
		case 19:
			return -2597.411f, 1930.107f, 166.3086f;
		
		case 20:
			return -1920.153f, 2048.602f, 139.7356f;
		
		case 21:
			return -68.3441f, 894.488f, 234.5414f;
		
		case 22:
			return 1407.563f, 1118.505f, 113.8377f;
		
		case 23:
			return -1788.983f, 455.5039f, 127.3081f;
		
		case 24:
			return 217.052f, 757.9442f, 203.6637f;
		
		case 25:
			return -1615.404f, 17.2934f, 61.1779f;
		
		case 26:
			return -3102.533f, 716.4913f, 19.297f;
		
		case 0:
			return 880.8726f, -2919.058f, 4.9006f;
		
		case 1:
			return 928.5625f, -2920.391f, 4.9021f;
		
		case 2:
			return 972.3794f, -2920.422f, 4.9021f;
		
		case 3:
			return 1091.055f, -2920.289f, 4.9021f;
		
		case 4:
			return 1148.923f, -2920.104f, 4.9021f;
		
		case 5:
			return 1180.085f, -2970.068f, 4.9021f;
		
		case 6:
			return -1082.496f, -500.419f, 35.432f;
		
		case 7:
			return 165.3373f, 2284.929f, 92.178f;
		
		case 8:
			return -2221.172f, 3484.129f, 29.1695f;
		
		case 9:
			return 2906.938f, 4345.68f, 49.3003f;
		
		case 10:
			return 1579.18f, 6438.313f, 23.7935f;
		
		case 11:
			return 477.29f, -1889.14f, 25.0946f;
		
		case 12:
			return 2534.13f, 2584.07f, 36.9449f;
		
		case 13:
			return 452.3711f, 3573.672f, 32.2386f;
		
		case 14:
			return -222.6743f, 6249.478f, 30.4912f;
		
		case 15:
			return -65.6218f, 81.307f, 70.5533f;
		
		case 16:
			return -28.1873f, -1083.637f, 25.5732f;
		
		case 17:
			return 2510.956f, 4109.705f, 37.5692f;
		
		case 18:
			return -763.496f, -243.3722f, 36.2426f;
		
		case 27:
			return 859.9324f, -1350.51f, 25.0668f;
		
		case 28:
			return 417.7273f, -1618.991f, 28.2898f;
		
		case 29:
			return 452.691f, -1007.568f, 26.12f;
		
		case 30:
			return -1120.411f, -842.7603f, 12.3767f;
		
		case 31:
			return -1326.011f, -1502.188f, 3.3245f;
		
		case 32:
			return -576.611f, -130.9079f, 33.659f;
		
		case 33:
			return 537.8883f, -32.6088f, 69.6464f;
		
		case 34:
			return 1858.998f, 3676.471f, 32.546f;
		
		case 35:
			return -433.4332f, 6042.402f, 30.3373f;
		
		case 36:
			return -633.966f, -1780.525f, 23.0708f;
		
		case 37:
			return 995.0766f, -1858.65f, 29.8898f;
		
		case 38:
			return -70.5644f, -1822.705f, 25.942f;
		
		case 39:
			return 38.8324f, -1284.2f, 28.278f;
		
		case 40:
			return 1211.217f, -1262.491f, 34.2267f;
		
		case 41:
			return 804.3043f, -2225.151f, 28.5425f;
		
		case 42:
			return 1764.46f, -1648.041f, 111.649f;
		
		case 43:
			return 144.143f, -3003.358f, 6.031f;
		
		case 44:
			return -513.2193f, -2200.612f, 5.394f;
		
		case 45:
			return -1153.689f, -2172.111f, 12.2625f;
		
		case 46:
			return -511.2002f, -1736.564f, 18.1967f;
		
		case 47:
			return 2352.237f, 3036.937f, 47.1521f;
		
		case 48:
			return -194.5653f, 6268.56f, 30.4893f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_387()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_82(unk_0x0FFED3E94261A832(), 0, 0))
	{
		iVar0 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15;
		iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_79;
		func_404(iVar0, iVar1);
		if (func_389(iVar0, iVar1))
		{
			func_112(1);
			if (func_216())
			{
				bVar2 = true;
				if (!iLocal_38)
				{
					if (!unk_0xAA4F14DA15DB0B51(Global_2359301, 7))
					{
						unk_0xF6082E2ADA1C795B(&Global_2359301, 7);
						iLocal_38 = 1;
					}
				}
			}
		}
	}
	else
	{
		func_388();
	}
	if (!bVar2)
	{
		if (iLocal_38)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2359301, 7))
			{
				unk_0x507FE690B1271947(&Global_2359301, 7);
				iLocal_38 = 0;
			}
		}
	}
}

void func_388()
{
	unk_0x507FE690B1271947(&uLocal_5, 0);
	iLocal_4 = 0;
}

int func_389(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < func_239(iParam1, -1))
	{
		bVar3 = false;
		if (func_402(iParam0) == 2)
		{
			if (iVar0 >= 2 && iVar0 != 10)
			{
				bVar3 = true;
			}
		}
		else if (func_402(iParam0) == 6)
		{
			if ((iVar0 >= 6 && iVar0 != 10) && iVar0 != 11)
			{
				bVar3 = true;
			}
		}
		iVar1 = (iVar0 + func_242(iParam1));
		if (func_233(iVar1, iParam0, iParam1))
		{
			func_109(iVar1, &iVar2, 1);
			if (iVar2 < 0)
			{
				bVar3 = true;
			}
			if (!bVar3 && iVar2 >= 0)
			{
				if ((iVar0 >= 10 && iVar0 < 13) && func_401(iVar1))
				{
					if (Global_1319066[iVar2 /*140*/].f_66 != 0)
					{
						if (!func_335(Global_1319066[iVar2 /*140*/].f_66))
						{
							bVar3 = true;
						}
					}
				}
			}
			if (!bVar3)
			{
				if (Global_1592303 == unk_0x0FFED3E94261A832())
				{
					if ((Global_1319066[iVar2 /*140*/].f_66 != 0 && func_392(iVar0, iVar2)) && func_390(iParam0, Global_1319066[iVar2 /*140*/].f_66))
					{
						if (((!unk_0xAA4F14DA15DB0B51(Global_1319066[iVar2 /*140*/].f_101, 0) && !unk_0xAA4F14DA15DB0B51(Global_1319066[iVar2 /*140*/].f_101, 1)) && !unk_0xAA4F14DA15DB0B51(Global_1319066[iVar2 /*140*/].f_101, 6)) && Global_2497344.f_860 != iVar2)
						{
							if (unk_0xAA4F14DA15DB0B51(Global_1319066[iVar2 /*140*/].f_101, 12))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_390(int iParam0, int iParam1)
{
	if (func_237(iParam0, -1))
	{
		if (unk_0x4BD9974FDDE2D1EC(iParam1) || unk_0xD043D4D784E459B0(iParam1))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_391(iParam1) || func_103(iParam1))
	{
		return 0;
	}
	return 1;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
{
	if (!Global_1777493)
	{
		return func_393(Global_1319066[iParam1 /*140*/].f_66, 1);
	}
	if (unk_0xAA4F14DA15DB0B51(uLocal_5, 0))
	{
		return unk_0xAA4F14DA15DB0B51(iLocal_4, iParam0);
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_4, iParam0))
	{
		return 1;
	}
	else if (func_393(Global_1319066[iParam1 /*140*/].f_66, 1))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_4, iParam0);
		return 1;
	}
	return 0;
}

int func_393(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x5FABA3586E57ED57(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x591AF4C50B46E014()) || (iParam0 == joaat("buffalo3") && !unk_0x591AF4C50B46E014())) || (iParam0 == joaat("gauntlet2") && !unk_0x591AF4C50B46E014())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x591AF4C50B46E014())) || iParam0 == joaat("blista3"))
	{
		if (!func_400())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x387A7CB2B4F8027A())
		{
			if (unk_0xC36B0959EAB89B8F(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x17983D8EA6EAF9C8(Var1))
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
		if ((((!func_399() && !func_398()) && !func_397()) && !func_396()) && !func_400())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x97FFE0491AC179A2() || unk_0x5018862FF5D9F844()) || unk_0x429A1F8C699BEE23())
		{
		}
		else if (!func_397())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_395(iParam0))
		{
			return 0;
		}
	}
	if (!func_394(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_394(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_51())
	{
		return 1;
	}
	unk_0xAA8D12A27D860B4A(&iVar0, &uVar1);
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
	if (!unk_0x8B420EE50F3B667E(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_395(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2484612)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDA84A1E29323722E();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5515 && !Global_262145.f_11562) && iVar1 < Global_262145.f_11563)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12774 && iVar1 < Global_262145.f_12786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12770 && iVar1 < Global_262145.f_12782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12771 && iVar1 < Global_262145.f_12783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12772 && iVar1 < Global_262145.f_12784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12773 && iVar1 < Global_262145.f_12785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12775 && iVar1 < Global_262145.f_12787)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12776 && iVar1 < Global_262145.f_12779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12777 && iVar1 < Global_262145.f_12780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12778 && iVar1 < Global_262145.f_12781)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15405 && iVar1 < Global_262145.f_15370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15400 && iVar1 < Global_262145.f_15365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15404 && iVar1 < Global_262145.f_15369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15403 && iVar1 < Global_262145.f_15368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15397 && iVar1 < Global_262145.f_15362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15398 && iVar1 < Global_262145.f_15363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15401 && iVar1 < Global_262145.f_15366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15402 && iVar1 < Global_262145.f_15367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15399 && iVar1 < Global_262145.f_15364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_15407 && iVar1 < Global_262145.f_15372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_15408 && iVar1 < Global_262145.f_15373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15396 && iVar1 < Global_262145.f_15361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15395 && iVar1 < Global_262145.f_15360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15394 && iVar1 < Global_262145.f_15359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15406 && iVar1 < Global_262145.f_15371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_15409 && iVar1 < Global_262145.f_15374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_15410 && iVar1 < Global_262145.f_15375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_15411 && iVar1 < Global_262145.f_15376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_15412 && iVar1 < Global_262145.f_15377)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15557 && iVar1 < Global_262145.f_15579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15558 && iVar1 < Global_262145.f_15580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15559 && iVar1 < Global_262145.f_15581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15560 && iVar1 < Global_262145.f_15582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15561 && iVar1 < Global_262145.f_15583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15562 && iVar1 < Global_262145.f_15584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15564 && iVar1 < Global_262145.f_15585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15565 && iVar1 < Global_262145.f_15586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15566 && iVar1 < Global_262145.f_15587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15567 && iVar1 < Global_262145.f_15588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15568 && iVar1 < Global_262145.f_15589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15569 && iVar1 < Global_262145.f_15590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15570 && iVar1 < Global_262145.f_15591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15576 && iVar1 < Global_262145.f_15598)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15573 && iVar1 < Global_262145.f_15594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15574 && iVar1 < Global_262145.f_15595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15575 && iVar1 < Global_262145.f_15596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15563 && iVar1 < Global_262145.f_15597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15577 && iVar1 < Global_262145.f_15599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15571 && iVar1 < Global_262145.f_15592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15572 && iVar1 < Global_262145.f_15593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15578 && iVar1 < Global_262145.f_15600)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17247)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17248)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17208 && iVar1 < Global_262145.f_17249)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17209 && iVar1 < Global_262145.f_17250)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17210 && iVar1 < Global_262145.f_17251)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17211 && iVar1 < Global_262145.f_17252)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17212 && iVar1 < Global_262145.f_17253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17213 && iVar1 < Global_262145.f_17254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17214 && iVar1 < Global_262145.f_17255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17215 && iVar1 < Global_262145.f_17256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17216 && iVar1 < Global_262145.f_17257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17217 && iVar1 < Global_262145.f_17258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17218 && iVar1 < Global_262145.f_17259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17219 && iVar1 < Global_262145.f_17260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17220 && iVar1 < Global_262145.f_17261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17221 && iVar1 < Global_262145.f_17262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17222 && iVar1 < Global_262145.f_17263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17223 && iVar1 < Global_262145.f_17264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17224 && iVar1 < Global_262145.f_17265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17225 && iVar1 < Global_262145.f_17266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17226 && iVar1 < Global_262145.f_17267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17227 && iVar1 < Global_262145.f_17268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17228 && iVar1 < Global_262145.f_17269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17229 && iVar1 < Global_262145.f_17270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17230 && iVar1 < Global_262145.f_17271)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18233 && iVar1 < Global_262145.f_18229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18234 && iVar1 < Global_262145.f_18230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18235 && iVar1 < Global_262145.f_18231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18236 && iVar1 < Global_262145.f_18232)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19073 && iVar1 < Global_262145.f_19081)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19074 && iVar1 < Global_262145.f_19082)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19075 && iVar1 < Global_262145.f_19083)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19076 && iVar1 < Global_262145.f_19084)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19077 && iVar1 < Global_262145.f_19085)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19078 && iVar1 < Global_262145.f_19086)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("apc"))
	{
	}
	else if (iParam0 == joaat("dune3"))
	{
	}
	else if (iParam0 == joaat("halftrack"))
	{
	}
	else if (iParam0 == joaat("oppressor"))
	{
	}
	else if (iParam0 == joaat("tampa3"))
	{
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
	}
	return iVar0;
}

int func_396()
{
	return 0;
}

int func_397()
{
	return 1;
}

int func_398()
{
	return 1;
}

int func_399()
{
	if (unk_0xA438D14FADC1185B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_400()
{
	var uVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("SP_UNLOCK_EXCLUS_CONTENT"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					iVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&iVar0, 0);
					unk_0x01D51AAE02B320BA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
			return 1;
			break;
	}
	return 0;
}

int func_402(int iParam0)
{
	switch (func_403(iParam0))
	{
		case 10:
			return 20;
			break;
		
		case 6:
		case 3:
			return 10;
			break;
		
		case 5:
		case 2:
			return 6;
			break;
		
		case 4:
		case 1:
			return 2;
			break;
	}
	return 0;
}

int func_403(int iParam0)
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
		case joaat("MPSV_LP0_31"):
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

void func_404(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_5, 0))
	{
		iVar1 = 0;
		while (iVar1 < func_239(iParam1, -1))
		{
			iVar2 = (iVar1 + func_242(iParam1));
			if (func_233(iVar2, iParam0, iParam1))
			{
				func_109(iVar2, &iVar3, 1);
				bVar0 = false;
				if (iVar3 < 0)
				{
					bVar0 = true;
				}
				if (!bVar0)
				{
					if (Global_1319066[iVar3 /*140*/].f_66 != 0)
					{
						if (func_392(iVar1, iVar3))
						{
						}
					}
				}
			}
			iVar1++;
		}
		unk_0xF6082E2ADA1C795B(&iLocal_5, 0);
		Global_1777494 = 0;
	}
	else if (Global_1777494)
	{
		func_388();
	}
}

void func_405()
{
	if (!iLocal_37)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 28))
		{
			iLocal_37 = 1;
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 28))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()) && !unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			unk_0x4C1FCB3943DAF647(unk_0x2A5EB8B0FE590B91(), 1, 0);
			unk_0x034062C981B3AC02(unk_0x2A5EB8B0FE590B91());
			iLocal_37 = 0;
		}
	}
}

void func_406()
{
	if (iLocal_36)
	{
		if (func_23(&uLocal_34) && !func_21(&uLocal_34, 5000, 0))
		{
			return;
		}
		else
		{
			func_57(&uLocal_34);
			iLocal_36 = 0;
		}
	}
	if ((((((((((((!Global_2497344.f_820 && !Global_2497344.f_823) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) && !unk_0x1B154DE2D4606530()) && !func_127()) && !func_410()) && !func_409(unk_0x0FFED3E94261A832())) && func_408(unk_0x0FFED3E94261A832()) != 8) && func_408(unk_0x0FFED3E94261A832()) != 9) && !func_407(unk_0x0FFED3E94261A832())) && !Global_69798) && unk_0x0B21CC5276C2CE1B()) && unk_0x62B1B843DC27A464(unk_0xE1155F8509CBD256(unk_0x2A5EB8B0FE590B91(), 11, unk_0x29D988205B5459BD(unk_0x2A5EB8B0FE590B91(), 11), unk_0x0B56C00A178536FE(unk_0x2A5EB8B0FE590B91(), 11)), joaat("JUGG_SUIT"), 0))
	{
		if (!func_23(&uLocal_34))
		{
			func_22(&uLocal_34, 0, 0);
		}
		else if (func_21(&uLocal_34, 2500, 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == joaat("mp_m_freemode_01"))
			{
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 4, 0, 0, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 11, 0, 2, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 8, 0, 0, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 3, 0, 0, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 1, 0, 0, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 6, 1, 0, 0);
			}
			else
			{
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 4, 0, 0, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 11, 4, 14, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 8, 3, 0, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 3, 4, 0, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 1, 0, 0, 0);
				unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 6, 0, 0, 0);
			}
			func_57(&uLocal_34);
		}
	}
	else
	{
		iLocal_36 = 1;
		func_57(&uLocal_34);
		if (!func_23(&uLocal_34))
		{
			func_22(&uLocal_34, 0, 0);
		}
	}
}

bool func_407(int iParam0)
{
	return func_257(iParam0, 10);
}

int func_408(int iParam0)
{
	if (func_213(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_173;
	}
	return -1;
}

bool func_409(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 4;
}

int func_410()
{
	if ((Global_1638223 == 0 && unk_0x1B154DE2D4606530()) && (((((((Global_1638223.f_5 != 0 || Global_1638223.f_112772 > 0) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 15)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 18)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 19)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 29)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 28)) || unk_0xAA4F14DA15DB0B51(Global_1638223.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_411()
{
	if (Global_2434604.f_502.f_10)
	{
		if (func_413(unk_0x0FFED3E94261A832(), -1, 1) || func_413(unk_0x0FFED3E94261A832(), -1, 2))
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1048576.f_469, unk_0x0FFED3E94261A832()))
			{
				func_412();
			}
		}
	}
}

void func_412()
{
	Global_2434604.f_502.f_10 = 0;
	Global_2434604.f_502.f_12 = 0;
	Global_2434604.f_502.f_11 = 0;
	Global_2434604.f_502.f_39 = { 0f, 0f, 0f };
}

int func_413(int iParam0, int iParam1, int iParam2)
{
	if (Global_1592456[iParam0 /*635*/].f_259.f_246 >= 0)
	{
		if (iParam1 != -1 && Global_1592456[iParam0 /*635*/].f_259.f_247 == iParam1)
		{
			return 1;
		}
		else if (iParam2 != -1 && Global_1592456[iParam0 /*635*/].f_259.f_248 == iParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_414()
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(unk_0x0FFED3E94261A832()), 0) };
	if (SYSTEM::VDIST2(Var0, 1103f, -2991f, -39f) < 2500f)
	{
		iLocal_33 = unk_0x0C5DD04D80C0EC83(unk_0x2A5EB8B0FE590B91(), &uLocal_32);
	}
	else
	{
		iLocal_33 = 0;
	}
	if (unk_0x2137828D03306CAF(Global_2497344.f_5721[0]))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_33)
		{
			if (unk_0x2137828D03306CAF(uLocal_32[iVar1]))
			{
				if (func_149(uLocal_32[iVar1], 1))
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		if (iVar2 > 1)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_33)
			{
				if (unk_0x2137828D03306CAF(uLocal_32[iVar1]))
				{
					if (func_149(uLocal_32[iVar1], 1))
					{
						if (!Global_2497344.f_5721[0] == uLocal_32[iVar1])
						{
							unk_0xC620100105DBAFCF(uLocal_32[iVar1]);
							if (unk_0x1979A7D1D0538188(uLocal_32[iVar1]))
							{
								unk_0x216B434C1A609F5B(uLocal_32[iVar1], 0, 1);
								unk_0xA613FDAC42DBBFAD(&(uLocal_32[iVar1]));
							}
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_415()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_153(5368, -1, 0) != 0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 6) && !func_416())
		{
			if (iLocal_29)
			{
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < iLocal_31)
				{
					if (iLocal_30[iVar2] != -1)
					{
						iVar0 = unk_0x7C214DA899F05536(iLocal_30[iVar2]);
						if ((func_66(iVar0, 1, 1) && iVar0 != unk_0x0FFED3E94261A832()) && Global_2422215[iVar0 /*387*/].f_318.f_4 == unk_0x0FFED3E94261A832())
						{
							Global_2422215[iVar0 /*387*/].f_318.f_1 = 81;
							iLocal_30[iVar2] = -1;
						}
					}
					iVar2++;
				}
			}
			if (!iLocal_29)
			{
				if (unk_0x2137828D03306CAF(Global_2497344.f_286[0]) && unk_0x2137828D03306CAF(Global_2497344.f_286[1]))
				{
					iVar1 = 0;
					while (iVar1 < 32)
					{
						iVar0 = unk_0x7C214DA899F05536(iVar1);
						if (((func_66(iVar0, 1, 1) && func_84(iVar0)) && iVar0 != unk_0x0FFED3E94261A832()) && Global_2422215[iVar0 /*387*/].f_318.f_4 == unk_0x0FFED3E94261A832())
						{
							Global_2422215[iVar0 /*387*/].f_318.f_1 = -1;
							iLocal_30[iLocal_31] = iVar0;
							iLocal_31++;
						}
						iVar1++;
					}
					iLocal_29 = 1;
				}
			}
		}
		else
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 6))
			{
			}
			if (!func_416())
			{
			}
			if (iLocal_29)
			{
				iLocal_29 = 0;
			}
		}
	}
}

int func_416()
{
	if ((func_417(2) || func_417(1)) || func_417(36))
	{
		return 1;
	}
	return 0;
}

bool func_417(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_502.f_3, iParam0);
	}
	return unk_0xAA4F14DA15DB0B51(Global_2434604.f_502.f_4, (iParam0 - 32));
}

void func_418()
{
	if (Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_11 != -1 || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 14))
	{
		if (((Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_11 != -1 && func_81(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_11) == 5) && func_419()) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 14))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				if (func_70(unk_0x2A5EB8B0FE590B91(), 0) == -1)
				{
					if (!unk_0xA9A04898798AE9E6(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
					{
						if ((!unk_0xEB018752B4AE9E13(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), joaat("hauler2")) && !unk_0xEB018752B4AE9E13(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), joaat("phantom3"))) && !unk_0xEB018752B4AE9E13(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), joaat("trailerlarge")))
						{
							unk_0x0D0D15C7245AE95A(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 1f);
						}
					}
				}
			}
		}
	}
}

int func_419()
{
	if (func_135())
	{
		return Global_1774803.f_22 == 0;
	}
	return 0;
}

void func_420()
{
	if (unk_0xAA4F14DA15DB0B51(Global_1774803.f_1, 6))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			unk_0x5DE3EC94E90BB96F(unk_0x2A5EB8B0FE590B91());
		}
	}
}

void func_421()
{
	var uVar0;
	
	if ((Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_11 != -1 && func_81(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_11) == 4) && func_95(unk_0x0FFED3E94261A832()))
	{
		if (Global_1592305 == unk_0x0FFED3E94261A832())
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (unk_0xEB018752B4AE9E13(uVar0, joaat("hauler2")) || unk_0xEB018752B4AE9E13(iVar0, joaat("phantom3")))
				{
					if (unk_0x2137828D03306CAF(Global_2434604.f_570[Global_1592305]) && unk_0x9A46207BB68ED2F0(Global_2434604.f_570[Global_1592305], 853.9454f, -3244.956f, -199.6445f, 832.8675f, -3233.419f, -95.69913f, 7.0625f, 0, 1, 0))
					{
						iLocal_26 = 1;
						bLocal_27 = true;
						bLocal_28 = false;
					}
					if (unk_0x2137828D03306CAF(Global_2434604.f_603[Global_1592305]) && unk_0x9A46207BB68ED2F0(Global_2434604.f_603[Global_1592305], 853.9454f, -3244.956f, -199.6445f, 832.8675f, -3233.419f, -95.69913f, 7.0625f, 0, 1, 0))
					{
						iLocal_26 = 1;
						bLocal_27 = false;
						bLocal_28 = true;
					}
				}
			}
		}
	}
	else if (iLocal_26)
	{
		iLocal_26 = 0;
		bLocal_27 = false;
		bLocal_28 = false;
	}
	func_422();
}

void func_422()
{
	var uVar0;
	
	if (iLocal_26 && Global_1592305 != func_39())
	{
		if (bLocal_27)
		{
			uVar0 = Global_2434604.f_570[Global_1592305];
		}
		else if (bLocal_28)
		{
			uVar0 = Global_2434604.f_603[Global_1592305];
		}
		if ((unk_0x2137828D03306CAF(uVar0) && unk_0x9A46207BB68ED2F0(iVar0, 853.9454f, -3244.956f, -199.6445f, 832.8675f, -3233.419f, -95.69913f, 7.0625f, 0, 1, 0)) && func_423())
		{
			if (unk_0x1979A7D1D0538188(iVar0) && unk_0x7FAC45D56235AB39(iVar0, 0))
			{
				unk_0x8E979F037EACE55A(iVar0, 883.0696f, -3240.502f, -99.2772f, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(iVar0, 180f);
			}
			else
			{
				unk_0xC620100105DBAFCF(iVar0);
			}
		}
	}
}

int func_423()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0x7C214DA899F05536(iVar1);
		if (((iVar0 != func_39() && iVar0 != Global_1592305) && func_79(iVar0)) && Global_2422215[iVar0 /*387*/].f_318.f_4 == Global_1592305)
		{
			if (func_66(iVar0, 1, 1))
			{
				Var2 = { unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar0), 1) };
				if (unk_0x9A46207BB68ED2F0(unk_0x1E199569E0295838(iVar0), 883.1238f, -3243.633f, -199.2732f, 883.033f, -3236.131f, -96.53687f, 7.5f, 0, 1, 0) && Var2.f_2 >= -100f)
				{
					return 0;
				}
			}
		}
		iVar1++;
	}
	return 1;
}

void func_424()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[5];
	int iVar4[5];
	float fVar5;
	
	if (((unk_0x5018862FF5D9F844() && Global_91829.f_310 > 0) && Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_1 != -1) && func_81(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_1) == 4)
	{
		if (((unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[0 /*6*/])) == -1729401499 || unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[0 /*6*/])) == 1595963856) || unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[1 /*6*/])) == -1729401499) || unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[1 /*6*/])) == 1595963856)
		{
			iLocal_25 = 0;
		}
		else if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[1 /*6*/])) == 1900662288)
		{
			iLocal_25 = 1;
		}
	}
	else
	{
		iLocal_25 = 0;
	}
	if (iLocal_25 == 1 && Global_91829.f_404 == 85)
	{
		iVar3[0] = -181884655;
		iVar3[1] = 1050398422;
		iVar3[2] = -881288096;
		iVar3[3] = 198235843;
		iVar3[4] = 113104876;
		iVar4[0] = 1400171816;
		iVar4[1] = 1239677797;
		iVar4[2] = 1256457537;
		iVar4[3] = -1718130992;
		iVar4[4] = -129563121;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_91829.f_1049[iVar0] == iVar3[iVar0])
			{
				Global_91829.f_1049[iVar0] = iVar4[iVar0];
			}
			if (Global_91829.f_1049[iVar0] == iVar4[iVar0])
			{
				iVar2 = unk_0xD5334308F842FAD0(Global_91829.f_1049[iVar0], 1496367840, 1);
				if (Global_91829.f_920[iVar0] != iVar2)
				{
					iVar1 = 0;
					while (iVar1 < 5)
					{
						if (Global_17290.f_3918[iVar1] == Global_91829.f_920[iVar0])
						{
							Global_17290.f_5598 = 0;
							Global_17290.f_5599 = 0;
							Global_17290.f_3918[iVar1] = iVar2;
							fVar5 = func_425("NUMBER", Global_17290.f_3918[iVar1]);
							if (fVar5 > Global_17290.f_4938[1])
							{
								Global_17290.f_4938[1] = fVar5;
							}
						}
						iVar1++;
					}
					Global_91829.f_920[iVar0] = iVar2;
				}
			}
			iVar0++;
		}
	}
}

float func_425(char* sParam0, var uParam1)
{
	if (!unk_0x9418F0AE636D9770(sParam0))
	{
		return 0f;
	}
	unk_0x7A83819F1CCA85D1(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
	unk_0xA039A39804D96298(0f, 0.35f);
	unk_0x96F82A2004B83EF7(1);
	unk_0x5502B020FCAE0A34(0);
	unk_0x91583F702E592B88(0f, 1f);
	unk_0x20BFBBDC550BBB20(0);
	unk_0xA1E958C3A9A26FE2(0, 0, 0, 0, 0);
	unk_0x23D87A68AC373FA7(0, 0, 0, 0, 0);
	unk_0x365793C0BF70DE24(sParam0);
	unk_0xEA97619D8B89D387(uParam1);
	return unk_0xA5553CEE401B8534(1);
}

void func_426()
{
	if (!func_419() && (Global_1592305 != func_39() && !unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592305 /*387*/].f_318.f_9, 20)))
	{
		if (func_79(unk_0x0FFED3E94261A832()) && !func_135())
		{
			if (func_427(unk_0x0FFED3E94261A832()))
			{
				if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
				{
					iLocal_24 = 1;
				}
			}
		}
	}
	if (iLocal_24)
	{
		if (unk_0x0B21CC5276C2CE1B() && !unk_0x908783EBF098B817())
		{
			unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
			iLocal_24 = 0;
		}
	}
}

int func_427(int iParam0)
{
	if (iParam0 != func_39())
	{
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 27);
	}
	return 0;
}

void func_428()
{
	var uVar0;
	
	if (func_84(unk_0x0FFED3E94261A832()))
	{
		if (Global_1592304 == unk_0x0FFED3E94261A832())
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && !iLocal_23)
			{
				uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (unk_0xEB018752B4AE9E13(uVar0, joaat("tampa3")))
				{
					func_429(iVar0);
					iLocal_23 = 1;
				}
			}
		}
	}
	else if (iLocal_23)
	{
		iLocal_23 = 0;
	}
}

void func_429(var uParam0)
{
	unk_0x9378FE07E6B38957(uParam0, 0, Global_262145.f_19687);
	unk_0x9378FE07E6B38957(uParam0, 1, Global_262145.f_19688);
}

void func_430()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3[10];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (Global_1573269)
	{
		unk_0x507FE690B1271947(&uLocal_22, iLocal_3);
		uVar0 = Global_2434604.f_636[iLocal_3 /*3*/][1];
		if (unk_0x2137828D03306CAF(uVar0) && !unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			Var1 = { unk_0xD1EE0E9FCD74A37B(iVar0, 1) };
			if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()) && !unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				Var2 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
				if (SYSTEM::VDIST2(Var1, Var2) < 10000f)
				{
					unk_0xF6082E2ADA1C795B(&uLocal_22, iLocal_3);
					Local_21[iLocal_3 /*3*/] = { Var1 };
				}
			}
		}
		iVar4 = 0;
		while (iVar4 < 32)
		{
			if (unk_0xAA4F14DA15DB0B51(uLocal_22, iVar4))
			{
				if (unk_0xB5E2DB0656A654AC(Local_21[iVar4 /*3*/], 15f, 1, 1, &iVar7, 0, 1, -1))
				{
					if (unk_0x2137828D03306CAF(iVar7))
					{
						if (unk_0xD3B21CE53AA7BE51(iVar7) == joaat("g_m_m_chigoon_02"))
						{
							unk_0xC22AC451A2631087(iVar7);
							iVar6 = unk_0xC61D5B1728CFF322(iVar7, &uVar3, -1);
							iVar5 = 0;
							while (iVar5 < iVar6)
							{
								if (uVar3[iVar5] != iVar7)
								{
									if (unk_0x2137828D03306CAF(uVar3[iVar5]))
									{
										if (unk_0xD3B21CE53AA7BE51(uVar3[iVar5]) == joaat("g_m_m_chigoon_02"))
										{
											unk_0xC22AC451A2631087(uVar3[iVar5]);
											if (unk_0xF14CC08EB3D9D296(uVar3[iVar5]) == Global_1574735)
											{
												if (!unk_0xDDB64A4460B8504C(uVar3[iVar5], 1))
												{
													if (unk_0x1979A7D1D0538188(uVar3[iVar5]))
													{
														unk_0x216B434C1A609F5B(uVar3[iVar5], 0, 1);
														unk_0xF128ECFE9D500DA6(unk_0xD1EE0E9FCD74A37B(uVar3[iVar5], 1), 1f, 0);
														unk_0x27BAC9B39BCC6522(&(uVar3[iVar5]));
													}
												}
												else
												{
													unk_0xF128ECFE9D500DA6(unk_0xD1EE0E9FCD74A37B(uVar3[iVar5], 1), 1f, 0);
													unk_0x27BAC9B39BCC6522(&(uVar3[iVar5]));
												}
											}
										}
									}
								}
								iVar5++;
							}
						}
					}
				}
			}
			iVar4++;
		}
	}
}

void func_431()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_19)
	{
		if (Global_2497344.f_290)
		{
			iLocal_19 = 1;
		}
	}
	else if (!Global_2497344.f_290)
	{
		iLocal_20 = 1;
		iLocal_19 = 0;
	}
	if (iLocal_20)
	{
		iVar0 = unk_0x0FFED3E94261A832();
		if (iVar0 > -1)
		{
			if (unk_0x2137828D03306CAF(Global_2434604.f_636[iVar0 /*3*/][0]))
			{
				unk_0xC620100105DBAFCF(Global_2434604.f_636[iVar0 /*3*/][0]);
				if (unk_0x1979A7D1D0538188(Global_2434604.f_636[iVar0 /*3*/][0]))
				{
					iVar1 = 5433;
					iVar2 = func_153(iVar1, -1, 0);
					func_432(&(Global_2434604.f_636[iVar0 /*3*/][0]), iVar2, -1, unk_0x0FFED3E94261A832());
					iLocal_20 = 0;
				}
			}
			else
			{
				iLocal_20 = 0;
			}
		}
		else
		{
			iLocal_20 = 0;
		}
	}
}

void func_432(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA9A04898798AE9E6(*uParam0, 0))
	{
		switch (iParam1)
		{
			case 4:
			case 8:
				unk_0x865C3D324CDBA65B(*uParam0, 0, 0);
				unk_0x650AA1AFE335239C(*uParam0, 1);
				unk_0xB463DE5FD1717E9D(*uParam0, iParam3, 0);
				unk_0x4ACEF9AFD39C05AD(*uParam0, 0);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar0 = unk_0x7C214DA899F05536(iVar1);
					if (func_66(iVar0, 0, 1) && iVar0 != iParam3)
					{
						if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iVar0), *uParam0, 0))
						{
							if (iParam2 == -1)
							{
								func_437(func_438(iVar0), 0, 0f, 0, 0, 1, iParam3);
							}
							else
							{
								func_437(func_438(iVar0), 0, 0f, 0, 0, 0, iParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 1:
				unk_0x865C3D324CDBA65B(*uParam0, 0, 0);
				unk_0x650AA1AFE335239C(*uParam0, 1);
				unk_0xB463DE5FD1717E9D(*uParam0, iParam3, 0);
				unk_0x4ACEF9AFD39C05AD(*uParam0, 0);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar0 = unk_0x7C214DA899F05536(iVar1);
					if (func_66(iVar0, 0, 0) && iVar0 != iParam3)
					{
						if (func_435(iParam3, iVar0))
						{
							unk_0xB463DE5FD1717E9D(*uParam0, iVar0, 0);
						}
						else if (func_66(iVar0, 0, 1))
						{
							if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iVar0), *uParam0, 0))
							{
								func_437(func_438(iVar0), 0, 0f, 0, 0, 1, iParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 2:
				unk_0x865C3D324CDBA65B(*uParam0, 0, 0);
				unk_0x650AA1AFE335239C(*uParam0, 1);
				unk_0xB463DE5FD1717E9D(*uParam0, iParam3, 0);
				unk_0x4ACEF9AFD39C05AD(*uParam0, 0);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar0 = unk_0x7C214DA899F05536(iVar1);
					if (func_66(iVar0, 0, 0) && iVar0 != iParam3)
					{
						if (func_434(iParam3, iVar0))
						{
							unk_0xB463DE5FD1717E9D(*uParam0, iVar0, 0);
						}
						else if (func_66(iVar0, 0, 1))
						{
							if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iVar0), *uParam0, 0))
							{
								func_437(func_438(iVar0), 0, 0f, 0, 0, 1, iParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 3:
				unk_0x865C3D324CDBA65B(*uParam0, 0, 0);
				unk_0x650AA1AFE335239C(*uParam0, 1);
				unk_0xB463DE5FD1717E9D(*uParam0, iParam3, 0);
				unk_0x4ACEF9AFD39C05AD(*uParam0, 0);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar0 = unk_0x7C214DA899F05536(iVar1);
					if (func_66(iVar0, 0, 0) && iVar0 != iParam3)
					{
						if (func_435(iParam3, iVar0) || func_434(iParam3, iVar0))
						{
							unk_0xB463DE5FD1717E9D(*uParam0, iVar0, 0);
						}
						else if (func_66(iVar0, 0, 1))
						{
							if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iVar0), *uParam0, 0))
							{
								func_437(func_438(iVar0), 0, 0f, 0, 0, 1, iParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0:
			case 9:
				unk_0x865C3D324CDBA65B(*uParam0, 0, 0);
				unk_0x650AA1AFE335239C(*uParam0, 0);
				unk_0x4ACEF9AFD39C05AD(*uParam0, 0);
				break;
			
			case 5:
				unk_0x650AA1AFE335239C(*uParam0, 0);
				unk_0x865C3D324CDBA65B(*uParam0, unk_0x1E199569E0295838(iParam3), 0);
				break;
			
			case 6:
				unk_0x865C3D324CDBA65B(*uParam0, 0, 0);
				unk_0x650AA1AFE335239C(*uParam0, 1);
				unk_0xB463DE5FD1717E9D(*uParam0, iParam3, 0);
				unk_0x4ACEF9AFD39C05AD(*uParam0, 0);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar0 = unk_0x7C214DA899F05536(iVar1);
					if (func_66(iVar0, 0, 0) && iVar0 != iParam3)
					{
						if (func_433(iParam3, iVar0))
						{
							unk_0xB463DE5FD1717E9D(*uParam0, iVar0, 0);
						}
						else if (func_66(iVar0, 0, 1))
						{
							if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iVar0), *uParam0, 0))
							{
								func_437(func_438(iVar0), 0, 0f, 0, 0, 1, iParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 7:
				unk_0x865C3D324CDBA65B(*uParam0, 0, 0);
				unk_0x650AA1AFE335239C(*uParam0, 1);
				unk_0xB463DE5FD1717E9D(*uParam0, iParam3, 0);
				unk_0x4ACEF9AFD39C05AD(*uParam0, 0);
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar0 = unk_0x7C214DA899F05536(iVar1);
					if (func_66(iVar0, 0, 0) && iVar0 != iParam3)
					{
						if ((func_435(iParam3, iVar0) || func_434(iParam3, iVar0)) || func_433(iParam3, iVar0))
						{
							unk_0xB463DE5FD1717E9D(*uParam0, iVar0, 0);
						}
						else if (func_66(iVar0, 0, 1))
						{
							if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iVar0), *uParam0, 0))
							{
								func_437(func_438(iVar0), 0, 0f, 0, 0, 1, iParam3);
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
}

int func_433(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_260(iParam0);
	if (!iVar0 == func_39())
	{
		if (iVar0 == func_260(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_434(int iParam0, int iParam1)
{
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_370, iParam1) || unk_0xAA4F14DA15DB0B51(Global_2422215[iParam1 /*387*/].f_370, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_435(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_436(iParam0) };
		Global_2484585 = { func_436(iParam1) };
		if (unk_0x3BE1A7ECC62DB032(&Global_2484572))
		{
			if (unk_0x3BE1A7ECC62DB032(&Global_2484585))
			{
				unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572);
				unk_0x78823C36BAC4791B(&Global_2484537, 35, &Global_2484585);
				if (Global_2484502 == Global_2484537)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

struct<13> func_436(var uParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(uParam0, &Var0, 13);
	return Var0;
}

void func_437(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = -1028011646;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0x5E60CE6A99DCBE0A();
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 9, iParam0);
	}
}

int func_438(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

void func_439()
{
	if (!iLocal_18)
	{
		if (Global_1574132)
		{
			if (func_441() || func_440())
			{
				Global_262145.f_18190 = 1;
			}
			else
			{
				Global_262145.f_18190 = 0;
			}
			iLocal_18 = 1;
		}
	}
	else if (!Global_1574132)
	{
		iLocal_18 = 0;
	}
}

int func_440()
{
	int iVar0;
	var uVar1[4];
	int iVar2;
	
	iVar0 = func_230(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));
	if (iVar0 < Global_262145.f_8899)
	{
		return 0;
	}
	uVar1[0] = func_230(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	uVar1[1] = func_230(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	uVar1[2] = func_230(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	uVar1[3] = func_230(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));
	iVar2 = 0;
	while (iVar2 < (Global_262145.f_8895 - 1))
	{
		if (uVar1[iVar2] < Global_262145.f_8899)
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

int func_441()
{
	int iVar0;
	var uVar1[4];
	int iVar2;
	
	iVar0 = func_230(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));
	if (iVar0 < Global_262145.f_8898)
	{
		return 0;
	}
	uVar1[0] = func_230(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	uVar1[1] = func_230(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	uVar1[2] = func_230(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	uVar1[3] = func_230(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));
	iVar2 = 0;
	while (iVar2 < (Global_262145.f_8894 - 1))
	{
		if (uVar1[iVar2] < Global_262145.f_8898)
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

void func_442()
{
	int iVar0;
	
	if (unk_0x5018862FF5D9F844())
	{
		iVar0 = 0;
		while (iVar0 < Global_1592456)
		{
			unk_0xF6082E2ADA1C795B(&(Global_1592456[iVar0 /*635*/].f_531), 1);
			iVar0++;
		}
	}
}

void func_443()
{
	if (Global_262145.f_8874 != 60)
	{
		Global_262145.f_8874 = 60;
	}
}

void func_444()
{
	var uVar0;
	int iVar1;
	var uVar2[8];
	int iVar3;
	
	if (!unk_0x2137828D03306CAF(iLocal_16))
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), uLocal_17)) > 2000)
		{
			uLocal_17 = unk_0x11ABC381A58DD5AB();
			uVar0 = unk_0x19D9DFABC3C7D219();
			if (func_445(uVar0))
			{
				iLocal_16 = uVar0;
				uLocal_17 = unk_0x11ABC381A58DD5AB();
				return;
			}
			else
			{
				iVar1 = unk_0x0C5DD04D80C0EC83(unk_0x2A5EB8B0FE590B91(), &uVar2);
				iVar3 = 0;
				while (iVar3 < iVar1)
				{
					if (func_445(uVar2[iVar3]))
					{
						iLocal_16 = uVar2[iVar3];
						uLocal_17 = unk_0x11ABC381A58DD5AB();
						return;
					}
					iVar3++;
				}
			}
		}
	}
	else if (func_445(iLocal_16))
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), uLocal_17)) > 2000)
		{
			unk_0x435850511E04A8D1(iLocal_16);
			unk_0x748D711A16EB2994(iLocal_16, 1, 0f, 0f, -0.01f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			iLocal_16 = -1;
		}
	}
	else
	{
		iLocal_16 = -1;
	}
}

int func_445(int iParam0)
{
	if (unk_0x2137828D03306CAF(uParam0) && !unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0xD3B21CE53AA7BE51(iParam0) == joaat("oppressor"))
		{
			if (SYSTEM::VMAG(unk_0x759F285D4B31C388(iParam0)) <= 0.001f)
			{
				if (!unk_0xBBC6067B2AA3BE97(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_446()
{
	int iVar0;
	
	if (func_447())
	{
		if (!iLocal_15)
		{
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (func_379(Global_794643.f_98389[iVar0 /*13*/].f_1) && unk_0xAA4F14DA15DB0B51(Global_794643.f_4[iVar0 /*88*/].f_76, 14))
				{
					unk_0x507FE690B1271947(&(Global_794643.f_4[iVar0 /*88*/].f_76), 14);
				}
				iVar0++;
			}
			iLocal_15 = 1;
		}
	}
}

bool func_447()
{
	return Global_2453064.f_6;
}

void func_448()
{
	int iVar0;
	
	if (unk_0x09952BA662A7629B(joaat("fm_mission_controller")) > 0)
	{
		if (Global_1638223.f_112772 == 2)
		{
			iVar0 = unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), 1785177548);
			if (iVar0 != 7)
			{
				if (!func_23(&uLocal_13))
				{
					func_20(&uLocal_13, 0, 0);
				}
				else if (func_21(&uLocal_13, 10000, 0))
				{
					if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
					{
						unk_0x654FFF4D16298AC5(unk_0x2A5EB8B0FE590B91());
					}
				}
			}
			else if (func_23(&uLocal_13))
			{
				func_57(&uLocal_13);
			}
		}
	}
}

void func_449()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (Global_1316434 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (func_66(iVar1, 1, 1) && !unk_0xE0C37C35D03E857D(iVar1))
			{
				if (iVar1 != unk_0x0FFED3E94261A832())
				{
					if (unk_0x453DB1DBE5D81637(unk_0x1E199569E0295838(iVar1), "ANIM@AMB@TRAILER@TURRET_CONTROLS@", "enter_left", 3) || unk_0x453DB1DBE5D81637(unk_0x1E199569E0295838(iVar1), "ANIM@AMB@TRAILER@TURRET_CONTROLS@", "enter", 3))
					{
						fVar2 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar1), 1), unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(unk_0x0FFED3E94261A832()), 1), 1);
						if (fVar2 < 1.8f)
						{
							Global_2484782[unk_0x0FFED3E94261A832()] = 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_450()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 25))
	{
		unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), 1);
		iLocal_12 = 1;
		if (!func_23(&uLocal_10))
		{
			func_22(&uLocal_10, 0, 0);
		}
		else if (func_21(&uLocal_10, 30000, 0))
		{
			if (unk_0xF4EE9D6C8E60AE22() && unk_0x09952BA662A7629B(unk_0xCAEDBF30E3EA14FC("am_mp_armory_truck")) < 1)
			{
				unk_0x9B0467159FAB9F56(500);
				unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 25);
			}
		}
	}
	else if (iLocal_12)
	{
		unk_0xD022E7E227665647(unk_0x2A5EB8B0FE590B91(), 0);
		iLocal_12 = 0;
		func_57(&uLocal_10);
	}
}

void func_451()
{
	if (func_79(unk_0x0FFED3E94261A832()))
	{
		if (Global_1592305 != func_39())
		{
			if (unk_0x0FFED3E94261A832() != Global_1592305)
			{
				if (iLocal_9 == -1)
				{
					iLocal_9 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_248;
				}
			}
		}
	}
	if (func_454(unk_0x0FFED3E94261A832()) && func_212(unk_0x0FFED3E94261A832()) != 191)
	{
		if (((Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_1 != -1 && func_453(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_1, 4)) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4508, 2)) || Global_2434604.f_502.f_42)
		{
			if (Global_1592305 != func_39())
			{
				if (unk_0x0FFED3E94261A832() != Global_1592305)
				{
					if (iLocal_9 == 1)
					{
						func_452(unk_0x0FFED3E94261A832(), func_72(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_1), 1);
					}
					else if (iLocal_9 == 2)
					{
						func_452(unk_0x0FFED3E94261A832(), 81, 2);
					}
					Global_2434604.f_502.f_10 = 0;
					Global_2434604.f_502.f_12 = 0;
					Global_2434604.f_502.f_11 = 0;
					Global_2434604.f_502.f_42 = 0;
					unk_0x507FE690B1271947(&(Global_2497344.f_4508), 2);
				}
			}
		}
	}
}

void func_452(int iParam0, int iParam1, int iParam2)
{
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_246 = iParam0;
	func_105(35);
	unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_97), 31);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_247 = iParam1;
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_248 = iParam2;
	func_105(35);
}

bool func_453(int iParam0, int iParam1)
{
	return func_81(iParam0) == iParam1;
}

int func_454(int iParam0)
{
	return func_455(func_212(iParam0));
}

int func_455(int iParam0)
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

void func_456()
{
	if (unk_0x1B154DE2D4606530() && unk_0x09952BA662A7629B(joaat("fm_mission_controller")) > 0)
	{
		if (!iLocal_8)
		{
			iLocal_8 = 1;
		}
	}
	else if (iLocal_8)
	{
		iLocal_8 = 0;
		if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_stungun"), 0))
		{
			unk_0x060F3ECCAB5F35C0(unk_0x2A5EB8B0FE590B91(), joaat("weapon_stungun"));
		}
		if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_railgun"), 0))
		{
			unk_0x060F3ECCAB5F35C0(unk_0x2A5EB8B0FE590B91(), joaat("weapon_railgun"));
		}
	}
}

void func_457()
{
	if (func_66(unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (func_84(unk_0x0FFED3E94261A832()) && Global_1592304 != func_39())
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 == 8)
			{
				if ((unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592304 /*387*/].f_318, 12) || unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592304 /*387*/].f_318.f_9, 20)) || func_419())
				{
					if (!func_127())
					{
						if (Global_1774803.f_26 == 0)
						{
							iLocal_7 = 1;
							Global_1774803.f_26 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_7)
		{
			Global_1774803.f_26 = 0;
			iLocal_7 = 0;
		}
	}
}

void func_458()
{
	if (func_66(unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (func_84(unk_0x0FFED3E94261A832()) && Global_1592304 != func_39())
		{
			if (func_127())
			{
				if ((unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592304 /*387*/].f_318, 12) || unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592304 /*387*/].f_318.f_9, 20)) || func_419())
				{
					if (!iLocal_6)
					{
						unk_0x91DDBE4C49E9ADC7(14, 0, 0);
						iLocal_6 = 1;
					}
				}
			}
		}
		else if (iLocal_6)
		{
			iLocal_6 = 0;
		}
	}
}

void func_459()
{
	if (Global_1780642 != -1)
	{
		if (!func_460())
		{
			Global_1780641 = 5;
		}
		else
		{
			Global_1780641 = 8;
		}
	}
	else
	{
		Global_1780641 = 8;
	}
}

int func_460()
{
	if (Global_1780642 >= 41 && Global_1780642 <= 70)
	{
		return 0;
	}
	return 1;
}

void func_461()
{
	if (func_66(unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (func_79(unk_0x0FFED3E94261A832()))
		{
			unk_0x4E6996123FABDB93(0, 351, 1);
			unk_0x4E6996123FABDB93(0, 350, 1);
			unk_0x4E6996123FABDB93(0, 352, 1);
			unk_0x4E6996123FABDB93(0, 101, 1);
		}
	}
}

void func_462()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (unk_0xD3B21CE53AA7BE51(uVar0) == joaat("apc"))
		{
			iVar3 = unk_0xCBA4F77BB9D2F115(iVar0) + 1;
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				uVar1 = func_463(iVar0, (iVar2 - 1), 1, 1);
				if (unk_0x2137828D03306CAF(uVar1))
				{
					if (unk_0xA9A04898798AE9E6(iVar1, 0))
					{
						uVar4 = iVar1;
						unk_0x216B434C1A609F5B(uVar4, 1, 0);
						unk_0xA54DE0E68212CD6B(&uVar4);
					}
				}
				iVar2++;
			}
		}
	}
}

int func_463(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x457D9E478E06E354(uParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8F8E5C33266ED978(iParam0, iParam1, iParam3);
		iVar1 = unk_0xB0BB7458627D389F(iVar0);
		if (iVar1 != func_39())
		{
		}
	}
	if (bParam2)
	{
		if (!unk_0x2137828D03306CAF(iVar0) && !unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			iVar0 = unk_0xB70DB151BB319BBB(iParam0, iParam1);
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0xE897E371352225D5(iVar0, 451360105) == 1 || unk_0xE897E371352225D5(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(unk_0xD1EE0E9FCD74A37B(iParam0, 0), unk_0xD1EE0E9FCD74A37B(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_464(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x13525DFE840376C7(sParam2);
	unk_0x0908F11F0F1C3172(sParam3);
	unk_0xAB829F64BD72CEC8(fParam0, fParam1, 0);
}

void func_465()
{
	if (!bLocal_1)
	{
		if (unk_0x9E5289F5D782437C())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x92BC4A8239BDDACC(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (unk_0x92BC4A8239BDDACC(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x92BC4A8239BDDACC(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x92BC4A8239BDDACC(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x92BC4A8239BDDACC(2, 188))
					{
						bLocal_1 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0x9E5289F5D782437C())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x92BC4A8239BDDACC(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (unk_0x92BC4A8239BDDACC(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x92BC4A8239BDDACC(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x92BC4A8239BDDACC(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x92BC4A8239BDDACC(2, 189))
				{
					bLocal_1 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

bool func_466()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

