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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
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
	var uLocal_77 = -1;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
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
	struct<1652> Local_122 = { 0, 4, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	struct<8> Local_1782[32];
	struct<1583> Local_2039 = { 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, -1, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	struct<26> Local_3626 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_3652 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_3673 = 0;
	int iLocal_3674 = 0;
	int iLocal_3675[4] = { 0, 0, 0, 0 };
	int iLocal_3680 = 0;
	bool bLocal_3681 = 0;
	int iLocal_3682 = 0;
	int iLocal_3683 = 0;
	int iLocal_3684 = 0;
	int iLocal_3685 = 0;
	int iLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	bool bLocal_3689 = 0;
	bool bLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	int iLocal_3693 = 0;
	int iLocal_3694 = 0;
	int iLocal_3695 = 0;
	int iLocal_3696 = 0;
	int iLocal_3697 = 0;
	int iLocal_3698 = 0;
	bool bLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	int iLocal_3702 = 0;
	int iLocal_3703 = 0;
	int iLocal_3704 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_3680 = 1;
	func_443();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_432())
		{
			func_428();
		}
		if (Global_1696906)
		{
			Global_1696906 = 0;
			func_428();
		}
		if (Global_2405074.f_2674 && Global_2409291 != 0)
		{
			if (Global_2409291 != 6)
			{
				func_428();
			}
		}
		if (func_427() && CAM::IS_SCREEN_FADED_OUT())
		{
			func_428();
		}
		if ((!func_426(PLAYER::PLAYER_ID()) && !func_425(PLAYER::PLAYER_ID())) && !func_424(PLAYER::PLAYER_ID()))
		{
			func_428();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !MISC::IS_BIT_SET(Global_4456448.f_34, 7))
		{
			func_428();
		}
		if (func_425(PLAYER::PLAYER_ID()) && func_420() != func_419())
		{
			if (MISC::IS_BIT_SET(Global_2426097[func_420() /*443*/].f_314.f_4, 1) && CAM::IS_SCREEN_FADED_OUT())
			{
				func_428();
			}
		}
		if (func_425(PLAYER::PLAYER_ID()) && func_420() != func_419())
		{
			if (Global_2426097[func_420() /*443*/].f_442 != Global_1696916 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_428();
			}
		}
		if (func_425(PLAYER::PLAYER_ID()) && func_417() != 0)
		{
			func_428();
		}
		iVar0 = 0;
		while (iVar0 < Local_2039.f_257)
		{
			if (!func_416())
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_122.f_1595[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iVar0]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_122.f_1595[iVar0], true);
				}
			}
			iVar0++;
		}
		func_86();
		if (func_416())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_85();
	func_82();
	func_75();
	iVar0 = 0;
	while (iVar0 < Local_2039.f_257)
	{
		switch (Local_122.f_1520[iVar0])
		{
			case 0:
				if (Global_2516633 != iVar0 && (Global_2516633 != -1 || func_425(PLAYER::PLAYER_ID())))
				{
					Local_122.f_1560[iVar0] = 1;
					func_74(&(Local_122.f_1[iVar0 /*211*/]));
					func_73(1, iVar0);
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0])))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iVar0]))
					{
						Local_122.f_1590[iVar0] = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_122.f_1580[iVar0]);
						if (Local_122.f_1590[iVar0] != -1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0]), func_72(), func_71(iVar0), 3))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0]), 2116425869))
								{
									Local_122.f_1580[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0]), Local_122.f_1580[iVar0], func_72(), func_68(iVar0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iVar0]);
								}
							}
							else if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0]), 2116425869))
							{
								Local_122.f_1580[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0]), Local_122.f_1580[iVar0], func_72(), func_71(iVar0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iVar0]);
							}
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_122.f_1600[(iVar0 * 4 + iVar1)] != func_419() && Global_2516633 != iVar0) && (Global_2516633 != -1 || func_425(PLAYER::PLAYER_ID())))
					{
						func_73(2, iVar0);
						Local_122.f_1585[iVar0] = iVar1;
						func_67(&(Local_122.f_1651[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0])))
				{
					if (func_66(&(Local_122.f_1651[iVar0 /*2*/])) && func_65(&(Local_122.f_1651[iVar0 /*2*/]), 2000, 0))
					{
						Local_122.f_1580[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iVar0]), Local_122.f_1580[iVar0], func_72(), func_64(iVar0, Local_122.f_1585[iVar0]), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iVar0]);
						func_63(&(Local_122.f_1651[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<9> Var23;
	
	bVar5 = false;
	if (Local_122.f_1515[iParam0] > 4 && Local_122.f_1515[iParam0] < 9)
	{
		bVar5 = true;
	}
	if ((!func_62(iParam0, bVar5) || Global_2516633 == iParam0) || Local_122.f_1530[iParam0])
	{
		Local_122.f_1530[iParam0] = 1;
		func_61(iParam0);
		return;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_122.f_1595[iParam0]))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
		{
			Local_122.f_1540[iParam0] = 0;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]);
		}
		else if (!Local_122.f_1540[iParam0])
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_122.f_1595[iParam0], false);
			Local_122.f_1540[iParam0] = 1;
		}
	}
	Local_122.f_1590[iParam0] = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_122.f_1580[iParam0]);
	switch (Local_122.f_1515[iParam0])
	{
		case 0:
			func_60(1, iParam0);
			break;
		
		case 1:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_122.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (Local_1782[iVar2 /*8*/] != 0 || Local_1782[iVar2 /*8*/].f_5 != 0)
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				func_59(&(Local_122.f_1[iParam0 /*211*/]));
				func_60(2, iParam0);
			}
			break;
		
		case 2:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_122.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (!MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/].f_5, 0))
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
				{
					Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_57(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
					func_47(4, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1);
				}
				func_60(3, iParam0);
			}
			break;
		
		case 3:
			bVar1 = true;
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
			{
				if ((Local_122.f_1590[iParam0] != -1 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_57(iParam0), 3)) && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869)))
				{
					Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
				{
					if (Local_122.f_1590[iParam0] != -1)
					{
						if (Local_122.f_1570[iParam0] == 1)
						{
							if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
							}
						}
						else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 3), 3))
						{
							Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_45(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_68(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
							}
						}
						else if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
						{
							Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
						}
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]);
				}
			}
			if (!func_66(&(Local_122.f_1642[iParam0 /*2*/])))
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_122.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15))
						{
							func_67(&(Local_122.f_1642[iParam0 /*2*/]), 0, 0);
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_122.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (!MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15) && !MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 16))
						{
							bVar1 = false;
						}
						else
						{
							iVar6++;
						}
					}
					iVar3++;
				}
				if (iVar6 > 0)
				{
					if (bVar1)
					{
						func_63(&(Local_122.f_1642[iParam0 /*2*/]));
						func_47(16, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1);
						func_60(4, iParam0);
					}
					else if (func_65(&(Local_122.f_1642[iParam0 /*2*/]), 15000, 0))
					{
						if (!func_44(iParam0, 22))
						{
							if (func_47(14, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
							{
								func_43(iParam0, 22);
							}
						}
					}
				}
				else
				{
					func_63(&(Local_122.f_1642[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_36(iParam0);
			break;
		
		case 5:
			if (func_35(Local_122.f_846[iParam0 /*13*/][1]) == 10 || func_35(Local_122.f_846[iParam0 /*13*/][1]) == 11)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
				{
					if (func_34(&(Local_122.f_846[iParam0 /*13*/]), 0) == 21)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_33(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
							}
							else if (((Local_122.f_1590[iParam0] == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
							{
								MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
								func_29(iParam0);
								func_60(9, iParam0);
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
							{
								Local_122.f_1525[iParam0] = 1;
							}
						}
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
					{
						if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
						{
							Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_28(iParam0), 4f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
							MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
						}
						else if (((Local_122.f_1590[iParam0] == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
						{
							MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
							func_63(&(Local_122.f_1633[iParam0 /*2*/]));
							Local_122.f_1535[iParam0] = 0;
							func_60(6, iParam0);
						}
					}
				}
				else
				{
					func_63(&(Local_122.f_1633[iParam0 /*2*/]));
					Local_122.f_1535[iParam0] = 0;
					func_60(6, iParam0);
				}
			}
			else
			{
				func_63(&(Local_122.f_1633[iParam0 /*2*/]));
				Local_122.f_1535[iParam0] = 0;
				func_60(6, iParam0);
			}
			break;
		
		case 6:
			iVar3 = (iParam0 * 4 + Local_122.f_1575[iParam0]);
			iVar4 = Local_122.f_1600[iVar3];
			if (Local_122.f_1575[iParam0] < 4)
			{
				if ((iVar4 != func_419() && MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 15)) && !((!MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 14) && func_27(&(Local_122.f_899[iVar4 /*9*/])) == 21) && Local_122.f_899[iVar4 /*9*/].f_8 == 2))
				{
					if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
					{
						if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], (0 + Local_122.f_1575[iParam0] * 3)))
						{
							if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_26(iParam0, Local_122.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_122.f_1555[iParam0]), (0 + Local_122.f_1575[iParam0] * 3));
							}
						}
						else if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], (1 + Local_122.f_1575[iParam0] * 3)))
						{
							if ((Local_122.f_1590[iParam0] != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_26(iParam0, Local_122.f_1575[iParam0], iVar4), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_122.f_1555[iParam0]), (1 + Local_122.f_1575[iParam0] * 3));
							}
						}
						if (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 14) && (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 13) || MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 11)))
						{
							if (((((((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								func_23(iParam0);
								MISC::SET_BIT(&(Local_122.f_1555[iParam0]), (1 + Local_122.f_1575[iParam0] * 3));
							}
						}
						if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_25(iParam0, 0, iVar4, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_25(iParam0, 1, iVar4, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_25(iParam0, 2, iVar4, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_25(iParam0, 3, iVar4, 0), 3))
						{
							if (!func_66(&(Local_122.f_1633[iParam0 /*2*/])))
							{
								func_67(&(Local_122.f_1633[iParam0 /*2*/]), 0, 0);
							}
							else if (func_65(&(Local_122.f_1633[iParam0 /*2*/]), 20000, 0))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
							}
						}
						else
						{
							func_63(&(Local_122.f_1633[iParam0 /*2*/]));
						}
					}
					if (MISC::IS_BIT_SET(Local_122.f_1555[iParam0], (1 + Local_122.f_1575[iParam0] * 3)))
					{
						if ((MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 14) && !MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 13)) && !(MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 11) && Local_122.f_1188[iVar4 /*9*/].f_8 > 2))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_1565[iParam0], iVar4))
							{
								if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
										{
											Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_22(iParam0, Local_122.f_1575[iParam0]), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
											Local_122.f_1535[iParam0] = 0;
											func_15(func_21(iParam0, 0, Local_122.f_1575[iParam0], 1), Local_122.f_899[iVar4 /*9*/][1], 0, 0);
											MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
								{
									fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
										{
											if (Local_122.f_899[iVar4 /*9*/].f_8 == 1)
											{
												Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
												Local_122.f_1535[iParam0] = 1;
												func_15(func_21(iParam0, Local_122.f_899[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else if (Local_122.f_1188[iVar4 /*9*/].f_8 == 1)
											{
												Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 1), 4f, -4f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_122.f_1188[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 1), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else
											{
												Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
												MISC::SET_BIT(&(Local_122.f_1565[iParam0]), iVar4);
												MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
												MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
												if (Local_122.f_899[iVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
													Local_122.f_899[iVar4 /*9*/][1] = uVar0;
													Local_122.f_899[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
												}
												if (Local_122.f_1188[iVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
													Local_122.f_1188[iVar4 /*9*/][1] = uVar0;
													Local_122.f_1188[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
												}
											}
										}
									}
									else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 1), 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
										{
											Local_122.f_1535[iParam0] = 1;
											if (Local_122.f_1188[iVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
												Local_122.f_1188[iVar4 /*9*/][1] = uVar0;
												Local_122.f_1188[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 0), 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
										{
											if (Local_122.f_899[iVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
												Local_122.f_899[iVar4 /*9*/][1] = uVar0;
												Local_122.f_899[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_22(iParam0, Local_122.f_1575[iParam0]), 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1345695206))
										{
											if (Local_122.f_899[iVar4 /*9*/].f_8 == 2)
											{
												Local_122 = Local_122.f_899[iVar4 /*9*/][1];
												Local_122.f_899[iVar4 /*9*/][1] = 0;
												Local_122.f_899[iVar4 /*9*/].f_8 = 1;
											}
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
										{
											if (Local_122.f_1188[iVar4 /*9*/].f_8 == 0)
											{
												Local_122.f_1188[iVar4 /*9*/][0] = Local_122;
												Local_122.f_1188[iVar4 /*9*/].f_8 = 1;
												Local_122.f_899[iVar4 /*9*/][1] = 0;
												Local_122.f_899[iVar4 /*9*/].f_8 = 1;
												MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
											}
											Local_122.f_1535[iParam0] = 1;
										}
									}
								}
							}
							else if (!MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 11))
							{
								if ((((func_27(&(Local_122.f_1188[iVar4 /*9*/])) < 21 && !MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 13)) && Local_122.f_1188[iVar4 /*9*/].f_8 <= 6) && Local_122.f_1188[iVar4 /*9*/].f_8 > 0) || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
								{
									if ((((((MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 5) && Local_122.f_1188[iVar4 /*9*/].f_8 == 2) || (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 6) && Local_122.f_1188[iVar4 /*9*/].f_8 == 3)) || (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 7) && Local_122.f_1188[iVar4 /*9*/].f_8 == 4)) || (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 8) && Local_122.f_1188[iVar4 /*9*/].f_8 == 5)) || (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 9) && Local_122.f_1188[iVar4 /*9*/].f_8 == 6)) || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
									{
										if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
										{
											if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
											{
												if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
												{
													Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
													NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1000f, 0);
													NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
													func_15(func_21(iParam0, Local_122.f_1188[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 1), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
													MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
												}
											}
										}
										else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
										{
											fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]);
											if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
											{
												if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
												{
													Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
													NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
													NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
													MISC::SET_BIT(&(Local_122.f_1565[iParam0]), iVar4);
													if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
													{
														func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
														Local_122.f_1188[iVar4 /*9*/][Local_122.f_1188[iVar4 /*9*/].f_8] = uVar0;
														Local_122.f_1188[iVar4 /*9*/].f_8++;
														func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
														MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
													}
													MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
													MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
												}
											}
											else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
											{
												if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
												{
													func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
													Local_122.f_1188[iVar4 /*9*/][Local_122.f_1188[iVar4 /*9*/].f_8] = uVar0;
													Local_122.f_1188[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
													MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
												}
											}
										}
									}
									else if (!func_44(iParam0, 20))
									{
										if (func_47(2, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 20);
										}
									}
									else if (func_65(&(Local_122.f_1642[Local_1782[iVar4 /*8*/].f_4 /*2*/]), 15000, 0))
									{
										if (!func_44(iParam0, 21))
										{
											if (func_47(15, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
											{
												func_43(iParam0, 21);
											}
										}
									}
								}
							}
							else if (Local_122.f_1188[iVar4 /*9*/].f_8 == 2 || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
							{
								if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
										{
											Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
											func_15(func_21(iParam0, Local_122.f_1188[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 1), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 1);
											MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
								{
									fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
										{
											Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
											MISC::SET_BIT(&(Local_122.f_1565[iParam0]), iVar4);
											if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
											{
												func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
												Local_122.f_1188[iVar4 /*9*/][Local_122.f_1188[iVar4 /*9*/].f_8] = uVar0;
												Local_122.f_1188[iVar4 /*9*/].f_8++;
												MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
												func_23(iParam0);
												func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
											}
											MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
											MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
										}
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
									{
										if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
										{
											func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
											Local_122.f_1188[iVar4 /*9*/][Local_122.f_1188[iVar4 /*9*/].f_8] = uVar0;
											Local_122.f_1188[iVar4 /*9*/].f_8++;
											MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
											func_23(iParam0);
											func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
										}
									}
								}
							}
						}
						else if (!MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 10))
						{
							if ((((func_27(&(Local_122.f_899[iVar4 /*9*/])) < 21 && !MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 12)) && Local_122.f_899[iVar4 /*9*/].f_8 <= 6) && Local_122.f_899[iVar4 /*9*/].f_8 > 0) || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
							{
								if ((((((MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 0) && Local_122.f_899[iVar4 /*9*/].f_8 == 2) || (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 1) && Local_122.f_899[iVar4 /*9*/].f_8 == 3)) || (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 2) && Local_122.f_899[iVar4 /*9*/].f_8 == 4)) || (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 3) && Local_122.f_899[iVar4 /*9*/].f_8 == 5)) || (MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 4) && Local_122.f_899[iVar4 /*9*/].f_8 == 6)) || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
								{
									if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
										{
											if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
											{
												Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_122.f_899[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
												MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
											}
										}
									}
									else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
									{
										fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]);
										if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
										{
											if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
											{
												if (((!MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 10) && func_27(&(Local_122.f_899[iVar4 /*9*/])) < 21) && !MISC::IS_BIT_SET(Local_1782[iVar4 /*8*/], 12)) && Local_122.f_899[iVar4 /*9*/].f_8 <= 6)
												{
													Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
													NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
													NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
												}
												MISC::SET_BIT(&(Local_122.f_1565[iParam0]), iVar4);
												if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
												{
													func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
													Local_122.f_899[iVar4 /*9*/][Local_122.f_899[iVar4 /*9*/].f_8] = uVar0;
													Local_122.f_899[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
													MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
												}
												MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
												MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
											}
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
										{
											if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
											{
												func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
												Local_122.f_899[iVar4 /*9*/][Local_122.f_899[iVar4 /*9*/].f_8] = uVar0;
												Local_122.f_899[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
												MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
											}
										}
									}
								}
								else if (!func_44(iParam0, 20))
								{
									if (func_47(2, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
									{
										func_43(iParam0, 20);
									}
								}
								else if (func_65(&(Local_122.f_1642[Local_1782[iVar4 /*8*/].f_4 /*2*/]), 15000, 0))
								{
									if (!func_44(iParam0, 21))
									{
										if (func_47(15, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 21);
										}
									}
								}
							}
							else if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_12(iParam0, Local_122.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
									func_23(iParam0);
									Local_122.f_1575[iParam0]++;
									Local_122.f_1535[iParam0] = 0;
									func_63(&(Local_122.f_1633[iParam0 /*2*/]));
									MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
									MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
							{
								fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_12(iParam0, Local_122.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
									func_23(iParam0);
									Local_122.f_1575[iParam0]++;
									Local_122.f_1535[iParam0] = 0;
									func_63(&(Local_122.f_1633[iParam0 /*2*/]));
									MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
									MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
								}
							}
						}
						else if (Local_122.f_899[iVar4 /*9*/].f_8 == 2 || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
									{
										Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
										func_15(func_21(iParam0, Local_122.f_899[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 1);
										MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
									}
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
							{
								fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
									{
										Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_12(iParam0, Local_122.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
										if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
										{
											func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
											Local_122.f_899[iVar4 /*9*/][Local_122.f_899[iVar4 /*9*/].f_8] = uVar0;
											Local_122.f_899[iVar4 /*9*/].f_8++;
											func_23(iParam0);
											func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
											MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
										}
										MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
										MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
										func_23(iParam0);
										Local_122.f_1575[iParam0]++;
										Local_122.f_1535[iParam0] = 0;
										func_63(&(Local_122.f_1633[iParam0 /*2*/]));
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
								{
									if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar4 /*9*/][Local_122.f_899[iVar4 /*9*/].f_8] = uVar0;
										Local_122.f_899[iVar4 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
										MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
									}
								}
							}
						}
					}
				}
				else
				{
					MISC::SET_BIT(&(Local_122.f_1555[iParam0]), (0 + Local_122.f_1575[iParam0] * 3));
					MISC::SET_BIT(&(Local_122.f_1555[iParam0]), (1 + Local_122.f_1575[iParam0] * 3));
					MISC::SET_BIT(&(Local_122.f_1555[iParam0]), (2 + Local_122.f_1575[iParam0] * 3));
					func_23(iParam0);
					Local_122.f_1575[iParam0]++;
					Local_122.f_1535[iParam0] = 0;
					func_63(&(Local_122.f_1633[iParam0 /*2*/]));
					MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
					MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
				}
			}
			if (Local_122.f_1575[iParam0] >= 4)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
					{
						if (Local_122.f_1590[iParam0] != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869)))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
							{
								MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
								func_60(7, iParam0);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
						func_60(7, iParam0);
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
					func_60(7, iParam0);
				}
			}
			break;
		
		case 7:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
			{
				if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
					{
						Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_11(iParam0), 4f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
						MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
					}
				}
				else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
					{
						MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
						MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
						func_23(iParam0);
						func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
						func_60(8, iParam0);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
					{
						Local_122.f_1525[iParam0] = 1;
					}
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
				MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
				func_23(iParam0);
				func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
				func_60(8, iParam0);
			}
			break;
		
		case 8:
			Local_122.f_1525[iParam0] = 1;
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar3 = (iParam0 * 4 + iVar9);
				iVar4 = Local_122.f_1600[iVar3];
				if (iVar4 != func_419())
				{
					if (((((func_27(&(Local_122.f_899[iVar4 /*9*/])) == 21 && Local_122.f_899[iVar4 /*9*/].f_8 > 2) && Local_122.f_899[iVar4 /*9*/].f_8 < 7) || ((func_27(&(Local_122.f_1188[iVar4 /*9*/])) == 21 && Local_122.f_1188[iVar4 /*9*/].f_8 > 2) && Local_122.f_1188[iVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_122.f_899[iVar4 /*9*/])) < 21 && Local_122.f_899[iVar4 /*9*/].f_8 >= 2) && Local_122.f_899[iVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_122.f_1188[iVar4 /*9*/])) < 21 && Local_122.f_1188[iVar4 /*9*/].f_8 >= 2) && Local_122.f_1188[iVar4 /*9*/].f_8 < 7))
					{
						iVar8 = 1;
					}
				}
				iVar9++;
			}
			if (func_34(&(Local_122.f_846[iParam0 /*13*/]), 0) >= 17)
			{
				iVar8 = 0;
			}
			if (iVar8 || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
				{
					if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_10(iParam0, Local_122.f_846[iParam0 /*13*/].f_12), 4f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
							func_15(func_9(iParam0, Local_122.f_846[iParam0 /*13*/].f_12), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 1, 0);
							MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
						}
					}
					else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
					{
						fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]);
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][Local_122.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
								MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
							}
							MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
							MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 19);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 19))
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][Local_122.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
								MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 19);
							}
						}
					}
				}
			}
			else
			{
				func_29(iParam0);
				func_60(9, iParam0);
			}
			break;
		
		case 9:
			Var10 = 11;
			Var23 = 7;
			func_29(iParam0);
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
			{
				if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 13))
				{
					if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_8(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
							MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
						}
					}
					else if ((Local_122.f_1590[iParam0] != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
					{
						MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
						MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 13);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 14))
				{
					iVar3 = iParam0 * 4;
					iVar4 = Local_122.f_1600[iVar3];
					if (iVar4 != func_419() && iVar4 > -1)
					{
						if (Local_122.f_899[iVar4 /*9*/].f_8 > 0 || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_7(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 14);
									Local_122.f_899[iVar4 /*9*/] = { Var23 };
									Local_122.f_1188[iVar4 /*9*/] = { Var23 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1345695206))
								{
									Local_122.f_899[iVar4 /*9*/] = { Var23 };
									Local_122.f_1188[iVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 14);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 14);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 15))
				{
					iVar3 = iParam0 * 4 + 1;
					iVar4 = Local_122.f_1600[iVar3];
					if (iVar4 != func_419() && iVar4 > -1)
					{
						if (Local_122.f_899[iVar4 /*9*/].f_8 > 0 || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_6(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 15);
									Local_122.f_899[iVar4 /*9*/] = { Var23 };
									Local_122.f_1188[iVar4 /*9*/] = { Var23 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1345695206))
								{
									Local_122.f_899[iVar4 /*9*/] = { Var23 };
									Local_122.f_1188[iVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 15);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 15);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 16))
				{
					iVar3 = iParam0 * 4 + 2;
					iVar4 = Local_122.f_1600[iVar3];
					if (iVar4 != func_419() && iVar4 > -1)
					{
						if (Local_122.f_899[iVar4 /*9*/].f_8 > 0 || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_5(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 16);
									Local_122.f_899[iVar4 /*9*/] = { Var23 };
									Local_122.f_1188[iVar4 /*9*/] = { Var23 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1345695206))
								{
									Local_122.f_899[iVar4 /*9*/] = { Var23 };
									Local_122.f_1188[iVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 16);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 16);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 17))
				{
					iVar3 = iParam0 * 4 + 3;
					iVar4 = Local_122.f_1600[iVar3];
					if (iVar4 != func_419() && iVar4 > -1)
					{
						if (Local_122.f_899[iVar4 /*9*/].f_8 > 0 || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_4(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 17);
									Local_122.f_899[iVar4 /*9*/] = { Var23 };
									Local_122.f_1188[iVar4 /*9*/] = { Var23 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1345695206))
								{
									Local_122.f_899[iVar4 /*9*/] = { Var23 };
									Local_122.f_1188[iVar4 /*9*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 17);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 17);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 18))
				{
					if (Local_122.f_846[iParam0 /*13*/].f_12 > 0 || MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
					{
						if (!MISC::IS_BIT_SET(Local_122.f_1555[iParam0], 12))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_3(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 12);
							}
						}
						else if (Local_122.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
							{
								if (Local_122.f_1570[iParam0] == 1)
								{
									Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								}
								else
								{
									Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								}
								MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 12);
								MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 18);
								Local_122.f_846[iParam0 /*13*/] = { Var10 };
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1345695206))
							{
								Local_122.f_846[iParam0 /*13*/] = { Var10 };
							}
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_122.f_1555[iParam0]), 18);
					}
				}
				else if (!func_66(&(Local_122.f_1642[iParam0 /*2*/])))
				{
					func_67(&(Local_122.f_1642[iParam0 /*2*/]), 0, 0);
				}
				else if (func_65(&(Local_122.f_1642[iParam0 /*2*/]), 1000, 0))
				{
					Local_122.f_1525[iParam0] = 0;
					Local_122.f_1575[iParam0] = 0;
					Local_122.f_1555[iParam0] = 0;
					Local_122.f_1565[iParam0] = 0;
					func_63(&(Local_122.f_1633[iParam0 /*2*/]));
					func_63(&(Local_122.f_1642[iParam0 /*2*/]));
					Local_122.f_1560[iParam0]++;
					func_60(1, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_own_cards_and_remove";
	}
	return "retrieve_own_cards_and_remove";
}

char* func_4(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_04";
	}
	return "retrieve_cards_player_04";
}

char* func_5(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_03";
	}
	return "retrieve_cards_player_03";
}

char* func_6(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_02";
	}
	return "retrieve_cards_player_02";
}

char* func_7(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_01";
	}
	return "retrieve_cards_player_01";
}

char* func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(&(Local_122.f_846[iParam0 /*13*/]));
	if (Local_122.f_1550[iParam0] >= 7)
	{
		if (iVar0 > 21)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else if (iVar0 == 21)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				}
			
			default:
		}
	}
	else if (iVar0 > 21)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else if (iVar0 == 21)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(int iParam0, int iParam1)
{
	return (iParam0 * 11 + iParam1);
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam1 > 8)
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_10";
		}
		return "deal_card_self_card_10";
	}
	else if (iParam1 > 4)
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_06";
		}
		return "deal_card_self_card_06";
	}
	else
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_second_card";
		}
		return "deal_card_self_second_card";
	}
	return "deal_card_self_second_card";
}

char* func_11(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_turn_card";
	}
	return "turn_card";
}

char* func_12(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_419() && MISC::IS_BIT_SET(Local_1782[iParam2 /*8*/], 14)) && !MISC::IS_BIT_SET(Local_1782[iParam2 /*8*/], 13)) && !(MISC::IS_BIT_SET(Local_1782[iParam2 /*8*/], 11) && Local_122.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_outro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_outro_split";
				}
			
			default:
		}
	}
	else if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_outro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_outro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_outro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_outro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_outro";
			
			case 1:
				return "dealer_focus_player_02_idle_outro";
			
			case 2:
				return "dealer_focus_player_03_idle_outro";
			
			case 3:
				return "dealer_focus_player_04_idle_outro";
			}
		
		default:
	}
	return "";
}

int func_13(var uParam0, var uParam1)
{
	if (uParam0->f_209 >= uParam0->f_210)
	{
		return 0;
	}
	*uParam1 = (*uParam0)[uParam0->f_209];
	uParam0->f_209++;
	return 1;
}

char* func_14(int iParam0, int iParam1, bool bParam2)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_second_card_player_01";
				
				case 1:
					return "female_hit_second_card_player_02";
				
				case 2:
					return "female_hit_second_card_player_03";
				
				case 3:
					return "female_hit_second_card_player_04";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_card_player_01";
				
				case 1:
					return "female_hit_card_player_02";
				
				case 2:
					return "female_hit_card_player_03";
				
				case 3:
					return "female_hit_card_player_04";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "hit_second_card_player_01";
			
			case 1:
				return "hit_second_card_player_02";
			
			case 2:
				return "hit_second_card_player_03";
			
			case 3:
				return "hit_second_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "hit_card_player_01";
			
			case 1:
				return "hit_card_player_02";
			
			case 2:
				return "hit_card_player_03";
			
			case 3:
				return "hit_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0 = 1614484900;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_16(1, 1));
}

var func_16(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_20(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_17(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312763;
}

int func_20(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2440277.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		return (((Local_2039.f_257 * 7 * 4 + iParam0 * 7 * 4) + iParam2 * 7) + iParam1);
	}
	return ((iParam0 * 7 * 4 + iParam2 * 7) + iParam1);
}

char* func_22(int iParam0, int iParam1)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_split_card_player_01";
			
			case 1:
				return "female_split_card_player_02";
			
			case 2:
				return "female_split_card_player_03";
			
			case 3:
				return "female_split_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "split_card_player_01";
			
			case 1:
				return "split_card_player_02";
			
			case 2:
				return "split_card_player_03";
			
			case 3:
				return "split_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_23(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 20);
	MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 21);
	MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 22);
	MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 23);
	MISC::CLEAR_BIT(&(Local_122.f_1555[iParam0]), 24);
}

