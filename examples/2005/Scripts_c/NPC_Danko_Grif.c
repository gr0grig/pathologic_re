// @GLOBALS: 0:object:,1:bool:,2:int:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		@lshStopAnimation();
		@StopTrade();
		var_0_bool = true;
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 35389) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5838();
			}
			if(var_68_cvector == 35528) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_5844();
			}
			if(var_68_cvector == 35393) {
				object var_85_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 35388) {
				func_203(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533838); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_103_bool;
				func_6018(var_1_object);
				if(var_103_bool != 0)
					var_0_bool->AddReply(533839, 35390, 35389); //@t
				bool var_114_bool = false;
				bool var_115_bool;
				func_6268(var_1_object);
				if(var_115_bool != 0) {
					bool var_131_bool;
					func_6030(var_1_object);
					if(var_131_bool != 0)
						var_114_bool = true;
				}
				if(var_114_bool != 0)
					var_0_bool->AddReply(533960, 35529, 35528); //@t
				var_0_bool->AddReply(533843, -1, 35393); //@t
				var_0_bool->AddReply(533844, -1, 35394); //@t
				return 0;
			}
			if(var_67_bool == 35529) {
				func_203(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533961); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533962, 35531, 35530); //@t
				var_0_bool->AddReply(533972, 35533, 35542); //@t
				return 0;
			}
			if(var_67_bool == 35531) {
				func_203(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533963); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533964, 35533, 35532); //@t
				var_0_bool->AddReply(533971, 35533, 35540); //@t
				return 0;
			}
			if(var_67_bool == 35533) {
				func_203(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533965); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533966, 35535, 35534); //@t
				var_0_bool->AddReply(533970, 35535, 35538); //@t
				var_0_bool->AddReply(533973, 35545, 35544); //@t
				return 0;
			}
			if(var_67_bool == 35545) {
				func_203(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533974); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533975, 35547, 35546); //@t
				return 0;
			}
			if(var_67_bool == 35547) {
				func_203(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533976); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533977, -1, 35548); //@t
				var_0_bool->AddReply(533978, -1, 35549); //@t
				return 0;
			}
			if(var_67_bool == 35535) {
				func_203(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533967); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533968, -1, 35536); //@t
				var_0_bool->AddReply(533969, -1, 35537); //@t
				return 0;
			}
			if(var_67_bool == 35390) {
				func_203(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533840); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533842, 35395, 35392); //@t
				var_0_bool->AddReply(533841, -1, 35391); //@t
				return 0;
			}
			if(var_67_bool == 35395) {
				func_203(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533845); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533846, -1, 35396); //@t
				var_0_bool->AddReply(533847, -1, 35397); //@t
				return 0;
			}
			var_3_object = true;
			bool var_226_bool;
			func_5793(var_226_bool);
			if(var_226_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe2";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_67_bool == 36971) {
				func_648(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(535294); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535295, 36973, 36972); //@t
				var_0_bool->AddReply(535302, -1, 36980); //@t
				var_0_bool->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_67_bool == 36973) {
				func_648(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(535296); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535297, 36975, 36974); //@t
				var_0_bool->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_67_bool == 36975) {
				func_648(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(535298); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535299, -1, 36976); //@t
				var_0_bool->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_object = true;
			bool var_115_bool;
			func_5793(var_115_bool);
			if(var_115_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x29f";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_67_bool == 444) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5984();
				func_912(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500383); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500384, 448, 445); //@t
				var_0_bool->AddReply(500385, 449, 446); //@t
				var_0_bool->AddReply(500386, 450, 447); //@t
				return 0;
			}
			if(var_67_bool == 450) {
				func_912(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500389); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500395, 454, 459); //@t
				var_0_bool->AddReply(500396, 454, 460); //@t
				return 0;
			}
			if(var_67_bool == 449) {
				func_912(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500388); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500394, 454, 456); //@t
				var_0_bool->AddReply(500392, 454, 453); //@t
				return 0;
			}
			if(var_67_bool == 448) {
				func_912(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500387); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500390, 454, 451); //@t
				var_0_bool->AddReply(500391, 454, 452); //@t
				return 0;
			}
			if(var_67_bool == 454) {
				func_912(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500393); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500397, -1, 463); //@t
				var_0_bool->AddReply(500398, -1, 464); //@t
				return 0;
			}
			var_3_object = true;
			bool var_139_bool;
			func_5793(var_139_bool);
			if(var_139_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3a7";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 7671) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5868();
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_5886();
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_bool;
				func_5811();
				object var_108_object = var_1_object;
				func_5817(var_0_bool);
				object var_132_object = var_1_object;
				func_5895(var_0_bool);
			}
			if(var_68_cvector == 8094) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_bool;
				func_5874();
			}
			if(var_68_cvector == 8093) {
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_bool;
				func_5874();
			}
			if(var_68_cvector == 8087) {
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_bool;
				func_6006();
			}
			if(var_68_cvector == 8054) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_bool;
				func_5880();
			}
			if(var_68_cvector == 8055) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_bool;
				func_5880();
			}
			if(var_68_cvector == 8060) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_bool;
				func_5880();
			}
			if(var_68_cvector == 8061) {
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_bool;
				func_5880();
			}
			if(var_68_cvector == 37903) {
				object var_179_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 7666) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(506959); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_197_bool = false;
				bool var_198_bool;
				func_6078(var_1_object);
				if(var_198_bool != 0) {
					bool var_206_bool;
					func_6114(var_1_object);
					if(var_206_bool != 0)
						var_197_bool = true;
				}
				if(var_197_bool != 0)
					var_0_bool->AddReply(507328, 8080, 8079); //@t
				bool var_215_bool;
				func_6090(var_1_object);
				if(var_215_bool != 0)
					var_0_bool->AddReply(507319, 8070, 8069); //@t
				bool var_224_bool;
				func_6102(var_1_object);
				if(var_224_bool != 0)
					var_0_bool->AddReply(507335, 8049, 8087); //@t
				var_0_bool->AddReply(536144, -1, 37903); //@t
				var_0_bool->AddReply(507530, -1, 8312); //@t
				var_0_bool->AddReply(533848, -1, 35398); //@t
				return 0;
			}
			if(var_67_bool == 8049) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507300); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507301, 8051, 8050); //@t
				var_0_bool->AddReply(507313, 8053, 8062); //@t
				return 0;
			}
			if(var_67_bool == 8051) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507302); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507303, 8053, 8052); //@t
				var_0_bool->AddReply(507307, 8057, 8056); //@t
				return 0;
			}
			if(var_67_bool == 8057) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507308); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507309, 8059, 8058); //@t
				return 0;
			}
			if(var_67_bool == 8059) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507310); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507311, -1, 8060); //@t
				var_0_bool->AddReply(507312, -1, 8061); //@t
				return 0;
			}
			if(var_67_bool == 8053) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507304); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507305, -1, 8054); //@t
				var_0_bool->AddReply(507306, -1, 8055); //@t
				return 0;
			}
			if(var_67_bool == 8070) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507320); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506965, 7673, 7672); //@t
				return 0;
			}
			if(var_67_bool == 7673) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(506966); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506967, 8088, 7674); //@t
				var_0_bool->AddReply(507343, 8088, 8095); //@t
				return 0;
			}
			if(var_67_bool == 8088) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507336); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507337, 8090, 8089); //@t
				return 0;
			}
			if(var_67_bool == 8090) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507338); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507342, -1, 8094); //@t
				var_0_bool->AddReply(507341, -1, 8093); //@t
				return 0;
			}
			if(var_67_bool == 8080) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507329); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507330, 8082, 8081); //@t
				return 0;
			}
			if(var_67_bool == 8082) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507331); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507332, 7670, 8083); //@t
				return 0;
			}
			if(var_67_bool == 7670) {
				func_1261(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(506963); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506964, -1, 7671); //@t
				return 0;
			}
			var_3_object = true;
			bool var_344_bool;
			func_5793(var_344_bool);
			if(var_344_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x504";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 12126) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5916();
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_5922();
			}
			if(var_68_cvector == 12127) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_bool;
				func_5916();
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_bool;
				func_5922();
			}
			if(var_68_cvector == 12118) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_bool;
				func_5916();
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_bool;
				func_5922();
			}
			if(var_68_cvector == 12137) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_bool;
				func_5954();
				object var_143_object = var_1_object;
				func_5795(var_0_bool);
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_bool;
				func_5805();
			}
			if(var_68_cvector == 12138) {
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_bool;
				func_5954();
				object var_172_object = var_1_object;
				func_5795(var_0_bool);
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_bool;
				func_5805();
			}
			if(var_68_cvector == 12107) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_bool;
				func_5856();
			}
			if(var_68_cvector == 10608) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_bool;
				func_5862();
			}
			if(var_68_cvector == 15333) {
				object var_190_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 12111) {
				bool var_195_bool = false;
				bool var_196_bool;
				func_6138(var_1_object);
				if(var_196_bool != 0) {
					bool var_204_bool;
					func_6150(var_1_object);
					if(var_204_bool != 0)
						var_195_bool = true;
				}
				if(var_195_bool != 0) {
					func_1928(var_68_cvector, "Neutral");
					var_0_bool->SetMessage(510952); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(510953, 12113, 12112); //@t
					var_0_bool->AddReply(510960, 12113, 12119); //@t
					return 0;
				}
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509615); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_231_bool = false;
				bool var_232_bool;
				func_6162(var_1_object);
				if(var_232_bool != 0) {
					bool var_238_bool;
					func_6174(var_1_object);
					if(var_238_bool != 0)
						var_231_bool = true;
				}
				if(var_231_bool != 0)
					var_0_bool->AddReply(510970, 12133, 12132); //@t
				bool var_247_bool = false;
				bool var_248_bool;
				func_6244(var_1_object);
				if(var_248_bool != 0) {
					bool var_254_bool;
					func_6054(var_1_object);
					if(var_254_bool != 0)
						var_247_bool = true;
				}
				if(var_247_bool != 0)
					var_0_bool->AddReply(510948, 12108, 12107); //@t
				bool var_263_bool;
				func_6066(var_1_object);
				if(var_263_bool != 0)
					var_0_bool->AddReply(509640, 10581, 10608); //@t
				var_0_bool->AddReply(514119, -1, 15333); //@t
				var_0_bool->AddReply(509616, -1, 10580); //@t
				return 0;
			}
			if(var_67_bool == 10581) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509617); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509636, 10604, 10603); //@t
				return 0;
			}
			if(var_67_bool == 10604) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509637); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509638, -1, 10605); //@t
				return 0;
			}
			if(var_67_bool == 12108) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510949); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510950, 12110, 12109); //@t
				var_0_bool->AddReply(510969, 10583, 12130); //@t
				return 0;
			}
			if(var_67_bool == 12110) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510951); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509618, 10583, 10582); //@t
				var_0_bool->AddReply(510967, -1, 12128); //@t
				var_0_bool->AddReply(510972, -1, 12134); //@t
				return 0;
			}
			if(var_67_bool == 10583) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509619); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509620, 10585, 10584); //@t
				var_0_bool->AddReply(509635, 10585, 10601); //@t
				return 0;
			}
			if(var_67_bool == 10585) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509621); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509623, 10588, 10587); //@t
				var_0_bool->AddReply(509634, 10595, 10599); //@t
				var_0_bool->AddReply(509622, -1, 10586); //@t
				return 0;
			}
			if(var_67_bool == 10588) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509624); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509625, -1, 10589); //@t
				var_0_bool->AddReply(509626, 10591, 10590); //@t
				var_0_bool->AddReply(509630, 10595, 10594); //@t
				return 0;
			}
			if(var_67_bool == 10595) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509631); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509632, -1, 10596); //@t
				var_0_bool->AddReply(509633, 10591, 10597); //@t
				return 0;
			}
			if(var_67_bool == 10591) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509627); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509628, -1, 10592); //@t
				var_0_bool->AddReply(509629, -1, 10593); //@t
				return 0;
			}
			if(var_67_bool == 12133) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510971); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510973, 12136, 12135); //@t
				var_0_bool->AddReply(533046, 12136, 34556); //@t
				return 0;
			}
			if(var_67_bool == 12136) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510974); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510975, -1, 12137); //@t
				var_0_bool->AddReply(510976, -1, 12138); //@t
				return 0;
			}
			if(var_67_bool == 12113) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510954); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510955, 12115, 12114); //@t
				var_0_bool->AddReply(510961, 34554, 12121); //@t
				return 0;
			}
			if(var_67_bool == 34554) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533044); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533045, 12117, 34555); //@t
				return 0;
			}
			if(var_67_bool == 12115) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510956); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510957, 12117, 12116); //@t
				return 0;
			}
			if(var_67_bool == 12117) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510958); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510963, 12125, 12124); //@t
				var_0_bool->AddReply(510959, -1, 12118); //@t
				return 0;
			}
			if(var_67_bool == 12125) {
				func_1928(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510964); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510965, -1, 12126); //@t
				var_0_bool->AddReply(510966, -1, 12127); //@t
				return 0;
			}
			var_3_object = true;
			bool var_435_bool;
			func_5793(var_435_bool);
			if(var_435_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x79f";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 10847) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5850();
			}
			if(var_68_cvector == 10863) {
				object var_79_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_68_cvector == 15331) {
				object var_84_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 10842) {
				func_2695(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509843); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_101_bool = false;
				bool var_102_bool;
				func_6042(var_1_object);
				if(var_102_bool != 0) {
					bool var_110_bool;
					func_6126(var_1_object);
					if(!var_110_bool) //@nz
						var_101_bool = true;
				}
				if(var_101_bool != 0)
					var_0_bool->AddReply(509848, 10848, 10847); //@t
				var_0_bool->AddReply(514117, -1, 15331); //@t
				var_0_bool->AddReply(514118, -1, 15332); //@t
				return 0;
			}
			if(var_67_bool == 10848) {
				func_2695(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509849); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509850, 10850, 10849); //@t
				var_0_bool->AddReply(509857, 10858, 10857); //@t
				return 0;
			}
			if(var_67_bool == 10858) {
				func_2695(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509858); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509859, 10860, 10859); //@t
				var_0_bool->AddReply(509863, -1, 10863); //@t
				return 0;
			}
			if(var_67_bool == 10860) {
				func_2695(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509860); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509861, -1, 10861); //@t
				var_0_bool->AddReply(509862, -1, 10862); //@t
				return 0;
			}
			if(var_67_bool == 10850) {
				func_2695(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509851); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509852, 10852, 10851); //@t
				var_0_bool->AddReply(509856, 10852, 10855); //@t
				return 0;
			}
			if(var_67_bool == 10852) {
				func_2695(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509853); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509854, -1, 10853); //@t
				var_0_bool->AddReply(509855, -1, 10854); //@t
				return 0;
			}
			var_3_object = true;
			bool var_176_bool;
			func_5793(var_176_bool);
			if(var_176_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa9e";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 12909) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5960();
			}
			if(var_68_cvector == 12936) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_5990();
			}
			if(var_68_cvector == 12939) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_bool;
				func_5990();
			}
			if(var_68_cvector == 16829) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_bool;
				func_5990();
			}
			if(var_68_cvector == 12925) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_bool;
				func_5990();
			}
			if(var_68_cvector == 12944) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_bool;
				func_5966();
				object var_140_object = var_1_object;
				func_5828(var_0_bool);
			}
			if(var_68_cvector == 15334) {
				object var_163_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 12926) {
				bool var_168_bool = false;
				bool var_169_bool;
				func_6232(var_1_object);
				if(var_169_bool != 0) {
					bool var_177_bool;
					func_6256(var_1_object);
					if(var_177_bool != 0)
						var_168_bool = true;
				}
				if(var_168_bool != 0) {
					object var_183_object; object var_184_object;
					var_183_object = var_1_object;
					var_184_object = var_0_bool;
					func_6012();
					func_3154(var_68_cvector, "Neutral");
					var_0_bool->SetMessage(511720); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(511721, 12928, 12927); //@t
					var_0_bool->AddReply(515755, 12928, 16821); //@t
					return 0;
				}
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511704); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_208_bool = false;
				bool var_209_bool;
				func_6186(var_1_object);
				if(var_209_bool != 0) {
					bool var_215_bool;
					func_6198(var_1_object);
					if(var_215_bool != 0)
						var_208_bool = true;
				}
				if(var_208_bool != 0)
					var_0_bool->AddReply(511705, 12910, 12909); //@t
				bool var_224_bool = false;
				bool var_225_bool = false;
				bool var_226_bool = false;
				bool var_227_bool;
				func_6186(var_1_object);
				if(var_227_bool != 0) {
					bool var_229_bool;
					func_6220(var_1_object);
					if(!var_229_bool) //@nz
						var_226_bool = true;
				}
				if(var_226_bool != 0) {
					bool var_236_bool;
					func_6198(var_1_object);
					if(!var_236_bool) //@nz
						var_225_bool = true;
				}
				if(var_225_bool != 0) {
					bool var_239_bool;
					func_6210(var_239_bool, var_1_object);
					if(var_239_bool != 0)
						var_224_bool = true;
				}
				if(var_224_bool != 0)
					var_0_bool->AddReply(511734, 16834, 12940); //@t
				var_0_bool->AddReply(514120, -1, 15334); //@t
				var_0_bool->AddReply(511739, -1, 12945); //@t
				return 0;
			}
			if(var_67_bool == 16834) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(515765); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515766, 16836, 16835); //@t
				return 0;
			}
			if(var_67_bool == 16836) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(515767); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515768, 12941, 16837); //@t
				return 0;
			}
			if(var_67_bool == 12941) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511735); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511736, 12943, 12942); //@t
				return 0;
			}
			if(var_67_bool == 12943) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511737); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511738, -1, 12944); //@t
				return 0;
			}
			if(var_67_bool == 12910) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511706); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511707, 12913, 12911); //@t
				var_0_bool->AddReply(511708, 12913, 12912); //@t
				return 0;
			}
			if(var_67_bool == 12913) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511709); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511710, 12916, 12915); //@t
				var_0_bool->AddReply(511713, 12919, 12918); //@t
				return 0;
			}
			if(var_67_bool == 12919) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511714); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511715, 12916, 12920); //@t
				return 0;
			}
			if(var_67_bool == 12916) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511711); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511712, 12935, 12917); //@t
				var_0_bool->AddReply(511728, 12922, 12934); //@t
				return 0;
			}
			if(var_67_bool == 12922) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511716); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511717, 12924, 12923); //@t
				return 0;
			}
			if(var_67_bool == 12924) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511718); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_333_bool;
				func_6210(var_333_bool, var_1_object);
				if(var_333_bool != 0)
					var_0_bool->AddReply(515760, 16834, 16829); //@t
				var_0_bool->AddReply(511719, -1, 12925); //@t
				return 0;
			}
			if(var_67_bool == 12935) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511729); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511730, -1, 12936); //@t
				var_0_bool->AddReply(511731, 12938, 12937); //@t
				bool var_351_bool;
				func_6210(var_351_bool, var_1_object);
				if(var_351_bool != 0)
					var_0_bool->AddReply(512485, 16834, 13653); //@t
				return 0;
			}
			if(var_67_bool == 12938) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511732); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511733, -1, 12939); //@t
				return 0;
			}
			if(var_67_bool == 12928) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511722); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511723, 12930, 12929); //@t
				var_0_bool->AddReply(515761, -1, 16830); //@t
				return 0;
			}
			if(var_67_bool == 12930) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511724); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511726, 12933, 12932); //@t
				var_0_bool->AddReply(511725, -1, 12931); //@t
				return 0;
			}
			if(var_67_bool == 12933) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511727); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515757, 16826, 16825); //@t
				var_0_bool->AddReply(515763, -1, 16832); //@t
				return 0;
			}
			if(var_67_bool == 16826) {
				func_3154(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(515758); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515764, -1, 16833); //@t
				var_0_bool->AddReply(515762, -1, 16831); //@t
				return 0;
			}
			var_3_object = true;
			bool var_403_bool;
			func_5793(var_403_bool);
			if(var_403_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc69";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 15337) {
				object var_73_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 15336) {
				func_3863(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(514122); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514123, -1, 15337); //@t
				var_0_bool->AddReply(514124, -1, 15338); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5793(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf2e";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 15341) {
				object var_73_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 15340) {
				func_4074(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(514126); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514127, -1, 15341); //@t
				var_0_bool->AddReply(514128, -1, 15342); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5793(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1001";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, int var_51_int, int var_52_int, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 40647) {
				object var_73_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 40646) {
				func_4285(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(538735); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538736, -1, 40647); //@t
				var_0_bool->AddReply(538754, -1, 40666); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5793(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x10d4";
	
	}

}


task task_22
{
}


task task_23
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, int var_56_int, int var_57_int, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 15349) {
				object var_73_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 15348) {
				func_4496(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(514134); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514135, -1, 15349); //@t
				var_0_bool->AddReply(514136, -1, 15350); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5793(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x11a7";
	
	}

}


task task_24
{
}


task task_25
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, int var_61_int, int var_62_int, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 15353) {
				object var_73_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_bool == 15352) {
				func_4707(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(514138); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514139, -1, 15353); //@t
				var_0_bool->AddReply(514140, -1, 15354); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5793(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x127a";
	
	}

}


