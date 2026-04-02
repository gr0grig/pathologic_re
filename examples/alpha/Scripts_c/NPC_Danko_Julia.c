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
		func_6201();
		bool var_31_bool;
		func_4924(var_31_bool);
		if(!var_31_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_4989("Neutral");
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
		func_6205(var_31_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_4912(var_31_bool, var_32_object);
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
			func_5007();
			if(var_30_string == 379) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5214();
				func_180(var_31_bool, "Neutral");
				var_0_object->SetMessage(325); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(326, 383, 380); //@t
				var_0_object->AddReply(327, 383, 381); //@t
				var_0_object->AddReply(328, 393, 382); //@t
				return 0;
			}
			if(var_30_string == 393) {
				func_180(var_31_bool, "Neutral");
				var_0_object->SetMessage(338); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(339, 396, 394); //@t
				return 0;
			}
			if(var_30_string == 396) {
				func_180(var_31_bool, "Neutral");
				var_0_object->SetMessage(341); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(343, -1, 398); //@t
				var_0_object->AddReply(344, -1, 399); //@t
				return 0;
			}
			if(var_30_string == 383) {
				func_180(var_31_bool, "Neutral");
				var_0_object->SetMessage(329); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(330, 386, 385); //@t
				var_0_object->AddReply(334, 390, 389); //@t
				return 0;
			}
			if(var_30_string == 390) {
				func_180(var_31_bool, "Neutral");
				var_0_object->SetMessage(335); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(336, -1, 391); //@t
				var_0_object->AddReply(337, -1, 392); //@t
				return 0;
			}
			if(var_30_string == 386) {
				func_180(var_31_bool, "Neutral");
				var_0_object->SetMessage(331); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(333, -1, 388); //@t
				return 0;
			}
			var_3_string = true;
			bool var_109_bool;
			func_5108(var_109_bool);
			if(var_109_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
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
			func_5007();
			if(var_31_bool == 3943) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5318();
			}
			if(var_31_bool == 3953) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_5318();
			}
			if(var_31_bool == 13927) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_5324();
			}
			if(var_31_bool == 11813) {
				object var_52_object = var_1_object;
				func_5330(var_0_object);
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_5344();
			}
			if(var_31_bool == 11839) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_5324();
				object var_104_object = var_1_object;
				func_5330(var_0_object);
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_5344();
			}
			if(var_31_bool == 13928) {
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_5492();
			}
			if(var_31_bool == 11853) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_5350();
			}
			if(var_31_bool == 11854) {
				object var_192_object; object var_193_object;
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_5350();
			}
			if(var_30_string == 3942) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(3640); //@t
				var_0_object->ClearReplies(); //@t
				bool var_212_bool = false;
				bool var_213_bool;
				func_5867(var_1_object);
				if(var_213_bool != 0) {
					bool var_221_bool;
					func_5879(var_1_object);
					if(var_221_bool != 0)
						var_212_bool = true;
				}
				if(var_212_bool != 0)
					var_0_object->AddReply(3641, 3945, 3943); //@t
				bool var_230_bool = false;
				bool var_231_bool;
				func_5855(var_1_object);
				if(var_231_bool != 0) {
					bool var_237_bool;
					func_5891(var_1_object);
					if(var_237_bool != 0)
						var_230_bool = true;
				}
				if(var_230_bool != 0)
					var_0_object->AddReply(12733, 11803, 13927); //@t
				bool var_246_bool = false;
				bool var_247_bool = false;
				bool var_248_bool = false;
				bool var_249_bool;
				func_5903(var_1_object);
				if(var_249_bool != 0) {
					bool var_255_bool;
					func_5915(var_1_object);
					if(var_255_bool != 0)
						var_248_bool = true;
				}
				if(var_248_bool != 0) {
					bool var_257_bool;
					func_5920(var_1_object);
					if(!var_257_bool) //@nz
						var_247_bool = true;
				}
				if(var_247_bool != 0) {
					bool var_264_bool;
					func_5932(var_1_object);
					if(!var_264_bool) //@nz
						var_246_bool = true;
				}
				if(var_246_bool != 0)
					var_0_object->AddReply(12734, 11840, 13928); //@t
				var_0_object->AddReply(3642, -1, 3944); //@t
				return 0;
			}
			if(var_30_string == 11840) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10719); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10720, 11842, 11841); //@t
				return 0;
			}
			if(var_30_string == 11842) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10721); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10722, 11844, 11843); //@t
				var_0_object->AddReply(10733, 11844, 11855); //@t
				var_0_object->AddReply(10734, 11858, 11857); //@t
				return 0;
			}
			if(var_30_string == 11858) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10735); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10736, 11844, 11859); //@t
				var_0_object->AddReply(10737, 11844, 11861); //@t
				return 0;
			}
			if(var_30_string == 11844) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10724, 11846, 11845); //@t
				var_0_object->AddReply(10728, 11846, 11849); //@t
				var_0_object->AddReply(10729, 11852, 11851); //@t
				return 0;
			}
			if(var_30_string == 11852) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10730); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10731, -1, 11853); //@t
				var_0_object->AddReply(10732, -1, 11854); //@t
				return 0;
			}
			if(var_30_string == 11846) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10725); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10726, -1, 11847); //@t
				var_0_object->AddReply(10727, -1, 11848); //@t
				return 0;
			}
			if(var_30_string == 11803) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10689); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10690, 11805, 11804); //@t
				var_0_object->AddReply(10715, 11807, 11835); //@t
				var_0_object->AddReply(10716, 11838, 11837); //@t
				return 0;
			}
			if(var_30_string == 11838) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10717); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10718, -1, 11839); //@t
				return 0;
			}
			if(var_30_string == 11805) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10691); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10692, 11807, 11806); //@t
				var_0_object->AddReply(10711, 11830, 11829); //@t
				return 0;
			}
			if(var_30_string == 11830) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10712); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10713, 11807, 11831); //@t
				var_0_object->AddReply(10714, 11807, 11833); //@t
				return 0;
			}
			if(var_30_string == 11807) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10693); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10694, 11809, 11808); //@t
				var_0_object->AddReply(10701, 11809, 11816); //@t
				var_0_object->AddReply(10702, 11818, 11817); //@t
				return 0;
			}
			if(var_30_string == 11818) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10704, 11820, 11819); //@t
				var_0_object->AddReply(10710, 11820, 11827); //@t
				return 0;
			}
			if(var_30_string == 11820) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10706, 11822, 11821); //@t
				var_0_object->AddReply(10709, 11809, 11825); //@t
				return 0;
			}
			if(var_30_string == 11822) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10707); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10708, 11809, 11823); //@t
				return 0;
			}
			if(var_30_string == 11809) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10695); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10696, 11811, 11810); //@t
				var_0_object->AddReply(10700, 11811, 11814); //@t
				return 0;
			}
			if(var_30_string == 11811) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(10697); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10698, -1, 11812); //@t
				var_0_object->AddReply(10699, -1, 11813); //@t
				return 0;
			}
			if(var_30_string == 3945) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(3643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3644, 3948, 3946); //@t
				var_0_object->AddReply(3645, 3951, 3947); //@t
				return 0;
			}
			if(var_30_string == 3951) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(3648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3649, 3954, 3952); //@t
				var_0_object->AddReply(3650, -1, 3953); //@t
				return 0;
			}
			if(var_30_string == 3954) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(3651); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3654, 3958, 3957); //@t
				return 0;
			}
			if(var_30_string == 3958) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(3655); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3656, 3948, 3959); //@t
				return 0;
			}
			if(var_30_string == 3948) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(3646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3647, 3955, 3950); //@t
				var_0_object->AddReply(3657, 3955, 3961); //@t
				return 0;
			}
			if(var_30_string == 3955) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(3652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3653, 3963, 3956); //@t
				return 0;
			}
			if(var_30_string == 3963) {
				func_546(var_31_bool, "Neutral");
				var_0_object->SetMessage(3658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3659, -1, 3964); //@t
				var_0_object->AddReply(3660, -1, 3965); //@t
				return 0;
			}
			var_3_string = true;
			bool var_501_bool;
			func_5108(var_501_bool);
			if(var_501_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x233";
	
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
			func_5007();
			if(var_31_bool == 6875) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5110();
			}
			if(var_31_bool == 6876) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_5110();
			}
			if(var_31_bool == 9490) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_5208();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_5199();
			}
			if(var_31_bool == 9481) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_5208();
			}
			if(var_31_bool == 9482) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_5208();
			}
			if(var_31_bool == 8635) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_5116();
			}
			if(var_31_bool == 8661) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_5122();
			}
			if(var_31_bool == 8662) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_5122();
			}
			if(var_31_bool == 8675) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_5163();
			}
			if(var_31_bool == 8676) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_5163();
			}
			if(var_31_bool == 8697) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_5169();
			}
			if(var_31_bool == 8706) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_5175();
			}
			if(var_31_bool == 8709) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_5175();
			}
			if(var_31_bool == 8717) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_5181();
			}
			if(var_31_bool == 8731) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_5187();
			}
			if(var_31_bool == 8732) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_5187();
			}
			if(var_31_bool == 8745) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_5193();
			}
			if(var_30_string == 5922) {
				bool var_153_bool = false;
				bool var_154_bool = false;
				bool var_155_bool = false;
				bool var_156_bool = false;
				bool var_157_bool;
				func_5533(var_1_object);
				if(var_157_bool != 0) {
					bool var_165_bool;
					func_5581(var_1_object);
					if(!var_165_bool) //@nz
						var_156_bool = true;
				}
				if(var_156_bool != 0) {
					bool var_172_bool;
					func_5569(var_1_object);
					if(!var_172_bool) //@nz
						var_155_bool = true;
				}
				if(var_155_bool != 0) {
					bool var_179_bool;
					func_5725(var_1_object);
					if(var_179_bool != 0)
						var_154_bool = true;
				}
				if(var_154_bool != 0) {
					bool var_185_bool;
					func_5737(var_1_object);
					if(!var_185_bool) //@nz
						var_153_bool = true;
				}
				if(var_153_bool != 0) {
					object var_192_object; object var_193_object;
					var_192_object = var_1_object;
					var_193_object = var_0_object;
					func_5220();
					func_1681(var_31_bool, "Neutral");
					var_0_object->SetMessage(5377); //@t
					var_0_object->ClearReplies(); //@t
					bool var_212_bool;
					func_5749(var_1_object);
					if(!var_212_bool) //@nz
						var_0_object->AddReply(5379, 5964, 5924); //@t
					bool var_222_bool;
					func_5749(var_1_object);
					if(var_222_bool != 0)
						var_0_object->AddReply(5380, 6864, 5925); //@t
					return 0;
				}
				bool var_227_bool = false;
				bool var_228_bool = false;
				bool var_229_bool = false;
				bool var_230_bool;
				func_5725(var_1_object);
				if(!var_230_bool) { //@nz
					bool var_233_bool;
					func_5737(var_1_object);
					if(var_233_bool != 0)
						var_229_bool = true;
				}
				if(var_229_bool != 0) {
					bool var_235_bool;
					func_5581(var_1_object);
					if(!var_235_bool) //@nz
						var_228_bool = true;
				}
				if(var_228_bool != 0) {
					bool var_238_bool;
					func_5569(var_1_object);
					if(!var_238_bool) //@nz
						var_227_bool = true;
				}
				if(var_227_bool != 0) {
					func_1681(var_31_bool, "Neutral");
					var_0_object->SetMessage(8650); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(8651, 9477, 9476); //@t
					return 0;
				}
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7779); //@t
				var_0_object->ClearReplies(); //@t
				bool var_248_bool = false;
				bool var_249_bool;
				func_5545(var_1_object);
				if(var_249_bool != 0) {
					bool var_255_bool;
					func_5593(var_1_object);
					if(var_255_bool != 0)
						var_248_bool = true;
				}
				if(var_248_bool != 0)
					var_0_object->AddReply(7815, 8618, 8617); //@t
				bool var_264_bool = false;
				bool var_265_bool;
				func_5992(var_1_object);
				if(var_265_bool != 0) {
					bool var_271_bool;
					func_5557(var_1_object);
					if(var_271_bool != 0)
						var_264_bool = true;
				}
				if(var_264_bool != 0)
					var_0_object->AddReply(7783, 8607, 8584); //@t
				bool var_280_bool = false;
				bool var_281_bool = false;
				bool var_282_bool;
				func_6004(var_1_object);
				if(var_282_bool != 0) {
					bool var_288_bool;
					func_5761(var_288_bool, var_1_object);
					if(var_288_bool != 0)
						var_281_bool = true;
				}
				if(var_281_bool != 0) {
					bool var_299_bool;
					func_5641(var_1_object);
					if(var_299_bool != 0)
						var_280_bool = true;
				}
				if(var_280_bool != 0)
					var_0_object->AddReply(7784, 8608, 8585); //@t
				bool var_308_bool = false;
				bool var_309_bool;
				func_5653(var_1_object);
				if(var_309_bool != 0) {
					bool var_315_bool;
					func_5956(var_1_object);
					if(var_315_bool != 0)
						var_308_bool = true;
				}
				if(var_308_bool != 0)
					var_0_object->AddReply(7785, 8687, 8586); //@t
				bool var_324_bool = false;
				bool var_325_bool;
				func_5968(var_1_object);
				if(var_325_bool != 0) {
					bool var_331_bool;
					func_5665(var_1_object);
					if(var_331_bool != 0)
						var_324_bool = true;
				}
				if(var_324_bool != 0)
					var_0_object->AddReply(7786, 8698, 8587); //@t
				bool var_340_bool = false;
				bool var_341_bool;
				func_5944(var_1_object);
				if(var_341_bool != 0) {
					bool var_347_bool;
					func_5677(var_1_object);
					if(var_347_bool != 0)
						var_340_bool = true;
				}
				if(var_340_bool != 0)
					var_0_object->AddReply(7788, 8710, 8589); //@t
				bool var_356_bool = false;
				bool var_357_bool;
				func_5843(var_1_object);
				if(var_357_bool != 0) {
					bool var_363_bool;
					func_5689(var_1_object);
					if(var_363_bool != 0)
						var_356_bool = true;
				}
				if(var_356_bool != 0)
					var_0_object->AddReply(7797, 8613, 8598); //@t
				bool var_372_bool = false;
				bool var_373_bool;
				func_5713(var_1_object);
				if(var_373_bool != 0) {
					bool var_379_bool;
					func_5701(var_1_object);
					if(var_379_bool != 0)
						var_372_bool = true;
				}
				if(var_372_bool != 0)
					var_0_object->AddReply(7914, 8734, 8733); //@t
				var_0_object->AddReply(8703, -1, 9540); //@t
				return 0;
			}
			if(var_30_string == 8734) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7916, 8737, 8735); //@t
				var_0_object->AddReply(7917, 8737, 8736); //@t
				return 0;
			}
			if(var_30_string == 8737) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7919, 8739, 8738); //@t
				return 0;
			}
			if(var_30_string == 8739) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7920); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7921, 8742, 8740); //@t
				return 0;
			}
			if(var_30_string == 8742) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7923, 8744, 8743); //@t
				return 0;
			}
			if(var_30_string == 8744) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7925, -1, 8745); //@t
				return 0;
			}
			if(var_30_string == 8613) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7906, 8726, 8725); //@t
				return 0;
			}
			if(var_30_string == 8726) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7907); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7909, 8730, 8728); //@t
				return 0;
			}
			if(var_30_string == 8730) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7911); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7912, -1, 8731); //@t
				var_0_object->AddReply(7913, -1, 8732); //@t
				return 0;
			}
			if(var_30_string == 8710) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7893, 8712, 8711); //@t
				return 0;
			}
			if(var_30_string == 8712) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7894); //@t
				var_0_object->ClearReplies(); //@t
				bool var_464_bool;
				func_5605(var_1_object);
				if(var_464_bool != 0)
					var_0_object->AddReply(7895, 8714, 8713); //@t
				bool var_473_bool;
				func_5605(var_1_object);
				if(!var_473_bool) //@nz
					var_0_object->AddReply(7897, 8716, 8715); //@t
				return 0;
			}
			if(var_30_string == 8716) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7898); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7900, 8714, 8718); //@t
				return 0;
			}
			if(var_30_string == 8714) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7896); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7899, -1, 8717); //@t
				return 0;
			}
			if(var_30_string == 8698) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7882, 8610, 8699); //@t
				return 0;
			}
			if(var_30_string == 8610) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7883, 8701, 8700); //@t
				var_0_object->AddReply(7885, 8703, 8702); //@t
				return 0;
			}
			if(var_30_string == 8703) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7886); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7887, 8701, 8704); //@t
				return 0;
			}
			if(var_30_string == 8701) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7888, -1, 8706); //@t
				var_0_object->AddReply(7889, 8708, 8707); //@t
				return 0;
			}
			if(var_30_string == 8708) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7891, -1, 8709); //@t
				return 0;
			}
			if(var_30_string == 8687) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7872); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7873, 8609, 8688); //@t
				var_0_object->AddReply(7874, 8609, 8689); //@t
				return 0;
			}
			if(var_30_string == 8609) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7808); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7875, 8692, 8691); //@t
				var_0_object->AddReply(7877, 8694, 8693); //@t
				return 0;
			}
			if(var_30_string == 8694) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7878); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7879, 8692, 8695); //@t
				return 0;
			}
			if(var_30_string == 8692) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7880, -1, 8697); //@t
				return 0;
			}
			if(var_30_string == 8608) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7807); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7856, 8668, 8667); //@t
				var_0_object->AddReply(7866, 8668, 8677); //@t
				return 0;
			}
			if(var_30_string == 8668) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7858, 8670, 8669); //@t
				var_0_object->AddReply(7867, 8670, 8679); //@t
				return 0;
			}
			if(var_30_string == 8670) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7859); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7860, 8672, 8671); //@t
				bool var_595_bool;
				func_5831(var_1_object);
				if(!var_595_bool) //@nz
					var_0_object->AddReply(7868, 8682, 8681); //@t
				return 0;
			}
			if(var_30_string == 8682) {
				object var_607_object; object var_608_object;
				var_607_object = var_1_object;
				var_608_object = var_0_object;
				func_5312();
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7870, 8672, 8683); //@t
				return 0;
			}
			if(var_30_string == 8672) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7861); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7862, 8674, 8673); //@t
				var_0_object->AddReply(7871, 8674, 8685); //@t
				return 0;
			}
			if(var_30_string == 8674) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7864, -1, 8675); //@t
				var_0_object->AddReply(7865, -1, 8676); //@t
				return 0;
			}
			if(var_30_string == 8607) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7843, 8657, 8651); //@t
				var_0_object->AddReply(7855, 8652, 8665); //@t
				return 0;
			}
			if(var_30_string == 8657) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7848); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7849, 8659, 8658); //@t
				var_0_object->AddReply(7854, 8659, 8663); //@t
				return 0;
			}
			if(var_30_string == 8659) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7851, 8652, 8660); //@t
				return 0;
			}
			if(var_30_string == 8652) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7844); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7852, -1, 8661); //@t
				var_0_object->AddReply(7853, -1, 8662); //@t
				return 0;
			}
			if(var_30_string == 8618) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7817, 8620, 8619); //@t
				var_0_object->AddReply(7845, 8654, 8653); //@t
				return 0;
			}
			if(var_30_string == 8654) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7846); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7847, 8620, 8655); //@t
				return 0;
			}
			if(var_30_string == 8620) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7821, 8625, 8623); //@t
				var_0_object->AddReply(7819, 8622, 8621); //@t
				return 0;
			}
			if(var_30_string == 8622) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7822, 8625, 8624); //@t
				return 0;
			}
			if(var_30_string == 8625) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7824, 8627, 8626); //@t
				var_0_object->AddReply(7842, 8630, 8649); //@t
				return 0;
			}
			if(var_30_string == 8627) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7826, 8630, 8628); //@t
				var_0_object->AddReply(7834, 8639, 8638); //@t
				return 0;
			}
			if(var_30_string == 8639) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7836, 8641, 8640); //@t
				var_0_object->AddReply(7841, 8641, 8645); //@t
				return 0;
			}
			if(var_30_string == 8641) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7837); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7839, 8630, 8643); //@t
				var_0_object->AddReply(7840, 8630, 8644); //@t
				return 0;
			}
			if(var_30_string == 8630) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7828, 8632, 8631); //@t
				var_0_object->AddReply(7833, 8632, 8636); //@t
				return 0;
			}
			if(var_30_string == 8632) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7830, 8634, 8633); //@t
				return 0;
			}
			if(var_30_string == 8634) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(7831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7832, -1, 8635); //@t
				return 0;
			}
			if(var_30_string == 9477) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(8652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8653, 9479, 9478); //@t
				return 0;
			}
			if(var_30_string == 9479) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(8654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8655, 9483, 9480); //@t
				var_0_object->AddReply(8656, -1, 9481); //@t
				var_0_object->AddReply(8657, -1, 9482); //@t
				return 0;
			}
			if(var_30_string == 9483) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(8658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8659, 9485, 9484); //@t
				return 0;
			}
			if(var_30_string == 9485) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(8660); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8661, 9487, 9486); //@t
				return 0;
			}
			if(var_30_string == 9487) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(8662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8663, 9489, 9488); //@t
				return 0;
			}
			if(var_30_string == 9489) {
				object var_814_object; object var_815_object;
				var_814_object = var_1_object;
				var_815_object = var_0_object;
				func_5220();
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(8664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8665, -1, 9490); //@t
				return 0;
			}
			if(var_30_string == 5964) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(5415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6207, 6862, 6861); //@t
				var_0_object->AddReply(5416, 5966, 5965); //@t
				return 0;
			}
			if(var_30_string == 6862) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(6208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6209, 6864, 6863); //@t
				return 0;
			}
			if(var_30_string == 6864) {
				object var_840_object; object var_841_object;
				var_840_object = var_1_object;
				var_841_object = var_0_object;
				func_5157();
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(6210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6211, 6866, 6865); //@t
				return 0;
			}
			if(var_30_string == 6866) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(6212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6214, 5966, 6868); //@t
				return 0;
			}
			if(var_30_string == 5966) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(5417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5419, 5969, 5968); //@t
				var_0_object->AddReply(6215, 6867, 6870); //@t
				var_0_object->AddReply(5418, 6874, 5967); //@t
				return 0;
			}
			if(var_30_string == 6867) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(6213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6216, 6874, 6872); //@t
				return 0;
			}
			if(var_30_string == 5969) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(5420); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5421, 6874, 5970); //@t
				return 0;
			}
			if(var_30_string == 6874) {
				func_1681(var_31_bool, "Neutral");
				var_0_object->SetMessage(6217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6218, -1, 6875); //@t
				var_0_object->AddReply(6219, -1, 6876); //@t
				return 0;
			}
			var_3_string = true;
			bool var_893_bool;
			func_5108(var_893_bool);
			if(var_893_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6a2";
	
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
			func_5007();
			if(var_31_bool == 8122) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5151();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_5139();
				object var_44_object = var_1_object;
				func_5128(var_0_object);
			}
			if(var_31_bool == 8131) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_5151();
				object var_57_object = var_1_object;
				func_5128(var_0_object);
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_5139();
			}
			if(var_30_string == 7620) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(6914); //@t
				var_0_object->ClearReplies(); //@t
				bool var_79_bool = false;
				bool var_80_bool;
				func_5617(var_1_object);
				if(var_80_bool != 0) {
					bool var_88_bool;
					func_5629(var_1_object);
					if(var_88_bool != 0)
						var_79_bool = true;
				}
				if(var_79_bool != 0)
					var_0_object->AddReply(6915, 7622, 7621); //@t
				var_0_object->AddReply(7747, -1, 8548); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xdc6";
			EMIT "Pop(1)";
			EMIT "Push((int) 9294)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9295)";
			EMIT "Push((int) 10205)";
			EMIT "Push((int) 10204)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9306)";
			EMIT "Push((int) 10205)";
			EMIT "Push((int) 10216)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xdc6";
			EMIT "Pop(1)";
			EMIT "Push((int) 9307)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9308)";
			EMIT "Push((int) 10220)";
			EMIT "Push((int) 10219)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9316)";
			EMIT "Push((int) 10229)";
			EMIT "Push((int) 10228)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9319)";
			EMIT "Push((int) 10233)";
			EMIT "Push((int) 10232)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_30_string == 10233) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(9320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9321, 10222, 10234); //@t
				return 0;
			}
			if(var_30_string == 10229) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(9317); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9318, 10220, 10230); //@t
				return 0;
			}
			if(var_30_string == 10220) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(9309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9310, 10222, 10221); //@t
				var_0_object->AddReply(9313, 10225, 10224); //@t
				return 0;
			}
			if(var_30_string == 10225) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(9314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9315, 10222, 10226); //@t
				return 0;
			}
			if(var_30_string == 10222) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(9311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9312, -1, 10223); //@t
				return 0;
			}
			if(var_30_string == 10205) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(9296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9297, 10207, 10206); //@t
				var_0_object->AddReply(9305, 10207, 10214); //@t
				return 0;
			}
			if(var_30_string == 10207) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(9298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9299, 10209, 10208); //@t
				var_0_object->AddReply(9303, 10213, 10212); //@t
				return 0;
			}
			if(var_30_string == 10213) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(9304); //@t
				var_0_object->ClearReplies(); //@t
				return 0;
			}
			if(var_30_string == 10209) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(9300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9301, -1, 10210); //@t
				var_0_object->AddReply(9302, -1, 10211); //@t
				return 0;
			}
			if(var_30_string == 7622) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(6916); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6917, 8117, 7623); //@t
				var_0_object->AddReply(7365, 8124, 8123); //@t
				return 0;
			}
			if(var_30_string == 8124) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(7366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7367, 8121, 8125); //@t
				var_0_object->AddReply(7368, 8127, 8126); //@t
				return 0;
			}
			if(var_30_string == 8127) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(7369); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7370, 8121, 8128); //@t
				return 0;
			}
			if(var_30_string == 8117) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(7359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7360, 8119, 8118); //@t
				var_0_object->AddReply(7372, 8121, 8132); //@t
				return 0;
			}
			if(var_30_string == 8119) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(7361); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7362, 8121, 8120); //@t
				return 0;
			}
			if(var_30_string == 8121) {
				func_3526(var_31_bool, "Neutral");
				var_0_object->SetMessage(7363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7364, -1, 8122); //@t
				var_0_object->AddReply(7371, -1, 8131); //@t
				return 0;
			}
			var_3_string = true;
			bool var_226_bool;
			func_5108(var_226_bool);
			if(var_226_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdd7";
	
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
			func_5007();
			if(var_30_string == 10865) {
				bool var_36_bool;
				func_5980(var_1_object);
				if(var_36_bool != 0) {
					object var_44_object; object var_45_object;
					var_44_object = var_1_object;
					var_45_object = var_0_object;
					func_5505();
					func_4135(var_31_bool, "Neutral");
					var_0_object->SetMessage(9865); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9866, 10867, 10866); //@t
					var_0_object->AddReply(9877, -1, 10880); //@t
					var_0_object->AddReply(9878, 10882, 10881); //@t
					return 0;
				}
				func_4135(var_31_bool, "Neutral");
				var_0_object->SetMessage(10190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15313, -1, 16551); //@t
				return 0;
			}
			if(var_30_string == 10882) {
				func_4135(var_31_bool, "Neutral");
				var_0_object->SetMessage(9879); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9880, -1, 10883); //@t
				return 0;
			}
			if(var_30_string == 10867) {
				func_4135(var_31_bool, "Neutral");
				var_0_object->SetMessage(9867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9868, 10869, 10868); //@t
				var_0_object->AddReply(9876, 10869, 10878); //@t
				return 0;
			}
			if(var_30_string == 10869) {
				func_4135(var_31_bool, "Neutral");
				var_0_object->SetMessage(9869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9870, 10871, 10870); //@t
				var_0_object->AddReply(9874, 10871, 10874); //@t
				var_0_object->AddReply(9875, 10871, 10876); //@t
				return 0;
			}
			if(var_30_string == 10871) {
				func_4135(var_31_bool, "Neutral");
				var_0_object->SetMessage(9871); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9872, -1, 10872); //@t
				var_0_object->AddReply(9873, -1, 10873); //@t
				return 0;
			}
			var_3_string = true;
			bool var_118_bool;
			func_5108(var_118_bool);
			if(var_118_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1038";
	
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
			func_5007();
			if(var_31_int == 12527) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_5226();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_5232();
				object var_44_object = var_1_object;
				func_5238(var_0_object);
				object var_110_object = var_1_object;
				func_5494(var_0_object);
				object var_129_object = var_1_object;
				func_5511(var_0_object);
				object var_135_object = var_1_object;
				func_5522(var_0_object);
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_5145();
			}
			if(var_31_int == 12674) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_5226();
			}
			if(var_31_int == 12677) {
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_5232();
				object var_153_object = var_1_object;
				func_5238(var_0_object);
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_5145();
				object var_157_object = var_1_object;
				func_5494(var_0_object);
				object var_159_object = var_1_object;
				func_5522(var_0_object);
				object var_161_object = var_1_object;
				func_5511(var_0_object);
			}
			if(var_31_int == 13071) {
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_5306();
			}
			if(var_30_int == 12514) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11320); //@t
				var_0_object->ClearReplies(); //@t
				bool var_187_bool;
				func_5783(var_1_object);
				if(var_187_bool != 0)
					var_0_object->AddReply(11321, 12516, 12515); //@t
				bool var_196_bool = false;
				bool var_197_bool;
				func_5771(var_1_object);
				if(var_197_bool != 0) {
					bool var_203_bool;
					func_5795(var_1_object);
					if(!var_203_bool) //@nz
						var_196_bool = true;
				}
				if(var_196_bool != 0)
					var_0_object->AddReply(11469, 12676, 12675); //@t
				bool var_213_bool = false;
				bool var_214_bool;
				func_5819(var_1_object);
				if(var_214_bool != 0) {
					bool var_220_bool;
					func_5807(var_1_object);
					if(var_220_bool != 0)
						var_213_bool = true;
				}
				if(var_213_bool != 0)
					var_0_object->AddReply(11856, 13070, 13069); //@t
				var_0_object->AddReply(11472, -1, 12678); //@t
				return 0;
			}
			if(var_30_int == 13070) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11858, -1, 13071); //@t
				return 0;
			}
			if(var_30_int == 12676) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11470); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11471, -1, 12677); //@t
				return 0;
			}
			if(var_30_int == 12516) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11322); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11429, 12522, 12629); //@t
				var_0_object->AddReply(11323, 12518, 12517); //@t
				return 0;
			}
			if(var_30_int == 12518) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11324); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11455, 12522, 12659); //@t
				return 0;
			}
			if(var_30_int == 12522) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11328); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11329, 12524, 12523); //@t
				var_0_object->AddReply(11456, 12661, 12660); //@t
				return 0;
			}
			if(var_30_int == 12661) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11458, 12663, 12662); //@t
				return 0;
			}
			if(var_30_int == 12663) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11460, 12665, 12664); //@t
				var_0_object->AddReply(11462, 12667, 12666); //@t
				return 0;
			}
			if(var_30_int == 12667) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11463); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11465, 12524, 12669); //@t
				return 0;
			}
			if(var_30_int == 12665) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11466, 12524, 12670); //@t
				return 0;
			}
			if(var_30_int == 12524) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11331, 12526, 12525); //@t
				return 0;
			}
			if(var_30_int == 12526) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11333, -1, 12527); //@t
				var_0_object->AddReply(11464, 12673, 12668); //@t
				return 0;
			}
			if(var_30_int == 12673) {
				func_4480(var_31_int, "Neutral");
				var_0_object->SetMessage(11467); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11468, -1, 12674); //@t
				return 0;
			}
			var_3_string = true;
			bool var_328_bool;
			func_5108(var_328_bool);
			if(var_328_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1191";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_5122(void)
{
	@SetVariable("ood1Julia3", 1);
}


// @pe
void func_5891(bool var_237_bool)
{
	int var_239_int;
	func_5024(var_239_int, "ood6Julia2");
	if(var_239_int == 0) {
		var_237_bool = true;
		return 0;
	}
	var_237_bool = false;
}


// @pe
void func_5128(object var_44_object)
{
	@Trace("money1000 is given");
	object var_47_object;
	var_44_object = var_47_object;
	func_4905(var_47_object, "money", 1000);
}


void func_6153(void)
{
	@Trace("Adding diary entry");
	object var_55_object;
	@CreateDiaryEntry(var_55_object, 33, 1, 12115);
	bool var_60_bool; object var_61_object;
	var_55_object = var_61_object;
	func_6040(var_60_bool, var_61_object, 2);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5641(bool var_299_bool)
{
	int var_301_int;
	func_5024(var_301_int, "ood1Julia4");
	if(var_301_int == 0) {
		var_299_bool = true;
		return 0;
	}
	var_299_bool = false;
}


// @pe
void func_5903(bool var_249_bool)
{
	int var_251_int;
	func_5024(var_251_int, "microscope_d6q01_julia_blood");
	if(var_251_int != 0) {
		var_249_bool = true;
		return 0;
	}
	var_249_bool = false;
}


void func_3346(object var_0_object, int var_417_int, object var_418_object)
{
	var_0_object = var_418_object;
	bool var_428_bool; object var_429_object;
	var_418_object = var_429_object;
	func_4929(var_428_bool, var_429_object);
	if(!var_428_bool) { //@nz
		var_417_int = -2;
		return 8;
	}
	object var_424_object;
	@CreateDialog(var_424_object);
	int var_431_int;
	func_5104(var_431_int);
	var_424_object->SetNPCName(var_431_int);
	string var_432_string;
	func_5106(var_432_string);
	var_424_object->SetPhoto(var_432_string);
	int var_433_int;
	func_6136(var_433_int);
	var_424_object->SetPlayerName(var_433_int);
	bool var_425_bool;
	@IsOverrideActive(var_425_bool);
	if(var_425_bool != 0) {
		var_417_int = -2;
		return 8;
	}
	@DoDialog(var_424_object);
	object var_435_object; object var_436_object;
	var_418_object = var_435_object;
	var_424_object = var_436_object;
	TaskCall(9);
	func_3409(var_437_object, var_438_object, var_439_string, var_440_bool, var_435_object, var_436_object);
	TaskReturn();
	bool var_427_bool;
	var_424_object->IsDialogEnd(var_427_bool);
	
	for(;;) {
		var_475_bool = !var_427_bool; //@nz
		if(var_475_bool == 0) goto Label_3398;
		@sync();
		var_424_object->IsDialogEnd(var_427_bool);
	}
	
Label_3398:
	object var_476_object;
	var_418_object = var_476_object;
	func_4985();
	@StopDialog(var_424_object);
	var_424_object->GetReturnValue(-1);
	int var_426_int = var_417_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5139(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_5653(bool var_309_bool)
{
	int var_311_int;
	func_5024(var_311_int, "ood1Julia5");
	if(var_311_int == 0) {
		var_309_bool = true;
		return 0;
	}
	var_309_bool = false;
}


// @pe
void func_5145(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_6169(void)
{
	@Trace("Adding diary entry");
	object var_55_object;
	@CreateDiaryEntry(var_55_object, 161, 1, 15394);
	bool var_60_bool; object var_61_object;
	var_55_object = var_61_object;
	func_6040(var_60_bool, var_61_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4378(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_564_object, object var_565_object)
{
	var_0_object = var_565_object;
	var_1_object = var_564_object;
	var_3_object = false;
	if(1 != 0) {
		func_4480(var_565_object, "Neutral");
		var_0_object->SetMessage(11320); //@t
		var_0_object->ClearReplies(); //@t
		bool var_577_bool;
		func_5783(var_1_object);
		if(var_577_bool != 0)
			var_0_object->AddReply(11321, 12516, 12515); //@t
		bool var_586_bool = false;
		bool var_587_bool;
		func_5771(var_1_object);
		if(var_587_bool != 0) {
			bool var_593_bool;
			func_5795(var_1_object);
			if(!var_593_bool) //@nz
				var_586_bool = true;
		}
		if(var_586_bool != 0)
			var_0_object->AddReply(11469, 12676, 12675); //@t
		bool var_603_bool = false;
		bool var_604_bool;
		func_5819(var_1_object);
		if(var_604_bool != 0) {
			bool var_610_bool;
			func_5807(var_1_object);
			if(var_610_bool != 0)
				var_603_bool = true;
		}
		if(var_603_bool != 0)
			var_0_object->AddReply(11856, 13070, 13069); //@t
		var_0_object->AddReply(11472, -1, 12678); //@t
		goto Label_4450;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x111e";
	}
Label_4450:
	bool var_622_bool;
	func_5108(var_622_bool);
	if(var_622_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4989(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4479;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4479:
		return 0;

	}
	
}


// @pe
void func_5915(bool var_255_bool)
{
	var_255_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_5151(void)
{
	@SetVariable("ood2Julia1", 1);
}


// @pe
void func_5920(bool var_257_bool)
{
	int var_259_int;
	func_5024(var_259_int, "d6q01");
	if(var_259_int == 1000)
		var_257_bool = true;
	var_257_bool = false;
}


// @pe
void func_5665(bool var_331_bool)
{
	int var_333_int;
	func_5024(var_333_int, "ood1Julia6");
	if(var_333_int == 0) {
		var_331_bool = true;
		return 0;
	}
	var_331_bool = false;
}


// @pe
void func_546(object var_2_object, string var_196_string)
{
	bool var_197_bool;
	func_5108(var_197_bool);
	if(!var_197_bool) //@nz
		return 0;
	if(var_196_string == var_2_object)
		return 0;
	string var_200_string;
	func_4989(var_200_string);
	var_2_object = var_200_string;
}


// @pe
void func_5157(void)
{
	@SetVariable("KnowBurahDead", 1);
}


// @pe
void func_4135(object var_2_object, string var_48_string)
{
	bool var_49_bool;
	func_5108(var_49_bool);
	if(!var_49_bool) //@nz
		return 0;
	if(var_48_string == var_2_object)
		return 0;
	string var_52_string;
	func_4989(var_52_string);
	var_2_object = var_52_string;
}


void func_6185(void)
{
	@Trace("Adding diary entry");
	object var_158_object;
	@CreateDiaryEntry(var_158_object, 120, 1, 13743);
	bool var_163_bool; object var_164_object;
	var_158_object = var_164_object;
	func_6040(var_163_bool, var_164_object, 111);
}
EMIT "Stack[-1] = 0";


void func_4905(object var_47_object, string var_48_string, int var_49_int)
{
	int var_51_int;
	var_47_object->GetProperty(var_48_string, var_51_int);
	var_47_object->SetProperty(var_48_string, (var_51_int + var_49_int));
}


// @pe
void func_5163(void)
{
	@SetVariable("ood1Julia4", 1);
}


// @pe
void func_5932(bool var_264_bool)
{
	int var_266_int;
	func_5024(var_266_int, "d6q01");
	if(var_266_int == -1)
		var_264_bool = true;
	var_264_bool = false;
}


// @pe
void func_5677(bool var_347_bool)
{
	int var_349_int;
	func_5024(var_349_int, "ood1Julia7");
	if(var_349_int == 0) {
		var_347_bool = true;
		return 0;
	}
	var_347_bool = false;
}


void func_4912(bool var_31_bool, object var_32_object)
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
void func_5169(void)
{
	@SetVariable("ood1Julia5", 1);
}


void func_49(object var_0_object, int var_34_int, object var_35_object)
{
	var_0_object = var_35_object;
	bool var_45_bool; object var_46_object;
	var_35_object = var_46_object;
	func_4929(var_45_bool, var_46_object);
	if(!var_45_bool) { //@nz
		var_34_int = -2;
		return 8;
	}
	object var_41_object;
	@CreateDialog(var_41_object);
	int var_86_int;
	func_5104(var_86_int);
	var_41_object->SetNPCName(var_86_int);
	string var_87_string;
	func_5106(var_87_string);
	var_41_object->SetPhoto(var_87_string);
	int var_88_int;
	func_6136(var_88_int);
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
		var_141_bool = !var_44_bool; //@nz
		if(var_141_bool == 0) goto Label_101;
		@sync();
		var_41_object->IsDialogEnd(var_44_bool);
	}
	
Label_101:
	object var_142_object;
	var_35_object = var_142_object;
	func_4985();
	@StopDialog(var_41_object);
	var_41_object->GetReturnValue(-1);
	int var_43_int = var_34_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5175(void)
{
	@SetVariable("ood1Julia6", 1);
}


// @pe
void func_5944(bool var_341_bool)
{
	int var_343_int;
	func_5024(var_343_int, "KnowAnna");
	if(var_343_int == 1)
		var_341_bool = true;
	var_341_bool = false;
}


void func_6201(void)
{
	var_30_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_5689(bool var_363_bool)
{
	int var_365_int;
	func_5024(var_365_int, "ood1Julia8");
	if(var_365_int == 0) {
		var_363_bool = true;
		return 0;
	}
	var_363_bool = false;
}


// @pe
void func_1337(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_170_object, object var_171_object)
{
	var_0_object = var_171_object;
	var_1_object = var_170_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_177_bool = false;
		bool var_178_bool = false;
		bool var_179_bool = false;
		bool var_180_bool = false;
		bool var_181_bool;
		func_5533(var_1_object);
		if(var_181_bool != 0) {
			bool var_189_bool;
			func_5581(var_1_object);
			if(!var_189_bool) //@nz
				var_180_bool = true;
		}
		if(var_180_bool != 0) {
			bool var_196_bool;
			func_5569(var_1_object);
			if(!var_196_bool) //@nz
				var_179_bool = true;
		}
		if(var_179_bool != 0) {
			bool var_203_bool;
			func_5725(var_1_object);
			if(var_203_bool != 0)
				var_178_bool = true;
		}
		if(var_178_bool != 0) {
			bool var_209_bool;
			func_5737(var_1_object);
			if(!var_209_bool) //@nz
				var_177_bool = true;
		}
		if(var_177_bool != 0) {
			object var_216_object; object var_217_object;
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_5220();
			func_1681(var_171_object, "Neutral");
			var_0_object->SetMessage(5377); //@t
			var_0_object->ClearReplies(); //@t
			bool var_226_bool;
			func_5749(var_1_object);
			if(!var_226_bool) //@nz
				var_0_object->AddReply(5379, 5964, 5924); //@t
			bool var_236_bool;
			func_5749(var_1_object);
			if(var_236_bool != 0)
				var_0_object->AddReply(5380, 6864, 5925); //@t
		} else {
					bool var_249_bool = false;
					bool var_250_bool = false;
					bool var_251_bool = false;
					bool var_252_bool;
					func_5725(var_1_object);
					if(!var_252_bool) { //@nz
						bool var_255_bool;
						func_5737(var_1_object);
						if(var_255_bool != 0)
							var_251_bool = true;
					}
					if(var_251_bool != 0) {
						bool var_257_bool;
						func_5581(var_1_object);
						if(!var_257_bool) //@nz
							var_250_bool = true;
					}
					if(var_250_bool != 0) {
						bool var_260_bool;
						func_5569(var_1_object);
						if(!var_260_bool) //@nz
							var_249_bool = true;
					}
					if(var_249_bool == 0) goto Label_1473;
					func_1681(var_171_object, "Neutral");
					var_0_object->SetMessage(8650); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(8651, 9477, 9476); //@t
		}
	}
Label_1651:
	for(;;) {
		bool var_241_bool;
		func_5108(var_241_bool);
		if(var_241_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4989(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1680;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1680:
			return 0;

		}

	}
	
Label_1473:
	func_1681(var_171_object, "Neutral");
	var_0_object->SetMessage(7779); //@t
	var_0_object->ClearReplies(); //@t
	bool var_270_bool = false;
	bool var_271_bool;
	func_5545(var_1_object);
	if(var_271_bool != 0) {
		bool var_277_bool;
		func_5593(var_1_object);
		if(var_277_bool != 0)
			var_270_bool = true;
	}
	if(var_270_bool != 0)
		var_0_object->AddReply(7815, 8618, 8617); //@t
	bool var_286_bool = false;
	bool var_287_bool;
	func_5992(var_1_object);
	if(var_287_bool != 0) {
		bool var_293_bool;
		func_5557(var_1_object);
		if(var_293_bool != 0)
			var_286_bool = true;
	}
	if(var_286_bool != 0)
		var_0_object->AddReply(7783, 8607, 8584); //@t
	bool var_302_bool = false;
	bool var_303_bool = false;
	bool var_304_bool;
	func_6004(var_1_object);
	if(var_304_bool != 0) {
		bool var_310_bool;
		func_5761(var_310_bool, var_1_object);
		if(var_310_bool != 0)
			var_303_bool = true;
	}
	if(var_303_bool != 0) {
		bool var_321_bool;
		func_5641(var_1_object);
		if(var_321_bool != 0)
			var_302_bool = true;
	}
	if(var_302_bool != 0)
		var_0_object->AddReply(7784, 8608, 8585); //@t
	bool var_330_bool = false;
	bool var_331_bool;
	func_5653(var_1_object);
	if(var_331_bool != 0) {
		bool var_337_bool;
		func_5956(var_1_object);
		if(var_337_bool != 0)
			var_330_bool = true;
	}
	if(var_330_bool != 0)
		var_0_object->AddReply(7785, 8687, 8586); //@t
	bool var_346_bool = false;
	bool var_347_bool;
	func_5968(var_1_object);
	if(var_347_bool != 0) {
		bool var_353_bool;
		func_5665(var_1_object);
		if(var_353_bool != 0)
			var_346_bool = true;
	}
	if(var_346_bool != 0)
		var_0_object->AddReply(7786, 8698, 8587); //@t
	bool var_362_bool = false;
	bool var_363_bool;
	func_5944(var_1_object);
	if(var_363_bool != 0) {
		bool var_369_bool;
		func_5677(var_1_object);
		if(var_369_bool != 0)
			var_362_bool = true;
	}
	if(var_362_bool != 0)
		var_0_object->AddReply(7788, 8710, 8589); //@t
	bool var_378_bool = false;
	bool var_379_bool;
	func_5843(var_1_object);
	if(var_379_bool != 0) {
		bool var_385_bool;
		func_5689(var_1_object);
		if(var_385_bool != 0)
			var_378_bool = true;
	}
	if(var_378_bool != 0)
		var_0_object->AddReply(7797, 8613, 8598); //@t
	bool var_394_bool = false;
	bool var_395_bool;
	func_5713(var_1_object);
	if(var_395_bool != 0) {
		bool var_401_bool;
		func_5701(var_1_object);
		if(var_401_bool != 0)
			var_394_bool = true;
	}
	if(var_394_bool != 0)
		var_0_object->AddReply(7914, 8734, 8733); //@t
	var_0_object->AddReply(8703, -1, 9540); //@t
	goto Label_1651;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x53d";


void func_4924(bool var_31_bool)
{
	bool var_33_bool;
	@IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
}


// @pe
void func_6205(object var_31_object)
{
	var_32_bool = GlobalVars[1];
	if(!var_32_bool) { //@nz
		int var_34_int; object var_35_object;
		var_31_object = var_35_object;
		TaskCall(2);
		func_49(var_36_object, var_34_int, var_35_object);
		TaskReturn();
		var_143_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_144_bool;
	func_5089(var_144_bool, 1);
	if(var_144_bool != 0) {
		int var_152_int; object var_153_object;
		var_31_object = var_153_object;
		TaskCall(6);
		func_1274(var_154_object, var_152_int, var_153_object);
		TaskReturn();
		return 0;
	}
	bool var_415_bool;
	func_5089(var_415_bool, 2);
	if(var_415_bool != 0) {
		int var_417_int; object var_418_object;
		var_31_object = var_418_object;
		TaskCall(8);
		func_3346(var_419_object, var_417_int, var_418_object);
		TaskReturn();
		return 0;
	}
	bool var_477_bool;
	func_5089(var_477_bool, 3);
	if(var_477_bool != 0) {
		int var_479_int; object var_480_object;
		var_31_object = var_480_object;
		TaskCall(10);
		func_3984(var_481_object, var_479_int, var_480_object);
		TaskReturn();
		return 0;
	}
	bool var_544_bool;
	func_5089(var_544_bool, 4);
	if(var_544_bool != 0) {
		int var_546_int; object var_547_object;
		var_31_object = var_547_object;
		TaskCall(12);
		func_4315(var_548_object, var_546_int, var_547_object);
		TaskReturn();
		return 0;
	}
	bool var_632_bool;
	func_5089(var_632_bool, 6);
	if(var_632_bool != 0) {
		int var_634_int; object var_635_object;
		var_31_object = var_635_object;
		TaskCall(4);
		func_353(var_636_object, var_634_int, var_635_object);
		TaskReturn();
		return 0;
	}
	bool var_738_bool;
	func_5095(var_738_bool);
}


// @pe
void func_5181(void)
{
	@SetVariable("ood1Julia7", 1);
}


void func_4929(bool var_45_bool, object var_46_object)
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
	func_5014(var_70_cvector, (var_59_cvector ^ [0.0, 1.0, 0.0]));
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
void func_5187(void)
{
	@SetVariable("ood1Julia8", 1);
}


// @pe
void func_5956(bool var_315_bool)
{
	int var_317_int;
	func_5024(var_317_int, "KnowEva");
	if(var_317_int == 1)
		var_315_bool = true;
	var_315_bool = false;
}


// @pe
void func_5701(bool var_379_bool)
{
	int var_381_int;
	func_5024(var_381_int, "ood1Julia9");
	if(var_381_int == 0) {
		var_379_bool = true;
		return 0;
	}
	var_379_bool = false;
}


// @pe
void func_5193(void)
{
	@SetVariable("ood1Julia9", 1);
}


// @pe
void func_5199(void)
{
	@SetVariable("d1q01KnowEpidemic", 1);
	func_6153();
}


// @pe
void func_5968(bool var_325_bool)
{
	int var_327_int;
	func_5024(var_327_int, "KnowLara");
	if(var_327_int == 1)
		var_325_bool = true;
	var_325_bool = false;
}


// @pe
void func_5713(bool var_373_bool)
{
	int var_375_int;
	func_5024(var_375_int, "KnowViktor");
	if(var_375_int == 1)
		var_373_bool = true;
	var_373_bool = false;
}


// @pe
void func_3409(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_435_object, object var_436_object)
{
	var_0_object = var_436_object;
	var_1_object = var_435_object;
	var_3_object = false;
	if(1 != 0) {
		func_3526(var_436_object, "Neutral");
		var_0_object->SetMessage(6914); //@t
		var_0_object->ClearReplies(); //@t
		bool var_448_bool = false;
		bool var_449_bool;
		func_5617(var_1_object);
		if(var_449_bool != 0) {
			bool var_455_bool;
			func_5629(var_1_object);
			if(var_455_bool != 0)
				var_448_bool = true;
		}
		if(var_448_bool != 0)
			var_0_object->AddReply(6915, 7622, 7621); //@t
		var_0_object->AddReply(7747, -1, 8548); //@t
		goto Label_3496;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xdc6";
	EMIT "Pop(1)";
	EMIT "Push((int) 9294)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9295)";
	EMIT "Push((int) 10205)";
	EMIT "Push((int) 10204)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9306)";
	EMIT "Push((int) 10205)";
	EMIT "Push((int) 10216)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xda8";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xdc6";
	EMIT "Pop(1)";
	EMIT "Push((int) 9307)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9308)";
	EMIT "Push((int) 10220)";
	EMIT "Push((int) 10219)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9316)";
	EMIT "Push((int) 10229)";
	EMIT "Push((int) 10228)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9319)";
	EMIT "Push((int) 10233)";
	EMIT "Push((int) 10232)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xda8";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd55";
	}
Label_3496:
	bool var_467_bool;
	func_5108(var_467_bool);
	if(var_467_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4989(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3525;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3525:
		return 0;

	}
	
}


// @pe
void func_5208(void)
{
	@SetVariable("ood1Julia10", 1);
}


// @pe
void func_5980(bool var_36_bool)
{
	int var_38_int;
	func_5024(var_38_int, "ood3Julia1");
	if(var_38_int == 0) {
		var_36_bool = true;
		return 0;
	}
	var_36_bool = false;
}


// @pe
void func_5725(bool var_179_bool)
{
	int var_181_int;
	func_5024(var_181_int, "d1q01KnowEpidemic");
	if(var_181_int == 1)
		var_179_bool = true;
	var_179_bool = false;
}


// @pe
void func_5214(void)
{
	@SetVariable("KnowJulia", 1);
}


void func_353(object var_0_object, int var_634_int, object var_635_object)
{
	var_0_object = var_635_object;
	bool var_645_bool; object var_646_object;
	var_635_object = var_646_object;
	func_4929(var_645_bool, var_646_object);
	if(!var_645_bool) { //@nz
		var_634_int = -2;
		return 8;
	}
	object var_641_object;
	@CreateDialog(var_641_object);
	int var_648_int;
	func_5104(var_648_int);
	var_641_object->SetNPCName(var_648_int);
	string var_649_string;
	func_5106(var_649_string);
	var_641_object->SetPhoto(var_649_string);
	int var_650_int;
	func_6136(var_650_int);
	var_641_object->SetPlayerName(var_650_int);
	bool var_642_bool;
	@IsOverrideActive(var_642_bool);
	if(var_642_bool != 0) {
		var_634_int = -2;
		return 8;
	}
	@DoDialog(var_641_object);
	object var_652_object; object var_653_object;
	var_635_object = var_652_object;
	var_641_object = var_653_object;
	TaskCall(5);
	func_416(var_654_object, var_655_object, var_656_string, var_657_bool, var_652_object, var_653_object);
	TaskReturn();
	bool var_644_bool;
	var_641_object->IsDialogEnd(var_644_bool);
	
	for(;;) {
		var_736_bool = !var_644_bool; //@nz
		if(var_736_bool == 0) goto Label_405;
		@sync();
		var_641_object->IsDialogEnd(var_644_bool);
	}
	
Label_405:
	object var_737_object;
	var_635_object = var_737_object;
	func_4985();
	@StopDialog(var_641_object);
	var_641_object->GetReturnValue(-1);
	int var_643_int = var_634_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5220(void)
{
	@SetVariable("KnowRubin", 1);
}


// @pe
void func_5992(bool var_265_bool)
{
	int var_267_int;
	func_5024(var_267_int, "KnowMyth");
	if(var_267_int == 1)
		var_265_bool = true;
	var_265_bool = false;
}


// @pe
void func_5737(bool var_185_bool)
{
	int var_187_int;
	func_5024(var_187_int, "ood1Julia10");
	if(var_187_int == 0) {
		var_185_bool = true;
		return 0;
	}
	var_185_bool = false;
}


// @pe
void func_5226(void)
{
	@SetVariable("ood4Julia1", 1);
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
		func_5214();
		func_180(var_98_object, "Neutral");
		var_0_object->SetMessage(325); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(326, 383, 380); //@t
		var_0_object->AddReply(327, 383, 381); //@t
		var_0_object->AddReply(328, 393, 382); //@t
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	bool var_133_bool;
	func_5108(var_133_bool);
	if(var_133_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4989(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_179;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_179:
		return 0;

	}
	
}


// @pe
void func_5232(void)
{
	@SetVariable("d4q02JuliaGivesMedcine", 1);
}


// @pe
void func_5492(void)
{
}


// @pe
void func_5749(bool var_212_bool)
{
	int var_214_int;
	func_5024(var_214_int, "KnowRubin");
	if(var_214_int == 1)
		var_212_bool = true;
	var_212_bool = false;
}


void func_5238(object var_45_object)
{
	object var_47_object;
	bool var_48_bool = false;
	bool var_49_bool = false;
	int var_50_int;
	func_5024(var_50_int, "d4q02AnnaGivesMedcine");
	if(var_50_int == 1) {
		int var_56_int;
		func_5024(var_56_int, "d4q02JuliaGivesMedcine");
		if(var_56_int == 1)
			var_49_bool = true;
	}
	if(var_49_bool != 0) {
		int var_60_int;
		func_5024(var_60_int, "d4q02LaraGivesMedcine");
		if(var_60_int == 1)
			var_48_bool = true;
	}
	if(var_48_bool != 0) {
		@SetVariable("d4q02", 2);
		object var_66_object;
		func_6086(var_66_object);
		var_66_object = var_47_object;
		float var_77_float;
		func_5067(var_77_float);
		var_47_object->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 11842, var_77_float);
		bool var_80_bool;
		func_5055(var_80_bool, "quest_d4_02", "birdmask");
		object var_86_object;
		object var_89_object;
		func_6086(var_89_object);
		var_89_object = var_86_object;
		func_6103(var_86_object, "pt_d4q02_birdmask", (float)2);
		object var_109_object;
		func_6086(var_109_object);
		var_45_object->ShowMap(var_109_object);
		var_47_object = null;
	}
}


// @pe
void func_6004(bool var_282_bool)
{
	int var_284_int;
	func_5024(var_284_int, "KnowPredictions");
	if(var_284_int == 1)
		var_282_bool = true;
	var_282_bool = false;
}


// @pe
void func_5494(object var_110_object)
{
	@Trace("feromicin is given");
	object var_113_object;
	var_110_object = var_113_object;
	func_5042(var_113_object, "feromicin", 1);
}


// @pe
void func_4985(void)
{
	@CameraSwitchToNormal();
}


void func_4989(string var_35_string)
{
	@Trace("playing " + var_35_string);
	float var_38_float;
	float var_39_float;
	@lshGetAnimTimes(var_35_string, var_38_float, var_39_float);
	@lshPlayAnimation(var_38_float, var_39_float);
	@Trace("start: " + var_38_float);
	@Trace("end: " + var_39_float);
}


// @pe
void func_4480(object var_2_object, string var_171_string)
{
	bool var_172_bool;
	func_5108(var_172_bool);
	if(!var_172_bool) //@nz
		return 0;
	if(var_171_string == var_2_object)
		return 0;
	string var_175_string;
	func_4989(var_175_string);
	var_2_object = var_175_string;
}


// @pe
void func_5761(bool var_288_bool, object var_289_object)
{
	object var_291_object;
	var_289_object = var_291_object;
	func_6016(var_291_object);
	bool var_290_bool;
	if(var_290_bool != 0) {
		var_288_bool = true;
		return 0;
	}
	var_288_bool = false;
}


// @pe
void func_5505(void)
{
	@SetVariable("ood3Julia1", 1);
}


// @pe
void func_6016(bool var_290_bool)
{
	int var_292_int;
	func_5081(var_292_int);
	if(var_292_int >= 18)
		var_290_bool = true;
	var_290_bool = false;
}


// @pe
void func_5511(object var_129_object)
{
	@Trace("neomicin is given");
	object var_132_object;
	var_129_object = var_132_object;
	func_5042(var_132_object, "neomicin", 1);
}


// @pe
void func_5771(bool var_197_bool)
{
	int var_199_int;
	func_5024(var_199_int, "d4q01");
	if(var_199_int == 1)
		var_197_bool = true;
	var_197_bool = false;
}


void func_6027(object var_69_object)
{
	object var_71_object;
	@GetDiaryRoot(var_71_object);
	if(!var_71_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_69_object = false;
	}
	var_71_object = var_69_object;
}
EMIT "Stack[-1] = 0";


void func_5007(void)
{
	bool var_33_bool;
	func_5108(var_33_bool);
	if(var_33_bool != 0)
		@lshStopSpeech();
}


void func_3984(object var_0_object, int var_479_int, object var_480_object)
{
	var_0_object = var_480_object;
	bool var_490_bool; object var_491_object;
	var_480_object = var_491_object;
	func_4929(var_490_bool, var_491_object);
	if(!var_490_bool) { //@nz
		var_479_int = -2;
		return 8;
	}
	object var_486_object;
	@CreateDialog(var_486_object);
	int var_493_int;
	func_5104(var_493_int);
	var_486_object->SetNPCName(var_493_int);
	string var_494_string;
	func_5106(var_494_string);
	var_486_object->SetPhoto(var_494_string);
	int var_495_int;
	func_6136(var_495_int);
	var_486_object->SetPlayerName(var_495_int);
	bool var_487_bool;
	@IsOverrideActive(var_487_bool);
	if(var_487_bool != 0) {
		var_479_int = -2;
		return 8;
	}
	@DoDialog(var_486_object);
	object var_497_object; object var_498_object;
	var_480_object = var_497_object;
	var_486_object = var_498_object;
	TaskCall(11);
	func_4047(var_499_object, var_500_object, var_501_string, var_502_bool, var_497_object, var_498_object);
	TaskReturn();
	bool var_489_bool;
	var_486_object->IsDialogEnd(var_489_bool);
	
	for(;;) {
		var_542_bool = !var_489_bool; //@nz
		if(var_542_bool == 0) goto Label_4036;
		@sync();
		var_486_object->IsDialogEnd(var_489_bool);
	}
	
Label_4036:
	object var_543_object;
	var_480_object = var_543_object;
	func_4985();
	@StopDialog(var_486_object);
	var_486_object->GetReturnValue(-1);
	int var_488_int = var_479_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1681(object var_2_object, string var_196_string)
{
	bool var_197_bool;
	func_5108(var_197_bool);
	if(!var_197_bool) //@nz
		return 0;
	if(var_196_string == var_2_object)
		return 0;
	string var_200_string;
	func_4989(var_200_string);
	var_2_object = var_200_string;
}


// @pe
void func_5522(object var_135_object)
{
	@Trace("monomicin is given");
	object var_138_object;
	var_135_object = var_138_object;
	func_5042(var_138_object, "monomicin", 1);
}


void func_5014(cvector var_70_cvector, cvector var_71_cvector)
{
	float var_74_float = sqrt(var_71_cvector | var_71_cvector);
	if(var_74_float < 0.000001)
		var_70_cvector = [0.0, 0.0, 0.0];
	var_70_cvector = var_71_cvector / var_74_float;
}


// @pe
void func_5783(bool var_187_bool)
{
	int var_189_int;
	func_5024(var_189_int, "ood4Julia1");
	if(var_189_int == 0) {
		var_187_bool = true;
		return 0;
	}
	var_187_bool = false;
}


void func_6040(bool var_60_bool, object var_61_object, int var_62_int)
{
	object var_69_object;
	func_6027(var_69_object);
	object var_66_object;
	var_69_object = var_66_object;
	object var_67_object;
	var_66_object->Find(var_62_int, var_67_object);
	if(!var_67_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_62_int);
		var_60_bool = false;
	}
	var_67_object->AddChild(var_61_object);
	@SetVariable("player_diary", 1);
	int var_68_int;
	var_61_object->GetCategory(var_68_int);
	@SetDiarySection(var_68_int);
	var_60_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5533(bool var_157_bool)
{
	int var_159_int;
	func_5024(var_159_int, "ood1Julia1");
	if(var_159_int == 0) {
		var_157_bool = true;
		return 0;
	}
	var_157_bool = false;
}


// @pe
void func_416(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_652_object, object var_653_object)
{
	var_0_object = var_653_object;
	var_1_object = var_652_object;
	var_3_object = false;
	if(1 != 0) {
		func_546(var_653_object, "Neutral");
		var_0_object->SetMessage(3640); //@t
		var_0_object->ClearReplies(); //@t
		bool var_665_bool = false;
		bool var_666_bool;
		func_5867(var_1_object);
		if(var_666_bool != 0) {
			bool var_672_bool;
			func_5879(var_1_object);
			if(var_672_bool != 0)
				var_665_bool = true;
		}
		if(var_665_bool != 0)
			var_0_object->AddReply(3641, 3945, 3943); //@t
		bool var_681_bool = false;
		bool var_682_bool;
		func_5855(var_1_object);
		if(var_682_bool != 0) {
			bool var_688_bool;
			func_5891(var_1_object);
			if(var_688_bool != 0)
				var_681_bool = true;
		}
		if(var_681_bool != 0)
			var_0_object->AddReply(12733, 11803, 13927); //@t
		bool var_697_bool = false;
		bool var_698_bool = false;
		bool var_699_bool = false;
		bool var_700_bool;
		func_5903(var_1_object);
		if(var_700_bool != 0) {
			bool var_706_bool;
			func_5915(var_1_object);
			if(var_706_bool != 0)
				var_699_bool = true;
		}
		if(var_699_bool != 0) {
			bool var_708_bool;
			func_5920(var_1_object);
			if(!var_708_bool) //@nz
				var_698_bool = true;
		}
		if(var_698_bool != 0) {
			bool var_715_bool;
			func_5932(var_1_object);
			if(!var_715_bool) //@nz
				var_697_bool = true;
		}
		if(var_697_bool != 0)
			var_0_object->AddReply(12734, 11840, 13928); //@t
		var_0_object->AddReply(3642, -1, 3944); //@t
		goto Label_516;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a4";
	}
Label_516:
	bool var_728_bool;
	func_5108(var_728_bool);
	if(var_728_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4989(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_545;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_545:
		return 0;

	}
	
}


void func_5024(int var_50_int, string var_51_string)
{
	int var_53_int;
	@GetVariable(var_51_string, var_53_int);
	var_53_int = var_50_int;
}


// @pe
void func_5795(bool var_203_bool)
{
	int var_205_int;
	func_5024(var_205_int, "d4q02JuliaGivesMedcine");
	if(var_205_int == 1)
		var_203_bool = true;
	var_203_bool = false;
}


void func_5029(object var_118_object, object var_119_object, int var_120_int)
{
	int var_124_int;
	var_119_object->GetItemID(var_124_int);
	int var_125_int;
	@GetInvItemProperty(var_125_int, var_124_int, "Category");
	bool var_126_bool;
	var_118_object->AddItem(var_126_bool, var_119_object, var_125_int, var_120_int);
	if(!var_126_bool) //@nz
		var_118_object->DropItems(var_119_object, var_120_int);
}


// @pe
void func_5545(bool var_249_bool)
{
	int var_251_int;
	func_5024(var_251_int, "ood1Julia2");
	if(var_251_int == 0) {
		var_249_bool = true;
		return 0;
	}
	var_249_bool = false;
}


// @pe
void func_5807(bool var_220_bool)
{
	int var_222_int;
	func_5024(var_222_int, "d4q02");
	if(var_222_int == 1000)
		var_220_bool = true;
	var_220_bool = false;
}


void func_5042(object var_113_object, string var_114_string, int var_115_int)
{
	object var_117_object;
	@CreateInvItem(var_117_object);
	var_117_object->SetItemName(var_114_string);
	object var_118_object; object var_119_object; int var_120_int;
	var_113_object = var_118_object;
	var_117_object = var_119_object;
	var_115_int = var_120_int;
	func_5029(var_118_object, var_119_object, var_120_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_180(object var_2_object, string var_40_string)
{
	bool var_41_bool;
	func_5108(var_41_bool);
	if(!var_41_bool) //@nz
		return 0;
	if(var_40_string == var_2_object)
		return 0;
	string var_44_string;
	func_4989(var_44_string);
	var_2_object = var_44_string;
}


// @pe
void func_5557(bool var_271_bool)
{
	int var_273_int;
	func_5024(var_273_int, "ood1Julia3");
	if(var_273_int == 0) {
		var_271_bool = true;
		return 0;
	}
	var_271_bool = false;
}


void func_6069(bool var_166_bool, int var_167_int)
{
	object var_172_object;
	func_6027(var_172_object);
	object var_170_object;
	var_172_object = var_170_object;
	object var_171_object;
	var_170_object->Find(var_167_int, var_171_object);
	if(!var_171_object) //@nz
		var_166_bool = false;
	var_171_object->Remove();
	var_166_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5306(void)
{
	@SetVariable("ood4Julia2", 1);
}


// @pe
void func_5819(bool var_214_bool)
{
	int var_216_int;
	func_5024(var_216_int, "ood4Julia2");
	if(var_216_int == 0) {
		var_214_bool = true;
		return 0;
	}
	var_214_bool = false;
}


void func_5055(bool var_80_bool, string var_81_string, string var_82_string)
{
	object var_84_object;
	@FindActor(var_84_object, var_81_string);
	if(var_84_object == null)
		var_80_bool = false;
	@Trigger(var_84_object, var_82_string);
	var_80_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5312(void)
{
	@SetVariable("KnowMistresses", 1);
}


// @pe
void func_5569(bool var_172_bool)
{
	int var_174_int;
	func_5024(var_174_int, "d1q01");
	if(var_174_int == 1000)
		var_172_bool = true;
	var_172_bool = false;
}


// @pe
void func_5318(void)
{
	@SetVariable("ood6Julia1", 1);
}


// @pe
void func_5831(bool var_595_bool)
{
	int var_597_int;
	func_5024(var_597_int, "KnowMistresses");
	if(var_597_int == 1)
		var_595_bool = true;
	var_595_bool = false;
}


// @pe
void func_3526(object var_2_object, string var_63_string)
{
	bool var_64_bool;
	func_5108(var_64_bool);
	if(!var_64_bool) //@nz
		return 0;
	if(var_63_string == var_2_object)
		return 0;
	string var_67_string;
	func_4989(var_67_string);
	var_2_object = var_67_string;
}


void func_6086(object var_66_object)
{
	object var_69_object; object var_70_object;
	@GetMainOutdoorScene(var_69_object);
	if(var_69_object == null) {
		@Trace("Can't find main outdoor scene");
		var_70_object = null;
		var_70_object = var_66_object;
	}
	var_69_object->GetMap(var_70_object);
	var_70_object = var_66_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_5067(float var_77_float)
{
	float var_79_float;
	@GetGameTime(var_79_float);
	var_79_float = var_77_float;
}


// @pe
void func_5324(void)
{
	@SetVariable("ood6Julia2", 1);
}


// @pe
void func_5581(bool var_165_bool)
{
	int var_167_int;
	func_5024(var_167_int, "d1q01");
	if(var_167_int == 0) {
		var_165_bool = true;
		return 0;
	}
	var_165_bool = false;
}


// @pe
void func_4047(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_497_object, object var_498_object)
{
	var_0_object = var_498_object;
	var_1_object = var_497_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_504_bool;
		func_5980(var_1_object);
		if(var_504_bool != 0) {
			object var_510_object; object var_511_object;
			var_510_object = var_1_object;
			var_511_object = var_0_object;
			func_5505();
			func_4135(var_498_object, "Neutral");
			var_0_object->SetMessage(9865); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(9866, 10867, 10866); //@t
			var_0_object->AddReply(9877, -1, 10880); //@t
			var_0_object->AddReply(9878, 10882, 10881); //@t
		} else {
					func_4135(var_498_object, "Neutral");
					var_0_object->SetMessage(10190); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15313, -1, 16551); //@t
		}
	}
	for(;;) {
		bool var_529_bool;
		func_5108(var_529_bool);
		if(var_529_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4989(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4134;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4134:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xfd3";


void func_5072(int var_146_int)
{
	float var_148_float;
	@GetGameTime(var_148_float);
	var_146_int = 1 + (var_148_float / 24);
}


// @pe
void func_5330(object var_52_object)
{
	func_6169();
	@Trace("julia blood is given");
	object var_80_object;
	var_52_object = var_80_object;
	func_5042(var_80_object, "d6q01_julia_blood", 1);
}


// @pe
void func_5843(bool var_357_bool)
{
	int var_359_int;
	func_5024(var_359_int, "KnowMark");
	if(var_359_int == 1)
		var_357_bool = true;
	var_357_bool = false;
}


void func_6103(object var_86_object, string var_87_string, float var_88_float)
{
	object var_96_object;
	@GetMainOutdoorScene(var_96_object);
	if(var_96_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_94_cvector;
	cvector var_95_cvector;
	bool var_97_bool;
	var_96_object->GetLocator(var_87_string, var_97_bool, var_94_cvector, var_95_cvector);
	if(!var_97_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_87_string) + " doesnt exist");
	var_96_object->GetMap(var_86_object);
	if(var_86_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_107_float = GetByIndex(var_94_cvector, 0);
	var_108_float = GetByIndex(var_94_cvector, 2);
	var_86_object->SetMapParams(var_107_float, var_108_float, var_88_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_5593(bool var_255_bool)
{
	int var_257_int;
	func_5024(var_257_int, "d1q01FirstGeorgVisit");
	if(var_257_int == 1)
		var_255_bool = true;
	var_255_bool = false;
}


void func_5081(int var_292_int)
{
	float var_294_float;
	@GetGameTime(var_294_float);
	int var_295_int;
	var_294_float = var_295_int;
	var_292_int = var_295_int % 24;
}


void func_4315(object var_0_object, int var_546_int, object var_547_object)
{
	var_0_object = var_547_object;
	bool var_557_bool; object var_558_object;
	var_547_object = var_558_object;
	func_4929(var_557_bool, var_558_object);
	if(!var_557_bool) { //@nz
		var_546_int = -2;
		return 8;
	}
	object var_553_object;
	@CreateDialog(var_553_object);
	int var_560_int;
	func_5104(var_560_int);
	var_553_object->SetNPCName(var_560_int);
	string var_561_string;
	func_5106(var_561_string);
	var_553_object->SetPhoto(var_561_string);
	int var_562_int;
	func_6136(var_562_int);
	var_553_object->SetPlayerName(var_562_int);
	bool var_554_bool;
	@IsOverrideActive(var_554_bool);
	if(var_554_bool != 0) {
		var_546_int = -2;
		return 8;
	}
	@DoDialog(var_553_object);
	object var_564_object; object var_565_object;
	var_547_object = var_564_object;
	var_553_object = var_565_object;
	TaskCall(13);
	func_4378(var_566_object, var_567_object, var_568_string, var_569_bool, var_564_object, var_565_object);
	TaskReturn();
	bool var_556_bool;
	var_553_object->IsDialogEnd(var_556_bool);
	
	for(;;) {
		var_630_bool = !var_556_bool; //@nz
		if(var_630_bool == 0) goto Label_4367;
		@sync();
		var_553_object->IsDialogEnd(var_556_bool);
	}
	
Label_4367:
	object var_631_object;
	var_547_object = var_631_object;
	func_4985();
	@StopDialog(var_553_object);
	var_553_object->GetReturnValue(-1);
	int var_555_int = var_546_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5855(bool var_231_bool)
{
	int var_233_int;
	func_5024(var_233_int, "d6q01");
	if(var_233_int == 1)
		var_231_bool = true;
	var_231_bool = false;
}


// @pe
void func_5344(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_5089(bool var_144_bool, int var_145_int)
{
	int var_146_int;
	func_5072(var_146_int);
	var_144_bool = var_146_int == var_145_int;
}


// @pe
void func_5605(bool var_464_bool)
{
	int var_466_int;
	func_5024(var_466_int, "KnowDiamAce");
	if(var_466_int == 1)
		var_464_bool = true;
	var_464_bool = false;
}


void func_5350(void)
{
	@SetVariable("d6q01JuliaVolonteer", 1);
	object var_122_object;
	func_6086(var_122_object);
	object var_118_object;
	var_122_object = var_118_object;
	object var_119_object;
	var_118_object->FindMark(var_119_object, "d6q01AlexandrGotoJulia");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01AlexandrGotoKaterina");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01AlexandrGotoLara");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01AlexangrGotoJulLaraSelf");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01BigVladGotoAnna");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01BigVladGotoAnnaOspinaSelf");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01BigVladGotoOspina");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01KaterinaGotoLaska");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01KaterinagotoLaskaSelf");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01KillerIsKlara");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01LaskaGotoAlbinos");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01ViktorGotoAlexandr");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01ViktorGotoAlxBigSelf");
	if(var_119_object != 0)
		var_119_object->Remove();
	var_118_object->FindMark(var_119_object, "d6q01ViktorGotoBigVlad");
	if(var_119_object != 0)
		var_119_object->Remove();
	func_6185();
	bool var_166_bool;
	func_6069(var_166_bool, 112);
	bool var_174_bool;
	func_6069(var_174_bool, 113);
	bool var_176_bool;
	func_6069(var_176_bool, 114);
	bool var_178_bool;
	func_6069(var_178_bool, 115);
	bool var_180_bool;
	func_6069(var_180_bool, 116);
	bool var_182_bool;
	func_6069(var_182_bool, 117);
	bool var_184_bool;
	func_5055(var_184_bool, "quest_d6_01", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_5095(bool var_738_bool)
{
	func_4989("No");
	bool var_740_bool;
	@lshWaitForAnimEnd(var_740_bool);
	var_740_bool = var_738_bool;
}


// @pe
void func_5867(bool var_213_bool)
{
	int var_215_int;
	func_5024(var_215_int, "d5q01");
	if(var_215_int == 1000)
		var_213_bool = true;
	var_213_bool = false;
}


void func_5104(int var_86_int)
{
	var_86_int = 2862;
}


// @pe
void func_5617(bool var_80_bool)
{
	int var_82_int;
	func_5024(var_82_int, "ood2Julia1");
	if(var_82_int == 0) {
		var_80_bool = true;
		return 0;
	}
	var_80_bool = false;
}


void func_5106(string var_87_string)
{
	var_87_string = "ui/NPC_Julia.png";
}


void func_5108(bool var_33_bool)
{
	var_33_bool = true;
}


// @pe
void func_5110(void)
{
	@SetVariable("ood1Julia1", 1);
}


// @pe
void func_5879(bool var_221_bool)
{
	int var_223_int;
	func_5024(var_223_int, "ood6Julia1");
	if(var_223_int == 0) {
		var_221_bool = true;
		return 0;
	}
	var_221_bool = false;
}


void func_6136(int var_88_int)
{
	int var_90_int;
	@GetVariable("player", var_90_int);
	if(var_90_int == 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0x1807";
	}
	if(var_90_int == 1) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
}


void func_1274(object var_0_object, int var_152_int, object var_153_object)
{
	var_0_object = var_153_object;
	bool var_163_bool; object var_164_object;
	var_153_object = var_164_object;
	func_4929(var_163_bool, var_164_object);
	if(!var_163_bool) { //@nz
		var_152_int = -2;
		return 8;
	}
	object var_159_object;
	@CreateDialog(var_159_object);
	int var_166_int;
	func_5104(var_166_int);
	var_159_object->SetNPCName(var_166_int);
	string var_167_string;
	func_5106(var_167_string);
	var_159_object->SetPhoto(var_167_string);
	int var_168_int;
	func_6136(var_168_int);
	var_159_object->SetPlayerName(var_168_int);
	bool var_160_bool;
	@IsOverrideActive(var_160_bool);
	if(var_160_bool != 0) {
		var_152_int = -2;
		return 8;
	}
	@DoDialog(var_159_object);
	object var_170_object; object var_171_object;
	var_153_object = var_170_object;
	var_159_object = var_171_object;
	TaskCall(7);
	func_1337(var_172_object, var_173_object, var_174_string, var_175_bool, var_170_object, var_171_object);
	TaskReturn();
	bool var_162_bool;
	var_159_object->IsDialogEnd(var_162_bool);
	
	for(;;) {
		var_413_bool = !var_162_bool; //@nz
		if(var_413_bool == 0) goto Label_1326;
		@sync();
		var_159_object->IsDialogEnd(var_162_bool);
	}
	
Label_1326:
	object var_414_object;
	var_153_object = var_414_object;
	func_4985();
	@StopDialog(var_159_object);
	var_159_object->GetReturnValue(-1);
	int var_161_int = var_152_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5116(void)
{
	@SetVariable("ood1Julia2", 1);
}


// @pe
void func_5629(bool var_88_bool)
{
	int var_90_int;
	func_5024(var_90_int, "d2q03");
	if(var_90_int == 1)
		var_88_bool = true;
	var_88_bool = false;
}