char* func_24(int iParam0, int iParam1, bool bParam2)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient_split";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient_split";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient_split";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient_split";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_split";
			
			case 1:
				return "dealer_focus_player_02_idle_split";
			
			case 2:
				return "dealer_focus_player_03_idle_split";
			
			case 3:
				return "dealer_focus_player_04_idle_split";
			}
		
		default:
	}
	return "";
}

char* func_25(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (((iParam2 != func_419() && MISC::IS_BIT_SET(Local_1782[iParam2 /*8*/], 14)) && !MISC::IS_BIT_SET(Local_1782[iParam2 /*8*/], 13)) && !(MISC::IS_BIT_SET(Local_1782[iParam2 /*8*/], 11) && Local_122.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_impatient_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_impatient_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_impatient_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_impatient_split";
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_split";
					}
				
				default:
			}
		}
		else if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_split";
				
				case 1:
					return "dealer_focus_player_02_idle_split";
				
				case 2:
					return "dealer_focus_player_03_idle_split";
				
				case 3:
					return "dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (Local_122.f_1550[iParam0] >= 7)
	{
		if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle";
				
				case 1:
					return "female_dealer_focus_player_02_idle";
				
				case 2:
					return "female_dealer_focus_player_03_idle";
				
				case 3:
					return "female_dealer_focus_player_04_idle";
				}
			
			default:
		}
	}
	else if (bParam3)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle";
			
			case 1:
				return "dealer_focus_player_02_idle";
			
			case 2:
				return "dealer_focus_player_03_idle";
			
			case 3:
				return "dealer_focus_player_04_idle";
			}
		
		default:
	}
	return "";
}

char* func_26(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_419() && MISC::IS_BIT_SET(Local_1782[iParam2 /*8*/], 14)) && !MISC::IS_BIT_SET(Local_1782[iParam2 /*8*/], 13)) && !(MISC::IS_BIT_SET(Local_1782[iParam2 /*8*/], 11) && Local_122.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_intro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_intro_split";
				}
			
			default:
		}
	}
	else if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_intro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_intro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_intro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_intro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_intro";
			
			case 1:
				return "dealer_focus_player_02_idle_intro";
			
			case 2:
				return "dealer_focus_player_03_idle_intro";
			
			case 3:
				return "dealer_focus_player_04_idle_intro";
			}
		
		default:
	}
	return "";
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar3 = func_35((*uParam0)[iVar2]);
		iVar0 = (iVar0 + iVar3);
		if (iVar3 == 11)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

char* func_28(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_check_card";
	}
	return "check_card";
}

void func_29(int iParam0)
{
	if (func_44(iParam0, 23))
	{
		return;
	}
	if (func_44(iParam0, 24))
	{
		if (func_47(13, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
		{
			func_43(iParam0, 23);
		}
		return;
	}
	if (func_30(iParam0))
	{
		func_43(iParam0, 24);
	}
	else
	{
		func_43(iParam0, 23);
	}
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (iParam0 * 4 + iVar0);
		iVar2 = Local_122.f_1600[iVar1];
		if (iVar2 == func_419())
		{
		}
		else if (!func_31(&iVar2, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = *iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 1;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 1;
	}
	iVar1 = func_34(&(Local_122.f_846[iParam1 /*13*/]), 0);
	iVar2 = Local_122.f_846[iParam1 /*13*/].f_12;
	iVar3 = func_27(&(Local_122.f_899[iVar0 /*9*/]));
	iVar4 = Local_122.f_899[iVar0 /*9*/].f_8;
	iVar5 = func_27(&(Local_122.f_1188[iVar0 /*9*/]));
	iVar6 = Local_122.f_1188[iVar0 /*9*/].f_8;
	if (func_32(iVar1, iVar2, iVar3, iVar4) && func_32(iVar1, iVar2, iVar5, iVar6))
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam3 <= 0)
	{
		return 1;
	}
	bVar0 = (iParam1 == 2 && iParam0 == 21);
	bVar1 = (iParam3 == 2 && iParam2 == 21);
	if (bVar1)
	{
		return 0;
	}
	if (bVar0)
	{
		return 1;
	}
	if (iParam0 > 21)
	{
		return 0;
	}
	if (iParam2 > 21)
	{
		return 1;
	}
	if (iParam3 >= 7)
	{
		return 0;
	}
	if (iParam0 > iParam2)
	{
		return 1;
	}
	return 0;
}

char* func_33(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_check_and_turn_card";
	}
	return "check_and_turn_card";
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (iParam1 && iVar2 == 0)
		{
		}
		else
		{
			iVar3 = func_35((*uParam0)[iVar2]);
			iVar0 = (iVar0 + iVar3);
			if (iVar3 == 11)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
		case 11:
		case 24:
		case 37:
		case 50:
		case 12:
		case 25:
		case 38:
		case 51:
		case 13:
		case 26:
		case 39:
		case 52:
			return 10;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 11;
		
		default:
	}
	return 0;
}

void func_36(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	switch (Local_122.f_1510[iParam0])
	{
		case 0:
			iVar2 = Local_122.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_1782[iVar2 /*8*/].f_4 == iParam0 && MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 0, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][0] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(1, iParam0);
			}
			break;
		
		case 1:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_1782[iVar2 /*8*/].f_4 == iParam0 && MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 1, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][0] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(2, iParam0);
			}
			break;
		
		case 2:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_1782[iVar2 /*8*/].f_4 == iParam0 && MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 2, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][0] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(3, iParam0);
			}
			break;
		
		case 3:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_1782[iVar2 /*8*/].f_4 == iParam0 && MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 3, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][0] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(4, iParam0);
			}
			break;
		
		case 4:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_37(iParam0), 3))
					{
						Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_37(iParam0), 4f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
						func_15(func_9(iParam0, 0), 0, 1, 0);
					}
					else if (Local_122.f_1590[iParam0] != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
						{
							bVar1 = true;
							if (Local_122.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][0] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
						{
							if (Local_122.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][0] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
					}
					else
					{
						bVar1 = true;
						if (Local_122.f_846[iParam0 /*13*/].f_12 == 0)
						{
							func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
							Local_122.f_846[iParam0 /*13*/][0] = uVar0;
							Local_122.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(5, iParam0);
			}
			break;
		
		case 5:
			iVar2 = Local_122.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_1782[iVar2 /*8*/].f_4 == iParam0 && MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 0, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][1] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(6, iParam0);
			}
			break;
		
		case 6:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_1782[iVar2 /*8*/].f_4 == iParam0 && MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 1, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][1] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(7, iParam0);
			}
			break;
		
		case 7:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_1782[iVar2 /*8*/].f_4 == iParam0 && MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 2, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][1] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(8, iParam0);
			}
			break;
		
		case 8:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_1782[iVar2 /*8*/].f_4 == iParam0 && MISC::IS_BIT_SET(Local_1782[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 3, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][1] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(9, iParam0);
			}
			break;
		
		case 9:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_58(), func_10(iParam0, 0), 3))
					{
						Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_10(iParam0, 0), 4f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
						func_15(func_9(iParam0, 1), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 1, 0);
					}
					else if (Local_122.f_1590[iParam0] != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869))
						{
							Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
							if (Local_122.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][1] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 1), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
							bVar1 = true;
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 585557868))
						{
							if (Local_122.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][1] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 1), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
						}
					}
					else
					{
						Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
						bVar1 = true;
						if (Local_122.f_846[iParam0 /*13*/].f_12 == 1)
						{
							func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
							Local_122.f_846[iParam0 /*13*/][1] = uVar0;
							Local_122.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
							func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 1), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_41(0, iParam0);
				func_60(5, iParam0);
			}
			break;
	}
}

char* func_37(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_self";
	}
	return "deal_card_self";
}

char* func_38(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_04";
	}
	return "deal_card_player_04";
}

char* func_39(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_03";
	}
	return "deal_card_player_03";
}

char* func_40(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_02";
	}
	return "deal_card_player_02";
}

void func_41(int iParam0, int iParam1)
{
	Local_122.f_1510[iParam1] = iParam0;
}

char* func_42(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_01";
	}
	return "deal_card_player_01";
}

void func_43(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	MISC::SET_BIT(&(Local_122.f_1555[iParam0]), iParam1);
}

bool func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Local_122.f_1555[iParam0], iParam1);
}

char* func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_122.f_1600[(iParam0 * 4 + iVar2)] != func_419())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_46(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_122.f_1600[(iParam0 * 4 + iVar1)] != func_419())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

int func_47(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	char cVar0[64];
	int iVar16;
	char* sVar17;
	
	if (iParam0 == 3)
	{
		if (iParam2 > 21)
		{
			if (bParam4)
			{
				iParam0 = 12;
			}
			else
			{
				iParam0 = 0;
			}
		}
		else if (iParam2 == 21)
		{
			if (iParam3 == 2)
			{
				iParam0 = 1;
			}
		}
	}
	StringCopy(&cVar0, func_49(iParam0, iParam2, iParam5), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar16 = NETWORK::NET_TO_PED(*uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar16, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar16))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar16))
	{
		return 0;
	}
	sVar17 = func_48(7);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iVar16, &cVar0, sVar17, 1);
	return 1;
}

int func_48(int iParam0)
{
	int iVar0;
	
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

char* func_49(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_BJACK_DEALER_PLAYER_BUST";
		
		case 1:
			return "MINIGAME_BJACK_DEALER_BLACKJACK";
		
		case 2:
			return "MINIGAME_BJACK_DEALER_ANOTHER_CARD";
		
		case 3:
			return func_56(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 5:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 7:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 6:
			return func_50(iParam2);
		
		case 8:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 9:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 10:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 11:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 12:
			return "MINIGAME_DEALER_BUSTS";
		
		case 13:
			return "MINIGAME_DEALER_WINS";
		
		case 15:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 16:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		default:
	}
	return "";
}

char* func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_20(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (func_54(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_52(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_51(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_51(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_1782[*iParam0 /*8*/].f_4;
	return func_53(iVar0, Local_2039.f_257);
}

int func_53(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_55(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42588[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

char* func_56(int iParam0)
{
	if (iParam0 <= 1 || iParam0 > 21)
	{
		return "";
	}
	switch (iParam0)
	{
		case 2:
			return "MINIGAME_BJACK_DEALER_2";
		
		case 3:
			return "MINIGAME_BJACK_DEALER_3";
		
		case 4:
			return "MINIGAME_BJACK_DEALER_4";
		
		case 5:
			return "MINIGAME_BJACK_DEALER_5";
		
		case 6:
			return "MINIGAME_BJACK_DEALER_6";
		
		case 7:
			return "MINIGAME_BJACK_DEALER_7";
		
		case 8:
			return "MINIGAME_BJACK_DEALER_8";
		
		case 9:
			return "MINIGAME_BJACK_DEALER_9";
		
		case 10:
			return "MINIGAME_BJACK_DEALER_10";
		
		case 11:
			return "MINIGAME_BJACK_DEALER_11";
		
		case 12:
			return "MINIGAME_BJACK_DEALER_12";
		
		case 13:
			return "MINIGAME_BJACK_DEALER_13";
		
		case 14:
			return "MINIGAME_BJACK_DEALER_14";
		
		case 15:
			return "MINIGAME_BJACK_DEALER_15";
		
		case 16:
			return "MINIGAME_BJACK_DEALER_16";
		
		case 17:
			return "MINIGAME_BJACK_DEALER_17";
		
		case 18:
			return "MINIGAME_BJACK_DEALER_18";
		
		case 19:
			return "MINIGAME_BJACK_DEALER_19";
		
		case 20:
			return "MINIGAME_BJACK_DEALER_20";
		
		case 21:
			return "MINIGAME_BJACK_DEALER_21";
		
		default:
	}
	return "";
}

char* func_57(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_place_bet_request";
	}
	return "place_bet_request";
}

char* func_58()
{
	return "anim_casino_b@amb@casino@games@blackjack@dealer";
}

void func_59(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_209 = 0;
	uParam0->f_210 = 208;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_210)
		{
			iVar1 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, uParam0->f_210);
			uVar0 = (*uParam0)[iVar2];
			(*uParam0)[iVar2] = (*uParam0)[iVar1];
			(*uParam0)[iVar1] = uVar0;
			iVar2++;
		}
		iVar3++;
	}
}

void func_60(int iParam0, int iParam1)
{
	Local_122.f_1515[iParam1] = iParam0;
}

void func_61(int iParam0)
{
	struct<13> Var0;
	
	Local_122.f_1530[iParam0] = 1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0])))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]))
			{
				Local_122.f_1590[iParam0] = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_122.f_1580[iParam0]);
				if (Local_122.f_1590[iParam0] == -1 || ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_122.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), 2116425869)))
				{
					Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iParam0]);
			}
			return;
		}
	}
	Local_122.f_1555[iParam0] = 0;
	Local_122.f_1565[iParam0] = 0;
	func_63(&(Local_122.f_1633[iParam0 /*2*/]));
	Var0 = 11;
	Local_122.f_846[iParam0 /*13*/] = { Var0 };
	Local_122.f_1525[iParam0] = 0;
	Local_122.f_1575[iParam0] = 0;
	func_63(&(Local_122.f_1642[iParam0 /*2*/]));
	func_73(1, iParam0);
	func_60(0, iParam0);
	func_41(0, iParam0);
	Local_122.f_1560[iParam0]++;
	Local_122.f_1530[iParam0] = 0;
}

int func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_122.f_1600[(iParam0 * 4 + iVar1)] != func_419() && Local_122.f_899[Local_122.f_1600[(iParam0 * 4 + iVar1)] /*9*/].f_8 > 0)
			{
				iVar0++;
			}
		}
		else if (Local_122.f_1600[(iParam0 * 4 + iVar1)] != func_419())
		{
			iVar0++;
		}
		iVar1++;
	}
	if (Local_122.f_1570[iParam0] != iVar0)
	{
		Local_122.f_1570[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_64(int iParam0, int iParam1)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_65(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_67(uParam0, bParam2, 0);
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

bool func_66(var uParam0)
{
	return uParam0->f_1;
}

void func_67(var uParam0, bool bParam1, bool bParam2)
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

char* func_68(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_69(int iParam0)
{
	if (Local_2039.f_257 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -134.69f;
			
			case 1:
				return 45.31f;
			
			case 2:
				return 135.31f;
			
			case 3:
				return 135.31f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_70(int iParam0)
{
	if (Local_2039.f_257 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.837f, 269.747f, -52.8409f;
			
			case 1:
				return 1151.84f, 266.747f, -52.8409f;
			
			case 2:
				return 1129.406f, 262.3578f, -52.041f;
			
			case 3:
				return 1144.429f, 247.3352f, -52.041f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_71(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_72()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_73(int iParam0, int iParam1)
{
	Local_122.f_1520[iParam1] = iParam0;
}

void func_74(var uParam0)
{
	var uVar0[7];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar9 = 208;
	iVar10 = 0;
	while (iVar10 < 208)
	{
		iVar8 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar9);
		iVar11 = 0;
		while (iVar11 < 208)
		{
			iVar13 = (iVar11 / 32);
			iVar14 = (iVar11 % 32);
			if (iVar12 == iVar8 && !MISC::IS_BIT_SET(uVar0[iVar13], iVar14))
			{
				MISC::SET_BIT(&(uVar0[iVar13]), iVar14);
				while (iVar11 + 1 > 52)
				{
					iVar11 = (iVar11 - 52);
				}
				(*uParam0)[iVar10] = iVar11 + 1;
			}
			else
			{
				if (!MISC::IS_BIT_SET(uVar0[iVar13], iVar14))
				{
					iVar12++;
				}
				iVar11++;
			}
		}
		iVar12 = 0;
		iVar9 = (iVar9 - 1);
		iVar10++;
	}
	uParam0->f_210 = 208;
}

void func_75()
{
	int iVar0;
	
	if (!func_80(PLAYER::PLAYER_ID()))
	{
		iVar0 = iLocal_3704;
		if (Global_2516633 != iVar0 && (Global_2516633 != -1 || func_425(PLAYER::PLAYER_ID())))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar0]))
			{
				func_77(iVar0);
			}
		}
		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iVar0]))
			{
				func_76(&(Local_122.f_1595[iVar0]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_122.f_1595[iVar0]);
			}
		}
	}
	iLocal_3704++;
	if (iLocal_3704 >= Local_2039.f_257)
	{
		iLocal_3704 = 0;
	}
}

void func_76(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("s_m_y_casino_01");
	if (Local_122.f_1550[iParam0] >= 7)
	{
		iVar0 = joaat("s_f_y_casino_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(func_72());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_72()))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iParam0]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			iVar1 = PED::CREATE_PED(26, iVar0, func_70(iParam0), func_69(iParam0), true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
			PED::SET_PED_AS_ENEMY(iVar1, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_RESET_FLAG(iVar1, 249, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 185, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 108, true);
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			ENTITY::_0x352E2B5CF420BF3B(iVar1, 1);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar1, false);
			PED::_0x2F3C3D9F50681DE4(iVar1, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, false);
			PED::SET_PED_CONFIG_FLAG(iVar1, 208, true);
			PED::SET_PED_CAN_RAGDOLL(iVar1, false);
			func_79(Local_122.f_1550[iParam0], &iVar1);
			func_78(Local_122.f_1550[iParam0], &iVar1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_70(iParam0), false, false, true);
			ENTITY::SET_ENTITY_HEADING(iVar1, func_69(iParam0));
			Local_122.f_1595[iParam0] = NETWORK::PED_TO_NET(iVar1);
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_122.f_1595[iParam0], false);
			Local_122.f_1540[iParam0] = 1;
			Local_122.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 1000f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_122.f_1580[iParam0]);
			STREAMING::REMOVE_ANIM_DICT(func_58());
		}
	}
}

void func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false);
			break;
		
		case 12:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false);
			break;
	}
}

