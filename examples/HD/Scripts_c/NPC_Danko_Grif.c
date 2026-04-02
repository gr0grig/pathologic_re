// @GLOBALS: 0:object:,1:bool:,2:int:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		@lshStopAnimation();
		@StopTrade();
		var_0_bool = true;
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_67_bool == 444) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5936();
				func_171(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500383); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500384, 448, 445); //@t
				var_0_bool->AddReply(500385, 449, 446); //@t
				var_0_bool->AddReply(500386, 450, 447); //@t
				return 0;
			}
			if(var_67_bool == 450) {
				func_171(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500389); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500395, 454, 459); //@t
				var_0_bool->AddReply(500396, 454, 460); //@t
				return 0;
			}
			if(var_67_bool == 449) {
				func_171(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500388); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500394, 454, 456); //@t
				var_0_bool->AddReply(500392, 454, 453); //@t
				return 0;
			}
			if(var_67_bool == 448) {
				func_171(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500387); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500390, 454, 451); //@t
				var_0_bool->AddReply(500391, 454, 452); //@t
				return 0;
			}
			if(var_67_bool == 454) {
				func_171(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(500393); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500397, -1, 463); //@t
				var_0_bool->AddReply(500398, -1, 464); //@t
				return 0;
			}
			var_3_object = true;
			bool var_144_bool;
			func_5745(var_144_bool);
			if(var_144_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc2";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 7671) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5820();
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_5838();
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_bool;
				func_5763();
				object var_108_object = var_1_object;
				func_5769(var_0_bool);
				object var_132_object = var_1_object;
				func_5847(var_0_bool);
			}
			if(var_68_cvector == 8069) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_bool;
				func_5826();
			}
			if(var_68_cvector == 8087) {
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_bool;
				func_5958();
			}
			if(var_68_cvector == 8054) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_bool;
				func_5832();
			}
			if(var_68_cvector == 8055) {
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_bool;
				func_5832();
			}
			if(var_68_cvector == 8060) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_bool;
				func_5832();
			}
			if(var_68_cvector == 8061) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_bool;
				func_5832();
			}
			if(var_68_cvector == 37903) {
				object var_175_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 7666) {
				func_520(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(506959); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_198_bool = false;
				bool var_199_bool;
				func_6030(var_1_object);
				if(var_199_bool != 0) {
					bool var_207_bool;
					func_6066(var_1_object);
					if(var_207_bool != 0)
						var_198_bool = true;
				}
				if(var_198_bool != 0)
					var_0_bool->AddReply(507328, 8080, 8079); //@t
				bool var_216_bool;
				func_6042(var_1_object);
				if(var_216_bool != 0)
					var_0_bool->AddReply(507319, 8070, 8069); //@t
				bool var_225_bool;
				func_6054(var_1_object);
				if(var_225_bool != 0)
					var_0_bool->AddReply(507335, 8049, 8087); //@t
				var_0_bool->AddReply(536144, -1, 37903); //@t
				var_0_bool->AddReply(507530, -1, 8312); //@t
				var_0_bool->AddReply(533848, -1, 35398); //@t
				return 0;
			}
			if(var_67_bool == 8049) {
				func_520(var_68_cvector, "Anger");
				var_0_bool->SetMessage(507300); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507301, 8051, 8050); //@t
				var_0_bool->AddReply(507313, 8053, 8062); //@t
				return 0;
			}
			if(var_67_bool == 8051) {
				func_520(var_68_cvector, "Smile");
				var_0_bool->SetMessage(507302); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507303, 8053, 8052); //@t
				var_0_bool->AddReply(507307, 8057, 8056); //@t
				return 0;
			}
			if(var_67_bool == 8057) {
				func_520(var_68_cvector, "Smile");
				var_0_bool->SetMessage(507308); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507309, 8059, 8058); //@t
				return 0;
			}
			if(var_67_bool == 8059) {
				func_520(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507310); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507311, -1, 8060); //@t
				var_0_bool->AddReply(507312, -1, 8061); //@t
				return 0;
			}
			if(var_67_bool == 8053) {
				func_520(var_68_cvector, "Anger");
				var_0_bool->SetMessage(507304); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507305, -1, 8054); //@t
				var_0_bool->AddReply(507306, -1, 8055); //@t
				return 0;
			}
			if(var_67_bool == 8070) {
				func_520(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507320); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506965, 7673, 7672); //@t
				return 0;
			}
			if(var_67_bool == 7673) {
				func_520(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(506966); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506967, 8088, 7674); //@t
				var_0_bool->AddReply(507343, 8088, 8095); //@t
				return 0;
			}
			if(var_67_bool == 8088) {
				func_520(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507336); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507337, 8090, 8089); //@t
				return 0;
			}
			if(var_67_bool == 8090) {
				func_520(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(507338); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507342, -1, 8094); //@t
				var_0_bool->AddReply(507341, -1, 8093); //@t
				return 0;
			}
			if(var_67_bool == 8080) {
				func_520(var_68_cvector, "Sly");
				var_0_bool->SetMessage(507329); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507330, 8082, 8081); //@t
				return 0;
			}
			if(var_67_bool == 8082) {
				func_520(var_68_cvector, "Sly");
				var_0_bool->SetMessage(507331); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507332, 7670, 8083); //@t
				return 0;
			}
			if(var_67_bool == 7670) {
				func_520(var_68_cvector, "Smile");
				var_0_bool->SetMessage(506963); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506964, -1, 7671); //@t
				return 0;
			}
			var_3_object = true;
			bool var_345_bool;
			func_5745(var_345_bool);
			if(var_345_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x21f";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 12126) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5868();
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_5874();
			}
			if(var_68_cvector == 12127) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_bool;
				func_5868();
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_bool;
				func_5874();
			}
			if(var_68_cvector == 12118) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_bool;
				func_5868();
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_bool;
				func_5874();
			}
			if(var_68_cvector == 12137) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_bool;
				func_5906();
				object var_143_object = var_1_object;
				func_5747(var_0_bool);
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_bool;
				func_5757();
			}
			if(var_68_cvector == 12138) {
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_bool;
				func_5906();
				object var_172_object = var_1_object;
				func_5747(var_0_bool);
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_bool;
				func_5757();
			}
			if(var_68_cvector == 12107) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_bool;
				func_5808();
			}
			if(var_68_cvector == 10608) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_bool;
				func_5814();
			}
			if(var_68_cvector == 15333) {
				object var_190_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 12111) {
				bool var_195_bool = false;
				bool var_196_bool;
				func_6090(var_1_object);
				if(var_196_bool != 0) {
					bool var_204_bool;
					func_6102(var_1_object);
					if(var_204_bool != 0)
						var_195_bool = true;
				}
				if(var_195_bool != 0) {
					func_1179(var_68_cvector, "Smile");
					var_0_bool->SetMessage(510952); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(510953, 12113, 12112); //@t
					var_0_bool->AddReply(510960, 12113, 12119); //@t
					return 0;
				}
				func_1179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509615); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_236_bool = false;
				bool var_237_bool;
				func_6114(var_1_object);
				if(var_237_bool != 0) {
					bool var_243_bool;
					func_6126(var_1_object);
					if(var_243_bool != 0)
						var_236_bool = true;
				}
				if(var_236_bool != 0)
					var_0_bool->AddReply(510970, 12133, 12132); //@t
				bool var_252_bool = false;
				bool var_253_bool;
				func_6196(var_1_object);
				if(var_253_bool != 0) {
					bool var_259_bool;
					func_6006(var_1_object);
					if(var_259_bool != 0)
						var_252_bool = true;
				}
				if(var_252_bool != 0)
					var_0_bool->AddReply(510948, 12108, 12107); //@t
				bool var_268_bool;
				func_6018(var_1_object);
				if(var_268_bool != 0)
					var_0_bool->AddReply(509640, 10581, 10608); //@t
				var_0_bool->AddReply(514119, -1, 15333); //@t
				var_0_bool->AddReply(509616, -1, 10580); //@t
				return 0;
			}
			if(var_67_bool == 10581) {
				func_1179(var_68_cvector, "Fear");
				var_0_bool->SetMessage(509617); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509636, 10604, 10603); //@t
				return 0;
			}
			if(var_67_bool == 10604) {
				func_1179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509637); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509638, -1, 10605); //@t
				return 0;
			}
			if(var_67_bool == 12108) {
				func_1179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510949); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510950, 12110, 12109); //@t
				var_0_bool->AddReply(510969, 10583, 12130); //@t
				return 0;
			}
			if(var_67_bool == 12110) {
				func_1179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510951); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509618, 10583, 10582); //@t
				var_0_bool->AddReply(510967, -1, 12128); //@t
				var_0_bool->AddReply(510972, -1, 12134); //@t
				return 0;
			}
			if(var_67_bool == 10583) {
				func_1179(var_68_cvector, "Sly");
				var_0_bool->SetMessage(509619); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509620, 10585, 10584); //@t
				var_0_bool->AddReply(509635, 10585, 10601); //@t
				return 0;
			}
			if(var_67_bool == 10585) {
				func_1179(var_68_cvector, "Sly");
				var_0_bool->SetMessage(509621); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509623, 10588, 10587); //@t
				var_0_bool->AddReply(509634, 10595, 10599); //@t
				var_0_bool->AddReply(509622, -1, 10586); //@t
				return 0;
			}
			if(var_67_bool == 10588) {
				func_1179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509624); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509625, -1, 10589); //@t
				var_0_bool->AddReply(509626, 10591, 10590); //@t
				var_0_bool->AddReply(509630, 10595, 10594); //@t
				return 0;
			}
			if(var_67_bool == 10595) {
				func_1179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509631); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509632, -1, 10596); //@t
				var_0_bool->AddReply(509633, 10591, 10597); //@t
				return 0;
			}
			if(var_67_bool == 10591) {
				func_1179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509627); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509628, -1, 10592); //@t
				var_0_bool->AddReply(509629, -1, 10593); //@t
				return 0;
			}
			if(var_67_bool == 12133) {
				func_1179(var_68_cvector, "Smile");
				var_0_bool->SetMessage(510971); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510973, 12136, 12135); //@t
				var_0_bool->AddReply(533046, 12136, 34556); //@t
				return 0;
			}
			if(var_67_bool == 12136) {
				func_1179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510974); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510975, -1, 12137); //@t
				var_0_bool->AddReply(510976, -1, 12138); //@t
				return 0;
			}
			if(var_67_bool == 12113) {
				func_1179(var_68_cvector, "Smile");
				var_0_bool->SetMessage(510954); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510955, 12115, 12114); //@t
				var_0_bool->AddReply(510961, 34554, 12121); //@t
				return 0;
			}
			if(var_67_bool == 34554) {
				func_1179(var_68_cvector, "Anger");
				var_0_bool->SetMessage(533044); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533045, 12117, 34555); //@t
				return 0;
			}
			if(var_67_bool == 12115) {
				func_1179(var_68_cvector, "Anger");
				var_0_bool->SetMessage(510956); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510957, 12117, 12116); //@t
				return 0;
			}
			if(var_67_bool == 12117) {
				func_1179(var_68_cvector, "Smile");
				var_0_bool->SetMessage(510958); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510963, 12125, 12124); //@t
				var_0_bool->AddReply(510959, -1, 12118); //@t
				return 0;
			}
			if(var_67_bool == 12125) {
				func_1179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(510964); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510965, -1, 12126); //@t
				var_0_bool->AddReply(510966, -1, 12127); //@t
				return 0;
			}
			var_3_object = true;
			bool var_440_bool;
			func_5745(var_440_bool);
			if(var_440_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4b2";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 10847) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5802();
			}
			if(var_68_cvector == 15331) {
				object var_79_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 10842) {
				func_1946(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509843); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_102_bool = false;
				bool var_103_bool;
				func_5994(var_1_object);
				if(var_103_bool != 0) {
					bool var_111_bool;
					func_6078(var_1_object);
					if(!var_111_bool) //@nz
						var_102_bool = true;
				}
				if(var_102_bool != 0)
					var_0_bool->AddReply(509848, 10848, 10847); //@t
				var_0_bool->AddReply(514117, -1, 15331); //@t
				var_0_bool->AddReply(514118, -1, 15332); //@t
				return 0;
			}
			if(var_67_bool == 10848) {
				func_1946(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509849); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509850, 10850, 10849); //@t
				var_0_bool->AddReply(509856, 10852, 10855); //@t
				return 0;
			}
			if(var_67_bool == 10850) {
				func_1946(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(509851); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509852, 10852, 10851); //@t
				return 0;
			}
			if(var_67_bool == 10852) {
				func_1946(var_68_cvector, "Smile");
				var_0_bool->SetMessage(509853); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509854, -1, 10853); //@t
				var_0_bool->AddReply(509855, -1, 10854); //@t
				return 0;
			}
			var_3_object = true;
			bool var_154_bool;
			func_5745(var_154_bool);
			if(var_154_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7b1";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 12909) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5912();
			}
			if(var_68_cvector == 12936) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_5942();
			}
			if(var_68_cvector == 12939) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_bool;
				func_5942();
			}
			if(var_68_cvector == 16829) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_bool;
				func_5942();
			}
			if(var_68_cvector == 12925) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_bool;
				func_5942();
			}
			if(var_68_cvector == 12944) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_bool;
				func_5918();
				object var_140_object = var_1_object;
				func_5780(var_0_bool);
			}
			if(var_68_cvector == 15334) {
				object var_163_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 12926) {
				bool var_168_bool = false;
				bool var_169_bool;
				func_6184(var_1_object);
				if(var_169_bool != 0) {
					bool var_177_bool;
					func_6208(var_1_object);
					if(var_177_bool != 0)
						var_168_bool = true;
				}
				if(var_168_bool != 0) {
					object var_183_object; object var_184_object;
					var_183_object = var_1_object;
					var_184_object = var_0_bool;
					func_5964();
					func_2346(var_68_cvector, "Sly");
					var_0_bool->SetMessage(511720); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(511721, 12928, 12927); //@t
					var_0_bool->AddReply(515755, 12928, 16821); //@t
					return 0;
				}
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511704); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_213_bool = false;
				bool var_214_bool;
				func_6138(var_1_object);
				if(var_214_bool != 0) {
					bool var_220_bool;
					func_6150(var_1_object);
					if(var_220_bool != 0)
						var_213_bool = true;
				}
				if(var_213_bool != 0)
					var_0_bool->AddReply(511705, 12910, 12909); //@t
				bool var_229_bool = false;
				bool var_230_bool = false;
				bool var_231_bool = false;
				bool var_232_bool;
				func_6138(var_1_object);
				if(var_232_bool != 0) {
					bool var_234_bool;
					func_6172(var_1_object);
					if(!var_234_bool) //@nz
						var_231_bool = true;
				}
				if(var_231_bool != 0) {
					bool var_241_bool;
					func_6150(var_1_object);
					if(!var_241_bool) //@nz
						var_230_bool = true;
				}
				if(var_230_bool != 0) {
					bool var_244_bool;
					func_6162(var_244_bool, var_1_object);
					if(var_244_bool != 0)
						var_229_bool = true;
				}
				if(var_229_bool != 0)
					var_0_bool->AddReply(511734, 16834, 12940); //@t
				var_0_bool->AddReply(514120, -1, 15334); //@t
				var_0_bool->AddReply(511739, -1, 12945); //@t
				return 0;
			}
			if(var_67_bool == 16834) {
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(515765); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515766, 16836, 16835); //@t
				return 0;
			}
			if(var_67_bool == 16836) {
				func_2346(var_68_cvector, "Anger");
				var_0_bool->SetMessage(515767); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515768, 12941, 16837); //@t
				return 0;
			}
			if(var_67_bool == 12941) {
				func_2346(var_68_cvector, "Anger");
				var_0_bool->SetMessage(511735); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511736, 12943, 12942); //@t
				return 0;
			}
			if(var_67_bool == 12943) {
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511737); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511738, -1, 12944); //@t
				return 0;
			}
			if(var_67_bool == 12910) {
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511706); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511707, 12913, 12911); //@t
				var_0_bool->AddReply(511708, 12913, 12912); //@t
				return 0;
			}
			if(var_67_bool == 12913) {
				func_2346(var_68_cvector, "Smile");
				var_0_bool->SetMessage(511709); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511710, 12916, 12915); //@t
				var_0_bool->AddReply(511713, 12919, 12918); //@t
				return 0;
			}
			if(var_67_bool == 12919) {
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511714); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511715, 12916, 12920); //@t
				return 0;
			}
			if(var_67_bool == 12916) {
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511711); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511712, 12935, 12917); //@t
				var_0_bool->AddReply(511728, 12922, 12934); //@t
				return 0;
			}
			if(var_67_bool == 12922) {
				func_2346(var_68_cvector, "Anger");
				var_0_bool->SetMessage(511716); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511717, 12924, 12923); //@t
				return 0;
			}
			if(var_67_bool == 12924) {
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511718); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_338_bool;
				func_6162(var_338_bool, var_1_object);
				if(var_338_bool != 0)
					var_0_bool->AddReply(515760, 16834, 16829); //@t
				var_0_bool->AddReply(511719, -1, 12925); //@t
				return 0;
			}
			if(var_67_bool == 12935) {
				func_2346(var_68_cvector, "Anger");
				var_0_bool->SetMessage(511729); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511730, -1, 12936); //@t
				var_0_bool->AddReply(511731, 12938, 12937); //@t
				bool var_356_bool;
				func_6162(var_356_bool, var_1_object);
				if(var_356_bool != 0)
					var_0_bool->AddReply(512485, 16834, 13653); //@t
				return 0;
			}
			if(var_67_bool == 12938) {
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511732); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511733, -1, 12939); //@t
				return 0;
			}
			if(var_67_bool == 12928) {
				func_2346(var_68_cvector, "Sly");
				var_0_bool->SetMessage(511722); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511723, 12930, 12929); //@t
				var_0_bool->AddReply(515761, -1, 16830); //@t
				return 0;
			}
			if(var_67_bool == 12930) {
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511724); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511726, 12933, 12932); //@t
				var_0_bool->AddReply(511725, -1, 12931); //@t
				return 0;
			}
			if(var_67_bool == 12933) {
				func_2346(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(511727); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515757, 16826, 16825); //@t
				var_0_bool->AddReply(515763, -1, 16832); //@t
				return 0;
			}
			if(var_67_bool == 16826) {
				func_2346(var_68_cvector, "Sly");
				var_0_bool->SetMessage(515758); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515764, -1, 16833); //@t
				var_0_bool->AddReply(515762, -1, 16831); //@t
				return 0;
			}
			var_3_object = true;
			bool var_408_bool;
			func_5745(var_408_bool);
			if(var_408_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x941";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 15337) {
				object var_73_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 15336) {
				func_3055(var_68_cvector, "Fear");
				var_0_bool->SetMessage(514122); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514123, -1, 15337); //@t
				var_0_bool->AddReply(514124, -1, 15338); //@t
				return 0;
			}
			var_3_object = true;
			bool var_102_bool;
			func_5745(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc06";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 15341) {
				object var_73_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 15340) {
				func_3266(var_68_cvector, "Smile");
				var_0_bool->SetMessage(514126); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514127, -1, 15341); //@t
				var_0_bool->AddReply(514128, -1, 15342); //@t
				return 0;
			}
			var_3_object = true;
			bool var_102_bool;
			func_5745(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcd9";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 40647) {
				object var_73_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 40646) {
				func_3477(var_68_cvector, "Sly");
				var_0_bool->SetMessage(538735); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538736, -1, 40647); //@t
				var_0_bool->AddReply(538754, -1, 40666); //@t
				return 0;
			}
			var_3_object = true;
			bool var_102_bool;
			func_5745(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdac";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 15349) {
				object var_73_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 15348) {
				func_3688(var_68_cvector, "Anger");
				var_0_bool->SetMessage(514134); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514135, -1, 15349); //@t
				var_0_bool->AddReply(514136, -1, 15350); //@t
				return 0;
			}
			var_3_object = true;
			bool var_102_bool;
			func_5745(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe7f";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, int var_51_int, int var_52_int, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 15353) {
				object var_73_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 44045) {
				func_3899(var_68_cvector, "Sly");
				var_0_bool->SetMessage(541830); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514139, -1, 15353); //@t
				var_0_bool->AddReply(541833, -1, 44048); //@t
				return 0;
			}
			var_3_object = true;
			bool var_102_bool;
			func_5745(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf52";
	
	}

}


