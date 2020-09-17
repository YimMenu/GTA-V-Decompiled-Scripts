void __EntryFunction__()
{
	GAMEPLAY::START_SAVE_DATA(&Global_2621548, 1, 1);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&Global_2621548, "aFakeSavedInt");
	GAMEPLAY::STOP_SAVE_DATA();
	GAMEPLAY::SET_BIT(&Global_4270623, 0);
	iVar0 = 1;
	iVar1 = GAMEPLAY::_0xA09F896CE912481F(1);
	if (iVar0 != iVar1)
	{
	}
}