int func_80(int iParam0)
{
	if (iParam0 != func_419() && func_20(iParam0, 1, 1))
	{
		if (func_81(iParam0) && !func_424(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (iParam0 != func_419() && func_20(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

void func_82()
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	
	Var0 = 7;
	bVar9 = false;
	iVar10 = iLocal_3703;
	if (Local_1782[iVar10 /*8*/].f_4 == -1)
	{
		Local_122.f_899[iVar10 /*9*/] = { Var0 };
		Local_122.f_1188[iVar10 /*9*/] = { Var0 };
	}
	if (Local_1782[iVar10 /*8*/].f_6 == 0)
	{
		if (Local_122.f_1477[iVar10] != 0)
		{
			Local_122.f_1477[iVar10] = 0;
		}
	}
	if (!bVar9)
	{
		if (func_83(iVar10))
		{
			bVar9 = true;
		}
	}
	iLocal_3703++;
	if (iLocal_3703 >= 32)
	{
		iLocal_3703 = 0;
	}
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_416())
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_20(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_1782[iParam0 /*8*/].f_6.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_1782[iParam0 /*8*/].f_6 == 1)
	{
		if (func_47(6, &(Local_122.f_1595[iVar2]), -1, 0, 0, iParam0))
		{
			func_84(iParam0, 1);
		}
		return 1;
	}
	if (Local_1782[iParam0 /*8*/].f_6 == 2)
	{
		if (func_47(7, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 2);
		}
		return 1;
	}
	if (Local_1782[iParam0 /*8*/].f_6 == 4)
	{
		if (func_47(8, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 4);
		}
		return 1;
	}
	if (Local_1782[iParam0 /*8*/].f_6 == 5)
	{
		if (func_47(9, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 5);
		}
		return 1;
	}
	if (Local_1782[iParam0 /*8*/].f_6 == 6)
	{
		if (func_47(10, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 6);
		}
		return 1;
	}
	if (Local_1782[iParam0 /*8*/].f_6 == 7)
	{
		if (func_47(11, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	MISC::SET_BIT(&(Local_122.f_1477[iParam0]), iVar0);
}

void func_85()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_3702;
	if (Local_122.f_1600[iVar0] != func_419())
	{
		iVar1 = Local_122.f_1600[iVar0];
		if (((!func_20(Local_122.f_1600[iVar0], 1, 1) || Local_1782[iVar1 /*8*/].f_3 == -1) || Local_1782[iVar1 /*8*/].f_3 != iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_122.f_1600[iVar0]))
		{
			Local_122.f_1600[iVar0] = func_419();
			if (Local_122.f_1477[iVar0] != 0)
			{
				Local_122.f_1477[iVar0] = 0;
			}
		}
	}
	if (func_20(iVar0, 1, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		if (Local_1782[iVar0 /*8*/].f_3 > -1 && Local_1782[iVar0 /*8*/].f_3 < 32)
		{
			if (Local_122.f_1600[Local_1782[iVar0 /*8*/].f_3] == func_419())
			{
				if (func_20(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
				{
					Local_122.f_1600[Local_1782[iVar0 /*8*/].f_3] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
			}
		}
	}
	iLocal_3702++;
	if (iLocal_3702 >= 32)
	{
		iLocal_3702 = 0;
	}
}

void func_86()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<21> Var6;
	struct<3> Var27;
	
	func_413();
	if (!Local_2039.f_236)
	{
		if (func_425(PLAYER::PLAYER_ID()) && func_420() != func_419())
		{
			if (MISC::IS_BIT_SET(Global_2426097[func_420() /*443*/].f_314.f_4, 4))
			{
				Local_2039.f_236 = 1;
				func_412();
				func_411();
				iLocal_3697 = 1;
			}
		}
	}
	else if (iLocal_3697)
	{
		if (func_410())
		{
			iLocal_3697 = 0;
		}
	}
	func_406();
	func_405();
	Local_2039.f_248 = func_402();
	func_383();
	if (Local_2039.f_1 > 2)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 210, true);
		PAD::SET_INPUT_EXCLUSIVE(2, 210);
		PAD::DISABLE_CONTROL_ACTION(2, 26, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210))
		{
		}
		if (func_382(Local_2039.f_247) >= 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_70(func_382(Local_2039.f_247)), true) > 5f)
		{
			func_376(0);
		}
	}
	if (Local_2039.f_1 > 5)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		func_374(1);
		func_373(1, 0);
	}
	if (Local_2039.f_1 > 6)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 0, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 0))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 0)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
			}
		}
		CAM::_0x9F97DA93681F87EA();
	}
	if (Local_2039.f_1 > 7)
	{
		func_369(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]));
	}
	if (func_368())
	{
		bLocal_3699 = true;
	}
	else if (bLocal_3699)
	{
		func_367(&uLocal_3700, 0, 0);
		bLocal_3699 = false;
	}
	else if (func_66(&uLocal_3700) && func_65(&uLocal_3700, 500, 0))
	{
		func_63(&uLocal_3700);
	}
	switch (Local_2039.f_1)
	{
		case 0:
			if (func_362())
			{
				Local_2039.f_1582 = "idle_cardgames";
				Local_2039.f_252 = 0;
				Local_1782[PLAYER::PLAYER_ID() /*8*/] = 0;
				Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 = -1;
				Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 = -1;
				Local_1782[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
				func_361(PLAYER::PLAYER_ID());
				func_360(1);
			}
			break;
		
		case 1:
			switch (func_382(Local_2039.f_247))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_2039.f_245 = 5000;
					Local_2039.f_246 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_2039.f_245 = 50000;
					Local_2039.f_246 = 1000;
					break;
			}
			if (Local_2039.f_257 == 1)
			{
				bVar0 = true;
				Local_2039.f_245 = 50000;
				Local_2039.f_246 = 1000;
			}
			Local_2039.f_244 = Local_2039.f_246;
			if ((((((((((((((((((((((((!Global_262145.f_26236 && !(Global_262145.f_26238 && !bVar0)) && !(Global_262145.f_26237 && bVar0)) && ((func_359(1581559923) || func_359(272405600)) || func_425(PLAYER::PLAYER_ID()))) && func_357(PLAYER::PLAYER_PED_ID(), func_358(Local_2039.f_247), 1.5f)) && func_352(PLAYER::PLAYER_PED_ID(), func_356(Local_2039.f_247), 40f)) && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && !MISC::IS_BIT_SET(Global_1678289.f_4, 2)) && !Global_2405074.f_2674) && Global_2516633 != func_382(Local_2039.f_247)) && (Global_2516633 != -1 || func_425(PLAYER::PLAYER_ID()))) && func_351()) && !func_345()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_342(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2405074.f_2674) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_341()) && !func_340()) && !func_338()) && !Global_2462514.f_12) && Global_1678283 != 32) && !func_337())
			{
				func_360(2);
			}
			else
			{
				Local_2039.f_247++;
				if (Local_2039.f_247 >= Local_2039.f_257 * 4)
				{
					Local_2039.f_247 = 0;
				}
			}
			break;
		
		case 2:
			func_336();
			func_361(PLAYER::PLAYER_ID());
			if (((((((((((((((((((((func_359(1581559923) || func_359(272405600)) || func_425(PLAYER::PLAYER_ID())) && func_357(PLAYER::PLAYER_PED_ID(), func_358(Local_2039.f_247), 1.5f)) && func_352(PLAYER::PLAYER_PED_ID(), func_356(Local_2039.f_247), 40f)) && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && Global_2516633 != func_382(Local_2039.f_247)) && (Global_2516633 != -1 || func_425(PLAYER::PLAYER_ID()))) && func_351()) && !func_345()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_342(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2405074.f_2674) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_341()) && !func_340()) && !func_338()) && !Global_2462514.f_12) && Global_1678283 != 32) && !func_337())
			{
				if ((((((func_20(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_335()) && !func_334()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !bLocal_3699) && !func_66(&uLocal_3700))
				{
					if (func_333(1, &uVar1))
					{
						if (!func_332("BJACK_NA"))
						{
							func_331("BJACK_NA");
						}
					}
					else if (Local_122.f_1600[Local_2039.f_247] != func_419())
					{
						if (!func_332("BJACK_USED"))
						{
							func_331("BJACK_USED");
						}
					}
					else if (func_330())
					{
						if (func_326() == 2)
						{
							if (!func_332("CAS_MG_CTIME"))
							{
								func_331("CAS_MG_CTIME");
							}
						}
						else if (!func_332("CAS_MG_CBAN"))
						{
							func_331("CAS_MG_CBAN");
						}
					}
					else if ((!func_325(PLAYER::PLAYER_ID()) && (func_382(Local_2039.f_247) == 2 || func_382(Local_2039.f_247) == 3)) && !(func_324(1) && func_325(func_323())))
					{
						if (!func_332("CAS_MG_SUITE2"))
						{
							func_331("CAS_MG_SUITE2");
						}
					}
					else if (!func_322() && !(func_324(1) && func_321(func_323())))
					{
						if (!func_319("CAS_MG_MEMB2", func_320(1)))
						{
							func_318("CAS_MG_MEMB2", func_320(1));
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2, 52))
						{
							HUD::CLEAR_HELP(true);
							func_317();
							func_360(3);
						}
					}
					else if (Local_2039.f_248 <= 0)
					{
						if (func_425(PLAYER::PLAYER_ID()))
						{
							if (!func_332("CAS_MG_NOCHIPS6"))
							{
								func_331("CAS_MG_NOCHIPS6");
							}
						}
						else if (!func_332("CAS_MG_NOCHIPS2"))
						{
							func_331("CAS_MG_NOCHIPS2");
						}
					}
					else if (Local_2039.f_248 < Local_2039.f_246)
					{
						if (func_425(PLAYER::PLAYER_ID()))
						{
							if (!func_332("CAS_MG_LOWCHIPS6"))
							{
								func_331("CAS_MG_LOWCHIPS6");
							}
						}
						else if (!func_332("CAS_MG_LOWCHIPS2"))
						{
							func_331("CAS_MG_LOWCHIPS2");
						}
					}
					else if (Local_2039.f_259 == -1)
					{
						if (func_316())
						{
							HUD::CLEAR_HELP(true);
						}
						if (((!func_325(PLAYER::PLAYER_ID()) && (func_382(Local_2039.f_247) == 2 || func_382(Local_2039.f_247) == 3)) && !(func_324(1) && func_325(func_323()))) || (!func_322() && (func_324(1) && func_321(func_323()))))
						{
							if (func_313(func_323()) == 1)
							{
								Local_2039.f_256 = 1;
								func_312(&(Local_2039.f_259), 4, "BJACK_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_311(func_323()))
							{
								Local_2039.f_256 = 2;
								func_312(&(Local_2039.f_259), 4, "BJACK_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_2039.f_256 = 3;
								func_312(&(Local_2039.f_259), 4, "BJACK_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_2039.f_256 = 0;
							func_312(&(Local_2039.f_259), 4, "BJACK_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_310(Local_2039.f_259, 1))
					{
						func_308(&(Local_2039.f_259));
						Local_2039.f_259 = -1;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
						func_307();
						func_297(PLAYER::PLAYER_ID(), 0, 1048832, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						func_360(4);
					}
				}
				else
				{
					if (func_316())
					{
						HUD::CLEAR_HELP(true);
					}
					if (Local_2039.f_259 != -1)
					{
						func_308(&(Local_2039.f_259));
						Local_2039.f_259 = -1;
					}
					Local_2039.f_247 = 0;
					func_360(1);
				}
			}
			else
			{
				if (func_316())
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_2039.f_259 != -1)
				{
					func_308(&(Local_2039.f_259));
					Local_2039.f_259 = -1;
				}
				Local_2039.f_247 = 0;
				func_360(1);
			}
			break;
		
		case 3:
			if (!func_296())
			{
				func_360(2);
			}
			break;
		
		case 4:
			func_374(1);
			sVar2 = "CasinoUI_Cards_Blackjack";
			if ((func_382(Local_2039.f_247) == 2 || func_382(Local_2039.f_247) == 3) || func_425(PLAYER::PLAYER_ID()))
			{
				sVar2 = "CasinoUI_Cards_Blackjack_High";
			}
			if (MISC::IS_BIT_SET(Global_1678289.f_5, 21))
			{
				func_367(&(Local_2039.f_1578), 0, 0);
				func_295(Local_2039.f_247);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					func_297(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				else
				{
					func_297(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				func_360(5);
			}
			else
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar2, false);
				if (func_293(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar2))
				{
					if (!iLocal_3698)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
						func_292(0, 0);
						func_290(1, sVar2, sVar2);
						func_289("BJACK_TITLE");
						func_288(-1, 1, 1);
						func_287("BJACK_DIS", 0, 0);
						func_286("BJACK_DIS1");
						func_286("BJACK_DIS2");
						func_286("BJACK_DIS3");
						func_285(202, "BJACK_EXIT", -1);
						func_285(201, "BJACK_CONT", -1);
						iLocal_3698 = 1;
					}
					func_247(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_244(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_3698 = 0;
					func_235();
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_244(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_3698 = 0;
					MISC::SET_BIT(&(Global_1678289.f_5), 21);
					func_367(&(Local_2039.f_1578), 0, 0);
					func_295(Local_2039.f_247);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						func_297(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					else
					{
						func_297(PLAYER::PLAYER_ID(), 0, 256, 0);
					}
					func_360(5);
				}
			}
			break;
		
		case 5:
			if ((((func_234(Local_2039.f_247) && !func_334()) && !func_368()) && func_351()) && !func_345())
			{
				func_63(&(Local_2039.f_1578));
				MISC::SET_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_4), 2);
				func_225(1);
				func_360(6);
			}
			else
			{
				if (func_334())
				{
					func_235();
				}
				if (func_368())
				{
					func_235();
				}
				if (func_224(Local_2039.f_247))
				{
					func_235();
				}
				if (func_223())
				{
					func_235();
				}
				if (!func_351())
				{
					func_235();
				}
				if (func_345())
				{
					func_235();
				}
			}
			break;
		
		case 6:
			if (!func_334() && !func_368())
			{
				if (func_222())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 2)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
					}
					fVar3 = func_220(PLAYER::PLAYER_PED_ID(), func_221(Local_2039.f_247, 0), 1);
					fVar4 = func_220(PLAYER::PLAYER_PED_ID(), func_221(Local_2039.f_247, 1), 1);
					fVar5 = func_220(PLAYER::PLAYER_PED_ID(), func_221(Local_2039.f_247, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_2039.f_251 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_2039.f_251 = 2;
					}
					else
					{
						Local_2039.f_251 = 0;
					}
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_221(Local_2039.f_247, Local_2039.f_251), 1f, 5000, func_219(Local_2039.f_247, Local_2039.f_251), 0.01f);
					func_360(7);
				}
			}
			else
			{
				func_235();
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
			{
				Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_2039.f_247), func_217(Local_2039.f_247), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_216(), func_215(Local_2039.f_251), 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
				Local_1782[PLAYER::PLAYER_ID() /*8*/].f_6.f_1 = Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4;
				func_360(8);
			}
			break;
		
		case 8:
			CAM::_0x79C0E43EB9B944E2(-2124244681);
			Local_2039.f_258 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_2039.f_255);
			if (func_214())
			{
				func_213(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 2);
			}
			else
			{
				func_213(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 1);
			}
			if (Local_2039.f_258 != -1)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2039.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2038294702)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317))
				{
					Local_2039.f_1582 = "idle_cardgames";
					Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_2039.f_247), func_217(Local_2039.f_247), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_216(), Local_2039.f_1582, 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
					func_297(PLAYER::PLAYER_ID(), 0, 256, 0);
					Local_3652 = { Var6 };
					if (func_425(PLAYER::PLAYER_ID()))
					{
						Local_3652 = 1695074466;
					}
					else if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 == 2 || Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 == 3)
					{
						Local_3652 = 1952785842;
					}
					else
					{
						Local_3652 = -1125105727;
					}
					Local_3652.f_1 = Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4;
					Local_3652.f_6 = 1;
					if (func_325(PLAYER::PLAYER_ID()))
					{
						Local_3652.f_15 = 1983458449;
					}
					else if (func_322())
					{
						Local_3652.f_15 = 1334658487;
					}
					else if (func_324(1) && (func_325(func_323()) || func_211(PLAYER::PLAYER_ID())))
					{
						Local_3652.f_15 = 980726932;
					}
					else
					{
						Local_3652.f_15 = 939907746;
					}
					func_367(&uLocal_3624, 0, 0);
					func_210();
					Local_2039.f_249 = func_402();
					func_360(9);
				}
			}
			break;
		
		case 9:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			CAM::_0x79C0E43EB9B944E2(-2124244681);
			func_90();
			break;
		
		case 10:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) == 1)
			{
				func_213(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), func_89());
				Var27 = { PAD::GET_CONTROL_NORMAL(2, 218), PAD::GET_CONTROL_NORMAL(2, 219), 0f };
				Local_2039.f_258 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_2039.f_255);
				if (Local_2039.f_258 != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2039.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)) || (SYSTEM::VMAG(Var27) >= 0.24f && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_297(PLAYER::PLAYER_ID(), 1, 0, 0);
					STREAMING::REMOVE_ANIM_DICT(func_58());
					STREAMING::REMOVE_ANIM_DICT(func_72());
					STREAMING::REMOVE_ANIM_DICT(func_88());
					STREAMING::REMOVE_ANIM_DICT(func_216());
					MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_4), 2);
					func_336();
					func_87();
					func_360(2);
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_297(PLAYER::PLAYER_ID(), 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT(func_58());
				STREAMING::REMOVE_ANIM_DICT(func_72());
				STREAMING::REMOVE_ANIM_DICT(func_88());
				STREAMING::REMOVE_ANIM_DICT(func_216());
				MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_4), 2);
				func_336();
				func_87();
				func_360(2);
			}
			break;
	}
}

void func_87()
{
	MISC::CLEAR_BIT(&(Local_2039.f_252), 21);
	MISC::CLEAR_BIT(&(Local_2039.f_252), 22);
}

char* func_88()
{
	return "anim_casino_b@amb@casino@games@blackjack@player";
}

int func_89()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_402();
	iVar1 = (iVar0 - Local_2039.f_249);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_90()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	struct<9> Var12;
	struct<26> Var21;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	char* sVar62;
	char* sVar63;
	char* sVar64;
	char* sVar65;
	bool bVar66;
	char* sVar67;
	
	if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
	{
		iVar1 = (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 * 4 + Local_122.f_1575[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]);
		iVar0 = Local_122.f_1600[iVar1];
	}
	if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
	{
		if (func_209(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4))
		{
			func_208("BJACK_ERROR", -1);
			return;
		}
	}
	bVar2 = false;
	if (func_53(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, Local_2039.f_257))
	{
		bVar2 = true;
	}
	func_194();
	if (func_416())
	{
		Local_3652.f_10 = 1;
	}
	Local_3652.f_11 = func_192();
	if (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] != 6 || Local_122.f_1575[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] != (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)))
	{
		if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_334()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !MISC::IS_BIT_SET(Local_2039.f_250, 0)) && !Local_2039.f_234) && !func_191())
		{
			if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
			{
				Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
			}
			Local_3626.f_18 = func_416();
			Local_3626.f_19 = func_192();
			Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
			Local_3626.f_7 = func_402();
			Local_3652.f_2 = joaat("QUIT");
			Local_3626.f_4 = joaat("QUIT");
			Local_3626.f_25 = joaat("QUIT");
			if (Local_2039 > 1 || Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 != 0)
			{
				if (Global_262145.f_26109)
				{
					STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
				}
			}
			if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 > 0 && !Local_2039.f_232)
			{
				func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1);
			}
			if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 > 0 && !Local_2039.f_233)
			{
				func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2);
			}
			func_376(1);
			HUD::CLEAR_HELP(true);
			return;
		}
	}
	if (((Global_2516633 == Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 || Global_2462514.f_12) || Global_1678283 == 32) || !func_187())
	{
		if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
		{
			Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
		}
		Local_3626.f_18 = func_416();
		Local_3626.f_19 = func_192();
		Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
		Local_3626.f_7 = func_402();
		if (Global_262145.f_26109)
		{
			STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
		}
		func_376(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (Local_2039.f_255 > -1)
	{
		Local_2039.f_258 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_2039.f_255);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !Local_2039.f_234)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_216(), "idle_cardgames", 3))
			{
				if (Local_2039.f_258 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2039.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)))
				{
					Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_216(), "idle_cardgames", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
					Local_2039.f_1582 = "idle_cardgames";
					MISC::CLEAR_BIT(&(Local_2039.f_252), 0);
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_216(), "idle_cardgames", 3))
			{
				if (Local_2039.f_258 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2039.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)))
				{
					Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_216(), func_186(0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
					MISC::CLEAR_BIT(&(Local_2039.f_252), 0);
				}
			}
		}
	}
	if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
	{
		func_184(&(Local_2039.f_874));
		if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]))) && !MISC::IS_BIT_SET(Local_2039.f_250, 0))
		{
			if (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] != 6 || Local_122.f_1575[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] != (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)))
			{
				func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 202, true), "BJACK_EXIT", &(Local_2039.f_874), 0);
			}
			else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 1), 3)) && !MISC::IS_BIT_SET(Local_122.f_1555[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4], 12)) && !MISC::IS_BIT_SET(Local_2039.f_252, 0))
			{
				if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14))
				{
					if (((!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 12) && !(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21)) && func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21) && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 <= 7)
					{
						func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 201, true), "BJACK_HIT", &(Local_2039.f_874), 0);
						func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 203, true), "BJACK_STAND", &(Local_2039.f_874), 0);
					}
				}
				else if ((((!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 12) && !(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21)) && func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21) && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 <= 7) || (((!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 13) && !(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) == 21)) && func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) <= 21) && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 <= 7))
				{
					func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 201, true), "BJACK_HIT", &(Local_2039.f_874), 0);
					func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 203, true), "BJACK_STAND", &(Local_2039.f_874), 0);
				}
				if (Local_2039.f_248 >= Local_2039.f_244)
				{
					if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14))
					{
						if ((func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 10))
						{
							func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 204, true), "BJACK_DOUBLE", &(Local_2039.f_874), 0);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 13) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 11))
					{
						if (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
						{
							if (func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) < 21)
							{
								func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 204, true), "BJACK_DOUBLE", &(Local_2039.f_874), 0);
							}
						}
					}
					else if ((func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 10))
					{
						func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 204, true), "BJACK_DOUBLE", &(Local_2039.f_874), 0);
					}
				}
				if (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14))
				{
					if (Local_2039.f_248 >= Local_2039.f_244)
					{
						if (func_35(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/][0]) == func_35(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/][1]))
						{
							func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 206, true), "BJACK_SPLIT", &(Local_2039.f_874), 0);
						}
					}
				}
			}
		}
		if ((Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] == 3 && !MISC::IS_BIT_SET(Local_2039.f_250, 0)) && (Local_2039.f_248 >= Local_2039.f_246 || Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 != 0))
		{
			if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 15) && !MISC::IS_BIT_SET(Local_2039.f_252, 0))
			{
				func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 201, true), "BJACK_PLACE", &(Local_2039.f_874), 0);
				if (!MISC::IS_BIT_SET(Local_2039.f_252, 20))
				{
					func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 204, true), "BJACK_BET_MAX", &(Local_2039.f_874), 0);
				}
				func_182(2, 7, "BJACK_BET_NUM", &(Local_2039.f_874));
			}
		}
		if (MISC::IS_BIT_SET(Local_2039.f_250, 0))
		{
			func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 202, true), "IB_BACK", &(Local_2039.f_874), 0);
			func_182(2, 8, "IB_TAB", &(Local_2039.f_874));
		}
		if (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] < 9 || !MISC::IS_BIT_SET(Local_122.f_1555[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4], 13))
		{
			if (Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 >= 2)
			{
				func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 208, true), "BJACK_DLR", &(Local_2039.f_874), 0);
			}
			if (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
			{
				func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 207, true), "BJACK_CARDS", &(Local_2039.f_874), 0);
			}
		}
		if (bLocal_3690 && Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] > 1)
		{
			func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 195, true), "BJACK_LR", &(Local_2039.f_874), 0);
		}
		if (!MISC::IS_BIT_SET(Local_2039.f_250, 0))
		{
			func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 210, true), "BJACK_RULESb", &(Local_2039.f_874), 0);
		}
		Var3 = { func_181() };
		func_180(&(Local_2039.f_874), 1f);
		func_172(&(Local_2039.f_873), &Var3, &(Local_2039.f_874), func_179(&(Local_2039.f_874)));
		func_171(1);
	}
	func_166();
	switch (Local_2039)
	{
		case 0:
			if (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] == 3)
			{
				if ((Local_2039.f_244 > Local_2039.f_248 || Local_2039.f_244 < Local_2039.f_246) || Local_2039.f_244 > Local_2039.f_245)
				{
					Local_2039.f_244 = Local_2039.f_246;
				}
				Var12 = 7;
				Local_2039.f_213 = { Var12 };
				Local_2039.f_222 = { Var12 };
				Local_3626 = { Var21 };
				Local_3626.f_10 = 1;
				Local_3626 = joaat("blackjack");
				Local_3626.f_11 = func_325(PLAYER::PLAYER_ID());
				if (func_325(PLAYER::PLAYER_ID()))
				{
					Local_3626.f_20 = 1983458449;
				}
				else if (func_322())
				{
					Local_3626.f_20 = 1334658487;
				}
				else if (func_324(1) && (func_325(func_323()) || func_211(PLAYER::PLAYER_ID())))
				{
					Local_3626.f_20 = 980726932;
				}
				else
				{
					Local_3626.f_20 = 939907746;
				}
				if (func_425(PLAYER::PLAYER_ID()))
				{
					Local_3626.f_1 = 1695074466;
				}
				else if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 == 2 || Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 == 3)
				{
					Local_3626.f_1 = 1952785842;
				}
				else
				{
					Local_3626.f_1 = -1125105727;
				}
				func_367(&uLocal_3622, 0, 0);
				Local_3626.f_3 = Local_122.f_1560[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
				Local_3626.f_2 = Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4;
				func_165(1);
			}
			break;
		
		case 1:
			if ((!func_322() && !(func_324(1) && func_321(func_323()))) || ((!func_325(PLAYER::PLAYER_ID()) && (func_382(Local_2039.f_247) == 2 || func_382(Local_2039.f_247) == 3)) && !(func_324(1) && func_325(func_323()))))
			{
				if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_3626.f_18 = func_416();
				Local_3626.f_19 = func_192();
				Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
				Local_3626.f_7 = func_402();
				Local_3652.f_2 = 939907746;
				Local_3626.f_4 = 939907746;
				if (Global_262145.f_26109)
				{
					STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
				}
				func_376(1);
				HUD::CLEAR_HELP(true);
				if (Local_2039.f_256 == 1)
				{
					func_208("IT_MEMBOc", -1);
				}
				else if (Local_2039.f_256 == 2)
				{
					func_208("IT_MEMBOa", -1);
				}
				else if (Local_2039.f_256 == 3)
				{
					func_208("IT_MEMBOb", -1);
				}
				return;
			}
			if ((Local_2039.f_248 < Local_2039.f_246 && Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 == 0) && !Local_2039.f_234)
			{
				if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_3626.f_18 = func_416();
				Local_3626.f_19 = func_192();
				Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
				Local_3626.f_7 = func_402();
				Local_3652.f_2 = -1275559872;
				Local_3626.f_4 = -1275559872;
				if (Global_262145.f_26109)
				{
					STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
				}
				func_376(1);
				HUD::CLEAR_HELP(true);
				if (func_425(PLAYER::PLAYER_ID()))
				{
					if (Local_2039.f_248 <= 0)
					{
						func_208("CAS_MG_NOCHIPS6", -1);
					}
					else
					{
						func_208("CAS_MG_LOWCHIPS6", -1);
					}
				}
				else if (Local_2039.f_248 <= 0)
				{
					func_208("CAS_MG_NOCHIPS2", -1);
				}
				else
				{
					func_208("CAS_MG_LOWCHIPS2", -1);
				}
				return;
			}
			if (func_330())
			{
				switch (func_326())
				{
					case 0:
						Local_3652.f_2 = 1982714739;
						break;
					
					case 1:
						Local_3652.f_2 = -633175758;
						break;
					
					case 2:
						Local_3652.f_2 = -1625999354;
						break;
				}
				switch (func_326())
				{
					case 0:
						Local_3626.f_4 = 1982714739;
						break;
					
					case 1:
						Local_3626.f_4 = -633175758;
						break;
					
					case 2:
						Local_3626.f_4 = -1625999354;
						break;
				}
				if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_3626.f_18 = func_416();
				Local_3626.f_19 = func_192();
				Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
				Local_3626.f_7 = func_402();
				if (Global_262145.f_26109)
				{
					STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
				}
				func_376(1);
				HUD::CLEAR_HELP(true);
				if (func_326() == 2)
				{
					func_208("CAS_MG_CTIME", -1);
				}
				else
				{
					func_208("CAS_MG_CBAN", -1);
				}
				return;
			}
			if ((!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 15) && !MISC::IS_BIT_SET(Local_2039.f_252, 0)) && (!func_351() || func_345()))
			{
				if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_3626.f_18 = func_416();
				Local_3626.f_19 = func_192();
				Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
				Local_3626.f_7 = func_402();
				if (Global_262145.f_26109)
				{
					STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
				}
				func_376(1);
				HUD::CLEAR_HELP(true);
				return;
			}
			if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 15) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 16))
			{
				if (!MISC::IS_BIT_SET(Local_2039.f_252, 0))
				{
					if (((((!MISC::IS_BIT_SET(Local_2039.f_253, 1) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !func_334()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !MISC::IS_BIT_SET(Local_2039.f_250, 0))
					{
						bVar48 = PAD::IS_CONTROL_PRESSED(2, 188);
						bVar49 = PAD::IS_CONTROL_PRESSED(2, 187);
						if (bVar49 || (((((bVar48 && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_334()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !MISC::IS_BIT_SET(Local_2039.f_250, 0)))
						{
							func_67(&(Local_2039.f_1574), 0, 0);
							MISC::SET_BIT(&(Local_2039.f_253), 1);
						}
					}
					else if (func_65(&(Local_2039.f_1574), 100, 0))
					{
						func_63(&(Local_2039.f_1574));
						MISC::CLEAR_BIT(&(Local_2039.f_253), 1);
					}
					if (((((((PAD::IS_CONTROL_JUST_PRESSED(2, 204) && !bVar49) && !bVar48) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_334()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !MISC::IS_BIT_SET(Local_2039.f_250, 0)) && !MISC::IS_BIT_SET(Local_2039.f_252, 20))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar47 = true;
					}
					if (bVar47)
					{
						while (bVar47)
						{
							if (Local_2039.f_244 >= 10000)
							{
								iVar50 = 5000;
							}
							else if (Local_2039.f_244 >= 5000)
							{
								iVar50 = 1000;
							}
							else if (Local_2039.f_244 >= 500)
							{
								iVar50 = 500;
							}
							else if (Local_2039.f_244 >= 100)
							{
								iVar50 = 50;
							}
							else
							{
								iVar50 = 10;
							}
							if (Local_2039.f_244 > Local_2039.f_248)
							{
								Local_2039.f_244 = (Local_2039.f_244 - iVar50);
							}
							if (Local_2039.f_244 < Local_2039.f_246)
							{
								Local_2039.f_244 = Local_2039.f_246;
							}
							Local_2039.f_244 = (Local_2039.f_244 + iVar50);
							if (Local_2039.f_244 > Local_2039.f_245)
							{
								bVar47 = false;
								Local_2039.f_244 = Local_2039.f_245;
							}
							if (Local_2039.f_244 > Local_2039.f_248)
							{
								bVar47 = false;
								Local_2039.f_244 = (Local_2039.f_244 - iVar50);
							}
						}
					}
					else
					{
						if (Local_2039.f_244 >= 10000)
						{
							iVar50 = 5000;
						}
						else if (Local_2039.f_244 >= 5000)
						{
							iVar50 = 1000;
						}
						else if (Local_2039.f_244 >= 500)
						{
							iVar50 = 500;
						}
						else if (Local_2039.f_244 >= 100)
						{
							iVar50 = 50;
						}
						else
						{
							iVar50 = 10;
						}
						if (Local_2039.f_244 > Local_2039.f_248)
						{
							Local_2039.f_244 = (Local_2039.f_244 - iVar50);
						}
						if (Local_2039.f_244 < Local_2039.f_246)
						{
							Local_2039.f_244 = Local_2039.f_246;
						}
						iVar51 = Local_2039.f_244;
						if (bVar48)
						{
							Local_2039.f_244 = (Local_2039.f_244 + iVar50);
							if (Local_2039.f_244 > Local_2039.f_245)
							{
								Local_2039.f_244 = Local_2039.f_245;
							}
							if (Local_2039.f_244 > Local_2039.f_248)
							{
								Local_2039.f_244 = (Local_2039.f_244 - iVar50);
							}
							if (Local_2039.f_244 == iVar51)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || !MISC::IS_BIT_SET(Local_2039.f_252, 23))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_2039.f_252), 23);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_2039.f_252), 23);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar49)
						{
							if (Local_2039.f_244 <= 100)
							{
								iVar50 = 10;
							}
							else if (Local_2039.f_244 <= 500)
							{
								iVar50 = 50;
							}
							else if (Local_2039.f_244 <= 5000)
							{
								iVar50 = 500;
							}
							else if (Local_2039.f_244 <= 10000)
							{
								iVar50 = 1000;
							}
							else
							{
								iVar50 = 5000;
							}
							Local_2039.f_244 = (Local_2039.f_244 - iVar50);
							if (Local_2039.f_244 < Local_2039.f_246)
							{
								Local_2039.f_244 = Local_2039.f_246;
							}
							if (Local_2039.f_244 == iVar51)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || !MISC::IS_BIT_SET(Local_2039.f_252, 23))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_2039.f_252), 23);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_2039.f_252), 23);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_2039.f_244 == Local_2039.f_245 || (Local_2039.f_244 + iVar50) > Local_2039.f_245) || (Local_2039.f_244 + iVar50) > Local_2039.f_248)
					{
						MISC::SET_BIT(&(Local_2039.f_252), 20);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_2039.f_252), 20);
					}
					MISC::SET_BIT(&(Local_2039.f_253), 0);
					iVar52 = (30 - (func_190(&(Local_122.f_1642[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0) / 1000));
					if (iVar52 > 0 || !func_66(&(Local_122.f_1642[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/])))
					{
						if (((((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 202)) && !PAD::IS_CONTROL_PRESSED(2, 203)) && Local_2039.f_244 >= Local_2039.f_246) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_334()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !MISC::IS_BIT_SET(Local_2039.f_250, 0))
						{
							MISC::SET_BIT(&(Local_2039.f_252), 0);
							Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_88(), func_164(Local_2039.f_244, bVar2, 0, 0), 4f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
							HUD::CLEAR_HELP(true);
						}
						if (!func_332("BJACK_BET") && !MISC::IS_BIT_SET(Local_2039.f_252, 0))
						{
							if ((!bLocal_3689 && !bLocal_3690) && !bLocal_3681)
							{
								func_163("BJACK_BET");
							}
						}
					}
					else if (func_66(&(Local_122.f_1642[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/])) && func_65(&(Local_122.f_1642[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 30000, 0))
					{
						if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 15))
						{
							MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 16);
						}
					}
				}
				else
				{
					if ((Local_2039.f_258 != -1 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844)) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 15))
					{
						Local_2039.f_234 = 1;
					}
					if (Local_2039.f_234 && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 15))
					{
						if (func_160(Local_2039.f_244, &(Local_2039.f_243), 1, Local_2039.f_231))
						{
							if (Local_2039.f_243 == 3)
							{
								Local_2039.f_234 = 0;
								Local_2039.f_243 = 0;
							}
							else
							{
								Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = Local_2039.f_244;
								Local_3652.f_3 = (Local_3652.f_3 - Local_2039.f_244);
								Local_3626.f_6 = (Local_3626.f_6 - Local_2039.f_244);
								if (MISC::IS_BIT_SET(Local_2039.f_252, 20))
								{
									Local_3626.f_5 = 1;
								}
								Local_3652.f_12++;
								Local_3652.f_7 = (Local_3652.f_7 + Local_2039.f_244);
								Local_3626.f_12 = (Local_3626.f_12 + Local_2039.f_244);
								MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 15);
								Local_2039.f_234 = 0;
							}
						}
					}
				}
			}
			if ((func_66(&(Local_122.f_1642[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/])) && Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] > 1) && (30000 - func_190(&(Local_122.f_1642[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0)) > 0)
			{
				if (func_190(&(Local_122.f_1642[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0) <= 24000)
				{
					func_159((30000 - func_190(&(Local_122.f_1642[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_159((30000 - func_190(&(Local_122.f_1642[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
			if (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] > 3)
			{
				if (MISC::IS_BIT_SET(Local_2039.f_253, 0) && !Local_2039.f_234)
				{
					HUD::CLEAR_HELP(true);
					MISC::CLEAR_BIT(&(Local_2039.f_252), 0);
					if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 15))
					{
						MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 16);
					}
					func_165(2);
				}
			}
			func_155(Local_2039.f_244, "BJACK_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			break;
		
		case 2:
			if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
			{
				if (Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 >= 2)
				{
					func_63(&(Local_2039.f_1576));
					iLocal_3693 = 0;
					func_165(3);
				}
			}
			break;
		
		case 3:
			iVar53 = func_34(&(Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/]), 0);
			iVar54 = func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/]));
			iVar55 = func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/]));
			iVar56 = Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12;
			iVar57 = Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8;
			iVar58 = Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8;
			bVar59 = (iVar56 == 2 && iVar53 == 21);
			bVar60 = (iVar57 == 2 && iVar54 == 21);
			bVar61 = (iVar58 == 2 && iVar55 == 21);
			if (((bVar61 || iVar55 >= 21) || iVar58 == 7) && !MISC::IS_BIT_SET(Local_122.f_1555[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4], 12))
			{
				MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 13);
			}
			if (((bVar60 || iVar54 >= 21) || iVar57 == 7) && !MISC::IS_BIT_SET(Local_122.f_1555[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4], 12))
			{
				if (iVar54 > 21)
				{
					if (!MISC::IS_BIT_SET(Local_2039.f_252, 19))
					{
						Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_216(), func_154(), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
						MISC::SET_BIT(&(Local_2039.f_252), 19);
					}
				}
				MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 12);
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4])))
			{
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 1), 3)) && !MISC::IS_BIT_SET(Local_122.f_1555[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4], 12))
				{
					if (func_66(&(Local_2039.f_1576)))
					{
						if ((30000 - func_190(&(Local_2039.f_1576), 0, 0)) >= 0)
						{
							if (func_190(&(Local_2039.f_1576), 0, 0) <= 24000)
							{
								func_159((30000 - func_190(&(Local_2039.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_190(&(Local_2039.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (func_65(&(Local_2039.f_1576), 30000, 0))
						{
							MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 12);
							MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 13);
							func_63(&(Local_2039.f_1576));
							return;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_216(), func_186(1), 3))
						{
							func_367(&(Local_2039.f_1576), 0, 0);
						}
					}
					if (bVar59)
					{
						MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 12);
						MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 13);
					}
					else if (((MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14) && MISC::IS_BIT_SET(Local_122.f_1565[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4], PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 13)) && !(MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 11) && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 > 2))
					{
						if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 11) || MISC::IS_BIT_SET(Local_2039.f_252, 0))
						{
							if (!MISC::IS_BIT_SET(Local_2039.f_252, 0))
							{
								if (((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_334()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !MISC::IS_BIT_SET(Local_2039.f_250, 0))
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
									{
										Local_3626.f_22 = 1;
										if (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
										{
											MISC::SET_BIT(&(Local_2039.f_252), 6);
										}
										else if (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 3)
										{
											MISC::SET_BIT(&(Local_2039.f_252), 7);
										}
										else if (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 4)
										{
											MISC::SET_BIT(&(Local_2039.f_252), 8);
										}
										else if (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 5)
										{
											MISC::SET_BIT(&(Local_2039.f_252), 9);
										}
										else if (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 6)
										{
											MISC::SET_BIT(&(Local_2039.f_252), 10);
										}
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												sVar62 = "request_card";
												break;
											
											case 1:
												sVar62 = "request_card_alt1";
												break;
											
											case 2:
												sVar62 = "request_card_alt2";
												break;
										}
										Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_88(), sVar62, 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
										MISC::SET_BIT(&(Local_2039.f_252), 0);
										func_63(&(Local_2039.f_1576));
									}
									else if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
									{
										Local_3626.f_21 = 1;
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												sVar63 = "decline_card_001";
												break;
											
											case 1:
												sVar63 = "decline_card_alt1";
												break;
											
											case 2:
												sVar63 = "decline_card_alt2";
												break;
										}
										Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_88(), sVar63, 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
										MISC::SET_BIT(&(Local_2039.f_252), 14);
										MISC::SET_BIT(&(Local_2039.f_252), 0);
										func_63(&(Local_2039.f_1576));
									}
									else if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
									{
										if (Local_2039.f_248 >= Local_2039.f_244 && iVar58 == 2)
										{
											Local_3626.f_23 = 1;
											Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_88(), func_164(Local_2039.f_244, bVar2, 1, 1), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
											MISC::SET_BIT(&(Local_2039.f_252), 12);
											MISC::SET_BIT(&(Local_2039.f_252), 0);
											func_63(&(Local_2039.f_1576));
										}
									}
								}
							}
							else if (Local_2039.f_258 != -1)
							{
								if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2039.f_258) >= 0.3f)
								{
									if (MISC::IS_BIT_SET(Local_2039.f_252, 6))
									{
										MISC::CLEAR_BIT(&(Local_2039.f_252), 6);
										MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 5);
									}
									else if (MISC::IS_BIT_SET(Local_2039.f_252, 7))
									{
										MISC::CLEAR_BIT(&(Local_2039.f_252), 7);
										MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 6);
									}
									else if (MISC::IS_BIT_SET(Local_2039.f_252, 8))
									{
										MISC::CLEAR_BIT(&(Local_2039.f_252), 8);
										MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 7);
									}
									else if (MISC::IS_BIT_SET(Local_2039.f_252, 9))
									{
										MISC::CLEAR_BIT(&(Local_2039.f_252), 9);
										MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 8);
									}
									else if (MISC::IS_BIT_SET(Local_2039.f_252, 10))
									{
										MISC::CLEAR_BIT(&(Local_2039.f_252), 10);
										MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 9);
									}
								}
								if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_001", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2039.f_258) >= 0.3f)
								{
									if (MISC::IS_BIT_SET(Local_2039.f_252, 14))
									{
										MISC::CLEAR_BIT(&(Local_2039.f_252), 14);
										MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 13);
									}
								}
								if (MISC::IS_BIT_SET(Local_2039.f_252, 12))
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844))
									{
										Local_2039.f_234 = 1;
									}
									if (!MISC::IS_BIT_SET(Local_2039.f_252, 17) && Local_2039.f_234)
									{
										if (func_160(Local_2039.f_244, &(Local_2039.f_243), 1, Local_2039.f_231))
										{
											if (Local_2039.f_243 == 3)
											{
												MISC::CLEAR_BIT(&(Local_2039.f_252), 12);
												Local_2039.f_234 = 0;
												Local_2039.f_243 = 0;
											}
											else
											{
												Local_3652.f_3 = (Local_3652.f_3 - Local_2039.f_244);
												Local_3626.f_6 = (Local_3626.f_6 - Local_2039.f_244);
												Local_3652.f_8 = (Local_3652.f_8 + Local_2039.f_244);
												Local_3626.f_13 = (Local_3626.f_13 + Local_2039.f_244);
												Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 + Local_2039.f_244);
												MISC::SET_BIT(&(Local_2039.f_252), 17);
												MISC::CLEAR_BIT(&(Local_2039.f_252), 12);
												MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 11);
												Local_2039.f_234 = 0;
											}
										}
									}
								}
							}
						}
					}
					else if ((!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 10) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 12)) || MISC::IS_BIT_SET(Local_2039.f_252, 0))
					{
						if (!MISC::IS_BIT_SET(Local_2039.f_252, 0))
						{
							if (((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_334()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !MISC::IS_BIT_SET(Local_2039.f_250, 0))
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
								{
									Local_3626.f_22 = 1;
									if (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
									{
										MISC::SET_BIT(&(Local_2039.f_252), 1);
									}
									else if (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 3)
									{
										MISC::SET_BIT(&(Local_2039.f_252), 2);
									}
									else if (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 4)
									{
										MISC::SET_BIT(&(Local_2039.f_252), 3);
									}
									else if (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 5)
									{
										MISC::SET_BIT(&(Local_2039.f_252), 4);
									}
									else if (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 6)
									{
										MISC::SET_BIT(&(Local_2039.f_252), 5);
									}
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											sVar64 = "request_card";
											break;
										
										case 1:
											sVar64 = "request_card_alt1";
											break;
										
										case 2:
											sVar64 = "request_card_alt2";
											break;
									}
									Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_88(), sVar64, 4f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
									MISC::SET_BIT(&(Local_2039.f_252), 0);
									func_63(&(Local_2039.f_1576));
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
								{
									Local_3626.f_21 = 1;
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											sVar65 = "decline_card_001";
											break;
										
										case 1:
											sVar65 = "decline_card_alt1";
											break;
										
										case 2:
											sVar65 = "decline_card_alt2";
											break;
									}
									Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_88(), sVar65, 4f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
									MISC::SET_BIT(&(Local_2039.f_252), 13);
									MISC::SET_BIT(&(Local_2039.f_252), 0);
									func_63(&(Local_2039.f_1576));
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
								{
									if (Local_2039.f_248 >= Local_2039.f_244 && iVar57 == 2)
									{
										Local_3626.f_23 = 1;
										Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_88(), func_164(Local_2039.f_244, bVar2, 1, 0), 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
										MISC::SET_BIT(&(Local_2039.f_252), 11);
										MISC::SET_BIT(&(Local_2039.f_252), 0);
										func_63(&(Local_2039.f_1576));
									}
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2, 206))
								{
									if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14))
									{
										if ((func_35(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/][0]) == func_35(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/][1]) && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && Local_2039.f_248 >= Local_2039.f_244)
										{
											Local_3626.f_24 = 1;
											Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_88(), func_164(Local_2039.f_244, bVar2, 0, 1), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
											MISC::SET_BIT(&(Local_2039.f_252), 15);
											MISC::SET_BIT(&(Local_2039.f_252), 0);
											func_63(&(Local_2039.f_1576));
										}
									}
								}
							}
						}
						else if (Local_2039.f_258 != -1)
						{
							if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2039.f_258) >= 0.3f)
							{
								if (MISC::IS_BIT_SET(Local_2039.f_252, 1))
								{
									MISC::CLEAR_BIT(&(Local_2039.f_252), 1);
									MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 0);
								}
								else if (MISC::IS_BIT_SET(Local_2039.f_252, 2))
								{
									MISC::CLEAR_BIT(&(Local_2039.f_252), 2);
									MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 1);
								}
								else if (MISC::IS_BIT_SET(Local_2039.f_252, 3))
								{
									MISC::CLEAR_BIT(&(Local_2039.f_252), 3);
									MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 2);
								}
								else if (MISC::IS_BIT_SET(Local_2039.f_252, 4))
								{
									MISC::CLEAR_BIT(&(Local_2039.f_252), 4);
									MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 3);
								}
								else if (MISC::IS_BIT_SET(Local_2039.f_252, 5))
								{
									MISC::CLEAR_BIT(&(Local_2039.f_252), 5);
									MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 4);
								}
							}
							if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_001", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2039.f_258) >= 0.3f)
							{
								if (MISC::IS_BIT_SET(Local_2039.f_252, 13))
								{
									MISC::CLEAR_BIT(&(Local_2039.f_252), 13);
									MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 12);
								}
							}
							if (MISC::IS_BIT_SET(Local_2039.f_252, 11))
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844))
								{
									Local_2039.f_234 = 1;
								}
								if (!MISC::IS_BIT_SET(Local_2039.f_252, 16) && Local_2039.f_234)
								{
									if (func_160(Local_2039.f_244, &(Local_2039.f_243), 1, Local_2039.f_231))
									{
										if (Local_2039.f_243 == 3)
										{
											MISC::CLEAR_BIT(&(Local_2039.f_252), 11);
											Local_2039.f_234 = 0;
											Local_2039.f_243 = 0;
										}
										else
										{
											Local_3652.f_3 = (Local_3652.f_3 - Local_2039.f_244);
											Local_3626.f_6 = (Local_3626.f_6 - Local_2039.f_244);
											Local_3652.f_7 = (Local_3652.f_7 + Local_2039.f_244);
											Local_3626.f_12 = (Local_3626.f_12 + Local_2039.f_244);
											Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 + Local_2039.f_244);
											MISC::SET_BIT(&(Local_2039.f_252), 16);
											MISC::CLEAR_BIT(&(Local_2039.f_252), 11);
											MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 10);
											Local_2039.f_234 = 0;
										}
									}
								}
							}
							if (MISC::IS_BIT_SET(Local_2039.f_252, 15))
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844))
								{
									Local_2039.f_234 = 1;
								}
								if (!MISC::IS_BIT_SET(Local_2039.f_252, 18) && Local_2039.f_234)
								{
									if (func_160(Local_2039.f_244, &(Local_2039.f_243), 1, Local_2039.f_231))
									{
										if (Local_2039.f_243 == 3)
										{
											MISC::CLEAR_BIT(&(Local_2039.f_252), 15);
											Local_2039.f_234 = 0;
											Local_2039.f_243 = 0;
										}
										else
										{
											Local_3652.f_3 = (Local_3652.f_3 - Local_2039.f_244);
											Local_3626.f_6 = (Local_3626.f_6 - Local_2039.f_244);
											Local_3652.f_8 = (Local_3652.f_8 + Local_2039.f_244);
											Local_3626.f_13 = (Local_3626.f_13 + Local_2039.f_244);
											Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 + Local_2039.f_244);
											MISC::SET_BIT(&(Local_2039.f_252), 18);
											MISC::CLEAR_BIT(&(Local_2039.f_252), 15);
											MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/]), 14);
											Local_2039.f_234 = 0;
										}
									}
								}
							}
						}
					}
				}
				else if (iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_419())
				{
					if (!func_332("BJACK_WAIT"))
					{
						if ((!bLocal_3689 && !bLocal_3690) && !bLocal_3681)
						{
							func_163("BJACK_WAIT");
						}
					}
				}
				else if (func_332("BJACK_WAIT"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
			{
				if (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] == 6)
				{
					if ((Local_122.f_1575[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] == (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)) && !(!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14) && MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 12))) && !((MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14) && MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 12)) && MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 13)))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 1), 3))
						{
							if (((Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14)) && Local_2039.f_248 >= Local_2039.f_244) && func_35(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/][0]) == func_35(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/][1]))
							{
								if ((!bLocal_3689 && !bLocal_3690) && !bLocal_3681)
								{
									if (!func_332("BJACK_TURN_S"))
									{
										func_163("BJACK_TURN_S");
									}
								}
							}
							else if (Local_2039.f_248 >= Local_2039.f_244 && (((((!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14) && func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21) && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 10)) || (((!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 13) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 11)) && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) < 21)) || ((func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 10))))
							{
								if ((!bLocal_3689 && !bLocal_3690) && !bLocal_3681)
								{
									if (!func_332("BJACK_TURN_D"))
									{
										func_163("BJACK_TURN_D");
									}
								}
							}
							else if ((!bLocal_3689 && !bLocal_3690) && !bLocal_3681)
							{
								if (!func_332("BJACK_TURN"))
								{
									func_163("BJACK_TURN");
								}
							}
						}
						else if ((func_332("BJACK_TURN") || func_332("BJACK_TURN_D")) || func_332("BJACK_TURN_S"))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					else if ((func_332("BJACK_TURN") || func_332("BJACK_TURN_D")) || func_332("BJACK_TURN_S"))
					{
						HUD::CLEAR_HELP(true);
					}
				}
				if (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] == 1)
				{
					if (MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 16))
					{
						bVar66 = true;
					}
					if (Local_2039.f_259 != -1)
					{
						func_308(&(Local_2039.f_259));
						Local_2039.f_259 = -1;
					}
					Local_1782[PLAYER::PLAYER_ID() /*8*/] = 0;
					Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
					Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
					Local_1782[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
					Local_2039.f_232 = 0;
					Local_2039.f_233 = 0;
					Local_2039.f_235 = 0;
					Local_2039.f_252 = 0;
					HUD::CLEAR_HELP(true);
					func_165(0);
					Local_3626.f_18 = func_416();
					Local_3626.f_19 = func_192();
					Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
					Local_3626.f_7 = func_402();
					if (!func_351() || func_345())
					{
						func_376(1);
						HUD::CLEAR_HELP(true);
						if (Global_262145.f_26109 && !bVar66)
						{
							STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
						}
						return;
					}
					if (func_330())
					{
						switch (func_326())
						{
							case 0:
								Local_3652.f_2 = 1982714739;
								break;
							
							case 1:
								Local_3652.f_2 = -633175758;
								break;
							
							case 2:
								Local_3652.f_2 = -1625999354;
								break;
						}
						switch (func_326())
						{
							case 0:
								Local_3626.f_4 = 1982714739;
								break;
							
							case 1:
								Local_3626.f_4 = -633175758;
								break;
							
							case 2:
								Local_3626.f_4 = -1625999354;
								break;
						}
						if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
						{
							Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
						}
						Local_3626.f_18 = func_416();
						Local_3626.f_19 = func_192();
						Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
						Local_3626.f_7 = func_402();
						if (Global_262145.f_26109 && !bVar66)
						{
							STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
						}
						func_376(1);
						HUD::CLEAR_HELP(true);
						if (func_326() == 2)
						{
							func_208("CAS_MG_CTIME", -1);
						}
						else
						{
							func_208("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26109 && !bVar66)
					{
						STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
					}
				}
				if (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] > 6)
				{
					if ((func_332("BJACK_TURN") || func_332("BJACK_TURN_D")) || func_332("BJACK_TURN_S"))
					{
						HUD::CLEAR_HELP(true);
					}
				}
				if (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] == 9 && iVar54 > 0)
				{
					if (Local_2039.f_232 && Local_2039.f_233)
					{
						if (!MISC::IS_BIT_SET(Local_2039.f_252, 19))
						{
							if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
							{
								Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
							}
							Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3), 2, false, true, 1f, 0f, 1f);
							sVar67 = func_153(Local_3626.f_6);
							if (func_53(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, Local_2039.f_257))
							{
								if (Local_2039.f_244 >= 35000)
								{
									if (((iVar54 <= 21 && iVar57 == 7) || (iVar55 <= 21 && iVar58 == 7)) || ((iVar54 == 21 && iVar55 == 21) && iVar53 != 21))
									{
										sVar67 = func_152();
									}
									else if (Local_2039.f_244 >= 45000)
									{
										if ((((iVar57 >= 2 && iVar54 < 21) && iVar53 == iVar54 + 1) && iVar56 > 2) || (((iVar58 >= 2 && iVar55 < 21) && iVar53 == iVar55 + 1) && iVar56 > 2))
										{
											sVar67 = func_150();
										}
									}
								}
							}
							else if (Local_2039.f_244 >= 4500)
							{
								if (((iVar54 <= 21 && iVar57 == 7) || (iVar55 <= 21 && iVar58 == 7)) || ((iVar54 == 21 && iVar55 == 21) && iVar53 != 21))
								{
									sVar67 = func_152();
								}
							}
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_216(), sVar67, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
							MISC::SET_BIT(&(Local_2039.f_252), 19);
						}
					}
					if ((Local_2039.f_232 && Local_2039.f_233) && !Local_2039.f_235)
					{
						if (Local_3626.f_14 > 0)
						{
							if (func_106(Local_3626.f_14, &(Local_2039.f_243), 1))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", true);
								Local_2039.f_235 = 1;
							}
						}
					}
					if ((((Local_2039.f_232 && Local_2039.f_233) && !bLocal_3689) && !bLocal_3690) && !bLocal_3681)
					{
						if (Local_3626.f_14 > 0)
						{
							if (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 <= 0)
							{
								if (bVar60 && !bVar59)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_BJ", Local_3626.f_14))
									{
										func_104("BJACK_WIN_2", "BJACK_BJ", Local_3626.f_14);
									}
								}
								else if (iVar54 <= 21 && iVar57 == 7)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_7CC", Local_3626.f_14))
									{
										func_104("BJACK_WIN_2", "BJACK_7CC", Local_3626.f_14);
									}
								}
								else if (iVar54 == iVar53)
								{
									if (!func_332("BJACK_PUSH"))
									{
										func_163("BJACK_PUSH");
									}
								}
								else if (!func_103("BJACK_WIN_1", iVar54, Local_3626.f_14))
								{
									func_102("BJACK_WIN_1", iVar54, Local_3626.f_14);
								}
							}
							else if ((bVar60 || bVar61) && !bVar59)
							{
								if (bVar60 && bVar61)
								{
									if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_3626.f_14))
									{
										func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_3626.f_14);
									}
								}
								else if (bVar60)
								{
									if (iVar55 <= 21 && iVar58 == 7)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_3626.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_3626.f_14);
										}
									}
									else if (iVar55 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_3626.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_3626.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_BJ", iVar55, Local_3626.f_14))
									{
										func_98("BJACK_WIN_4", "BJACK_BJ", iVar55, Local_3626.f_14);
									}
								}
								else if (bVar61)
								{
									if (iVar54 <= 21 && iVar57 == 7)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_3626.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_3626.f_14);
										}
									}
									else if (iVar54 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_3626.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_3626.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_BJ", iVar54, Local_3626.f_14))
									{
										func_98("BJACK_WIN_5", "BJACK_BJ", iVar54, Local_3626.f_14);
									}
								}
							}
							else if ((iVar54 <= 21 && iVar57 == 7) || (iVar55 <= 21 && iVar58 == 7))
							{
								if ((iVar54 <= 21 && iVar57 == 7) && (iVar55 <= 21 && iVar58 == 7))
								{
									if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_3626.f_14))
									{
										func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_3626.f_14);
									}
								}
								else if (iVar54 <= 21 && iVar57 == 7)
								{
									if (iVar55 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_3626.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_3626.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_7CC", iVar55, Local_3626.f_14))
									{
										func_98("BJACK_WIN_4", "BJACK_7CC", iVar55, Local_3626.f_14);
									}
								}
								else if (iVar55 <= 21 && iVar58 == 7)
								{
									if (iVar54 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_3626.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_3626.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_7CC", iVar54, Local_3626.f_14))
									{
										func_98("BJACK_WIN_5", "BJACK_7CC", iVar54, Local_3626.f_14);
									}
								}
							}
							else if (iVar54 == iVar53 && iVar55 == iVar53)
							{
								if (!func_332("BJACK_PUSH"))
								{
									func_163("BJACK_PUSH");
								}
							}
							else if (iVar54 <= 21 && iVar55 <= 21)
							{
								if (!func_97("BJACK_WIN_3", iVar54, iVar55, Local_3626.f_14))
								{
									func_96("BJACK_WIN_3", iVar54, iVar55, Local_3626.f_14);
								}
							}
							else if (iVar54 <= 21)
							{
								if (!func_99("BJACK_WIN_5", "BJACK_BUSTED", iVar54, Local_3626.f_14))
								{
									func_98("BJACK_WIN_5", "BJACK_BUSTED", iVar54, Local_3626.f_14);
								}
							}
							else if (iVar55 <= 21)
							{
								if (!func_99("BJACK_WIN_4", "BJACK_BUSTED", iVar55, Local_3626.f_14))
								{
									func_98("BJACK_WIN_4", "BJACK_BUSTED", iVar55, Local_3626.f_14);
								}
							}
						}
						else if (bVar59)
						{
							if (!func_95("BJACK_LOSE_2", "BJACK_BJ"))
							{
								func_94("BJACK_LOSE_2", "BJACK_BJ");
							}
						}
						else if (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 <= 0)
						{
							if (iVar54 > 21)
							{
								if (!func_95("BJACK_LOSE_3", "BJACK_BUSTED"))
								{
									func_94("BJACK_LOSE_3", "BJACK_BUSTED");
								}
							}
							else if (!func_319("BJACK_LOSE_1", iVar53))
							{
								func_93("BJACK_LOSE_1", iVar53);
							}
						}
						else if (iVar54 > 21 && iVar55 > 21)
						{
							if (!func_92("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED"))
							{
								func_91("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED");
							}
						}
						else if (!func_319("BJACK_LOSE_1", iVar53))
						{
							func_93("BJACK_LOSE_1", iVar53);
						}
					}
					if (!MISC::IS_BIT_SET(iLocal_3693, 0))
					{
						if (bVar60)
						{
							Local_3652.f_17++;
						}
						MISC::SET_BIT(&iLocal_3693, 0);
					}
					if (!MISC::IS_BIT_SET(iLocal_3693, 1))
					{
						if (bVar61)
						{
							Local_3652.f_17++;
						}
						MISC::SET_BIT(&iLocal_3693, 1);
					}
					if (!MISC::IS_BIT_SET(iLocal_3693, 2))
					{
						if (iVar57 == 7 && iVar54 <= 21)
						{
							Local_3652.f_20++;
						}
						MISC::SET_BIT(&iLocal_3693, 2);
					}
					if (!MISC::IS_BIT_SET(iLocal_3693, 3))
					{
						if (iVar58 == 7 && iVar55 <= 21)
						{
							Local_3652.f_20++;
						}
						MISC::SET_BIT(&iLocal_3693, 3);
					}
					if (!MISC::IS_BIT_SET(iLocal_3693, 4))
					{
						if (iVar54 > 21)
						{
							Local_3652.f_19++;
						}
						MISC::SET_BIT(&iLocal_3693, 4);
					}
					if (!MISC::IS_BIT_SET(iLocal_3693, 5))
					{
						if (iVar55 > 21)
						{
							Local_3652.f_19++;
						}
						MISC::SET_BIT(&iLocal_3693, 5);
					}
					if (!MISC::IS_BIT_SET(iLocal_3693, 6))
					{
						if (bVar59)
						{
							Local_3652.f_16++;
						}
						MISC::SET_BIT(&iLocal_3693, 6);
					}
					if (bVar59 && !bVar60)
					{
						if (!Local_2039.f_232)
						{
							func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_3626.f_4 = 1183160994;
							Local_3626.f_25 = 1183160994;
							Local_3652.f_14++;
							Local_2039.f_232 = 1;
							Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
						}
					}
					else if (iVar54 <= 21)
					{
						if (bVar60 && !bVar59)
						{
							if (!Local_2039.f_232)
							{
								Local_3652.f_3 = (Local_3652.f_3 + SYSTEM::FLOOR((IntToFloat(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1) * 2.5f)));
								Local_3626.f_6 = (Local_3626.f_6 + SYSTEM::FLOOR((IntToFloat(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1) * 2.5f)));
								Local_3626.f_14 = (Local_3626.f_14 + SYSTEM::FLOOR((IntToFloat(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1) * 2.5f)));
								Local_3626.f_15 = 1;
								Local_3652.f_13++;
								Local_3626.f_4 = -67503841;
								Local_3626.f_25 = -67503841;
								Local_2039.f_232 = 1;
								Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (iVar57 == 7 && !bVar59)
						{
							if (!Local_2039.f_232)
							{
								Local_3652.f_3 = (Local_3652.f_3 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3626.f_6 = (Local_3626.f_6 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3626.f_14 = (Local_3626.f_14 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3626.f_15 = 1;
								Local_3652.f_13++;
								Local_3626.f_4 = 579613221;
								Local_3626.f_25 = 579613221;
								Local_2039.f_232 = 1;
								Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (iVar54 > iVar53 || iVar53 > 21)
						{
							if (!Local_2039.f_232)
							{
								Local_3626.f_25 = -562306862;
								Local_3652.f_3 = (Local_3652.f_3 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3626.f_6 = (Local_3626.f_6 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3626.f_14 = (Local_3626.f_14 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_3626.f_15 = 1;
								Local_3652.f_13++;
								Local_3626.f_4 = -562306862;
								Local_3626.f_25 = -562306862;
								Local_2039.f_232 = 1;
								Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (iVar54 < iVar53 || (bVar59 && !bVar60))
						{
							if (!Local_2039.f_232)
							{
								func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1);
								Local_3626.f_4 = -1851302466;
								Local_3626.f_25 = -1851302466;
								Local_3652.f_14++;
								Local_2039.f_232 = 1;
								Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (!Local_2039.f_232)
						{
							Local_3626.f_25 = 1960114521;
							Local_3626.f_4 = 1960114521;
							Local_3652.f_3 = (Local_3652.f_3 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_3626.f_6 = (Local_3626.f_6 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_3626.f_14 = (Local_3626.f_14 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_3626.f_15 = 0;
							Local_2039.f_232 = 1;
							func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
						}
					}
					else if (!Local_2039.f_232)
					{
						func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1);
						Local_3626.f_4 = -1052705919;
						Local_3626.f_25 = -1052705919;
						Local_3652.f_14++;
						Local_2039.f_232 = 1;
						Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
					}
					if (MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 14))
					{
						if (bVar59 && !bVar61)
						{
							if (!Local_2039.f_233)
							{
								func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2);
								if (Local_3626.f_25 == -1052705919)
								{
									Local_3626.f_4 = 1702151977;
									Local_3626.f_25 = 1702151977;
								}
								else if (Local_3626.f_25 == 579613221)
								{
									Local_3626.f_4 = -2136370424;
									Local_3626.f_25 = -2136370424;
								}
								else if (Local_3626.f_25 == -1851302466)
								{
									Local_3626.f_4 = -1858785397;
									Local_3626.f_25 = -1858785397;
								}
								else if (Local_3626.f_25 == -562306862)
								{
									Local_3626.f_4 = 1946656957;
									Local_3626.f_25 = 1946656957;
								}
								else if (Local_3626.f_25 == -67503841)
								{
									Local_3626.f_4 = -2105313098;
									Local_3626.f_25 = -2105313098;
								}
								else if (Local_3626.f_25 == 1960114521)
								{
									Local_3626.f_4 = -185627827;
									Local_3626.f_25 = -185627827;
								}
								else if (Local_3626.f_25 == 1183160994)
								{
									Local_3626.f_4 = -1498042471;
									Local_3626.f_25 = -1498042471;
								}
								Local_3652.f_14++;
								Local_2039.f_233 = 1;
								Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
							}
						}
						else if (iVar55 <= 21)
						{
							if (bVar61 && !bVar59)
							{
								if (!Local_2039.f_233)
								{
									Local_3652.f_3 = (Local_3652.f_3 + SYSTEM::FLOOR((IntToFloat(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2) * 2.5f)));
									Local_3626.f_6 = (Local_3626.f_6 + SYSTEM::FLOOR((IntToFloat(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2) * 2.5f)));
									Local_3626.f_14 = (Local_3626.f_14 + SYSTEM::FLOOR((IntToFloat(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2) * 2.5f)));
									Local_3626.f_15 = 1;
									Local_3652.f_13++;
									if (Local_3626.f_25 == -1052705919)
									{
										Local_3626.f_4 = 124952027;
										Local_3626.f_25 = 124952027;
									}
									else if (Local_3626.f_25 == 579613221)
									{
										Local_3626.f_4 = 670083824;
										Local_3626.f_25 = 670083824;
									}
									else if (Local_3626.f_25 == -1851302466)
									{
										Local_3626.f_4 = 446908156;
										Local_3626.f_25 = 446908156;
									}
									else if (Local_3626.f_25 == -562306862)
									{
										Local_3626.f_4 = -1508284701;
										Local_3626.f_25 = -1508284701;
									}
									else if (Local_3626.f_25 == -67503841)
									{
										Local_3626.f_4 = 179647057;
										Local_3626.f_25 = 179647057;
									}
									else if (Local_3626.f_25 == 1960114521)
									{
										Local_3626.f_4 = -890276844;
										Local_3626.f_25 = -890276844;
									}
									else if (Local_3626.f_25 == 1183160994)
									{
										Local_3626.f_4 = 1647364704;
										Local_3626.f_25 = 1647364704;
									}
									Local_2039.f_233 = 1;
									Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (iVar58 == 7 && !bVar59)
							{
								if (!Local_2039.f_233)
								{
									Local_3652.f_3 = (Local_3652.f_3 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3626.f_6 = (Local_3626.f_6 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3626.f_14 = (Local_3626.f_14 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3626.f_15 = 1;
									Local_3652.f_13++;
									if (Local_3626.f_25 == -1052705919)
									{
										Local_3626.f_4 = -1196919212;
										Local_3626.f_25 = -1196919212;
									}
									else if (Local_3626.f_25 == 579613221)
									{
										Local_3626.f_4 = 505925496;
										Local_3626.f_25 = 505925496;
									}
									else if (Local_3626.f_25 == -1851302466)
									{
										Local_3626.f_4 = 2012692421;
										Local_3626.f_25 = 2012692421;
									}
									else if (Local_3626.f_25 == -562306862)
									{
										Local_3626.f_4 = 326925312;
										Local_3626.f_25 = 326925312;
									}
									else if (Local_3626.f_25 == -67503841)
									{
										Local_3626.f_4 = 487743337;
										Local_3626.f_25 = 487743337;
									}
									else if (Local_3626.f_25 == 1960114521)
									{
										Local_3626.f_4 = 526318358;
										Local_3626.f_25 = 526318358;
									}
									else if (Local_3626.f_25 == 1183160994)
									{
										Local_3626.f_4 = -1506449922;
										Local_3626.f_25 = -1506449922;
									}
									Local_2039.f_233 = 1;
									Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (iVar55 > iVar53 || iVar53 > 21)
							{
								if (!Local_2039.f_233)
								{
									Local_3652.f_3 = (Local_3652.f_3 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3626.f_6 = (Local_3626.f_6 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3626.f_14 = (Local_3626.f_14 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_3626.f_15 = 1;
									Local_3652.f_13++;
									if (Local_3626.f_25 == -1052705919)
									{
										Local_3626.f_4 = -1738969561;
										Local_3626.f_25 = -1738969561;
									}
									else if (Local_3626.f_25 == 579613221)
									{
										Local_3626.f_4 = -67385374;
										Local_3626.f_25 = -67385374;
									}
									else if (Local_3626.f_25 == -1851302466)
									{
										Local_3626.f_4 = 299063546;
										Local_3626.f_25 = 299063546;
									}
									else if (Local_3626.f_25 == -562306862)
									{
										Local_3626.f_4 = 639742496;
										Local_3626.f_25 = 639742496;
									}
									else if (Local_3626.f_25 == -67503841)
									{
										Local_3626.f_4 = -833750355;
										Local_3626.f_25 = -833750355;
									}
									else if (Local_3626.f_25 == 1960114521)
									{
										Local_3626.f_4 = 656184401;
										Local_3626.f_25 = 656184401;
									}
									else if (Local_3626.f_25 == 1183160994)
									{
										Local_3626.f_4 = 1380168920;
										Local_3626.f_25 = 1380168920;
									}
									Local_2039.f_233 = 1;
									Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (iVar55 < iVar53 || (bVar59 && !bVar61))
							{
								if (!Local_2039.f_233)
								{
									func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2);
									if (Local_3626.f_25 == -1052705919)
									{
										Local_3626.f_4 = 1702151977;
										Local_3626.f_25 = 1702151977;
									}
									else if (Local_3626.f_25 == 579613221)
									{
										Local_3626.f_4 = -2136370424;
										Local_3626.f_25 = -2136370424;
									}
									else if (Local_3626.f_25 == -1851302466)
									{
										Local_3626.f_4 = -1858785397;
										Local_3626.f_25 = -1858785397;
									}
									else if (Local_3626.f_25 == -562306862)
									{
										Local_3626.f_4 = 1946656957;
										Local_3626.f_25 = 1946656957;
									}
									else if (Local_3626.f_25 == -67503841)
									{
										Local_3626.f_4 = -2105313098;
										Local_3626.f_25 = -2105313098;
									}
									else if (Local_3626.f_25 == 1960114521)
									{
										Local_3626.f_4 = -185627827;
										Local_3626.f_25 = -185627827;
									}
									else if (Local_3626.f_25 == 1183160994)
									{
										Local_3626.f_4 = -1498042471;
										Local_3626.f_25 = -1498042471;
									}
									Local_3652.f_14++;
									Local_2039.f_233 = 1;
									Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (!Local_2039.f_233)
							{
								Local_3652.f_3 = (Local_3652.f_3 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2);
								Local_3626.f_6 = (Local_3626.f_6 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2);
								Local_3626.f_14 = (Local_3626.f_14 + Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2);
								Local_3626.f_15 = 1;
								func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2);
								if (Local_3626.f_25 == -1052705919)
								{
									Local_3626.f_4 = -546469405;
									Local_3626.f_25 = -546469405;
								}
								else if (Local_3626.f_25 == 579613221)
								{
									Local_3626.f_4 = -1749032290;
									Local_3626.f_25 = -1749032290;
								}
								else if (Local_3626.f_25 == -1851302466)
								{
									Local_3626.f_4 = 1067415172;
									Local_3626.f_25 = 1067415172;
								}
								else if (Local_3626.f_25 == -562306862)
								{
									Local_3626.f_4 = 297125168;
									Local_3626.f_25 = 297125168;
								}
								else if (Local_3626.f_25 == -67503841)
								{
									Local_3626.f_4 = 2030981611;
									Local_3626.f_25 = 2030981611;
								}
								else if (Local_3626.f_25 == 1960114521)
								{
									Local_3626.f_4 = -684984318;
									Local_3626.f_25 = -684984318;
								}
								else if (Local_3626.f_25 == 1183160994)
								{
									Local_3626.f_4 = 497946612;
									Local_3626.f_25 = 497946612;
								}
								Local_2039.f_233 = 1;
								Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
							}
						}
						else if (!Local_2039.f_233)
						{
							func_189(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2);
							if (Local_3626.f_25 == -1052705919)
							{
								Local_3626.f_4 = 1449908402;
								Local_3626.f_25 = 1449908402;
							}
							else if (Local_3626.f_25 == 579613221)
							{
								Local_3626.f_4 = 1210238154;
								Local_3626.f_25 = 1210238154;
							}
							else if (Local_3626.f_25 == -1851302466)
							{
								Local_3626.f_4 = 1540383360;
								Local_3626.f_25 = 1540383360;
							}
							else if (Local_3626.f_25 == -562306862)
							{
								Local_3626.f_4 = -457084933;
								Local_3626.f_25 = -457084933;
							}
							else if (Local_3626.f_25 == -67503841)
							{
								Local_3626.f_4 = -740134090;
								Local_3626.f_25 = -740134090;
							}
							else if (Local_3626.f_25 == 1960114521)
							{
								Local_3626.f_4 = -1825077928;
								Local_3626.f_25 = -1825077928;
							}
							else if (Local_3626.f_25 == 1183160994)
							{
								Local_3626.f_4 = 1676117351;
								Local_3626.f_25 = 1676117351;
							}
							Local_3652.f_14++;
							Local_2039.f_233 = 1;
							Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
						}
					}
					else
					{
						Local_2039.f_233 = 1;
					}
				}
			}
			break;
	}
}

void func_91(char* sParam0, char* sParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_92(char* sParam0, char* sParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_93(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

void func_94(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_95(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_96(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_97(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_98(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_99(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_100(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_101(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_102(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_103(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_104(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_105(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_106(int iParam0, var uParam1, int iParam2)
{
	return func_107(iParam0, 3, uParam1, iParam2, -1);
}

int func_107(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_402();
		iVar1 = (Global_262145.f_26469 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_147();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_128(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_402() - Global_1696913);
			func_127(iVar4, 1);
			func_125();
			func_124();
			Global_1696913 = (Global_1696913 + iVar4);
			if (iParam1 == 0)
			{
				func_118(iVar4);
				Global_2462411 = 1;
			}
			else if (iParam1 == 3)
			{
				func_111(iVar4);
				if (iVar4 >= Global_262145.f_26477)
				{
					Global_2462410 = 1;
				}
				else if (iVar4 >= Global_262145.f_26476)
				{
					Global_2462411 = 1;
				}
			}
			Var5 = func_110(iParam1);
			Var5.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1696913;
			STATS::_PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_115();
	if (iVar0 == 0)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26471)
	{
		func_113();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26473)
	{
		func_112(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26473);
		func_113();
		Global_2462411 = 1;
	}
	else
	{
		func_112(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

void func_113()
{
	func_114();
}

void func_114()
{
	func_112(joaat("mpply_casino_chips_wontim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_115()
{
	return func_116(joaat("mpply_casino_chips_won_gd"));
}

int func_116(int iParam0)
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

int func_117()
{
	return func_116(joaat("mpply_casino_chips_wontim"));
}

void func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_123();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_122();
	if (iVar0 == 0)
	{
		func_121();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26470)
	{
		func_120();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_119()
	{
		func_112(joaat("mpply_casino_chips_pur_gd"), func_119());
		func_120();
	}
	else
	{
		func_112(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_119()
{
	if (func_325(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26265;
	}
	return Global_262145.f_26264;
}

void func_120()
{
	func_121();
}

void func_121()
{
	func_112(joaat("mpply_casino_chips_purtim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_122()
{
	return func_116(joaat("mpply_casino_chips_pur_gd"));
}

int func_123()
{
	return func_116(joaat("mpply_casino_chips_purtim"));
}

void func_124()
{
	if (MISC::IS_BIT_SET(Global_1696952, 6))
	{
		MISC::SET_BIT(&Global_1696952, 9);
		func_367(&Global_1696955, 0, 0);
	}
}

void func_125()
{
	if (func_126())
	{
		MISC::SET_BIT(&Global_1696952, 1);
	}
}

bool func_126()
{
	return (MISC::IS_BIT_SET(Global_1696952, 6) || MISC::IS_BIT_SET(Global_1696952, 5));
}

void func_127(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1696952, 6);
	Global_1696953 = iParam0;
	Global_1696954 = iParam1;
}

bool func_128(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_108(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_146())
	{
		if (*uParam0 == 0)
		{
			if (func_145() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_110(iParam1);
			iVar5 = -22148635;
			if (func_149(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_141(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_141(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_136())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_135(func_145()))
			{
				if (func_134(func_145()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_133(func_145()));
					if (func_149(iParam1))
					{
						MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_129(func_145());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		if (func_149(iParam1))
		{
			MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_129(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_132(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_130(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_130(var uParam0)
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
	func_131(&(uParam0->f_14));
	func_131(&(uParam0->f_14.f_13));
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

void func_131(var uParam0)
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

int func_132(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_134(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_136()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_145();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_140(Global_4264051[iVar2 /*85*/].f_66.f_6, Global_4264051[iVar2 /*85*/].f_66.f_4, Global_4264051[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4265553 = 1;
			}
			return 0;
		}
		if (Global_2463638)
		{
			if (Global_4264051[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4264051[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_133(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4264051[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4264051[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4264051[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4264051[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4264051[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_137(Global_4264051[iVar2 /*85*/], iVar2);
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	return 0;
}

void func_137(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_139(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_138();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_138()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_139(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_140(int iParam0, int iParam1, int iParam2)
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
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
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
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
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
			case 1668610896:
			case -2032529561:
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
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
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
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463638)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_145();
	if (iVar1 == -1)
	{
		if (!func_143(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_142(iParam1))
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
		Global_4264051[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4264051[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4264051[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_142(int iParam0)
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

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463638)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4264051[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4264051[iVar1 /*85*/].f_66.f_5 == 1)
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
		if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
		{
			NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_144(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_144(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_146())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = uParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_137(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_145()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_133(iVar0) != 2147483647)
		{
			if (func_132(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_146()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_147()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_119() - func_122());
	iVar1 = (Global_262145.f_26469 - func_402());
	iVar2 = func_148();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2())
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
	}
	return iVar1;
}

int func_149(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_150()
{
	if (func_151())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_151()
{
	return func_51(PLAYER::PLAYER_ID());
}

char* func_152()
{
	if (func_151())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_153(int iParam0)
{
	if (func_151())
	{
		if ((func_425(PLAYER::PLAYER_ID()) || func_382(Local_2039.f_247) == 2) || func_382(Local_2039.f_247) == 3)
		{
			if (iParam0 > 10000 && Local_3626.f_4 != 1960114521)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000 || Local_3626.f_4 == 1960114521)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000 && Local_3626.f_4 != 1960114521)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000 || Local_3626.f_4 == 1960114521)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_425(PLAYER::PLAYER_ID()) || func_382(Local_2039.f_247) == 2) || func_382(Local_2039.f_247) == 3)
	{
		if (iParam0 > 10000 && Local_3626.f_4 != 1960114521)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000 || Local_3626.f_4 == 1960114521)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000 && Local_3626.f_4 != 1960114521)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000 || Local_3626.f_4 == 1960114521)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

char* func_154()
{
	if (func_151())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "female_reaction_bad_var_01";
			
			case 1:
				return "female_reaction_bad_var_02";
			
			case 2:
				return "female_reaction_bad_var_03";
			
			case 3:
				return "female_reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_155(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_158(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_157(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_156(3, iVar0);
		Global_1378744.f_2775[iVar0] = uParam0;
		StringCopy(&(Global_1378744.f_2775.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_2775.f_183[iVar0] = iParam3;
		Global_1378744.f_2775.f_172[iVar0] = iParam2;
		Global_1378744.f_2775.f_205[iVar0] = iParam4;
		Global_1378744.f_2775.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_2775.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_2775.f_420[iVar0] = iParam7;
		Global_1378744.f_2775.f_453[iVar0] = iParam8;
		Global_1378744.f_2775.f_431[iVar0] = iParam9;
		Global_1378744.f_2775.f_442[iVar0] = iParam10;
		Global_1378744.f_2775.f_464[iVar0] = iParam11;
		Global_1378744.f_2775.f_475[iVar0] = iParam12;
		Global_1378744.f_2775.f_486[iVar0] = iParam13;
		Global_1378744.f_2775.f_497[iVar0] = iParam14;
	}
}

void func_156(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_157(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378744.f_6304[iParam0], iParam1);
}

int func_158(char* sParam0)
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

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_157(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_156(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

int func_160(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_146() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_162(iParam0))
	{
		return func_161(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_161(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_402();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_146() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_128(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1696913 - func_402());
			if (iParam1 == 1)
			{
				Global_2462410 = 1;
			}
			else if (iVar2 >= Global_262145.f_26478)
			{
				Global_2462411 = 1;
			}
			func_127(iVar2, 0);
			func_125();
			func_124();
			Global_1696913 = (Global_1696913 - iVar2);
			Var3 = func_110(iParam1);
			Var3.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var3.f_6 = Global_1696913;
			Var3.f_7 = iParam5;
			STATS::_PLAYSTATS_CASINO_CHIP(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (func_330())
	{
		return 0;
	}
	iVar0 = func_402();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_163(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

char* func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (bParam1)
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_split";
				}
			
			default:
		}
		return "place_bet_small_split";
	}
	if (((Local_2039.f_247 == 1 || Local_2039.f_247 == 5) || Local_2039.f_247 == 9) || Local_2039.f_247 == 13)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down_player_02";
					
					default:
				}
			}
			else
			{
				return "place_bet_small_player_02";
			}
		}
		if (!bParam1)
		{
			return "place_bet_small_player_02";
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_player_02";
				
				default:
			}
			return "place_bet_small_player_02";
		}
	}
	else
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down";
					
					default:
				}
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "place_bet_small";
					
					case 1:
						return "place_bet_small_alt1";
					
					case 2:
						return "place_bet_small_alt2";
					
					case 3:
						return "place_bet_small_alt3";
					}
				}
			
			default:
		}
		if (!bParam1)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large";
				
				default:
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				}
			}
		
		default:
	}
	return "";
}

void func_165(int iParam0)
{
	Local_2039 = iParam0;
}

void func_166()
{
	char* sVar0;
	
	if (MISC::IS_BIT_SET(Local_2039.f_250, 2))
	{
		MISC::CLEAR_BIT(&(Local_2039.f_250), 2);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 210, true);
	PAD::SET_INPUT_EXCLUSIVE(2, 210);
	if (!MISC::IS_BIT_SET(Local_2039.f_250, 0))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_2039.f_250), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_382(Local_2039.f_247) == 2 || func_382(Local_2039.f_247) == 3) || func_425(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (func_293(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!MISC::IS_BIT_SET(Local_2039.f_250, 1))
			{
				func_292(0, 0);
				func_290(1, sVar0, sVar0);
				func_289("BJACK_RULES");
				func_170(1, iLocal_3680, 9);
				func_169(1, 1, 1, 1, 1);
				func_288(-1, 1, 1);
				func_287(func_168(iLocal_3680), 0, 0);
				func_286(func_167(iLocal_3680));
				MISC::SET_BIT(&(Local_2039.f_250), 1);
			}
			func_247(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_244(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_3680 = 1;
			Local_2039.f_250 = 0;
			MISC::SET_BIT(&(Local_2039.f_250), 2);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 190))
		{
			iLocal_3680++;
			if (iLocal_3680 > 9)
			{
				iLocal_3680 = 1;
			}
			MISC::CLEAR_BIT(&(Local_2039.f_250), 1);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 189))
		{
			iLocal_3680 = (iLocal_3680 - 1);
			if (iLocal_3680 < 1)
			{
				iLocal_3680 = 9;
			}
			MISC::CLEAR_BIT(&(Local_2039.f_250), 1);
		}
	}
}

char* func_167(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1";
		
		case 2:
			return "BJACK_RULE_2";
		
		case 3:
			return "BJACK_RULE_3";
		
		case 4:
			return "BJACK_RULE_4";
		
		case 5:
			return "BJACK_RULE_5";
		
		case 6:
			return "BJACK_RULE_6";
		
		case 7:
			return "BJACK_RULE_7";
		
		case 8:
			return "BJACK_RULE_8";
		
		case 9:
			if ((func_382(Local_2039.f_247) == 2 || func_382(Local_2039.f_247) == 3) || func_425(PLAYER::PLAYER_ID()))
			{
				return "BJACK_RULE_9b";
			}
			else
			{
				return "BJACK_RULE_9a";
			}
			break;
	}
	return "";
}

char* func_168(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1T";
		
		case 2:
			return "BJACK_RULE_2T";
		
		case 3:
			return "BJACK_RULE_3T";
		
		case 4:
			return "BJACK_RULE_4T";
		
		case 5:
			return "BJACK_RULE_5T";
		
		case 6:
			return "BJACK_RULE_6T";
		
		case 7:
			return "BJACK_RULE_7T";
		
		case 8:
			return "BJACK_RULE_8T";
		
		case 9:
			if ((func_382(Local_2039.f_247) == 2 || func_382(Local_2039.f_247) == 3) || func_425(PLAYER::PLAYER_ID()))
			{
				return "BJACK_RULE_9Tb";
			}
			else
			{
				return "BJACK_RULE_9Ta";
			}
			break;
	}
	return "";
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5075[0] = iParam0;
	Global_22550.f_5075[1] = iParam1;
	Global_22550.f_5075[2] = iParam2;
	Global_22550.f_5075[3] = iParam3;
	Global_22550.f_5075[4] = iParam4;
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	Global_22550.f_5735 = iParam0;
	Global_22550.f_5736 = iParam1;
	Global_22550.f_5737 = iParam2;
}

void func_171(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_172(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_178(uParam2);
	}
	if (Global_1315735 < 2)
	{
		func_177(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (MISC::IS_BIT_SET(uParam2->f_689, iVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					if (!MISC::IS_BIT_SET(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_176(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_176(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_176(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar4, iVar5, true));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_175(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (MISC::IS_BIT_SET(uParam2->f_691, iVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[iVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					func_176(&(uParam2->f_1[iVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_176(&(uParam2->f_1[iVar0 /*57*/].f_16));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_175(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_174(*uParam0, uParam1);
	}
	func_173();
}

void func_173()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_174(int iParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_175(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_176(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_177(int iParam0)
{
	Global_1315735 = iParam0;
}

void func_178(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_179(var uParam0)
{
	return uParam0->f_692;
}

void func_180(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_181()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_182(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	MISC::SET_BIT(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_183(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_184(var uParam0)
{
	func_185(uParam0);
	uParam0->f_692 = 1;
}

void func_185(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

var func_186(bool bParam0)
{
	if (func_151())
	{
		if (!bParam0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					Local_2039.f_1582 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_2039.f_1582 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_2039.f_1582 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_2039.f_1582 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_2039.f_1582 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_2039.f_1582 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_2039.f_1582 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_2039.f_1582 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
		{
			case 0:
				Local_2039.f_1582 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_2039.f_1582 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_2039.f_1582 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_2039.f_1582 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_2039.f_1582 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_2039.f_1582 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_2039.f_1582 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_2039.f_1582 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_2039.f_1582 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_2039.f_1582 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_2039.f_1582 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_2039.f_1582 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_2039.f_1582 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_2039.f_1582;
}

int func_187()
{
	if (func_188() == 0)
	{
		return 1;
	}
	return 0;
}

int func_188()
{
	return Global_1312485.f_18;
}

void func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_115();
	if (iVar0 == 0)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26471)
	{
		func_113();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26472)
	{
		func_112(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26472);
		func_113();
		Global_2462411 = 1;
	}
	else
	{
		func_112(joaat("mpply_casino_chips_won_gd"), (iVar2 - iParam0));
	}
}

int func_190(var uParam0, bool bParam1, bool bParam2)
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

int func_191()
{
	if ((Local_2039.f_232 && Local_2039.f_233) && (!Local_2039.f_235 && Local_3626.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_193())
	{
		return NETWORK::_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	return 0;
}

int func_193()
{
	return -1;
}

void func_194()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	int iVar24;
	
	if (!PAD::IS_CONTROL_PRESSED(2, 207))
	{
		if (bLocal_3690)
		{
			func_297(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_3690 = false;
	}
	if (!PAD::IS_CONTROL_PRESSED(2, 208))
	{
		if (bLocal_3689)
		{
			func_297(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_3689 = false;
	}
	if ((((Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0 && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_334()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && (Local_122.f_1515[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] < 9 || !MISC::IS_BIT_SET(Local_122.f_1555[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4], 13)))
	{
		if (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2, 207) && !PAD::IS_CONTROL_PRESSED(2, 208)) && !bLocal_3689) && !func_66(&uLocal_3691)) && !CAM::DOES_CAM_EXIST(Local_2039.f_242))
			{
				if (!bLocal_3690)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
					}
					func_297(PLAYER::PLAYER_ID(), 0, 0, 0);
					bLocal_3690 = true;
				}
			}
		}
		else
		{
			if (bLocal_3690)
			{
				func_297(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_3690 = false;
		}
		if (Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 >= 2)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2, 208) && !PAD::IS_CONTROL_PRESSED(2, 207)) && !bLocal_3690) && !func_66(&uLocal_3691)) && !CAM::DOES_CAM_EXIST(Local_2039.f_242))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_297(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				bLocal_3689 = true;
			}
		}
		else
		{
			if (bLocal_3689)
			{
				func_297(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_3689 = false;
		}
	}
	else
	{
		if (bLocal_3690 || bLocal_3689)
		{
			func_297(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_3690 = false;
		bLocal_3689 = false;
	}
	if (bLocal_3689 || bLocal_3690)
	{
		CAM::_0x469F2ECDEC046337(true);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 166, true);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!CAM::DOES_CAM_EXIST(Local_2039.f_242))
		{
			Local_2039.f_242 = CAM::CREATE_CAMERA(26379945, true);
			CAM::SET_CAM_PARAMS(Local_2039.f_242, func_207(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_3689), func_206(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_3689), func_205(bLocal_3689), 0, 1, 1, 2);
			CAM::SHAKE_CAM(Local_2039.f_242, "HAND_SHAKE", 0.03f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else if (bLocal_3689)
		{
			if (Local_122.f_1525[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4])
			{
				if (func_27(&(Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/])) == 21 && Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 == 2)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BJ"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/])) > 21)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BUSTED"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BUSTED");
					}
				}
				else if (!func_319("BJACK_D_HAND1", func_27(&(Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/]))))
				{
					func_93("BJACK_D_HAND1", func_27(&(Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/])));
				}
			}
			else if (!func_319("BJACK_D_HAND1", func_35(Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/][1])))
			{
				func_93("BJACK_D_HAND1", func_35(Local_122.f_846[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/][1]));
			}
			fVar0 = CAM::GET_CAM_FOV(Local_2039.f_242);
			fVar1 = 50f;
			fVar1 = func_204(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3, 1);
			fVar0 = func_202(fVar0, fVar1, 0.2f, 4);
			CAM::SET_CAM_PARAMS(Local_2039.f_242, func_207(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_3689), func_206(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_3689), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_3690)
		{
			fVar4 = CAM::GET_CAM_FOV(Local_2039.f_242);
			fVar5 = 50f;
			Var6 = { CAM::GET_CAM_ROT(Local_2039.f_242, 2) };
			Var9 = { 0f, 0f, 0f };
			Var12 = { -38.1166f, -0.0930717f, -102.613f };
			Var15 = { CAM::GET_CAM_COORD(Local_2039.f_242) };
			Var18 = { 0f, 0f, 0f };
			Var21 = { 966.621f, 32.009f, 116.621f };
			if (Var6.f_2 < 0f)
			{
				Var6.f_2 = (Var6.f_2 + 360f);
			}
			if (!func_66(&uLocal_3687))
			{
				iVar24 = PAD::GET_CONTROL_VALUE(2, 30);
				bVar2 = iVar24 < 100;
				bVar3 = iVar24 > 150;
				if (bVar2 || bVar3)
				{
					func_67(&uLocal_3687, 0, 0);
				}
			}
			else if (func_65(&uLocal_3687, 500, 0))
			{
				func_63(&uLocal_3687);
			}
			if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0 && Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] > 1)
			{
				if (bVar2)
				{
					iLocal_3682 = (iLocal_3682 - 1);
					if (iLocal_3682 < func_201(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3))
					{
						iLocal_3682 = func_201(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3);
					}
				}
				if (bVar3)
				{
					iLocal_3682++;
					if (iLocal_3682 > func_200(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3))
					{
						iLocal_3682 = func_200(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3);
					}
				}
			}
			else
			{
				iLocal_3682 = 0;
			}
			Var21 = { func_207(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3, Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, 0) };
			Var12 = { func_199(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3) };
			fVar5 = func_204(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3, 0);
			if (Var12.f_2 < 0f)
			{
				Var12.f_2 = (Var12.f_2 + 360f);
			}
			Var9 = { func_197(Var6, Var12, 0.2f, 4) };
			Var18 = { func_196(Var15, Var21, 0.2f, 4) };
			if (Var9.f_2 > 180f)
			{
				Var9.f_2 = (Var9.f_2 - 360f);
			}
			else if (Var9.f_2 < -180f)
			{
				Var9.f_2 = (Var9.f_2 + 360f);
			}
			if (func_195(Var6, Var12, 10f, 0) && func_195(Var15, Var21, 0.1f, 0))
			{
				fVar4 = func_202(fVar4, fVar5, 0.2f, 4);
			}
			CAM::SET_CAM_PARAMS(Local_2039.f_242, Var18, Var9, fVar4, 0, 1, 1, 2);
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (CAM::DOES_CAM_EXIST(Local_2039.f_242))
		{
			CAM::_0x469F2ECDEC046337(true);
			if (!func_66(&uLocal_3691) && bLocal_3681)
			{
				func_67(&uLocal_3691, 0, 0);
				GRAPHICS::ANIMPOSTFX_PLAY("DefaultBlinkOutro", 0, false);
			}
			else if (func_65(&uLocal_3691, 100, 0) || !bLocal_3681)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(Local_2039.f_242, false);
				HUD::CLEAR_HELP(true);
				func_63(&uLocal_3691);
				bLocal_3681 = false;
				iLocal_3682 = 0;
			}
		}
	}
	if (bLocal_3690 || bLocal_3681)
	{
		if ((Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 >= 2 && ((!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 13) && !MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 11)) || (((MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 11) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_14(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4, Local_122.f_1575[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4], 1), 3)))) || (MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/], 11) && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 < 3))
		{
			if (func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BJ");
				}
			}
			else if (func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
				{
					func_94("BJACK_P_HAND2", "BJACK_7CC");
				}
			}
			else if (func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) > 21)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BUSTED");
				}
			}
			else if (!func_319("BJACK_P_HAND1", func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
			{
				func_93("BJACK_P_HAND1", func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])));
			}
		}
		else if (Local_122.f_1575[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4] != (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)) && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 >= 2)
		{
			if (func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
			{
				if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
			{
				if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])) > 21)
			{
				if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (!func_103("BJACK_SHOW_1", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])), func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
			{
				func_102("BJACK_SHOW_1", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])), func_27(&(Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/])));
			}
		}
		else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BJ");
			}
		}
		else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
			{
				func_94("BJACK_P_HAND2", "BJACK_7CC");
			}
		}
		else if (func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BUSTED");
			}
		}
		else if (!func_319("BJACK_P_HAND1", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/]))))
		{
			func_93("BJACK_P_HAND1", func_27(&(Local_122.f_899[PLAYER::PLAYER_ID() /*9*/])));
		}
	}
}

int func_195(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_196(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<3> Var0;
	
	Var0.x = func_202(Param0.x, Param3.x, fParam6, iParam7);
	Var0.f_1 = func_202(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_202(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

Vector3 func_197(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<3> Var0;
	
	Var0.x = func_198(Param0.x, Param3.x, fParam6, iParam7);
	Var0.f_1 = func_198(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_198(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

float func_198(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = MISC::ABSF((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_202(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_199(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_217(iParam0) };
	Var3 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_3682)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case -1:
					Var3 = { -33.84f, 0f, -51.84f };
					break;
				
				case -2:
					Var3 = { -22.68f, 0f, -58.68f };
					break;
				
				case -3:
					Var3 = { -18f, 0f, -72f };
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_3682)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var3 = { -33.48f, 0f, -123.48f };
					break;
				
				case -1:
					Var3 = { -36f, 0f, -45f };
					break;
				
				case -2:
					Var3 = { -22.68f, 0f, -51.48f };
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_3682)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var3 = { -33.84f, 0f, -130.32f };
					break;
				
				case 2:
					Var3 = { -22.32f, 0f, -124.92f };
					break;
				
				case -1:
					Var3 = { -35.64f, 0f, -50.4f };
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_3682)
			{
				case 0:
					Var3 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var3 = { -34.56f, 0f, -126f };
					break;
				
				case 2:
					Var3 = { -22.32f, 0f, -119.52f };
					break;
				
				case 3:
					Var3 = { -18.36f, 0f, -104.4f };
					break;
			}
			break;
	}
	return Vector(Var0.f_2, 0f, 0f) + Var3;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 0;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 1;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 2;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return -3;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return -2;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return -1;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 0;
		
		default:
	}
	return 0;
}

float func_202(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(func_203((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_202(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_202(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_203(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_204(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = 50f;
	if (bParam1)
	{
		return 37.8425f;
	}
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_3682)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
				
				case -3:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_3682)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_3682)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_3682)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case 3:
					fVar0 = 26.8741f;
					break;
			}
			break;
	}
	return fVar0;
}

float func_205(bool bParam0)
{
	float fVar0;
	
	fVar0 = 35.3669f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	return fVar0;
}

Vector3 func_206(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return Vector(func_69(iParam1), 0f, 0f) + Vector(0f, 0.061f, -59.1316f);
	}
	else
	{
		Var0 = { func_217(iParam0) };
		return Vector(Var0.f_2, 0f, 0f) + Vector(-87.48f, 0f, -60.84f);
	}
	return 0f, 0f, 0f;
}

Vector3 func_207(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iParam1), func_69(iParam1), -0.0094f, -0.0611f, 1.5098f);
	}
	else
	{
		Var0 = { func_217(iParam0) };
		return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_358(iParam0), Var0.f_2, 0.245f, 0f, 1.415f);
	}
	return 0f, 0f, 0f;
}

void func_208(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_209(int iParam0)
{
	if (Local_122.f_1515[iParam0] == 2)
	{
		if (!MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_5, 0))
		{
			Local_2039.f_2 = { Local_122.f_1[iParam0 /*211*/] };
			MISC::SET_BIT(&(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_5), 0);
		}
	}
	else if (Local_122.f_1515[iParam0] > 2 && MISC::IS_BIT_SET(Local_1782[PLAYER::PLAYER_ID() /*8*/].f_5, 0))
	{
		if (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
		{
			if (Local_2039.f_213.f_8 != Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 || (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 > 0 && Local_2039.f_222.f_8 != Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8))
			{
				Local_2039.f_213 = { Local_122.f_899[PLAYER::PLAYER_ID() /*9*/] };
			}
			else
			{
				if (Local_2039.f_213[iLocal_3685] != Local_122.f_899[PLAYER::PLAYER_ID() /*9*/][iLocal_3685])
				{
					iLocal_3684 = 0;
					iLocal_3685 = 0;
					iLocal_3686 = 0;
					if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
					{
						Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
					}
					Local_3626.f_18 = func_416();
					Local_3626.f_19 = func_192();
					Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
					Local_3626.f_7 = func_402();
					if (Global_262145.f_26109)
					{
						STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
					}
					func_376(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_3685++;
				if (iLocal_3685 >= Local_2039.f_213.f_8)
				{
					iLocal_3685 = 0;
				}
			}
		}
		if (Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
		{
			if (Local_2039.f_222.f_8 != Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 || (Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0 && Local_2039.f_213.f_8 != Local_122.f_899[PLAYER::PLAYER_ID() /*9*/].f_8))
			{
				Local_2039.f_222 = { Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/] };
			}
			else
			{
				if (Local_2039.f_222[iLocal_3686] != Local_122.f_1188[PLAYER::PLAYER_ID() /*9*/][iLocal_3686])
				{
					iLocal_3684 = 0;
					iLocal_3685 = 0;
					iLocal_3686 = 0;
					if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
					{
						Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
					}
					Local_3626.f_18 = func_416();
					Local_3626.f_19 = func_192();
					Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
					Local_3626.f_7 = func_402();
					if (Global_262145.f_26109)
					{
						STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
					}
					func_376(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_3686++;
				if (iLocal_3686 >= Local_2039.f_222.f_8)
				{
					iLocal_3686 = 0;
				}
			}
		}
		if (Local_122.f_1[iParam0 /*211*/][iLocal_3684] != Local_2039.f_2[iLocal_3684])
		{
			iLocal_3684 = 0;
			iLocal_3685 = 0;
			iLocal_3686 = 0;
			if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
			{
				Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
			}
			Local_3626.f_18 = func_416();
			Local_3626.f_19 = func_192();
			Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
			Local_3626.f_7 = func_402();
			if (Global_262145.f_26109)
			{
				STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
			}
			func_376(1);
			HUD::CLEAR_HELP(true);
			return 1;
		}
		iLocal_3684++;
		if (iLocal_3684 >= 208)
		{
			iLocal_3684 = 0;
		}
	}
	return 0;
}

void func_210()
{
	int iVar0;
	
	iVar0 = func_382(Local_2039.f_247);
	if (iVar0 < 32)
	{
		MISC::SET_BIT(&(Local_2039.f_254), iVar0);
	}
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_419())
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 != func_419())
	{
		return func_321(iVar0);
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_419())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_419();
}

void func_213(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_6 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_330())
		{
			func_213(uParam0, 7);
			return;
		}
	}
	uParam0->f_6 = iParam1;
	func_63(&(Local_2039.f_1580));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_67(&(Local_2039.f_1580), 0, 0);
	}
}

int func_214()
{
	int iVar0;
	
	iVar0 = func_382(Local_2039.f_247);
	if (iVar0 < 32)
	{
		return MISC::IS_BIT_SET(Local_2039.f_254, iVar0);
	}
	return 0;
}

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_216()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_217(int iParam0)
{
	int iVar0;
	
	if (Local_2039.f_257 == 1)
	{
		if (func_420() != func_419())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(func_382(iParam0)), 1f, func_218(Global_2426097[func_420() /*443*/].f_442), false, false, false);
		}
	}
	else if (func_382(iParam0) == 0 || func_382(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(func_382(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(func_382(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("h4_prop_casino_blckjack_01a");
			break;
		
		case 2:
			return joaat("h4_prop_casino_blckjack_01b");
			break;
		
		case 3:
			return joaat("h4_prop_casino_blckjack_01c");
			break;
		
		case 4:
			return joaat("h4_prop_casino_blckjack_01d");
			break;
		
		case 5:
			return joaat("h4_prop_casino_blckjack_01e");
			break;
	}
	return joaat("vw_prop_casino_blckjack_01b");
}

var func_219(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_216(), func_215(iParam1), func_358(iParam0), func_217(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

float func_220(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

Vector3 func_221(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_216(), func_215(iParam1), func_358(iParam0), func_217(iParam0), 0.01f, 2) };
	return Var0;
}

int func_222()
{
	STREAMING::REQUEST_ANIM_DICT(func_58());
	STREAMING::REQUEST_ANIM_DICT(func_72());
	STREAMING::REQUEST_ANIM_DICT(func_88());
	STREAMING::REQUEST_ANIM_DICT(func_216());
	if (((STREAMING::HAS_ANIM_DICT_LOADED(func_58()) && STREAMING::HAS_ANIM_DICT_LOADED(func_72())) && STREAMING::HAS_ANIM_DICT_LOADED(func_88())) && STREAMING::HAS_ANIM_DICT_LOADED(func_216()))
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	if (func_65(&(Local_2039.f_1578), 3500, 0))
	{
		func_63(&(Local_2039.f_1578));
		return 1;
	}
	return 0;
}

bool func_224(int iParam0)
{
	if (Local_122.f_1600[iParam0] == func_419())
	{
		return 0;
	}
	return Local_122.f_1600[iParam0] != PLAYER::PLAYER_ID();
}

void func_225(int iParam0)
{
	Global_1696925 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1696943 = iParam0;
	if (!func_233())
	{
		func_230();
	}
	if (!func_229())
	{
		func_226();
	}
}

void func_226()
{
	func_112(joaat("mpply_cas_gmblng_l24_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_228();
	func_227();
	Global_1696939 = 1;
	Global_1696934 = 0;
}

void func_227()
{
	func_112(joaat("mpply_cas_24h_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

void func_228()
{
	func_112(joaat("mpply_cas_gmblng_l24"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_1"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_2"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_3"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_4"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_5"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_6"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_7"), 0);
	func_112(joaat("mpply_cas_gmblng_l24_8"), 0);
	func_112(joaat("mpply_cas_cur_gmblng_hr"), 0);
	func_112(joaat("mpply_cas_24h_gmblng_px"), 0);
}

bool func_229()
{
	return Global_1696939;
}

void func_230()
{
	func_112(joaat("mpply_casino_gmblng_gd"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_232();
	func_231((NETWORK::GET_CLOUD_TIME_AS_INT() + 86400));
	Global_1696938 = 1;
}

void func_231(int iParam0)
{
	Global_1696933 = iParam0;
}

void func_232()
{
	func_112(joaat("mpply_cas_cur_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

bool func_233()
{
	return func_116(joaat("mpply_casino_gmblng_gd")) != 0;
}

bool func_234(int iParam0)
{
	return Local_122.f_1600[iParam0] == PLAYER::PLAYER_ID();
}

void func_235()
{
	func_360(2);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	func_336();
	func_297(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_243();
	MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_4), 2);
	func_236();
}

void func_236()
{
	int iVar0;
	int iVar1;
	
	if (Global_1696943 != -1)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1696925);
		iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1696926);
		if (Global_1696926 == -1)
		{
			func_237(iVar0);
		}
		else
		{
			func_237(iVar1);
		}
		func_232();
		func_227();
		Global_1696925 = -1;
		Global_1696926 = -1;
		Global_1696943 = -1;
	}
}

void func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = func_242();
	Global_1696934 = (Global_1696934 + iParam0);
	func_238(iVar0, iParam0);
	func_227();
}

void func_238(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_241((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_116(iVar14);
		iVar0++;
	}
	iVar15 = func_240(&uVar1, iParam0, 12);
	iVar15 = (iVar15 + iParam1);
	func_239(&uVar1, iParam0, 12, iVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar16 = func_241((iVar13 + iVar0));
		func_112(uVar16, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (MISC::IS_BIT_SET(iParam3, iVar6))
			{
				MISC::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				MISC::CLEAR_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_240(var uParam0, int iParam1, int iParam2)
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
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (MISC::IS_BIT_SET((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				MISC::SET_BIT(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_241(int iParam0)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_242()
{
	return func_116(joaat("mpply_cas_cur_gmblng_hr"));
}

void func_243()
{
	Global_2440277.f_1267.f_10 = 0;
}

void func_244(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_246(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22550.f_8417)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22550.f_8417 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22550.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22550.f_5628[iVar0] = 0;
	}
	if (Global_22550.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22550.f_5614[iVar0] = 0;
	}
	if (Global_22550.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22550.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_245(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_245(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_246(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22550.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22550.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22550.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_247(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
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
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_246(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_282(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22550)
	{
		if (func_280(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22550 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_22550.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22548;
	}
	else
	{
		fVar59 = (((Global_22548 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22549;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(false);
		if (func_279())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_279())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22550.f_5218 <= 1)
		{
			func_275(Global_22550.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22550.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22550.f_5728)
		{
			if (MISC::GET_HASH_KEY(&(Global_22550.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22548;
			}
			else
			{
				if (Global_22550)
				{
					StringCopy(&cVar65, func_274(29), 64);
					StringCopy(&cVar81, func_271(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_270(Global_22547, Global_22548, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, false);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, false);
					}
				}
				if (Global_22550.f_8387)
				{
					iVar1 = Global_22550.f_8383;
					iVar2 = Global_22550.f_8384;
					iVar3 = Global_22550.f_8385;
					iVar4 = Global_22550.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_270(Global_22547, (Global_22548 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22548 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_22550.f_1)) != 0)
				{
					func_269();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22550.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22550.f_68)
					{
						if (Global_22550.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22550.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_14[iVar16], Global_22550.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22550.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22547 + 0.00390625f), ((Global_22548 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22550.f_5735)
				{
					func_269();
					func_267((((Global_22547 + fParam5) - 0.00390625f) - func_268("CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737)), ((Global_22548 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737);
				}
				else if (Global_22550.f_5731 > Global_22550.f_5225)
				{
					if (Global_22550.f_5734 != 0)
					{
						func_269();
						func_267((((Global_22547 + fParam5) - 0.00390625f) - func_268("CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733)), ((Global_22548 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733);
					}
				}
			}
			iVar6 = Global_22550.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22550.f_8397)
			{
				iVar1 = Global_22550.f_8393;
				iVar2 = Global_22550.f_8394;
				iVar3 = Global_22550.f_8395;
				iVar4 = Global_22550.f_8396;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22550.f_5225 && iVar6 <= Global_22550.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22550.f_5485[iVar6])
					{
						if (Global_22550.f_5356[iVar6] && iVar6 != Global_22550.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22550.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, false);
			if (Global_22550.f_5731 > Global_22550.f_5225)
			{
				if (Global_22550.f_8402)
				{
					iVar1 = Global_22550.f_8398;
					iVar2 = Global_22550.f_8399;
					iVar3 = Global_22550.f_8400;
					iVar4 = Global_22550.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_270(Global_22547, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_22550.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22547 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_22550.f_4690)) != 0 && Global_22550.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22547 + 0.0046875f);
				if (Global_22550.f_4768 != 0)
				{
					func_280(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_266(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_270(Global_22547, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_266(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22550.f_4768 != 0)
				{
					func_280(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_265(Global_22550.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_274(Global_22550.f_4768), func_271(Global_22550.f_4768, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22550.f_4766 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_22550.f_4767) > Global_22550.f_4766)
					{
						StringCopy(&(Global_22550.f_4690), "", 24);
						Global_22550.f_4766 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4269680.f_21)) != 0 && Global_4269680.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22547 + 0.0046875f);
				if (Global_4269680.f_67 != 0)
				{
					func_280(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_266(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_270(Global_22547, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_266(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4269680.f_67 != 0)
				{
					func_280(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_265(Global_4269680.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_274(Global_4269680.f_67), func_271(Global_4269680.f_67, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4269680.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4269680.f_66) > Global_4269680.f_65)
					{
						StringCopy(&(Global_4269680.f_21), "", 16);
						Global_4269680.f_65 = -1;
					}
				}
			}
			func_262(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22550.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22550.f_5218;
			if (Global_22550.f_5729)
			{
				iVar98 = (Global_22550.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22550.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22550.f_5745[iVar6];
				}
				if (Global_22550.f_5729)
				{
					iVar6 = Global_22550.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22550.f_5738 && iVar9 < Global_22550.f_5225)
				{
					bVar33 = true;
					if (Global_22550.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22550.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22550.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22547 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22550.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22550.f_8409)
					{
						HUD::GET_HUD_COLOUR(Global_22550.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22547 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false);
					Global_22550.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22550.f_5226)
				{
					if (MISC::IS_BIT_SET(Global_22550.f_5089[iVar6], iVar8) || Global_22550.f_5056[iVar8] == 5)
					{
						if (Global_22550.f_5729)
						{
							iVar19 = Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar20 = Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar21 = Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar22 = Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar23 = Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)];
						}
						else
						{
							Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar19;
							Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar20;
							Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar21;
							Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar22;
							Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22550.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22550.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22550.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22547 + 0.0046875f) + Global_22550.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22550.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22550.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22550.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22547 + Global_22549) - 0.0046875f) - fVar34);
						}
						if ((Global_22550.f_5075[iVar8] && Global_22550.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22550.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22550.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2463019[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2463019[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2463019[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2463019[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_280(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22550.f_4433[(iVar22 + iVar14)] == 2 || Global_22550.f_4433[(iVar22 + iVar14)] == 51) || Global_22550.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar43;
										Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar44;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22550.f_5083[iVar101] == 2)
												{
													Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar101)] = (Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar101)] - Global_22550.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar43 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar44 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_280(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_274(26), func_271(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_280(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_280(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_274(27), func_271(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_259(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22550.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2463019[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2463019[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2463019[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2463019[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar28)] == 2 || Global_22550.f_4433[(iVar22 + iVar28)] == 51) || Global_22550.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_280(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_280(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_265(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22550.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_274(Global_22550.f_4433[(iVar22 + iVar28)]), func_271(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_274(Global_22550.f_4433[(iVar22 + iVar28)]), func_271(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22550.f_5083[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_258() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_260(0, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_22550.f_5738 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar14)] != 2 && Global_22550.f_4433[(iVar22 + iVar14)] != 51) && Global_22550.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_280(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_280(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_265(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22550.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_274(Global_22550.f_4433[(iVar22 + iVar14)]), func_271(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (Global_22547 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else if (Global_22550.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_274(Global_22550.f_4433[(iVar22 + iVar14)]), func_271(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_274(Global_22550.f_4433[(iVar22 + iVar14)]), func_271(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_259(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22550.f_3918[iVar20]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar42 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar43 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_280(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_274(26), func_271(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_280(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_280(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_274(27), func_271(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
										func_257((fVar34 + fVar42), fVar35, "NUMBER", Global_22550.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_259(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar42 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar43 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_280(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_274(26), func_271(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_280(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_280(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_274(27), func_271(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar55, 0, 0, 0);
									func_256((fVar34 + fVar42), fVar35, "NUMBER", Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_280(Global_22550.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22550.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22550.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
											Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
											fVar44 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_280(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22550.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_265(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_274(26), func_271(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
													}
												}
											}
											if (func_280(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_280(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_265(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_274(27), func_271(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_280(Global_22550.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(Global_22550.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_274(Global_22550.f_4433[iVar22]), func_271(Global_22550.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_255(Global_22550.f_4433[iVar22])), (fVar37 * func_255(Global_22550.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22550.f_5056[iVar8] == 5)
						{
							if (Global_22550.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							if (Global_22550.f_5075[iVar8])
							{
								if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22550.f_8038[iVar9] = iVar6;
						Global_22550.f_5740 = iVar6;
						iVar9++;
						if (Global_22550.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22550.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22550.f_5728)
					{
						Global_22550.f_5485[iVar6] = 1;
						if (Global_22550.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22550.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22550.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22550.f_5728)
			{
				Global_22550.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22550.f_5733 = iVar11;
				Global_22550.f_5731 = iVar10;
				Global_22550.f_5728 = 1;
			}
		}
		if (!Global_22550.f_5729)
		{
			Global_22550.f_5732 = iVar9;
			Global_22550.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22550.f_5876 = fVar51;
	Global_22550.f_5878 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_22550.f_5876);
	if (!Global_22550.f_8382)
	{
		func_248(0);
	}
	Global_22550.f_8382 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_171(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_248(int iParam0)
{
	if (func_254())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_253(0))
		{
			func_249(iParam0);
		}
		MISC::SET_BIT(&Global_7552, 2);
	}
}

void func_249(int iParam0)
{
	if (func_254())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_252())
		{
			func_251(1, 1);
		}
		else
		{
			func_251(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7552, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7551, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7551, 30);
	}
	if (!func_250())
	{
		Global_19681.f_1 = 3;
	}
}

int func_250()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_251(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_253(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19618);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19609);
		}
	}
}

bool func_252()
{
	return MISC::IS_BIT_SET(Global_1689733, 5);
}

int func_253(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7551, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_254()
{
	return MISC::IS_BIT_SET(Global_1689733, 19);
}

float func_255(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_256(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_257(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_258()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_259(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_22550.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_22550.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_260(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_261(Global_22550.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_261(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_262(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_246(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_282(bParam4, bParam8))
	{
		return;
	}
	if (func_263())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_17(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22550.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (Global_22550.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22550.f_5026[iVar1], true), 64);
				}
				else if (Global_22550.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22550.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22550.f_4770 = 0;
		}
		if (!Global_22550.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22550.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (MISC::GET_HASH_KEY(&(Global_22550.f_4964[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_176(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22550.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_176(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_175(&(Global_22550.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22550.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22550.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_22550.f_5026[iVar1] != 361 && MISC::IS_BIT_SET(Global_22550.f_5052, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22550.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4269680.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22550.f_4769);
				func_176(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_175(&(Global_4269680.f_16));
				}
				else
				{
					iVar4 = Global_22550.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4269680.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22550.f_5082)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22550.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22550.f_4769)
		{
			if (Global_22550.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22550.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4269680.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4269680.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22550.f_8417)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22550.f_8417 = 1;
			}
		}
		else if (Global_22550.f_8417)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22550.f_8417 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_22550.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22550.f_5660[iVar0 /*10*/], Global_22550.f_5053, Global_22550.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22550.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_263()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_264())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19626 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_264()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_265(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_266(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_22547 + Global_22549) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_267(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_268(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_269();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_269()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22550.f_8392)
	{
		iVar0 = Global_22550.f_8388;
		iVar1 = Global_22550.f_8389;
		iVar2 = Global_22550.f_8390;
		iVar3 = Global_22550.f_8391;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_22547 + 0.0046875f), ((Global_22547 + Global_22549) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_270(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_271(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22550.f_7029[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22550.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_273(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_272(&uVar3);
			}
		}
		else
		{
			return func_272(&(Global_22550.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_272(var uParam0)
{
	return uParam0;
}

struct<13> func_273(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_274(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22550.f_6020[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22550.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_273(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_272(&uVar0);
		}
		else
		{
			return func_272(&(Global_22550.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_275(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22550.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22550.f_5218 >= 128)
	{
		return;
	}
	if (Global_22550.f_5220 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 < Global_22550.f_5741)
	{
		return;
	}
	if (Global_22550.f_5218 != iParam0)
	{
		Global_22550.f_5218 = iParam0;
		Global_22550.f_5219 = 0;
	}
	iVar0 = Global_22550.f_5056[Global_22550.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22550.f_5219 < 4 && iVar0 != 1)
		{
			Global_22550.f_5219++;
			iVar0 = Global_22550.f_5056[Global_22550.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22550.f_1610[Global_22550.f_5220] = bParam3;
	Global_22550.f_1867[Global_22550.f_5220] = iParam4;
	Global_22550.f_5220++;
	if (!bParam3)
	{
		func_278(Global_22550.f_5218, 1);
	}
	else
	{
		func_278(Global_22550.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_277(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_280(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22550.f_5068[Global_22550.f_5219])
		{
			Global_22550.f_5068[Global_22550.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_276(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
			if (fVar4 > Global_22550.f_5745[iParam0])
			{
				Global_22550.f_5745[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_22550.f_5089[iParam0]), Global_22550.f_5219);
	Global_22550.f_5219++;
	Global_22550.f_5744 = 1;
	Global_22550.f_5742 = (Global_22550.f_5220 - 1);
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = iParam2;
}

float func_276(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_277(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_260(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_278(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_279()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_280(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_274(iParam0), 64);
	StringCopy(&cVar16, func_271(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(false);
			if (func_279())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_279())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		Var37.x = (Var37.x * (func_281(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_281(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.x = (Var37.x - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.x = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.x = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22549)
			{
				*fParam4 = (*fParam4 * (Global_22549 / *fParam3));
				*fParam3 = Global_22549;
			}
		}
		return 1;
	}
	return 0;
}

float func_281(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_282(bool bParam0, bool bParam1)
{
	if (Global_2440277.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_284(8, -1) && func_283() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_77093) || Global_22550.f_8416) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_283()
{
	return Global_1312830;
}

bool func_284(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377236.f_1048, iParam0);
}

void func_285(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_22550.f_5052), Global_22550.f_4769);
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

void func_286(char* sParam0)
{
	if (Global_22550.f_4765 >= 3 || Global_22550.f_4762 >= 4)
	{
		return;
	}
	Global_22550.f_4696[Global_22550.f_4762] = 1;
	Global_22550.f_4762++;
	StringCopy(&(Global_22550.f_4713[Global_22550.f_4765 /*16*/]), sParam0, 64);
	Global_22550.f_4765++;
}

void func_287(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22550.f_4690), sParam0, 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = iParam1;
	Global_22550.f_4767 = MISC::GET_GAME_TIMER();
	Global_22550.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_288(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22550.f_5739 = iParam0;
	Global_22550.f_5874 = iParam2;
	if (Global_22550.f_5739 < Global_22550.f_5738)
	{
		Global_22550.f_5738 = Global_22550.f_5739;
	}
	else if ((Global_22550.f_5729 && Global_22550.f_5739 > Global_22550.f_5740) || (!Global_22550.f_5729 && Global_22550.f_5739 >= (Global_22550.f_5738 + Global_22550.f_5225)))
	{
		iVar0 = Global_22550.f_5738;
		while (iVar0 <= Global_22550.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22550.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22550.f_5225 && Global_22550.f_5738 < 128)
		{
			Global_22550.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22550.f_5738;
			while (iVar0 <= Global_22550.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22550.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22550.f_4690), "", 24);
		StringCopy(&(Global_4269680.f_21), "", 16);
	}
}

void func_289(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22550.f_1), sParam0, 16);
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_290(int iParam0, char* sParam1, char* sParam2)
{
	Global_22550 = iParam0;
	func_291(29, sParam1, sParam2);
}

void func_291(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22550.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22550.f_7029[iParam0 /*16*/]), sParam2, 64);
}

void func_292(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22550.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22550.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2463019[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_5089[iVar0] = 0;
		Global_22550.f_5227[iVar0] = 0;
		Global_22550.f_5356[iVar0] = 0;
		Global_22550.f_5879[iVar0] = 0f;
		Global_22550.f_5485[iVar0] = 0;
		Global_22550.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22550.f_5056[iVar0] = 0;
		Global_22550.f_5068[iVar0] = 0f;
		Global_22550.f_5062[iVar0] = -1f;
		Global_22550.f_5075[iVar0] = 0;
		Global_22550.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22550.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22550.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22550.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	Global_22550 = 0;
	Global_22550.f_5218 = 0;
	Global_22550.f_5219 = 0;
	Global_22550.f_5220 = 0;
	Global_22550.f_5222 = 0;
	Global_22550.f_5223 = 0;
	Global_22550.f_5224 = 0;
	Global_22550.f_5221 = 0;
	Global_22550.f_5874 = 0;
	Global_22550.f_6014 = 0;
	Global_22550.f_5739 = 0;
	Global_22550.f_5738 = 0;
	Global_22550.f_5740 = 0;
	StringCopy(&(Global_22550.f_4690), "", 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = 0;
	Global_22550.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_4768 = 0;
	StringCopy(&(Global_4269680.f_21), "", 16);
	Global_4269680.f_61 = 0;
	Global_4269680.f_62 = 0;
	Global_4269680.f_63 = 0;
	Global_4269680.f_64 = 0;
	Global_4269680.f_65 = 0;
	Global_4269680.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4269680.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4269680.f_67 = 0;
	StringCopy(&(Global_22550.f_1), "", 16);
	Global_22550.f_5074 = 0f;
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_5744 = 0;
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = 0;
	Global_22550.f_5742 = 0;
	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	Global_22550.f_5225 = 10;
	Global_22550.f_5226 = 0;
	Global_22550.f_5876 = 0f;
	Global_22550.f_5877 = 0f;
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	Global_22550.f_5730 = 0f;
	Global_22550.f_5731 = 0;
	Global_22550.f_5733 = 0;
	Global_22550.f_5732 = 0;
	Global_22550.f_5734 = 0;
	Global_22550.f_5735 = 0;
	Global_22550.f_5736 = 0;
	Global_22550.f_5737 = 0;
	Global_22550.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22550.f_6008[iVar0] = -1;
		Global_22550.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22550.f_5081 = 0f;
	Global_22550.f_5052 = 0;
	Global_22550.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22550.f_6015)
	{
		Global_22550.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_8392 = 0;
	Global_22550.f_8387 = 0;
	Global_22550.f_8397 = 0;
	Global_22550.f_8402 = 0;
	Global_22550.f_8407 = 0;
	Global_22550.f_8409 = 0;
	Global_22550.f_8415 = 0;
	Global_22547 = 0.05f;
	Global_22548 = 0.05f;
	Global_22549 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22549 = 0.225f;
	}
}

bool func_293(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_246(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22550.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22550.f_5635[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22550.f_5635[iVar0 /*4*/]), 9);
		Global_22550.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22550.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22550.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22550.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22550.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_294(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_294(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_295(int iParam0)
{
	Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 = iParam0;
	Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 = func_382(iParam0);
}

bool func_296()
{
	return Global_4265545 == 1;
}

void func_297(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_306())
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
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
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
		if (!func_187())
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
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_17(PLAYER::PLAYER_ID(), 0) && !func_305()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2426097[iParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_302(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_301(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_300();
					func_299();
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
				Global_2426097[iParam0 /*443*/].f_249 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405074.f_2674)
				{
					Global_2405074.f_2674 = 0;
				}
			}
			else
			{
				if (!func_301(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_298(Global_4456448.f_129348))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312872)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
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

bool func_298(int iParam0)
{
	return iParam0 == 17;
}

void func_299()
{
	struct<3> Var0;
	
	Global_2440277.f_1344 = 0;
	Global_2440277.f_1345 = 0;
	Global_2440277.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440277.f_1351 = -1;
	Global_2440277.f_1352 = 0;
	Global_2405074.f_2685 = { Var0 };
}

void func_300()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_301(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_302(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
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
			if (bParam0 == 1)
			{
				func_304();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_17(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_303(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_303(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_304()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_305()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_306()
{
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_35 && !Global_2452907.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_307()
{
	Global_2440277.f_1267.f_10 = 1;
}

void func_308(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_309(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_310(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_309(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_253(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/] == 1 && Global_42356[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42356[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42356[iVar0 /*32*/].f_5 = 1;
			Global_42356[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42356[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42356[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_311(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 26);
}

void func_312(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_308(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/] = 1;
			Global_42356[iVar0 /*32*/].f_1 = Global_42557;
			Global_42557++;
			Global_42356[iVar0 /*32*/].f_4 = 0;
			Global_42356[iVar0 /*32*/].f_29 = 0;
			Global_42356[iVar0 /*32*/].f_5 = 0;
			Global_42356[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42356[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42356[iVar0 /*32*/].f_6 = iParam3;
			Global_42356[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42356[iVar0 /*32*/].f_7 = 0;
			Global_42356[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42356[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42356[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42356[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42356[iVar0 /*32*/].f_12 = 0;
				Global_42356[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42356[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_313(int iParam0)
{
	if (func_314(iParam0, 1))
	{
		return Global_1630317[func_323() /*595*/].f_11.f_423;
	}
	return -1;
}

bool func_314(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_315(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_419();
}

int func_315(int iParam0)
{
	if (iParam0 != func_419())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_419())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_316()
{
	if (((((((((func_332("BJACK_USED") || func_332("CAS_MG_CBAN")) || func_332("CAS_MG_CTIME")) || func_319("CAS_MG_MEMB2", func_320(1))) || func_332("CAS_MG_SUITE2")) || func_332("CAS_MG_NOCHIPS2")) || func_332("CAS_MG_LOWCHIPS2")) || func_332("CAS_MG_NOCHIPS6")) || func_332("CAS_MG_LOWCHIPS6")) || func_332("BJACK_NA"))
	{
		return 1;
	}
	return 0;
}

void func_317()
{
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_320(0), false, true, false, -1, 0))
	{
		func_208("MAITRD_M_D0E", -1);
	}
	else if (func_321(PLAYER::PLAYER_ID()))
	{
	}
	else if (MISC::IS_BIT_SET(Global_1678289.f_5, 31))
	{
	}
	else if (Global_4265545 != 0)
	{
	}
	else
	{
		MISC::SET_BIT(&(Global_1678289.f_5), 30);
	}
}

void func_318(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_319(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_320(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

bool func_321(int iParam0)
{
	if (iParam0 == func_419())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 18);
}

bool func_322()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_369.f_1, 18);
}

int func_323()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

bool func_324(bool bParam0)
{
	return func_314(PLAYER::PLAYER_ID(), bParam0);
}

int func_325(int iParam0)
{
	if (iParam0 != func_419())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_326()
{
	if (func_329() <= 0)
	{
		return 0;
	}
	if (func_328() <= 0)
	{
		return 1;
	}
	if (func_327())
	{
		return 2;
	}
	return 3;
}

bool func_327()
{
	return Global_1696932 != 0;
}

int func_328()
{
	return (Global_262145.f_26472 + func_115());
}

int func_329()
{
	return (Global_262145.f_26473 - func_115());
}

bool func_330()
{
	return func_326() != 3;
}

void func_331(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_332(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_333(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!MONEY::_NETWORK_CASINO_CAN_USE_GAMBLING_TYPE(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_334()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_335()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_336()
{
	if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 != -1)
	{
		Local_2039.f_232 = 0;
		Local_2039.f_233 = 0;
		Local_2039.f_235 = 0;
		Local_2039.f_252 = 0;
		Local_1782[PLAYER::PLAYER_ID() /*8*/] = 0;
		Local_1782[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
		Local_1782[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
		Local_1782[PLAYER::PLAYER_ID() /*8*/].f_3 = -1;
		Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 = -1;
		Local_1782[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
	}
}

bool func_337()
{
	return Global_2540612.f_6662;
}

int func_338()
{
	if (((func_339() != -1 && func_339() != 28) && func_339() != 17) && func_339() != 12)
	{
		return 1;
	}
	return 0;
}

int func_339()
{
	return Global_968397;
}

bool func_340()
{
	return MISC::IS_BIT_SET(Global_2452015.f_2, 11);
}

bool func_341()
{
	return Global_2452015.f_689;
}

int func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_344(iParam0);
	iVar1 = func_343(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42588[iVar1 /*5*/].f_3;
}

int func_343(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42588[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_344(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
		{
			return Global_42588[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_345()
{
	int iVar0;
	
	if (func_314(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_323();
		if (func_20(iVar0, 1, 1) && MISC::IS_BIT_SET(Global_1590682[iVar0 /*883*/].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_350(PLAYER::PLAYER_ID(), 0) && func_348(PLAYER::PLAYER_ID())) || func_346(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_346(int iParam0)
{
	if (func_347(iParam0) != func_419())
	{
		return func_347(iParam0) == func_212(iParam0);
	}
	return 0;
}

int func_347(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_348(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_349(iParam0, 9);
	}
	return 0;
}

bool func_349(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_350(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_351()
{
	if (func_425(PLAYER::PLAYER_ID()) && func_420() != func_419())
	{
		if ((MISC::IS_BIT_SET(Global_2426097[func_420() /*443*/].f_314.f_4, 1) || MISC::IS_BIT_SET(Global_1678289.f_6, 10)) || Global_2426097[func_420() /*443*/].f_442 != Global_1696916)
		{
			return 0;
		}
	}
	return 1;
}

bool func_352(int iParam0, struct<3> Param1, float fParam4)
{
	return func_353(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam4);
}

bool func_353(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, fParam3, 0f, 1f, 0f) };
	fVar3 = func_354(func_355(Var0), func_355(Param4 - Param0));
	return MISC::ACOS(fVar3) <= fParam7;
}

float func_354(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_355(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_356(int iParam0)
{
	if (Local_2039.f_257 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.367f, 269.0835f, -51.7879f;
			
			case 1:
				return 1148.345f, 269.7643f, -51.7876f;
			
			case 2:
				return 1148.821f, 270.2321f, -51.7708f;
			
			case 3:
				return 1149.495f, 270.2401f, -51.7632f;
			
			case 4:
				return 1152.317f, 267.4195f, -51.8003f;
			
			case 5:
				return 1152.337f, 266.7202f, -51.7913f;
			
			case 6:
				return 1151.849f, 266.2183f, -51.7916f;
			
			case 7:
				return 1151.182f, 266.2501f, -51.7864f;
			
			case 8:
				return 1128.713f, 262.8658f, -51.0035f;
			
			case 9:
				return 1129.446f, 262.8649f, -51.0121f;
			
			case 10:
				return 1129.932f, 262.3822f, -51.0027f;
			
			case 11:
				return 1129.899f, 261.6921f, -51.0422f;
			
			case 12:
				return 1143.738f, 247.8562f, -51.034f;
			
			case 13:
				return 1144.459f, 247.8673f, -51.0229f;
			
			case 14:
				return 1144.951f, 247.3612f, -51.015f;
			
			case 15:
				return 1144.913f, 246.663f, -51.0236f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_357(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

Vector3 func_358(int iParam0)
{
	int iVar0;
	
	if (Local_2039.f_257 == 1)
	{
		if (func_420() != func_419())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(func_382(iParam0)), 1f, func_218(Global_2426097[func_420() /*443*/].f_442), false, false, false);
		}
	}
	else if (func_382(iParam0) == 0 || func_382(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(func_382(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(func_382(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_359(int iParam0)
{
	return Global_99007.f_350 == iParam0;
}

void func_360(int iParam0)
{
	Local_2039.f_1 = iParam0;
}

void func_361(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_213(&(Local_1782[iParam0 /*8*/]), 0);
	Local_1782[iParam0 /*8*/].f_6.f_1 = -1;
}

int func_362()
{
	int iVar0;
	
	if (Local_2039.f_257 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_537))
		{
			if (func_420() != func_419())
			{
				iVar0 = func_218(Global_2426097[func_420() /*443*/].f_442);
				STREAMING::REQUEST_MODEL(iVar0);
				if (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					return 0;
				}
				Local_2039.f_537 = OBJECT::CREATE_OBJECT(iVar0, func_70(0), false, false, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_537, func_70(0), false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_2039.f_537, func_69(0));
				OBJECT::_SET_OBJECT_TEXTURE_VARIATION(Local_2039.f_537, func_363(func_420()));
				ENTITY::FREEZE_ENTITY_POSITION(Local_2039.f_537, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0)
{
	if (func_366(iParam0))
	{
		return 1;
	}
	else if (func_365(iParam0))
	{
		return 2;
	}
	else if (func_364(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_364(int iParam0)
{
	if (iParam0 != func_419())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 21);
	}
	return 0;
}

int func_365(int iParam0)
{
	if (iParam0 != func_419())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 20);
	}
	return 0;
}

int func_366(int iParam0)
{
	if (iParam0 != func_419())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 19);
	}
	return 0;
}

void func_367(var uParam0, bool bParam1, bool bParam2)
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

int func_368()
{
	if (Global_2440277.f_1267.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_369(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			break;
		
		case 1:
			if ((func_372(PLAYER::PLAYER_ID(), 1) || func_372(PLAYER::PLAYER_ID(), 2)) || func_371())
			{
				func_213(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_372(PLAYER::PLAYER_ID(), 1) || func_372(PLAYER::PLAYER_ID(), 2)) || func_371())
			{
				func_213(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_370())
			{
				func_213(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_370()
{
	if ((((func_372(PLAYER::PLAYER_ID(), 4) || func_372(PLAYER::PLAYER_ID(), 5)) || func_372(PLAYER::PLAYER_ID(), 6)) || func_372(PLAYER::PLAYER_ID(), 7)) || func_371())
	{
		return 1;
	}
	return 0;
}

int func_371()
{
	if (func_65(&(Local_2039.f_1580), 3500, 0))
	{
		func_63(&(Local_2039.f_1580));
		return 1;
	}
	return 0;
}

bool func_372(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Local_122.f_1477[iParam0], iVar0);
}

void func_373(int iParam0, int iParam1)
{
	Global_22411.f_9 = iParam0;
	Global_22411.f_10 = iParam1;
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
		func_375(1);
		func_249(1);
	}
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::ENABLE_ALL_CONTROL_ACTIONS(1);
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
		PAD::DISABLE_CONTROL_ACTION(2, 199, true);
		PAD::SET_INPUT_EXCLUSIVE(0, 200);
		PAD::SET_INPUT_EXCLUSIVE(2, 200);
		PAD::SET_INPUT_EXCLUSIVE(0, 199);
		PAD::SET_INPUT_EXCLUSIVE(2, 199);
		PAD::SET_INPUT_EXCLUSIVE(0, 201);
		PAD::SET_INPUT_EXCLUSIVE(0, 202);
		PAD::SET_INPUT_EXCLUSIVE(0, 187);
	}
}

void func_375(bool bParam0)
{
	if (bParam0)
	{
		if (func_340())
		{
			Global_2452015.f_40 = 1;
		}
	}
	else
	{
		Global_2452015.f_40 = 0;
	}
}

void func_376(bool bParam0)
{
	char* sVar0;
	
	if (Local_2039.f_1 > 2 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		if (((((!func_381() && !func_380()) && !func_379()) && !func_378()) && !func_81(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_297(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_243();
	}
	if (Local_2039.f_1 > 2)
	{
		func_243();
	}
	if (MISC::IS_BIT_SET(Local_2039.f_250, 0))
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_382(Local_2039.f_247) == 2 || func_382(Local_2039.f_247) == 3) || func_425(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		func_244(1, -1);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
		iLocal_3680 = 1;
		Local_2039.f_250 = 0;
	}
	if (CAM::DOES_CAM_EXIST(Local_2039.f_242))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(Local_2039.f_242, false);
		bLocal_3681 = false;
		iLocal_3682 = 0;
	}
	if (Local_2039.f_259 != -1)
	{
		func_308(&(Local_2039.f_259));
		Local_2039.f_259 = -1;
	}
	Local_2039.f_244 = 0;
	Local_2039.f_253 = 0;
	Local_2039.f_252 = 0;
	Local_2039.f_232 = 0;
	Local_2039.f_233 = 0;
	Local_2039.f_234 = 0;
	Local_2039.f_235 = 0;
	Local_2039.f_243 = 0;
	Local_1782[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
	if (!bParam0)
	{
		func_336();
	}
	Local_3652.f_4 = func_402();
	Local_3652.f_5 = func_190(&uLocal_3624, 0, 0);
	if (Local_2039.f_1 > 2)
	{
		if (Global_262145.f_26115)
		{
			STATS::_PLAYSTATS_CASINO_BLACKJACK_LIGHT(&Local_3652);
		}
	}
	if (bParam0)
	{
		Local_2039.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_358(Local_2039.f_247), func_217(Local_2039.f_247), 2, false, false, 1f, 0f, 1f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_2039.f_255, func_216(), func_377(Local_2039.f_247), 2f, -2f, 13, 16, 1000f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_2039.f_255);
	}
	if (!bParam0)
	{
		MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_4), 2);
	}
	if (bParam0 || Local_2039.f_1 > 2)
	{
		func_236();
	}
	func_360(10);
	func_165(0);
}

char* func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_378()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_379()
{
	return Global_1312896;
}

int func_380()
{
	if (func_188() == 3 || func_188() == 2)
	{
		return 1;
	}
	return 0;
}

int func_381()
{
	if (func_188() == 1 || func_188() == 4)
	{
		return 1;
	}
	return 0;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_383()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	bool bVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	if (((func_359(1581559923) || func_359(272405600)) || func_425(PLAYER::PLAYER_ID())) && !func_401())
	{
		iLocal_3674 = 1;
		if (!bLocal_3673)
		{
			bLocal_3673 = (func_410() && func_400());
		}
	}
	else
	{
		if (iLocal_3674)
		{
			func_412();
			func_398();
			iLocal_3674 = 0;
		}
		return;
	}
	if (!Global_1391942.f_791)
	{
		iVar6 = 0;
		while (iVar6 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar6) == 174)
			{
				if (SCRIPT::GET_EVENT_DATA(1, iVar6, &Var0, 6))
				{
					if (Var0 == 1614484900)
					{
						if (((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var0.f_1) && Var0.f_2 >= 0) && Var0.f_2 < 224) && func_397(Var0.f_3, Local_2039.f_236) != 0)
						{
							if (Var0.f_4)
							{
								Local_2039.f_260[Var0.f_2] = Var0.f_3;
							}
							else
							{
								Local_2039.f_305[Var0.f_2] = Var0.f_3;
								if (Var0.f_5)
								{
									func_396(Var0.f_2);
								}
								else
								{
									func_395(Var0.f_2);
								}
							}
						}
					}
				}
			}
			iVar6++;
		}
	}
	iVar7 = 0;
	while (iVar7 < Local_2039.f_257)
	{
		if (iVar7 != iLocal_3683 && iVar7 != Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4)
		{
		}
		else
		{
			Var8 = { func_70(iVar7) };
			Var8.f_2 = (Var8.f_2 + 0.914f);
			bVar11 = false;
			if (func_53(iVar7, Local_2039.f_257))
			{
				bVar11 = true;
			}
			Var15 = { 0f, 0f, func_69(iVar7) };
			iVar18 = 0;
			while (iVar18 < 4)
			{
				iVar19 = Local_122.f_1600[(iVar7 * 4 + iVar18)];
				if (iVar19 < 0 || ((!func_359(1581559923) && !func_359(272405600)) && !func_425(PLAYER::PLAYER_ID())))
				{
					iVar12 = 0;
					while (iVar12 < 7)
					{
						iVar13 = func_21(iVar7, iVar12, iVar18, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
						{
							if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_648[iVar13]) > 0)
							{
								ENTITY::SET_ENTITY_ALPHA(Local_2039.f_648[iVar13], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2039.f_648[iVar13])), 0f, 0.1f, 0)), true);
							}
							else
							{
								OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
							}
						}
						if (Local_2039.f_305[iVar13] != -1)
						{
							Local_2039.f_305[iVar13] = -1;
						}
						if (func_394(iVar13))
						{
							func_395(iVar13);
						}
						iVar13 = func_21(iVar7, iVar12, iVar18, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
						{
							if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_648[iVar13]) > 0)
							{
								ENTITY::SET_ENTITY_ALPHA(Local_2039.f_648[iVar13], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2039.f_648[iVar13])), 0f, 0.1f, 0)), true);
							}
							else
							{
								OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
							}
						}
						if (Local_2039.f_305[iVar13] != -1)
						{
							Local_2039.f_305[iVar13] = -1;
						}
						if (func_394(iVar13))
						{
							func_395(iVar13);
						}
						iVar12++;
					}
					iVar12 = 0;
					while (iVar12 < 4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[func_393(iVar7, iVar18, iVar12)]))
						{
							if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, iVar12)]) > 0)
							{
								ENTITY::SET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, iVar12)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, iVar12)])), 0f, 0.1f, 0)), true);
							}
							else
							{
								OBJECT::DELETE_OBJECT(&(Local_2039.f_538[func_393(iVar7, iVar18, iVar12)]));
							}
						}
						iVar12++;
					}
				}
				else
				{
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < 7)
					{
						iVar13 = func_21(iVar7, iVar12, iVar18, 0);
						sVar14 = func_392(Local_122.f_899[iVar19 /*9*/][iVar12], 1);
						if (iVar13 >= 0 && iVar13 < (56 * Local_2039.f_257))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7])))
							{
								if ((((iVar18 == 0 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_7(iVar7), 3)) || (iVar18 == 1 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_6(iVar7), 3))) || (iVar18 == 2 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_5(iVar7), 3))) || (iVar18 == 3 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_4(iVar7), 3)))
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
									{
										iVar21 = 0;
										while (iVar21 < 7)
										{
											iVar22 = func_21(iVar7, iVar21, iVar18, 0);
											if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar22]))
											{
												iVar20 = iVar21;
											}
											iVar21++;
										}
										if (iVar12 == iVar20)
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]) && !ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_648[iVar13]))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_648[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
										{
											OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
											Local_2039.f_305[iVar13] = -1;
										}
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 585557868))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
										{
											OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
											Local_2039.f_305[iVar13] = -1;
										}
									}
								}
								else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar14))
								{
									Local_2039.f_305[iVar13] = -1;
									if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
									{
										if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_22(iVar7, iVar18), 3)) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206)) && iVar12 == 1)
										{
										}
										else
										{
											if (func_397(Local_122.f_899[iVar19 /*9*/][iVar12], Local_2039.f_236) != 0)
											{
												Local_2039.f_648[iVar13] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_397(Local_122.f_899[iVar19 /*9*/][iVar12], Local_2039.f_236), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_391(iVar12, iVar18, 0)), false, false, true);
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_648[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_391(iVar12, iVar18, 0)), false, false, true);
												ENTITY::SET_ENTITY_ROTATION(Local_2039.f_648[iVar13], Var15 + func_390(iVar12, iVar18, 0, func_394(iVar13)), 2, true);
											}
											Jump @2149; //curOff = 1854
											if (ENTITY::GET_ENTITY_MODEL(Local_2039.f_648[iVar13]) != func_397(Local_122.f_899[iVar19 /*9*/][iVar12], Local_2039.f_236))
											{
												OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
											}
											else if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_22(iVar7, iVar18), 3)) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206)) && iVar12 == 1)
											{
												OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
											}
											else if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_648[iVar13]))
											{
												ENTITY::DETACH_ENTITY(Local_2039.f_648[iVar13], false, true);
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_648[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_391(iVar12, iVar18, 0)), false, false, true);
												ENTITY::SET_ENTITY_ROTATION(Local_2039.f_648[iVar13], Var15 + func_390(iVar12, iVar18, 0, func_394(iVar13)), 2, true);
											}
											Jump @2890; //curOff = 2149
											if (Local_2039.f_305[iVar13] != -1)
											{
												if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
												{
													Local_2039.f_648[iVar13] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_397(Local_2039.f_305[iVar13], Local_2039.f_236), Var8, false, false, true);
													if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2039.f_648[iVar13])) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
													{
														if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_22(iVar7, iVar18), 3))
														{
															ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_648[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
														}
														else
														{
															ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_648[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
														}
													}
												}
												else if (ENTITY::GET_ENTITY_MODEL(Local_2039.f_648[iVar13]) != func_397(Local_2039.f_305[iVar13], Local_2039.f_236))
												{
													OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
													Local_2039.f_305[iVar13] = -1;
													func_395(iVar13);
												}
												else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7])))
												{
													if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2039.f_648[iVar13]) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
													{
														ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_648[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
													}
													if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 585557868))
													{
														if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_648[iVar13]))
														{
															ENTITY::DETACH_ENTITY(Local_2039.f_648[iVar13], false, true);
															ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_648[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_391(iVar12, iVar18, 0)), false, false, true);
															ENTITY::SET_ENTITY_ROTATION(Local_2039.f_648[iVar13], Var15 + func_390(iVar12, iVar18, 0, func_394(iVar13)), 2, true);
														}
													}
												}
											}
											else if (iVar13 >= 0 && iVar13 < (56 * Local_2039.f_257))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
												{
													OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
													Local_2039.f_305[iVar13] = -1;
													func_395(iVar13);
												}
											}
										}
										iVar12++;
										if (Local_1782[iVar19 /*8*/].f_1 > 0)
										{
											iVar23 = Local_1782[iVar19 /*8*/].f_1;
											if (MISC::IS_BIT_SET(Local_1782[iVar19 /*8*/], 10))
											{
												iVar23 = (Local_1782[iVar19 /*8*/].f_1 / 2);
											}
											if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[func_393(iVar7, iVar18, 0)]))
											{
												if (func_389(iVar23, bVar11) != 0)
												{
													Local_2039.f_538[func_393(iVar7, iVar18, 0)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_389(iVar23, bVar11), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_388(iVar23, 0, iVar18, bVar11)), false, false, true);
													ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_538[func_393(iVar7, iVar18, 0)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_388(iVar23, 0, iVar18, bVar11)), false, false, true);
													ENTITY::SET_ENTITY_ROTATION(Local_2039.f_538[func_393(iVar7, iVar18, 0)], Var15 + func_387(iVar23, 0, iVar18, bVar11), 2, true);
													if (!MISC::IS_STRING_NULL_OR_EMPTY(func_386(iVar23)))
													{
														AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_386(iVar23), Local_2039.f_538[func_393(iVar7, iVar18, 0)], "dlc_vw_table_games_sounds", false, 0);
													}
												}
											}
											else if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 0)]) != 255)
											{
												OBJECT::DELETE_OBJECT(&(Local_2039.f_538[func_393(iVar7, iVar18, 0)]));
											}
											if (MISC::IS_BIT_SET(Local_1782[iVar19 /*8*/], 10))
											{
												if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[func_393(iVar7, iVar18, 1)]))
												{
													if (func_389(iVar23, bVar11) != 0)
													{
														Local_2039.f_538[func_393(iVar7, iVar18, 1)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_389(iVar23, bVar11), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_388(iVar23, 1, iVar18, bVar11)), false, false, true);
														ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_538[func_393(iVar7, iVar18, 1)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_388(iVar23, 1, iVar18, bVar11)), false, false, true);
														ENTITY::SET_ENTITY_ROTATION(Local_2039.f_538[func_393(iVar7, iVar18, 1)], Var15 + func_387(iVar23, 1, iVar18, bVar11), 2, true);
														if (!MISC::IS_STRING_NULL_OR_EMPTY(func_386(iVar23)))
														{
															AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_386(iVar23), Local_2039.f_538[func_393(iVar7, iVar18, 1)], "dlc_vw_table_games_sounds", false, 0);
														}
													}
												}
												else if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 1)]) != 255)
												{
													OBJECT::DELETE_OBJECT(&(Local_2039.f_538[func_393(iVar7, iVar18, 1)]));
												}
											}
										}
										else
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[func_393(iVar7, iVar18, 0)]))
											{
												if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 0)]) > 0)
												{
													ENTITY::SET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 0)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 0)])), 0f, 0.1f, 0)), true);
												}
												else
												{
													OBJECT::DELETE_OBJECT(&(Local_2039.f_538[func_393(iVar7, iVar18, 0)]));
												}
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[func_393(iVar7, iVar18, 1)]))
											{
												if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 1)]) > 0)
												{
													ENTITY::SET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 1)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 1)])), 0f, 0.1f, 0)), true);
												}
												else
												{
													OBJECT::DELETE_OBJECT(&(Local_2039.f_538[func_393(iVar7, iVar18, 1)]));
												}
											}
										}
										iVar12 = 0;
										iVar12 = 0;
										while (iVar12 < 7)
										{
											iVar13 = func_21(iVar7, iVar12, iVar18, 1);
											sVar14 = func_392(Local_122.f_1188[iVar19 /*9*/][iVar12], 1);
											if (iVar13 >= 0 && iVar13 < (56 * Local_2039.f_257))
											{
												if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7])))
												{
													if ((((iVar18 == 0 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_7(iVar7), 3)) || (iVar18 == 1 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_6(iVar7), 3))) || (iVar18 == 2 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_5(iVar7), 3))) || (iVar18 == 3 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_4(iVar7), 3)))
													{
														if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 585557868))
														{
															if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
															{
																OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
																Local_2039.f_305[iVar13] = -1;
															}
														}
													}
													else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar14))
													{
														Local_2039.f_305[iVar13] = -1;
														if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
														{
															if (func_397(Local_122.f_1188[iVar19 /*9*/][iVar12], Local_2039.f_236) != 0)
															{
																Local_2039.f_648[iVar13] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_397(Local_122.f_1188[iVar19 /*9*/][iVar12], Local_2039.f_236), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_391(iVar12, iVar18, 1)), false, false, true);
																ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_648[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_391(iVar12, iVar18, 1)), false, false, true);
																ENTITY::SET_ENTITY_ROTATION(Local_2039.f_648[iVar13], Var15 + func_390(iVar12, iVar18, 1, func_394(iVar13)), 2, true);
															}
														}
														else if (ENTITY::GET_ENTITY_MODEL(Local_2039.f_648[iVar13]) != func_397(Local_122.f_1188[iVar19 /*9*/][iVar12], Local_2039.f_236))
														{
															OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
														}
														else if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_648[iVar13]))
														{
															ENTITY::DETACH_ENTITY(Local_2039.f_648[iVar13], false, true);
															ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_648[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_391(iVar12, iVar18, 1)), false, false, true);
															ENTITY::SET_ENTITY_ROTATION(Local_2039.f_648[iVar13], Var15 + func_390(iVar12, iVar18, 1, func_394(iVar13)), 2, true);
														}
													}
													else if (Local_2039.f_305[iVar13] != -1)
													{
														if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
														{
															Local_2039.f_648[iVar13] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_397(Local_2039.f_305[iVar13], Local_2039.f_236), Var8, false, false, true);
															if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2039.f_648[iVar13])) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_648[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
															}
														}
														else if (ENTITY::GET_ENTITY_MODEL(Local_2039.f_648[iVar13]) != func_397(Local_2039.f_305[iVar13], Local_2039.f_236))
														{
															OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
															Local_2039.f_305[iVar13] = -1;
															func_395(iVar13);
														}
														else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7])))
														{
															if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2039.f_648[iVar13]) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_648[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
															}
															if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 585557868))
															{
																if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_648[iVar13]))
																{
																	ENTITY::DETACH_ENTITY(Local_2039.f_648[iVar13], false, true);
																	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_648[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_391(iVar12, iVar18, 1)), false, false, true);
																	ENTITY::SET_ENTITY_ROTATION(Local_2039.f_648[iVar13], Var15 + func_390(iVar12, iVar18, 1, func_394(iVar13)), 2, true);
																}
															}
														}
													}
													else if (iVar13 >= 0 && iVar13 < (56 * Local_2039.f_257))
													{
														if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar13]))
														{
															OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar13]));
															Local_2039.f_305[iVar13] = -1;
															func_395(iVar13);
														}
													}
													iVar12++;
													if (Local_1782[iVar19 /*8*/].f_2 > 0)
													{
														iVar23 = Local_1782[iVar19 /*8*/].f_2;
														if (MISC::IS_BIT_SET(Local_1782[iVar19 /*8*/], 11))
														{
															iVar23 = (Local_1782[iVar19 /*8*/].f_2 / 2);
														}
														if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[func_393(iVar7, iVar18, 2)]))
														{
															if (func_389(iVar23, bVar11) != 0)
															{
																Local_2039.f_538[func_393(iVar7, iVar18, 2)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_389(iVar23, bVar11), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_388(iVar23, 2, iVar18, bVar11)), false, false, true);
																ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_538[func_393(iVar7, iVar18, 2)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_388(iVar23, 2, iVar18, bVar11)), false, false, true);
																ENTITY::SET_ENTITY_ROTATION(Local_2039.f_538[func_393(iVar7, iVar18, 2)], Var15 + func_387(iVar23, 2, iVar18, bVar11), 2, true);
																if (!MISC::IS_STRING_NULL_OR_EMPTY(func_386(iVar23)))
																{
																	AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_386(iVar23), Local_2039.f_538[func_393(iVar7, iVar18, 2)], "dlc_vw_table_games_sounds", false, 0);
																}
															}
														}
														else if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 2)]) != 255)
														{
															OBJECT::DELETE_OBJECT(&(Local_2039.f_538[func_393(iVar7, iVar18, 2)]));
														}
														if (MISC::IS_BIT_SET(Local_1782[iVar19 /*8*/], 11))
														{
															if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[func_393(iVar7, iVar18, 3)]))
															{
																if (func_389(iVar23, bVar11) != 0)
																{
																	Local_2039.f_538[func_393(iVar7, iVar18, 3)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_389(iVar23, bVar11), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_388(iVar23, 3, iVar18, bVar11)), false, false, true);
																	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_538[func_393(iVar7, iVar18, 3)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_388(iVar23, 3, iVar18, bVar11)), false, false, true);
																	ENTITY::SET_ENTITY_ROTATION(Local_2039.f_538[func_393(iVar7, iVar18, 3)], Var15 + func_387(iVar23, 3, iVar18, bVar11), 2, true);
																	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_386(iVar23)))
																	{
																		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_386(iVar23), Local_2039.f_538[func_393(iVar7, iVar18, 3)], "dlc_vw_table_games_sounds", false, 0);
																	}
																}
															}
															else if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 3)]) != 255)
															{
																OBJECT::DELETE_OBJECT(&(Local_2039.f_538[func_393(iVar7, iVar18, 3)]));
															}
														}
													}
													else
													{
														if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[func_393(iVar7, iVar18, 2)]))
														{
															if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 2)]) > 0)
															{
																ENTITY::SET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 2)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 2)])), 0f, 0.1f, 0)), true);
															}
															else
															{
																OBJECT::DELETE_OBJECT(&(Local_2039.f_538[func_393(iVar7, iVar18, 2)]));
															}
														}
														if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[func_393(iVar7, iVar18, 3)]))
														{
															if (ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 3)]) > 0)
															{
																ENTITY::SET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 3)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_2039.f_538[func_393(iVar7, iVar18, 3)])), 0f, 0.1f, 0)), true);
															}
															else
															{
																OBJECT::DELETE_OBJECT(&(Local_2039.f_538[func_393(iVar7, iVar18, 3)]));
															}
														}
													}
													iVar18++;
													iVar12 = 0;
													iVar12 = 0;
													while (iVar12 < 11)
													{
														bVar25 = true;
														if (!Local_122.f_1525[iVar7] && iVar12 == 0)
														{
															bVar25 = false;
														}
														sVar14 = func_392(Local_122.f_846[iVar7 /*13*/][iVar12], bVar25);
														iVar13 = func_9(iVar7, iVar12);
														if (iVar13 >= 0 && iVar13 < (11 * Local_2039.f_257))
														{
															if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7])))
															{
																if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_3(iVar7), 3))
																{
																	if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
																	{
																		iVar27 = 0;
																		while (iVar27 < 11)
																		{
																			iVar28 = func_9(iVar7, iVar27);
																			if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_603[iVar28]))
																			{
																				iVar26 = iVar27;
																			}
																			iVar27++;
																		}
																		if (iVar12 == iVar26)
																		{
																			if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_603[iVar13]) && !ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																			{
																				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_603[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
																			}
																		}
																		else if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_603[iVar13]))
																		{
																			OBJECT::DELETE_OBJECT(&(Local_2039.f_603[iVar13]));
																			Local_2039.f_260[iVar13] = -1;
																		}
																	}
																	else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 585557868))
																	{
																		if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_603[iVar13]))
																		{
																			OBJECT::DELETE_OBJECT(&(Local_2039.f_603[iVar13]));
																			Local_2039.f_260[iVar13] = -1;
																		}
																	}
																}
																else if (Local_122.f_1520[iVar7] == 2 && ((!MISC::IS_STRING_NULL_OR_EMPTY(sVar14) && Local_122.f_846[iVar7 /*13*/][iVar12] != 0) || Local_2039.f_260[iVar13] != -1))
																{
																	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_392(Local_122.f_846[iVar7 /*13*/][iVar12], 1)) && func_397(Local_122.f_846[iVar7 /*13*/][iVar12], Local_2039.f_236) != 0)
																	{
																		Local_2039.f_260[iVar13] = -1;
																		if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_603[iVar13]))
																		{
																			iVar24 = Local_122.f_846[iVar7 /*13*/][iVar12];
																			if (!bVar25)
																			{
																				iVar24 = 0;
																			}
																			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_392(Local_122.f_846[iVar7 /*13*/][iVar12], 1)) && func_397(iVar24, Local_2039.f_236) != 0)
																			{
																				Local_2039.f_603[iVar13] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_397(iVar24, Local_2039.f_236), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_603[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																				ENTITY::SET_ENTITY_ROTATION(Local_2039.f_603[iVar13], Var15 + func_384(iVar12, bVar25), 2, true);
																				Local_2039.f_260[iVar13] = -1;
																			}
																		}
																		else if (iVar12 == 0)
																		{
																			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7])))
																			{
																				if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_33(iVar7), 3))
																				{
																					if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
																					{
																						if (!ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																						{
																							OBJECT::DELETE_OBJECT(&(Local_2039.f_603[iVar13]));
																							Local_2039.f_260[iVar13] = -1;
																							Local_2039.f_603[iVar13] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_397(Local_122.f_846[iVar7 /*13*/][iVar12], Local_2039.f_236), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_603[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2039.f_603[iVar13], Var15 + func_384(iVar12, 0), 2, true);
																							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_603[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
																						}
																					}
																					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 585557868))
																					{
																						if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																						{
																							ENTITY::DETACH_ENTITY(Local_2039.f_603[iVar13], false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_603[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2039.f_603[iVar13], Var15 + func_384(iVar12, 1), 2, true);
																						}
																					}
																				}
																				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_28(iVar7), 3))
																				{
																					if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
																					{
																						if (!ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																						{
																							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_603[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
																						}
																					}
																					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 585557868))
																					{
																						if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																						{
																							ENTITY::DETACH_ENTITY(Local_2039.f_603[iVar13], false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_603[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2039.f_603[iVar13], Var15 + func_384(iVar12, 0), 2, true);
																						}
																					}
																				}
																				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), func_58(), func_11(iVar7), 3))
																				{
																					if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
																					{
																						if (!ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																						{
																							OBJECT::DELETE_OBJECT(&(Local_2039.f_603[iVar13]));
																							Local_2039.f_260[iVar13] = -1;
																							Local_2039.f_603[iVar13] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_397(Local_122.f_846[iVar7 /*13*/][iVar12], Local_2039.f_236), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_603[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2039.f_603[iVar13], Var15 + func_384(iVar12, 0), 2, true);
																							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_603[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
																						}
																					}
																					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 585557868))
																					{
																						if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																						{
																							ENTITY::DETACH_ENTITY(Local_2039.f_603[iVar13], false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_603[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_2039.f_603[iVar13], Var15 + func_384(iVar12, 1), 2, true);
																						}
																					}
																				}
																				else if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																				{
																					ENTITY::DETACH_ENTITY(Local_2039.f_603[iVar13], false, true);
																					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_603[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																					ENTITY::SET_ENTITY_ROTATION(Local_2039.f_603[iVar13], Var15 + func_384(iVar12, bVar25), 2, true);
																				}
																			}
																		}
																		else if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																		{
																			ENTITY::DETACH_ENTITY(Local_2039.f_603[iVar13], false, true);
																			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_603[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																			ENTITY::SET_ENTITY_ROTATION(Local_2039.f_603[iVar13], Var15 + func_384(iVar12, bVar25), 2, true);
																		}
																	}
																	else if (Local_2039.f_260[iVar13] != -1)
																	{
																		if (!ENTITY::DOES_ENTITY_EXIST(Local_2039.f_603[iVar13]))
																		{
																			iVar24 = Local_2039.f_260[iVar13];
																			if (!bVar25)
																			{
																				iVar24 = 0;
																			}
																			Local_2039.f_603[iVar13] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_397(iVar24, Local_2039.f_236), Var8, false, false, true);
																			if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2039.f_603[iVar13])) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
																			{
																				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_603[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
																			}
																		}
																		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar7]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7])))
																		{
																			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_2039.f_603[iVar13]) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), -1345695206))
																			{
																				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2039.f_603[iVar13], NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true);
																			}
																			if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_122.f_1595[iVar7]), 585557868))
																			{
																				if (ENTITY::IS_ENTITY_ATTACHED(Local_2039.f_603[iVar13]))
																				{
																					ENTITY::DETACH_ENTITY(Local_2039.f_603[iVar13], false, true);
																					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2039.f_603[iVar13], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iVar7), Var15.f_2, func_385(iVar12)), false, false, true);
																					ENTITY::SET_ENTITY_ROTATION(Local_2039.f_603[iVar13], Var15 + func_384(iVar12, bVar25), 2, true);
																				}
																			}
																		}
																	}
																}
																else if (iVar13 >= 0 && iVar13 < (11 * Local_2039.f_257))
																{
																	if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_603[iVar13]))
																	{
																		OBJECT::DELETE_OBJECT(&(Local_2039.f_603[iVar13]));
																		Local_2039.f_260[iVar13] = -1;
																	}
																}
																iVar12++;
																iVar7++;
																iLocal_3683++;
																if (iLocal_3683 >= Local_2039.f_257)
																{
																	iLocal_3683 = 0;
																}
															}

Vector3 func_384(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 178.92f };
			break;
		
		case 1:
			Var0 = { 0f, 0f, -180f };
			break;
		
		case 2:
			Var0 = { 0f, 0f, -178.92f };
			break;
		
		case 3:
			Var0 = { 0f, 0f, -177.12f };
			break;
		
		case 4:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 5:
			Var0 = { 0f, 0f, 178.56f };
			break;
		
		case 6:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 7:
			Var0 = { 0f, 0f, 178.2f };
			break;
		
		case 8:
			Var0 = { 0f, 0f, -177.12f };
			break;
		
		case 9:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 10:
			Var0 = { 0f, 0f, 178.56f };
			break;
	}
	if (!bParam1)
	{
		Var0.x = 180f;
	}
	return Var0;
}

Vector3 func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.0356f, 0.2105f, 0.94885f;
		
		case 1:
			return -0.0436f, 0.21205f, 0.948875f;
		
		case 2:
			return -0.0636f, 0.213825f, 0.9496f;
		
		case 3:
			return -0.0806f, 0.2137f, 0.950225f;
		
		case 4:
			return -0.1006f, 0.21125f, 0.950875f;
		
		case 5:
			return -0.1256f, 0.21505f, 0.951875f;
		
		case 6:
			return -0.1416f, 0.21305f, 0.953f;
		
		case 7:
			return -0.1656f, 0.21205f, 0.954025f;
		
		case 8:
			return -0.1836f, 0.21255f, 0.95495f;
		
		case 9:
			return -0.2076f, 0.21105f, 0.956025f;
		
		case 10:
			return -0.2246f, 0.21305f, 0.957f;
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_386(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_387(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 72f;
					
					case 1:
						return 0f, 0f, 64.8f;
					
					case 2:
						return 0f, 0f, 74.52f;
					
					case 3:
						return 0f, 0f, 72f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 12.96f;
					
					case 1:
						return 0f, 0f, 29.16f;
					
					case 2:
						return 0f, 0f, 32.04f;
					
					case 3:
						return 0f, 0f, 32.04f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -18.36f;
					
					case 1:
						return 0f, 0f, -18.72f;
					
					case 2:
						return 0f, 0f, -15.48f;
					
					case 3:
						return 0f, 0f, -18f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -79.2f;
					
					case 1:
						return 0f, 0f, -68.76f;
					
					case 2:
						return 0f, 0f, -57.6f;
					
					case 3:
						return 0f, 0f, -64.8f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -16.56f;
							
							case 1:
								return 0f, 0f, -22.32f;
							
							case 2:
								return 0f, 0f, -10.8f;
							
							case 3:
								return 0f, 0f, -9.72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -69.12f;
							
							case 1:
								return 0f, 0f, -64.8f;
							
							case 2:
								return 0f, 0f, -58.68f;
							
							case 3:
								return 0f, 0f, -51.12f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -112.32f;
							
							case 1:
								return 0f, 0f, -108.36f;
							
							case 2:
								return 0f, 0f, -99.72f;
							
							case 3:
								return 0f, 0f, -102.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -155.88f;
							
							case 1:
								return 0f, 0f, -151.92f;
							
							case 2:
								return 0f, 0f, -147.24f;
							
							case 3:
								return 0f, 0f, -146.52f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 72f;
							
							case 1:
								return 0f, 0f, 64.8f;
							
							case 2:
								return 0f, 0f, 74.52f;
							
							case 3:
								return 0f, 0f, 72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 12.96f;
							
							case 1:
								return 0f, 0f, 29.16f;
							
							case 2:
								return 0f, 0f, 32.04f;
							
							case 3:
								return 0f, 0f, 32.04f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -18.36f;
							
							case 1:
								return 0f, 0f, -18.72f;
							
							case 2:
								return 0f, 0f, -15.48f;
							
							case 3:
								return 0f, 0f, -18f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -79.2f;
							
							case 1:
								return 0f, 0f, -68.76f;
							
							case 2:
								return 0f, 0f, -57.6f;
							
							case 3:
								return 0f, 0f, -64.8f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_388(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	struct<3> Var1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.712625f, 0.170625f, 0f };
						break;
					
					case 1:
						Var1 = { 0.6658f, 0.218375f, 0f };
						break;
					
					case 2:
						Var1 = { 0.756775f, 0.292775f, 0f };
						break;
					
					case 3:
						Var1 = { 0.701875f, 0.3439f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.278125f, -0.2571f, 0f };
						break;
					
					case 1:
						Var1 = { 0.280375f, -0.190375f, 0f };
						break;
					
					case 2:
						Var1 = { 0.397775f, -0.208525f, 0f };
						break;
					
					case 3:
						Var1 = { 0.39715f, -0.1354f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.30305f, -0.2464f, 0f };
						break;
					
					case 1:
						Var1 = { -0.257975f, -0.19715f, 0f };
						break;
					
					case 2:
						Var1 = { -0.186575f, -0.2861f, 0f };
						break;
					
					case 3:
						Var1 = { -0.141675f, -0.237925f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.72855f, 0.17345f, 0f };
						break;
					
					case 1:
						Var1 = { -0.652825f, 0.177525f, 0f };
						break;
					
					case 2:
						Var1 = { -0.6783f, 0.0744f, 0f };
						break;
					
					case 3:
						Var1 = { -0.604425f, 0.082575f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.6931f, 0.1952f, 0f };
								break;
							
							case 1:
								Var1 = { 0.724925f, 0.26955f, 0f };
								break;
							
							case 2:
								Var1 = { 0.7374f, 0.349625f, 0f };
								break;
							
							case 3:
								Var1 = { 0.76415f, 0.419225f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.2827f, -0.227825f, 0f };
								break;
							
							case 1:
								Var1 = { 0.3605f, -0.1898f, 0f };
								break;
							
							case 2:
								Var1 = { 0.4309f, -0.16365f, 0f };
								break;
							
							case 3:
								Var1 = { 0.49275f, -0.111575f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.279425f, -0.2238f, 0f };
								break;
							
							case 1:
								Var1 = { -0.200775f, -0.25855f, 0f };
								break;
							
							case 2:
								Var1 = { -0.125775f, -0.26815f, 0f };
								break;
							
							case 3:
								Var1 = { -0.05615f, -0.29435f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.685925f, 0.173275f, 0f };
								break;
							
							case 1:
								Var1 = { -0.6568f, 0.092525f, 0f };
								break;
							
							case 2:
								Var1 = { -0.612875f, 0.033025f, 0f };
								break;
							
							case 3:
								Var1 = { -0.58465f, -0.0374f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.712625f, 0.170625f, 0f };
								break;
							
							case 1:
								Var1 = { 0.6658f, 0.218375f, 0f };
								break;
							
							case 2:
								Var1 = { 0.756775f, 0.292775f, 0f };
								break;
							
							case 3:
								Var1 = { 0.701875f, 0.3439f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.278125f, -0.2571f, 0f };
								break;
							
							case 1:
								Var1 = { 0.280375f, -0.190375f, 0f };
								break;
							
							case 2:
								Var1 = { 0.397775f, -0.208525f, 0f };
								break;
							
							case 3:
								Var1 = { 0.39715f, -0.1354f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.30305f, -0.2464f, 0f };
								break;
							
							case 1:
								Var1 = { -0.257975f, -0.19715f, 0f };
								break;
							
							case 2:
								Var1 = { -0.186575f, -0.2861f, 0f };
								break;
							
							case 3:
								Var1 = { -0.141675f, -0.237925f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.72855f, 0.17345f, 0f };
								break;
							
							case 1:
								Var1 = { -0.652825f, 0.177525f, 0f };
								break;
							
							case 2:
								Var1 = { -0.6783f, 0.0744f, 0f };
								break;
							
							case 3:
								Var1 = { -0.604425f, 0.082575f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	Var1.f_2 = fVar0;
	return Var1;
}

int func_389(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		
		default:
	}
	return 0;
}

Vector3 func_390(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 69.12f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67.8f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 66.6f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 70.44f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 70.84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 67.88f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 69.56f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22.32f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 20.8f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 19.8f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 19.44f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26.28f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 22.68f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -21.43f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -20.16f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16.92f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -23.4f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -21.24f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -23.76f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -19.44f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -69.12f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -64.44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -67.68f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -63.72f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -68.4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -64.44f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 68.57f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67.52f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 67.76f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 67.04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 68.84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 65.96f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 67.76f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 24.44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 21.08f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 25.96f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26.16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 28.76f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -14.04f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -15.48f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16.56f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -15.84f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -16.92f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -14.4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -14.28f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -67.6f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -69.4f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -69.04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -68.68f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -66.16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -63.28f };
						break;
				}
				break;
			}
	}
	if (bParam3)
	{
		Var0.f_2 = (Var0.f_2 + 90f);
	}
	return Var0;
}

Vector3 func_391(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.5737f, 0.2376f, 0.948025f;
					
					case 1:
						return 0.562975f, 0.2523f, 0.94875f;
					
					case 2:
						return 0.553875f, 0.266325f, 0.94955f;
					
					case 3:
						return 0.5459f, 0.282075f, 0.9501f;
					
					case 4:
						return 0.536125f, 0.29645f, 0.95085f;
					
					case 5:
						return 0.524975f, 0.30975f, 0.9516f;
					
					case 6:
						return 0.515775f, 0.325325f, 0.95235f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.2325f, -0.1082f, 0.94805f;
					
					case 1:
						return 0.23645f, -0.0918f, 0.949f;
					
					case 2:
						return 0.2401f, -0.074475f, 0.950225f;
					
					case 3:
						return 0.244625f, -0.057675f, 0.951125f;
					
					case 4:
						return 0.249675f, -0.041475f, 0.95205f;
					
					case 5:
						return 0.257575f, -0.0256f, 0.9532f;
					
					case 6:
						return 0.2601f, -0.008175f, 0.954375f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.2359f, -0.1091f, 0.9483f;
					
					case 1:
						return -0.221025f, -0.100675f, 0.949f;
					
					case 2:
						return -0.20625f, -0.092875f, 0.949725f;
					
					case 3:
						return -0.193225f, -0.07985f, 0.950325f;
					
					case 4:
						return -0.1776f, -0.072f, 0.951025f;
					
					case 5:
						return -0.165f, -0.060025f, 0.951825f;
					
					case 6:
						return -0.14895f, -0.05155f, 0.95255f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5765f, 0.2229f, 0.9482f;
					
					case 1:
						return -0.558925f, 0.2197f, 0.949175f;
					
					case 2:
						return -0.5425f, 0.213025f, 0.9499f;
					
					case 3:
						return -0.525925f, 0.21105f, 0.95095f;
					
					case 4:
						return -0.509475f, 0.20535f, 0.9519f;
					
					case 5:
						return -0.491775f, 0.204075f, 0.952825f;
					
					case 6:
						return -0.4752f, 0.197525f, 0.9543f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.6083f, 0.3523f, 0.94795f;
					
					case 1:
						return 0.598475f, 0.366475f, 0.948925f;
					
					case 2:
						return 0.589525f, 0.3807f, 0.94975f;
					
					case 3:
						return 0.58045f, 0.39435f, 0.950375f;
					
					case 4:
						return 0.571975f, 0.4092f, 0.951075f;
					
					case 5:
						return 0.5614f, 0.4237f, 0.951775f;
					
					case 6:
						return 0.554325f, 0.4402f, 0.952525f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.3431f, -0.0527f, 0.94855f;
					
					case 1:
						return 0.348575f, -0.0348f, 0.949425f;
					
					case 2:
						return 0.35465f, -0.018825f, 0.9502f;
					
					case 3:
						return 0.3581f, -0.001625f, 0.95115f;
					
					case 4:
						return 0.36515f, 0.015275f, 0.952075f;
					
					case 5:
						return 0.368525f, 0.032475f, 0.95335f;
					
					case 6:
						return 0.373275f, 0.0506f, 0.9543f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.116f, -0.1501f, 0.947875f;
					
					case 1:
						return -0.102725f, -0.13795f, 0.948525f;
					
					case 2:
						return -0.08975f, -0.12665f, 0.949175f;
					
					case 3:
						return -0.075025f, -0.1159f, 0.949875f;
					
					case 4:
						return -0.0614f, -0.104775f, 0.9507f;
					
					case 5:
						return -0.046275f, -0.095025f, 0.9516f;
					
					case 6:
						return -0.031425f, -0.0846f, 0.952675f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5205f, 0.1122f, 0.9478f;
					
					case 1:
						return -0.503175f, 0.108525f, 0.94865f;
					
					case 2:
						return -0.485125f, 0.10475f, 0.949175f;
					
					case 3:
						return -0.468275f, 0.099175f, 0.94995f;
					
					case 4:
						return -0.45155f, 0.09435f, 0.95085f;
					
					case 5:
						return -0.434475f, 0.089725f, 0.95145f;
					
					case 6:
						return -0.415875f, 0.0846f, 0.9523f;
					
					default:
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

char* func_392(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return " ---- ";
	}
	switch (iParam0)
	{
		case 1:
			return " A  C ";
		
		case 2:
			return " 2  C ";
		
		case 3:
			return " 3  C ";
		
		case 4:
			return " 4  C ";
		
		case 5:
			return " 5  C ";
		
		case 6:
			return " 6  C ";
		
		case 7:
			return " 7  C ";
		
		case 8:
			return " 8  C ";
		
		case 9:
			return " 9  C ";
		
		case 10:
			return " 10 C ";
		
		case 11:
			return " J  C ";
		
		case 12:
			return " Q  C ";
		
		case 13:
			return " K  C ";
		
		case 14:
			return " A  D ";
		
		case 15:
			return " 2  D ";
		
		case 16:
			return " 3  D ";
		
		case 17:
			return " 4  D ";
		
		case 18:
			return " 5  D ";
		
		case 19:
			return " 6  D ";
		
		case 20:
			return " 7  D ";
		
		case 21:
			return " 8  D ";
		
		case 22:
			return " 9  D ";
		
		case 23:
			return " 10 D ";
		
		case 24:
			return " J  D ";
		
		case 25:
			return " Q  D ";
		
		case 26:
			return " K  D ";
		
		case 27:
			return " A  H ";
		
		case 28:
			return " 2  H ";
		
		case 29:
			return " 3  H ";
		
		case 30:
			return " 4  H ";
		
		case 31:
			return " 5  H ";
		
		case 32:
			return " 6  H ";
		
		case 33:
			return " 7  H ";
		
		case 34:
			return " 8  H ";
		
		case 35:
			return " 9  H ";
		
		case 36:
			return " 10 H ";
		
		case 37:
			return " J  H ";
		
		case 38:
			return " Q  H ";
		
		case 39:
			return " K  H ";
		
		case 40:
			return " A  S ";
		
		case 41:
			return " 2  S ";
		
		case 42:
			return " 3  S ";
		
		case 43:
			return " 4  S ";
		
		case 44:
			return " 5  S ";
		
		case 45:
			return " 6  S ";
		
		case 46:
			return " 7  S ";
		
		case 47:
			return " 8  S ";
		
		case 48:
			return " 9  S ";
		
		case 49:
			return " 10 S ";
		
		case 50:
			return " J  S ";
		
		case 51:
			return " Q  S ";
		
		case 52:
			return " K  S ";
		
		default:
	}
	return "";
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 4 * 4 + iParam1 * 4) + iParam2);
}

int func_394(int iParam0)
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			return MISC::IS_BIT_SET(Local_2039.f_530, (iParam0 % 32));
		
		case 1:
			return MISC::IS_BIT_SET(Local_2039.f_531, (iParam0 % 32));
		
		case 2:
			return MISC::IS_BIT_SET(Local_2039.f_532, (iParam0 % 32));
		
		case 3:
			return MISC::IS_BIT_SET(Local_2039.f_533, (iParam0 % 32));
		
		case 4:
			return MISC::IS_BIT_SET(Local_2039.f_534, (iParam0 % 32));
		
		case 5:
			return MISC::IS_BIT_SET(Local_2039.f_535, (iParam0 % 32));
		
		case 6:
			return MISC::IS_BIT_SET(Local_2039.f_536, (iParam0 % 32));
		
		default:
	}
	return 0;
}

void func_395(int iParam0)
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			MISC::CLEAR_BIT(&(Local_2039.f_530), (iParam0 % 32));
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(Local_2039.f_531), (iParam0 % 32));
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(Local_2039.f_532), (iParam0 % 32));
			break;
		
		case 3:
			MISC::CLEAR_BIT(&(Local_2039.f_533), (iParam0 % 32));
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Local_2039.f_534), (iParam0 % 32));
			break;
		
		case 5:
			MISC::CLEAR_BIT(&(Local_2039.f_535), (iParam0 % 32));
			break;
		
		case 6:
			MISC::CLEAR_BIT(&(Local_2039.f_536), (iParam0 % 32));
			break;
	}
}

