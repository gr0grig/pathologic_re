// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		func_6726();
		bool var_31_bool;
		func_4906(var_31_bool);
		if(!var_31_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_4971("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_31_object;
		var_30_bool = var_31_object;
		func_6730(var_31_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_4894(var_31_bool, var_32_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4989();
			if(var_30_string == 510) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5731();
				func_170(var_31_bool, "Neutral");
				var_0_object->SetMessage(441); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8443, 9267, 9266); //@t
				return 0;
			}
			if(var_30_string == 9267) {
				func_170(var_31_bool, "Neutral");
				var_0_object->SetMessage(8444); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(443, 519, 512); //@t
				var_0_object->AddReply(442, 513, 511); //@t
				return 0;
			}
			if(var_30_string == 513) {
				func_170(var_31_bool, "Neutral");
				var_0_object->SetMessage(444); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(445, 516, 514); //@t
				var_0_object->AddReply(446, -1, 515); //@t
				return 0;
			}
			if(var_30_string == 516) {
				func_170(var_31_bool, "Neutral");
				var_0_object->SetMessage(447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(449, -1, 518); //@t
				var_0_object->AddReply(448, -1, 517); //@t
				return 0;
			}
			if(var_30_string == 519) {
				func_170(var_31_bool, "Neutral");
				var_0_object->SetMessage(450); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(451, 522, 520); //@t
				var_0_object->AddReply(452, -1, 521); //@t
				return 0;
			}
			if(var_30_string == 522) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_5828();
				func_170(var_31_bool, "Neutral");
				var_0_object->SetMessage(453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(454, -1, 523); //@t
				var_0_object->AddReply(455, -1, 524); //@t
				return 0;
			}
			var_3_string = true;
			bool var_113_bool;
			func_5101(var_113_bool);
			if(var_113_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbb";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4989();
			if(var_31_bool == 13929) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5545();
			}
			if(var_31_bool == 11890) {
				object var_42_object = var_1_object;
				func_5551(var_0_object);
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_5565();
			}
			if(var_31_bool == 11891) {
				object var_92_object = var_1_object;
				func_5551(var_0_object);
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_5565();
			}
			if(var_31_bool == 13930) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_5571();
			}
			if(var_31_bool == 11915) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_5589();
			}
			if(var_31_bool == 3969) {
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_5577();
			}
			if(var_31_bool == 3968) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_5583();
			}
			if(var_30_string == 3967) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(3662); //@t
				var_0_object->ClearReplies(); //@t
				bool var_210_bool = false;
				bool var_211_bool;
				func_6169(var_1_object);
				if(var_211_bool != 0) {
					bool var_219_bool;
					func_6181(var_1_object);
					if(var_219_bool != 0)
						var_210_bool = true;
				}
				if(var_210_bool != 0)
					var_0_object->AddReply(12735, 11881, 13929); //@t
				bool var_228_bool = false;
				bool var_229_bool = false;
				bool var_230_bool = false;
				bool var_231_bool;
				func_6193(var_1_object);
				if(var_231_bool != 0) {
					bool var_237_bool;
					func_6205(var_1_object);
					if(var_237_bool != 0)
						var_230_bool = true;
				}
				if(var_230_bool != 0) {
					bool var_243_bool;
					func_6253(var_1_object);
					if(!var_243_bool) //@nz
						var_229_bool = true;
				}
				if(var_229_bool != 0) {
					bool var_250_bool;
					func_6265(var_1_object);
					if(!var_250_bool) //@nz
						var_228_bool = true;
				}
				if(var_228_bool != 0)
					var_0_object->AddReply(12736, 11904, 13930); //@t
				bool var_260_bool = false;
				bool var_261_bool;
				func_6217(var_1_object);
				if(var_261_bool != 0) {
					bool var_267_bool;
					func_5993(var_1_object);
					if(var_267_bool != 0)
						var_260_bool = true;
				}
				if(var_260_bool != 0)
					var_0_object->AddReply(3664, 3970, 3969); //@t
				bool var_276_bool;
				func_6241(var_1_object);
				if(var_276_bool != 0)
					var_0_object->AddReply(3663, 3972, 3968); //@t
				var_0_object->AddReply(13019, -1, 14225); //@t
				return 0;
			}
			if(var_30_string == 3972) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(3667); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3668, 3975, 3973); //@t
				var_0_object->AddReply(3669, 3975, 3974); //@t
				var_0_object->AddReply(3672, 3991, 3978); //@t
				return 0;
			}
			if(var_30_string == 3991) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(3683); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3684, 3972, 3992); //@t
				return 0;
			}
			if(var_30_string == 3975) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(3670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3671, 3981, 3976); //@t
				var_0_object->AddReply(3673, -1, 3980); //@t
				return 0;
			}
			if(var_30_string == 3981) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(3674); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3675, 3984, 3982); //@t
				var_0_object->AddReply(3676, 3984, 3983); //@t
				return 0;
			}
			if(var_30_string == 3984) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(3677); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3678, 3988, 3986); //@t
				var_0_object->AddReply(3679, 3988, 3987); //@t
				return 0;
			}
			if(var_30_string == 3988) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(3680); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3681, -1, 3989); //@t
				var_0_object->AddReply(3682, -1, 3990); //@t
				var_0_object->AddReply(3685, -1, 3995); //@t
				return 0;
			}
			if(var_30_string == 3970) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(3665); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3666, -1, 3971); //@t
				return 0;
			}
			if(var_30_string == 11904) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10774, 11906, 11905); //@t
				var_0_object->AddReply(10789, 11906, 11923); //@t
				var_0_object->AddReply(10790, 11906, 11925); //@t
				return 0;
			}
			if(var_30_string == 11906) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10776, 11908, 11907); //@t
				var_0_object->AddReply(10788, 11908, 11921); //@t
				return 0;
			}
			if(var_30_string == 11908) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10778, 11910, 11909); //@t
				var_0_object->AddReply(10787, 11910, 11920); //@t
				return 0;
			}
			if(var_30_string == 11910) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10779); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10780, 11912, 11911); //@t
				var_0_object->AddReply(10785, 11912, 11916); //@t
				var_0_object->AddReply(10786, 11912, 11918); //@t
				return 0;
			}
			if(var_30_string == 11912) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10782, -1, 11913); //@t
				var_0_object->AddReply(10783, -1, 11914); //@t
				var_0_object->AddReply(10784, -1, 11915); //@t
				return 0;
			}
			if(var_30_string == 11881) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10754, 11883, 11882); //@t
				var_0_object->AddReply(10767, 11897, 11896); //@t
				var_0_object->AddReply(10769, 11899, 11898); //@t
				return 0;
			}
			if(var_30_string == 11899) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10770); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10771, 11885, 11900); //@t
				var_0_object->AddReply(10772, 11897, 11902); //@t
				return 0;
			}
			if(var_30_string == 11897) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10768); //@t
				var_0_object->ClearReplies(); //@t
				return 0;
			}
			if(var_30_string == 11883) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10755); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10756, 11885, 11884); //@t
				var_0_object->AddReply(10766, -1, 11895); //@t
				return 0;
			}
			if(var_30_string == 11885) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10758, 11887, 11886); //@t
				var_0_object->AddReply(10765, -1, 11894); //@t
				return 0;
			}
			if(var_30_string == 11887) {
				func_551(var_31_bool, "Grief");
				var_0_object->SetMessage(10759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10760, 11889, 11888); //@t
				var_0_object->AddReply(10764, 11889, 11892); //@t
				return 0;
			}
			if(var_30_string == 11889) {
				func_551(var_31_bool, "Neutral");
				var_0_object->SetMessage(10761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10762, -1, 11890); //@t
				var_0_object->AddReply(10763, -1, 11891); //@t
				return 0;
			}
			var_3_string = true;
			bool var_484_bool;
			func_5101(var_484_bool);
			if(var_484_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x238";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4989();
			if(var_31_bool == 6898) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5103();
			}
			if(var_31_bool == 6899) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_5103();
			}
			if(var_31_bool == 9508) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_5331();
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_5109();
			}
			if(var_31_bool == 8859) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_5115();
			}
			if(var_31_bool == 8862) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_5743();
			}
			if(var_31_bool == 8865) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_5749();
			}
			if(var_31_bool == 8869) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_5755();
			}
			if(var_31_bool == 8870) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_5761();
			}
			if(var_31_bool == 8874) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_5767();
			}
			if(var_31_bool == 8875) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_5773();
			}
			if(var_30_string == 5972) {
				bool var_123_bool = false;
				bool var_124_bool = false;
				bool var_125_bool = false;
				bool var_126_bool = false;
				bool var_127_bool;
				func_5846(var_1_object);
				if(var_127_bool != 0) {
					bool var_135_bool;
					func_5894(var_1_object);
					if(!var_135_bool) //@nz
						var_126_bool = true;
				}
				if(var_126_bool != 0) {
					bool var_142_bool;
					func_5882(var_1_object);
					if(!var_142_bool) //@nz
						var_125_bool = true;
				}
				if(var_125_bool != 0) {
					bool var_149_bool;
					func_6005(var_1_object);
					if(var_149_bool != 0)
						var_124_bool = true;
				}
				if(var_124_bool != 0) {
					bool var_155_bool;
					func_5858(var_1_object);
					if(!var_155_bool) //@nz
						var_123_bool = true;
				}
				if(var_123_bool != 0) {
					func_1585(var_31_bool, "Neutral");
					var_0_object->SetMessage(5423); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5447, 6886, 6001); //@t
					var_0_object->AddReply(6231, 6893, 6892); //@t
					return 0;
				}
				bool var_184_bool = false;
				bool var_185_bool = false;
				bool var_186_bool = false;
				bool var_187_bool;
				func_5858(var_1_object);
				if(var_187_bool != 0) {
					bool var_189_bool;
					func_5894(var_1_object);
					if(!var_189_bool) //@nz
						var_186_bool = true;
				}
				if(var_186_bool != 0) {
					bool var_192_bool;
					func_5882(var_1_object);
					if(!var_192_bool) //@nz
						var_185_bool = true;
				}
				if(var_185_bool != 0) {
					bool var_195_bool;
					func_6005(var_1_object);
					if(!var_195_bool) //@nz
						var_184_bool = true;
				}
				if(var_184_bool != 0) {
					func_1585(var_31_bool, "Neutral");
					var_0_object->SetMessage(8666); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(8667, 9493, 9492); //@t
					return 0;
				}
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8034); //@t
				var_0_object->ClearReplies(); //@t
				bool var_205_bool = true;
				bool var_206_bool = false;
				bool var_207_bool;
				func_6017(var_207_bool, var_1_object);
				if(var_207_bool != 0) {
					bool var_218_bool;
					func_5870(var_1_object);
					if(var_218_bool != 0)
						var_206_bool = true;
				}
				if(var_206_bool != 1) {
					bool var_224_bool = false;
					bool var_225_bool;
					func_6075(var_225_bool, var_1_object);
					if(var_225_bool != 0) {
						bool var_236_bool;
						func_5870(var_1_object);
						if(var_236_bool != 0)
							var_224_bool = true;
					}
					if(var_224_bool != 1)
						var_205_bool = false;
				}
				if(var_205_bool != 0)
					var_0_object->AddReply(8036, 5976, 8859); //@t
				bool var_241_bool = false;
				bool var_242_bool;
				func_6385(var_1_object);
				if(var_242_bool != 0) {
					bool var_248_bool;
					func_6301(var_1_object);
					if(var_248_bool != 0)
						var_241_bool = true;
				}
				if(var_241_bool != 0)
					var_0_object->AddReply(8039, 5991, 8862); //@t
				bool var_257_bool = false;
				bool var_258_bool;
				func_6277(var_1_object);
				if(var_258_bool != 0) {
					bool var_264_bool;
					func_6313(var_1_object);
					if(var_264_bool != 0)
						var_257_bool = true;
				}
				if(var_257_bool != 0)
					var_0_object->AddReply(8042, 8884, 8865); //@t
				bool var_273_bool = false;
				bool var_274_bool;
				func_6289(var_1_object);
				if(var_274_bool != 0) {
					bool var_280_bool;
					func_6325(var_1_object);
					if(var_280_bool != 0)
						var_273_bool = true;
				}
				if(var_273_bool != 0)
					var_0_object->AddReply(8046, 8885, 8869); //@t
				bool var_289_bool = false;
				bool var_290_bool;
				func_6229(var_1_object);
				if(var_290_bool != 0) {
					bool var_296_bool;
					func_6337(var_1_object);
					if(var_296_bool != 0)
						var_289_bool = true;
				}
				if(var_289_bool != 0)
					var_0_object->AddReply(8047, 8886, 8870); //@t
				bool var_305_bool = false;
				bool var_306_bool;
				func_6373(var_1_object);
				if(var_306_bool != 0) {
					bool var_312_bool;
					func_6349(var_1_object);
					if(var_312_bool != 0)
						var_305_bool = true;
				}
				if(var_305_bool != 0)
					var_0_object->AddReply(8051, 8887, 8874); //@t
				bool var_321_bool = false;
				bool var_322_bool;
				func_6157(var_1_object);
				if(var_322_bool != 0) {
					bool var_328_bool;
					func_6361(var_1_object);
					if(var_328_bool != 0)
						var_321_bool = true;
				}
				if(var_321_bool != 0)
					var_0_object->AddReply(8052, 8888, 8875); //@t
				var_0_object->AddReply(8709, -1, 9546); //@t
				return 0;
			}
			if(var_30_string == 8888) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8065); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8708, -1, 9545); //@t
				return 0;
			}
			if(var_30_string == 8887) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8707, -1, 9544); //@t
				return 0;
			}
			if(var_30_string == 8886) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8063); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8706, -1, 9543); //@t
				return 0;
			}
			if(var_30_string == 8885) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8062); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8705, -1, 9542); //@t
				return 0;
			}
			if(var_30_string == 8884) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8704, -1, 9541); //@t
				return 0;
			}
			if(var_30_string == 5991) {
				object var_377_object; object var_378_object;
				var_377_object = var_1_object;
				var_378_object = var_0_object;
				func_5737();
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(5438); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5439, 5993, 5992); //@t
				var_0_object->AddReply(5446, -1, 6000); //@t
				return 0;
			}
			if(var_30_string == 5993) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(5440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5441, 5995, 5994); //@t
				var_0_object->AddReply(5445, 5995, 5998); //@t
				return 0;
			}
			if(var_30_string == 5995) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(5442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5443, -1, 5996); //@t
				var_0_object->AddReply(5444, -1, 5997); //@t
				return 0;
			}
			if(var_30_string == 5976) {
				bool var_411_bool;
				func_5870(var_1_object);
				if(var_411_bool != 0) {
					func_1585(var_31_bool, "Neutral");
					var_0_object->SetMessage(5427); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5428, 5978, 5977); //@t
					var_0_object->AddReply(5436, 5978, 5987); //@t
					var_0_object->AddReply(5437, 5978, 5989); //@t
					return 0;
				}
			}
			if(var_30_string == 5978) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(5429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5430, 5980, 5979); //@t
				var_0_object->AddReply(5434, 5980, 5983); //@t
				var_0_object->AddReply(5435, 5980, 5985); //@t
				return 0;
			}
			if(var_30_string == 5980) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(5431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5432, -1, 5981); //@t
				var_0_object->AddReply(5433, -1, 5982); //@t
				return 0;
			}
			if(var_30_string == 9493) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8668); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8669, 9495, 9494); //@t
				return 0;
			}
			if(var_30_string == 9495) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8671, 9497, 9496); //@t
				return 0;
			}
			if(var_30_string == 9497) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8672); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8673, 9499, 9498); //@t
				return 0;
			}
			if(var_30_string == 9499) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8674); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8675, 9501, 9500); //@t
				return 0;
			}
			if(var_30_string == 9501) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8677, 9503, 9502); //@t
				return 0;
			}
			if(var_30_string == 9503) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8679, 9505, 9504); //@t
				return 0;
			}
			if(var_30_string == 9505) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8680); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8681, 9507, 9506); //@t
				return 0;
			}
			if(var_30_string == 9507) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(8682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8683, -1, 9508); //@t
				return 0;
			}
			if(var_30_string == 6893) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(6232); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6233, 6895, 6894); //@t
				return 0;
			}
			if(var_30_string == 6895) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(6234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6235, 6888, 6896); //@t
				return 0;
			}
			if(var_30_string == 6886) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(6225); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6226, 6888, 6887); //@t
				return 0;
			}
			if(var_30_string == 6888) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(6227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6229, 6891, 6890); //@t
				bool var_531_bool;
				func_5834(var_1_object);
				if(var_531_bool != 0)
					var_0_object->AddReply(6228, 6891, 6889); //@t
				return 0;
			}
			if(var_30_string == 6891) {
				func_1585(var_31_bool, "Neutral");
				var_0_object->SetMessage(6230); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6236, -1, 6898); //@t
				var_0_object->AddReply(6237, -1, 6899); //@t
				return 0;
			}
			var_3_string = true;
			bool var_550_bool;
			func_5101(var_550_bool);
			if(var_550_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x642";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4989();
			if(var_31_bool == 7604) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5127();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_5145();
			}
			if(var_31_bool == 8158) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_5127();
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_5145();
			}
			if(var_31_bool == 8155) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_5133();
			}
			if(var_31_bool == 8161) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_5133();
				object var_133_object = var_1_object;
				func_5234(var_0_object);
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_object;
				func_5318();
			}
			if(var_31_bool == 8165) {
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_5139();
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_5324();
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_5202();
				object var_220_object = var_1_object;
				func_5779(var_0_object);
			}
			if(var_30_string == 7599) {
				bool var_248_bool = false;
				bool var_249_bool;
				func_5906(var_1_object);
				if(var_249_bool != 0) {
					bool var_257_bool;
					func_5942(var_1_object);
					if(var_257_bool != 0)
						var_248_bool = true;
				}
				if(var_248_bool != 0) {
					func_2751(var_31_bool, "Neutral");
					var_0_object->SetMessage(6893); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(7378, 8140, 8139); //@t
					var_0_object->AddReply(7384, 8140, 8145); //@t
					return 0;
				}
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(7377); //@t
				var_0_object->ClearReplies(); //@t
				bool var_287_bool = false;
				bool var_288_bool = false;
				bool var_289_bool;
				func_5918(var_1_object);
				if(var_289_bool != 0) {
					bool var_295_bool;
					func_5981(var_1_object);
					if(var_295_bool != 0)
						var_288_bool = true;
				}
				if(var_288_bool != 0) {
					bool var_301_bool;
					func_5959(var_301_bool, var_1_object);
					if(var_301_bool != 0)
						var_287_bool = true;
				}
				if(var_287_bool != 0)
					var_0_object->AddReply(6900, 7607, 7606); //@t
				bool var_319_bool = false;
				bool var_320_bool;
				func_5930(var_1_object);
				if(var_320_bool != 0) {
					bool var_326_bool;
					func_5959(var_326_bool, var_1_object);
					if(var_326_bool != 0)
						var_319_bool = true;
				}
				if(var_319_bool != 0)
					var_0_object->AddReply(6902, 7609, 7608); //@t
				bool var_331_bool = false;
				bool var_332_bool;
				func_5954(var_1_object);
				if(var_332_bool != 0) {
					bool var_334_bool;
					func_5969(var_1_object);
					if(var_334_bool != 0)
						var_331_bool = true;
				}
				if(var_331_bool != 0)
					var_0_object->AddReply(6905, 7612, 7611); //@t
				bool var_343_bool;
				func_5942(var_1_object);
				if(var_343_bool != 0)
					var_0_object->AddReply(7745, 7601, 8545); //@t
				var_0_object->AddReply(7744, -1, 8544); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xabf";
			EMIT "Pop(1)";
			EMIT "Push((int) 9342)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9343)";
			EMIT "Push((int) 10264)";
			EMIT "Push((int) 10263)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9350)";
			EMIT "Push((int) 10264)";
			EMIT "Push((int) 10271)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xabf";
			EMIT "Pop(1)";
			EMIT "Push((int) 9451)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9452)";
			EMIT "Push((int) 10391)";
			EMIT "Push((int) 10390)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9471)";
			EMIT "Push((int) 10391)";
			EMIT "Push((int) 10412)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_30_string == 10391) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(9453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9454, 10393, 10392); //@t
				var_0_object->AddReply(9467, 10408, 10407); //@t
				var_0_object->AddReply(9470, -1, 10411); //@t
				return 0;
			}
			if(var_30_string == 10408) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(9468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9469, 10393, 10409); //@t
				return 0;
			}
			if(var_30_string == 10393) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(9455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9456, 10395, 10394); //@t
				var_0_object->AddReply(9463, 10403, 10402); //@t
				var_0_object->AddReply(9466, -1, 10406); //@t
				return 0;
			}
			if(var_30_string == 10403) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(9464); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9465, 10395, 10404); //@t
				return 0;
			}
			if(var_30_string == 10395) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(9457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9458, 10397, 10396); //@t
				var_0_object->AddReply(9462, 10397, 10400); //@t
				return 0;
			}
			if(var_30_string == 10397) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(9459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9460, -1, 10398); //@t
				var_0_object->AddReply(9461, -1, 10399); //@t
				return 0;
			}
			if(var_30_string == 10264) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(9344); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9345, 10266, 10265); //@t
				var_0_object->AddReply(9349, 10266, 10269); //@t
				return 0;
			}
			if(var_30_string == 10266) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(9346); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9347, -1, 10267); //@t
				var_0_object->AddReply(9348, -1, 10268); //@t
				return 0;
			}
			if(var_30_string == 7612) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(6906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6907, -1, 7613); //@t
				return 0;
			}
			if(var_30_string == 7609) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(6903); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7397, 8163, 8162); //@t
				var_0_object->AddReply(6908, 8163, 7614); //@t
				return 0;
			}
			if(var_30_string == 8163) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(7398); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7399, -1, 8165); //@t
				return 0;
			}
			if(var_30_string == 7607) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(6901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7396, -1, 8161); //@t
				return 0;
			}
			if(var_30_string == 8140) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(7379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7380, 8142, 8141); //@t
				var_0_object->AddReply(7385, 8142, 8147); //@t
				return 0;
			}
			if(var_30_string == 8142) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(7381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7382, 8144, 8143); //@t
				var_0_object->AddReply(7386, 8150, 8149); //@t
				return 0;
			}
			if(var_30_string == 8150) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(7387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7388, 8144, 8151); //@t
				return 0;
			}
			if(var_30_string == 8144) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(7383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6894, 8153, 7600); //@t
				return 0;
			}
			if(var_30_string == 8153) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(7389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7390, 7601, 8154); //@t
				var_0_object->AddReply(7391, -1, 8155); //@t
				return 0;
			}
			if(var_30_string == 7601) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(6895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6896, 7603, 7602); //@t
				var_0_object->AddReply(7392, 8157, 8156); //@t
				return 0;
			}
			if(var_30_string == 8157) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(7393); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7395, 7603, 8159); //@t
				return 0;
			}
			if(var_30_string == 7603) {
				func_2751(var_31_bool, "Neutral");
				var_0_object->SetMessage(6897); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6898, -1, 7604); //@t
				var_0_object->AddReply(7394, -1, 8158); //@t
				return 0;
			}
			var_3_string = true;
			bool var_533_bool;
			func_5101(var_533_bool);
			if(var_533_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xad0";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4989();
			if(var_31_bool == 12160) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5372();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_5378();
				object var_90_object = var_1_object;
				func_5356(var_0_object);
			}
			if(var_31_bool == 12161) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_5372();
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_5378();
				object var_122_object = var_1_object;
				func_5356(var_0_object);
			}
			if(var_31_bool == 12181) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_5410();
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_5416();
			}
			if(var_31_bool == 12182) {
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_5410();
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_5416();
			}
			if(var_31_bool == 12183) {
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_5410();
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_5416();
				object var_159_object = var_1_object;
				func_5340(var_0_object);
			}
			if(var_31_bool == 12649) {
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_object;
				func_5445();
				object var_172_object; object var_173_object;
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_5451();
				object var_176_object = var_1_object;
				func_5457(var_0_object);
				object var_215_object = var_1_object;
				func_5817(var_0_object);
				object var_234_object = var_1_object;
				func_5795(var_0_object);
				object var_240_object = var_1_object;
				func_5806(var_0_object);
				object var_246_object; object var_247_object;
				var_246_object = var_1_object;
				var_247_object = var_0_object;
				func_5121();
			}
			if(var_31_bool == 12650) {
				object var_252_object; object var_253_object;
				var_252_object = var_1_object;
				var_253_object = var_0_object;
				func_5445();
			}
			if(var_31_bool == 12684) {
				object var_256_object; object var_257_object;
				var_256_object = var_1_object;
				var_257_object = var_0_object;
				func_5451();
				object var_258_object = var_1_object;
				func_5457(var_0_object);
				object var_260_object = var_1_object;
				func_5795(var_0_object);
				object var_262_object = var_1_object;
				func_5817(var_0_object);
				object var_264_object = var_1_object;
				func_5806(var_0_object);
				object var_266_object; object var_267_object;
				var_266_object = var_1_object;
				var_267_object = var_0_object;
				func_5121();
			}
			if(var_31_bool == 13074) {
				object var_270_object; object var_271_object;
				var_270_object = var_1_object;
				var_271_object = var_0_object;
				func_5525();
			}
			if(var_30_string == 11193) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10151); //@t
				var_0_object->ClearReplies(); //@t
				bool var_292_bool = false;
				bool var_293_bool;
				func_6039(var_1_object);
				if(var_293_bool != 0) {
					bool var_299_bool;
					func_6027(var_1_object);
					if(var_299_bool != 0)
						var_292_bool = true;
				}
				if(var_292_bool != 0)
					var_0_object->AddReply(10152, 11195, 11194); //@t
				bool var_308_bool = false;
				bool var_309_bool;
				func_6051(var_1_object);
				if(var_309_bool != 0) {
					bool var_315_bool;
					func_6063(var_1_object);
					if(var_315_bool != 0)
						var_308_bool = true;
				}
				if(var_308_bool != 0)
					var_0_object->AddReply(10995, 12163, 12162); //@t
				bool var_324_bool = false;
				bool var_325_bool;
				func_6097(var_1_object);
				if(var_325_bool != 0) {
					bool var_331_bool;
					func_6085(var_1_object);
					if(var_331_bool != 0)
						var_324_bool = true;
				}
				if(var_324_bool != 0)
					var_0_object->AddReply(11435, 12638, 12637); //@t
				bool var_340_bool = false;
				bool var_341_bool;
				func_6085(var_1_object);
				if(var_341_bool != 0) {
					bool var_343_bool;
					func_6109(var_1_object);
					if(!var_343_bool) //@nz
						var_340_bool = true;
				}
				if(var_340_bool != 0)
					var_0_object->AddReply(11476, 12683, 12682); //@t
				bool var_353_bool = false;
				bool var_354_bool;
				func_6133(var_1_object);
				if(var_354_bool != 0) {
					bool var_360_bool;
					func_6121(var_1_object);
					if(var_360_bool != 0)
						var_353_bool = true;
				}
				if(var_353_bool != 0)
					var_0_object->AddReply(11859, 13073, 13072); //@t
				var_0_object->AddReply(11479, -1, 12685); //@t
				return 0;
			}
			if(var_30_string == 13073) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11860); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11861, -1, 13074); //@t
				return 0;
			}
			if(var_30_string == 12683) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11478, -1, 12684); //@t
				return 0;
			}
			if(var_30_string == 12638) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11437, 12640, 12639); //@t
				var_0_object->AddReply(11450, 12654, 12653); //@t
				return 0;
			}
			if(var_30_string == 12654) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11452, 12656, 12655); //@t
				return 0;
			}
			if(var_30_string == 12656) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11454, 12640, 12657); //@t
				return 0;
			}
			if(var_30_string == 12640) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11438); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11439, 12642, 12641); //@t
				return 0;
			}
			if(var_30_string == 12642) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11441, 12644, 12643); //@t
				var_0_object->AddReply(11449, 12644, 12651); //@t
				return 0;
			}
			if(var_30_string == 12644) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11443, 12646, 12645); //@t
				return 0;
			}
			if(var_30_string == 12646) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11444); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11445, 12648, 12647); //@t
				return 0;
			}
			if(var_30_string == 12648) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11446); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11447, -1, 12649); //@t
				var_0_object->AddReply(11448, -1, 12650); //@t
				return 0;
			}
			if(var_30_string == 12163) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10997, 12165, 12164); //@t
				return 0;
			}
			if(var_30_string == 12165) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10999, 12167, 12166); //@t
				var_0_object->AddReply(11001, 12170, 12168); //@t
				return 0;
			}
			if(var_30_string == 12170) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11003, 12167, 12171); //@t
				var_0_object->AddReply(11004, 12167, 12172); //@t
				return 0;
			}
			if(var_30_string == 12167) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11000); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11005, 12176, 12175); //@t
				var_0_object->AddReply(11008, 12176, 12178); //@t
				return 0;
			}
			if(var_30_string == 12176) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11007, 12180, 12177); //@t
				var_0_object->AddReply(11012, -1, 12183); //@t
				return 0;
			}
			if(var_30_string == 12180) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(11009); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11010, -1, 12181); //@t
				var_0_object->AddReply(11011, -1, 12182); //@t
				return 0;
			}
			if(var_30_string == 11195) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10153); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10977, 12140, 12139); //@t
				var_0_object->AddReply(10154, 11197, 11196); //@t
				return 0;
			}
			if(var_30_string == 11197) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10155); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10982, 12145, 12144); //@t
				var_0_object->AddReply(10986, 12149, 12148); //@t
				return 0;
			}
			if(var_30_string == 12149) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10987); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10988, 12143, 12150); //@t
				return 0;
			}
			if(var_30_string == 12145) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10984, 12143, 12146); //@t
				var_0_object->AddReply(10985, 12143, 12147); //@t
				return 0;
			}
			if(var_30_string == 12140) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10980, 12143, 12142); //@t
				return 0;
			}
			if(var_30_string == 12143) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10159, 12154, 11201); //@t
				var_0_object->AddReply(10990, 12154, 12155); //@t
				return 0;
			}
			if(var_30_string == 12154) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10992, 12157, 12158); //@t
				return 0;
			}
			if(var_30_string == 12157) {
				func_3671(var_31_bool, "Neutral");
				var_0_object->SetMessage(10991); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10993, -1, 12160); //@t
				var_0_object->AddReply(10994, -1, 12161); //@t
				return 0;
			}
			var_3_string = true;
			bool var_579_bool;
			func_5101(var_579_bool);
			if(var_579_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe68";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int)
	{
		if(1 != 0) {
			func_4989();
			if(var_31_int == 12878) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5531();
			}
			if(var_30_int == 12861) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11662); //@t
				var_0_object->ClearReplies(); //@t
				bool var_89_bool;
				func_6145(var_1_object);
				if(var_89_bool != 0)
					var_0_object->AddReply(11663, 12863, 12862); //@t
				var_0_object->AddReply(11960, -1, 13174); //@t
				return 0;
			}
			if(var_30_int == 12863) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11680, 12867, 12879); //@t
				var_0_object->AddReply(11665, 12865, 12864); //@t
				return 0;
			}
			if(var_30_int == 12865) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11666); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11667, 12867, 12866); //@t
				return 0;
			}
			if(var_30_int == 12867) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11668); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11669, 12869, 12868); //@t
				var_0_object->AddReply(11684, 12886, 12885); //@t
				return 0;
			}
			if(var_30_int == 12886) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11685); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11686, 12888, 12887); //@t
				return 0;
			}
			if(var_30_int == 12888) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11688, 12869, 12889); //@t
				return 0;
			}
			if(var_30_int == 12869) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11673, 12873, 12872); //@t
				var_0_object->AddReply(11671, 12871, 12870); //@t
				return 0;
			}
			if(var_30_int == 12871) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11672); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11681, 12882, 12881); //@t
				return 0;
			}
			if(var_30_int == 12882) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11683, 12873, 12883); //@t
				return 0;
			}
			if(var_30_int == 12873) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11674); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11675, 12875, 12874); //@t
				return 0;
			}
			if(var_30_int == 12875) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11677, 12877, 12876); //@t
				return 0;
			}
			if(var_30_int == 12877) {
				func_4610(var_31_int, "Neutral");
				var_0_object->SetMessage(11678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11679, -1, 12878); //@t
				return 0;
			}
			var_3_string = true;
			bool var_189_bool;
			func_5101(var_189_bool);
			if(var_189_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1213";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_5121(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_4610(object var_2_object, string var_73_string)
{
	bool var_74_bool;
	func_5101(var_74_bool);
	if(!var_74_bool) //@nz
		return 0;
	if(var_73_string == var_2_object)
		return 0;
	string var_77_string;
	func_4971(var_77_string);
	var_2_object = var_77_string;
}


// @pe
void func_6145(bool var_89_bool)
{
	int var_91_int;
	func_5006(var_91_int, "d5q01");
	if(var_91_int == 4)
		var_89_bool = true;
	var_89_bool = false;
}


void func_6662(void)
{
	@Trace("Adding diary entry");
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 88, 1, 12170);
	bool var_71_bool; object var_72_object;
	var_66_object = var_72_object;
	func_6469(var_71_bool, var_72_object, 20);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5127(void)
{
	@SetVariable("ood2Lara1", 1);
}


// @pe
void func_6157(bool var_322_bool)
{
	int var_324_int;
	func_5006(var_324_int, "KnowMark");
	if(var_324_int == 1)
		var_322_bool = true;
	var_322_bool = false;
}


// @pe
void func_5133(void)
{
	@SetVariable("ood2Lara2", 1);
}


// @pe
void func_5139(void)
{
	@SetVariable("ood2Lara3", 1);
}


void func_6678(void)
{
	@Trace("Adding diary entry");
	object var_41_object;
	@CreateDiaryEntry(var_41_object, 143, 1, 15343);
	bool var_46_bool; object var_47_object;
	var_41_object = var_47_object;
	func_6469(var_46_bool, var_47_object, 139);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6169(bool var_211_bool)
{
	int var_213_int;
	func_5006(var_213_int, "d6q01");
	if(var_213_int == 1)
		var_211_bool = true;
	var_211_bool = false;
}


void func_5145(void)
{
	@SetVariable("d2q03", 1);
	object var_46_object;
	func_6515(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	float var_57_float;
	func_5060(var_57_float);
	var_43_object->AddMark("d2q03LaraGotoMoneyFoodSelf", "pt_map_lara", 0, 15286, var_57_float);
	float var_64_float;
	func_5060(var_64_float);
	var_43_object->AddMark("d2q03LaraGotoJulia", "pt_map_julia", 0, 15288, var_64_float);
	float var_69_float;
	func_5060(var_69_float);
	var_43_object->AddMark("d2q03LaraGotoMaria", "pt_map_maria", 0, 15289, var_69_float);
	float var_74_float;
	func_5060(var_74_float);
	var_43_object->AddMark("d2q03LaraGotoMladVlad", "pt_map_mladvlad", 0, 15287, var_74_float);
	func_6598();
	func_6614();
	object var_109_object;
	func_5011(var_109_object, "quest_d2_03");
}
EMIT "Stack[-1] = 0";


// @pe
void func_6181(bool var_219_bool)
{
	int var_221_int;
	func_5006(var_221_int, "ood6Lara1");
	if(var_221_int == 0) {
		var_219_bool = true;
		return 0;
	}
	var_219_bool = false;
}


void func_6694(void)
{
	@Trace("Adding diary entry");
	object var_45_object;
	@CreateDiaryEntry(var_45_object, 160, 1, 15393);
	bool var_50_bool; object var_51_object;
	var_45_object = var_51_object;
	func_6469(var_50_bool, var_51_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_551(object var_2_object, string var_194_string)
{
	bool var_195_bool;
	func_5101(var_195_bool);
	if(!var_195_bool) //@nz
		return 0;
	if(var_194_string == var_2_object)
		return 0;
	string var_198_string;
	func_4971(var_198_string);
	var_2_object = var_198_string;
}


// @pe
void func_6193(bool var_231_bool)
{
	int var_233_int;
	func_5006(var_233_int, "microscope_d6q01_lara_blood");
	if(var_233_int != 0) {
		var_231_bool = true;
		return 0;
	}
	var_231_bool = false;
}


// @pe
void func_1585(object var_2_object, string var_162_string)
{
	bool var_163_bool;
	func_5101(var_163_bool);
	if(!var_163_bool) //@nz
		return 0;
	if(var_162_string == var_2_object)
		return 0;
	string var_166_string;
	func_4971(var_166_string);
	var_2_object = var_166_string;
}


void func_49(object var_0_object, int var_34_int, object var_35_object)
{
	var_0_object = var_35_object;
	bool var_45_bool; object var_46_object;
	var_35_object = var_46_object;
	func_4911(var_45_bool, var_46_object);
	if(!var_45_bool) { //@nz
		var_34_int = -2;
		return 8;
	}
	object var_41_object;
	@CreateDialog(var_41_object);
	int var_86_int;
	func_5097(var_86_int);
	var_41_object->SetNPCName(var_86_int);
	string var_87_string;
	func_5099(var_87_string);
	var_41_object->SetPhoto(var_87_string);
	int var_88_int;
	func_6565(var_88_int);
	var_41_object->SetPlayerName(var_88_int);
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	@DoDialog(var_41_object);
	object var_97_object; object var_98_object;
	var_35_object = var_97_object;
	var_41_object = var_98_object;
	TaskCall(3);
	func_112(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	bool var_44_bool;
	var_41_object->IsDialogEnd(var_44_bool);
	
	for(;;) {
		var_135_bool = !var_44_bool; //@nz
		if(var_135_bool == 0) goto Label_101;
		@sync();
		var_41_object->IsDialogEnd(var_44_bool);
	}
	
Label_101:
	object var_136_object;
	var_35_object = var_136_object;
	func_4967();
	@StopDialog(var_41_object);
	var_41_object->GetReturnValue(-1);
	int var_43_int = var_34_int;
}
EMIT "Stack[-4] = 0";


void func_6710(void)
{
	@Trace("Adding diary entry");
	object var_148_object;
	@CreateDiaryEntry(var_148_object, 118, 1, 13741);
	bool var_153_bool; object var_154_object;
	var_148_object = var_154_object;
	func_6469(var_153_bool, var_154_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6205(bool var_237_bool)
{
	int var_239_int;
	func_5006(var_239_int, "ood6Lara2");
	if(var_239_int == 0) {
		var_237_bool = true;
		return 0;
	}
	var_237_bool = false;
}


void func_6726(void)
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_6217(bool var_261_bool)
{
	int var_263_int;
	func_5006(var_263_int, "ood6Lara3");
	if(var_263_int == 0) {
		var_261_bool = true;
		return 0;
	}
	var_261_bool = false;
}


// @pe
void func_6730(object var_31_object)
{
	var_32_bool = GlobalVars[1];
	if(!var_32_bool) { //@nz
		int var_34_int; object var_35_object;
		var_31_object = var_35_object;
		TaskCall(2);
		func_49(var_36_object, var_34_int, var_35_object);
		TaskReturn();
		var_137_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_138_bool;
	func_5082(var_138_bool, 1);
	if(var_138_bool != 0) {
		int var_146_int; object var_147_object;
		var_31_object = var_147_object;
		TaskCall(6);
		func_1204(var_148_object, var_146_int, var_147_object);
		TaskReturn();
		return 0;
	}
	bool var_388_bool;
	func_5082(var_388_bool, 2);
	if(var_388_bool != 0) {
		int var_390_int; object var_391_object;
		var_31_object = var_391_object;
		TaskCall(8);
		func_2485(var_392_object, var_390_int, var_391_object);
		TaskReturn();
		return 0;
	}
	bool var_516_bool;
	func_5082(var_516_bool, 4);
	if(var_516_bool != 0) {
		int var_518_int; object var_519_object;
		var_31_object = var_519_object;
		TaskCall(10);
		func_3459(var_520_object, var_518_int, var_519_object);
		TaskReturn();
		return 0;
	}
	bool var_639_bool;
	func_5082(var_639_bool, 5);
	if(var_639_bool != 0) {
		int var_641_int; object var_642_object;
		var_31_object = var_642_object;
		TaskCall(12);
		func_4484(var_643_object, var_641_int, var_642_object);
		TaskReturn();
		return 0;
	}
	bool var_694_bool;
	func_5082(var_694_bool, 6);
	if(var_694_bool != 0) {
		int var_696_int; object var_697_object;
		var_31_object = var_697_object;
		TaskCall(4);
		func_348(var_698_object, var_696_int, var_697_object);
		TaskReturn();
		return 0;
	}
	bool var_813_bool;
	func_5088(var_813_bool);
}


void func_5202(void)
{
	@SetVariable("d2q03", 2);
	object var_200_object;
	func_6515(var_200_object);
	object var_197_object;
	var_200_object = var_197_object;
	float var_205_float;
	func_5060(var_205_float);
	var_197_object->AddMark("d2q03LaraGotoSklad", "pt_map_d2q03_shouse", 0, 15290, var_205_float);
	float var_210_float;
	func_5060(var_210_float);
	var_197_object->AddMark("d2q03LaraGotoSkladSelf", "pt_map_lara", 0, 15291, var_210_float);
	func_6630();
}
EMIT "Stack[-1] = 0";


// @pe
void func_6229(bool var_290_bool)
{
	int var_292_int;
	func_5006(var_292_int, "KnowAlexandr");
	if(var_292_int == 1)
		var_290_bool = true;
	var_290_bool = false;
}


// @pe
void func_3671(object var_2_object, string var_276_string)
{
	bool var_277_bool;
	func_5101(var_277_bool);
	if(!var_277_bool) //@nz
		return 0;
	if(var_276_string == var_2_object)
		return 0;
	string var_280_string;
	func_4971(var_280_string);
	var_2_object = var_280_string;
}


// @pe
void func_6241(bool var_276_bool)
{
	int var_278_int;
	func_5006(var_278_int, "ood6Lara4");
	if(var_278_int == 0) {
		var_276_bool = true;
		return 0;
	}
	var_276_bool = false;
}


// @pe
void func_5731(void)
{
	@SetVariable("KnowLara", 1);
}


// @pe
void func_5737(void)
{
	@SetVariable("KnowMaria", 1);
}


// @pe
void func_6253(bool var_243_bool)
{
	int var_245_int;
	func_5006(var_245_int, "d6q01");
	if(var_245_int == 1000)
		var_243_bool = true;
	var_243_bool = false;
}


// @pe
void func_5743(void)
{
	@SetVariable("ood1Lara4", 1);
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_97_object, object var_98_object)
{
	var_0_object = var_98_object;
	var_3_object = false;
	if(1 != 0) {
		object var_104_object; object var_105_object;
		var_104_object = var_97_object;
		var_105_object = var_0_object;
		func_5731();
		func_170(var_98_object, "Neutral");
		var_0_object->SetMessage(441); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(8443, 9267, 9266); //@t
		goto Label_140;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_140:
	bool var_127_bool;
	func_5101(var_127_bool);
	if(var_127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4971(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_169;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_169:
		return 0;

	}
	
}


void func_5234(object var_133_object)
{
	object var_141_object;
	func_6515(var_141_object);
	object var_138_object;
	var_141_object = var_138_object;
	object var_139_object;
	var_138_object->FindMark(var_139_object, "d2q03BirdmaskGotoLara");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d2q03BirdmaskGotoLaraSelf");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d2q03LaraGotoJulia");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d2q03LaraGotoMaria");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d2q03LaraGotoMladVlad");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d2q03LaraGotoMoneyFoodSelf");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d2q03LaraGotoSklad");
	if(var_139_object != 0)
		var_139_object->Remove();
	var_138_object->FindMark(var_139_object, "d2q03LaraGotoSkladSelf");
	if(var_139_object != 0)
		var_139_object->Remove();
	func_6646();
	int var_140_int;
	var_133_object->RemoveItemByType(var_140_int, "smoked_meat", 3);
	var_133_object->RemoveItemByType(var_140_int, "dried_fish", 3);
	var_133_object->RemoveItemByType(var_140_int, "bread", 3);
	bool var_173_bool;
	func_5048(var_173_bool, "quest_d2_03", "completed");
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5749(void)
{
	@SetVariable("ood1Lara5", 1);
}


// @pe
void func_6265(bool var_250_bool)
{
	int var_252_int;
	func_5006(var_252_int, "d6q01");
	if(var_252_int == -1)
		var_250_bool = true;
	var_250_bool = false;
}


// @pe
void func_5755(void)
{
	@SetVariable("ood1Lara6", 1);
}


// @pe
void func_5761(void)
{
	@SetVariable("ood1Lara7", 1);
}


// @pe
void func_6277(bool var_258_bool)
{
	int var_260_int;
	func_5006(var_260_int, "KnowJulia");
	if(var_260_int == 1)
		var_258_bool = true;
	var_258_bool = false;
}


// @pe
void func_5767(void)
{
	@SetVariable("ood1Lara8", 1);
}


// @pe
void func_5773(void)
{
	@SetVariable("ood1Lara9", 1);
}


// @pe
void func_6289(bool var_274_bool)
{
	int var_276_int;
	func_5006(var_276_int, "KnowKaterina");
	if(var_276_int == 1)
		var_274_bool = true;
	var_274_bool = false;
}


// @pe
void func_5779(object var_221_object)
{
	object var_225_object;
	func_6515(var_225_object);
	object var_222_object;
	var_225_object = var_222_object;
	func_6532(var_222_object, "pt_map_d2q03_shouse", (float)2);
	object var_245_object;
	func_6515(var_245_object);
	var_221_object->ShowMap(var_245_object);
}


// @pe
void func_6301(bool var_248_bool)
{
	int var_250_int;
	func_5006(var_250_int, "ood1Lara4");
	if(var_250_int == 0) {
		var_248_bool = true;
		return 0;
	}
	var_248_bool = false;
}


// @pe
void func_5795(object var_234_object)
{
	@Trace("morfin is given");
	object var_237_object;
	var_234_object = var_237_object;
	func_5035(var_237_object, "morfin", 1);
}


// @pe
void func_6313(bool var_264_bool)
{
	int var_266_int;
	func_5006(var_266_int, "ood1Lara5");
	if(var_266_int == 0) {
		var_264_bool = true;
		return 0;
	}
	var_264_bool = false;
}


// @pe
void func_170(object var_2_object, string var_40_string)
{
	bool var_41_bool;
	func_5101(var_41_bool);
	if(!var_41_bool) //@nz
		return 0;
	if(var_40_string == var_2_object)
		return 0;
	string var_44_string;
	func_4971(var_44_string);
	var_2_object = var_44_string;
}


// @pe
void func_5806(object var_240_object)
{
	@Trace("etorfin is given");
	object var_243_object;
	var_240_object = var_243_object;
	func_5035(var_243_object, "etorfin", 1);
}


void func_1204(object var_0_object, int var_146_int, object var_147_object)
{
	var_0_object = var_147_object;
	bool var_157_bool; object var_158_object;
	var_147_object = var_158_object;
	func_4911(var_157_bool, var_158_object);
	if(!var_157_bool) { //@nz
		var_146_int = -2;
		return 8;
	}
	object var_153_object;
	@CreateDialog(var_153_object);
	int var_160_int;
	func_5097(var_160_int);
	var_153_object->SetNPCName(var_160_int);
	string var_161_string;
	func_5099(var_161_string);
	var_153_object->SetPhoto(var_161_string);
	int var_162_int;
	func_6565(var_162_int);
	var_153_object->SetPlayerName(var_162_int);
	bool var_154_bool;
	@IsOverrideActive(var_154_bool);
	if(var_154_bool != 0) {
		var_146_int = -2;
		return 8;
	}
	@DoDialog(var_153_object);
	object var_164_object; object var_165_object;
	var_147_object = var_164_object;
	var_153_object = var_165_object;
	TaskCall(7);
	func_1267(var_166_object, var_167_object, var_168_string, var_169_bool, var_164_object, var_165_object);
	TaskReturn();
	bool var_156_bool;
	var_153_object->IsDialogEnd(var_156_bool);
	
	for(;;) {
		var_386_bool = !var_156_bool; //@nz
		if(var_386_bool == 0) goto Label_1256;
		@sync();
		var_153_object->IsDialogEnd(var_156_bool);
	}
	
Label_1256:
	object var_387_object;
	var_147_object = var_387_object;
	func_4967();
	@StopDialog(var_153_object);
	var_153_object->GetReturnValue(-1);
	int var_155_int = var_146_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6325(bool var_280_bool)
{
	int var_282_int;
	func_5006(var_282_int, "ood1Lara6");
	if(var_282_int == 0) {
		var_280_bool = true;
		return 0;
	}
	var_280_bool = false;
}


// @pe
void func_5817(object var_215_object)
{
	@Trace("novocaine is given");
	object var_218_object;
	var_215_object = var_218_object;
	func_5035(var_218_object, "novocaine", 1);
}


// @pe
void func_2751(object var_2_object, string var_263_string)
{
	bool var_264_bool;
	func_5101(var_264_bool);
	if(!var_264_bool) //@nz
		return 0;
	if(var_263_string == var_2_object)
		return 0;
	string var_267_string;
	func_4971(var_267_string);
	var_2_object = var_267_string;
}


// @pe
void func_6337(bool var_296_bool)
{
	int var_298_int;
	func_5006(var_298_int, "ood1Lara7");
	if(var_298_int == 0) {
		var_296_bool = true;
		return 0;
	}
	var_296_bool = false;
}


// @pe
void func_5828(void)
{
	@SetVariable("KnowPredictions", 1);
}


// @pe
void func_5318(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_5834(bool var_531_bool)
{
	int var_533_int;
	func_5006(var_533_int, "KnowWarehouses");
	if(var_533_int == 1)
		var_531_bool = true;
	var_531_bool = false;
}


// @pe
void func_5324(void)
{
	bool var_191_bool;
	func_5048(var_191_bool, "quest_d2_03", "birdmask");
}


// @pe
void func_6349(bool var_312_bool)
{
	int var_314_int;
	func_5006(var_314_int, "ood1Lara8");
	if(var_314_int == 0) {
		var_312_bool = true;
		return 0;
	}
	var_312_bool = false;
}


// @pe
void func_5331(void)
{
	@SetVariable("d1q01KnowEpidemic", 1);
	func_6582();
}


// @pe
void func_5846(bool var_127_bool)
{
	int var_129_int;
	func_5006(var_129_int, "ood1Lara1");
	if(var_129_int == 0) {
		var_127_bool = true;
		return 0;
	}
	var_127_bool = false;
}


// @pe
void func_6361(bool var_328_bool)
{
	int var_330_int;
	func_5006(var_330_int, "ood1Lara9");
	if(var_330_int == 0) {
		var_328_bool = true;
		return 0;
	}
	var_328_bool = false;
}


// @pe
void func_5340(object var_160_object)
{
	object var_164_object;
	func_6515(var_164_object);
	object var_161_object;
	var_164_object = var_161_object;
	func_6532(var_161_object, "pt_map_ospina", (float)2);
	object var_165_object;
	func_6515(var_165_object);
	var_160_object->ShowMap(var_165_object);
}


// @pe
void func_5858(bool var_155_bool)
{
	int var_157_int;
	func_5006(var_157_int, "ood1Lara2");
	if(var_157_int == 0) {
		var_155_bool = true;
		return 0;
	}
	var_155_bool = false;
}


// @pe
void func_6373(bool var_306_bool)
{
	int var_308_int;
	func_5006(var_308_int, "KnowMladVlad");
	if(var_308_int == 1)
		var_306_bool = true;
	var_306_bool = false;
}


// @pe
void func_5356(object var_91_object)
{
	object var_95_object;
	func_6515(var_95_object);
	object var_92_object;
	var_95_object = var_92_object;
	func_6532(var_92_object, "pt_map_mladvlad", (float)2);
	object var_115_object;
	func_6515(var_115_object);
	var_91_object->ShowMap(var_115_object);
}


// @pe
void func_5870(bool var_218_bool)
{
	int var_220_int;
	func_5006(var_220_int, "ood1Lara3");
	if(var_220_int == 0) {
		var_218_bool = true;
		return 0;
	}
	var_218_bool = false;
}


// @pe
void func_6385(bool var_242_bool)
{
	int var_244_int;
	func_5006(var_244_int, "KnowPredictions");
	if(var_244_int == 1)
		var_242_bool = true;
	var_242_bool = false;
}


// @pe
void func_1267(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_164_object, object var_165_object)
{
	var_0_object = var_165_object;
	var_1_object = var_164_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_171_bool = false;
		bool var_172_bool = false;
		bool var_173_bool = false;
		bool var_174_bool = false;
		bool var_175_bool;
		func_5846(var_1_object);
		if(var_175_bool != 0) {
			bool var_183_bool;
			func_5894(var_1_object);
			if(!var_183_bool) //@nz
				var_174_bool = true;
		}
		if(var_174_bool != 0) {
			bool var_190_bool;
			func_5882(var_1_object);
			if(!var_190_bool) //@nz
				var_173_bool = true;
		}
		if(var_173_bool != 0) {
			bool var_197_bool;
			func_6005(var_1_object);
			if(var_197_bool != 0)
				var_172_bool = true;
		}
		if(var_172_bool != 0) {
			bool var_203_bool;
			func_5858(var_1_object);
			if(!var_203_bool) //@nz
				var_171_bool = true;
		}
		if(var_171_bool != 0) {
			func_1585(var_165_object, "Neutral");
			var_0_object->SetMessage(5423); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5447, 6886, 6001); //@t
			var_0_object->AddReply(6231, 6893, 6892); //@t
		} else {
					bool var_230_bool = false;
					bool var_231_bool = false;
					bool var_232_bool = false;
					bool var_233_bool;
					func_5858(var_1_object);
					if(var_233_bool != 0) {
						bool var_235_bool;
						func_5894(var_1_object);
						if(!var_235_bool) //@nz
							var_232_bool = true;
					}
					if(var_232_bool != 0) {
						bool var_238_bool;
						func_5882(var_1_object);
						if(!var_238_bool) //@nz
							var_231_bool = true;
					}
					if(var_231_bool != 0) {
						bool var_241_bool;
						func_6005(var_1_object);
						if(!var_241_bool) //@nz
							var_230_bool = true;
					}
					if(var_230_bool == 0) goto Label_1387;
					func_1585(var_165_object, "Neutral");
					var_0_object->SetMessage(8666); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(8667, 9493, 9492); //@t
		}
	}
Label_1555:
	for(;;) {
		bool var_222_bool;
		func_5101(var_222_bool);
		if(var_222_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4971(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1584;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1584:
			return 0;

		}

	}
	
Label_1387:
	func_1585(var_165_object, "Neutral");
	var_0_object->SetMessage(8034); //@t
	var_0_object->ClearReplies(); //@t
	bool var_251_bool = true;
	bool var_252_bool = false;
	bool var_253_bool;
	func_6017(var_253_bool, var_1_object);
	if(var_253_bool != 0) {
		bool var_264_bool;
		func_5870(var_1_object);
		if(var_264_bool != 0)
			var_252_bool = true;
	}
	if(var_252_bool != 1) {
		bool var_270_bool = false;
		bool var_271_bool;
		func_6075(var_271_bool, var_1_object);
		if(var_271_bool != 0) {
			bool var_282_bool;
			func_5870(var_1_object);
			if(var_282_bool != 0)
				var_270_bool = true;
		}
		if(var_270_bool != 1)
			var_251_bool = false;
	}
	if(var_251_bool != 0)
		var_0_object->AddReply(8036, 5976, 8859); //@t
	bool var_287_bool = false;
	bool var_288_bool;
	func_6385(var_1_object);
	if(var_288_bool != 0) {
		bool var_294_bool;
		func_6301(var_1_object);
		if(var_294_bool != 0)
			var_287_bool = true;
	}
	if(var_287_bool != 0)
		var_0_object->AddReply(8039, 5991, 8862); //@t
	bool var_303_bool = false;
	bool var_304_bool;
	func_6277(var_1_object);
	if(var_304_bool != 0) {
		bool var_310_bool;
		func_6313(var_1_object);
		if(var_310_bool != 0)
			var_303_bool = true;
	}
	if(var_303_bool != 0)
		var_0_object->AddReply(8042, 8884, 8865); //@t
	bool var_319_bool = false;
	bool var_320_bool;
	func_6289(var_1_object);
	if(var_320_bool != 0) {
		bool var_326_bool;
		func_6325(var_1_object);
		if(var_326_bool != 0)
			var_319_bool = true;
	}
	if(var_319_bool != 0)
		var_0_object->AddReply(8046, 8885, 8869); //@t
	bool var_335_bool = false;
	bool var_336_bool;
	func_6229(var_1_object);
	if(var_336_bool != 0) {
		bool var_342_bool;
		func_6337(var_1_object);
		if(var_342_bool != 0)
			var_335_bool = true;
	}
	if(var_335_bool != 0)
		var_0_object->AddReply(8047, 8886, 8870); //@t
	bool var_351_bool = false;
	bool var_352_bool;
	func_6373(var_1_object);
	if(var_352_bool != 0) {
		bool var_358_bool;
		func_6349(var_1_object);
		if(var_358_bool != 0)
			var_351_bool = true;
	}
	if(var_351_bool != 0)
		var_0_object->AddReply(8051, 8887, 8874); //@t
	bool var_367_bool = false;
	bool var_368_bool;
	func_6157(var_1_object);
	if(var_368_bool != 0) {
		bool var_374_bool;
		func_6361(var_1_object);
		if(var_374_bool != 0)
			var_367_bool = true;
	}
	if(var_367_bool != 0)
		var_0_object->AddReply(8052, 8888, 8875); //@t
	var_0_object->AddReply(8709, -1, 9546); //@t
	goto Label_1555;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4f7";


// @pe
void func_5882(bool var_142_bool)
{
	int var_144_int;
	func_5006(var_144_int, "d1q01");
	if(var_144_int == 1000)
		var_142_bool = true;
	var_142_bool = false;
}


// @pe
void func_5372(void)
{
	@SetVariable("ood4Lara1", 1);
}


void func_6397(bool var_303_bool, object var_304_object)
{
	int var_306_int;
	var_304_object->GetItemCountOfType(var_306_int, "smoked_meat");
	if(var_306_int < 3) {
		var_303_bool = false;
		return 2;
	}
	var_304_object->GetItemCountOfType(var_306_int, "dried_fish");
	if(var_306_int < 3) {
		var_303_bool = false;
		return 2;
	}
	var_304_object->GetItemCountOfType(var_306_int, "bread");
	if(var_306_int < 3) {
		var_303_bool = false;
		return 2;
	}
	var_303_bool = true;
}


void func_5378(void)
{
	@SetVariable("d4q01", 2);
	object var_46_object;
	func_6515(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	float var_57_float;
	func_5060(var_57_float);
	var_43_object->AddMark("d4q01LaraGotoMladVlad", "pt_map_mladvlad", 1, 11483, var_57_float);
	float var_64_float;
	func_5060(var_64_float);
	var_43_object->AddMark("d4q01LaraGotoMladVladSelf", "pt_map_lara", 1, 15321, var_64_float);
	func_6662();
}
EMIT "Stack[-1] = 0";


// @pe
void func_5894(bool var_135_bool)
{
	int var_137_int;
	func_5006(var_137_int, "d1q01");
	if(var_137_int == 0) {
		var_135_bool = true;
		return 0;
	}
	var_135_bool = false;
}


// @pe
void func_5906(bool var_249_bool)
{
	int var_251_int;
	func_5006(var_251_int, "ood2Lara1");
	if(var_251_int == 0) {
		var_249_bool = true;
		return 0;
	}
	var_249_bool = false;
}


// @pe
void func_6424(bool var_209_bool)
{
	int var_211_int;
	func_5074(var_211_int);
	if(var_211_int >= 18)
		var_209_bool = true;
	var_209_bool = false;
}


void func_4894(bool var_31_bool, object var_32_object)
{
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_41_float = GetByIndex(var_39_cvector, 0);
	var_42_float = GetByIndex(var_39_cvector, 2);
	bool var_40_bool;
	@Rotate(var_41_float, var_42_float, var_40_bool);
	var_40_bool = var_31_bool;
}


// @pe
void func_5918(bool var_289_bool)
{
	int var_291_int;
	func_5006(var_291_int, "ood2Lara2");
	if(var_291_int == 0) {
		var_289_bool = true;
		return 0;
	}
	var_289_bool = false;
}


// @pe
void func_5410(void)
{
	@SetVariable("ood4Lara2", 1);
}


// @pe
void func_6435(bool var_227_bool)
{
	bool var_229_bool = false;
	int var_230_int;
	func_5074(var_230_int);
	if(var_230_int >= 12) {
		int var_233_int;
		func_5074(var_233_int);
		if(var_233_int < 18)
			var_229_bool = true;
	}
	if(var_229_bool != 0) {
		var_227_bool = true;
		return 0;
	}
	var_227_bool = false;
}


void func_5416(void)
{
	@SetVariable("d4q01_subquest", 3);
	object var_136_object;
	func_6515(var_136_object);
	object var_133_object;
	var_136_object = var_133_object;
	float var_141_float;
	func_5060(var_141_float);
	var_133_object->AddMark("d4q01LaraGotoOspina", "pt_map_ospina", 0, 11506, var_141_float);
	float var_146_float;
	func_5060(var_146_float);
	var_133_object->AddMark("d4q01LaraGotoOspinaSelf", "pt_map_lara", 1, 15324, var_146_float);
}
EMIT "Stack[-1] = 0";


void func_4906(bool var_31_bool)
{
	bool var_33_bool;
	@IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
}


// @pe
void func_5930(bool var_320_bool)
{
	int var_322_int;
	func_5006(var_322_int, "ood2Lara3");
	if(var_322_int == 0) {
		var_320_bool = true;
		return 0;
	}
	var_320_bool = false;
}


void func_4911(bool var_45_bool, object var_46_object)
{
	cvector var_56_cvector;
	var_46_object->GetPosition(var_56_cvector);
	float var_55_float;
	var_46_object->GetEyesHeight(var_55_float);
	var_63_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (var_63_float + var_55_float);
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	@GetEyesHeight(var_55_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (var_64_float + var_55_float);
	cvector var_58_cvector = var_56_cvector - var_57_cvector;
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (float)0;
	var_67_float = sqrt(var_58_cvector | var_58_cvector);
	var_58_cvector /= var_67_float;
	cvector var_59_cvector = -var_58_cvector;
	cvector var_70_cvector;
	func_4996(var_70_cvector, (var_59_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_60_cvector = ((var_58_cvector * 70) + (var_70_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_62_bool;
	@IsOverrideActive(var_62_bool);
	if(var_62_bool != 0)
		var_45_bool = false;
	@StopWorld();
	@CameraTransit((var_57_cvector + var_60_cvector), var_59_cvector);
	var_83_float = GetByIndex(var_60_cvector, 0);
	var_84_float = GetByIndex(var_60_cvector, 2);
	@Rotate(var_83_float, var_84_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_45_bool = true;
}


// @pe
void func_5942(bool var_257_bool)
{
	int var_259_int;
	func_5006(var_259_int, "d2q03");
	if(var_259_int == 0) {
		var_257_bool = true;
		return 0;
	}
	var_257_bool = false;
}


void func_6456(object var_55_object)
{
	object var_57_object;
	@GetDiaryRoot(var_57_object);
	if(!var_57_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_55_object = false;
	}
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5954(bool var_332_bool)
{
	var_332_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_5445(void)
{
	@SetVariable("ood4Lara3", 1);
}


void func_6469(bool var_46_bool, object var_47_object, int var_48_int)
{
	object var_55_object;
	func_6456(var_55_object);
	object var_52_object;
	var_55_object = var_52_object;
	object var_53_object;
	var_52_object->Find(var_48_int, var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_48_int);
		var_46_bool = false;
	}
	var_53_object->AddChild(var_47_object);
	@SetVariable("player_diary", 1);
	int var_54_int;
	var_47_object->GetCategory(var_54_int);
	@SetDiarySection(var_54_int);
	var_46_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5959(bool var_301_bool, object var_302_object)
{
	object var_304_object;
	var_302_object = var_304_object;
	bool var_303_bool;
	func_6397(var_303_bool, var_304_object);
	if(var_303_bool != 0) {
		var_301_bool = true;
		return 0;
	}
	var_301_bool = false;
}


// @pe
void func_5451(void)
{
	@SetVariable("d4q02LaraGivesMedcine", 1);
}


// @pe
void func_5969(bool var_334_bool)
{
	int var_336_int;
	func_5006(var_336_int, "d2q03");
	if(var_336_int == 1)
		var_334_bool = true;
	var_334_bool = false;
}


void func_5457(object var_177_object)
{
	object var_179_object;
	bool var_180_bool = false;
	bool var_181_bool = false;
	int var_182_int;
	func_5006(var_182_int, "d4q02AnnaGivesMedcine");
	if(var_182_int == 1) {
		int var_188_int;
		func_5006(var_188_int, "d4q02JuliaGivesMedcine");
		if(var_188_int == 1)
			var_181_bool = true;
	}
	if(var_181_bool != 0) {
		int var_192_int;
		func_5006(var_192_int, "d4q02LaraGivesMedcine");
		if(var_192_int == 1)
			var_180_bool = true;
	}
	if(var_180_bool != 0) {
		@SetVariable("d4q02", 2);
		object var_198_object;
		func_6515(var_198_object);
		var_198_object = var_179_object;
		float var_203_float;
		func_5060(var_203_float);
		var_179_object->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 11842, var_203_float);
		bool var_204_bool;
		func_5048(var_204_bool, "quest_d4_02", "birdmask");
		object var_210_object;
		object var_213_object;
		func_6515(var_213_object);
		var_213_object = var_210_object;
		func_6532(var_210_object, "pt_d4q02_birdmask", (float)2);
		object var_214_object;
		func_6515(var_214_object);
		var_177_object->ShowMap(var_214_object);
		var_179_object = null;
	}
}


void func_348(object var_0_object, int var_696_int, object var_697_object)
{
	var_0_object = var_697_object;
	bool var_707_bool; object var_708_object;
	var_697_object = var_708_object;
	func_4911(var_707_bool, var_708_object);
	if(!var_707_bool) { //@nz
		var_696_int = -2;
		return 8;
	}
	object var_703_object;
	@CreateDialog(var_703_object);
	int var_710_int;
	func_5097(var_710_int);
	var_703_object->SetNPCName(var_710_int);
	string var_711_string;
	func_5099(var_711_string);
	var_703_object->SetPhoto(var_711_string);
	int var_712_int;
	func_6565(var_712_int);
	var_703_object->SetPlayerName(var_712_int);
	bool var_704_bool;
	@IsOverrideActive(var_704_bool);
	if(var_704_bool != 0) {
		var_696_int = -2;
		return 8;
	}
	@DoDialog(var_703_object);
	object var_714_object; object var_715_object;
	var_697_object = var_714_object;
	var_703_object = var_715_object;
	TaskCall(5);
	func_411(var_716_object, var_717_object, var_718_string, var_719_bool, var_714_object, var_715_object);
	TaskReturn();
	bool var_706_bool;
	var_703_object->IsDialogEnd(var_706_bool);
	
	for(;;) {
		var_811_bool = !var_706_bool; //@nz
		if(var_811_bool == 0) goto Label_400;
		@sync();
		var_703_object->IsDialogEnd(var_706_bool);
	}
	
Label_400:
	object var_812_object;
	var_697_object = var_812_object;
	func_4967();
	@StopDialog(var_703_object);
	var_703_object->GetReturnValue(-1);
	int var_705_int = var_696_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5981(bool var_295_bool)
{
	int var_297_int;
	func_5006(var_297_int, "d2q03");
	if(var_297_int == 3)
		var_295_bool = true;
	var_295_bool = false;
}


void func_6498(bool var_156_bool, int var_157_int)
{
	object var_162_object;
	func_6456(var_162_object);
	object var_160_object;
	var_162_object = var_160_object;
	object var_161_object;
	var_160_object->Find(var_157_int, var_161_object);
	if(!var_161_object) //@nz
		var_156_bool = false;
	var_161_object->Remove();
	var_156_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4967(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_5993(bool var_267_bool)
{
	int var_269_int;
	func_5006(var_269_int, "d2q03");
	if(var_269_int == 1000)
		var_267_bool = true;
	var_267_bool = false;
}


void func_4971(string var_35_string)
{
	@Trace("playing " + var_35_string);
	float var_38_float;
	float var_39_float;
	@lshGetAnimTimes(var_35_string, var_38_float, var_39_float);
	@lshPlayAnimation(var_38_float, var_39_float);
	@Trace("start: " + var_38_float);
	@Trace("end: " + var_39_float);
}


void func_6515(object var_46_object)
{
	object var_49_object; object var_50_object;
	@GetMainOutdoorScene(var_49_object);
	if(var_49_object == null) {
		@Trace("Can't find main outdoor scene");
		var_50_object = null;
		var_50_object = var_46_object;
	}
	var_49_object->GetMap(var_50_object);
	var_50_object = var_46_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6005(bool var_149_bool)
{
	int var_151_int;
	func_5006(var_151_int, "d1q01KnowEpidemic");
	if(var_151_int == 1)
		var_149_bool = true;
	var_149_bool = false;
}


void func_4989(void)
{
	bool var_33_bool;
	func_5101(var_33_bool);
	if(var_33_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_6017(bool var_207_bool, object var_208_object)
{
	object var_210_object;
	var_208_object = var_210_object;
	func_6424(var_210_object);
	bool var_209_bool;
	if(var_209_bool != 0) {
		var_207_bool = true;
		return 0;
	}
	var_207_bool = false;
}


void func_3459(object var_0_object, int var_518_int, object var_519_object)
{
	var_0_object = var_519_object;
	bool var_529_bool; object var_530_object;
	var_519_object = var_530_object;
	func_4911(var_529_bool, var_530_object);
	if(!var_529_bool) { //@nz
		var_518_int = -2;
		return 8;
	}
	object var_525_object;
	@CreateDialog(var_525_object);
	int var_532_int;
	func_5097(var_532_int);
	var_525_object->SetNPCName(var_532_int);
	string var_533_string;
	func_5099(var_533_string);
	var_525_object->SetPhoto(var_533_string);
	int var_534_int;
	func_6565(var_534_int);
	var_525_object->SetPlayerName(var_534_int);
	bool var_526_bool;
	@IsOverrideActive(var_526_bool);
	if(var_526_bool != 0) {
		var_518_int = -2;
		return 8;
	}
	@DoDialog(var_525_object);
	object var_536_object; object var_537_object;
	var_519_object = var_536_object;
	var_525_object = var_537_object;
	TaskCall(11);
	func_3522(var_538_object, var_539_object, var_540_string, var_541_bool, var_536_object, var_537_object);
	TaskReturn();
	bool var_528_bool;
	var_525_object->IsDialogEnd(var_528_bool);
	
	for(;;) {
		var_637_bool = !var_528_bool; //@nz
		if(var_637_bool == 0) goto Label_3511;
		@sync();
		var_525_object->IsDialogEnd(var_528_bool);
	}
	
Label_3511:
	object var_638_object;
	var_519_object = var_638_object;
	func_4967();
	@StopDialog(var_525_object);
	var_525_object->GetReturnValue(-1);
	int var_527_int = var_518_int;
}
EMIT "Stack[-4] = 0";


void func_4996(cvector var_70_cvector, cvector var_71_cvector)
{
	float var_74_float = sqrt(var_71_cvector | var_71_cvector);
	if(var_74_float < 0.000001)
		var_70_cvector = [0.0, 0.0, 0.0];
	var_70_cvector = var_71_cvector / var_74_float;
}


void func_6532(object var_92_object, string var_93_string, float var_94_float)
{
	object var_102_object;
	@GetMainOutdoorScene(var_102_object);
	if(var_102_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_100_cvector;
	cvector var_101_cvector;
	bool var_103_bool;
	var_102_object->GetLocator(var_93_string, var_103_bool, var_100_cvector, var_101_cvector);
	if(!var_103_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_93_string) + " doesnt exist");
	var_102_object->GetMap(var_92_object);
	if(var_92_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_113_float = GetByIndex(var_100_cvector, 0);
	var_114_float = GetByIndex(var_100_cvector, 2);
	var_92_object->SetMapParams(var_113_float, var_114_float, var_94_float);
}
EMIT "Stack[-2] = 0";


void func_4484(object var_0_object, int var_641_int, object var_642_object)
{
	var_0_object = var_642_object;
	bool var_652_bool; object var_653_object;
	var_642_object = var_653_object;
	func_4911(var_652_bool, var_653_object);
	if(!var_652_bool) { //@nz
		var_641_int = -2;
		return 8;
	}
	object var_648_object;
	@CreateDialog(var_648_object);
	int var_655_int;
	func_5097(var_655_int);
	var_648_object->SetNPCName(var_655_int);
	string var_656_string;
	func_5099(var_656_string);
	var_648_object->SetPhoto(var_656_string);
	int var_657_int;
	func_6565(var_657_int);
	var_648_object->SetPlayerName(var_657_int);
	bool var_649_bool;
	@IsOverrideActive(var_649_bool);
	if(var_649_bool != 0) {
		var_641_int = -2;
		return 8;
	}
	@DoDialog(var_648_object);
	object var_659_object; object var_660_object;
	var_642_object = var_659_object;
	var_648_object = var_660_object;
	TaskCall(13);
	func_4547(var_661_object, var_662_object, var_663_string, var_664_bool, var_659_object, var_660_object);
	TaskReturn();
	bool var_651_bool;
	var_648_object->IsDialogEnd(var_651_bool);
	
	for(;;) {
		var_692_bool = !var_651_bool; //@nz
		if(var_692_bool == 0) goto Label_4536;
		@sync();
		var_648_object->IsDialogEnd(var_651_bool);
	}
	
Label_4536:
	object var_693_object;
	var_642_object = var_693_object;
	func_4967();
	@StopDialog(var_648_object);
	var_648_object->GetReturnValue(-1);
	int var_650_int = var_641_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6027(bool var_299_bool)
{
	int var_301_int;
	func_5006(var_301_int, "d4q01");
	if(var_301_int == 1)
		var_299_bool = true;
	var_299_bool = false;
}


void func_5006(int var_91_int, string var_92_string)
{
	int var_94_int;
	@GetVariable(var_92_string, var_94_int);
	var_94_int = var_91_int;
}


void func_5011(object var_109_object, string var_110_string)
{
	object var_113_object;
	@GetMainOutdoorScene(var_113_object);
	object var_114_object;
	@AddBlankActor(var_114_object, var_113_object, var_110_string, (var_110_string + ".bin"));
	var_114_object = var_109_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5525(void)
{
	@SetVariable("ood4Lara4", 1);
}


// @pe
void func_6039(bool var_293_bool)
{
	int var_295_int;
	func_5006(var_295_int, "ood4Lara1");
	if(var_295_int == 0) {
		var_293_bool = true;
		return 0;
	}
	var_293_bool = false;
}


// @pe
void func_411(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_714_object, object var_715_object)
{
	var_0_object = var_715_object;
	var_1_object = var_714_object;
	var_3_object = false;
	if(1 != 0) {
		func_551(var_715_object, "Neutral");
		var_0_object->SetMessage(3662); //@t
		var_0_object->ClearReplies(); //@t
		bool var_727_bool = false;
		bool var_728_bool;
		func_6169(var_1_object);
		if(var_728_bool != 0) {
			bool var_734_bool;
			func_6181(var_1_object);
			if(var_734_bool != 0)
				var_727_bool = true;
		}
		if(var_727_bool != 0)
			var_0_object->AddReply(12735, 11881, 13929); //@t
		bool var_743_bool = false;
		bool var_744_bool = false;
		bool var_745_bool = false;
		bool var_746_bool;
		func_6193(var_1_object);
		if(var_746_bool != 0) {
			bool var_752_bool;
			func_6205(var_1_object);
			if(var_752_bool != 0)
				var_745_bool = true;
		}
		if(var_745_bool != 0) {
			bool var_758_bool;
			func_6253(var_1_object);
			if(!var_758_bool) //@nz
				var_744_bool = true;
		}
		if(var_744_bool != 0) {
			bool var_765_bool;
			func_6265(var_1_object);
			if(!var_765_bool) //@nz
				var_743_bool = true;
		}
		if(var_743_bool != 0)
			var_0_object->AddReply(12736, 11904, 13930); //@t
		bool var_775_bool = false;
		bool var_776_bool;
		func_6217(var_1_object);
		if(var_776_bool != 0) {
			bool var_782_bool;
			func_5993(var_1_object);
			if(var_782_bool != 0)
				var_775_bool = true;
		}
		if(var_775_bool != 0)
			var_0_object->AddReply(3664, 3970, 3969); //@t
		bool var_791_bool;
		func_6241(var_1_object);
		if(var_791_bool != 0)
			var_0_object->AddReply(3663, 3972, 3968); //@t
		var_0_object->AddReply(13019, -1, 14225); //@t
		goto Label_521;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19f";
	}
Label_521:
	bool var_803_bool;
	func_5101(var_803_bool);
	if(var_803_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4971(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_550;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_550:
		return 0;

	}
	
}


// @pe
void func_5531(void)
{
	@SetVariable("d5q01", 5);
	func_6678();
	bool var_65_bool;
	func_5048(var_65_bool, "quest_d5_01", "factory");
}


void func_5022(object var_223_object, object var_224_object, int var_225_int)
{
	int var_229_int;
	var_224_object->GetItemID(var_229_int);
	int var_230_int;
	@GetInvItemProperty(var_230_int, var_229_int, "Category");
	bool var_231_bool;
	var_223_object->AddItem(var_231_bool, var_224_object, var_230_int, var_225_int);
	if(!var_231_bool) //@nz
		var_223_object->DropItems(var_224_object, var_225_int);
}


// @pe
void func_6051(bool var_309_bool)
{
	int var_311_int;
	func_5006(var_311_int, "ood4Lara2");
	if(var_311_int == 0) {
		var_309_bool = true;
		return 0;
	}
	var_309_bool = false;
}


void func_6565(int var_88_int)
{
	int var_90_int;
	@GetVariable("player", var_90_int);
	if(var_90_int == 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0x19b4";
	}
	if(var_90_int == 1) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
}


// @pe
void func_5545(void)
{
	@SetVariable("ood6Lara1", 1);
}


void func_5035(object var_218_object, string var_219_string, int var_220_int)
{
	object var_222_object;
	@CreateInvItem(var_222_object);
	var_222_object->SetItemName(var_219_string);
	object var_223_object; object var_224_object; int var_225_int;
	var_218_object = var_223_object;
	var_222_object = var_224_object;
	var_220_int = var_225_int;
	func_5022(var_223_object, var_224_object, var_225_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5551(object var_42_object)
{
	func_6694();
	@Trace("lara blood is given");
	object var_70_object;
	var_42_object = var_70_object;
	func_5035(var_70_object, "d6q01_lara_blood", 1);
}


// @pe
void func_6063(bool var_315_bool)
{
	int var_317_int;
	func_5006(var_317_int, "d4q01_subquest");
	if(var_317_int == 2)
		var_315_bool = true;
	var_315_bool = false;
}


void func_2485(object var_0_object, int var_390_int, object var_391_object)
{
	var_0_object = var_391_object;
	bool var_401_bool; object var_402_object;
	var_391_object = var_402_object;
	func_4911(var_401_bool, var_402_object);
	if(!var_401_bool) { //@nz
		var_390_int = -2;
		return 8;
	}
	object var_397_object;
	@CreateDialog(var_397_object);
	int var_404_int;
	func_5097(var_404_int);
	var_397_object->SetNPCName(var_404_int);
	string var_405_string;
	func_5099(var_405_string);
	var_397_object->SetPhoto(var_405_string);
	int var_406_int;
	func_6565(var_406_int);
	var_397_object->SetPlayerName(var_406_int);
	bool var_398_bool;
	@IsOverrideActive(var_398_bool);
	if(var_398_bool != 0) {
		var_390_int = -2;
		return 8;
	}
	@DoDialog(var_397_object);
	object var_408_object; object var_409_object;
	var_391_object = var_408_object;
	var_397_object = var_409_object;
	TaskCall(9);
	func_2548(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object);
	TaskReturn();
	bool var_400_bool;
	var_397_object->IsDialogEnd(var_400_bool);
	
	for(;;) {
		var_514_bool = !var_400_bool; //@nz
		if(var_514_bool == 0) goto Label_2537;
		@sync();
		var_397_object->IsDialogEnd(var_400_bool);
	}
	
Label_2537:
	object var_515_object;
	var_391_object = var_515_object;
	func_4967();
	@StopDialog(var_397_object);
	var_397_object->GetReturnValue(-1);
	int var_399_int = var_390_int;
}
EMIT "Stack[-4] = 0";


void func_6582(void)
{
	@Trace("Adding diary entry");
	object var_51_object;
	@CreateDiaryEntry(var_51_object, 33, 1, 12115);
	bool var_56_bool; object var_57_object;
	var_51_object = var_57_object;
	func_6469(var_56_bool, var_57_object, 2);
}
EMIT "Stack[-1] = 0";


void func_5048(bool var_65_bool, string var_66_string, string var_67_string)
{
	object var_69_object;
	@FindActor(var_69_object, var_66_string);
	if(var_69_object == null)
		var_65_bool = false;
	@Trigger(var_69_object, var_67_string);
	var_65_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6075(bool var_225_bool, object var_226_object)
{
	object var_228_object;
	var_226_object = var_228_object;
	func_6435(var_228_object);
	bool var_227_bool;
	if(var_227_bool != 0) {
		var_225_bool = true;
		return 0;
	}
	var_225_bool = false;
}


// @pe
void func_5565(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_3522(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_536_object, object var_537_object)
{
	var_0_object = var_537_object;
	var_1_object = var_536_object;
	var_3_object = false;
	if(1 != 0) {
		func_3671(var_537_object, "Neutral");
		var_0_object->SetMessage(10151); //@t
		var_0_object->ClearReplies(); //@t
		bool var_549_bool = false;
		bool var_550_bool;
		func_6039(var_1_object);
		if(var_550_bool != 0) {
			bool var_556_bool;
			func_6027(var_1_object);
			if(var_556_bool != 0)
				var_549_bool = true;
		}
		if(var_549_bool != 0)
			var_0_object->AddReply(10152, 11195, 11194); //@t
		bool var_565_bool = false;
		bool var_566_bool;
		func_6051(var_1_object);
		if(var_566_bool != 0) {
			bool var_572_bool;
			func_6063(var_1_object);
			if(var_572_bool != 0)
				var_565_bool = true;
		}
		if(var_565_bool != 0)
			var_0_object->AddReply(10995, 12163, 12162); //@t
		bool var_581_bool = false;
		bool var_582_bool;
		func_6097(var_1_object);
		if(var_582_bool != 0) {
			bool var_588_bool;
			func_6085(var_1_object);
			if(var_588_bool != 0)
				var_581_bool = true;
		}
		if(var_581_bool != 0)
			var_0_object->AddReply(11435, 12638, 12637); //@t
		bool var_597_bool = false;
		bool var_598_bool;
		func_6085(var_1_object);
		if(var_598_bool != 0) {
			bool var_600_bool;
			func_6109(var_1_object);
			if(!var_600_bool) //@nz
				var_597_bool = true;
		}
		if(var_597_bool != 0)
			var_0_object->AddReply(11476, 12683, 12682); //@t
		bool var_610_bool = false;
		bool var_611_bool;
		func_6133(var_1_object);
		if(var_611_bool != 0) {
			bool var_617_bool;
			func_6121(var_1_object);
			if(var_617_bool != 0)
				var_610_bool = true;
		}
		if(var_610_bool != 0)
			var_0_object->AddReply(11859, 13073, 13072); //@t
		var_0_object->AddReply(11479, -1, 12685); //@t
		goto Label_3641;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xdc6";
	}
Label_3641:
	bool var_629_bool;
	func_5101(var_629_bool);
	if(var_629_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4971(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3670;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3670:
		return 0;

	}
	
}


// @pe
void func_5571(void)
{
	@SetVariable("ood6Lara2", 1);
}


// @pe
void func_4547(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_659_object, object var_660_object)
{
	var_0_object = var_660_object;
	var_3_object = false;
	if(1 != 0) {
		func_4610(var_660_object, "Neutral");
		var_0_object->SetMessage(11662); //@t
		var_0_object->ClearReplies(); //@t
		bool var_672_bool;
		func_6145(var_659_object);
		if(var_672_bool != 0)
			var_0_object->AddReply(11663, 12863, 12862); //@t
		var_0_object->AddReply(11960, -1, 13174); //@t
		goto Label_4580;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x11c7";
	}
Label_4580:
	bool var_684_bool;
	func_5101(var_684_bool);
	if(var_684_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4971(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4609;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4609:
		return 0;

	}
	
}


// @pe
void func_6085(bool var_331_bool)
{
	int var_333_int;
	func_5006(var_333_int, "d4q02");
	if(var_333_int == 1)
		var_331_bool = true;
	var_331_bool = false;
}


void func_5060(float var_57_float)
{
	float var_59_float;
	@GetGameTime(var_59_float);
	var_59_float = var_57_float;
}


void func_6598(void)
{
	@Trace("Adding diary entry");
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 12, 2, 3096);
	bool var_81_bool; object var_82_object;
	var_76_object = var_82_object;
	func_6469(var_81_bool, var_82_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5577(void)
{
	@SetVariable("ood6Lara3", 1);
}


void func_5065(int var_140_int)
{
	float var_142_float;
	@GetGameTime(var_142_float);
	var_140_int = 1 + (var_142_float / 24);
}


// @pe
void func_5583(void)
{
	@SetVariable("ood6Lara4", 1);
}


// @pe
void func_6097(bool var_325_bool)
{
	int var_327_int;
	func_5006(var_327_int, "ood4Lara3");
	if(var_327_int == 0) {
		var_325_bool = true;
		return 0;
	}
	var_325_bool = false;
}


void func_5074(int var_211_int)
{
	float var_213_float;
	@GetGameTime(var_213_float);
	int var_214_int;
	var_213_float = var_214_int;
	var_211_int = var_214_int % 24;
}


void func_5589(void)
{
	@SetVariable("d6q01LaraVolonteer", 1);
	object var_112_object;
	func_6515(var_112_object);
	object var_108_object;
	var_112_object = var_108_object;
	object var_109_object;
	var_108_object->FindMark(var_109_object, "d6q01AlexandrGotoJulia");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01AlexandrGotoKaterina");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01AlexandrGotoLara");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01AlexangrGotoJulLaraSelf");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01BigVladGotoAnna");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01BigVladGotoAnnaOspinaSelf");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01BigVladGotoOspina");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01KaterinaGotoLaska");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01KaterinagotoLaskaSelf");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01KillerIsKlara");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01LaskaGotoAlbinos");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01ViktorGotoAlexandr");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01ViktorGotoAlxBigSelf");
	if(var_109_object != 0)
		var_109_object->Remove();
	var_108_object->FindMark(var_109_object, "d6q01ViktorGotoBigVlad");
	if(var_109_object != 0)
		var_109_object->Remove();
	func_6710();
	bool var_156_bool;
	func_6498(var_156_bool, 112);
	bool var_164_bool;
	func_6498(var_164_bool, 113);
	bool var_166_bool;
	func_6498(var_166_bool, 114);
	bool var_168_bool;
	func_6498(var_168_bool, 115);
	bool var_170_bool;
	func_6498(var_170_bool, 116);
	bool var_172_bool;
	func_6498(var_172_bool, 117);
	bool var_174_bool;
	func_5048(var_174_bool, "quest_d6_01", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_6614(void)
{
	@Trace("Adding diary entry");
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 63, 2, 12145);
	bool var_106_bool; object var_107_object;
	var_101_object = var_107_object;
	func_6469(var_106_bool, var_107_object, 12);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5082(bool var_138_bool, int var_139_int)
{
	int var_140_int;
	func_5065(var_140_int);
	var_138_bool = var_140_int == var_139_int;
}


// @pe
void func_6109(bool var_343_bool)
{
	int var_345_int;
	func_5006(var_345_int, "d4q02LaraGivesMedcine");
	if(var_345_int == 1)
		var_343_bool = true;
	var_343_bool = false;
}


void func_5088(bool var_813_bool)
{
	func_4971("No");
	bool var_815_bool;
	@lshWaitForAnimEnd(var_815_bool);
	var_815_bool = var_813_bool;
}


void func_6630(void)
{
	@Trace("Adding diary entry");
	object var_212_object;
	@CreateDiaryEntry(var_212_object, 65, 2, 12147);
	bool var_217_bool; object var_218_object;
	var_212_object = var_218_object;
	func_6469(var_217_bool, var_218_object, 12);
}
EMIT "Stack[-1] = 0";


void func_5097(int var_86_int)
{
	var_86_int = 2866;
}


// @pe
void func_6121(bool var_360_bool)
{
	int var_362_int;
	func_5006(var_362_int, "d4q02");
	if(var_362_int == 1000)
		var_360_bool = true;
	var_360_bool = false;
}


void func_5099(string var_87_string)
{
	var_87_string = "ui/NPC_Lara.png";
}


void func_5101(bool var_33_bool)
{
	var_33_bool = true;
}


// @pe
void func_5103(void)
{
	@SetVariable("ood1Lara1", 1);
}


// @pe
void func_2548(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_408_object, object var_409_object)
{
	var_0_object = var_409_object;
	var_1_object = var_408_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_415_bool = false;
		bool var_416_bool;
		func_5906(var_1_object);
		if(var_416_bool != 0) {
			bool var_422_bool;
			func_5942(var_1_object);
			if(var_422_bool != 0)
				var_415_bool = true;
		}
		if(var_415_bool != 0) {
			func_2751(var_409_object, "Neutral");
			var_0_object->SetMessage(6893); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(7378, 8140, 8139); //@t
			var_0_object->AddReply(7384, 8140, 8145); //@t
		} else {
					func_2751(var_409_object, "Neutral");
					var_0_object->SetMessage(7377); //@t
					var_0_object->ClearReplies(); //@t
					bool var_450_bool = false;
					bool var_451_bool = false;
					bool var_452_bool;
					func_5918(var_1_object);
					if(var_452_bool != 0) {
						bool var_458_bool;
						func_5981(var_1_object);
						if(var_458_bool != 0)
							var_451_bool = true;
					}
					if(var_451_bool != 0) {
						bool var_464_bool;
						func_5959(var_464_bool, var_1_object);
						if(var_464_bool != 0)
							var_450_bool = true;
					}
					if(var_450_bool != 0)
						var_0_object->AddReply(6900, 7607, 7606); //@t
					bool var_482_bool = false;
					bool var_483_bool;
					func_5930(var_1_object);
					if(var_483_bool != 0) {
						bool var_489_bool;
						func_5959(var_489_bool, var_1_object);
						if(var_489_bool != 0)
							var_482_bool = true;
					}
					if(var_482_bool != 0)
						var_0_object->AddReply(6902, 7609, 7608); //@t
					bool var_494_bool = false;
					bool var_495_bool;
					func_5954(var_1_object);
					if(var_495_bool != 0) {
						bool var_497_bool;
						func_5969(var_1_object);
						if(var_497_bool != 0)
							var_494_bool = true;
					}
					if(var_494_bool != 0)
						var_0_object->AddReply(6905, 7612, 7611); //@t
					bool var_506_bool;
					func_5942(var_1_object);
					if(var_506_bool != 0)
						var_0_object->AddReply(7745, 7601, 8545); //@t
					var_0_object->AddReply(7744, -1, 8544); //@t
		}
	}
	for(;;) {
		bool var_440_bool;
		func_5101(var_440_bool);
		if(var_440_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4971(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2750;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2750:
			return 0;

		}

	}
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0xabf";
EMIT "Pop(1)";
EMIT "Push((int) 9342)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9343)";
EMIT "Push((int) 10264)";
EMIT "Push((int) 10263)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9350)";
EMIT "Push((int) 10264)";
EMIT "Push((int) 10271)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0xaa1";
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0xabf";
EMIT "Pop(1)";
EMIT "Push((int) 9451)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9452)";
EMIT "Push((int) 10391)";
EMIT "Push((int) 10390)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9471)";
EMIT "Push((int) 10391)";
EMIT "Push((int) 10412)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0xaa1";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x9f8";


// @pe
void func_5109(void)
{
	@SetVariable("ood1Lara2", 1);
}


// @pe
void func_6133(bool var_354_bool)
{
	int var_356_int;
	func_5006(var_356_int, "ood4Lara4");
	if(var_356_int == 0) {
		var_354_bool = true;
		return 0;
	}
	var_354_bool = false;
}


void func_6646(void)
{
	@Trace("Adding diary entry");
	object var_159_object;
	@CreateDiaryEntry(var_159_object, 66, 2, 12148);
	bool var_164_bool; object var_165_object;
	var_159_object = var_165_object;
	func_6469(var_164_bool, var_165_object, 12);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5115(void)
{
	@SetVariable("ood1Lara3", 1);
}