task task_26
{
}


task task_27
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, int var_66_int, int var_67_int, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5617();
			if(var_68_cvector == 15401) {
				object var_73_object = var_1_object;
				func_5979(var_0_bool);
			}
			if(var_67_int == 15400) {
				func_4923(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(514186); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514187, -1, 15401); //@t
				var_0_bool->AddReply(514188, -1, 15402); //@t
				var_0_bool->AddReply(539631, -1, 41577); //@t
				return 0;
			}
			var_3_object = true;
			bool var_100_bool;
			func_5793(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1352";
	
	}

}


maintask task_28
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		var_67_bool = GlobalVars[1];
		GlobalVars[1] = false;
		var_68_int = GlobalVars[2];
		GlobalVars[2] = -1;
		func_5010(var_66_cvector);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, int var_67_int)
	{
		if(var_67_int == 10) {
			func_5081();
			bool var_71_bool = false;
			bool var_72_bool;
			func_5302(var_72_bool);
			if(var_72_bool != 0) {
				bool var_75_bool;
				func_5050(var_75_bool);
				if(var_75_bool != 0)
					var_71_bool = true;
			}
			if(var_71_bool != 0) {
				bool var_92_bool;
				func_5030(var_92_bool);
				if(var_92_bool != 0) {
					bool var_111_bool; object var_112_object;
					object var_113_object;
					func_5652(var_113_object);
					var_113_object = var_112_object;
					func_5450(var_111_bool, var_112_object);
				}
			} else {
				func_5045(var_67_int);
				func_5072();
			}
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		func_5263();
		func_5081();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
		{
		@StopGroup0();
		func_5081();
		func_5589("Neutral");
		func_5072();
		}

	// @pe
	void OnLSHAnimationEnd(bool bCycled, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, bool var_67_bool)
	{
		if(var_67_bool != 0)
			func_5072();
		else
			func_5589("Neutral");
	
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, object var_67_object)
	{
		bool var_68_bool; bool var_69_bool;
		@IsOverrideActive(var_69_bool);
		if(!var_69_bool) { //@nz
			disable OnUse;
			func_5263();
			bool var_71_bool; object var_72_object;
			var_67_object = var_72_object;
			func_5293(var_71_bool, var_72_object);
			enable OnUse;
			object var_85_object;
			func_6613(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_85_object, var_68_bool, var_69_bool, var_85_object);
			func_5589("Neutral");
			func_5081();
			func_5072();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_73_bool;
	func_5302(var_73_bool);
	if(!var_73_bool) goto Label_0; //@nz
}


void func_5635(string var_137_string, int var_138_int, int var_139_int, int var_140_int, int var_141_int)
{
	int var_144_int; bool var_145_bool;
	int var_147_int;
	var_138_int = var_147_int;
	int var_148_int;
	var_139_int = var_148_int;
	bool var_146_bool;
	func_5668(var_146_bool, var_147_int, var_148_int);
	if(var_146_bool != 0) {
		@irand(var_144_int, ((var_141_int - var_140_int) + 1));
		@AddItem(var_145_bool, var_137_string, 0, (var_144_int + var_140_int));
	}
}


// @pe
void func_6150(bool var_776_bool)
{
	int var_778_int;
	func_5673(var_778_int, "ood4Grif1");
	if(var_778_int == 0) {
		var_776_bool = true;
		return 0;
	}
	var_776_bool = false;
}


// @pe
void func_13(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		func_5589("Neutral");
		@lshWaitForAnimEnd();
		if(false != 0)
			return 0;
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_6162(bool var_808_bool)
{
	int var_810_int;
	func_5673(var_810_int, "ood4Grif2");
	if(var_810_int == 0) {
		var_808_bool = true;
		return 0;
	}
	var_808_bool = false;
}


void func_5652(object var_220_object)
{
	object var_222_object;
	@self(var_222_object);
	var_222_object = var_220_object;
}
EMIT "Stack[-1] = 0";


void func_5658(cvector var_335_cvector, cvector var_336_cvector)
{
	float var_339_float = sqrt(var_336_cvector | var_336_cvector);
	if(var_339_float < 0.000001)
		var_335_cvector = [0.0, 0.0, 0.0];
	var_335_cvector = var_336_cvector / var_339_float;
}


// @pe
void func_6174(bool var_814_bool)
{
	int var_816_int;
	func_5673(var_816_int, "d4q03_alldead");
	if(var_816_int == 1)
		var_814_bool = true;
	var_814_bool = false;
}


void func_35(bool var_0_bool, int var_427_int, object var_428_object)
{
	var_0_bool = var_428_object;
	bool var_438_bool; object var_439_object;
	object var_440_object;
	func_5652(var_440_object);
	var_440_object = var_439_object;
	func_5392(var_438_bool, var_439_object);
	bool var_441_bool; object var_442_object;
	var_428_object = var_442_object;
	func_5307(var_441_bool, var_442_object, 70.0);
	if(!var_441_bool) { //@nz
		var_427_int = -2;
		return 8;
	}
	object var_434_object;
	@CreateDialog(var_434_object);
	int var_445_int;
	func_5787(var_445_int);
	var_434_object->SetNPCName(var_445_int);
	int var_446_int;
	func_5785(var_446_int);
	var_434_object->SetNPCDescription(var_446_int);
	string var_447_string;
	func_5789(var_447_string);
	var_434_object->SetPhoto(var_447_string);
	string var_448_string;
	func_5791(var_448_string);
	var_434_object->SetPhoto2(var_448_string);
	int var_449_int;
	func_6571(var_449_int);
	var_434_object->SetPlayerName(var_449_int);
	bool var_435_bool;
	@IsOverrideActive(var_435_bool);
	if(var_435_bool != 0) {
		var_427_int = -2;
		return 8;
	}
	@DoDialog(var_434_object);
	object var_451_object; object var_452_object;
	var_428_object = var_451_object;
	var_434_object = var_452_object;
	TaskCall(3);
	func_116(var_453_object, var_454_object, var_455_string, var_456_bool, var_451_object, var_452_object);
	TaskReturn();
	bool var_437_bool;
	var_434_object->IsDialogEnd(var_437_bool);
	
	for(;;) {
		var_518_bool = !var_437_bool; //@nz
		if(var_518_bool == 0) goto Label_105;
		@sync();
		var_434_object->IsDialogEnd(var_437_bool);
	}
	
Label_105:
	object var_519_object;
	var_428_object = var_519_object;
	func_5375();
	@StopDialog(var_434_object);
	var_434_object->GetReturnValue(-1);
	int var_436_int = var_427_int;
}
EMIT "Stack[-4] = 0";


void func_5668(bool var_131_bool, int var_132_int, int var_133_int)
{
	int var_135_int;
	@irand(var_135_int, var_133_int);
	var_131_bool = var_135_int < var_132_int;
}


// @pe
void func_4649(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1197_object, object var_1198_object)
{
	var_0_bool = var_1198_object;
	var_1_object = var_1197_object;
	var_3_object = false;
	if(1 != 0) {
		func_4707(var_1198_object, "Neutral");
		var_0_bool->SetMessage(514138); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514139, -1, 15353); //@t
		var_0_bool->AddReply(514140, -1, 15354); //@t
		goto Label_4677;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x122d";
	}
Label_4677:
	bool var_1219_bool;
	func_5793(var_1219_bool);
	if(var_1219_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4706;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4706:
		return 0;

	}
	
}


// @pe
void func_6186(bool var_935_bool)
{
	int var_937_int;
	func_5673(var_937_int, "d5q01");
	if(var_937_int == 6)
		var_935_bool = true;
	var_935_bool = false;
}


void func_5673(int var_469_int, string var_470_string)
{
	int var_472_int;
	@GetVariable(var_470_string, var_472_int);
	var_472_int = var_469_int;
}


void func_5678(int var_156_int, int var_157_int)
{
	object var_159_object;
	@CreateIntVector(var_159_object);
	var_159_object->add(var_156_int);
	var_159_object->add(var_157_int);
	@SendWorldWndMessage(3, var_159_object);
}
EMIT "Stack[-1] = 0";


void func_4146(bool var_0_bool, int var_1112_int, object var_1113_object)
{
	var_0_bool = var_1113_object;
	bool var_1123_bool; object var_1124_object;
	object var_1125_object;
	func_5652(var_1125_object);
	var_1125_object = var_1124_object;
	func_5392(var_1123_bool, var_1124_object);
	bool var_1126_bool; object var_1127_object;
	var_1113_object = var_1127_object;
	func_5307(var_1126_bool, var_1127_object, 70.0);
	if(!var_1126_bool) { //@nz
		var_1112_int = -2;
		return 8;
	}
	object var_1119_object;
	@CreateDialog(var_1119_object);
	int var_1130_int;
	func_5787(var_1130_int);
	var_1119_object->SetNPCName(var_1130_int);
	int var_1131_int;
	func_5785(var_1131_int);
	var_1119_object->SetNPCDescription(var_1131_int);
	string var_1132_string;
	func_5789(var_1132_string);
	var_1119_object->SetPhoto(var_1132_string);
	string var_1133_string;
	func_5791(var_1133_string);
	var_1119_object->SetPhoto2(var_1133_string);
	int var_1134_int;
	func_6571(var_1134_int);
	var_1119_object->SetPlayerName(var_1134_int);
	bool var_1120_bool;
	@IsOverrideActive(var_1120_bool);
	if(var_1120_bool != 0) {
		var_1112_int = -2;
		return 8;
	}
	@DoDialog(var_1119_object);
	object var_1136_object; object var_1137_object;
	var_1113_object = var_1136_object;
	var_1119_object = var_1137_object;
	TaskCall(21);
	func_4227(var_1138_object, var_1139_object, var_1140_string, var_1141_bool, var_1136_object, var_1137_object);
	TaskReturn();
	bool var_1122_bool;
	var_1119_object->IsDialogEnd(var_1122_bool);
	
	for(;;) {
		var_1166_bool = !var_1122_bool; //@nz
		if(var_1166_bool == 0) goto Label_4216;
		@sync();
		var_1119_object->IsDialogEnd(var_1122_bool);
	}
	
Label_4216:
	object var_1167_object;
	var_1113_object = var_1167_object;
	func_5375();
	@StopDialog(var_1119_object);
	var_1119_object->GetReturnValue(-1);
	int var_1121_int = var_1112_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6198(bool var_941_bool)
{
	int var_943_int;
	func_5673(var_943_int, "ood5Grif1");
	if(var_943_int == 0) {
		var_941_bool = true;
		return 0;
	}
	var_941_bool = false;
}


void func_1078(bool var_0_bool, int var_562_int, object var_563_object)
{
	var_0_bool = var_563_object;
	bool var_573_bool; object var_574_object;
	object var_575_object;
	func_5652(var_575_object);
	var_575_object = var_574_object;
	func_5392(var_573_bool, var_574_object);
	bool var_576_bool; object var_577_object;
	var_563_object = var_577_object;
	func_5307(var_576_bool, var_577_object, 70.0);
	if(!var_576_bool) { //@nz
		var_562_int = -2;
		return 8;
	}
	object var_569_object;
	@CreateDialog(var_569_object);
	int var_580_int;
	func_5787(var_580_int);
	var_569_object->SetNPCName(var_580_int);
	int var_581_int;
	func_5785(var_581_int);
	var_569_object->SetNPCDescription(var_581_int);
	string var_582_string;
	func_5789(var_582_string);
	var_569_object->SetPhoto(var_582_string);
	string var_583_string;
	func_5791(var_583_string);
	var_569_object->SetPhoto2(var_583_string);
	int var_584_int;
	func_6571(var_584_int);
	var_569_object->SetPlayerName(var_584_int);
	bool var_570_bool;
	@IsOverrideActive(var_570_bool);
	if(var_570_bool != 0) {
		var_562_int = -2;
		return 8;
	}
	@DoDialog(var_569_object);
	object var_586_object; object var_587_object;
	var_563_object = var_586_object;
	var_569_object = var_587_object;
	TaskCall(9);
	func_1159(var_588_object, var_589_object, var_590_string, var_591_bool, var_586_object, var_587_object);
	TaskReturn();
	bool var_572_bool;
	var_569_object->IsDialogEnd(var_572_bool);
	
	for(;;) {
		var_653_bool = !var_572_bool; //@nz
		if(var_653_bool == 0) goto Label_1148;
		@sync();
		var_569_object->IsDialogEnd(var_572_bool);
	}
	
Label_1148:
	object var_654_object;
	var_563_object = var_654_object;
	func_5375();
	@StopDialog(var_569_object);
	var_569_object->GetReturnValue(-1);
	int var_571_int = var_562_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2617(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_684_object, object var_685_object)
{
	var_0_bool = var_685_object;
	var_1_object = var_684_object;
	var_3_object = false;
	if(1 != 0) {
		func_2695(var_685_object, "Neutral");
		var_0_bool->SetMessage(509843); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_700_bool = false;
		bool var_701_bool;
		func_6042(var_1_object);
		if(var_701_bool != 0) {
			bool var_707_bool;
			func_6126(var_1_object);
			if(!var_707_bool) //@nz
				var_700_bool = true;
		}
		if(var_700_bool != 0)
			var_0_bool->AddReply(509848, 10848, 10847); //@t
		var_0_bool->AddReply(514117, -1, 15331); //@t
		var_0_bool->AddReply(514118, -1, 15332); //@t
		goto Label_2665;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa3d";
	}
Label_2665:
	bool var_723_bool;
	func_5793(var_723_bool);
	if(var_723_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2694;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2694:
		return 0;

	}
	
}


void func_5690(object var_143_object, int var_144_int)
{
	int var_146_int;
	object var_147_object;
	var_143_object = var_147_object;
	int var_149_int;
	func_5276(var_147_object, "money", var_149_int);
	if(var_149_int > 0) {
		@GetInvItemByName(var_146_int, "Money");
		int var_156_int; int var_157_int;
		var_146_int = var_156_int;
		var_144_int = var_157_int;
		func_5678(var_156_int, var_157_int);
	}
}


// @pe
void func_6210(bool var_965_bool, object var_966_object)
{
	object var_968_object;
	var_966_object = var_968_object;
	bool var_967_bool;
	func_6302(var_967_bool, var_968_object);
	if(var_967_bool != 0) {
		var_965_bool = true;
		return 0;
	}
	var_965_bool = false;
}


void func_5192(void)
{
	bool var_95_bool; int var_96_int; int var_97_int; bool var_98_bool;
	@WaitForAnimEnd();
	bool var_99_bool;
	func_5302(var_99_bool);
	if(!var_99_bool) //@nz
		return 12;
	int var_101_int;
	func_5768(var_101_int);
	int var_93_int;
	var_101_int = var_93_int;
	int var_94_int = 0;
	
	for(;;) {
		bool var_114_bool = false;
		if(var_94_int < 5) {
			bool var_117_bool;
			func_5302(var_117_bool);
			if(var_117_bool != 0)
				var_114_bool = true;
		}
		if(var_114_bool != 0) {
			if(!var_93_int) { //@nz
				@Sleep(3, var_95_bool);
				if(!var_95_bool) { //@nz
				} else {
			} else {
			@irand(var_96_int, var_93_int);
			@irand(var_97_int, 5);
			if(var_97_int != 0)
				var_96_int = 0;
			string var_128_string; int var_129_int;
			var_96_int = var_129_int;
			func_5761(var_128_string, var_129_int);
			@PlayAnimation("all", var_128_string);
			@WaitForAnimEnd(var_98_bool);
			var_130_bool = !var_98_bool; //@nz
			if(var_130_bool == 0) goto Label_5247;
			goto Label_5258;
			}
				Label_5247:
					bool var_121_bool;
					func_5261(var_121_bool);
					var_122_bool = !var_121_bool; //@nz
					if(var_122_bool == 0) goto Label_5253;
			}
		}
	Label_5258:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_5253:
		@ResetAAS();
		var_94_int += 1;
	}
	
}


// @pe
void func_585(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1382_object, object var_1383_object)
{
	var_0_bool = var_1383_object;
	var_1_object = var_1382_object;
	var_3_object = false;
	if(1 != 0) {
		func_648(var_1383_object, "Neutral");
		var_0_bool->SetMessage(535294); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535295, 36973, 36972); //@t
		var_0_bool->AddReply(535302, -1, 36980); //@t
		var_0_bool->AddReply(535303, -1, 36981); //@t
		goto Label_618;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24d";
	}
Label_618:
	bool var_1407_bool;
	func_5793(var_1407_bool);
	if(var_1407_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_647;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_647:
		return 0;

	}
	
}


// @pe
void func_6220(bool var_955_bool)
{
	int var_957_int;
	func_5673(var_957_int, "d5q01ThiefsWillHelp");
	if(var_957_int == 1)
		var_955_bool = true;
	var_955_bool = false;
}


void func_5709(object var_116_object, object var_117_object, int var_118_int)
{
	int var_122_int;
	var_117_object->GetItemID(var_122_int);
	int var_123_int;
	@GetInvItemProperty(var_123_int, var_122_int, "Category");
	bool var_124_bool;
	var_116_object->AddItem(var_124_bool, var_117_object, var_123_int, var_118_int);
	if(!var_124_bool) { //@nz
		var_116_object->DropItems(var_117_object, var_118_int);
	} else {
		int var_127_int; int var_128_int;
		var_122_int = var_127_int;
		var_118_int = var_128_int;
		func_5678(var_127_int, var_128_int);
	}
	
}


// @pe
void func_3154(object var_2_object, string var_909_string)
{
	bool var_910_bool;
	func_5793(var_910_bool);
	if(!var_910_bool) //@nz
		return 0;
	if(var_909_string == var_2_object)
		return 0;
	string var_913_string; bool var_914_bool;
	var_909_string = var_913_string;
	if(var_909_string == "")
		var_914_bool = false;
	else
		var_914_bool = true;
	func_5596(var_913_string, var_914_bool);
	var_2_object = var_909_string;
	
}


// @pe
void func_6232(bool var_893_bool)
{
	int var_895_int;
	func_5673(var_895_int, "d5q02");
	if(var_895_int == 0) {
		var_893_bool = true;
		return 0;
	}
	var_893_bool = false;
}


void func_5728(object var_111_object, string var_112_string, int var_113_int)
{
	object var_115_object;
	@CreateInvItem(var_115_object);
	var_115_object->SetItemName(var_112_string);
	object var_116_object; object var_117_object; int var_118_int;
	var_111_object = var_116_object;
	var_115_object = var_117_object;
	var_113_int = var_118_int;
	func_5709(var_116_object, var_117_object, var_118_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4707(object var_2_object, string var_1204_string)
{
	bool var_1205_bool;
	func_5793(var_1205_bool);
	if(!var_1205_bool) //@nz
		return 0;
	if(var_1204_string == var_2_object)
		return 0;
	string var_1208_string; bool var_1209_bool;
	var_1204_string = var_1208_string;
	if(var_1204_string == "")
		var_1209_bool = false;
	else
		var_1209_bool = true;
	func_5596(var_1208_string, var_1209_bool);
	var_2_object = var_1204_string;
	
}


// @pe
void func_6244(bool var_824_bool)
{
	int var_826_int;
	func_5673(var_826_int, "d4q03");
	if(var_826_int == 3)
		var_824_bool = true;
	var_824_bool = false;
}


void func_5741(float var_94_float)
{
	float var_96_float;
	@GetGameTime(var_96_float);
	var_96_float = var_94_float;
}


// @pe
void func_6256(bool var_899_bool)
{
	int var_901_int;
	func_5673(var_901_int, "ood5Grif2");
	if(var_901_int == 0) {
		var_899_bool = true;
		return 0;
	}
	var_899_bool = false;
}


void func_5746(int var_87_int)
{
	float var_89_float;
	@GetGameTime(var_89_float);
	var_87_int = 1 + (var_89_float / 24);
}


// @pe
void func_116(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_451_object, object var_452_object)
{
	var_0_bool = var_452_object;
	var_1_object = var_451_object;
	var_3_object = false;
	if(1 != 0) {
		func_203(var_452_object, "Neutral");
		var_0_bool->SetMessage(533838); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_467_bool;
		func_6018(var_1_object);
		if(var_467_bool != 0)
			var_0_bool->AddReply(533839, 35390, 35389); //@t
		bool var_478_bool = false;
		bool var_479_bool;
		func_6268(var_1_object);
		if(var_479_bool != 0) {
			bool var_495_bool;
			func_6030(var_1_object);
			if(var_495_bool != 0)
				var_478_bool = true;
		}
		if(var_478_bool != 0)
			var_0_bool->AddReply(533960, 35529, 35528); //@t
		var_0_bool->AddReply(533843, -1, 35393); //@t
		var_0_bool->AddReply(533844, -1, 35394); //@t
		goto Label_173;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x78";
	}
Label_173:
	bool var_510_bool;
	func_5793(var_510_bool);
	if(var_510_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_202;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_202:
		return 0;

	}
	
}


// @pe
void func_5755(bool var_423_bool, int var_424_int)
{
	int var_425_int;
	func_5746(var_425_int);
	var_423_bool = var_425_int == var_424_int;
}


// @pe
void func_6268(bool var_479_bool)
{
	bool var_481_bool = true;
	bool var_482_bool = true;
	int var_483_int;
	func_5673(var_483_int, "d1q01");
	var_486_bool = var_483_int != 0;
	if(var_486_bool != 1) {
		int var_487_int;
		func_5673(var_487_int, "d1q01");
		var_490_bool = var_487_int != 1000;
		if(var_490_bool != 1)
			var_482_bool = false;
	}
	if(var_482_bool != 1) {
		int var_491_int;
		func_5673(var_491_int, "d1q01");
		var_494_bool = var_491_int != -1;
		if(var_494_bool != 1)
			var_481_bool = false;
	}
	if(var_481_bool != 0) {
		var_479_bool = true;
		return 0;
	}
	var_479_bool = false;
}


void func_5761(string var_107_string, int var_108_int)
{
	string var_110_string = "idle";
	if(var_108_int != 0)
		var_110_string += var_108_int;
	var_110_string = var_107_string;
}


// @pe
void func_4227(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1136_object, object var_1137_object)
{
	var_0_bool = var_1137_object;
	var_1_object = var_1136_object;
	var_3_object = false;
	if(1 != 0) {
		func_4285(var_1137_object, "Neutral");
		var_0_bool->SetMessage(538735); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(538736, -1, 40647); //@t
		var_0_bool->AddReply(538754, -1, 40666); //@t
		goto Label_4255;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1087";
	}
Label_4255:
	bool var_1158_bool;
	func_5793(var_1158_bool);
	if(var_1158_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4284;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4284:
		return 0;

	}
	
}


// @pe
void func_1159(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_586_object, object var_587_object)
{
	var_0_bool = var_587_object;
	var_1_object = var_586_object;
	var_3_object = false;
	if(1 != 0) {
		func_1261(var_587_object, "Neutral");
		var_0_bool->SetMessage(506959); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_602_bool = false;
		bool var_603_bool;
		func_6078(var_1_object);
		if(var_603_bool != 0) {
			bool var_609_bool;
			func_6114(var_1_object);
			if(var_609_bool != 0)
				var_602_bool = true;
		}
		if(var_602_bool != 0)
			var_0_bool->AddReply(507328, 8080, 8079); //@t
		bool var_618_bool;
		func_6090(var_1_object);
		if(var_618_bool != 0)
			var_0_bool->AddReply(507319, 8070, 8069); //@t
		bool var_627_bool;
		func_6102(var_1_object);
		if(var_627_bool != 0)
			var_0_bool->AddReply(507335, 8049, 8087); //@t
		var_0_bool->AddReply(536144, -1, 37903); //@t
		var_0_bool->AddReply(507530, -1, 8312); //@t
		var_0_bool->AddReply(533848, -1, 35398); //@t
		goto Label_1231;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x48b";
	}
Label_1231:
	bool var_645_bool;
	func_5793(var_645_bool);
	if(var_645_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1260;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1260:
		return 0;

	}
	
}


// @pe
void func_648(object var_2_object, string var_1389_string)
{
	bool var_1390_bool;
	func_5793(var_1390_bool);
	if(!var_1390_bool) //@nz
		return 0;
	if(var_1389_string == var_2_object)
		return 0;
	string var_1393_string; bool var_1394_bool;
	var_1389_string = var_1393_string;
	if(var_1389_string == "")
		var_1394_bool = false;
	else
		var_1394_bool = true;
	func_5596(var_1393_string, var_1394_bool);
	var_2_object = var_1389_string;
	
}


// @pe
void func_2695(object var_2_object, string var_691_string)
{
	bool var_692_bool;
	func_5793(var_692_bool);
	if(!var_692_bool) //@nz
		return 0;
	if(var_691_string == var_2_object)
		return 0;
	string var_695_string; bool var_696_bool;
	var_691_string = var_695_string;
	if(var_691_string == "")
		var_696_bool = false;
	else
		var_696_bool = true;
	func_5596(var_695_string, var_696_bool);
	var_2_object = var_691_string;
	
}


void func_5768(int var_101_int)
{
	int var_104_int; bool var_105_bool;
	var_104_int = 0;
	
	for(;;) {
		string var_107_string; int var_108_int;
		var_104_int = var_108_int;
		func_5761(var_107_string, var_108_int);
		@HasAnimation(var_105_bool, "all", var_107_string);
		if(!var_105_bool) //@nz
			break;
		var_104_int += 1;
	}
	var_104_int = var_101_int;
}


void func_5624(string var_126_string, int var_127_int, int var_128_int)
{
	bool var_130_bool;
	int var_132_int;
	var_127_int = var_132_int;
	int var_133_int;
	var_128_int = var_133_int;
	bool var_131_bool;
	func_5668(var_131_bool, var_132_int, var_133_int);
	if(var_131_bool != 0)
		@AddItem(var_130_bool, var_126_string, 0);
}


void func_3724(bool var_0_bool, int var_990_int, object var_991_object)
{
	var_0_bool = var_991_object;
	bool var_1001_bool; object var_1002_object;
	object var_1003_object;
	func_5652(var_1003_object);
	var_1003_object = var_1002_object;
	func_5392(var_1001_bool, var_1002_object);
	bool var_1004_bool; object var_1005_object;
	var_991_object = var_1005_object;
	func_5307(var_1004_bool, var_1005_object, 70.0);
	if(!var_1004_bool) { //@nz
		var_990_int = -2;
		return 8;
	}
	object var_997_object;
	@CreateDialog(var_997_object);
	int var_1008_int;
	func_5787(var_1008_int);
	var_997_object->SetNPCName(var_1008_int);
	int var_1009_int;
	func_5785(var_1009_int);
	var_997_object->SetNPCDescription(var_1009_int);
	string var_1010_string;
	func_5789(var_1010_string);
	var_997_object->SetPhoto(var_1010_string);
	string var_1011_string;
	func_5791(var_1011_string);
	var_997_object->SetPhoto2(var_1011_string);
	int var_1012_int;
	func_6571(var_1012_int);
	var_997_object->SetPlayerName(var_1012_int);
	bool var_998_bool;
	@IsOverrideActive(var_998_bool);
	if(var_998_bool != 0) {
		var_990_int = -2;
		return 8;
	}
	@DoDialog(var_997_object);
	object var_1014_object; object var_1015_object;
	var_991_object = var_1014_object;
	var_997_object = var_1015_object;
	TaskCall(17);
	func_3805(var_1016_object, var_1017_object, var_1018_string, var_1019_bool, var_1014_object, var_1015_object);
	TaskReturn();
	bool var_1000_bool;
	var_997_object->IsDialogEnd(var_1000_bool);
	
	for(;;) {
		var_1044_bool = !var_1000_bool; //@nz
		if(var_1044_bool == 0) goto Label_3794;
		@sync();
		var_997_object->IsDialogEnd(var_1000_bool);
	}
	
Label_3794:
	object var_1045_object;
	var_991_object = var_1045_object;
	func_5375();
	@StopDialog(var_997_object);
	var_997_object->GetReturnValue(-1);
	int var_999_int = var_990_int;
}
EMIT "Stack[-4] = 0";


void func_5261(bool var_121_bool)
{
	var_121_bool = true;
}


void func_5263(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_5268(float var_82_float, object var_83_object)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	cvector var_88_cvector;
	var_83_object->GetPosition(var_88_cvector);
	var_82_float = (var_88_cvector - var_87_cvector) | (var_88_cvector - var_87_cvector);
}


void func_5785(int var_356_int)
{
	var_356_int = 515535;
}


void func_5787(int var_355_int)
{
	var_355_int = 502860;
}


void func_5276(object var_147_object, string var_148_string, int var_149_int)
{
	int var_151_int;
	var_147_object->GetProperty(var_148_string, var_151_int);
	var_147_object->SetProperty(var_148_string, (var_151_int + var_149_int));
}


void func_5789(string var_357_string)
{
	var_357_string = "ui/NPC_Grif.png";
}


void func_6302(bool var_967_bool, object var_968_object)
{
	float var_970_float;
	var_968_object->GetProperty("money", var_970_float);
	if(var_970_float >= 10000)
		var_967_bool = true;
	var_967_bool = false;
}


void func_5791(string var_358_string)
{
	var_358_string = "ui/NPC_Grif_b.png";
}


void func_5793(bool var_256_bool)
{
	var_256_bool = true;
}


// @pe
void func_5795(object var_143_object)
{
	@Trace("money10000 is given");
	object var_146_object;
	var_143_object = var_146_object;
	func_5690(var_146_object, 10000);
}


void func_5283(bool var_75_bool, cvector var_76_cvector)
{
	cvector var_80_cvector;
	@GetPosition(var_80_cvector);
	cvector var_81_cvector = var_76_cvector - var_80_cvector;
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_84_float = GetByIndex(var_81_cvector, 2);
	bool var_82_bool;
	@Rotate(var_83_float, var_84_float, var_82_bool);
	var_82_bool = var_75_bool;
}


void func_6313(void)
{
	object var_82_object;
	@CreateDiaryEntry(var_82_object, 132, 2, 515269);
	bool var_86_bool; object var_87_object;
	var_82_object = var_87_object;
	func_6365(var_86_bool, var_87_object, 11);
}
EMIT "Stack[-1] = 0";


void func_1707(bool var_0_bool, int var_738_int, object var_739_object)
{
	var_0_bool = var_739_object;
	bool var_749_bool; object var_750_object;
	object var_751_object;
	func_5652(var_751_object);
	var_751_object = var_750_object;
	func_5392(var_749_bool, var_750_object);
	bool var_752_bool; object var_753_object;
	var_739_object = var_753_object;
	func_5307(var_752_bool, var_753_object, 70.0);
	if(!var_752_bool) { //@nz
		var_738_int = -2;
		return 8;
	}
	object var_745_object;
	@CreateDialog(var_745_object);
	int var_756_int;
	func_5787(var_756_int);
	var_745_object->SetNPCName(var_756_int);
	int var_757_int;
	func_5785(var_757_int);
	var_745_object->SetNPCDescription(var_757_int);
	string var_758_string;
	func_5789(var_758_string);
	var_745_object->SetPhoto(var_758_string);
	string var_759_string;
	func_5791(var_759_string);
	var_745_object->SetPhoto2(var_759_string);
	int var_760_int;
	func_6571(var_760_int);
	var_745_object->SetPlayerName(var_760_int);
	bool var_746_bool;
	@IsOverrideActive(var_746_bool);
	if(var_746_bool != 0) {
		var_738_int = -2;
		return 8;
	}
	@DoDialog(var_745_object);
	object var_762_object; object var_763_object;
	var_739_object = var_762_object;
	var_745_object = var_763_object;
	TaskCall(11);
	func_1788(var_764_object, var_765_object, var_766_string, var_767_bool, var_762_object, var_763_object);
	TaskReturn();
	bool var_748_bool;
	var_745_object->IsDialogEnd(var_748_bool);
	
	for(;;) {
		var_854_bool = !var_748_bool; //@nz
		if(var_854_bool == 0) goto Label_1777;
		@sync();
		var_745_object->IsDialogEnd(var_748_bool);
	}
	
Label_1777:
	object var_855_object;
	var_739_object = var_855_object;
	func_5375();
	@StopDialog(var_745_object);
	var_745_object->GetReturnValue(-1);
	int var_747_int = var_738_int;
}
EMIT "Stack[-4] = 0";


void func_4779(bool var_0_bool, int var_1295_int, object var_1296_object)
{
	var_0_bool = var_1296_object;
	bool var_1306_bool; object var_1307_object;
	object var_1308_object;
	func_5652(var_1308_object);
	var_1308_object = var_1307_object;
	func_5392(var_1306_bool, var_1307_object);
	bool var_1309_bool; object var_1310_object;
	var_1296_object = var_1310_object;
	func_5307(var_1309_bool, var_1310_object, 70.0);
	if(!var_1309_bool) { //@nz
		var_1295_int = -2;
		return 8;
	}
	object var_1302_object;
	@CreateDialog(var_1302_object);
	int var_1313_int;
	func_5787(var_1313_int);
	var_1302_object->SetNPCName(var_1313_int);
	int var_1314_int;
	func_5785(var_1314_int);
	var_1302_object->SetNPCDescription(var_1314_int);
	string var_1315_string;
	func_5789(var_1315_string);
	var_1302_object->SetPhoto(var_1315_string);
	string var_1316_string;
	func_5791(var_1316_string);
	var_1302_object->SetPhoto2(var_1316_string);
	int var_1317_int;
	func_6571(var_1317_int);
	var_1302_object->SetPlayerName(var_1317_int);
	bool var_1303_bool;
	@IsOverrideActive(var_1303_bool);
	if(var_1303_bool != 0) {
		var_1295_int = -2;
		return 8;
	}
	@DoDialog(var_1302_object);
	object var_1319_object; object var_1320_object;
	var_1296_object = var_1319_object;
	var_1302_object = var_1320_object;
	TaskCall(27);
	func_4860(var_1321_object, var_1322_object, var_1323_string, var_1324_bool, var_1319_object, var_1320_object);
	TaskReturn();
	bool var_1305_bool;
	var_1302_object->IsDialogEnd(var_1305_bool);
	
	for(;;) {
		var_1352_bool = !var_1305_bool; //@nz
		if(var_1352_bool == 0) goto Label_4849;
		@sync();
		var_1302_object->IsDialogEnd(var_1305_bool);
	}
	
Label_4849:
	object var_1353_object;
	var_1296_object = var_1353_object;
	func_5375();
	@StopDialog(var_1302_object);
	var_1302_object->GetReturnValue(-1);
	int var_1304_int = var_1295_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5805(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_5293(bool var_71_bool, object var_72_object)
{
	cvector var_74_cvector;
	var_72_object->GetPosition(var_74_cvector);
	bool var_75_bool; cvector var_76_cvector;
	var_74_cvector = var_76_cvector;
	func_5283(var_75_bool, var_76_cvector);
	var_75_bool = var_71_bool;
}


// @pe
void func_5811(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_5302(bool var_69_bool)
{
	bool var_71_bool;
	@IsLoaded(var_71_bool);
	var_71_bool = var_69_bool;
}


void func_6326(void)
{
	object var_103_object;
	@CreateDiaryEntry(var_103_object, 97, 2, 512179);
	bool var_107_bool; object var_108_object;
	var_103_object = var_108_object;
	func_6365(var_107_bool, var_108_object, 22);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5817(object var_108_object)
{
	@Trace("revolver ammo15 is given");
	object var_111_object;
	var_108_object = var_111_object;
	func_5728(var_111_object, "revolver_ammo", 15);
}


void func_5307(bool var_308_bool, object var_309_object, float var_310_float)
{
	cvector var_321_cvector; bool var_328_bool;
	var_309_object->GetPosition(var_321_cvector);
	float var_320_float;
	var_309_object->GetEyesHeight(var_320_float);
	var_329_float = GetByIndex(var_321_cvector, 1);
	SetByIndex(var_321_cvector, 1) = (var_329_float + var_320_float);
	cvector var_322_cvector;
	@GetPosition(var_322_cvector);
	@GetEyesHeight(var_320_float);
	var_330_float = GetByIndex(var_322_cvector, 1);
	SetByIndex(var_322_cvector, 1) = (var_330_float + var_320_float);
	cvector var_323_cvector = var_321_cvector - var_322_cvector;
	var_331_float = GetByIndex(var_323_cvector, 1);
	SetByIndex(var_323_cvector, 1) = (float)0;
	var_333_float = sqrt(var_323_cvector | var_323_cvector);
	var_323_cvector /= var_333_float;
	cvector var_324_cvector = -var_323_cvector;
	cvector var_335_cvector;
	func_5658(var_335_cvector, (var_324_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_325_cvector = ((var_323_cvector * var_310_float) + (var_335_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_327_bool;
	@IsOverrideActive(var_327_bool);
	if(var_327_bool != 0)
		var_308_bool = false;
	@StopWorld();
	@CameraTransit((var_322_cvector + var_325_cvector), var_324_cvector);
	var_348_float = GetByIndex(var_325_cvector, 0);
	var_349_float = GetByIndex(var_325_cvector, 2);
	@Rotate(var_348_float, var_349_float);
	bool var_350_bool;
	func_5793(var_350_bool);
	if(var_350_bool != 0) {
	} else {
		@HasAnimationTrack(var_328_bool, "head");
		if(var_328_bool == 0) goto Label_5369;
		@LookAsyncCamera("head");
	}
Label_5369:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_308_bool = true;
	
}


// @pe
void func_4285(object var_2_object, string var_1143_string)
{
	bool var_1144_bool;
	func_5793(var_1144_bool);
	if(!var_1144_bool) //@nz
		return 0;
	if(var_1143_string == var_2_object)
		return 0;
	string var_1147_string; bool var_1148_bool;
	var_1143_string = var_1147_string;
	if(var_1143_string == "")
		var_1148_bool = false;
	else
		var_1148_bool = true;
	func_5596(var_1147_string, var_1148_bool);
	var_2_object = var_1143_string;
	
}


void func_6339(void)
{
	object var_118_object;
	@CreateDiaryEntry(var_118_object, 145, 1, 515345);
	bool var_122_bool; object var_123_object;
	var_118_object = var_123_object;
	func_6365(var_122_bool, var_123_object, 139);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5828(object var_140_object)
{
	@Trace("money 10000 removed");
	object var_143_object;
	var_140_object = var_143_object;
	func_5690(var_143_object, -10000);
}


// @pe
void func_203(object var_2_object, string var_458_string)
{
	bool var_459_bool;
	func_5793(var_459_bool);
	if(!var_459_bool) //@nz
		return 0;
	if(var_458_string == var_2_object)
		return 0;
	string var_462_string; bool var_463_bool;
	var_458_string = var_462_string;
	if(var_458_string == "")
		var_463_bool = false;
	else
		var_463_bool = true;
	func_5596(var_462_string, var_463_bool);
	var_2_object = var_458_string;
	
}


// @pe
void func_5838(void)
{
	@SetVariable("ood1Grif1", 1);
}


void func_6352(object var_131_object)
{
	object var_133_object;
	@GetDiaryRoot(var_133_object);
	if(!var_133_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_131_object = false;
	}
	var_133_object = var_131_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5844(void)
{
	@SetVariable("ood1Grif2", 1);
}


// @pe
void func_5850(void)
{
	@SetVariable("ood3Grif1", 1);
}


// @pe
void func_3805(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1014_object, object var_1015_object)
{
	var_0_bool = var_1015_object;
	var_1_object = var_1014_object;
	var_3_object = false;
	if(1 != 0) {
		func_3863(var_1015_object, "Neutral");
		var_0_bool->SetMessage(514122); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514123, -1, 15337); //@t
		var_0_bool->AddReply(514124, -1, 15338); //@t
		goto Label_3833;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xee1";
	}
Label_3833:
	bool var_1036_bool;
	func_5793(var_1036_bool);
	if(var_1036_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3862;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3862:
		return 0;

	}
	
}


void func_6365(bool var_122_bool, object var_123_object, int var_124_int)
{
	object var_131_object;
	func_6352(var_131_object);
	object var_128_object;
	var_131_object = var_128_object;
	object var_129_object;
	var_128_object->Find(var_124_int, var_129_object);
	if(!var_129_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_124_int);
		var_122_bool = false;
	}
	var_129_object->AddChild(var_123_object);
	@SendWorldWndMessage(7);
	int var_130_int;
	var_123_object->GetCategory(var_130_int);
	@SetDiarySection(var_130_int);
	var_122_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5856(void)
{
	@SetVariable("ood4Grif3", 1);
}


// @pe
void func_5862(void)
{
	@SetVariable("ood4Grif4", 1);
}


// @pe
void func_5868(void)
{
	@SetVariable("ood2Grif2", 1);
}


// @pe
void func_1261(object var_2_object, string var_593_string)
{
	bool var_594_bool;
	func_5793(var_594_bool);
	if(!var_594_bool) //@nz
		return 0;
	if(var_593_string == var_2_object)
		return 0;
	string var_597_string; bool var_598_bool;
	var_593_string = var_597_string;
	if(var_593_string == "")
		var_598_bool = false;
	else
		var_598_bool = true;
	func_5596(var_597_string, var_598_bool);
	var_2_object = var_593_string;
	
}


// @pe
void func_5874(void)
{
	@SetVariable("ood2Grif3", 1);
}


// @pe
void func_5880(void)
{
	@SetVariable("ood2Grif4", 1);
}


void func_6393(object var_83_object)
{
	object var_86_object; object var_87_object;
	@GetMainOutdoorScene(var_86_object);
	if(var_86_object == null) {
		@Trace("Can't find main outdoor scene");
		var_87_object = null;
		var_87_object = var_83_object;
	}
	var_86_object->GetMap(var_87_object);
	var_87_object = var_83_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_763(bool var_0_bool, int var_207_int, object var_208_object)
{
	var_0_bool = var_208_object;
	bool var_218_bool; object var_219_object;
	object var_220_object;
	func_5652(var_220_object);
	var_220_object = var_219_object;
	func_5392(var_218_bool, var_219_object);
	bool var_308_bool; object var_309_object;
	var_208_object = var_309_object;
	func_5307(var_308_bool, var_309_object, 70.0);
	if(!var_308_bool) { //@nz
		var_207_int = -2;
		return 8;
	}
	object var_214_object;
	@CreateDialog(var_214_object);
	int var_355_int;
	func_5787(var_355_int);
	var_214_object->SetNPCName(var_355_int);
	int var_356_int;
	func_5785(var_356_int);
	var_214_object->SetNPCDescription(var_356_int);
	string var_357_string;
	func_5789(var_357_string);
	var_214_object->SetPhoto(var_357_string);
	string var_358_string;
	func_5791(var_358_string);
	var_214_object->SetPhoto2(var_358_string);
	int var_359_int;
	func_6571(var_359_int);
	var_214_object->SetPlayerName(var_359_int);
	bool var_215_bool;
	@IsOverrideActive(var_215_bool);
	if(var_215_bool != 0) {
		var_207_int = -2;
		return 8;
	}
	@DoDialog(var_214_object);
	object var_368_object; object var_369_object;
	var_208_object = var_368_object;
	var_214_object = var_369_object;
	TaskCall(7);
	func_844(var_370_object, var_371_object, var_372_string, var_373_bool, var_368_object, var_369_object);
	TaskReturn();
	bool var_217_bool;
	var_214_object->IsDialogEnd(var_217_bool);
	
	for(;;) {
		var_414_bool = !var_217_bool; //@nz
		if(var_414_bool == 0) goto Label_833;
		@sync();
		var_214_object->IsDialogEnd(var_217_bool);
	}
	
Label_833:
	object var_415_object;
	var_208_object = var_415_object;
	func_5375();
	@StopDialog(var_214_object);
	var_214_object->GetReturnValue(-1);
	int var_216_int = var_207_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1788(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_762_object, object var_763_object)
{
	var_0_bool = var_763_object;
	var_1_object = var_762_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_769_bool = false;
		bool var_770_bool;
		func_6138(var_1_object);
		if(var_770_bool != 0) {
			bool var_776_bool;
			func_6150(var_1_object);
			if(var_776_bool != 0)
				var_769_bool = true;
		}
		if(var_769_bool != 0) {
			func_1928(var_763_object, "Neutral");
			var_0_bool->SetMessage(510952); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(510953, 12113, 12112); //@t
			var_0_bool->AddReply(510960, 12113, 12119); //@t
		} else {
					func_1928(var_763_object, "Neutral");
					var_0_bool->SetMessage(509615); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_807_bool = false;
					bool var_808_bool;
					func_6162(var_1_object);
					if(var_808_bool != 0) {
						bool var_814_bool;
						func_6174(var_1_object);
						if(var_814_bool != 0)
							var_807_bool = true;
					}
					if(var_807_bool != 0)
						var_0_bool->AddReply(510970, 12133, 12132); //@t
					bool var_823_bool = false;
					bool var_824_bool;
					func_6244(var_1_object);
					if(var_824_bool != 0) {
						bool var_830_bool;
						func_6054(var_1_object);
						if(var_830_bool != 0)
							var_823_bool = true;
					}
					if(var_823_bool != 0)
						var_0_bool->AddReply(510948, 12108, 12107); //@t
					bool var_839_bool;
					func_6066(var_1_object);
					if(var_839_bool != 0)
						var_0_bool->AddReply(509640, 10581, 10608); //@t
					var_0_bool->AddReply(514119, -1, 15333); //@t
					var_0_bool->AddReply(509616, -1, 10580); //@t
		}
	}
	for(;;) {
		bool var_797_bool;
		func_5793(var_797_bool);
		if(var_797_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5589(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1927;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1927:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x700";


// @pe
void func_4860(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1319_object, object var_1320_object)
{
	var_0_bool = var_1320_object;
	var_1_object = var_1319_object;
	var_3_object = false;
	if(1 != 0) {
		func_4923(var_1320_object, "Neutral");
		var_0_bool->SetMessage(514186); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514187, -1, 15401); //@t
		var_0_bool->AddReply(514188, -1, 15402); //@t
		var_0_bool->AddReply(539631, -1, 41577); //@t
		goto Label_4893;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1300";
	}
Label_4893:
	bool var_1344_bool;
	func_5793(var_1344_bool);
	if(var_1344_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4922;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4922:
		return 0;

	}
	
}


// @pe
void func_5886(void)
{
	@SetVariable("d2q02", 7);
	func_6313();
}


void func_5375(void)
{
	bool var_417_bool;
	@CameraSwitchToNormal();
	bool var_418_bool;
	func_5793(var_418_bool);
	if(var_418_bool != 0) {
	} else {
		@HasAnimationTrack(var_417_bool, "head");
		if(var_417_bool == 0) goto Label_5391;
		@UnlookAsync("head");
	}
Label_5391:
	
}


void func_4357(bool var_0_bool, int var_1234_int, object var_1235_object)
{
	var_0_bool = var_1235_object;
	bool var_1245_bool; object var_1246_object;
	object var_1247_object;
	func_5652(var_1247_object);
	var_1247_object = var_1246_object;
	func_5392(var_1245_bool, var_1246_object);
	bool var_1248_bool; object var_1249_object;
	var_1235_object = var_1249_object;
	func_5307(var_1248_bool, var_1249_object, 70.0);
	if(!var_1248_bool) { //@nz
		var_1234_int = -2;
		return 8;
	}
	object var_1241_object;
	@CreateDialog(var_1241_object);
	int var_1252_int;
	func_5787(var_1252_int);
	var_1241_object->SetNPCName(var_1252_int);
	int var_1253_int;
	func_5785(var_1253_int);
	var_1241_object->SetNPCDescription(var_1253_int);
	string var_1254_string;
	func_5789(var_1254_string);
	var_1241_object->SetPhoto(var_1254_string);
	string var_1255_string;
	func_5791(var_1255_string);
	var_1241_object->SetPhoto2(var_1255_string);
	int var_1256_int;
	func_6571(var_1256_int);
	var_1241_object->SetPlayerName(var_1256_int);
	bool var_1242_bool;
	@IsOverrideActive(var_1242_bool);
	if(var_1242_bool != 0) {
		var_1234_int = -2;
		return 8;
	}
	@DoDialog(var_1241_object);
	object var_1258_object; object var_1259_object;
	var_1235_object = var_1258_object;
	var_1241_object = var_1259_object;
	TaskCall(23);
	func_4438(var_1260_object, var_1261_object, var_1262_string, var_1263_bool, var_1258_object, var_1259_object);
	TaskReturn();
	bool var_1244_bool;
	var_1241_object->IsDialogEnd(var_1244_bool);
	
	for(;;) {
		var_1288_bool = !var_1244_bool; //@nz
		if(var_1288_bool == 0) goto Label_4427;
		@sync();
		var_1241_object->IsDialogEnd(var_1244_bool);
	}
	
Label_4427:
	object var_1289_object;
	var_1235_object = var_1289_object;
	func_5375();
	@StopDialog(var_1241_object);
	var_1241_object->GetReturnValue(-1);
	int var_1243_int = var_1234_int;
}
EMIT "Stack[-4] = 0";


void func_5895(object var_132_object)
{
	@Trace("Revolver is given");
	object var_135_object;
	@CreateInvItem(var_135_object);
	var_135_object->SetItemName("Revolver");
	var_135_object->SetProperty("durability", 30);
	object var_140_object; object var_141_object;
	var_132_object = var_140_object;
	var_135_object = var_141_object;
	func_5709(var_140_object, var_141_object, 1);
}
EMIT "Stack[-1] = 0";


void func_6410(void)
{
	@ClearSubContainer(0);
	int var_101_int;
	func_5746(var_101_int);
	int var_99_int;
	var_101_int = var_99_int;
	int var_102_int;
	func_6566(var_102_int, "Rifle");
	bool var_97_bool;
	@AddItem(var_97_bool, var_102_int, 0, 1);
	int var_108_int;
	func_6566(var_108_int, "Revolver");
	@AddItem(var_97_bool, var_108_int, 0, 1);
	int var_112_int;
	func_6566(var_112_int, "Knife");
	@AddItem(var_97_bool, var_112_int, 0, 1);
	if(var_99_int != 10) {
		int var_118_int;
		func_6566(var_118_int, "tvirin");
		@AddItem(var_97_bool, var_118_int, 0, 1);
	} else {
		int var_199_int;
		func_6566(var_199_int, "tvirin");
		@AddItem(var_97_bool, var_199_int, 0, 4);
	}
	int var_122_int;
	func_6566(var_122_int, "lockpick");
	@AddItem(var_97_bool, var_122_int, 0, 3);
	func_5624("Scalpel", 1, 2);
	func_5635("revolver_ammo", 1, 1, 5, 10);
	func_5635("rifle_ammo", 1, 1, 5, 20);
	int var_98_int;
	@irand(var_98_int, 100);
	if(var_98_int != 0) {
		int var_162_int;
		func_6566(var_162_int, "kerosene");
		@AddItem(var_97_bool, var_162_int, 0, var_98_int);
	}
	if(var_99_int >= 3) {
		int var_167_int;
		func_6566(var_167_int, "halfboot_repel");
		@AddItem(var_97_bool, var_167_int, 0, 1);
		int var_171_int;
		func_6566(var_171_int, "boot_repel");
		@AddItem(var_97_bool, var_171_int, 0, 1);
	}
	if(var_99_int >= 9) {
		int var_177_int;
		func_6566(var_177_int, "boot_army");
		@AddItem(var_97_bool, var_177_int, 0, 1);
		int var_181_int;
		func_6566(var_181_int, "balahon");
		@AddItem(var_97_bool, var_181_int, 0, 1);
		int var_185_int;
		func_6566(var_185_int, "glove_army");
		@AddItem(var_97_bool, var_185_int, 0, 1);
	}
	int var_189_int;
	func_6588(var_189_int);
	if(var_189_int == 0) {
		int var_195_int;
		func_6566(var_195_int, "Gun_danko");
		@AddItem(var_97_bool, var_195_int, 0, 1);
	}
	
}


void func_5392(bool var_218_bool, object var_219_object)
{
	int var_225_int; int var_226_int;
	@GetVariable("voice_common", var_225_int);
	if(var_225_int != 0) {
		bool var_229_bool; object var_230_object;
		var_219_object = var_230_object;
		func_5450(var_229_bool, var_230_object);
		if(!var_229_bool) { //@nz
			bool var_260_bool; object var_261_object;
			var_219_object = var_261_object;
			func_5487(var_260_bool, var_261_object);
			if(!var_260_bool) { //@nz
				var_218_bool = false;
				return 4;
			}
		}
		@irand(var_226_int, 2);
		if(var_226_int != 0)
			@SetVariable("voice_common", ((var_225_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_300_bool; object var_301_object;
		var_219_object = var_301_object;
		func_5487(var_300_bool, var_301_object);
		if(!var_300_bool) { //@nz
			bool var_303_bool; object var_304_object;
			var_219_object = var_304_object;
			func_5450(var_303_bool, var_304_object);
			if(!var_303_bool) { //@nz
				var_218_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_5448;
	
Label_5448:
	var_218_bool = true;
	
}


// @pe
void func_3863(object var_2_object, string var_1021_string)
{
	bool var_1022_bool;
	func_5793(var_1022_bool);
	if(!var_1022_bool) //@nz
		return 0;
	if(var_1021_string == var_2_object)
		return 0;
	string var_1025_string; bool var_1026_bool;
	var_1021_string = var_1025_string;
	if(var_1021_string == "")
		var_1026_bool = false;
	else
		var_1026_bool = true;
	func_5596(var_1025_string, var_1026_bool);
	var_2_object = var_1021_string;
	
}


// @pe
void func_5916(void)
{
	@SetVariable("ood4Grif1", 1);
}


void func_5922(void)
{
	@SetVariable("d4q03", 2);
	object var_83_object;
	func_6393(var_83_object);
	object var_80_object;
	var_83_object = var_80_object;
	float var_94_float;
	func_5741(var_94_float);
	var_80_object->AddMark("d4q03GrifGotoAlexandr", "pt_map_alexandr", 0, 515331, var_94_float);
	float var_101_float;
	func_5741(var_101_float);
	var_80_object->AddMark("d4q03GrifGotoAlexandrSelf", "pt_map_grif", 0, 515332, var_101_float);
	func_6326();
}
EMIT "Stack[-1] = 0";


// @pe
void func_4923(object var_2_object, string var_1326_string)
{
	bool var_1327_bool;
	func_5793(var_1327_bool);
	if(!var_1327_bool) //@nz
		return 0;
	if(var_1326_string == var_2_object)
		return 0;
	string var_1330_string; bool var_1331_bool;
	var_1326_string = var_1330_string;
	if(var_1326_string == "")
		var_1331_bool = false;
	else
		var_1331_bool = true;
	func_5596(var_1330_string, var_1331_bool);
	var_2_object = var_1326_string;
	
}


// @pe
void func_5954(void)
{
	@SetVariable("ood4Grif2", 1);
}


// @pe
void func_5960(void)
{
	@SetVariable("ood5Grif1", 1);
}


void func_5450(bool var_229_bool, object var_230_object)
{
	string var_236_string; bool var_238_bool; int var_239_int; string var_240_string;
	var_236_string = "c";
	int var_237_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_230_object->HasProperty((var_236_string + (var_237_int + 1)), var_238_bool);
			if(!var_238_bool) { //@nz
			} else {
				var_237_int += 1;
			}
		}
		if(!var_237_int) { //@nz
			var_229_bool = false;
			return 10;
		}
		var_239_int = 0;
		if(var_237_int > 1)
			@irand(var_239_int, var_237_int);
		var_230_object->GetProperty((var_236_string + (var_239_int + 1)), var_240_string);
		bool var_252_bool; string var_253_string;
		var_240_string = var_253_string;
		func_5602(var_252_bool, var_253_string);
		var_252_bool = var_229_bool;
		return 10;

	}
}


// @pe
void func_844(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_368_object, object var_369_object)
{
	var_0_bool = var_369_object;
	var_3_object = false;
	if(1 != 0) {
		object var_375_object; object var_376_object;
		var_375_object = var_368_object;
		var_376_object = var_0_bool;
		func_5984();
		func_912(var_369_object, "Neutral");
		var_0_bool->SetMessage(500383); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(500384, 448, 445); //@t
		var_0_bool->AddReply(500385, 449, 446); //@t
		var_0_bool->AddReply(500386, 450, 447); //@t
		goto Label_882;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x350";
	}
Label_882:
	bool var_401_bool;
	func_5793(var_401_bool);
	if(var_401_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_911;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_911:
		return 0;

	}
	
}


// @pe
void func_5966(void)
{
	@SetVariable("d5q01ThiefsWillHelp", 1);
	@SetVariable("d5q01PlayCutscene", 1);
	func_6339();
}


// @pe
void func_4438(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1258_object, object var_1259_object)
{
	var_0_bool = var_1259_object;
	var_1_object = var_1258_object;
	var_3_object = false;
	if(1 != 0) {
		func_4496(var_1259_object, "Neutral");
		var_0_bool->SetMessage(514134); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514135, -1, 15349); //@t
		var_0_bool->AddReply(514136, -1, 15350); //@t
		goto Label_4466;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x115a";
	}
Label_4466:
	bool var_1280_bool;
	func_5793(var_1280_bool);
	if(var_1280_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4495;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4495:
		return 0;

	}
	
}


// @pe
void func_5979(object var_74_object)
{
	var_74_object->SetReturnValue(1000);
}


void func_3935(bool var_0_bool, int var_1051_int, object var_1052_object)
{
	var_0_bool = var_1052_object;
	bool var_1062_bool; object var_1063_object;
	object var_1064_object;
	func_5652(var_1064_object);
	var_1064_object = var_1063_object;
	func_5392(var_1062_bool, var_1063_object);
	bool var_1065_bool; object var_1066_object;
	var_1052_object = var_1066_object;
	func_5307(var_1065_bool, var_1066_object, 70.0);
	if(!var_1065_bool) { //@nz
		var_1051_int = -2;
		return 8;
	}
	object var_1058_object;
	@CreateDialog(var_1058_object);
	int var_1069_int;
	func_5787(var_1069_int);
	var_1058_object->SetNPCName(var_1069_int);
	int var_1070_int;
	func_5785(var_1070_int);
	var_1058_object->SetNPCDescription(var_1070_int);
	string var_1071_string;
	func_5789(var_1071_string);
	var_1058_object->SetPhoto(var_1071_string);
	string var_1072_string;
	func_5791(var_1072_string);
	var_1058_object->SetPhoto2(var_1072_string);
	int var_1073_int;
	func_6571(var_1073_int);
	var_1058_object->SetPlayerName(var_1073_int);
	bool var_1059_bool;
	@IsOverrideActive(var_1059_bool);
	if(var_1059_bool != 0) {
		var_1051_int = -2;
		return 8;
	}
	@DoDialog(var_1058_object);
	object var_1075_object; object var_1076_object;
	var_1052_object = var_1075_object;
	var_1058_object = var_1076_object;
	TaskCall(19);
	func_4016(var_1077_object, var_1078_object, var_1079_string, var_1080_bool, var_1075_object, var_1076_object);
	TaskReturn();
	bool var_1061_bool;
	var_1058_object->IsDialogEnd(var_1061_bool);
	
	for(;;) {
		var_1105_bool = !var_1061_bool; //@nz
		if(var_1105_bool == 0) goto Label_4005;
		@sync();
		var_1058_object->IsDialogEnd(var_1061_bool);
	}
	
Label_4005:
	object var_1106_object;
	var_1052_object = var_1106_object;
	func_5375();
	@StopDialog(var_1058_object);
	var_1058_object->GetReturnValue(-1);
	int var_1060_int = var_1051_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5984(void)
{
	@SetVariable("KnowGrif", 1);
}


void func_5990(void)
{
	object var_83_object;
	func_6393(var_83_object);
	object var_82_object;
	var_83_object = var_82_object;
	float var_94_float;
	func_5741(var_94_float);
	var_82_object->AddMark("d5q01GrifWantsMoney", "pt_map_grif", 1, 515350, var_94_float);
}
EMIT "Stack[-1] = 0";


void func_2918(bool var_0_bool, int var_861_int, object var_862_object)
{
	var_0_bool = var_862_object;
	bool var_872_bool; object var_873_object;
	object var_874_object;
	func_5652(var_874_object);
	var_874_object = var_873_object;
	func_5392(var_872_bool, var_873_object);
	bool var_875_bool; object var_876_object;
	var_862_object = var_876_object;
	func_5307(var_875_bool, var_876_object, 70.0);
	if(!var_875_bool) { //@nz
		var_861_int = -2;
		return 8;
	}
	object var_868_object;
	@CreateDialog(var_868_object);
	int var_879_int;
	func_5787(var_879_int);
	var_868_object->SetNPCName(var_879_int);
	int var_880_int;
	func_5785(var_880_int);
	var_868_object->SetNPCDescription(var_880_int);
	string var_881_string;
	func_5789(var_881_string);
	var_868_object->SetPhoto(var_881_string);
	string var_882_string;
	func_5791(var_882_string);
	var_868_object->SetPhoto2(var_882_string);
	int var_883_int;
	func_6571(var_883_int);
	var_868_object->SetPlayerName(var_883_int);
	bool var_869_bool;
	@IsOverrideActive(var_869_bool);
	if(var_869_bool != 0) {
		var_861_int = -2;
		return 8;
	}
	@DoDialog(var_868_object);
	object var_885_object; object var_886_object;
	var_862_object = var_885_object;
	var_868_object = var_886_object;
	TaskCall(15);
	func_2999(var_887_object, var_888_object, var_889_string, var_890_bool, var_885_object, var_886_object);
	TaskReturn();
	bool var_871_bool;
	var_868_object->IsDialogEnd(var_871_bool);
	
	for(;;) {
		var_983_bool = !var_871_bool; //@nz
		if(var_983_bool == 0) goto Label_2988;
		@sync();
		var_868_object->IsDialogEnd(var_871_bool);
	}
	
Label_2988:
	object var_984_object;
	var_862_object = var_984_object;
	func_5375();
	@StopDialog(var_868_object);
	var_868_object->GetReturnValue(-1);
	int var_870_int = var_861_int;
}
EMIT "Stack[-4] = 0";


void func_5487(bool var_260_bool, object var_261_object)
{
	bool var_269_bool; int var_270_int; string var_271_string;
	int var_273_int;
	func_5746(var_273_int);
	string var_267_string = ("d" + var_273_int) + "m";
	int var_268_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_261_object->HasProperty((var_267_string + (var_268_int + 1)), var_269_bool);
			if(!var_269_bool) { //@nz
			} else {
				var_268_int += 1;
			}
		}
		if(!var_268_int) { //@nz
			var_260_bool = false;
			return 10;
		}
		var_270_int = 0;
		if(var_268_int > 1)
			@irand(var_270_int, var_268_int);
		var_261_object->GetProperty((var_267_string + (var_270_int + 1)), var_271_string);
		bool var_287_bool; string var_288_string;
		var_271_string = var_288_string;
		func_5602(var_287_bool, var_288_string);
		var_287_bool = var_260_bool;
		return 10;

	}
}


// @pe
void func_6006(void)
{
	@SetVariable("d2KnowBigVladIsBad", 1);
}


// @pe
void func_6012(void)
{
	@SetVariable("ood5Grif2", 1);
}


// @pe
void func_6018(bool var_467_bool)
{
	int var_469_int;
	func_5673(var_469_int, "ood1Grif1");
	if(var_469_int == 0) {
		var_467_bool = true;
		return 0;
	}
	var_467_bool = false;
}


// @pe
void func_1928(object var_2_object, string var_782_string)
{
	bool var_783_bool;
	func_5793(var_783_bool);
	if(!var_783_bool) //@nz
		return 0;
	if(var_782_string == var_2_object)
		return 0;
	string var_786_string; bool var_787_bool;
	var_782_string = var_786_string;
	if(var_782_string == "")
		var_787_bool = false;
	else
		var_787_bool = true;
	func_5596(var_786_string, var_787_bool);
	var_2_object = var_782_string;
	
}


// @pe
void func_6030(bool var_495_bool)
{
	int var_497_int;
	func_5673(var_497_int, "ood1Grif2");
	if(var_497_int == 0) {
		var_495_bool = true;
		return 0;
	}
	var_495_bool = false;
}


// @pe
void func_912(object var_2_object, string var_379_string)
{
	bool var_380_bool;
	func_5793(var_380_bool);
	if(!var_380_bool) //@nz
		return 0;
	if(var_379_string == var_2_object)
		return 0;
	string var_383_string; bool var_384_bool;
	var_379_string = var_383_string;
	if(var_379_string == "")
		var_384_bool = false;
	else
		var_384_bool = true;
	func_5596(var_383_string, var_384_bool);
	var_2_object = var_379_string;
	
}


// @pe
void func_4496(object var_2_object, string var_1265_string)
{
	bool var_1266_bool;
	func_5793(var_1266_bool);
	if(!var_1266_bool) //@nz
		return 0;
	if(var_1265_string == var_2_object)
		return 0;
	string var_1269_string; bool var_1270_bool;
	var_1265_string = var_1269_string;
	if(var_1265_string == "")
		var_1270_bool = false;
	else
		var_1270_bool = true;
	func_5596(var_1269_string, var_1270_bool);
	var_2_object = var_1265_string;
	
}


void func_5010(bool var_0_bool)
{
	bool var_69_bool;
	func_5302(var_69_bool);
	if(!var_69_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_5138();
	@GetDirection(var_0_bool);
	
	for(;;) {
		func_5192();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_6042(bool var_701_bool)
{
	int var_703_int;
	func_5673(var_703_int, "ood3Grif1");
	if(var_703_int == 0) {
		var_701_bool = true;
		return 0;
	}
	var_701_bool = false;
}


// @pe
void func_5530(bool var_522_bool, object var_523_object)
{
	object var_525_object;
	var_523_object = var_525_object;
	bool var_524_bool;
	func_5538(var_524_bool, var_525_object, (float)70);
	var_524_bool = var_522_bool;
}


void func_5538(bool var_524_bool, object var_525_object, float var_526_float)
{
	cvector var_536_cvector;
	var_525_object->GetPosition(var_536_cvector);
	float var_535_float;
	var_525_object->GetEyesHeight(var_535_float);
	var_543_float = GetByIndex(var_536_cvector, 1);
	SetByIndex(var_536_cvector, 1) = (var_543_float + var_535_float);
	cvector var_537_cvector;
	@GetPosition(var_537_cvector);
	@GetEyesHeight(var_535_float);
	var_544_float = GetByIndex(var_537_cvector, 1);
	SetByIndex(var_537_cvector, 1) = (var_544_float + var_535_float);
	cvector var_538_cvector = var_536_cvector - var_537_cvector;
	var_545_float = GetByIndex(var_538_cvector, 1);
	SetByIndex(var_538_cvector, 1) = (float)0;
	var_547_float = sqrt(var_538_cvector | var_538_cvector);
	var_538_cvector /= var_547_float;
	cvector var_539_cvector = -var_538_cvector;
	cvector var_540_cvector = (var_538_cvector * var_526_float) - [0.0, 10.0, 0.0];
	bool var_542_bool;
	@IsOverrideActive(var_542_bool);
	if(var_542_bool != 0)
		var_524_bool = false;
	@StopWorld();
	@CameraTransit((var_537_cvector + var_540_cvector), var_539_cvector);
	var_551_float = GetByIndex(var_540_cvector, 0);
	var_552_float = GetByIndex(var_540_cvector, 2);
	@Rotate(var_551_float, var_552_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_524_bool = true;
}


// @pe
void func_6054(bool var_830_bool)
{
	int var_832_int;
	func_5673(var_832_int, "ood4Grif3");
	if(var_832_int == 0) {
		var_830_bool = true;
		return 0;
	}
	var_830_bool = false;
}


void func_5030(bool var_92_bool)
{
	object var_94_object;
	@FindActor(var_94_object, "player");
	if(!var_94_object) //@nz
		var_92_bool = false;
	bool var_97_bool; object var_98_object;
	var_94_object = var_98_object;
	func_5293(var_97_bool, var_98_object);
	var_97_bool = var_92_bool;
}
EMIT "Stack[-1] = 0";


void func_6566(int var_102_int, string var_103_string)
{
	int var_105_int;
	@GetInvItemByName(var_105_int, var_103_string);
	var_105_int = var_102_int;
}


void func_6571(int var_359_int)
{
	int var_361_int;
	@GetVariable("branch", var_361_int);
	if(var_361_int == 0) {
		var_359_int = 1;
		return 2;
	EMIT "GOTO 0x19ba";
	}
	if(var_361_int == 1) {
		var_359_int = 2;
		return 2;
	}
	var_359_int = 3;
}


// @pe
void func_4016(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1075_object, object var_1076_object)
{
	var_0_bool = var_1076_object;
	var_1_object = var_1075_object;
	var_3_object = false;
	if(1 != 0) {
		func_4074(var_1076_object, "Neutral");
		var_0_bool->SetMessage(514126); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514127, -1, 15341); //@t
		var_0_bool->AddReply(514128, -1, 15342); //@t
		goto Label_4044;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xfb4";
	}
Label_4044:
	bool var_1097_bool;
	func_5793(var_1097_bool);
	if(var_1097_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5589(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4073;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4073:
		return 0;

	}
	
}


// @pe
void func_6066(bool var_839_bool)
{
	int var_841_int;
	func_5673(var_841_int, "ood4Grif4");
	if(var_841_int == 0) {
		var_839_bool = true;
		return 0;
	}
	var_839_bool = false;
}


void func_5045(bool var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0);
	var_145_float = GetByIndex(var_0_bool, 2);
	@RotateAsync(var_144_float, var_145_float);
}


// @pe
void func_2999(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_885_object, object var_886_object)
{
	var_0_bool = var_886_object;
	var_1_object = var_885_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_892_bool = false;
		bool var_893_bool;
		func_6232(var_1_object);
		if(var_893_bool != 0) {
			bool var_899_bool;
			func_6256(var_1_object);
			if(var_899_bool != 0)
				var_892_bool = true;
		}
		if(var_892_bool != 0) {
			object var_905_object; object var_906_object;
			var_905_object = var_1_object;
			var_906_object = var_0_bool;
			func_6012();
			func_3154(var_886_object, "Neutral");
			var_0_bool->SetMessage(511720); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(511721, 12928, 12927); //@t
			var_0_bool->AddReply(515755, 12928, 16821); //@t
		} else {
					func_3154(var_886_object, "Neutral");
					var_0_bool->SetMessage(511704); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_934_bool = false;
					bool var_935_bool;
					func_6186(var_1_object);
					if(var_935_bool != 0) {
						bool var_941_bool;
						func_6198(var_1_object);
						if(var_941_bool != 0)
							var_934_bool = true;
					}
					if(var_934_bool != 0)
						var_0_bool->AddReply(511705, 12910, 12909); //@t
					bool var_950_bool = false;
					bool var_951_bool = false;
					bool var_952_bool = false;
					bool var_953_bool;
					func_6186(var_1_object);
					if(var_953_bool != 0) {
						bool var_955_bool;
						func_6220(var_1_object);
						if(!var_955_bool) //@nz
							var_952_bool = true;
					}
					if(var_952_bool != 0) {
						bool var_962_bool;
						func_6198(var_1_object);
						if(!var_962_bool) //@nz
							var_951_bool = true;
					}
					if(var_951_bool != 0) {
						bool var_965_bool;
						func_6210(var_965_bool, var_1_object);
						if(var_965_bool != 0)
							var_950_bool = true;
					}
					if(var_950_bool != 0)
						var_0_bool->AddReply(511734, 16834, 12940); //@t
					var_0_bool->AddReply(514120, -1, 15334); //@t
					var_0_bool->AddReply(511739, -1, 12945); //@t
		}
	}
	for(;;) {
		bool var_924_bool;
		func_5793(var_924_bool);
		if(var_924_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5589(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3153;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3153:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xbbb";


void func_5050(bool var_75_bool)
{
	object var_78_object;
	@FindActor(var_78_object, "player");
	if(!var_78_object) { //@nz
		var_75_bool = false;
		return 4;
	}
	float var_82_float; object var_83_object;
	func_5268(var_82_float, var_83_object);
	if(var_82_float > 90000.0) {
		var_75_bool = false;
		return 4;
	}
	bool var_79_bool;
	@CanSee(var_79_bool, var_83_object);
	var_79_bool = var_75_bool;
}
EMIT "Stack[-2] = 0";


void func_6588(int var_189_int)
{
	int var_191_int;
	@GetVariable("branch", var_191_int);
	var_191_int = var_189_int;
}


// @pe
void func_6078(bool var_603_bool)
{
	int var_605_int;
	func_5673(var_605_int, "ood2Grif2");
	if(var_605_int == 0) {
		var_603_bool = true;
		return 0;
	}
	var_603_bool = false;
}


// @pe
void func_6594(object var_521_object)
{
	object var_523_object;
	var_521_object = var_523_object;
	bool var_522_bool;
	func_5530(var_522_bool, var_523_object);
	if(!var_522_bool) { //@nz
	}
	object var_554_object;
	var_521_object = var_554_object;
	TaskCall(1);
	func_13(var_554_object);
	TaskReturn();
	object var_558_object;
	var_521_object = var_558_object;
	func_5585();
}


// @pe
void func_6090(bool var_618_bool)
{
	int var_620_int;
	func_5673(var_620_int, "ood2Grif3");
	if(var_620_int == 0) {
		var_618_bool = true;
		return 0;
	}
	var_618_bool = false;
}


void func_5072(void)
{
	float var_83_float;
	@rand(var_83_float, 8, 16);
	@SetTimer(10, var_83_float);
}


// @pe
void func_5585(void)
{
	@CameraSwitchToNormal();
}


void func_5589(string var_76_string)
{
	float var_79_float; float var_80_float;
	@lshGetAnimTimes(var_76_string, var_79_float, var_80_float);
	@lshPlayAnimation(var_79_float, var_80_float, false);
}


// @pe
void func_6102(bool var_627_bool)
{
	int var_629_int;
	func_5673(var_629_int, "ood2Grif4");
	if(var_629_int == 0) {
		var_627_bool = true;
		return 0;
	}
	var_627_bool = false;
}


// @pe
void func_6613(object var_85_object, object var_429_object, object var_564_object, object var_662_object, object var_740_object, object var_863_object, object var_992_object, object var_1053_object, object var_1114_object, object var_1175_object, object var_1236_object, object var_1297_object)
{
	var_86_int = GlobalVars[2];
	int var_87_int;
	func_5746(var_87_int);
	if(var_86_int != var_87_int) {
		func_6410();
		var_203_int = GlobalVars[2];
		int var_204_int;
		func_5746(var_204_int);
		var_204_int = var_203_int;
		GlobalVars[2] = var_203_int;
	}
	var_205_bool = GlobalVars[1];
	if(!var_205_bool) { //@nz
		int var_207_int; object var_208_object;
		var_85_object = var_208_object;
		TaskCall(6);
		func_763(var_209_object, var_207_int, var_208_object);
		TaskReturn();
		var_422_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_423_bool;
	func_5755(var_423_bool, 1);
	if(var_423_bool != 0) {
		int var_427_int; object var_428_object;
		var_85_object = var_428_object;
		TaskCall(2);
		func_35(var_429_object, var_427_int, var_428_object);
		TaskReturn();
		if(1000 == var_429_object) {
			object var_521_object;
			var_85_object = var_521_object;
			func_6594(var_521_object);
		}
		return 0;
	}
	bool var_559_bool;
	func_5755(var_559_bool, 2);
	if(var_559_bool != 0) {
		int var_562_int; object var_563_object;
		var_85_object = var_563_object;
		TaskCall(8);
		func_1078(var_564_object, var_562_int, var_563_object);
		TaskReturn();
		if(1000 == var_564_object) {
			object var_656_object;
			var_85_object = var_656_object;
			func_6594(var_656_object);
		}
		return 0;
	}
	bool var_657_bool;
	func_5755(var_657_bool, 3);
	if(var_657_bool != 0) {
		int var_660_int; object var_661_object;
		var_85_object = var_661_object;
		TaskCall(12);
		func_2536(var_662_object, var_660_int, var_661_object);
		TaskReturn();
		if(1000 == var_662_object) {
			object var_734_object;
			var_85_object = var_734_object;
			func_6594(var_734_object);
		}
		return 0;
	}
	bool var_735_bool;
	func_5755(var_735_bool, 4);
	if(var_735_bool != 0) {
		int var_738_int; object var_739_object;
		var_85_object = var_739_object;
		TaskCall(10);
		func_1707(var_740_object, var_738_int, var_739_object);
		TaskReturn();
		if(1000 == var_740_object) {
			object var_857_object;
			var_85_object = var_857_object;
			func_6594(var_857_object);
		}
		return 0;
	}
	bool var_858_bool;
	func_5755(var_858_bool, 5);
	if(var_858_bool != 0) {
		int var_861_int; object var_862_object;
		var_85_object = var_862_object;
		TaskCall(14);
		func_2918(var_863_object, var_861_int, var_862_object);
		TaskReturn();
		if(1000 == var_863_object) {
			object var_986_object;
			var_85_object = var_986_object;
			func_6594(var_986_object);
		}
		return 0;
	}
	bool var_987_bool;
	func_5755(var_987_bool, 6);
	if(var_987_bool != 0) {
		int var_990_int; object var_991_object;
		var_85_object = var_991_object;
		TaskCall(16);
		func_3724(var_992_object, var_990_int, var_991_object);
		TaskReturn();
		if(1000 == var_992_object) {
			object var_1047_object;
			var_85_object = var_1047_object;
			func_6594(var_1047_object);
		}
		return 0;
	}
	bool var_1048_bool;
	func_5755(var_1048_bool, 7);
	if(var_1048_bool != 0) {
		int var_1051_int; object var_1052_object;
		var_85_object = var_1052_object;
		TaskCall(18);
		func_3935(var_1053_object, var_1051_int, var_1052_object);
		TaskReturn();
		if(1000 == var_1053_object) {
			object var_1108_object;
			var_85_object = var_1108_object;
			func_6594(var_1108_object);
		}
		return 0;
	}
	bool var_1109_bool;
	func_5755(var_1109_bool, 8);
	if(var_1109_bool != 0) {
		int var_1112_int; object var_1113_object;
		var_85_object = var_1113_object;
		TaskCall(20);
		func_4146(var_1114_object, var_1112_int, var_1113_object);
		TaskReturn();
		if(1000 == var_1114_object) {
			object var_1169_object;
			var_85_object = var_1169_object;
			func_6594(var_1169_object);
		}
		return 0;
	}
	bool var_1170_bool;
	func_5755(var_1170_bool, 9);
	if(var_1170_bool != 0) {
		int var_1173_int; object var_1174_object;
		var_85_object = var_1174_object;
		TaskCall(24);
		func_4568(var_1175_object, var_1173_int, var_1174_object);
		TaskReturn();
		if(1000 == var_1175_object) {
			object var_1230_object;
			var_85_object = var_1230_object;
			func_6594(var_1230_object);
		}
		return 0;
	}
	bool var_1231_bool;
	func_5755(var_1231_bool, 10);
	if(var_1231_bool != 0) {
		int var_1234_int; object var_1235_object;
		var_85_object = var_1235_object;
		TaskCall(22);
		func_4357(var_1236_object, var_1234_int, var_1235_object);
		TaskReturn();
		if(1000 == var_1236_object) {
			object var_1291_object;
			var_85_object = var_1291_object;
			func_6594(var_1291_object);
		}
		return 0;
	}
	bool var_1292_bool;
	func_5755(var_1292_bool, 11);
	if(var_1292_bool != 0) {
		int var_1295_int; object var_1296_object;
		var_85_object = var_1296_object;
		TaskCall(26);
		func_4779(var_1297_object, var_1295_int, var_1296_object);
		TaskReturn();
		if(1000 == var_1297_object) {
			object var_1355_object;
			var_85_object = var_1355_object;
			func_6594(var_1355_object);
		}
		return 0;
	}
	bool var_1356_bool;
	func_5755(var_1356_bool, 12);
	if(var_1356_bool != 0) {
		int var_1358_int; object var_1359_object;
		var_85_object = var_1359_object;
		TaskCall(4);
		func_504(var_1360_object, var_1358_int, var_1359_object);
		TaskReturn();
		return 0;
	}
}


void func_4568(bool var_0_bool, int var_1173_int, object var_1174_object)
{
	var_0_bool = var_1174_object;
	bool var_1184_bool; object var_1185_object;
	object var_1186_object;
	func_5652(var_1186_object);
	var_1186_object = var_1185_object;
	func_5392(var_1184_bool, var_1185_object);
	bool var_1187_bool; object var_1188_object;
	var_1174_object = var_1188_object;
	func_5307(var_1187_bool, var_1188_object, 70.0);
	if(!var_1187_bool) { //@nz
		var_1173_int = -2;
		return 8;
	}
	object var_1180_object;
	@CreateDialog(var_1180_object);
	int var_1191_int;
	func_5787(var_1191_int);
	var_1180_object->SetNPCName(var_1191_int);
	int var_1192_int;
	func_5785(var_1192_int);
	var_1180_object->SetNPCDescription(var_1192_int);
	string var_1193_string;
	func_5789(var_1193_string);
	var_1180_object->SetPhoto(var_1193_string);
	string var_1194_string;
	func_5791(var_1194_string);
	var_1180_object->SetPhoto2(var_1194_string);
	int var_1195_int;
	func_6571(var_1195_int);
	var_1180_object->SetPlayerName(var_1195_int);
	bool var_1181_bool;
	@IsOverrideActive(var_1181_bool);
	if(var_1181_bool != 0) {
		var_1173_int = -2;
		return 8;
	}
	@DoDialog(var_1180_object);
	object var_1197_object; object var_1198_object;
	var_1174_object = var_1197_object;
	var_1180_object = var_1198_object;
	TaskCall(25);
	func_4649(var_1199_object, var_1200_object, var_1201_string, var_1202_bool, var_1197_object, var_1198_object);
	TaskReturn();
	bool var_1183_bool;
	var_1180_object->IsDialogEnd(var_1183_bool);
	
	for(;;) {
		var_1227_bool = !var_1183_bool; //@nz
		if(var_1227_bool == 0) goto Label_4638;
		@sync();
		var_1180_object->IsDialogEnd(var_1183_bool);
	}
	
Label_4638:
	object var_1228_object;
	var_1174_object = var_1228_object;
	func_5375();
	@StopDialog(var_1180_object);
	var_1180_object->GetReturnValue(-1);
	int var_1182_int = var_1173_int;
}
EMIT "Stack[-4] = 0";


void func_5081(void)
{
	@KillTimer(10);
}


void func_5596(string var_383_string, bool var_384_bool)
{
	float var_389_float; float var_390_float;
	@lshGetAnimTimes(var_383_string, var_389_float, var_390_float);
	@lshPlayAnimation(var_389_float, var_390_float, var_384_bool);
}


// @pe
void func_6114(bool var_609_bool)
{
	int var_611_int;
	func_5673(var_611_int, "d2q02");
	if(var_611_int == 6)
		var_609_bool = true;
	var_609_bool = false;
}


void func_5602(bool var_252_bool, string var_253_string)
{
	bool var_255_bool;
	bool var_256_bool;
	func_5793(var_256_bool);
	if(var_256_bool != 0) {
		@lshHasSpeech(var_255_bool, var_253_string);
		if(var_255_bool != 0) {
			@lshPlaySpeech(var_253_string);
			var_252_bool = true;
		}
	}
	var_252_bool = false;
}


void func_2536(bool var_0_bool, int var_660_int, object var_661_object)
{
	var_0_bool = var_661_object;
	bool var_671_bool; object var_672_object;
	object var_673_object;
	func_5652(var_673_object);
	var_673_object = var_672_object;
	func_5392(var_671_bool, var_672_object);
	bool var_674_bool; object var_675_object;
	var_661_object = var_675_object;
	func_5307(var_674_bool, var_675_object, 70.0);
	if(!var_674_bool) { //@nz
		var_660_int = -2;
		return 8;
	}
	object var_667_object;
	@CreateDialog(var_667_object);
	int var_678_int;
	func_5787(var_678_int);
	var_667_object->SetNPCName(var_678_int);
	int var_679_int;
	func_5785(var_679_int);
	var_667_object->SetNPCDescription(var_679_int);
	string var_680_string;
	func_5789(var_680_string);
	var_667_object->SetPhoto(var_680_string);
	string var_681_string;
	func_5791(var_681_string);
	var_667_object->SetPhoto2(var_681_string);
	int var_682_int;
	func_6571(var_682_int);
	var_667_object->SetPlayerName(var_682_int);
	bool var_668_bool;
	@IsOverrideActive(var_668_bool);
	if(var_668_bool != 0) {
		var_660_int = -2;
		return 8;
	}
	@DoDialog(var_667_object);
	object var_684_object; object var_685_object;
	var_661_object = var_684_object;
	var_667_object = var_685_object;
	TaskCall(13);
	func_2617(var_686_object, var_687_object, var_688_string, var_689_bool, var_684_object, var_685_object);
	TaskReturn();
	bool var_670_bool;
	var_667_object->IsDialogEnd(var_670_bool);
	
	for(;;) {
		var_731_bool = !var_670_bool; //@nz
		if(var_731_bool == 0) goto Label_2606;
		@sync();
		var_667_object->IsDialogEnd(var_670_bool);
	}
	
Label_2606:
	object var_732_object;
	var_661_object = var_732_object;
	func_5375();
	@StopDialog(var_667_object);
	var_667_object->GetReturnValue(-1);
	int var_669_int = var_660_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4074(object var_2_object, string var_1082_string)
{
	bool var_1083_bool;
	func_5793(var_1083_bool);
	if(!var_1083_bool) //@nz
		return 0;
	if(var_1082_string == var_2_object)
		return 0;
	string var_1086_string; bool var_1087_bool;
	var_1082_string = var_1086_string;
	if(var_1082_string == "")
		var_1087_bool = false;
	else
		var_1087_bool = true;
	func_5596(var_1086_string, var_1087_bool);
	var_2_object = var_1082_string;
	
}


// @pe
void func_6126(bool var_707_bool)
{
	int var_709_int;
	func_5673(var_709_int, "d3q01");
	if(var_709_int == 0) {
		var_707_bool = true;
		return 0;
	}
	var_707_bool = false;
}


void func_5617(void)
{
	bool var_70_bool;
	func_5793(var_70_bool);
	if(var_70_bool != 0)
		@lshStopSpeech();
}


void func_504(bool var_0_bool, int var_1358_int, object var_1359_object)
{
	var_0_bool = var_1359_object;
	bool var_1369_bool; object var_1370_object;
	object var_1371_object;
	func_5652(var_1371_object);
	var_1371_object = var_1370_object;
	func_5392(var_1369_bool, var_1370_object);
	bool var_1372_bool; object var_1373_object;
	var_1359_object = var_1373_object;
	func_5307(var_1372_bool, var_1373_object, 70.0);
	if(!var_1372_bool) { //@nz
		var_1358_int = -2;
		return 8;
	}
	object var_1365_object;
	@CreateDialog(var_1365_object);
	int var_1376_int;
	func_5787(var_1376_int);
	var_1365_object->SetNPCName(var_1376_int);
	int var_1377_int;
	func_5785(var_1377_int);
	var_1365_object->SetNPCDescription(var_1377_int);
	string var_1378_string;
	func_5789(var_1378_string);
	var_1365_object->SetPhoto(var_1378_string);
	string var_1379_string;
	func_5791(var_1379_string);
	var_1365_object->SetPhoto2(var_1379_string);
	int var_1380_int;
	func_6571(var_1380_int);
	var_1365_object->SetPlayerName(var_1380_int);
	bool var_1366_bool;
	@IsOverrideActive(var_1366_bool);
	if(var_1366_bool != 0) {
		var_1358_int = -2;
		return 8;
	}
	@DoDialog(var_1365_object);
	object var_1382_object; object var_1383_object;
	var_1359_object = var_1382_object;
	var_1365_object = var_1383_object;
	TaskCall(5);
	func_585(var_1384_object, var_1385_object, var_1386_string, var_1387_bool, var_1382_object, var_1383_object);
	TaskReturn();
	bool var_1368_bool;
	var_1365_object->IsDialogEnd(var_1368_bool);
	
	for(;;) {
		var_1415_bool = !var_1368_bool; //@nz
		if(var_1415_bool == 0) goto Label_574;
		@sync();
		var_1365_object->IsDialogEnd(var_1368_bool);
	}
	
Label_574:
	object var_1416_object;
	var_1359_object = var_1416_object;
	func_5375();
	@StopDialog(var_1365_object);
	var_1365_object->GetReturnValue(-1);
	int var_1367_int = var_1358_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6138(bool var_770_bool)
{
	int var_772_int;
	func_5673(var_772_int, "d4q03");
	if(var_772_int == 1)
		var_770_bool = true;
	var_770_bool = false;
}