void func_396(int iParam0)
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			MISC::SET_BIT(&(Local_2039.f_530), (iParam0 % 32));
			break;
		
		case 1:
			MISC::SET_BIT(&(Local_2039.f_531), (iParam0 % 32));
			break;
		
		case 2:
			MISC::SET_BIT(&(Local_2039.f_532), (iParam0 % 32));
			break;
		
		case 3:
			MISC::SET_BIT(&(Local_2039.f_533), (iParam0 % 32));
			break;
		
		case 4:
			MISC::SET_BIT(&(Local_2039.f_534), (iParam0 % 32));
			break;
		
		case 5:
			MISC::SET_BIT(&(Local_2039.f_535), (iParam0 % 32));
			break;
		
		case 6:
			MISC::SET_BIT(&(Local_2039.f_536), (iParam0 % 32));
			break;
	}
}

int func_397(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_a_a");
			
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_02a");
			
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_03a");
			
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_04a");
			
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_05a");
			
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_06a");
			
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_07a");
			
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_08a");
			
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_09a");
			
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_10a");
			
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_j_a");
			
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_q_a");
			
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_k_a");
			
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_02a");
			
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_03a");
			
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_04a");
			
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_05a");
			
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_06a");
			
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_07a");
			
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_08a");
			
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_09a");
			
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_10a");
			
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_02a");
			
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_03a");
			
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_04a");
			
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_05a");
			
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_06a");
			
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_07a");
			
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_08a");
			
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_09a");
			
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_10a");
			
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_ace");
			
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_02");
			
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_03");
			
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_04");
			
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_05");
			
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_06");
			
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_07");
			
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_08");
			
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_09");
			
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_10");
			
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_jack");
			
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_queen");
			
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_king");
			
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_ace");
			
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_02");
			
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_03");
			
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_04");
			
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_05");
			
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_06");
			
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_07");
			
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_08");
			
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_09");
			
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_10");
			
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_jack");
			
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_queen");
			
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_king");
			
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_02");
			
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_03");
			
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_04");
			
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_05");
			
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_06");
			
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_07");
			
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_08");
			
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_09");
			
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_10");
			
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_king");
			
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_ace");
			
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_02");
			
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_03");
			
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_04");
			
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_05");
			
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_06");
			
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_07");
			
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_08");
			
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_09");
			
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_10");
			
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_jack");
			
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_queen");
			
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	if (bParam1)
	{
		return MISC::GET_HASH_KEY("vw_prop_vw_jo_char_01a");
	}
	return MISC::GET_HASH_KEY("vw_prop_casino_cards_single");
}

