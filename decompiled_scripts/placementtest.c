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
	uVar0 = func_13();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uVar0))
		{
			switch (iLocal_45)
			{
				case 0:
					func_11(&uVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&uVar0);
					iLocal_46 = MISC::GET_GAME_TIMER();
					iLocal_45 = 1;
					break;
				
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_46) > 3000)
					{
						func_9(&uVar0);
						iLocal_45 = 2;
					}
					break;
			}
			if (func_1(&uVar0, 0))
			{
			}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0, bool bParam1)
{
	if (!func_8(&(uParam0->f_2)))
	{
		func_6(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_3(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_2(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_3(var uParam0)
{
	if (func_8(uParam0))
	{
		if (func_5(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_4(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_4(bool bParam0)
{
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

bool func_5(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_6(var uParam0)
{
	func_7(uParam0, 0f);
}

void func_7(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_4(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_9(var uParam0)
{
	uParam0->f_1 = 300;
	func_6(&(uParam0->f_2));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(300);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_10(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_11(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	uParam0->f_1 = -1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_12(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

var func_13()
{
	return unk_0x67D02A194A2FC2BD("SPLASH_TEXT");
}