task task_21
{
}


task task_22
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, int var_56_int, int var_57_int, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 15401) {
				object var_73_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 15400) {
				func_4115(var_68_cvector, "Fear");
				var_0_bool->SetMessage(514186); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(514187, -1, 15401); //@t
				var_0_bool->AddReply(514188, -1, 15402); //@t
				var_0_bool->AddReply(539631, -1, 41577); //@t
				return 0;
			}
			var_3_object = true;
			bool var_105_bool;
			func_5745(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x102a";
	
	}

}


task task_23
{
}


task task_24
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, int var_61_int, int var_62_int, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_68_cvector == 35389) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5790();
			}
			if(var_68_cvector == 35396) {
				object var_79_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_68_cvector == 35397) {
				object var_84_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_68_cvector == 35528) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_bool;
				func_5796();
			}
			if(var_68_cvector == 35393) {
				object var_94_object = var_1_object;
				func_5931(var_0_bool);
			}
			if(var_67_bool == 35388) {
				func_4360(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533838); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_116_bool;
				func_5970(var_1_object);
				if(var_116_bool != 0)
					var_0_bool->AddReply(533839, 35390, 35389); //@t
				bool var_127_bool = false;
				bool var_128_bool;
				func_6220(var_1_object);
				if(var_128_bool != 0) {
					bool var_144_bool;
					func_5982(var_1_object);
					if(var_144_bool != 0)
						var_127_bool = true;
				}
				if(var_127_bool != 0)
					var_0_bool->AddReply(533960, 35529, 35528); //@t
				var_0_bool->AddReply(533843, -1, 35393); //@t
				var_0_bool->AddReply(533844, -1, 35394); //@t
				return 0;
			}
			if(var_67_bool == 35529) {
				func_4360(var_68_cvector, "Sly");
				var_0_bool->SetMessage(533961); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533962, 35531, 35530); //@t
				var_0_bool->AddReply(533972, 35533, 35542); //@t
				return 0;
			}
			if(var_67_bool == 35531) {
				func_4360(var_68_cvector, "Smile");
				var_0_bool->SetMessage(533963); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533964, 35533, 35532); //@t
				var_0_bool->AddReply(533971, 35533, 35540); //@t
				return 0;
			}
			if(var_67_bool == 35533) {
				func_4360(var_68_cvector, "Smile");
				var_0_bool->SetMessage(533965); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533966, 35535, 35534); //@t
				var_0_bool->AddReply(533970, 35535, 35538); //@t
				var_0_bool->AddReply(533973, 35545, 35544); //@t
				return 0;
			}
			if(var_67_bool == 35545) {
				func_4360(var_68_cvector, "Sly");
				var_0_bool->SetMessage(533974); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533975, 35547, 35546); //@t
				return 0;
			}
			if(var_67_bool == 35547) {
				func_4360(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533976); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533977, -1, 35548); //@t
				var_0_bool->AddReply(533978, -1, 35549); //@t
				return 0;
			}
			if(var_67_bool == 35535) {
				func_4360(var_68_cvector, "Sly");
				var_0_bool->SetMessage(533967); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533968, -1, 35536); //@t
				var_0_bool->AddReply(533969, -1, 35537); //@t
				return 0;
			}
			if(var_67_bool == 35390) {
				func_4360(var_68_cvector, "Fear");
				var_0_bool->SetMessage(533840); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533842, 35395, 35392); //@t
				var_0_bool->AddReply(533841, -1, 35391); //@t
				return 0;
			}
			if(var_67_bool == 35395) {
				func_4360(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(533845); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533846, -1, 35396); //@t
				var_0_bool->AddReply(533847, -1, 35397); //@t
				return 0;
			}
			var_3_object = true;
			bool var_239_bool;
			func_5745(var_239_bool);
			if(var_239_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x111f";
	
	}

}


task task_25
{
}


task task_26
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, int var_66_int, int var_67_int, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5569();
			if(var_67_int == 36971) {
				func_4821(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(535294); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535295, 36973, 36972); //@t
				var_0_bool->AddReply(535302, -1, 36980); //@t
				var_0_bool->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_67_int == 36973) {
				func_4821(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(535296); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535297, 36975, 36974); //@t
				var_0_bool->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_67_int == 36975) {
				func_4821(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(535298); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535299, -1, 36976); //@t
				var_0_bool->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_object = true;
			bool var_120_bool;
			func_5745(var_120_bool);
			if(var_120_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x12ec";
	
	}

}


maintask task_27
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		var_67_bool = GlobalVars[1];
		GlobalVars[1] = false;
		var_68_int = GlobalVars[2];
		GlobalVars[2] = -1;
		func_4946(var_66_cvector);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, int var_67_int)
	{
		if(var_67_int == 10) {
			func_5011();
			bool var_71_bool = false;
			bool var_72_bool;
			func_5232(var_72_bool);
			if(var_72_bool != 0) {
				bool var_75_bool;
				func_4980(var_75_bool);
				if(var_75_bool != 0)
					var_71_bool = true;
			}
			if(var_71_bool != 0) {
				bool var_92_bool;
				func_4960(var_92_bool);
				if(var_92_bool != 0) {
					bool var_111_bool; object var_112_object;
					object var_113_object;
					func_5604(var_113_object);
					var_113_object = var_112_object;
					func_5382(var_111_bool, var_112_object);
				}
			} else {
				func_4975(var_67_int);
				func_5002();
			}
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		func_5193();
		func_5011();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		@StopGroup0();
		func_5011();
		func_5523("Neutral");
		func_5002();
	}

	// @pe
	void OnLSHAnimationEnd(bool bCycled, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, bool var_67_bool)
	{
		if(var_67_bool != 0)
			func_5002();
		else
			func_5523("Neutral");
	
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, object var_67_object)
	{
		bool var_68_bool; bool var_69_bool;
		@IsOverrideActive(var_69_bool);
		if(!var_69_bool) { //@nz
			disable OnUse;
			func_5193();
			bool var_71_bool; object var_72_object;
			var_67_object = var_72_object;
			func_5223(var_71_bool, var_72_object);
			enable OnUse;
			object var_85_object;
			func_6578(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_85_object, var_68_bool, var_69_bool, var_85_object);
			func_5523("Neutral");
			func_5011();
			func_5002();
		}
	}

}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		func_5523("Neutral");
		@lshWaitForAnimEnd();
		if(false != 0)
			return 0;
	}
}
EMIT "Return(); Pop(0)";


void func_5122(void)
{
	bool var_81_bool; int var_82_int; int var_83_int; bool var_84_bool;
	@WaitForAnimEnd();
	bool var_85_bool;
	func_5232(var_85_bool);
	if(!var_85_bool) //@nz
		return 12;
	int var_87_int;
	func_5720(var_87_int);
	int var_79_int;
	var_87_int = var_79_int;
	int var_80_int = 0;
	
	for(;;) {
		bool var_100_bool = false;
		if(var_80_int < 5) {
			bool var_103_bool;
			func_5232(var_103_bool);
			if(var_103_bool != 0)
				var_100_bool = true;
		}
		if(var_100_bool != 0) {
			if(!var_79_int) { //@nz
				@Sleep(3, var_81_bool);
				if(!var_81_bool) { //@nz
				} else {
			} else {
			@irand(var_82_int, var_79_int);
			@irand(var_83_int, 5);
			if(var_83_int != 0)
				var_82_int = 0;
			string var_114_string; int var_115_int;
			var_82_int = var_115_int;
			func_5713(var_114_string, var_115_int);
			@PlayAnimation("all", var_114_string);
			@WaitForAnimEnd(var_84_bool);
			var_116_bool = !var_84_bool; //@nz
			if(var_116_bool == 0) goto Label_5177;
			goto Label_5188;
			}
				Label_5177:
					bool var_107_bool;
					func_5191(var_107_bool);
					var_108_bool = !var_107_bool; //@nz
					if(var_108_bool == 0) goto Label_5183;
			}
		}
	Label_5188:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_5183:
		@ResetAAS();
		var_80_int += 1;
	}
	
}