void func_398()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_399(iVar0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		iVar0++;
	}
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		
		default:
	}
	return 0;
}

int func_400()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_399(iVar0);
		STREAMING::REQUEST_MODEL(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_401()
{
	return MISC::IS_BIT_SET(Global_1678289.f_6, 12);
}

int func_402()
{
	return func_403(8249, -1, 0);
}

int func_403(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2552060[iParam0 /*3*/][func_404(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_404(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2551772 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551772 = 1;
		}
	}
	return iVar0;
}

void func_405()
{
	if (Local_2039.f_257 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3694))
		{
			if (func_420() != func_419())
			{
				iLocal_3694 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(0), 1f, func_218(Global_2426097[func_420() /*443*/].f_442), false, false, false);
			}
		}
		else if (func_420() != func_419() && CAM::IS_SCREEN_FADED_OUT())
		{
			if (OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_3694) != func_363(func_420()))
			{
				OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_3694, func_363(func_420()));
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3695))
		{
			iLocal_3695 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1129.406f, 262.3578f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
		}
		else if (OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_3695) != 3)
		{
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_3695, 3);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3696))
		{
			iLocal_3696 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1144.429f, 247.3352f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3696) && OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_3696) != 3)
		{
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_3696, 3);
		}
	}
}

void func_406()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2039.f_257)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3675[iVar0]))
		{
			func_407(iVar0);
		}
		iVar0++;
	}
}

