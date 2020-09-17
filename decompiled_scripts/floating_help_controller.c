void __EntryFunction__()
{
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		if (Global_110290[iVar0].f_21 != 0)
		{
			iVar1 = iVar0;
			if (GAMEPLAY::GET_GAME_TIMER() > Global_110290[iVar0].f_21 && Global_110290[iVar0].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					UI::CLEAR_FLOATING_HELP(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_110290[iVar0].f_21 != -1)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_110290[iVar0].f_27, 0))
					{
						Global_110290[iVar0].f_21 = (Global_110290[iVar0].f_21 + SYSTEM::ROUND((GAMEPLAY::GET_FRAME_TIME() * 1000f)));
						if (UI::_0x2432784ACA090DA4(iVar1))
						{
							GAMEPLAY::SET_BIT(&(Global_110290[iVar0].f_27), 0);
						}
					}
				}
				if (Global_110290[iVar0].f_24.f_2 != 9999f)
				{
					if (Global_110290[iVar0].f_23 != 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_110290[iVar0].f_23, 0))
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_110290[iVar0].f_27, 3))
							{
								UI::_0x784BA7E0ECEB4178(iVar1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_110290[iVar0].f_23, Global_110290[iVar0].f_24));
							}
							else
							{
								UI::_0xB094BC1DB4018240(iVar1, Global_110290[iVar0].f_23, Global_110290[iVar0].f_24, Global_110290[iVar0].f_24.f_1);
							}
						}
					}
					else if ((Global_110290[iVar0].f_24 != 0f || Global_110290[iVar0].f_24.f_1 != 0f) || Global_110290[iVar0].f_24.f_2 != 0f)
					{
						UI::_0x784BA7E0ECEB4178(iVar1, Global_110290[iVar0].f_24);
					}
				}
				else
				{
					UI::_0x7679CC1BCEBE3D4C(iVar1, Global_110290[iVar0].f_24, Global_110290[iVar0].f_24.f_1);
				}
			}
			else if ((GAMEPLAY::GET_GAME_TIMER() - Global_110290[iVar0].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
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

int func_3(int iParam0)
{
	iVar0 = iParam0;
	if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_110290[iParam0]), "") && !GAMEPLAY::IS_STRING_NULL(&(Global_110290[iParam0])))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_110290[iParam0].f_27, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_110290[iParam0].f_27, 2))
			{
				return func_7(iVar0, &(Global_110290[iParam0]), &(Global_110290[iParam0].f_4), Global_110290[iParam0].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_110290[iParam0]), &(Global_110290[iParam0].f_4));
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_110290[iParam0].f_27, 2))
		{
			return func_5(iVar0, &(Global_110290[iParam0]), Global_110290[iParam0].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_110290[iParam0]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam1);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