// @pe
void func_6150(bool var_963_bool)
{
	int var_965_int;
	func_5625(var_965_int, "ood5Grif1");
	if(var_965_int == 0) {
		var_963_bool = true;
		return 0;
	}
	var_963_bool = false;
}


// @pe
void func_520(object var_2_object, string var_615_string)
{
	bool var_616_bool;
	func_5745(var_616_bool);
	if(!var_616_bool) //@nz
		return 0;
	if(var_615_string == var_2_object)
		return 0;
	string var_619_string; bool var_620_bool;
	var_615_string = var_619_string;
	if(var_615_string == "")
		var_620_bool = false;
	else
		var_620_bool = true;
	func_5539(var_619_string, var_620_bool);
	var_2_object = var_615_string;
	
}


void func_5642(object var_143_object, int var_144_int)
{
	int var_146_int;
	object var_147_object;
	var_143_object = var_147_object;
	int var_149_int;
	func_5206(var_147_object, "money", var_149_int);
	if(var_149_int > 0) {
		@GetInvItemByName(var_146_int, "Money");
		int var_156_int; int var_157_int;
		var_146_int = var_156_int;
		var_144_int = var_157_int;
		func_5630(var_156_int, var_157_int);
	}
}


// @pe
void func_1039(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_784_object, object var_785_object)
{
	var_0_bool = var_785_object;
	var_1_object = var_784_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_791_bool = false;
		bool var_792_bool;
		func_6090(var_1_object);
		if(var_792_bool != 0) {
			bool var_798_bool;
			func_6102(var_1_object);
			if(var_798_bool != 0)
				var_791_bool = true;
		}
		if(var_791_bool != 0) {
			func_1179(var_785_object, "Smile");
			var_0_bool->SetMessage(510952); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(510953, 12113, 12112); //@t
			var_0_bool->AddReply(510960, 12113, 12119); //@t
		} else {
					func_1179(var_785_object, "Neutral");
					var_0_bool->SetMessage(509615); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_829_bool = false;
					bool var_830_bool;
					func_6114(var_1_object);
					if(var_830_bool != 0) {
						bool var_836_bool;
						func_6126(var_1_object);
						if(var_836_bool != 0)
							var_829_bool = true;
					}
					if(var_829_bool != 0)
						var_0_bool->AddReply(510970, 12133, 12132); //@t
					bool var_845_bool = false;
					bool var_846_bool;
					func_6196(var_1_object);
					if(var_846_bool != 0) {
						bool var_852_bool;
						func_6006(var_1_object);
						if(var_852_bool != 0)
							var_845_bool = true;
					}
					if(var_845_bool != 0)
						var_0_bool->AddReply(510948, 12108, 12107); //@t
					bool var_861_bool;
					func_6018(var_1_object);
					if(var_861_bool != 0)
						var_0_bool->AddReply(509640, 10581, 10608); //@t
					var_0_bool->AddReply(514119, -1, 15333); //@t
					var_0_bool->AddReply(509616, -1, 10580); //@t
		}
	}
	for(;;) {
		bool var_819_bool;
		func_5745(var_819_bool);
		if(var_819_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5523(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1178;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1178:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x413";


// @pe
void func_6162(bool var_987_bool, object var_988_object)
{
	object var_990_object;
	var_988_object = var_990_object;
	bool var_989_bool;
	func_6254(var_989_bool, var_990_object);
	if(var_989_bool != 0) {
		var_987_bool = true;
		return 0;
	}
	var_987_bool = false;
}


// @pe
void func_4115(object var_2_object, string var_1348_string)
{
	bool var_1349_bool;
	func_5745(var_1349_bool);
	if(!var_1349_bool) //@nz
		return 0;
	if(var_1348_string == var_2_object)
		return 0;
	string var_1352_string; bool var_1353_bool;
	var_1348_string = var_1352_string;
	if(var_1348_string == "")
		var_1353_bool = false;
	else
		var_1353_bool = true;
	func_5539(var_1352_string, var_1353_bool);
	var_2_object = var_1348_string;
	
}


void func_22(bool var_0_bool, int var_215_int, object var_216_object)
{
	var_0_bool = var_216_object;
	bool var_226_bool; object var_227_object;
	var_216_object = var_227_object;
	func_5237(var_226_bool, var_227_object, 70.0);
	if(!var_226_bool) { //@nz
		var_215_int = -2;
		return 8;
	}
	object var_222_object;
	@CreateDialog(var_222_object);
	int var_274_int;
	func_5739(var_274_int);
	var_222_object->SetNPCName(var_274_int);
	int var_275_int;
	func_5737(var_275_int);
	var_222_object->SetNPCDescription(var_275_int);
	string var_276_string;
	func_5741(var_276_string);
	var_222_object->SetPhoto(var_276_string);
	string var_277_string;
	func_5743(var_277_string);
	var_222_object->SetPhoto2(var_277_string);
	int var_278_int;
	func_6536(var_278_int);
	var_222_object->SetPlayerName(var_278_int);
	bool var_223_bool;
	@IsOverrideActive(var_223_bool);
	if(var_223_bool != 0) {
		var_215_int = -2;
		return 8;
	}
	@DoDialog(var_222_object);
	bool var_287_bool; object var_288_object;
	object var_289_object;
	func_5604(var_289_object);
	var_289_object = var_288_object;
	func_5324(var_287_bool, var_288_object);
	object var_377_object; object var_378_object;
	var_216_object = var_377_object;
	var_222_object = var_378_object;
	TaskCall(2);
	func_103(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object);
	TaskReturn();
	bool var_225_bool;
	var_222_object->IsDialogEnd(var_225_bool);
	
	for(;;) {
		var_433_bool = !var_225_bool; //@nz
		if(var_433_bool == 0) goto Label_92;
		@sync();
		var_222_object->IsDialogEnd(var_225_bool);
	}
	
Label_92:
	object var_434_object;
	var_216_object = var_434_object;
	func_5306();
	@StopDialog(var_222_object);
	var_222_object->GetReturnValue(-1);
	int var_224_int = var_215_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6172(bool var_977_bool)
{
	int var_979_int;
	func_5625(var_979_int, "d5q01ThiefsWillHelp");
	if(var_979_int == 1)
		var_977_bool = true;
	var_977_bool = false;
}


void func_5661(object var_116_object, object var_117_object, int var_118_int)
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
		func_5630(var_127_int, var_128_int);
	}
	
}


// @pe
void func_6184(bool var_915_bool)
{
	int var_917_int;
	func_5625(var_917_int, "d5q02");
	if(var_917_int == 0) {
		var_915_bool = true;
		return 0;
	}
	var_915_bool = false;
}


// @pe
void func_3630(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1280_object, object var_1281_object)
{
	var_0_bool = var_1281_object;
	var_1_object = var_1280_object;
	var_3_object = false;
	if(1 != 0) {
		func_3688(var_1281_object, "Anger");
		var_0_bool->SetMessage(514134); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514135, -1, 15349); //@t
		var_0_bool->AddReply(514136, -1, 15350); //@t
		goto Label_3658;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe32";
	}
Label_3658:
	bool var_1302_bool;
	func_5745(var_1302_bool);
	if(var_1302_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3687;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3687:
		return 0;

	}
	
}


void func_5680(object var_111_object, string var_112_string, int var_113_int)
{
	object var_115_object;
	@CreateInvItem(var_115_object);
	var_115_object->SetItemName(var_112_string);
	object var_116_object; object var_117_object; int var_118_int;
	var_111_object = var_116_object;
	var_115_object = var_117_object;
	var_113_int = var_118_int;
	func_5661(var_116_object, var_117_object, var_118_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6196(bool var_846_bool)
{
	int var_848_int;
	func_5625(var_848_int, "d4q03");
	if(var_848_int == 3)
		var_846_bool = true;
	var_846_bool = false;
}


void func_3127(bool var_0_bool, int var_1073_int, object var_1074_object)
{
	var_0_bool = var_1074_object;
	bool var_1084_bool; object var_1085_object;
	var_1074_object = var_1085_object;
	func_5237(var_1084_bool, var_1085_object, 70.0);
	if(!var_1084_bool) { //@nz
		var_1073_int = -2;
		return 8;
	}
	object var_1080_object;
	@CreateDialog(var_1080_object);
	int var_1088_int;
	func_5739(var_1088_int);
	var_1080_object->SetNPCName(var_1088_int);
	int var_1089_int;
	func_5737(var_1089_int);
	var_1080_object->SetNPCDescription(var_1089_int);
	string var_1090_string;
	func_5741(var_1090_string);
	var_1080_object->SetPhoto(var_1090_string);
	string var_1091_string;
	func_5743(var_1091_string);
	var_1080_object->SetPhoto2(var_1091_string);
	int var_1092_int;
	func_6536(var_1092_int);
	var_1080_object->SetPlayerName(var_1092_int);
	bool var_1081_bool;
	@IsOverrideActive(var_1081_bool);
	if(var_1081_bool != 0) {
		var_1073_int = -2;
		return 8;
	}
	@DoDialog(var_1080_object);
	bool var_1094_bool; object var_1095_object;
	object var_1096_object;
	func_5604(var_1096_object);
	var_1096_object = var_1095_object;
	func_5324(var_1094_bool, var_1095_object);
	object var_1097_object; object var_1098_object;
	var_1074_object = var_1097_object;
	var_1080_object = var_1098_object;
	TaskCall(14);
	func_3208(var_1099_object, var_1100_object, var_1101_string, var_1102_bool, var_1097_object, var_1098_object);
	TaskReturn();
	bool var_1083_bool;
	var_1080_object->IsDialogEnd(var_1083_bool);
	
	for(;;) {
		var_1127_bool = !var_1083_bool; //@nz
		if(var_1127_bool == 0) goto Label_3197;
		@sync();
		var_1080_object->IsDialogEnd(var_1083_bool);
	}
	
Label_3197:
	object var_1128_object;
	var_1074_object = var_1128_object;
	func_5306();
	@StopDialog(var_1080_object);
	var_1080_object->GetReturnValue(-1);
	int var_1082_int = var_1073_int;
}
EMIT "Stack[-4] = 0";


void func_5693(float var_94_float)
{
	float var_96_float;
	@GetGameTime(var_96_float);
	var_96_float = var_94_float;
}


void func_2110(bool var_0_bool, int var_883_int, object var_884_object)
{
	var_0_bool = var_884_object;
	bool var_894_bool; object var_895_object;
	var_884_object = var_895_object;
	func_5237(var_894_bool, var_895_object, 70.0);
	if(!var_894_bool) { //@nz
		var_883_int = -2;
		return 8;
	}
	object var_890_object;
	@CreateDialog(var_890_object);
	int var_898_int;
	func_5739(var_898_int);
	var_890_object->SetNPCName(var_898_int);
	int var_899_int;
	func_5737(var_899_int);
	var_890_object->SetNPCDescription(var_899_int);
	string var_900_string;
	func_5741(var_900_string);
	var_890_object->SetPhoto(var_900_string);
	string var_901_string;
	func_5743(var_901_string);
	var_890_object->SetPhoto2(var_901_string);
	int var_902_int;
	func_6536(var_902_int);
	var_890_object->SetPlayerName(var_902_int);
	bool var_891_bool;
	@IsOverrideActive(var_891_bool);
	if(var_891_bool != 0) {
		var_883_int = -2;
		return 8;
	}
	@DoDialog(var_890_object);
	bool var_904_bool; object var_905_object;
	object var_906_object;
	func_5604(var_906_object);
	var_906_object = var_905_object;
	func_5324(var_904_bool, var_905_object);
	object var_907_object; object var_908_object;
	var_884_object = var_907_object;
	var_890_object = var_908_object;
	TaskCall(10);
	func_2191(var_909_object, var_910_object, var_911_string, var_912_bool, var_907_object, var_908_object);
	TaskReturn();
	bool var_893_bool;
	var_890_object->IsDialogEnd(var_893_bool);
	
	for(;;) {
		var_1005_bool = !var_893_bool; //@nz
		if(var_1005_bool == 0) goto Label_2180;
		@sync();
		var_890_object->IsDialogEnd(var_893_bool);
	}
	
Label_2180:
	object var_1006_object;
	var_884_object = var_1006_object;
	func_5306();
	@StopDialog(var_890_object);
	var_890_object->GetReturnValue(-1);
	int var_892_int = var_883_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6208(bool var_921_bool)
{
	int var_923_int;
	func_5625(var_923_int, "ood5Grif2");
	if(var_923_int == 0) {
		var_921_bool = true;
		return 0;
	}
	var_921_bool = false;
}


void func_5698(int var_87_int)
{
	float var_89_float;
	@GetGameTime(var_89_float);
	var_87_int = 1 + (var_89_float / 24);
}


void func_4677(bool var_0_bool, int var_1380_int, object var_1381_object)
{
	var_0_bool = var_1381_object;
	bool var_1391_bool; object var_1392_object;
	var_1381_object = var_1392_object;
	func_5237(var_1391_bool, var_1392_object, 70.0);
	if(!var_1391_bool) { //@nz
		var_1380_int = -2;
		return 8;
	}
	object var_1387_object;
	@CreateDialog(var_1387_object);
	int var_1395_int;
	func_5739(var_1395_int);
	var_1387_object->SetNPCName(var_1395_int);
	int var_1396_int;
	func_5737(var_1396_int);
	var_1387_object->SetNPCDescription(var_1396_int);
	string var_1397_string;
	func_5741(var_1397_string);
	var_1387_object->SetPhoto(var_1397_string);
	string var_1398_string;
	func_5743(var_1398_string);
	var_1387_object->SetPhoto2(var_1398_string);
	int var_1399_int;
	func_6536(var_1399_int);
	var_1387_object->SetPlayerName(var_1399_int);
	bool var_1388_bool;
	@IsOverrideActive(var_1388_bool);
	if(var_1388_bool != 0) {
		var_1380_int = -2;
		return 8;
	}
	@DoDialog(var_1387_object);
	bool var_1401_bool; object var_1402_object;
	object var_1403_object;
	func_5604(var_1403_object);
	var_1403_object = var_1402_object;
	func_5324(var_1401_bool, var_1402_object);
	object var_1404_object; object var_1405_object;
	var_1381_object = var_1404_object;
	var_1387_object = var_1405_object;
	TaskCall(26);
	func_4758(var_1406_object, var_1407_object, var_1408_string, var_1409_bool, var_1404_object, var_1405_object);
	TaskReturn();
	bool var_1390_bool;
	var_1387_object->IsDialogEnd(var_1390_bool);
	
	for(;;) {
		var_1437_bool = !var_1390_bool; //@nz
		if(var_1437_bool == 0) goto Label_4747;
		@sync();
		var_1387_object->IsDialogEnd(var_1390_bool);
	}
	
Label_4747:
	object var_1438_object;
	var_1381_object = var_1438_object;
	func_5306();
	@StopDialog(var_1387_object);
	var_1387_object->GetReturnValue(-1);
	int var_1389_int = var_1380_int;
}
EMIT "Stack[-4] = 0";


void func_5191(bool var_107_bool)
{
	var_107_bool = true;
}


void func_5193(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_5707(bool var_443_bool, int var_444_int)
{
	int var_445_int;
	func_5698(var_445_int);
	var_443_bool = var_445_int == var_444_int;
}


// @pe
void func_6220(bool var_499_bool)
{
	bool var_501_bool = false;
	bool var_502_bool = false;
	int var_503_int;
	func_5625(var_503_int, "d1q01");
	if(var_503_int != 0) {
		int var_507_int;
		func_5625(var_507_int, "d1q01");
		if(var_507_int != 1000)
			var_502_bool = true;
	}
	if(var_502_bool != 0) {
		int var_511_int;
		func_5625(var_511_int, "d1q01");
		if(var_511_int != -1)
			var_501_bool = true;
	}
	if(var_501_bool != 0) {
		var_499_bool = true;
		return 0;
	}
	var_499_bool = false;
}


void func_5198(float var_82_float, object var_83_object)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	cvector var_88_cvector;
	var_83_object->GetPosition(var_88_cvector);
	var_82_float = (var_88_cvector - var_87_cvector) | (var_88_cvector - var_87_cvector);
}


void func_5713(string var_93_string, int var_94_int)
{
	string var_96_string = "idle";
	if(var_94_int != 0)
		var_96_string += var_94_int;
	var_96_string = var_93_string;
}


void func_5206(object var_147_object, string var_148_string, int var_149_int)
{
	int var_151_int;
	var_147_object->GetProperty(var_148_string, var_151_int);
	var_147_object->SetProperty(var_148_string, (var_151_int + var_149_int));
}


void func_5720(int var_87_int)
{
	int var_90_int; bool var_91_bool;
	var_90_int = 0;
	
	for(;;) {
		string var_93_string; int var_94_int;
		var_90_int = var_94_int;
		func_5713(var_93_string, var_94_int);
		@HasAnimation(var_91_bool, "all", var_93_string);
		if(!var_91_bool) //@nz
			break;
		var_90_int += 1;
	}
	var_90_int = var_87_int;
}


void func_5213(bool var_75_bool, cvector var_76_cvector)
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


void func_4192(bool var_0_bool, int var_447_int, object var_448_object)
{
	var_0_bool = var_448_object;
	bool var_458_bool; object var_459_object;
	var_448_object = var_459_object;
	func_5237(var_458_bool, var_459_object, 70.0);
	if(!var_458_bool) { //@nz
		var_447_int = -2;
		return 8;
	}
	object var_454_object;
	@CreateDialog(var_454_object);
	int var_462_int;
	func_5739(var_462_int);
	var_454_object->SetNPCName(var_462_int);
	int var_463_int;
	func_5737(var_463_int);
	var_454_object->SetNPCDescription(var_463_int);
	string var_464_string;
	func_5741(var_464_string);
	var_454_object->SetPhoto(var_464_string);
	string var_465_string;
	func_5743(var_465_string);
	var_454_object->SetPhoto2(var_465_string);
	int var_466_int;
	func_6536(var_466_int);
	var_454_object->SetPlayerName(var_466_int);
	bool var_455_bool;
	@IsOverrideActive(var_455_bool);
	if(var_455_bool != 0) {
		var_447_int = -2;
		return 8;
	}
	@DoDialog(var_454_object);
	bool var_468_bool; object var_469_object;
	object var_470_object;
	func_5604(var_470_object);
	var_470_object = var_469_object;
	func_5324(var_468_bool, var_469_object);
	object var_471_object; object var_472_object;
	var_448_object = var_471_object;
	var_454_object = var_472_object;
	TaskCall(24);
	func_4273(var_473_object, var_474_object, var_475_string, var_476_bool, var_471_object, var_472_object);
	TaskReturn();
	bool var_457_bool;
	var_454_object->IsDialogEnd(var_457_bool);
	
	for(;;) {
		var_538_bool = !var_457_bool; //@nz
		if(var_538_bool == 0) goto Label_4262;
		@sync();
		var_454_object->IsDialogEnd(var_457_bool);
	}
	
Label_4262:
	object var_539_object;
	var_448_object = var_539_object;
	func_5306();
	@StopDialog(var_454_object);
	var_454_object->GetReturnValue(-1);
	int var_456_int = var_447_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_103(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_377_object, object var_378_object)
{
	var_0_bool = var_378_object;
	var_3_object = false;
	if(1 != 0) {
		object var_384_object; object var_385_object;
		var_384_object = var_377_object;
		var_385_object = var_0_bool;
		func_5936();
		func_171(var_378_object, "Neutral");
		var_0_bool->SetMessage(500383); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(500384, 448, 445); //@t
		var_0_bool->AddReply(500385, 449, 446); //@t
		var_0_bool->AddReply(500386, 450, 447); //@t
		goto Label_141;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6b";
	}
Label_141:
	bool var_415_bool;
	func_5745(var_415_bool);
	if(var_415_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_170;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_170:
		return 0;

	}
	
}


// @pe
void func_3688(object var_2_object, string var_1287_string)
{
	bool var_1288_bool;
	func_5745(var_1288_bool);
	if(!var_1288_bool) //@nz
		return 0;
	if(var_1287_string == var_2_object)
		return 0;
	string var_1291_string; bool var_1292_bool;
	var_1287_string = var_1291_string;
	if(var_1287_string == "")
		var_1292_bool = false;
	else
		var_1292_bool = true;
	func_5539(var_1291_string, var_1292_bool);
	var_2_object = var_1287_string;
	
}


void func_5737(int var_275_int)
{
	var_275_int = 515535;
}


void func_5223(bool var_71_bool, object var_72_object)
{
	cvector var_74_cvector;
	var_72_object->GetPosition(var_74_cvector);
	bool var_75_bool; cvector var_76_cvector;
	var_74_cvector = var_76_cvector;
	func_5213(var_75_bool, var_76_cvector);
	var_75_bool = var_71_bool;
}


void func_5739(int var_274_int)
{
	var_274_int = 502860;
}


void func_5741(string var_276_string)
{
	var_276_string = "ui/NPC_Grif.png";
}


void func_6254(bool var_989_bool, object var_990_object)
{
	float var_992_float;
	var_990_object->GetProperty("money", var_992_float);
	if(var_992_float >= 10000)
		var_989_bool = true;
	var_989_bool = false;
}


void func_5743(string var_277_string)
{
	var_277_string = "ui/NPC_Grif_b.png";
}


void func_5232(bool var_69_bool)
{
	bool var_71_bool;
	@IsLoaded(var_71_bool);
	var_71_bool = var_69_bool;
}


void func_5745(bool var_269_bool)
{
	var_269_bool = true;
}


// @pe
void func_5747(object var_143_object)
{
	@Trace("money10000 is given");
	object var_146_object;
	var_143_object = var_146_object;
	func_5642(var_146_object, 10000);
}


void func_5237(bool var_226_bool, object var_227_object, float var_228_float)
{
	cvector var_239_cvector; bool var_246_bool;
	var_227_object->GetPosition(var_239_cvector);
	float var_238_float;
	var_227_object->GetEyesHeight(var_238_float);
	var_247_float = GetByIndex(var_239_cvector, 1);
	SetByIndex(var_239_cvector, 1) = (var_247_float + var_238_float);
	cvector var_240_cvector;
	@GetPosition(var_240_cvector);
	@GetEyesHeight(var_238_float);
	var_248_float = GetByIndex(var_240_cvector, 1);
	SetByIndex(var_240_cvector, 1) = (var_248_float + var_238_float);
	cvector var_241_cvector = var_239_cvector - var_240_cvector;
	var_249_float = GetByIndex(var_241_cvector, 1);
	SetByIndex(var_241_cvector, 1) = (float)0;
	var_251_float = sqrt(var_241_cvector | var_241_cvector);
	var_241_cvector /= var_251_float;
	cvector var_242_cvector = -var_241_cvector;
	cvector var_253_cvector;
	func_5610(var_253_cvector, (var_242_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_243_cvector = ((var_241_cvector * var_228_float) + (var_253_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_245_bool;
	@IsOverrideActive(var_245_bool);
	if(var_245_bool != 0)
		var_226_bool = false;
	@StopWorld();
	@CameraTransit((var_240_cvector + var_243_cvector), var_242_cvector, true);
	var_267_float = GetByIndex(var_243_cvector, 0);
	var_268_float = GetByIndex(var_243_cvector, 2);
	@Rotate(var_267_float, var_268_float);
	bool var_269_bool;
	func_5745(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		@HasAnimationTrack(var_246_bool, "head");
		if(var_246_bool == 0) goto Label_5300;
		@LookAsyncCamera("head");
	}
Label_5300:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_226_bool = true;
	
}


void func_6265(void)
{
	object var_82_object;
	@CreateDiaryEntry(var_82_object, 132, 2, 515269);
	bool var_86_bool; object var_87_object;
	var_82_object = var_87_object;
	func_6317(var_86_bool, var_87_object, 11);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5757(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_5763(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_6278(void)
{
	object var_103_object;
	@CreateDiaryEntry(var_103_object, 97, 2, 512179);
	bool var_107_bool; object var_108_object;
	var_103_object = var_108_object;
	func_6317(var_107_bool, var_108_object, 22);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3208(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1097_object, object var_1098_object)
{
	var_0_bool = var_1098_object;
	var_1_object = var_1097_object;
	var_3_object = false;
	if(1 != 0) {
		func_3266(var_1098_object, "Smile");
		var_0_bool->SetMessage(514126); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514127, -1, 15341); //@t
		var_0_bool->AddReply(514128, -1, 15342); //@t
		goto Label_3236;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc8c";
	}
Label_3236:
	bool var_1119_bool;
	func_5745(var_1119_bool);
	if(var_1119_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3265;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3265:
		return 0;

	}
	
}


// @pe
void func_5769(object var_108_object)
{
	@Trace("revolver ammo15 is given");
	object var_111_object;
	var_108_object = var_111_object;
	func_5680(var_111_object, "revolver_ammo", 15);
}


// @pe
void func_2191(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_907_object, object var_908_object)
{
	var_0_bool = var_908_object;
	var_1_object = var_907_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_914_bool = false;
		bool var_915_bool;
		func_6184(var_1_object);
		if(var_915_bool != 0) {
			bool var_921_bool;
			func_6208(var_1_object);
			if(var_921_bool != 0)
				var_914_bool = true;
		}
		if(var_914_bool != 0) {
			object var_927_object; object var_928_object;
			var_927_object = var_1_object;
			var_928_object = var_0_bool;
			func_5964();
			func_2346(var_908_object, "Sly");
			var_0_bool->SetMessage(511720); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(511721, 12928, 12927); //@t
			var_0_bool->AddReply(515755, 12928, 16821); //@t
		} else {
					func_2346(var_908_object, "Neutral");
					var_0_bool->SetMessage(511704); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_956_bool = false;
					bool var_957_bool;
					func_6138(var_1_object);
					if(var_957_bool != 0) {
						bool var_963_bool;
						func_6150(var_1_object);
						if(var_963_bool != 0)
							var_956_bool = true;
					}
					if(var_956_bool != 0)
						var_0_bool->AddReply(511705, 12910, 12909); //@t
					bool var_972_bool = false;
					bool var_973_bool = false;
					bool var_974_bool = false;
					bool var_975_bool;
					func_6138(var_1_object);
					if(var_975_bool != 0) {
						bool var_977_bool;
						func_6172(var_1_object);
						if(!var_977_bool) //@nz
							var_974_bool = true;
					}
					if(var_974_bool != 0) {
						bool var_984_bool;
						func_6150(var_1_object);
						if(!var_984_bool) //@nz
							var_973_bool = true;
					}
					if(var_973_bool != 0) {
						bool var_987_bool;
						func_6162(var_987_bool, var_1_object);
						if(var_987_bool != 0)
							var_972_bool = true;
					}
					if(var_972_bool != 0)
						var_0_bool->AddReply(511734, 16834, 12940); //@t
					var_0_bool->AddReply(514120, -1, 15334); //@t
					var_0_bool->AddReply(511739, -1, 12945); //@t
		}
	}
	for(;;) {
		bool var_946_bool;
		func_5745(var_946_bool);
		if(var_946_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5523(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2345;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2345:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x893";


void func_6291(void)
{
	object var_118_object;
	@CreateDiaryEntry(var_118_object, 145, 1, 515345);
	bool var_122_bool; object var_123_object;
	var_118_object = var_123_object;
	func_6317(var_122_bool, var_123_object, 139);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5780(object var_140_object)
{
	@Trace("money 10000 removed");
	object var_143_object;
	var_140_object = var_143_object;
	func_5642(var_143_object, -10000);
}


// @pe
void func_4758(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1404_object, object var_1405_object)
{
	var_0_bool = var_1405_object;
	var_1_object = var_1404_object;
	var_3_object = false;
	if(1 != 0) {
		func_4821(var_1405_object, "Neutral");
		var_0_bool->SetMessage(535294); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535295, 36973, 36972); //@t
		var_0_bool->AddReply(535302, -1, 36980); //@t
		var_0_bool->AddReply(535303, -1, 36981); //@t
		goto Label_4791;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x129a";
	}
Label_4791:
	bool var_1429_bool;
	func_5745(var_1429_bool);
	if(var_1429_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4820;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4820:
		return 0;

	}
	
}


// @pe
void func_1179(object var_2_object, string var_804_string)
{
	bool var_805_bool;
	func_5745(var_805_bool);
	if(!var_805_bool) //@nz
		return 0;
	if(var_804_string == var_2_object)
		return 0;
	string var_808_string; bool var_809_bool;
	var_804_string = var_808_string;
	if(var_804_string == "")
		var_809_bool = false;
	else
		var_809_bool = true;
	func_5539(var_808_string, var_809_bool);
	var_2_object = var_804_string;
	
}


// @pe
void func_5790(void)
{
	@SetVariable("ood1Grif1", 1);
}


void func_6304(object var_131_object)
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
void func_5796(void)
{
	@SetVariable("ood1Grif2", 1);
}


// @pe
void func_5802(void)
{
	@SetVariable("ood3Grif1", 1);
}


// @pe
void func_171(object var_2_object, string var_388_string)
{
	bool var_389_bool;
	func_5745(var_389_bool);
	if(!var_389_bool) //@nz
		return 0;
	if(var_388_string == var_2_object)
		return 0;
	string var_392_string; bool var_393_bool;
	var_388_string = var_392_string;
	if(var_388_string == "")
		var_393_bool = false;
	else
		var_393_bool = true;
	func_5539(var_392_string, var_393_bool);
	var_2_object = var_388_string;
	
}


void func_6317(bool var_122_bool, object var_123_object, int var_124_int)
{
	object var_131_object;
	func_6304(var_131_object);
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
void func_5808(void)
{
	@SetVariable("ood4Grif3", 1);
}


// @pe
void func_4273(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_471_object, object var_472_object)
{
	var_0_bool = var_472_object;
	var_1_object = var_471_object;
	var_3_object = false;
	if(1 != 0) {
		func_4360(var_472_object, "Neutral");
		var_0_bool->SetMessage(533838); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_487_bool;
		func_5970(var_1_object);
		if(var_487_bool != 0)
			var_0_bool->AddReply(533839, 35390, 35389); //@t
		bool var_498_bool = false;
		bool var_499_bool;
		func_6220(var_1_object);
		if(var_499_bool != 0) {
			bool var_515_bool;
			func_5982(var_1_object);
			if(var_515_bool != 0)
				var_498_bool = true;
		}
		if(var_498_bool != 0)
			var_0_bool->AddReply(533960, 35529, 35528); //@t
		var_0_bool->AddReply(533843, -1, 35393); //@t
		var_0_bool->AddReply(533844, -1, 35394); //@t
		goto Label_4330;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x10b5";
	}
Label_4330:
	bool var_530_bool;
	func_5745(var_530_bool);
	if(var_530_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4359;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4359:
		return 0;

	}
	
}


void func_3760(bool var_0_bool, int var_1195_int, object var_1196_object)
{
	var_0_bool = var_1196_object;
	bool var_1206_bool; object var_1207_object;
	var_1196_object = var_1207_object;
	func_5237(var_1206_bool, var_1207_object, 70.0);
	if(!var_1206_bool) { //@nz
		var_1195_int = -2;
		return 8;
	}
	object var_1202_object;
	@CreateDialog(var_1202_object);
	int var_1210_int;
	func_5739(var_1210_int);
	var_1202_object->SetNPCName(var_1210_int);
	int var_1211_int;
	func_5737(var_1211_int);
	var_1202_object->SetNPCDescription(var_1211_int);
	string var_1212_string;
	func_5741(var_1212_string);
	var_1202_object->SetPhoto(var_1212_string);
	string var_1213_string;
	func_5743(var_1213_string);
	var_1202_object->SetPhoto2(var_1213_string);
	int var_1214_int;
	func_6536(var_1214_int);
	var_1202_object->SetPlayerName(var_1214_int);
	bool var_1203_bool;
	@IsOverrideActive(var_1203_bool);
	if(var_1203_bool != 0) {
		var_1195_int = -2;
		return 8;
	}
	@DoDialog(var_1202_object);
	bool var_1216_bool; object var_1217_object;
	object var_1218_object;
	func_5604(var_1218_object);
	var_1218_object = var_1217_object;
	func_5324(var_1216_bool, var_1217_object);
	object var_1219_object; object var_1220_object;
	var_1196_object = var_1219_object;
	var_1202_object = var_1220_object;
	TaskCall(20);
	func_3841(var_1221_object, var_1222_object, var_1223_string, var_1224_bool, var_1219_object, var_1220_object);
	TaskReturn();
	bool var_1205_bool;
	var_1202_object->IsDialogEnd(var_1205_bool);
	
	for(;;) {
		var_1249_bool = !var_1205_bool; //@nz
		if(var_1249_bool == 0) goto Label_3830;
		@sync();
		var_1202_object->IsDialogEnd(var_1205_bool);
	}
	
Label_3830:
	object var_1250_object;
	var_1196_object = var_1250_object;
	func_5306();
	@StopDialog(var_1202_object);
	var_1202_object->GetReturnValue(-1);
	int var_1204_int = var_1195_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5814(void)
{
	@SetVariable("ood4Grif4", 1);
}


void func_5306(void)
{
	bool var_436_bool;
	@CameraSwitchToNormal(true);
	bool var_438_bool;
	func_5745(var_438_bool);
	if(var_438_bool != 0) {
	} else {
		@HasAnimationTrack(var_436_bool, "head");
		if(var_436_bool == 0) goto Label_5323;
		@UnlookAsync("head");
	}
Label_5323:
	
}


// @pe
void func_5820(void)
{
	@SetVariable("ood2Grif2", 1);
}


// @pe
void func_5826(void)
{
	@SetVariable("ood2Grif3", 1);
}


// @pe
void func_3266(object var_2_object, string var_1104_string)
{
	bool var_1105_bool;
	func_5745(var_1105_bool);
	if(!var_1105_bool) //@nz
		return 0;
	if(var_1104_string == var_2_object)
		return 0;
	string var_1108_string; bool var_1109_bool;
	var_1104_string = var_1108_string;
	if(var_1104_string == "")
		var_1109_bool = false;
	else
		var_1109_bool = true;
	func_5539(var_1108_string, var_1109_bool);
	var_2_object = var_1104_string;
	
}


// @pe
void func_5832(void)
{
	@SetVariable("ood2Grif4", 1);
}


void func_6345(object var_83_object)
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


void func_5324(bool var_287_bool, object var_288_object)
{
	int var_294_int; int var_295_int;
	@GetVariable("voice_common", var_294_int);
	if(var_294_int != 0) {
		bool var_298_bool; object var_299_object;
		var_288_object = var_299_object;
		func_5382(var_298_bool, var_299_object);
		if(!var_298_bool) { //@nz
			bool var_329_bool; object var_330_object;
			var_288_object = var_330_object;
			func_5419(var_329_bool, var_330_object);
			if(!var_329_bool) { //@nz
				var_287_bool = false;
				return 4;
			}
		}
		@irand(var_295_int, 2);
		if(var_295_int != 0)
			@SetVariable("voice_common", ((var_294_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_369_bool; object var_370_object;
		var_288_object = var_370_object;
		func_5419(var_369_bool, var_370_object);
		if(!var_369_bool) { //@nz
			bool var_372_bool; object var_373_object;
			var_288_object = var_373_object;
			func_5382(var_372_bool, var_373_object);
			if(!var_372_bool) { //@nz
				var_287_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_5380;
	
Label_5380:
	var_287_bool = true;
	
}


// @pe
void func_5838(void)
{
	@SetVariable("d2q02", 7);
	func_6265();
}


// @pe
void func_4821(object var_2_object, string var_1411_string)
{
	bool var_1412_bool;
	func_5745(var_1412_bool);
	if(!var_1412_bool) //@nz
		return 0;
	if(var_1411_string == var_2_object)
		return 0;
	string var_1415_string; bool var_1416_bool;
	var_1411_string = var_1415_string;
	if(var_1411_string == "")
		var_1416_bool = false;
	else
		var_1416_bool = true;
	func_5539(var_1415_string, var_1416_bool);
	var_2_object = var_1411_string;
	
}


void func_5847(object var_132_object)
{
	@Trace("Revolver is given");
	object var_135_object;
	@CreateInvItem(var_135_object);
	var_135_object->SetItemName("Revolver");
	var_135_object->SetProperty("durability", 30);
	object var_140_object; object var_141_object;
	var_132_object = var_140_object;
	var_135_object = var_141_object;
	func_5661(var_140_object, var_141_object, 1);
}
EMIT "Stack[-1] = 0";


void func_6362(void)
{
	@ClearSubContainer(0);
	int var_103_int;
	func_5698(var_103_int);
	int var_100_int;
	var_103_int = var_100_int;
	int var_104_int;
	func_6531(var_104_int, "Rifle");
	bool var_98_bool;
	@AddItem(var_98_bool, var_104_int, 0, 1);
	int var_110_int;
	func_6531(var_110_int, "Revolver");
	@AddItem(var_98_bool, var_110_int, 0, 1);
	int var_114_int;
	func_6531(var_114_int, "Knife");
	@AddItem(var_98_bool, var_114_int, 0, 1);
	if(var_100_int != 10) {
		int var_120_int;
		func_6531(var_120_int, "tvirin");
		@AddItem(var_98_bool, var_120_int, 0, 1);
	} else {
			int var_207_int;
			func_6531(var_207_int, "tvirin");
			@AddItem(var_98_bool, var_207_int, 0, 4);
	}
	int var_124_int;
	func_6531(var_124_int, "lockpick");
	@AddItem(var_98_bool, var_124_int, 0, 3);
	func_5576("Scalpel", 1, 2);
	func_5587("revolver_ammo", 1, 1, 5, 10);
	func_5587("rifle_ammo", 1, 1, 5, 20);
	int var_99_int;
	@irand(var_99_int, 100);
	if(var_99_int != 0) {
		int var_164_int;
		func_6531(var_164_int, "kerosene");
		@AddItem(var_98_bool, var_164_int, 0, var_99_int);
	}
	if(var_100_int >= 3) {
		int var_169_int;
		func_6531(var_169_int, "halfboot_repel");
		@AddItem(var_98_bool, var_169_int, 0, 1);
		int var_173_int;
		func_6531(var_173_int, "boot_repel");
		@AddItem(var_98_bool, var_173_int, 0, 1);
	}
	if(var_100_int >= 9) {
		int var_179_int;
		func_6531(var_179_int, "boot_army");
		@AddItem(var_98_bool, var_179_int, 0, 1);
		int var_183_int;
		func_6531(var_183_int, "balahon");
		@AddItem(var_98_bool, var_183_int, 0, 1);
		int var_187_int;
		func_6531(var_187_int, "glove_army");
		@AddItem(var_98_bool, var_187_int, 0, 1);
	}
	int var_191_int;
	func_6553(var_191_int);
	int var_101_int;
	var_191_int = var_101_int;
	if(var_101_int == 0) {
		int var_197_int;
		func_6531(var_197_int, "Gun_danko");
		@AddItem(var_98_bool, var_197_int, 0, 1);
	} else if(var_101_int == 2) {
		int var_203_int;
		func_6531(var_203_int, "Gun");
		@AddItem(var_98_bool, var_203_int, 0, 1);

	}
	
}


// @pe
void func_5868(void)
{
	@SetVariable("ood4Grif1", 1);
}


void func_5874(void)
{
	@SetVariable("d4q03", 2);
	object var_83_object;
	func_6345(var_83_object);
	object var_80_object;
	var_83_object = var_80_object;
	float var_94_float;
	func_5693(var_94_float);
	var_80_object->AddMark("d4q03GrifGotoAlexandr", "pt_map_alexandr", 0, 515331, var_94_float);
	float var_101_float;
	func_5693(var_101_float);
	var_80_object->AddMark("d4q03GrifGotoAlexandrSelf", "pt_map_grif", 0, 515332, var_101_float);
	func_6278();
}
EMIT "Stack[-1] = 0";


void func_1787(bool var_0_bool, int var_682_int, object var_683_object)
{
	var_0_bool = var_683_object;
	bool var_693_bool; object var_694_object;
	var_683_object = var_694_object;
	func_5237(var_693_bool, var_694_object, 70.0);
	if(!var_693_bool) { //@nz
		var_682_int = -2;
		return 8;
	}
	object var_689_object;
	@CreateDialog(var_689_object);
	int var_697_int;
	func_5739(var_697_int);
	var_689_object->SetNPCName(var_697_int);
	int var_698_int;
	func_5737(var_698_int);
	var_689_object->SetNPCDescription(var_698_int);
	string var_699_string;
	func_5741(var_699_string);
	var_689_object->SetPhoto(var_699_string);
	string var_700_string;
	func_5743(var_700_string);
	var_689_object->SetPhoto2(var_700_string);
	int var_701_int;
	func_6536(var_701_int);
	var_689_object->SetPlayerName(var_701_int);
	bool var_690_bool;
	@IsOverrideActive(var_690_bool);
	if(var_690_bool != 0) {
		var_682_int = -2;
		return 8;
	}
	@DoDialog(var_689_object);
	bool var_703_bool; object var_704_object;
	object var_705_object;
	func_5604(var_705_object);
	var_705_object = var_704_object;
	func_5324(var_703_bool, var_704_object);
	object var_706_object; object var_707_object;
	var_683_object = var_706_object;
	var_689_object = var_707_object;
	TaskCall(8);
	func_1868(var_708_object, var_709_object, var_710_string, var_711_bool, var_706_object, var_707_object);
	TaskReturn();
	bool var_692_bool;
	var_689_object->IsDialogEnd(var_692_bool);
	
	for(;;) {
		var_753_bool = !var_692_bool; //@nz
		if(var_753_bool == 0) goto Label_1857;
		@sync();
		var_689_object->IsDialogEnd(var_692_bool);
	}
	
Label_1857:
	object var_754_object;
	var_683_object = var_754_object;
	func_5306();
	@StopDialog(var_689_object);
	var_689_object->GetReturnValue(-1);
	int var_691_int = var_682_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3841(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1219_object, object var_1220_object)
{
	var_0_bool = var_1220_object;
	var_1_object = var_1219_object;
	var_3_object = false;
	if(1 != 0) {
		func_3899(var_1220_object, "Sly");
		var_0_bool->SetMessage(541830); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514139, -1, 15353); //@t
		var_0_bool->AddReply(541833, -1, 44048); //@t
		goto Label_3869;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf05";
	}
Label_3869:
	bool var_1241_bool;
	func_5745(var_1241_bool);
	if(var_1241_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3898;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3898:
		return 0;

	}
	
}


void func_5382(bool var_298_bool, object var_299_object)
{
	string var_305_string; bool var_307_bool; int var_308_int; string var_309_string;
	var_305_string = "c";
	int var_306_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_299_object->HasProperty((var_305_string + (var_306_int + 1)), var_307_bool);
			if(!var_307_bool) { //@nz
			} else {
				var_306_int += 1;
			}
		}
		if(!var_306_int) { //@nz
			var_298_bool = false;
			return 10;
		}
		var_308_int = 0;
		if(var_306_int > 1)
			@irand(var_308_int, var_306_int);
		var_299_object->GetProperty((var_305_string + (var_308_int + 1)), var_309_string);
		bool var_321_bool; string var_322_string;
		var_309_string = var_322_string;
		func_5554(var_321_bool, var_322_string);
		var_321_bool = var_298_bool;
		return 10;

	}
}


// @pe
void func_4360(object var_2_object, string var_478_string)
{
	bool var_479_bool;
	func_5745(var_479_bool);
	if(!var_479_bool) //@nz
		return 0;
	if(var_478_string == var_2_object)
		return 0;
	string var_482_string; bool var_483_bool;
	var_478_string = var_482_string;
	if(var_478_string == "")
		var_483_bool = false;
	else
		var_483_bool = true;
	func_5539(var_482_string, var_483_bool);
	var_2_object = var_478_string;
	
}


void func_3338(bool var_0_bool, int var_1134_int, object var_1135_object)
{
	var_0_bool = var_1135_object;
	bool var_1145_bool; object var_1146_object;
	var_1135_object = var_1146_object;
	func_5237(var_1145_bool, var_1146_object, 70.0);
	if(!var_1145_bool) { //@nz
		var_1134_int = -2;
		return 8;
	}
	object var_1141_object;
	@CreateDialog(var_1141_object);
	int var_1149_int;
	func_5739(var_1149_int);
	var_1141_object->SetNPCName(var_1149_int);
	int var_1150_int;
	func_5737(var_1150_int);
	var_1141_object->SetNPCDescription(var_1150_int);
	string var_1151_string;
	func_5741(var_1151_string);
	var_1141_object->SetPhoto(var_1151_string);
	string var_1152_string;
	func_5743(var_1152_string);
	var_1141_object->SetPhoto2(var_1152_string);
	int var_1153_int;
	func_6536(var_1153_int);
	var_1141_object->SetPlayerName(var_1153_int);
	bool var_1142_bool;
	@IsOverrideActive(var_1142_bool);
	if(var_1142_bool != 0) {
		var_1134_int = -2;
		return 8;
	}
	@DoDialog(var_1141_object);
	bool var_1155_bool; object var_1156_object;
	object var_1157_object;
	func_5604(var_1157_object);
	var_1157_object = var_1156_object;
	func_5324(var_1155_bool, var_1156_object);
	object var_1158_object; object var_1159_object;
	var_1135_object = var_1158_object;
	var_1141_object = var_1159_object;
	TaskCall(16);
	func_3419(var_1160_object, var_1161_object, var_1162_string, var_1163_bool, var_1158_object, var_1159_object);
	TaskReturn();
	bool var_1144_bool;
	var_1141_object->IsDialogEnd(var_1144_bool);
	
	for(;;) {
		var_1188_bool = !var_1144_bool; //@nz
		if(var_1188_bool == 0) goto Label_3408;
		@sync();
		var_1141_object->IsDialogEnd(var_1144_bool);
	}
	
Label_3408:
	object var_1189_object;
	var_1135_object = var_1189_object;
	func_5306();
	@StopDialog(var_1141_object);
	var_1141_object->GetReturnValue(-1);
	int var_1143_int = var_1134_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5906(void)
{
	@SetVariable("ood4Grif2", 1);
}


// @pe
void func_5912(void)
{
	@SetVariable("ood5Grif1", 1);
}


// @pe
void func_5918(void)
{
	@SetVariable("d5q01ThiefsWillHelp", 1);
	@SetVariable("d5q01PlayCutscene", 1);
	func_6291();
}


// @pe
void func_2346(object var_2_object, string var_931_string)
{
	bool var_932_bool;
	func_5745(var_932_bool);
	if(!var_932_bool) //@nz
		return 0;
	if(var_931_string == var_2_object)
		return 0;
	string var_935_string; bool var_936_bool;
	var_931_string = var_935_string;
	if(var_931_string == "")
		var_936_bool = false;
	else
		var_936_bool = true;
	func_5539(var_935_string, var_936_bool);
	var_2_object = var_931_string;
	
}


// @pe
void func_5931(object var_80_object)
{
	var_80_object->SetReturnValue(1000);
}


void func_5419(bool var_329_bool, object var_330_object)
{
	bool var_338_bool; int var_339_int; string var_340_string;
	int var_342_int;
	func_5698(var_342_int);
	string var_336_string = ("d" + var_342_int) + "m";
	int var_337_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_330_object->HasProperty((var_336_string + (var_337_int + 1)), var_338_bool);
			if(!var_338_bool) { //@nz
			} else {
				var_337_int += 1;
			}
		}
		if(!var_337_int) { //@nz
			var_329_bool = false;
			return 10;
		}
		var_339_int = 0;
		if(var_337_int > 1)
			@irand(var_339_int, var_337_int);
		var_330_object->GetProperty((var_336_string + (var_339_int + 1)), var_340_string);
		bool var_356_bool; string var_357_string;
		var_340_string = var_357_string;
		func_5554(var_356_bool, var_357_string);
		var_356_bool = var_329_bool;
		return 10;

	}
}


// @pe
void func_5936(void)
{
	@SetVariable("KnowGrif", 1);
}


void func_5942(void)
{
	object var_83_object;
	func_6345(var_83_object);
	object var_82_object;
	var_83_object = var_82_object;
	float var_94_float;
	func_5693(var_94_float);
	var_82_object->AddMark("d5q01GrifWantsMoney", "pt_map_grif", 1, 515350, var_94_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3899(object var_2_object, string var_1226_string)
{
	bool var_1227_bool;
	func_5745(var_1227_bool);
	if(!var_1227_bool) //@nz
		return 0;
	if(var_1226_string == var_2_object)
		return 0;
	string var_1230_string; bool var_1231_bool;
	var_1226_string = var_1230_string;
	if(var_1226_string == "")
		var_1231_bool = false;
	else
		var_1231_bool = true;
	func_5539(var_1230_string, var_1231_bool);
	var_2_object = var_1226_string;
	
}


// @pe
void func_5958(void)
{
	@SetVariable("d2KnowBigVladIsBad", 1);
}


// @pe
void func_1868(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_706_object, object var_707_object)
{
	var_0_bool = var_707_object;
	var_1_object = var_706_object;
	var_3_object = false;
	if(1 != 0) {
		func_1946(var_707_object, "Neutral");
		var_0_bool->SetMessage(509843); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_722_bool = false;
		bool var_723_bool;
		func_5994(var_1_object);
		if(var_723_bool != 0) {
			bool var_729_bool;
			func_6078(var_1_object);
			if(!var_729_bool) //@nz
				var_722_bool = true;
		}
		if(var_722_bool != 0)
			var_0_bool->AddReply(509848, 10848, 10847); //@t
		var_0_bool->AddReply(514117, -1, 15331); //@t
		var_0_bool->AddReply(514118, -1, 15332); //@t
		goto Label_1916;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x750";
	}
Label_1916:
	bool var_745_bool;
	func_5745(var_745_bool);
	if(var_745_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1945;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1945:
		return 0;

	}
	
}


// @pe
void func_5964(void)
{
	@SetVariable("ood5Grif2", 1);
}


void func_337(bool var_0_bool, int var_584_int, object var_585_object)
{
	var_0_bool = var_585_object;
	bool var_595_bool; object var_596_object;
	var_585_object = var_596_object;
	func_5237(var_595_bool, var_596_object, 70.0);
	if(!var_595_bool) { //@nz
		var_584_int = -2;
		return 8;
	}
	object var_591_object;
	@CreateDialog(var_591_object);
	int var_599_int;
	func_5739(var_599_int);
	var_591_object->SetNPCName(var_599_int);
	int var_600_int;
	func_5737(var_600_int);
	var_591_object->SetNPCDescription(var_600_int);
	string var_601_string;
	func_5741(var_601_string);
	var_591_object->SetPhoto(var_601_string);
	string var_602_string;
	func_5743(var_602_string);
	var_591_object->SetPhoto2(var_602_string);
	int var_603_int;
	func_6536(var_603_int);
	var_591_object->SetPlayerName(var_603_int);
	bool var_592_bool;
	@IsOverrideActive(var_592_bool);
	if(var_592_bool != 0) {
		var_584_int = -2;
		return 8;
	}
	@DoDialog(var_591_object);
	bool var_605_bool; object var_606_object;
	object var_607_object;
	func_5604(var_607_object);
	var_607_object = var_606_object;
	func_5324(var_605_bool, var_606_object);
	object var_608_object; object var_609_object;
	var_585_object = var_608_object;
	var_591_object = var_609_object;
	TaskCall(4);
	func_418(var_610_object, var_611_object, var_612_string, var_613_bool, var_608_object, var_609_object);
	TaskReturn();
	bool var_594_bool;
	var_591_object->IsDialogEnd(var_594_bool);
	
	for(;;) {
		var_675_bool = !var_594_bool; //@nz
		if(var_675_bool == 0) goto Label_407;
		@sync();
		var_591_object->IsDialogEnd(var_594_bool);
	}
	
Label_407:
	object var_676_object;
	var_585_object = var_676_object;
	func_5306();
	@StopDialog(var_591_object);
	var_591_object->GetReturnValue(-1);
	int var_593_int = var_584_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5970(bool var_487_bool)
{
	int var_489_int;
	func_5625(var_489_int, "ood1Grif1");
	if(var_489_int == 0) {
		var_487_bool = true;
		return 0;
	}
	var_487_bool = false;
}


void func_4946(bool var_0_bool)
{
	bool var_69_bool;
	func_5232(var_69_bool);
	if(!var_69_bool) //@nz
		@Hold();
	@GetDirection(var_0_bool);
	
	for(;;) {
		func_5122();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_5462(bool var_542_bool, object var_543_object)
{
	object var_545_object;
	var_543_object = var_545_object;
	bool var_544_bool;
	func_5470(var_544_bool, var_545_object, (float)70);
	var_544_bool = var_542_bool;
}


// @pe
void func_3419(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1158_object, object var_1159_object)
{
	var_0_bool = var_1159_object;
	var_1_object = var_1158_object;
	var_3_object = false;
	if(1 != 0) {
		func_3477(var_1159_object, "Sly");
		var_0_bool->SetMessage(538735); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(538736, -1, 40647); //@t
		var_0_bool->AddReply(538754, -1, 40666); //@t
		goto Label_3447;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd5f";
	}
Label_3447:
	bool var_1180_bool;
	func_5745(var_1180_bool);
	if(var_1180_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3476;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3476:
		return 0;

	}
	
}


// @pe
void func_5982(bool var_515_bool)
{
	int var_517_int;
	func_5625(var_517_int, "ood1Grif2");
	if(var_517_int == 0) {
		var_515_bool = true;
		return 0;
	}
	var_515_bool = false;
}


void func_5470(bool var_544_bool, object var_545_object, float var_546_float)
{
	cvector var_556_cvector;
	var_545_object->GetPosition(var_556_cvector);
	float var_555_float;
	var_545_object->GetEyesHeight(var_555_float);
	var_563_float = GetByIndex(var_556_cvector, 1);
	SetByIndex(var_556_cvector, 1) = (var_563_float + var_555_float);
	cvector var_557_cvector;
	@GetPosition(var_557_cvector);
	@GetEyesHeight(var_555_float);
	var_564_float = GetByIndex(var_557_cvector, 1);
	SetByIndex(var_557_cvector, 1) = (var_564_float + var_555_float);
	cvector var_558_cvector = var_556_cvector - var_557_cvector;
	var_565_float = GetByIndex(var_558_cvector, 1);
	SetByIndex(var_558_cvector, 1) = (float)0;
	var_567_float = sqrt(var_558_cvector | var_558_cvector);
	var_558_cvector /= var_567_float;
	cvector var_559_cvector = -var_558_cvector;
	cvector var_560_cvector = (var_558_cvector * var_546_float) - [0.0, 10.0, 0.0];
	bool var_562_bool;
	@IsOverrideActive(var_562_bool);
	if(var_562_bool != 0)
		var_544_bool = false;
	@StopWorld();
	@CameraTransit((var_557_cvector + var_560_cvector), var_559_cvector, true);
	var_572_float = GetByIndex(var_560_cvector, 0);
	var_573_float = GetByIndex(var_560_cvector, 2);
	@Rotate(var_572_float, var_573_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_544_bool = true;
}


void func_4960(bool var_92_bool)
{
	object var_94_object;
	@FindActor(var_94_object, "player");
	if(!var_94_object) //@nz
		var_92_bool = false;
	bool var_97_bool; object var_98_object;
	var_94_object = var_98_object;
	func_5223(var_97_bool, var_98_object);
	var_97_bool = var_92_bool;
}
EMIT "Stack[-1] = 0";


void func_2916(bool var_0_bool, int var_1012_int, object var_1013_object)
{
	var_0_bool = var_1013_object;
	bool var_1023_bool; object var_1024_object;
	var_1013_object = var_1024_object;
	func_5237(var_1023_bool, var_1024_object, 70.0);
	if(!var_1023_bool) { //@nz
		var_1012_int = -2;
		return 8;
	}
	object var_1019_object;
	@CreateDialog(var_1019_object);
	int var_1027_int;
	func_5739(var_1027_int);
	var_1019_object->SetNPCName(var_1027_int);
	int var_1028_int;
	func_5737(var_1028_int);
	var_1019_object->SetNPCDescription(var_1028_int);
	string var_1029_string;
	func_5741(var_1029_string);
	var_1019_object->SetPhoto(var_1029_string);
	string var_1030_string;
	func_5743(var_1030_string);
	var_1019_object->SetPhoto2(var_1030_string);
	int var_1031_int;
	func_6536(var_1031_int);
	var_1019_object->SetPlayerName(var_1031_int);
	bool var_1020_bool;
	@IsOverrideActive(var_1020_bool);
	if(var_1020_bool != 0) {
		var_1012_int = -2;
		return 8;
	}
	@DoDialog(var_1019_object);
	bool var_1033_bool; object var_1034_object;
	object var_1035_object;
	func_5604(var_1035_object);
	var_1035_object = var_1034_object;
	func_5324(var_1033_bool, var_1034_object);
	object var_1036_object; object var_1037_object;
	var_1013_object = var_1036_object;
	var_1019_object = var_1037_object;
	TaskCall(12);
	func_2997(var_1038_object, var_1039_object, var_1040_string, var_1041_bool, var_1036_object, var_1037_object);
	TaskReturn();
	bool var_1022_bool;
	var_1019_object->IsDialogEnd(var_1022_bool);
	
	for(;;) {
		var_1066_bool = !var_1022_bool; //@nz
		if(var_1066_bool == 0) goto Label_2986;
		@sync();
		var_1019_object->IsDialogEnd(var_1022_bool);
	}
	
Label_2986:
	object var_1067_object;
	var_1013_object = var_1067_object;
	func_5306();
	@StopDialog(var_1019_object);
	var_1019_object->GetReturnValue(-1);
	int var_1021_int = var_1012_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5994(bool var_723_bool)
{
	int var_725_int;
	func_5625(var_725_int, "ood3Grif1");
	if(var_725_int == 0) {
		var_723_bool = true;
		return 0;
	}
	var_723_bool = false;
}


void func_4975(bool var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0);
	var_145_float = GetByIndex(var_0_bool, 2);
	@RotateAsync(var_144_float, var_145_float);
}


void func_4980(bool var_75_bool)
{
	object var_78_object;
	@FindActor(var_78_object, "player");
	if(!var_78_object) { //@nz
		var_75_bool = false;
		return 4;
	}
	float var_82_float; object var_83_object;
	func_5198(var_82_float, var_83_object);
	if(var_82_float > 90000.0) {
		var_75_bool = false;
		return 4;
	}
	bool var_79_bool;
	@CanSee(var_79_bool, var_83_object);
	var_79_bool = var_75_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_6006(bool var_852_bool)
{
	int var_854_int;
	func_5625(var_854_int, "ood4Grif3");
	if(var_854_int == 0) {
		var_852_bool = true;
		return 0;
	}
	var_852_bool = false;
}


// @pe
void func_6018(bool var_861_bool)
{
	int var_863_int;
	func_5625(var_863_int, "ood4Grif4");
	if(var_863_int == 0) {
		var_861_bool = true;
		return 0;
	}
	var_861_bool = false;
}


void func_6531(int var_104_int, string var_105_string)
{
	int var_107_int;
	@GetInvItemByName(var_107_int, var_105_string);
	var_107_int = var_104_int;
}


void func_3971(bool var_0_bool, int var_1317_int, object var_1318_object)
{
	var_0_bool = var_1318_object;
	bool var_1328_bool; object var_1329_object;
	var_1318_object = var_1329_object;
	func_5237(var_1328_bool, var_1329_object, 70.0);
	if(!var_1328_bool) { //@nz
		var_1317_int = -2;
		return 8;
	}
	object var_1324_object;
	@CreateDialog(var_1324_object);
	int var_1332_int;
	func_5739(var_1332_int);
	var_1324_object->SetNPCName(var_1332_int);
	int var_1333_int;
	func_5737(var_1333_int);
	var_1324_object->SetNPCDescription(var_1333_int);
	string var_1334_string;
	func_5741(var_1334_string);
	var_1324_object->SetPhoto(var_1334_string);
	string var_1335_string;
	func_5743(var_1335_string);
	var_1324_object->SetPhoto2(var_1335_string);
	int var_1336_int;
	func_6536(var_1336_int);
	var_1324_object->SetPlayerName(var_1336_int);
	bool var_1325_bool;
	@IsOverrideActive(var_1325_bool);
	if(var_1325_bool != 0) {
		var_1317_int = -2;
		return 8;
	}
	@DoDialog(var_1324_object);
	bool var_1338_bool; object var_1339_object;
	object var_1340_object;
	func_5604(var_1340_object);
	var_1340_object = var_1339_object;
	func_5324(var_1338_bool, var_1339_object);
	object var_1341_object; object var_1342_object;
	var_1318_object = var_1341_object;
	var_1324_object = var_1342_object;
	TaskCall(22);
	func_4052(var_1343_object, var_1344_object, var_1345_string, var_1346_bool, var_1341_object, var_1342_object);
	TaskReturn();
	bool var_1327_bool;
	var_1324_object->IsDialogEnd(var_1327_bool);
	
	for(;;) {
		var_1374_bool = !var_1327_bool; //@nz
		if(var_1374_bool == 0) goto Label_4041;
		@sync();
		var_1324_object->IsDialogEnd(var_1327_bool);
	}
	
Label_4041:
	object var_1375_object;
	var_1318_object = var_1375_object;
	func_5306();
	@StopDialog(var_1324_object);
	var_1324_object->GetReturnValue(-1);
	int var_1326_int = var_1317_int;
}
EMIT "Stack[-4] = 0";


void func_6536(int var_278_int)
{
	int var_280_int;
	@GetVariable("branch", var_280_int);
	if(var_280_int == 0) {
		var_278_int = 1;
		return 2;
	EMIT "GOTO 0x1997";
	}
	if(var_280_int == 1) {
		var_278_int = 2;
		return 2;
	}
	var_278_int = 3;
}


void func_5002(void)
{
	float var_1442_float;
	@rand(var_1442_float, 8, 16);
	@SetTimer(10, var_1442_float);
}


// @pe
void func_6030(bool var_625_bool)
{
	int var_627_int;
	func_5625(var_627_int, "ood2Grif2");
	if(var_627_int == 0) {
		var_625_bool = true;
		return 0;
	}
	var_625_bool = false;
}


// @pe
void func_5518(void)
{
	@CameraSwitchToNormal(true);
}


void func_5523(string var_417_string)
{
	bool var_421_bool; float var_422_float; float var_423_float;
	@lshHasAnimation(var_421_bool, var_417_string);
	if(var_421_bool != 0) {
		@lshGetAnimTimes(var_417_string, var_422_float, var_423_float);
		@lshPlayAnimation(var_422_float, var_423_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_417_string);
	}
	
}


void func_5011(void)
{
	@KillTimer(10);
}


// @pe
void func_3477(object var_2_object, string var_1165_string)
{
	bool var_1166_bool;
	func_5745(var_1166_bool);
	if(!var_1166_bool) //@nz
		return 0;
	if(var_1165_string == var_2_object)
		return 0;
	string var_1169_string; bool var_1170_bool;
	var_1165_string = var_1169_string;
	if(var_1165_string == "")
		var_1170_bool = false;
	else
		var_1170_bool = true;
	func_5539(var_1169_string, var_1170_bool);
	var_2_object = var_1165_string;
	
}


void func_6553(int var_191_int)
{
	int var_193_int;
	@GetVariable("branch", var_193_int);
	var_193_int = var_191_int;
}


// @pe
void func_6042(bool var_640_bool)
{
	int var_642_int;
	func_5625(var_642_int, "ood2Grif3");
	if(var_642_int == 0) {
		var_640_bool = true;
		return 0;
	}
	var_640_bool = false;
}


// @pe
void func_1946(object var_2_object, string var_713_string)
{
	bool var_714_bool;
	func_5745(var_714_bool);
	if(!var_714_bool) //@nz
		return 0;
	if(var_713_string == var_2_object)
		return 0;
	string var_717_string; bool var_718_bool;
	var_713_string = var_717_string;
	if(var_713_string == "")
		var_718_bool = false;
	else
		var_718_bool = true;
	func_5539(var_717_string, var_718_bool);
	var_2_object = var_713_string;
	
}


// @pe
void func_6559(object var_541_object)
{
	object var_543_object;
	var_541_object = var_543_object;
	bool var_542_bool;
	func_5462(var_542_bool, var_543_object);
	if(!var_542_bool) //@nz
		return 0;
	object var_575_object;
	var_541_object = var_575_object;
	TaskCall(0);
	func_0(var_575_object);
	TaskReturn();
	object var_579_object;
	var_541_object = var_579_object;
	func_5518();
}


// @pe
void func_418(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_608_object, object var_609_object)
{
	var_0_bool = var_609_object;
	var_1_object = var_608_object;
	var_3_object = false;
	if(1 != 0) {
		func_520(var_609_object, "Neutral");
		var_0_bool->SetMessage(506959); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_624_bool = false;
		bool var_625_bool;
		func_6030(var_1_object);
		if(var_625_bool != 0) {
			bool var_631_bool;
			func_6066(var_1_object);
			if(var_631_bool != 0)
				var_624_bool = true;
		}
		if(var_624_bool != 0)
			var_0_bool->AddReply(507328, 8080, 8079); //@t
		bool var_640_bool;
		func_6042(var_1_object);
		if(var_640_bool != 0)
			var_0_bool->AddReply(507319, 8070, 8069); //@t
		bool var_649_bool;
		func_6054(var_1_object);
		if(var_649_bool != 0)
			var_0_bool->AddReply(507335, 8049, 8087); //@t
		var_0_bool->AddReply(536144, -1, 37903); //@t
		var_0_bool->AddReply(507530, -1, 8312); //@t
		var_0_bool->AddReply(533848, -1, 35398); //@t
		goto Label_490;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a6";
	}
Label_490:
	bool var_667_bool;
	func_5745(var_667_bool);
	if(var_667_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_519;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_519:
		return 0;

	}
	
}


void func_5539(string var_392_string, bool var_393_bool)
{
	bool var_399_bool; float var_400_float; float var_401_float;
	@lshHasAnimation(var_399_bool, var_392_string);
	if(var_399_bool != 0) {
		@lshGetAnimTimes(var_392_string, var_400_float, var_401_float);
		@lshPlayAnimation(var_400_float, var_401_float, var_393_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_392_string);
	}
	
}


// @pe
void func_6054(bool var_649_bool)
{
	int var_651_int;
	func_5625(var_651_int, "ood2Grif4");
	if(var_651_int == 0) {
		var_649_bool = true;
		return 0;
	}
	var_649_bool = false;
}


// @pe
void func_6066(bool var_631_bool)
{
	int var_633_int;
	func_5625(var_633_int, "d2q02");
	if(var_633_int == 6)
		var_631_bool = true;
	var_631_bool = false;
}


// @pe
void func_6578(object var_85_object, object var_449_object, object var_586_object, object var_684_object, object var_762_object, object var_885_object, object var_1014_object, object var_1075_object, object var_1136_object, object var_1197_object, object var_1258_object, object var_1319_object)
{
	var_86_int = GlobalVars[2];
	int var_87_int;
	func_5698(var_87_int);
	if(var_86_int != var_87_int) {
		func_6362();
		var_211_int = GlobalVars[2];
		int var_212_int;
		func_5698(var_212_int);
		var_212_int = var_211_int;
		GlobalVars[2] = var_211_int;
	}
	var_213_bool = GlobalVars[1];
	if(!var_213_bool) { //@nz
		int var_215_int; object var_216_object;
		var_85_object = var_216_object;
		TaskCall(1);
		func_22(var_217_object, var_215_int, var_216_object);
		TaskReturn();
		var_442_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_443_bool;
	func_5707(var_443_bool, 1);
	if(var_443_bool != 0) {
		int var_447_int; object var_448_object;
		var_85_object = var_448_object;
		TaskCall(23);
		func_4192(var_449_object, var_447_int, var_448_object);
		TaskReturn();
		if(1000 == var_449_object) {
			object var_541_object;
			var_85_object = var_541_object;
			func_6559(var_541_object);
		}
		return 0;
	}
	bool var_581_bool;
	func_5707(var_581_bool, 2);
	if(var_581_bool != 0) {
		int var_584_int; object var_585_object;
		var_85_object = var_585_object;
		TaskCall(3);
		func_337(var_586_object, var_584_int, var_585_object);
		TaskReturn();
		if(1000 == var_586_object) {
			object var_678_object;
			var_85_object = var_678_object;
			func_6559(var_678_object);
		}
		return 0;
	}
	bool var_679_bool;
	func_5707(var_679_bool, 3);
	if(var_679_bool != 0) {
		int var_682_int; object var_683_object;
		var_85_object = var_683_object;
		TaskCall(7);
		func_1787(var_684_object, var_682_int, var_683_object);
		TaskReturn();
		if(1000 == var_684_object) {
			object var_756_object;
			var_85_object = var_756_object;
			func_6559(var_756_object);
		}
		return 0;
	}
	bool var_757_bool;
	func_5707(var_757_bool, 4);
	if(var_757_bool != 0) {
		int var_760_int; object var_761_object;
		var_85_object = var_761_object;
		TaskCall(5);
		func_958(var_762_object, var_760_int, var_761_object);
		TaskReturn();
		if(1000 == var_762_object) {
			object var_879_object;
			var_85_object = var_879_object;
			func_6559(var_879_object);
		}
		return 0;
	}
	bool var_880_bool;
	func_5707(var_880_bool, 5);
	if(var_880_bool != 0) {
		int var_883_int; object var_884_object;
		var_85_object = var_884_object;
		TaskCall(9);
		func_2110(var_885_object, var_883_int, var_884_object);
		TaskReturn();
		if(1000 == var_885_object) {
			object var_1008_object;
			var_85_object = var_1008_object;
			func_6559(var_1008_object);
		}
		return 0;
	}
	bool var_1009_bool;
	func_5707(var_1009_bool, 6);
	if(var_1009_bool != 0) {
		int var_1012_int; object var_1013_object;
		var_85_object = var_1013_object;
		TaskCall(11);
		func_2916(var_1014_object, var_1012_int, var_1013_object);
		TaskReturn();
		if(1000 == var_1014_object) {
			object var_1069_object;
			var_85_object = var_1069_object;
			func_6559(var_1069_object);
		}
		return 0;
	}
	bool var_1070_bool;
	func_5707(var_1070_bool, 7);
	if(var_1070_bool != 0) {
		int var_1073_int; object var_1074_object;
		var_85_object = var_1074_object;
		TaskCall(13);
		func_3127(var_1075_object, var_1073_int, var_1074_object);
		TaskReturn();
		if(1000 == var_1075_object) {
			object var_1130_object;
			var_85_object = var_1130_object;
			func_6559(var_1130_object);
		}
		return 0;
	}
	bool var_1131_bool;
	func_5707(var_1131_bool, 8);
	if(var_1131_bool != 0) {
		int var_1134_int; object var_1135_object;
		var_85_object = var_1135_object;
		TaskCall(15);
		func_3338(var_1136_object, var_1134_int, var_1135_object);
		TaskReturn();
		if(1000 == var_1136_object) {
			object var_1191_object;
			var_85_object = var_1191_object;
			func_6559(var_1191_object);
		}
		return 0;
	}
	bool var_1192_bool;
	func_5707(var_1192_bool, 9);
	if(var_1192_bool != 0) {
		int var_1195_int; object var_1196_object;
		var_85_object = var_1196_object;
		TaskCall(19);
		func_3760(var_1197_object, var_1195_int, var_1196_object);
		TaskReturn();
		if(1000 == var_1197_object) {
			object var_1252_object;
			var_85_object = var_1252_object;
			func_6559(var_1252_object);
		}
		return 0;
	}
	bool var_1253_bool;
	func_5707(var_1253_bool, 10);
	if(var_1253_bool != 0) {
		int var_1256_int; object var_1257_object;
		var_85_object = var_1257_object;
		TaskCall(17);
		func_3549(var_1258_object, var_1256_int, var_1257_object);
		TaskReturn();
		if(1000 == var_1258_object) {
			object var_1313_object;
			var_85_object = var_1313_object;
			func_6559(var_1313_object);
		}
		return 0;
	}
	bool var_1314_bool;
	func_5707(var_1314_bool, 11);
	if(var_1314_bool != 0) {
		int var_1317_int; object var_1318_object;
		var_85_object = var_1318_object;
		TaskCall(21);
		func_3971(var_1319_object, var_1317_int, var_1318_object);
		TaskReturn();
		if(1000 == var_1319_object) {
			object var_1377_object;
			var_85_object = var_1377_object;
			func_6559(var_1377_object);
		}
		return 0;
	}
	bool var_1378_bool;
	func_5707(var_1378_bool, 12);
	if(var_1378_bool != 0) {
		int var_1380_int; object var_1381_object;
		var_85_object = var_1381_object;
		TaskCall(25);
		func_4677(var_1382_object, var_1380_int, var_1381_object);
		TaskReturn();
		return 0;
	}
}


void func_5554(bool var_321_bool, string var_322_string)
{
	bool var_324_bool;
	bool var_325_bool;
	func_5745(var_325_bool);
	if(var_325_bool != 0) {
		@lshHasSpeech(var_324_bool, var_322_string);
		if(var_324_bool != 0) {
			@lshPlaySpeech(var_322_string);
			var_321_bool = true;
		}
	}
	var_321_bool = false;
}


// @pe
void func_2997(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1036_object, object var_1037_object)
{
	var_0_bool = var_1037_object;
	var_1_object = var_1036_object;
	var_3_object = false;
	if(1 != 0) {
		func_3055(var_1037_object, "Fear");
		var_0_bool->SetMessage(514122); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514123, -1, 15337); //@t
		var_0_bool->AddReply(514124, -1, 15338); //@t
		goto Label_3025;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbb9";
	}
Label_3025:
	bool var_1058_bool;
	func_5745(var_1058_bool);
	if(var_1058_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3054;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3054:
		return 0;

	}
	
}


// @pe
void func_6078(bool var_729_bool)
{
	int var_731_int;
	func_5625(var_731_int, "d3q01");
	if(var_731_int == 0) {
		var_729_bool = true;
		return 0;
	}
	var_729_bool = false;
}


void func_958(bool var_0_bool, int var_760_int, object var_761_object)
{
	var_0_bool = var_761_object;
	bool var_771_bool; object var_772_object;
	var_761_object = var_772_object;
	func_5237(var_771_bool, var_772_object, 70.0);
	if(!var_771_bool) { //@nz
		var_760_int = -2;
		return 8;
	}
	object var_767_object;
	@CreateDialog(var_767_object);
	int var_775_int;
	func_5739(var_775_int);
	var_767_object->SetNPCName(var_775_int);
	int var_776_int;
	func_5737(var_776_int);
	var_767_object->SetNPCDescription(var_776_int);
	string var_777_string;
	func_5741(var_777_string);
	var_767_object->SetPhoto(var_777_string);
	string var_778_string;
	func_5743(var_778_string);
	var_767_object->SetPhoto2(var_778_string);
	int var_779_int;
	func_6536(var_779_int);
	var_767_object->SetPlayerName(var_779_int);
	bool var_768_bool;
	@IsOverrideActive(var_768_bool);
	if(var_768_bool != 0) {
		var_760_int = -2;
		return 8;
	}
	@DoDialog(var_767_object);
	bool var_781_bool; object var_782_object;
	object var_783_object;
	func_5604(var_783_object);
	var_783_object = var_782_object;
	func_5324(var_781_bool, var_782_object);
	object var_784_object; object var_785_object;
	var_761_object = var_784_object;
	var_767_object = var_785_object;
	TaskCall(6);
	func_1039(var_786_object, var_787_object, var_788_string, var_789_bool, var_784_object, var_785_object);
	TaskReturn();
	bool var_770_bool;
	var_767_object->IsDialogEnd(var_770_bool);
	
	for(;;) {
		var_876_bool = !var_770_bool; //@nz
		if(var_876_bool == 0) goto Label_1028;
		@sync();
		var_767_object->IsDialogEnd(var_770_bool);
	}
	
Label_1028:
	object var_877_object;
	var_761_object = var_877_object;
	func_5306();
	@StopDialog(var_767_object);
	var_767_object->GetReturnValue(-1);
	int var_769_int = var_760_int;
}
EMIT "Stack[-4] = 0";


void func_5569(void)
{
	bool var_70_bool;
	func_5745(var_70_bool);
	if(var_70_bool != 0)
		@lshStopSpeech();
}


void func_5576(string var_128_string, int var_129_int, int var_130_int)
{
	bool var_132_bool;
	int var_134_int;
	var_129_int = var_134_int;
	int var_135_int;
	var_130_int = var_135_int;
	bool var_133_bool;
	func_5620(var_133_bool, var_134_int, var_135_int);
	if(var_133_bool != 0)
		@AddItem(var_132_bool, var_128_string, 0);
}


// @pe
void func_6090(bool var_792_bool)
{
	int var_794_int;
	func_5625(var_794_int, "d4q03");
	if(var_794_int == 1)
		var_792_bool = true;
	var_792_bool = false;
}


void func_5587(string var_139_string, int var_140_int, int var_141_int, int var_142_int, int var_143_int)
{
	int var_146_int; bool var_147_bool;
	int var_149_int;
	var_140_int = var_149_int;
	int var_150_int;
	var_141_int = var_150_int;
	bool var_148_bool;
	func_5620(var_148_bool, var_149_int, var_150_int);
	if(var_148_bool != 0) {
		@irand(var_146_int, ((var_143_int - var_142_int) + 1));
		@AddItem(var_147_bool, var_139_string, 0, (var_146_int + var_142_int));
	}
}


// @pe
void func_4052(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1341_object, object var_1342_object)
{
	var_0_bool = var_1342_object;
	var_1_object = var_1341_object;
	var_3_object = false;
	if(1 != 0) {
		func_4115(var_1342_object, "Fear");
		var_0_bool->SetMessage(514186); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(514187, -1, 15401); //@t
		var_0_bool->AddReply(514188, -1, 15402); //@t
		var_0_bool->AddReply(539631, -1, 41577); //@t
		goto Label_4085;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xfd8";
	}
Label_4085:
	bool var_1366_bool;
	func_5745(var_1366_bool);
	if(var_1366_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5523(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4114;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4114:
		return 0;

	}
	
}


// @pe
void func_6102(bool var_798_bool)
{
	int var_800_int;
	func_5625(var_800_int, "ood4Grif1");
	if(var_800_int == 0) {
		var_798_bool = true;
		return 0;
	}
	var_798_bool = false;
}


void func_3549(bool var_0_bool, int var_1256_int, object var_1257_object)
{
	var_0_bool = var_1257_object;
	bool var_1267_bool; object var_1268_object;
	var_1257_object = var_1268_object;
	func_5237(var_1267_bool, var_1268_object, 70.0);
	if(!var_1267_bool) { //@nz
		var_1256_int = -2;
		return 8;
	}
	object var_1263_object;
	@CreateDialog(var_1263_object);
	int var_1271_int;
	func_5739(var_1271_int);
	var_1263_object->SetNPCName(var_1271_int);
	int var_1272_int;
	func_5737(var_1272_int);
	var_1263_object->SetNPCDescription(var_1272_int);
	string var_1273_string;
	func_5741(var_1273_string);
	var_1263_object->SetPhoto(var_1273_string);
	string var_1274_string;
	func_5743(var_1274_string);
	var_1263_object->SetPhoto2(var_1274_string);
	int var_1275_int;
	func_6536(var_1275_int);
	var_1263_object->SetPlayerName(var_1275_int);
	bool var_1264_bool;
	@IsOverrideActive(var_1264_bool);
	if(var_1264_bool != 0) {
		var_1256_int = -2;
		return 8;
	}
	@DoDialog(var_1263_object);
	bool var_1277_bool; object var_1278_object;
	object var_1279_object;
	func_5604(var_1279_object);
	var_1279_object = var_1278_object;
	func_5324(var_1277_bool, var_1278_object);
	object var_1280_object; object var_1281_object;
	var_1257_object = var_1280_object;
	var_1263_object = var_1281_object;
	TaskCall(18);
	func_3630(var_1282_object, var_1283_object, var_1284_string, var_1285_bool, var_1280_object, var_1281_object);
	TaskReturn();
	bool var_1266_bool;
	var_1263_object->IsDialogEnd(var_1266_bool);
	
	for(;;) {
		var_1310_bool = !var_1266_bool; //@nz
		if(var_1310_bool == 0) goto Label_3619;
		@sync();
		var_1263_object->IsDialogEnd(var_1266_bool);
	}
	
Label_3619:
	object var_1311_object;
	var_1257_object = var_1311_object;
	func_5306();
	@StopDialog(var_1263_object);
	var_1263_object->GetReturnValue(-1);
	int var_1265_int = var_1256_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6114(bool var_830_bool)
{
	int var_832_int;
	func_5625(var_832_int, "ood4Grif2");
	if(var_832_int == 0) {
		var_830_bool = true;
		return 0;
	}
	var_830_bool = false;
}


void func_5604(object var_289_object)
{
	object var_291_object;
	@self(var_291_object);
	var_291_object = var_289_object;
}
EMIT "Stack[-1] = 0";


void func_5610(cvector var_253_cvector, cvector var_254_cvector)
{
	float var_257_float = sqrt(var_254_cvector | var_254_cvector);
	if(var_257_float < 0.000001)
		var_253_cvector = [0.0, 0.0, 0.0];
	var_253_cvector = var_254_cvector / var_257_float;
}


// @pe
void func_6126(bool var_836_bool)
{
	int var_838_int;
	func_5625(var_838_int, "d4q03_alldead");
	if(var_838_int == 1)
		var_836_bool = true;
	var_836_bool = false;
}


// @pe
void func_3055(object var_2_object, string var_1043_string)
{
	bool var_1044_bool;
	func_5745(var_1044_bool);
	if(!var_1044_bool) //@nz
		return 0;
	if(var_1043_string == var_2_object)
		return 0;
	string var_1047_string; bool var_1048_bool;
	var_1043_string = var_1047_string;
	if(var_1043_string == "")
		var_1048_bool = false;
	else
		var_1048_bool = true;
	func_5539(var_1047_string, var_1048_bool);
	var_2_object = var_1043_string;
	
}


void func_5620(bool var_133_bool, int var_134_int, int var_135_int)
{
	int var_137_int;
	@irand(var_137_int, var_135_int);
	var_133_bool = var_137_int < var_134_int;
}


void func_5625(int var_489_int, string var_490_string)
{
	int var_492_int;
	@GetVariable(var_490_string, var_492_int);
	var_492_int = var_489_int;
}


// @pe
void func_6138(bool var_957_bool)
{
	int var_959_int;
	func_5625(var_959_int, "d5q01");
	if(var_959_int == 6)
		var_957_bool = true;
	var_957_bool = false;
}


void func_5630(int var_156_int, int var_157_int)
{
	object var_159_object;
	@CreateIntVector(var_159_object);
	var_159_object->add(var_156_int);
	var_159_object->add(var_157_int);
	@SendWorldWndMessage(3, var_159_object);
}
EMIT "Stack[-1] = 0";