void func_407(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Local_2039.f_236)
	{
		iVar0 = joaat("vw_prop_vw_jo_char_01a");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_single");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3675[iParam0]))
	{
		iVar1 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, func_409(iParam0), false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_409(iParam0), false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iVar1, func_408(iParam0), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		iLocal_3675[iParam0] = iVar1;
	}
}

Vector3 func_408(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 164.52f, 11.5f };
	return Vector(func_69(iParam0), 0f, 0f) + Var0;
}

Vector3 func_409(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0.526f, 0.571f, 0.963f };
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_70(iParam0), func_69(iParam0), Var0);
}

int func_410()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_397(iVar1, Local_2039.f_236);
		STREAMING::REQUEST_MODEL(iVar2);
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_411()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2039.f_257)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3675[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_3675[iVar0]));
		}
		iVar0++;
	}
}

void func_412()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_397(iVar1, Local_2039.f_236);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		iVar0++;
	}
}

void func_413()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_2039.f_257)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_1595[iVar0]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_122.f_1595[iVar0]);
			if (func_415(iVar1))
			{
				if (func_414(iVar0))
				{
					AUDIO::_0xF8AD2EED7C47E8FE(iVar1, false, true);
				}
				else
				{
					AUDIO::_0xF8AD2EED7C47E8FE(iVar1, true, false);
				}
			}
		}
		iVar0++;
	}
}

int func_414(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_4, 5) || MISC::IS_BIT_SET(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_4, 3))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_4, 2))
	{
		if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_415(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_416()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	return 0;
}

int func_417()
{
	return func_418(PLAYER::PLAYER_ID());
}

int func_418(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2426097[iParam0 /*443*/].f_314.f_3, 28, 31);
}

int func_419()
{
	return -1;
}

int func_420()
{
	return func_421(PLAYER::PLAYER_ID());
}

int func_421(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_419())
	{
		return iParam0;
	}
	if (func_423(iParam0) != -1)
	{
		iVar0 = func_422(func_423(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_314(iParam0, 0))
			{
				return func_212(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_419();
		}
		return Global_2426097[iParam0 /*443*/].f_314.f_9;
	}
	return func_419();
}

int func_422(int iParam0)
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
	}
	return -1;
}

int func_423(int iParam0)
{
	if (iParam0 != func_419())
	{
		if (func_20(iParam0, 1, 1))
		{
			return Global_2426097[iParam0 /*443*/].f_314.f_6;
		}
		else if (((Global_1312896 || Global_2405074.f_2673) && iParam0 == PLAYER::PLAYER_ID()) && func_20(iParam0, 1, 0))
		{
			return Global_2426097[iParam0 /*443*/].f_314.f_6;
		}
	}
	return -1;
}

int func_424(int iParam0)
{
	if (iParam0 != func_419() && func_20(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_425(int iParam0)
{
	if (iParam0 != func_419())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_422(Global_2426097[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_426(int iParam0)
{
	if (iParam0 != func_419())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_422(Global_2426097[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

bool func_427()
{
	return MISC::IS_BIT_SET(Global_1678289.f_3, 2);
}

void func_428()
{
	if (Local_2039.f_1 > 2)
	{
		if (Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
		{
			Local_3626.f_9 = Local_122.f_1570[Local_1782[PLAYER::PLAYER_ID() /*8*/].f_4];
		}
		Local_3626.f_18 = func_416();
		Local_3626.f_19 = func_192();
		Local_3626.f_17 = func_190(&uLocal_3622, 0, 0);
		Local_3626.f_7 = func_402();
		if (Global_262145.f_26109)
		{
			STATS::_PLAYSTATS_CASINO_BLACKJACK(&Local_3626);
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_376(0);
	func_412();
	func_398();
	func_431();
	func_430();
	func_411();
	if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_537))
	{
		OBJECT::DELETE_OBJECT(&(Local_2039.f_537));
	}
	if (Local_2039.f_1 > 0)
	{
		STREAMING::REMOVE_ANIM_DICT(func_58());
		STREAMING::REMOVE_ANIM_DICT(func_72());
		STREAMING::REMOVE_ANIM_DICT(func_88());
		STREAMING::REMOVE_ANIM_DICT(func_216());
	}
	Global_1696914 = 0;
	func_429();
}

void func_429()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_430()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (16 * Local_2039.f_257);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_538[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(Local_2039.f_538[iVar1]));
		}
		iVar1++;
	}
}

void func_431()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (11 * Local_2039.f_257);
	iVar1 = (56 * Local_2039.f_257);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_648[iVar2]))
		{
			OBJECT::DELETE_OBJECT(&(Local_2039.f_648[iVar2]));
			Local_2039.f_305[iVar2] = -1;
			func_395(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2039.f_603[iVar2]))
		{
			OBJECT::DELETE_OBJECT(&(Local_2039.f_603[iVar2]));
			Local_2039.f_260[iVar2] = -1;
		}
		iVar2++;
	}
}

int func_432()
{
	var uVar0;
	
	func_440(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_439())
	{
		return 1;
	}
	if (Global_2464721)
	{
		return 1;
	}
	if (func_438())
	{
		return 1;
	}
	if (func_437(159))
	{
		if (!func_436())
		{
			return 1;
		}
	}
	if (func_437(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_433() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_433()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_433()
{
	switch (func_435())
	{
		case 0:
			return func_434();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_434()
{
	switch (Global_2464823)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_435()
{
	return Global_30968;
}

bool func_436()
{
	return Global_2452015.f_696;
}

int func_437(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_438()
{
	return Global_2462478;
}

bool func_439()
{
	return Global_2452015.f_691;
}

void func_440(var uParam0)
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
				case 1035596089:
					func_441(iVar0);
					break;
				
				case 1120313136:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
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

void func_441(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_20(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_442(iVar4, &bVar5))
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

int func_442(int iParam0, var uParam1)
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

void func_443()
{
	int iVar0;
	int iVar1;
	
	if (Global_1696906)
	{
		Global_1696906 = 0;
	}
	if (func_425(PLAYER::PLAYER_ID()) && func_420() != func_419())
	{
		if (MISC::IS_BIT_SET(Global_2426097[func_420() /*443*/].f_314.f_4, 4))
		{
			Local_2039.f_236 = 1;
		}
		Global_1696916 = Global_2426097[func_420() /*443*/].f_442;
	}
	while (!(Global_2516633 != -1 || func_425(PLAYER::PLAYER_ID())))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_428();
		}
		if (func_432())
		{
			func_428();
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	if (func_425(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_447();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, iVar0);
	func_445(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_122, 1660);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1782, 257);
	if (func_425(PLAYER::PLAYER_ID()))
	{
		Local_2039.f_257 = 1;
		NETWORK::_RESERVE_NETWORK_LOCAL_PEDS(1);
	}
	else
	{
		NETWORK::_RESERVE_NETWORK_LOCAL_PEDS(3);
	}
	if (!func_444())
	{
		func_428();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else
	{
		func_428();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_425(PLAYER::PLAYER_ID()))
		{
			Local_122.f_1550[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		else
		{
			Local_122.f_1550[0] = Global_2516647[0];
			Local_122.f_1550[1] = Global_2516647[1];
			Local_122.f_1550[2] = Global_2516647[2];
			Local_122.f_1550[3] = Global_2516647[3];
		}
	}
	Global_1696914 = 1;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		Local_2039.f_260[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 224)
	{
		Local_2039.f_305[iVar1] = -1;
		func_395(iVar1);
		iVar1++;
	}
}

int func_444()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_439())
		{
			return 0;
		}
		if (func_437(157))
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

int func_445(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_429();
			}
			else
			{
				return 0;
			}
		}
		if (!func_446())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_429();
					}
					else
					{
						return 0;
					}
				}
				if (func_439())
				{
					if (!bParam2)
					{
						func_429();
					}
					else
					{
						return 0;
					}
				}
				if (func_437(157))
				{
					if (!bParam2)
					{
						func_429();
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
					func_429();
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
				func_429();
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
			func_429();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_446()
{
	return Global_1312872;
}

int func_447()
{
	var uVar0;
	
	uVar0 = Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_7;
	return uVar0;
}

