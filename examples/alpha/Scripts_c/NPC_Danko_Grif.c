// @GLOBALS: 0:object:,1:bool:,2:int:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool)
	{
		@StopGroup0();
	}

}


task task_1
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool)
	{
		@lshStopAnimation();
		@StopTrade();
		var_0_bool = true;
	}

}


maintask task_2
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool)
	{
		func_7664();
		bool var_73_bool;
		func_6261(var_73_bool);
		if(!var_73_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_6378("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool)
	{
		object var_72_object;
		func_7690(var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_72_object, var_72_object);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool)
	{
		object var_73_object;
		var_71_bool = var_73_object;
		bool var_72_bool;
		func_6249(var_72_bool, var_73_object);
		@WaitForAnimEnd();
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_71_string == 444) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_6790();
				func_202(var_72_bool, "Neutral");
				var_0_bool->SetMessage(383); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(384, 448, 445); //@t
				var_0_bool->AddReply(385, 449, 446); //@t
				var_0_bool->AddReply(386, 450, 447); //@t
				return 0;
			}
			if(var_71_string == 450) {
				func_202(var_72_bool, "Neutral");
				var_0_bool->SetMessage(389); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(395, 454, 459); //@t
				var_0_bool->AddReply(396, 454, 460); //@t
				return 0;
			}
			if(var_71_string == 449) {
				func_202(var_72_bool, "Neutral");
				var_0_bool->SetMessage(388); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(394, 454, 456); //@t
				var_0_bool->AddReply(392, 454, 453); //@t
				return 0;
			}
			if(var_71_string == 448) {
				func_202(var_72_bool, "Neutral");
				var_0_bool->SetMessage(387); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(390, 454, 451); //@t
				var_0_bool->AddReply(391, 454, 452); //@t
				return 0;
			}
			if(var_71_string == 454) {
				func_202(var_72_bool, "Neutral");
				var_0_bool->SetMessage(393); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(397, -1, 463); //@t
				var_0_bool->AddReply(398, -1, 464); //@t
				return 0;
			}
			var_3_object = true;
			bool var_146_bool;
			func_6501(var_146_bool);
			if(var_146_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdb";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 5837) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_6503();
			}
			if(var_72_bool == 5838) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_bool;
				func_6503();
			}
			if(var_72_bool == 5839) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_bool;
				func_6503();
			}
			if(var_72_bool == 5840) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_bool;
				func_6503();
			}
			if(var_72_bool == 5843) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_bool;
				func_6503();
			}
			if(var_72_bool == 5812) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_bool;
				func_6509();
			}
			if(var_72_bool == 5813) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_bool;
				func_6509();
			}
			if(var_72_bool == 8508) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_bool;
				func_6515();
			}
			if(var_72_bool == 8507) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_bool;
				func_6515();
			}
			if(var_72_bool == 8516) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_bool;
				func_6634();
			}
			if(var_72_bool == 8526) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_bool;
				func_6640();
			}
			if(var_72_bool == 8525) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_bool;
				func_6640();
			}
			if(var_72_bool == 8530) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_bool;
				func_6646();
			}
			if(var_72_bool == 8531) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_bool;
				func_6646();
			}
			if(var_72_bool == 8534) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_bool;
				func_6652();
			}
			if(var_72_bool == 8535) {
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_bool;
				func_6652();
			}
			if(var_72_bool == 8543) {
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_bool;
				func_6664();
			}
			if(var_72_bool == 8542) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_bool;
				func_6664();
			}
			if(var_72_bool == 5823) {
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_bool;
				func_6658();
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_bool;
				func_6670();
			}
			if(var_72_bool == 15328) {
				object var_175_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 5830) {
				bool var_180_bool;
				func_6841(var_1_object);
				if(var_180_bool != 0) {
					func_703(var_72_bool, "Neutral");
					var_0_bool->SetMessage(5289); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(5290, 5832, 5831); //@t
					var_0_bool->AddReply(5300, 5836, 5841); //@t
					var_0_bool->AddReply(5301, -1, 5843); //@t
					return 0;
				}
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7666); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_215_bool = false;
				bool var_216_bool;
				func_6853(var_1_object);
				if(var_216_bool != 0) {
					bool var_222_bool;
					func_6925(var_1_object);
					if(var_222_bool != 0)
						var_215_bool = true;
				}
				if(var_215_bool != 0)
					var_0_bool->AddReply(7667, 8496, 8462); //@t
				bool var_231_bool = true;
				bool var_232_bool = false;
				bool var_233_bool;
				func_7115(var_233_bool, var_1_object);
				if(var_233_bool != 0) {
					bool var_244_bool;
					func_6865(var_1_object);
					if(var_244_bool != 0)
						var_232_bool = true;
				}
				if(var_232_bool != 1) {
					bool var_250_bool = false;
					bool var_251_bool;
					func_7173(var_251_bool, var_1_object);
					if(var_251_bool != 0) {
						bool var_262_bool;
						func_6865(var_1_object);
						if(var_262_bool != 0)
							var_250_bool = true;
					}
					if(var_250_bool != 1)
						var_231_bool = false;
				}
				if(var_231_bool != 0)
					var_0_bool->AddReply(7668, 8504, 8463); //@t
				bool var_267_bool = false;
				bool var_268_bool;
				func_7229(var_1_object);
				if(var_268_bool != 0) {
					bool var_274_bool;
					func_7019(var_1_object);
					if(var_274_bool != 0)
						var_267_bool = true;
				}
				if(var_267_bool != 0)
					var_0_bool->AddReply(7681, 8498, 8476); //@t
				bool var_283_bool = false;
				bool var_284_bool;
				func_7289(var_1_object);
				if(var_284_bool != 0) {
					bool var_290_bool;
					func_7031(var_1_object);
					if(var_290_bool != 0)
						var_283_bool = true;
				}
				if(var_283_bool != 0)
					var_0_bool->AddReply(7686, 8499, 8481); //@t
				bool var_299_bool = false;
				bool var_300_bool;
				func_7103(var_1_object);
				if(var_300_bool != 0) {
					bool var_306_bool;
					func_7043(var_1_object);
					if(var_306_bool != 0)
						var_299_bool = true;
				}
				if(var_299_bool != 0)
					var_0_bool->AddReply(7687, 8500, 8482); //@t
				bool var_315_bool = false;
				bool var_316_bool;
				func_7277(var_1_object);
				if(var_316_bool != 0) {
					bool var_322_bool;
					func_7055(var_1_object);
					if(var_322_bool != 0)
						var_315_bool = true;
				}
				if(var_315_bool != 0)
					var_0_bool->AddReply(7691, 8501, 8486); //@t
				bool var_331_bool = false;
				bool var_332_bool;
				func_7253(var_1_object);
				if(var_332_bool != 0) {
					bool var_338_bool;
					func_7079(var_1_object);
					if(var_338_bool != 0)
						var_331_bool = true;
				}
				if(var_331_bool != 0)
					var_0_bool->AddReply(7692, 8502, 8487); //@t
				bool var_347_bool = false;
				bool var_348_bool;
				func_7007(var_1_object);
				if(!var_348_bool) { //@nz
					bool var_355_bool;
					func_7067(var_1_object);
					if(var_355_bool != 0)
						var_347_bool = true;
				}
				if(var_347_bool != 0)
					var_0_bool->AddReply(7693, 5818, 8488); //@t
				bool var_364_bool = false;
				bool var_365_bool;
				func_7007(var_1_object);
				if(var_365_bool != 0) {
					bool var_367_bool;
					func_7091(var_1_object);
					if(var_367_bool != 0)
						var_364_bool = true;
				}
				if(var_364_bool != 0)
					var_0_bool->AddReply(7694, 8491, 8489); //@t
				var_0_bool->AddReply(14114, -1, 15328); //@t
				var_0_bool->AddReply(8702, -1, 9539); //@t
				return 0;
			}
			if(var_71_string == 8491) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7695); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7696, 8493, 8492); //@t
				return 0;
			}
			if(var_71_string == 8493) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7697); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5280, 5820, 5819); //@t
				return 0;
			}
			if(var_71_string == 5820) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5281); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5282, 5822, 5821); //@t
				var_0_bool->AddReply(5285, 5822, 5824); //@t
				return 0;
			}
			if(var_71_string == 5822) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5283); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5284, -1, 5823); //@t
				return 0;
			}
			if(var_71_string == 5818) {
				object var_415_object; object var_416_object;
				var_415_object = var_1_object;
				var_416_object = var_0_bool;
				func_6628();
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5279); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5286, 5827, 5826); //@t
				var_0_bool->AddReply(7698, 8491, 8494); //@t
				return 0;
			}
			if(var_71_string == 5827) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5287); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5288, 5820, 5828); //@t
				return 0;
			}
			if(var_71_string == 8502) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7705); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7736, 8537, 8536); //@t
				return 0;
			}
			if(var_71_string == 8537) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7737); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7738, 8539, 8538); //@t
				return 0;
			}
			if(var_71_string == 8539) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7739); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7740, 8541, 8540); //@t
				return 0;
			}
			if(var_71_string == 8541) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7741); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7743, -1, 8543); //@t
				var_0_bool->AddReply(7742, -1, 8542); //@t
				return 0;
			}
			if(var_71_string == 8501) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7704); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7732, 8533, 8532); //@t
				return 0;
			}
			if(var_71_string == 8533) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7733); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7734, -1, 8534); //@t
				var_0_bool->AddReply(7735, -1, 8535); //@t
				return 0;
			}
			if(var_71_string == 8500) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7706, 8529, 8503); //@t
				return 0;
			}
			if(var_71_string == 8529) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7729); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7730, -1, 8530); //@t
				var_0_bool->AddReply(7731, -1, 8531); //@t
				return 0;
			}
			if(var_71_string == 8499) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7702); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7720, 8520, 8519); //@t
				return 0;
			}
			if(var_71_string == 8520) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7721); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7722, 8524, 8521); //@t
				var_0_bool->AddReply(7723, 8523, 8522); //@t
				return 0;
			}
			if(var_71_string == 8523) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7724); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7728, 8524, 8527); //@t
				return 0;
			}
			if(var_71_string == 8524) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7725); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7727, -1, 8526); //@t
				var_0_bool->AddReply(7726, -1, 8525); //@t
				return 0;
			}
			if(var_71_string == 8498) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7701); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7714, 8513, 8512); //@t
				return 0;
			}
			if(var_71_string == 8513) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7715); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7716, 8515, 8514); //@t
				var_0_bool->AddReply(7719, 8515, 8517); //@t
				return 0;
			}
			if(var_71_string == 8515) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7717); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7718, -1, 8516); //@t
				return 0;
			}
			if(var_71_string == 8504) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7707); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7708, 8506, 8505); //@t
				return 0;
			}
			if(var_71_string == 8506) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7709); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7711, -1, 8508); //@t
				var_0_bool->AddReply(7710, -1, 8507); //@t
				return 0;
			}
			if(var_71_string == 8496) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7699); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7700, 5807, 8497); //@t
				var_0_bool->AddReply(7712, 5809, 8509); //@t
				return 0;
			}
			if(var_71_string == 5807) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5270); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5271, 5809, 5808); //@t
				var_0_bool->AddReply(5278, 5809, 5816); //@t
				return 0;
			}
			if(var_71_string == 5809) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5272); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5273, 5811, 5810); //@t
				var_0_bool->AddReply(5277, 5811, 5814); //@t
				return 0;
			}
			if(var_71_string == 5811) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5274); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5275, -1, 5812); //@t
				var_0_bool->AddReply(5276, -1, 5813); //@t
				return 0;
			}
			if(var_71_string == 5832) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5291); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5292, 5834, 5833); //@t
				var_0_bool->AddReply(5299, -1, 5840); //@t
				return 0;
			}
			if(var_71_string == 5834) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5293); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5294, 5836, 5835); //@t
				var_0_bool->AddReply(5298, -1, 5839); //@t
				return 0;
			}
			if(var_71_string == 5836) {
				func_703(var_72_bool, "Neutral");
				var_0_bool->SetMessage(5295); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(5296, -1, 5837); //@t
				var_0_bool->AddReply(5297, -1, 5838); //@t
				return 0;
			}
			var_3_object = true;
			bool var_644_bool;
			func_6501(var_644_bool);
			if(var_644_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2d0";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 6850) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_6527();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_bool;
				func_6533();
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_bool;
				func_6676();
				object var_111_object = var_1_object;
				func_6692(var_0_bool);
			}
			if(var_72_bool == 6845) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_bool;
				func_6527();
			}
			if(var_72_bool == 6848) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_bool;
				func_6527();
			}
			if(var_71_string == 6822) {
				bool var_147_bool = false;
				bool var_148_bool = false;
				bool var_149_bool;
				func_6889(var_1_object);
				if(var_149_bool != 0) {
					bool var_157_bool;
					func_6913(var_1_object);
					if(!var_157_bool) //@nz
						var_148_bool = true;
				}
				if(var_148_bool != 0) {
					bool var_164_bool;
					func_6901(var_1_object);
					if(!var_164_bool) //@nz
						var_147_bool = true;
				}
				if(var_147_bool != 0) {
					func_1939(var_72_bool, "Neutral");
					var_0_bool->SetMessage(6175); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_187_bool;
					func_6877(var_1_object);
					if(!var_187_bool) //@nz
						var_0_bool->AddReply(6176, 6824, 6823); //@t
					bool var_197_bool;
					func_6877(var_1_object);
					if(!var_197_bool) //@nz
						var_0_bool->AddReply(6179, 6831, 6829); //@t
					bool var_203_bool;
					func_6877(var_1_object);
					if(var_203_bool != 0)
						var_0_bool->AddReply(6180, 6836, 6830); //@t
					return 0;
				}
			}
			if(var_71_string == 6831) {
				func_1939(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6181); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6184, 6832, 6834); //@t
				return 0;
			}
			if(var_71_string == 6824) {
				func_1939(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6177); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6178, 6832, 6825); //@t
				return 0;
			}
			if(var_71_string == 6832) {
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_bool;
				func_6521();
				func_1939(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6182); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6183, 6836, 6833); //@t
				return 0;
			}
			if(var_71_string == 6836) {
				func_1939(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6185); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6186, 6840, 6837); //@t
				var_0_bool->AddReply(6187, 6839, 6838); //@t
				return 0;
			}
			if(var_71_string == 6839) {
				func_1939(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6188); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6190, 6840, 6842); //@t
				var_0_bool->AddReply(6191, 6844, 6843); //@t
				return 0;
			}
			if(var_71_string == 6844) {
				func_1939(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6192); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6193, -1, 6845); //@t
				var_0_bool->AddReply(6194, 6847, 6846); //@t
				return 0;
			}
			if(var_71_string == 6847) {
				func_1939(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6195); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6196, -1, 6848); //@t
				return 0;
			}
			if(var_71_string == 6840) {
				func_1939(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6189); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6197, -1, 6850); //@t
				return 0;
			}
			var_3_object = true;
			bool var_277_bool;
			func_6501(var_277_bool);
			if(var_277_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7a4";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 7671) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_6569();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_bool;
				func_6587();
				object var_110_object = var_1_object;
				func_6596(var_0_bool);
				object var_129_object = var_1_object;
				func_6617(var_0_bool);
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_bool;
				func_6557();
			}
			if(var_72_bool == 8093) {
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_bool;
				func_6575();
			}
			if(var_72_bool == 8094) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_bool;
				func_6575();
			}
			if(var_72_bool == 8054) {
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_bool;
				func_6581();
			}
			if(var_72_bool == 8055) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_bool;
				func_6581();
			}
			if(var_72_bool == 8060) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_bool;
				func_6581();
			}
			if(var_72_bool == 8061) {
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_bool;
				func_6581();
			}
			if(var_72_bool == 8065) {
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_bool;
				func_6796();
			}
			if(var_72_bool == 8067) {
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_bool;
				func_6563();
			}
			if(var_72_bool == 8068) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_bool;
				func_6563();
			}
			if(var_72_bool == 15329) {
				object var_190_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 7666) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6959); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_211_bool = false;
				bool var_212_bool;
				func_6949(var_1_object);
				if(var_212_bool != 0) {
					bool var_220_bool;
					func_6985(var_1_object);
					if(var_220_bool != 0)
						var_211_bool = true;
				}
				if(var_211_bool != 0)
					var_0_bool->AddReply(7328, 8080, 8079); //@t
				bool var_229_bool;
				func_6961(var_1_object);
				if(var_229_bool != 0)
					var_0_bool->AddReply(7319, 8070, 8069); //@t
				var_0_bool->AddReply(6970, 7678, 7677); //@t
				bool var_241_bool;
				func_6973(var_1_object);
				if(var_241_bool != 0)
					var_0_bool->AddReply(7335, 8049, 8087); //@t
				var_0_bool->AddReply(7530, -1, 8312); //@t
				return 0;
			EMIT "PushEmpty(bool, object)";
			EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
			EMIT "Call 0x1b19";
			EMIT "Pop(1)";
			EMIT "IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)";
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0x98a";
			EMIT "Pop(1)";
			EMIT "Push((int) 7314)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "PushEmpty(bool, object)";
			EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
			EMIT "Call 0x1c49";
			EMIT "Pop(1)";
			EMIT "IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)";
			EMIT "Push((int) 7315)";
			EMIT "Push((int) 8066)";
			EMIT "Push((int) 8065)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			}
			if(var_71_string == 8066) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7316); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7317, -1, 8067); //@t
				var_0_bool->AddReply(7318, -1, 8068); //@t
				return 0;
			}
			if(var_71_string == 8049) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7300); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7301, 8051, 8050); //@t
				var_0_bool->AddReply(7313, 8053, 8062); //@t
				return 0;
			}
			if(var_71_string == 8051) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7302); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7303, 8053, 8052); //@t
				var_0_bool->AddReply(7307, 8057, 8056); //@t
				return 0;
			}
			if(var_71_string == 8057) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7308); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7309, 8059, 8058); //@t
				return 0;
			}
			if(var_71_string == 8059) {
				func_2442(var_72_bool, "Suspense");
				var_0_bool->SetMessage(7310); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7311, -1, 8060); //@t
				var_0_bool->AddReply(7312, -1, 8061); //@t
				return 0;
			}
			if(var_71_string == 8053) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7304); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7305, -1, 8054); //@t
				var_0_bool->AddReply(7306, -1, 8055); //@t
				return 0;
			}
			if(var_71_string == 7678) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6971); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7344, -1, 8097); //@t
				return 0;
			}
			if(var_71_string == 8070) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7320); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6965, 7673, 7672); //@t
				return 0;
			}
			if(var_71_string == 7673) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6966); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6967, 8088, 7674); //@t
				var_0_bool->AddReply(7343, 8088, 8095); //@t
				return 0;
			}
			if(var_71_string == 8088) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7336); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7337, 8090, 8089); //@t
				return 0;
			}
			if(var_71_string == 8090) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7338); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7339, 8092, 8091); //@t
				var_0_bool->AddReply(7342, -1, 8094); //@t
				return 0;
			}
			if(var_71_string == 8092) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7340); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7341, -1, 8093); //@t
				return 0;
			}
			if(var_71_string == 8080) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7329); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7330, 8082, 8081); //@t
				return 0;
			}
			if(var_71_string == 8082) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(7331); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(7332, 7670, 8083); //@t
				return 0;
			}
			if(var_71_string == 7670) {
				func_2442(var_72_bool, "Neutral");
				var_0_bool->SetMessage(6963); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(6964, -1, 7671); //@t
				return 0;
			}
			var_3_object = true;
			bool var_379_bool;
			func_6501(var_379_bool);
			if(var_379_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x99b";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 12126) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_6708();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_bool;
				func_6714();
			}
			if(var_72_bool == 12127) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_bool;
				func_6708();
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_bool;
				func_6714();
			}
			if(var_72_bool == 12118) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_bool;
				func_6708();
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_bool;
				func_6714();
			}
			if(var_72_bool == 12137) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_bool;
				func_6746();
				object var_149_object = var_1_object;
				func_6540(var_0_bool);
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_bool;
				func_6551();
			}
			if(var_72_bool == 12138) {
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_bool;
				func_6746();
				object var_166_object = var_1_object;
				func_6540(var_0_bool);
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_bool;
				func_6551();
			}
			if(var_72_bool == 15333) {
				object var_172_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 12111) {
				bool var_177_bool = false;
				bool var_178_bool;
				func_7125(var_1_object);
				if(var_178_bool != 0) {
					bool var_186_bool;
					func_7137(var_1_object);
					if(var_186_bool != 0)
						var_177_bool = true;
				}
				if(var_177_bool != 0) {
					func_3191(var_72_bool, "Neutral");
					var_0_bool->SetMessage(10952); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(10953, 12113, 12112); //@t
					var_0_bool->AddReply(10960, 12113, 12119); //@t
					return 0;
				}
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9615); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_216_bool = false;
				bool var_217_bool;
				func_7149(var_1_object);
				if(var_217_bool != 0) {
					bool var_223_bool;
					func_7161(var_1_object);
					if(var_223_bool != 0)
						var_216_bool = true;
				}
				if(var_216_bool != 0)
					var_0_bool->AddReply(10970, 12133, 12132); //@t
				bool var_232_bool;
				func_6997(var_232_bool, var_1_object);
				if(var_232_bool != 0)
					var_0_bool->AddReply(10948, 12108, 12107); //@t
				bool var_239_bool;
				func_6997(var_239_bool, var_1_object);
				if(var_239_bool != 0)
					var_0_bool->AddReply(9640, 10581, 10608); //@t
				bool var_244_bool;
				func_6997(var_244_bool, var_1_object);
				if(var_244_bool != 0)
					var_0_bool->AddReply(10947, 10612, 12106); //@t
				var_0_bool->AddReply(14119, -1, 15333); //@t
				var_0_bool->AddReply(9616, -1, 10580); //@t
				return 0;
			}
			if(var_71_string == 10612) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9643); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9644, 10614, 10613); //@t
				var_0_bool->AddReply(9648, 10610, 10617); //@t
				return 0;
			}
			if(var_71_string == 10610) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9641); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9642, -1, 10611); //@t
				return 0;
			}
			if(var_71_string == 10614) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9645); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9646, -1, 10615); //@t
				var_0_bool->AddReply(9647, -1, 10616); //@t
				return 0;
			}
			if(var_71_string == 10581) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9617); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9636, 10604, 10603); //@t
				return 0;
			}
			if(var_71_string == 10604) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9637); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9638, -1, 10605); //@t
				return 0;
			}
			if(var_71_string == 12108) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(10949); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(10950, 12110, 12109); //@t
				var_0_bool->AddReply(10969, 10583, 12130); //@t
				return 0;
			}
			if(var_71_string == 12110) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(10951); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9618, 10583, 10582); //@t
				var_0_bool->AddReply(10967, -1, 12128); //@t
				var_0_bool->AddReply(10972, -1, 12134); //@t
				return 0;
			}
			if(var_71_string == 10583) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9619); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9620, 10585, 10584); //@t
				var_0_bool->AddReply(9635, 10585, 10601); //@t
				return 0;
			}
			if(var_71_string == 10585) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9621); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9623, 10588, 10587); //@t
				var_0_bool->AddReply(9634, 10595, 10599); //@t
				var_0_bool->AddReply(9622, -1, 10586); //@t
				return 0;
			}
			if(var_71_string == 10588) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9624); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9625, -1, 10589); //@t
				var_0_bool->AddReply(9626, 10591, 10590); //@t
				var_0_bool->AddReply(9630, 10595, 10594); //@t
				return 0;
			}
			if(var_71_string == 10595) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9631); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9632, -1, 10596); //@t
				var_0_bool->AddReply(9633, 10591, 10597); //@t
				return 0;
			}
			if(var_71_string == 10591) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9627); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9628, -1, 10592); //@t
				var_0_bool->AddReply(9629, -1, 10593); //@t
				return 0;
			}
			if(var_71_string == 12133) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(10971); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(10973, 12136, 12135); //@t
				return 0;
			}
			if(var_71_string == 12136) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(10974); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(10975, -1, 12137); //@t
				var_0_bool->AddReply(10976, -1, 12138); //@t
				return 0;
			}
			if(var_71_string == 12113) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(10954); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(10955, 12115, 12114); //@t
				var_0_bool->AddReply(10961, 12117, 12121); //@t
				return 0;
			}
			if(var_71_string == 12115) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(10956); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(10957, 12117, 12116); //@t
				return 0;
			}
			if(var_71_string == 12117) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(10958); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(10963, 12125, 12124); //@t
				var_0_bool->AddReply(10959, -1, 12118); //@t
				return 0;
			}
			if(var_71_string == 12125) {
				func_3191(var_72_bool, "Neutral");
				var_0_bool->SetMessage(10964); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(10965, -1, 12126); //@t
				var_0_bool->AddReply(10966, -1, 12127); //@t
				return 0;
			}
			var_3_object = true;
			bool var_429_bool;
			func_6501(var_429_bool);
			if(var_429_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc88";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 15331) {
				object var_77_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 10842) {
				func_3960(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9843); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_98_bool;
				func_6997(var_98_bool, var_1_object);
				if(var_98_bool != 0)
					var_0_bool->AddReply(9844, 10844, 10843); //@t
				bool var_105_bool;
				func_6997(var_105_bool, var_1_object);
				if(var_105_bool != 0)
					var_0_bool->AddReply(9848, 10848, 10847); //@t
				var_0_bool->AddReply(14117, -1, 15331); //@t
				var_0_bool->AddReply(14118, -1, 15332); //@t
				return 0;
			}
			if(var_71_string == 10848) {
				func_3960(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9849); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9850, 10850, 10849); //@t
				var_0_bool->AddReply(9857, 10858, 10857); //@t
				return 0;
			}
			if(var_71_string == 10858) {
				func_3960(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9858); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9859, 10860, 10859); //@t
				var_0_bool->AddReply(9863, -1, 10863); //@t
				return 0;
			}
			if(var_71_string == 10860) {
				func_3960(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9860); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9861, -1, 10861); //@t
				var_0_bool->AddReply(9862, -1, 10862); //@t
				return 0;
			}
			if(var_71_string == 10850) {
				func_3960(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9851); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9852, 10852, 10851); //@t
				var_0_bool->AddReply(9856, 10852, 10855); //@t
				return 0;
			}
			if(var_71_string == 10852) {
				func_3960(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9853); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9854, -1, 10853); //@t
				var_0_bool->AddReply(9855, -1, 10854); //@t
				return 0;
			}
			if(var_71_string == 10844) {
				func_3960(var_72_bool, "Neutral");
				var_0_bool->SetMessage(9845); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9846, -1, 10845); //@t
				var_0_bool->AddReply(9847, -1, 10846); //@t
				return 0;
			}
			var_3_object = true;
			bool var_176_bool;
			func_6501(var_176_bool);
			if(var_176_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf89";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 12936) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_6752();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_bool;
				func_6808();
			}
			if(var_72_bool == 12939) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_bool;
				func_6752();
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_bool;
				func_6808();
			}
			if(var_72_bool == 13653) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_bool;
				func_6752();
			}
			if(var_72_bool == 12944) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_bool;
				func_6758();
				object var_150_object = var_1_object;
				func_6824(var_0_bool);
			}
			if(var_72_bool == 15334) {
				object var_162_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 12926) {
				bool var_167_bool;
				func_6997(var_167_bool, var_1_object);
				if(var_167_bool != 0) {
					func_4373(var_72_bool, "Neutral");
					var_0_bool->SetMessage(11720); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(11721, 12928, 12927); //@t
					return 0;
				}
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11704); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_192_bool = false;
				bool var_193_bool;
				func_7183(var_1_object);
				if(var_193_bool != 0) {
					bool var_201_bool;
					func_7195(var_1_object);
					if(var_201_bool != 0)
						var_192_bool = true;
				}
				if(var_192_bool != 0)
					var_0_bool->AddReply(11705, 12910, 12909); //@t
				bool var_210_bool = false;
				bool var_211_bool = false;
				bool var_212_bool;
				func_7183(var_1_object);
				if(var_212_bool != 0) {
					bool var_214_bool;
					func_7217(var_1_object);
					if(!var_214_bool) //@nz
						var_211_bool = true;
				}
				if(var_211_bool != 0) {
					bool var_221_bool;
					func_7207(var_221_bool, var_1_object);
					if(var_221_bool != 0)
						var_210_bool = true;
				}
				if(var_210_bool != 0)
					var_0_bool->AddReply(11734, 12941, 12940); //@t
				var_0_bool->AddReply(14120, -1, 15334); //@t
				var_0_bool->AddReply(11739, -1, 12945); //@t
				return 0;
			}
			if(var_71_string == 12941) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11735); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11736, 12943, 12942); //@t
				return 0;
			}
			if(var_71_string == 12943) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11737); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11738, -1, 12944); //@t
				return 0;
			}
			if(var_71_string == 12910) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11706); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11707, 12913, 12911); //@t
				var_0_bool->AddReply(11708, 12913, 12912); //@t
				return 0;
			}
			if(var_71_string == 12913) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11709); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11710, 12916, 12915); //@t
				var_0_bool->AddReply(11713, 12919, 12918); //@t
				return 0;
			}
			if(var_71_string == 12919) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11714); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11715, 12916, 12920); //@t
				return 0;
			}
			if(var_71_string == 12916) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11711); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11712, 12935, 12917); //@t
				return 0;
			}
			if(var_71_string == 12935) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11729); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11730, -1, 12936); //@t
				var_0_bool->AddReply(11731, 12938, 12937); //@t
				bool var_297_bool;
				func_7207(var_297_bool, var_1_object);
				if(var_297_bool != 0)
					var_0_bool->AddReply(12485, 12941, 13653); //@t
				return 0;
			}
			if(var_71_string == 12938) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11732); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11733, -1, 12939); //@t
				return 0;
			}
			if(var_71_string == 12928) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11722); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11723, 12930, 12929); //@t
				return 0;
			}
			if(var_71_string == 12930) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11724); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11725, -1, 12931); //@t
				var_0_bool->AddReply(11726, 12933, 12932); //@t
				return 0;
			}
			if(var_71_string == 12933) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11727); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11728, 12922, 12934); //@t
				return 0;
			}
			if(var_71_string == 12922) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11716); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11717, 12924, 12923); //@t
				return 0;
			}
			if(var_71_string == 12924) {
				func_4373(var_72_bool, "Neutral");
				var_0_bool->SetMessage(11718); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(11719, -1, 12925); //@t
				return 0;
			}
			var_3_object = true;
			bool var_347_bool;
			func_6501(var_347_bool);
			if(var_347_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1126";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 15337) {
				object var_77_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 15336) {
				func_4939(var_72_bool, "Neutral");
				var_0_bool->SetMessage(14122); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14123, -1, 15337); //@t
				var_0_bool->AddReply(14124, -1, 15338); //@t
				return 0;
			}
			var_3_object = true;
			bool var_104_bool;
			func_6501(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x135c";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 15341) {
				object var_77_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 15340) {
				func_5126(var_72_bool, "Neutral");
				var_0_bool->SetMessage(14126); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14127, -1, 15341); //@t
				var_0_bool->AddReply(14128, -1, 15342); //@t
				return 0;
			}
			var_3_object = true;
			bool var_104_bool;
			func_6501(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1417";
	
	}

}


task task_21
{
}


task task_22
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, int var_51_int, int var_52_int, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 15345) {
				object var_77_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 15344) {
				func_5313(var_72_bool, "Neutral");
				var_0_bool->SetMessage(14130); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14131, -1, 15345); //@t
				var_0_bool->AddReply(14132, -1, 15346); //@t
				return 0;
			}
			var_3_object = true;
			bool var_104_bool;
			func_6501(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x14d2";
	
	}

}


task task_23
{
}


task task_24
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, int var_56_int, int var_57_int, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 15349) {
				object var_77_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 15348) {
				func_5500(var_72_bool, "Neutral");
				var_0_bool->SetMessage(14134); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14135, -1, 15349); //@t
				var_0_bool->AddReply(14136, -1, 15350); //@t
				return 0;
			}
			var_3_object = true;
			bool var_104_bool;
			func_6501(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x158d";
	
	}

}


task task_25
{
}


task task_26
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, int var_61_int, int var_62_int, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 15353) {
				object var_77_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 15352) {
				func_5687(var_72_bool, "Neutral");
				var_0_bool->SetMessage(14138); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14139, -1, 15353); //@t
				var_0_bool->AddReply(14140, -1, 15354); //@t
				return 0;
			}
			var_3_object = true;
			bool var_104_bool;
			func_6501(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1648";
	
	}

}


task task_27
{
}


task task_28
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, int var_66_int, int var_67_int, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_bool == 15401) {
				object var_77_object = var_1_object;
				func_6785(var_0_bool);
			}
			if(var_71_string == 15400) {
				func_5874(var_72_bool, "Neutral");
				var_0_bool->SetMessage(14186); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14187, -1, 15401); //@t
				var_0_bool->AddReply(14188, -1, 15402); //@t
				return 0;
			}
			var_3_object = true;
			bool var_104_bool;
			func_6501(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1703";
	
	}

}


task task_29
{
}


task task_30
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, int var_71_int, int var_72_int)
	{
		if(1 != 0) {
			func_6396();
			if(var_72_int == 16529) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_bool;
				func_6802();
			}
			if(var_71_int == 16528) {
				func_6066(var_72_int, "Neutral");
				var_0_bool->SetMessage(15251); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_99_bool;
				func_7265(var_1_object);
				if(var_99_bool != 0)
					var_0_bool->AddReply(15252, 16531, 16529); //@t
				var_0_bool->AddReply(15338, -1, 16561); //@t
				return 0;
			}
			if(var_71_int == 16531) {
				func_6066(var_72_int, "Neutral");
				var_0_bool->SetMessage(15254); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(15255, 16533, 16532); //@t
				return 0;
			}
			if(var_71_int == 16533) {
				func_6066(var_72_int, "Neutral");
				var_0_bool->SetMessage(15256); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(15257, 16536, 16534); //@t
				var_0_bool->AddReply(15258, 16536, 16535); //@t
				return 0;
			}
			if(var_71_int == 16536) {
				func_6066(var_72_int, "Neutral");
				var_0_bool->SetMessage(15259); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(15261, 16540, 16539); //@t
				var_0_bool->AddReply(15260, 16540, 16538); //@t
				return 0;
			}
			if(var_71_int == 16540) {
				func_6066(var_72_int, "Neutral");
				var_0_bool->SetMessage(15262); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(15263, 16542, 16541); //@t
				return 0;
			}
			if(var_71_int == 16542) {
				func_6066(var_72_int, "Neutral");
				var_0_bool->SetMessage(15264); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(15266, -1, 16545); //@t
				var_0_bool->AddReply(15265, -1, 16544); //@t
				return 0;
			}
			var_3_object = true;
			bool var_157_bool;
			func_6501(var_157_bool);
			if(var_157_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x17c3";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_6658(void)
{
	@SetVariable("ood1Grif8", 1);
}


// @pe
void func_7173(bool var_251_bool, object var_252_object)
{
	object var_254_object;
	var_252_object = var_254_object;
	func_7315(var_254_object);
	bool var_253_bool;
	if(var_253_bool != 0) {
		var_251_bool = true;
		return 0;
	}
	var_251_bool = false;
}


// @pe
void func_5126(object var_2_object, string var_82_string)
{
	bool var_83_bool;
	func_6501(var_83_bool);
	if(!var_83_bool) //@nz
		return 0;
	if(var_82_string == var_2_object)
		return 0;
	string var_86_string;
	func_6378(var_86_string);
	var_2_object = var_86_string;
}


// @pe
void func_6(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		func_6378("Neutral");
		@lshWaitForAnimEnd();
		if(false != 0)
			return 0;
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_6664(void)
{
	@SetVariable("ood1Grif9", 1);
}


// @pe
void func_7690(object var_72_object, object var_371_object, object var_636_object, object var_722_object, object var_786_object, object var_890_object, object var_988_object, object var_1040_object, object var_1092_object, object var_1144_object, object var_1196_object, object var_1248_object, object var_1300_object)
{
	var_73_int = GlobalVars[2];
	int var_74_int;
	func_6465(var_74_int);
	if(var_73_int != var_74_int) {
		func_7439();
		var_161_int = GlobalVars[2];
		int var_162_int;
		func_6465(var_162_int);
		var_162_int = var_161_int;
		GlobalVars[2] = var_161_int;
	}
	var_163_bool = GlobalVars[1];
	if(!var_163_bool) { //@nz
		int var_165_int; object var_166_object;
		var_72_object = var_166_object;
		TaskCall(3);
		func_71(var_167_object, var_165_int, var_166_object);
		TaskReturn();
		var_274_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_275_bool;
	func_6482(var_275_bool, 1);
	if(var_275_bool != 0) {
		int var_278_int;
		func_6413(var_278_int, "d1q01");
		if(var_278_int == 1) {
			int var_284_int; object var_285_object;
			var_72_object = var_285_object;
			TaskCall(7);
			func_1771(var_286_object, var_284_int, var_285_object);
			TaskReturn();
			return 0;
		}
		int var_369_int; object var_370_object;
		var_72_object = var_370_object;
		TaskCall(5);
		func_362(var_371_object, var_369_int, var_370_object);
		TaskReturn();
		if(1000 == var_371_object) {
			object var_595_object;
			var_72_object = var_595_object;
			func_7671(var_595_object);
		}
		return 0;
	}
	bool var_631_bool;
	func_6482(var_631_bool, 2);
	if(var_631_bool != 0) {
		int var_634_int; object var_635_object;
		var_72_object = var_635_object;
		TaskCall(9);
		func_2247(var_636_object, var_634_int, var_635_object);
		TaskReturn();
		if(1000 == var_636_object) {
			object var_716_object;
			var_72_object = var_716_object;
			func_7671(var_716_object);
		}
		return 0;
	}
	bool var_717_bool;
	func_6482(var_717_bool, 3);
	if(var_717_bool != 0) {
		int var_720_int; object var_721_object;
		var_72_object = var_721_object;
		TaskCall(13);
		func_3819(var_722_object, var_720_int, var_721_object);
		TaskReturn();
		if(1000 == var_722_object) {
			object var_780_object;
			var_72_object = var_780_object;
			func_7671(var_780_object);
		}
		return 0;
	}
	bool var_781_bool;
	func_6482(var_781_bool, 4);
	if(var_781_bool != 0) {
		int var_784_int; object var_785_object;
		var_72_object = var_785_object;
		TaskCall(11);
		func_2987(var_786_object, var_784_int, var_785_object);
		TaskReturn();
		if(1000 == var_786_object) {
			object var_884_object;
			var_72_object = var_884_object;
			func_7671(var_884_object);
		}
		return 0;
	}
	bool var_885_bool;
	func_6482(var_885_bool, 5);
	if(var_885_bool != 0) {
		int var_888_int; object var_889_object;
		var_72_object = var_889_object;
		TaskCall(15);
		func_4184(var_890_object, var_888_int, var_889_object);
		TaskReturn();
		if(1000 == var_890_object) {
			object var_982_object;
			var_72_object = var_982_object;
			func_7671(var_982_object);
		}
		return 0;
	}
	bool var_983_bool;
	func_6482(var_983_bool, 6);
	if(var_983_bool != 0) {
		int var_986_int; object var_987_object;
		var_72_object = var_987_object;
		TaskCall(17);
		func_4818(var_988_object, var_986_int, var_987_object);
		TaskReturn();
		if(1000 == var_988_object) {
			object var_1034_object;
			var_72_object = var_1034_object;
			func_7671(var_1034_object);
		}
		return 0;
	}
	bool var_1035_bool;
	func_6482(var_1035_bool, 7);
	if(var_1035_bool != 0) {
		int var_1038_int; object var_1039_object;
		var_72_object = var_1039_object;
		TaskCall(19);
		func_5005(var_1040_object, var_1038_int, var_1039_object);
		TaskReturn();
		if(1000 == var_1040_object) {
			object var_1086_object;
			var_72_object = var_1086_object;
			func_7671(var_1086_object);
		}
		return 0;
	}
	bool var_1087_bool;
	func_6482(var_1087_bool, 8);
	if(var_1087_bool != 0) {
		int var_1090_int; object var_1091_object;
		var_72_object = var_1091_object;
		TaskCall(21);
		func_5192(var_1092_object, var_1090_int, var_1091_object);
		TaskReturn();
		if(1000 == var_1092_object) {
			object var_1138_object;
			var_72_object = var_1138_object;
			func_7671(var_1138_object);
		}
		return 0;
	}
	bool var_1139_bool;
	func_6482(var_1139_bool, 9);
	if(var_1139_bool != 0) {
		int var_1142_int; object var_1143_object;
		var_72_object = var_1143_object;
		TaskCall(25);
		func_5566(var_1144_object, var_1142_int, var_1143_object);
		TaskReturn();
		if(1000 == var_1144_object) {
			object var_1190_object;
			var_72_object = var_1190_object;
			func_7671(var_1190_object);
		}
		return 0;
	}
	bool var_1191_bool;
	func_6482(var_1191_bool, 10);
	if(var_1191_bool != 0) {
		int var_1194_int; object var_1195_object;
		var_72_object = var_1195_object;
		TaskCall(23);
		func_5379(var_1196_object, var_1194_int, var_1195_object);
		TaskReturn();
		if(1000 == var_1196_object) {
			object var_1242_object;
			var_72_object = var_1242_object;
			func_7671(var_1242_object);
		}
		return 0;
	}
	bool var_1243_bool;
	func_6482(var_1243_bool, 11);
	if(var_1243_bool != 0) {
		int var_1246_int; object var_1247_object;
		var_72_object = var_1247_object;
		TaskCall(27);
		func_5753(var_1248_object, var_1246_int, var_1247_object);
		TaskReturn();
		if(1000 == var_1248_object) {
			object var_1294_object;
			var_72_object = var_1294_object;
			func_7671(var_1294_object);
		}
		return 0;
	}
	bool var_1295_bool;
	func_6482(var_1295_bool, 12);
	if(var_1295_bool != 0) {
		int var_1298_int; object var_1299_object;
		var_72_object = var_1299_object;
		TaskCall(29);
		func_5940(var_1300_object, var_1298_int, var_1299_object);
		TaskReturn();
		if(1000 == var_1300_object) {
			object var_1352_object;
			var_72_object = var_1352_object;
			func_7671(var_1352_object);
		}
		return 0;
	}
	bool var_1353_bool;
	func_6488(var_1353_bool);
}


// @pe
void func_6670(void)
{
	@SetVariable("ood1Grif10", 1);
}


// @pe
void func_7183(bool var_193_bool)
{
	int var_195_int;
	func_6413(var_195_int, "d5q01");
	if(var_195_int == 6)
		var_193_bool = true;
	var_193_bool = false;
}


void func_6676(void)
{
	object var_97_object;
	func_7389(var_97_object);
	object var_96_object;
	var_97_object = var_96_object;
	float var_108_float;
	func_6460(var_108_float);
	var_96_object->AddMark("d1q01GrifAboutRubin", "pt_map_rubin", 1, 8649, var_108_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7195(bool var_201_bool)
{
	int var_203_int;
	func_6413(var_203_int, "ood5Grif1");
	if(var_203_int == 0) {
		var_201_bool = true;
		return 0;
	}
	var_201_bool = false;
}


// @pe
void func_6692(object var_112_object)
{
	object var_116_object;
	func_7389(var_116_object);
	object var_113_object;
	var_116_object = var_113_object;
	func_7406(var_113_object, "pt_map_rubin", (float)2);
	object var_136_object;
	func_7389(var_136_object);
	var_112_object->ShowMap(var_136_object);
}


// @pe
void func_7207(bool var_221_bool, object var_222_object)
{
	object var_224_object;
	var_222_object = var_224_object;
	bool var_223_bool;
	func_7336(var_223_bool, var_224_object);
	if(var_223_bool != 0) {
		var_221_bool = true;
		return 0;
	}
	var_221_bool = false;
}


// @pe
void func_7217(bool var_214_bool)
{
	int var_216_int;
	func_6413(var_216_int, "d5q01ThiefsWillHelp");
	if(var_216_int == 1)
		var_214_bool = true;
	var_214_bool = false;
}


// @pe
void func_6708(void)
{
	@SetVariable("ood4Grif1", 1);
}


// @pe
void func_5687(object var_2_object, string var_82_string)
{
	bool var_83_bool;
	func_6501(var_83_bool);
	if(!var_83_bool) //@nz
		return 0;
	if(var_82_string == var_2_object)
		return 0;
	string var_86_string;
	func_6378(var_86_string);
	var_2_object = var_86_string;
}


void func_6714(void)
{
	@SetVariable("d4q03", 2);
	object var_87_object;
	func_7389(var_87_object);
	object var_84_object;
	var_87_object = var_84_object;
	float var_98_float;
	func_6460(var_98_float);
	var_84_object->AddMark("d4q03GrifGotoAlexandr", "pt_map_alexandr", 0, 15331, var_98_float);
	float var_105_float;
	func_6460(var_105_float);
	var_84_object->AddMark("d4q03GrifGotoAlexandrSelf", "pt_map_grif", 0, 15332, var_105_float);
	func_7632();
}
EMIT "Stack[-1] = 0";


// @pe
void func_7229(bool var_268_bool)
{
	int var_270_int;
	func_6413(var_270_int, "KnowBigVlad");
	if(var_270_int == 1)
		var_268_bool = true;
	var_268_bool = false;
}


void func_71(bool var_0_bool, int var_165_int, object var_166_object)
{
	var_0_bool = var_166_object;
	bool var_176_bool; object var_177_object;
	var_166_object = var_177_object;
	func_6266(var_176_bool, var_177_object);
	if(!var_176_bool) { //@nz
		var_165_int = -2;
		return 8;
	}
	object var_172_object;
	@CreateDialog(var_172_object);
	int var_217_int;
	func_6497(var_217_int);
	var_172_object->SetNPCName(var_217_int);
	string var_218_string;
	func_6499(var_218_string);
	var_172_object->SetPhoto(var_218_string);
	int var_219_int;
	func_7599(var_219_int);
	var_172_object->SetPlayerName(var_219_int);
	bool var_173_bool;
	@IsOverrideActive(var_173_bool);
	if(var_173_bool != 0) {
		var_165_int = -2;
		return 8;
	}
	@DoDialog(var_172_object);
	object var_228_object; object var_229_object;
	var_166_object = var_228_object;
	var_172_object = var_229_object;
	TaskCall(4);
	func_134(var_230_object, var_231_object, var_232_string, var_233_bool, var_228_object, var_229_object);
	TaskReturn();
	bool var_175_bool;
	var_172_object->IsDialogEnd(var_175_bool);
	
	for(;;) {
		var_272_bool = !var_175_bool; //@nz
		if(var_272_bool == 0) goto Label_123;
		@sync();
		var_172_object->IsDialogEnd(var_175_bool);
	}
	
Label_123:
	object var_273_object;
	var_166_object = var_273_object;
	func_6322();
	@StopDialog(var_172_object);
	var_172_object->GetReturnValue(-1);
	int var_174_int = var_165_int;
}
EMIT "Stack[-4] = 0";


void func_5192(bool var_0_bool, int var_1090_int, object var_1091_object)
{
	var_0_bool = var_1091_object;
	bool var_1101_bool; object var_1102_object;
	var_1091_object = var_1102_object;
	func_6266(var_1101_bool, var_1102_object);
	if(!var_1101_bool) { //@nz
		var_1090_int = -2;
		return 8;
	}
	object var_1097_object;
	@CreateDialog(var_1097_object);
	int var_1104_int;
	func_6497(var_1104_int);
	var_1097_object->SetNPCName(var_1104_int);
	string var_1105_string;
	func_6499(var_1105_string);
	var_1097_object->SetPhoto(var_1105_string);
	int var_1106_int;
	func_7599(var_1106_int);
	var_1097_object->SetPlayerName(var_1106_int);
	bool var_1098_bool;
	@IsOverrideActive(var_1098_bool);
	if(var_1098_bool != 0) {
		var_1090_int = -2;
		return 8;
	}
	@DoDialog(var_1097_object);
	object var_1108_object; object var_1109_object;
	var_1091_object = var_1108_object;
	var_1097_object = var_1109_object;
	TaskCall(22);
	func_5255(var_1110_object, var_1111_object, var_1112_string, var_1113_bool, var_1108_object, var_1109_object);
	TaskReturn();
	bool var_1100_bool;
	var_1097_object->IsDialogEnd(var_1100_bool);
	
	for(;;) {
		var_1135_bool = !var_1100_bool; //@nz
		if(var_1135_bool == 0) goto Label_5244;
		@sync();
		var_1097_object->IsDialogEnd(var_1100_bool);
	}
	
Label_5244:
	object var_1136_object;
	var_1091_object = var_1136_object;
	func_6322();
	@StopDialog(var_1097_object);
	var_1097_object->GetReturnValue(-1);
	int var_1099_int = var_1090_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7241(void)
{
0x1c49: PushEmpty()
0x1c4a: PushEmpty(int, string)
0x1c4b: Stack[-1] = "ood2Grif5" // @poff=1515
0x1c4c: Call 0x190d
}


// @pe
void func_7253(bool var_332_bool)
{
	int var_334_int;
	func_6413(var_334_int, "KnowNotkin");
	if(var_334_int == 1)
		var_332_bool = true;
	var_332_bool = false;
}


void func_4184(bool var_0_bool, int var_888_int, object var_889_object)
{
	var_0_bool = var_889_object;
	bool var_899_bool; object var_900_object;
	var_889_object = var_900_object;
	func_6266(var_899_bool, var_900_object);
	if(!var_899_bool) { //@nz
		var_888_int = -2;
		return 8;
	}
	object var_895_object;
	@CreateDialog(var_895_object);
	int var_902_int;
	func_6497(var_902_int);
	var_895_object->SetNPCName(var_902_int);
	string var_903_string;
	func_6499(var_903_string);
	var_895_object->SetPhoto(var_903_string);
	int var_904_int;
	func_7599(var_904_int);
	var_895_object->SetPlayerName(var_904_int);
	bool var_896_bool;
	@IsOverrideActive(var_896_bool);
	if(var_896_bool != 0) {
		var_888_int = -2;
		return 8;
	}
	@DoDialog(var_895_object);
	object var_906_object; object var_907_object;
	var_889_object = var_906_object;
	var_895_object = var_907_object;
	TaskCall(16);
	func_4247(var_908_object, var_909_object, var_910_string, var_911_bool, var_906_object, var_907_object);
	TaskReturn();
	bool var_898_bool;
	var_895_object->IsDialogEnd(var_898_bool);
	
	for(;;) {
		var_979_bool = !var_898_bool; //@nz
		if(var_979_bool == 0) goto Label_4236;
		@sync();
		var_895_object->IsDialogEnd(var_898_bool);
	}
	
Label_4236:
	object var_980_object;
	var_889_object = var_980_object;
	func_6322();
	@StopDialog(var_895_object);
	var_895_object->GetReturnValue(-1);
	int var_897_int = var_888_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6746(void)
{
	@SetVariable("ood4Grif2", 1);
}


// @pe
void func_6752(void)
{
	@SetVariable("ood5Grif1", 1);
}


// @pe
void func_7265(bool var_99_bool)
{
	int var_101_int;
	func_6413(var_101_int, "ood12Grif1");
	if(var_101_int == 0) {
		var_99_bool = true;
		return 0;
	}
	var_99_bool = false;
}


void func_6242(object var_152_object, string var_153_string, int var_154_int)
{
	int var_156_int;
	var_152_object->GetProperty(var_153_string, var_156_int);
	var_152_object->SetProperty(var_153_string, (var_156_int + var_154_int));
}


void func_6758(void)
{
	@SetVariable("d5q01ThiefsWillHelp", 1);
	@SetVariable("d5q01PlayCutscene", 1);
	object var_119_object;
	func_7389(var_119_object);
	object var_114_object;
	var_119_object = var_114_object;
	float var_124_float;
	func_6460(var_124_float);
	var_114_object->AddMark("d5q01GrifWillHelp", "pt_map_grif", 1, 15353, var_124_float);
	func_7648();
}
EMIT "Stack[-1] = 0";


void func_6249(bool var_72_bool, object var_73_object)
{
	cvector var_78_cvector;
	var_73_object->GetPosition(var_78_cvector);
	cvector var_79_cvector;
	@GetPosition(var_79_cvector);
	cvector var_80_cvector = var_78_cvector - var_79_cvector;
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_83_float = GetByIndex(var_80_cvector, 2);
	bool var_81_bool;
	@Rotate(var_82_float, var_83_float, var_81_bool);
	var_81_bool = var_72_bool;
}


// @pe
void func_7277(bool var_316_bool)
{
	int var_318_int;
	func_6413(var_318_int, "KnowSpi4ka");
	if(var_318_int == 1)
		var_316_bool = true;
	var_316_bool = false;
}


void func_6261(bool var_73_bool)
{
	bool var_75_bool;
	@IsLoaded(var_75_bool);
	var_75_bool = var_73_bool;
}


// @pe
void func_3191(object var_2_object, string var_192_string)
{
	bool var_193_bool;
	func_6501(var_193_bool);
	if(!var_193_bool) //@nz
		return 0;
	if(var_192_string == var_2_object)
		return 0;
	string var_196_string;
	func_6378(var_196_string);
	var_2_object = var_196_string;
}


void func_5753(bool var_0_bool, int var_1246_int, object var_1247_object)
{
	var_0_bool = var_1247_object;
	bool var_1257_bool; object var_1258_object;
	var_1247_object = var_1258_object;
	func_6266(var_1257_bool, var_1258_object);
	if(!var_1257_bool) { //@nz
		var_1246_int = -2;
		return 8;
	}
	object var_1253_object;
	@CreateDialog(var_1253_object);
	int var_1260_int;
	func_6497(var_1260_int);
	var_1253_object->SetNPCName(var_1260_int);
	string var_1261_string;
	func_6499(var_1261_string);
	var_1253_object->SetPhoto(var_1261_string);
	int var_1262_int;
	func_7599(var_1262_int);
	var_1253_object->SetPlayerName(var_1262_int);
	bool var_1254_bool;
	@IsOverrideActive(var_1254_bool);
	if(var_1254_bool != 0) {
		var_1246_int = -2;
		return 8;
	}
	@DoDialog(var_1253_object);
	object var_1264_object; object var_1265_object;
	var_1247_object = var_1264_object;
	var_1253_object = var_1265_object;
	TaskCall(28);
	func_5816(var_1266_object, var_1267_object, var_1268_string, var_1269_bool, var_1264_object, var_1265_object);
	TaskReturn();
	bool var_1256_bool;
	var_1253_object->IsDialogEnd(var_1256_bool);
	
	for(;;) {
		var_1291_bool = !var_1256_bool; //@nz
		if(var_1291_bool == 0) goto Label_5805;
		@sync();
		var_1253_object->IsDialogEnd(var_1256_bool);
	}
	
Label_5805:
	object var_1292_object;
	var_1247_object = var_1292_object;
	func_6322();
	@StopDialog(var_1253_object);
	var_1253_object->GetReturnValue(-1);
	int var_1255_int = var_1246_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7289(bool var_284_bool)
{
	int var_286_int;
	func_6413(var_286_int, "KnowStamatins");
	if(var_286_int == 1)
		var_284_bool = true;
	var_284_bool = false;
}


void func_6266(bool var_176_bool, object var_177_object)
{
	cvector var_187_cvector;
	var_177_object->GetPosition(var_187_cvector);
	float var_186_float;
	var_177_object->GetEyesHeight(var_186_float);
	var_194_float = GetByIndex(var_187_cvector, 1);
	SetByIndex(var_187_cvector, 1) = (var_194_float + var_186_float);
	cvector var_188_cvector;
	@GetPosition(var_188_cvector);
	@GetEyesHeight(var_186_float);
	var_195_float = GetByIndex(var_188_cvector, 1);
	SetByIndex(var_188_cvector, 1) = (var_195_float + var_186_float);
	cvector var_189_cvector = var_187_cvector - var_188_cvector;
	var_196_float = GetByIndex(var_189_cvector, 1);
	SetByIndex(var_189_cvector, 1) = (float)0;
	var_198_float = sqrt(var_189_cvector | var_189_cvector);
	var_189_cvector /= var_198_float;
	cvector var_190_cvector = -var_189_cvector;
	cvector var_201_cvector;
	func_6403(var_201_cvector, (var_190_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_191_cvector = ((var_189_cvector * 70) + (var_201_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_193_bool;
	@IsOverrideActive(var_193_bool);
	if(var_193_bool != 0)
		var_176_bool = false;
	@StopWorld();
	@CameraTransit((var_188_cvector + var_191_cvector), var_190_cvector);
	var_214_float = GetByIndex(var_191_cvector, 0);
	var_215_float = GetByIndex(var_191_cvector, 2);
	@Rotate(var_214_float, var_215_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_176_bool = true;
}


// @pe
void func_6785(object var_78_object)
{
	var_78_object->SetReturnValue(1000);
}


// @pe
void func_7301(bool var_169_bool)
{
	var_169_bool = false;
}


// @pe
void func_134(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_228_object, object var_229_object)
{
	var_0_bool = var_229_object;
	var_3_object = false;
	if(1 != 0) {
		object var_235_object; object var_236_object;
		var_235_object = var_228_object;
		var_236_object = var_0_bool;
		func_6790();
		func_202(var_229_object, "Neutral");
		var_0_bool->SetMessage(383); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(384, 448, 445); //@t
		var_0_bool->AddReply(385, 449, 446); //@t
		var_0_bool->AddReply(386, 450, 447); //@t
		goto Label_172;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a";
	}
Label_172:
	bool var_264_bool;
	func_6501(var_264_bool);
	if(var_264_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_201;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_201:
		return 0;

	}
	
}


// @pe
void func_6790(void)
{
	@SetVariable("KnowGrif", 1);
}


// @pe
void func_5255(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1108_object, object var_1109_object)
{
	var_0_bool = var_1109_object;
	var_1_object = var_1108_object;
	var_3_object = false;
	if(1 != 0) {
		func_5313(var_1109_object, "Neutral");
		var_0_bool->SetMessage(14130); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(14131, -1, 15345); //@t
		var_0_bool->AddReply(14132, -1, 15346); //@t
		goto Label_5283;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x148b";
	}
Label_5283:
	bool var_1127_bool;
	func_6501(var_1127_bool);
	if(var_1127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_5312;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5312:
		return 0;

	}
	
}


// @pe
void func_7304(bool var_235_bool)
{
	int var_237_int;
	func_6474(var_237_int);
	if(var_237_int >= 18)
		var_235_bool = true;
	var_235_bool = false;
}


// @pe
void func_6796(void)
{
	@SetVariable("ood2Grif5", 1);
}


// @pe
void func_6802(void)
{
	@SetVariable("ood12Grif1", 1);
}


// @pe
void func_7315(bool var_253_bool)
{
	bool var_255_bool = false;
	int var_256_int;
	func_6474(var_256_int);
	if(var_256_int >= 12) {
		int var_259_int;
		func_6474(var_259_int);
		if(var_259_int < 18)
			var_255_bool = true;
	}
	if(var_255_bool != 0) {
		var_253_bool = true;
		return 0;
	}
	var_253_bool = false;
}


// @pe
void func_4247(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_906_object, object var_907_object)
{
	var_0_bool = var_907_object;
	var_1_object = var_906_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_913_bool;
		func_6997(var_913_bool, var_1_object);
		if(var_913_bool != 0) {
			func_4373(var_907_object, "Neutral");
			var_0_bool->SetMessage(11720); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(11721, 12928, 12927); //@t
		} else {
					func_4373(var_907_object, "Neutral");
					var_0_bool->SetMessage(11704); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_934_bool = false;
					bool var_935_bool;
					func_7183(var_1_object);
					if(var_935_bool != 0) {
						bool var_941_bool;
						func_7195(var_1_object);
						if(var_941_bool != 0)
							var_934_bool = true;
					}
					if(var_934_bool != 0)
						var_0_bool->AddReply(11705, 12910, 12909); //@t
					bool var_950_bool = false;
					bool var_951_bool = false;
					bool var_952_bool;
					func_7183(var_1_object);
					if(var_952_bool != 0) {
						bool var_954_bool;
						func_7217(var_1_object);
						if(!var_954_bool) //@nz
							var_951_bool = true;
					}
					if(var_951_bool != 0) {
						bool var_961_bool;
						func_7207(var_961_bool, var_1_object);
						if(var_961_bool != 0)
							var_950_bool = true;
					}
					if(var_950_bool != 0)
						var_0_bool->AddReply(11734, 12941, 12940); //@t
					var_0_bool->AddReply(14120, -1, 15334); //@t
					var_0_bool->AddReply(11739, -1, 12945); //@t
		}
	}
	for(;;) {
		bool var_924_bool;
		func_6501(var_924_bool);
		if(var_924_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6378(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4372;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4372:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x109b";


void func_6808(void)
{
	object var_85_object;
	func_7389(var_85_object);
	object var_84_object;
	var_85_object = var_84_object;
	float var_96_float;
	func_6460(var_96_float);
	var_84_object->AddMark("d5q01GrifWantsMoney", "pt_map_grif", 1, 15350, var_96_float);
}
EMIT "Stack[-1] = 0";


void func_6824(object var_150_object)
{
	float var_153_float;
	var_150_object->GetProperty("money", var_153_float);
	if((var_153_float - 40000) < 0)
		var_153_float = 0;
	var_150_object->SetProperty("money", var_153_float);
	@Trace("money 40000 removed");
}


void func_7336(bool var_223_bool, object var_224_object)
{
	float var_226_float;
	var_224_object->GetProperty("money", var_226_float);
	if(var_226_float >= 40000)
		var_223_bool = true;
	var_223_bool = false;
}


// @pe
void func_6322(void)
{
	@CameraSwitchToNormal();
}


void func_7347(object var_140_object)
{
	object var_142_object;
	@GetDiaryRoot(var_142_object);
	if(!var_142_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_140_object = false;
	}
	var_142_object = var_140_object;
}
EMIT "Stack[-1] = 0";


void func_6326(bool var_596_bool, object var_597_object)
{
	cvector var_607_cvector;
	var_597_object->GetPosition(var_607_cvector);
	float var_606_float;
	var_597_object->GetEyesHeight(var_606_float);
	var_614_float = GetByIndex(var_607_cvector, 1);
	SetByIndex(var_607_cvector, 1) = (var_614_float + var_606_float);
	cvector var_608_cvector;
	@GetPosition(var_608_cvector);
	@GetEyesHeight(var_606_float);
	var_615_float = GetByIndex(var_608_cvector, 1);
	SetByIndex(var_608_cvector, 1) = (var_615_float + var_606_float);
	cvector var_609_cvector = var_607_cvector - var_608_cvector;
	var_616_float = GetByIndex(var_609_cvector, 1);
	SetByIndex(var_609_cvector, 1) = (float)0;
	var_618_float = sqrt(var_609_cvector | var_609_cvector);
	var_609_cvector /= var_618_float;
	cvector var_610_cvector = -var_609_cvector;
	cvector var_611_cvector = (var_609_cvector * 70) - [0.0, 10.0, 0.0];
	bool var_613_bool;
	@IsOverrideActive(var_613_bool);
	if(var_613_bool != 0)
		var_596_bool = false;
	@StopWorld();
	@CameraTransit((var_608_cvector + var_611_cvector), var_610_cvector);
	var_623_float = GetByIndex(var_611_cvector, 0);
	var_624_float = GetByIndex(var_611_cvector, 2);
	@Rotate(var_623_float, var_624_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_596_bool = true;
}


// @pe
void func_5816(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1264_object, object var_1265_object)
{
	var_0_bool = var_1265_object;
	var_1_object = var_1264_object;
	var_3_object = false;
	if(1 != 0) {
		func_5874(var_1265_object, "Neutral");
		var_0_bool->SetMessage(14186); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(14187, -1, 15401); //@t
		var_0_bool->AddReply(14188, -1, 15402); //@t
		goto Label_5844;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16bc";
	}
Label_5844:
	bool var_1283_bool;
	func_6501(var_1283_bool);
	if(var_1283_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_5873;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5873:
		return 0;

	}
	
}


// @pe
void func_6841(bool var_180_bool)
{
	int var_182_int;
	func_6413(var_182_int, "ood1Grif1");
	if(var_182_int == 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


// @pe
void func_703(object var_2_object, string var_188_string)
{
	bool var_189_bool;
	func_6501(var_189_bool);
	if(!var_189_bool) //@nz
		return 0;
	if(var_188_string == var_2_object)
		return 0;
	string var_192_string;
	func_6378(var_192_string);
	var_2_object = var_192_string;
}


void func_7360(bool var_131_bool, object var_132_object, int var_133_int)
{
	object var_140_object;
	func_7347(var_140_object);
	object var_137_object;
	var_140_object = var_137_object;
	object var_138_object;
	var_137_object->Find(var_133_int, var_138_object);
	if(!var_138_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_133_int);
		var_131_bool = false;
	}
	var_138_object->AddChild(var_132_object);
	@SetVariable("player_diary", 1);
	int var_139_int;
	var_132_object->GetCategory(var_139_int);
	@SetDiarySection(var_139_int);
	var_131_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5313(object var_2_object, string var_82_string)
{
	bool var_83_bool;
	func_6501(var_83_bool);
	if(!var_83_bool) //@nz
		return 0;
	if(var_82_string == var_2_object)
		return 0;
	string var_86_string;
	func_6378(var_86_string);
	var_2_object = var_86_string;
}


// @pe
void func_6853(bool var_216_bool)
{
	int var_218_int;
	func_6413(var_218_int, "ood1Grif2");
	if(var_218_int == 0) {
		var_216_bool = true;
		return 0;
	}
	var_216_bool = false;
}


void func_2247(bool var_0_bool, int var_634_int, object var_635_object)
{
	var_0_bool = var_635_object;
	bool var_645_bool; object var_646_object;
	var_635_object = var_646_object;
	func_6266(var_645_bool, var_646_object);
	if(!var_645_bool) { //@nz
		var_634_int = -2;
		return 8;
	}
	object var_641_object;
	@CreateDialog(var_641_object);
	int var_648_int;
	func_6497(var_648_int);
	var_641_object->SetNPCName(var_648_int);
	string var_649_string;
	func_6499(var_649_string);
	var_641_object->SetPhoto(var_649_string);
	int var_650_int;
	func_7599(var_650_int);
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
	TaskCall(10);
	func_2310(var_654_object, var_655_object, var_656_string, var_657_bool, var_652_object, var_653_object);
	TaskReturn();
	bool var_644_bool;
	var_641_object->IsDialogEnd(var_644_bool);
	
	for(;;) {
		var_713_bool = !var_644_bool; //@nz
		if(var_713_bool == 0) goto Label_2299;
		@sync();
		var_641_object->IsDialogEnd(var_644_bool);
	}
	
Label_2299:
	object var_714_object;
	var_635_object = var_714_object;
	func_6322();
	@StopDialog(var_641_object);
	var_641_object->GetReturnValue(-1);
	int var_643_int = var_634_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_202(object var_2_object, string var_81_string)
{
	bool var_82_bool;
	func_6501(var_82_bool);
	if(!var_82_bool) //@nz
		return 0;
	if(var_81_string == var_2_object)
		return 0;
	string var_85_string;
	func_6378(var_85_string);
	var_2_object = var_85_string;
}


// @pe
void func_6865(bool var_244_bool)
{
	int var_246_int;
	func_6413(var_246_int, "ood1Grif3");
	if(var_246_int == 0) {
		var_244_bool = true;
		return 0;
	}
	var_244_bool = false;
}


void func_4818(bool var_0_bool, int var_986_int, object var_987_object)
{
	var_0_bool = var_987_object;
	bool var_997_bool; object var_998_object;
	var_987_object = var_998_object;
	func_6266(var_997_bool, var_998_object);
	if(!var_997_bool) { //@nz
		var_986_int = -2;
		return 8;
	}
	object var_993_object;
	@CreateDialog(var_993_object);
	int var_1000_int;
	func_6497(var_1000_int);
	var_993_object->SetNPCName(var_1000_int);
	string var_1001_string;
	func_6499(var_1001_string);
	var_993_object->SetPhoto(var_1001_string);
	int var_1002_int;
	func_7599(var_1002_int);
	var_993_object->SetPlayerName(var_1002_int);
	bool var_994_bool;
	@IsOverrideActive(var_994_bool);
	if(var_994_bool != 0) {
		var_986_int = -2;
		return 8;
	}
	@DoDialog(var_993_object);
	object var_1004_object; object var_1005_object;
	var_987_object = var_1004_object;
	var_993_object = var_1005_object;
	TaskCall(18);
	func_4881(var_1006_object, var_1007_object, var_1008_string, var_1009_bool, var_1004_object, var_1005_object);
	TaskReturn();
	bool var_996_bool;
	var_993_object->IsDialogEnd(var_996_bool);
	
	for(;;) {
		var_1031_bool = !var_996_bool; //@nz
		if(var_1031_bool == 0) goto Label_4870;
		@sync();
		var_993_object->IsDialogEnd(var_996_bool);
	}
	
Label_4870:
	object var_1032_object;
	var_987_object = var_1032_object;
	func_6322();
	@StopDialog(var_993_object);
	var_993_object->GetReturnValue(-1);
	int var_995_int = var_986_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6877(bool var_187_bool)
{
	int var_189_int;
	func_6413(var_189_int, "KnowEpidemic");
	if(var_189_int == 1)
		var_187_bool = true;
	var_187_bool = false;
}


void func_7389(object var_85_object)
{
	object var_88_object; object var_89_object;
	@GetMainOutdoorScene(var_88_object);
	if(var_88_object == null) {
		@Trace("Can't find main outdoor scene");
		var_89_object = null;
		var_89_object = var_85_object;
	}
	var_88_object->GetMap(var_89_object);
	var_89_object = var_85_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6374(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_6889(bool var_149_bool)
{
	int var_151_int;
	func_6413(var_151_int, "ood1GrifMQ1");
	if(var_151_int == 0) {
		var_149_bool = true;
		return 0;
	}
	var_149_bool = false;
}


void func_6378(string var_77_string)
{
	@Trace("playing " + var_77_string);
	float var_80_float;
	float var_81_float;
	@lshGetAnimTimes(var_77_string, var_80_float, var_81_float);
	@lshPlayAnimation(var_80_float, var_81_float);
	@Trace("start: " + var_80_float);
	@Trace("end: " + var_81_float);
}


void func_1771(bool var_0_bool, int var_284_int, object var_285_object)
{
	var_0_bool = var_285_object;
	bool var_295_bool; object var_296_object;
	var_285_object = var_296_object;
	func_6266(var_295_bool, var_296_object);
	if(!var_295_bool) { //@nz
		var_284_int = -2;
		return 8;
	}
	object var_291_object;
	@CreateDialog(var_291_object);
	int var_298_int;
	func_6497(var_298_int);
	var_291_object->SetNPCName(var_298_int);
	string var_299_string;
	func_6499(var_299_string);
	var_291_object->SetPhoto(var_299_string);
	int var_300_int;
	func_7599(var_300_int);
	var_291_object->SetPlayerName(var_300_int);
	bool var_292_bool;
	@IsOverrideActive(var_292_bool);
	if(var_292_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	@DoDialog(var_291_object);
	object var_302_object; object var_303_object;
	var_285_object = var_302_object;
	var_291_object = var_303_object;
	TaskCall(8);
	func_1834(var_304_object, var_305_object, var_306_string, var_307_bool, var_302_object, var_303_object);
	TaskReturn();
	bool var_294_bool;
	var_291_object->IsDialogEnd(var_294_bool);
	
	for(;;) {
		var_366_bool = !var_294_bool; //@nz
		if(var_366_bool == 0) goto Label_1823;
		@sync();
		var_291_object->IsDialogEnd(var_294_bool);
	}
	
Label_1823:
	object var_367_object;
	var_285_object = var_367_object;
	func_6322();
	@StopDialog(var_291_object);
	var_291_object->GetReturnValue(-1);
	int var_293_int = var_284_int;
}
EMIT "Stack[-4] = 0";


void func_3819(bool var_0_bool, int var_720_int, object var_721_object)
{
	var_0_bool = var_721_object;
	bool var_731_bool; object var_732_object;
	var_721_object = var_732_object;
	func_6266(var_731_bool, var_732_object);
	if(!var_731_bool) { //@nz
		var_720_int = -2;
		return 8;
	}
	object var_727_object;
	@CreateDialog(var_727_object);
	int var_734_int;
	func_6497(var_734_int);
	var_727_object->SetNPCName(var_734_int);
	string var_735_string;
	func_6499(var_735_string);
	var_727_object->SetPhoto(var_735_string);
	int var_736_int;
	func_7599(var_736_int);
	var_727_object->SetPlayerName(var_736_int);
	bool var_728_bool;
	@IsOverrideActive(var_728_bool);
	if(var_728_bool != 0) {
		var_720_int = -2;
		return 8;
	}
	@DoDialog(var_727_object);
	object var_738_object; object var_739_object;
	var_721_object = var_738_object;
	var_727_object = var_739_object;
	TaskCall(14);
	func_3882(var_740_object, var_741_object, var_742_string, var_743_bool, var_738_object, var_739_object);
	TaskReturn();
	bool var_730_bool;
	var_727_object->IsDialogEnd(var_730_bool);
	
	for(;;) {
		var_777_bool = !var_730_bool; //@nz
		if(var_777_bool == 0) goto Label_3871;
		@sync();
		var_727_object->IsDialogEnd(var_730_bool);
	}
	
Label_3871:
	object var_778_object;
	var_721_object = var_778_object;
	func_6322();
	@StopDialog(var_727_object);
	var_727_object->GetReturnValue(-1);
	int var_729_int = var_720_int;
}
EMIT "Stack[-4] = 0";


void func_7406(object var_113_object, string var_114_string, float var_115_float)
{
	object var_123_object;
	@GetMainOutdoorScene(var_123_object);
	if(var_123_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_121_cvector;
	cvector var_122_cvector;
	bool var_124_bool;
	var_123_object->GetLocator(var_114_string, var_124_bool, var_121_cvector, var_122_cvector);
	if(!var_124_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_114_string) + " doesnt exist");
	var_123_object->GetMap(var_113_object);
	if(var_113_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_134_float = GetByIndex(var_121_cvector, 0);
	var_135_float = GetByIndex(var_121_cvector, 2);
	var_113_object->SetMapParams(var_134_float, var_135_float, var_115_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_5874(object var_2_object, string var_82_string)
{
	bool var_83_bool;
	func_6501(var_83_bool);
	if(!var_83_bool) //@nz
		return 0;
	if(var_82_string == var_2_object)
		return 0;
	string var_86_string;
	func_6378(var_86_string);
	var_2_object = var_86_string;
}


// @pe
void func_6901(bool var_164_bool)
{
	int var_166_int;
	func_6413(var_166_int, "d1q01");
	if(var_166_int == 1000)
		var_164_bool = true;
	var_164_bool = false;
}


void func_6396(void)
{
	bool var_74_bool;
	func_6501(var_74_bool);
	if(var_74_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_6913(bool var_157_bool)
{
	int var_159_int;
	func_6413(var_159_int, "d1q01");
	if(var_159_int == 0) {
		var_157_bool = true;
		return 0;
	}
	var_157_bool = false;
}


void func_6403(cvector var_201_cvector, cvector var_202_cvector)
{
	float var_205_float = sqrt(var_202_cvector | var_202_cvector);
	if(var_205_float < 0.000001)
		var_201_cvector = [0.0, 0.0, 0.0];
	var_201_cvector = var_202_cvector / var_205_float;
}


void func_5379(bool var_0_bool, int var_1194_int, object var_1195_object)
{
	var_0_bool = var_1195_object;
	bool var_1205_bool; object var_1206_object;
	var_1195_object = var_1206_object;
	func_6266(var_1205_bool, var_1206_object);
	if(!var_1205_bool) { //@nz
		var_1194_int = -2;
		return 8;
	}
	object var_1201_object;
	@CreateDialog(var_1201_object);
	int var_1208_int;
	func_6497(var_1208_int);
	var_1201_object->SetNPCName(var_1208_int);
	string var_1209_string;
	func_6499(var_1209_string);
	var_1201_object->SetPhoto(var_1209_string);
	int var_1210_int;
	func_7599(var_1210_int);
	var_1201_object->SetPlayerName(var_1210_int);
	bool var_1202_bool;
	@IsOverrideActive(var_1202_bool);
	if(var_1202_bool != 0) {
		var_1194_int = -2;
		return 8;
	}
	@DoDialog(var_1201_object);
	object var_1212_object; object var_1213_object;
	var_1195_object = var_1212_object;
	var_1201_object = var_1213_object;
	TaskCall(24);
	func_5442(var_1214_object, var_1215_object, var_1216_string, var_1217_bool, var_1212_object, var_1213_object);
	TaskReturn();
	bool var_1204_bool;
	var_1201_object->IsDialogEnd(var_1204_bool);
	
	for(;;) {
		var_1239_bool = !var_1204_bool; //@nz
		if(var_1239_bool == 0) goto Label_5431;
		@sync();
		var_1201_object->IsDialogEnd(var_1204_bool);
	}
	
Label_5431:
	object var_1240_object;
	var_1195_object = var_1240_object;
	func_6322();
	@StopDialog(var_1201_object);
	var_1201_object->GetReturnValue(-1);
	int var_1203_int = var_1194_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2310(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_652_object, object var_653_object)
{
	var_0_bool = var_653_object;
	var_1_object = var_652_object;
	var_3_object = false;
	if(1 != 0) {
		func_2442(var_653_object, "Neutral");
		var_0_bool->SetMessage(6959); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_665_bool = false;
		bool var_666_bool;
		func_6949(var_1_object);
		if(var_666_bool != 0) {
			bool var_672_bool;
			func_6985(var_1_object);
			if(var_672_bool != 0)
				var_665_bool = true;
		}
		if(var_665_bool != 0)
			var_0_bool->AddReply(7328, 8080, 8079); //@t
		bool var_681_bool;
		func_6961(var_1_object);
		if(var_681_bool != 0)
			var_0_bool->AddReply(7319, 8070, 8069); //@t
		var_0_bool->AddReply(6970, 7678, 7677); //@t
		bool var_693_bool;
		func_6973(var_1_object);
		if(var_693_bool != 0)
			var_0_bool->AddReply(7335, 8049, 8087); //@t
		var_0_bool->AddReply(7530, -1, 8312); //@t
		goto Label_2412;
	EMIT "PushEmpty(bool, object)";
	EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
	EMIT "Call 0x1b19";
	EMIT "Pop(1)";
	EMIT "IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x98a";
	EMIT "Pop(1)";
	EMIT "Push((int) 7314)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "PushEmpty(bool, object)";
	EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
	EMIT "Call 0x1c49";
	EMIT "Pop(1)";
	EMIT "IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)";
	EMIT "Push((int) 7315)";
	EMIT "Push((int) 8066)";
	EMIT "Push((int) 8065)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	}
Label_2412:
	bool var_705_bool;
	func_6501(var_705_bool);
	if(var_705_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2441;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2441:
		return 0;

	}
	
}


// @pe
void func_6925(bool var_222_bool)
{
	int var_224_int;
	func_6413(var_224_int, "d1q01FirstGeorgVisit");
	if(var_224_int == 1)
		var_222_bool = true;
	var_222_bool = false;
}


void func_6413(int var_101_int, string var_102_string)
{
	int var_104_int;
	@GetVariable(var_102_string, var_104_int);
	var_104_int = var_101_int;
}


void func_7439(void)
{
	@ClearSubContainer(0);
	int var_88_int;
	func_6465(var_88_int);
	int var_86_int;
	var_88_int = var_86_int;
	int var_89_int;
	func_7594(var_89_int, "Rifle");
	bool var_84_bool;
	@AddItem(var_84_bool, var_89_int, 0, 1);
	int var_95_int;
	func_7594(var_95_int, "Revolver");
	@AddItem(var_84_bool, var_95_int, 0, 1);
	int var_99_int;
	func_7594(var_99_int, "lockpick");
	@AddItem(var_84_bool, var_99_int, 0, 1);
	int var_85_int;
	@irand(var_85_int, 3);
	var_85_int += 1;
	int var_105_int;
	func_7594(var_105_int, "Scalpel");
	@AddItem(var_84_bool, var_105_int, 0, var_85_int);
	@irand(var_85_int, 3);
	var_85_int += 1;
	int var_110_int;
	func_7594(var_110_int, "Knife");
	@AddItem(var_84_bool, var_110_int, 0, var_85_int);
	@irand(var_85_int, 10);
	if(var_85_int != 0) {
		int var_116_int;
		func_7594(var_116_int, "revolver_ammo");
		@AddItem(var_84_bool, var_116_int, 0, var_85_int);
	}
	@irand(var_85_int, 10);
	if(var_85_int != 0) {
		int var_122_int;
		func_7594(var_122_int, "rifle_ammo");
		@AddItem(var_84_bool, var_122_int, 0, var_85_int);
	}
	@irand(var_85_int, 10);
	if(var_85_int != 0) {
		int var_128_int;
		func_7594(var_128_int, "tvirin");
		@AddItem(var_84_bool, var_128_int, 0, var_85_int);
	}
	@irand(var_85_int, 100);
	if(var_85_int != 0) {
		int var_134_int;
		func_7594(var_134_int, "kerosene");
		@AddItem(var_84_bool, var_134_int, 0, var_85_int);
	}
	if(var_86_int >= 3) {
		int var_139_int;
		func_7594(var_139_int, "halfboot_repel");
		@AddItem(var_84_bool, var_139_int, 0, 1);
		int var_143_int;
		func_7594(var_143_int, "boot_repel");
		@AddItem(var_84_bool, var_143_int, 0, 1);
	}
	if(var_86_int >= 9) {
		int var_149_int;
		func_7594(var_149_int, "boot_army");
		@AddItem(var_84_bool, var_149_int, 0, 1);
		int var_153_int;
		func_7594(var_153_int, "balahon");
		@AddItem(var_84_bool, var_153_int, 0, 1);
		int var_157_int;
		func_7594(var_157_int, "glove_army");
		@AddItem(var_84_bool, var_157_int, 0, 1);
	}
}


// @pe
void func_4881(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1004_object, object var_1005_object)
{
	var_0_bool = var_1005_object;
	var_1_object = var_1004_object;
	var_3_object = false;
	if(1 != 0) {
		func_4939(var_1005_object, "Neutral");
		var_0_bool->SetMessage(14122); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(14123, -1, 15337); //@t
		var_0_bool->AddReply(14124, -1, 15338); //@t
		goto Label_4909;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1315";
	}
Label_4909:
	bool var_1023_bool;
	func_6501(var_1023_bool);
	if(var_1023_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4938;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4938:
		return 0;

	}
	
}


void func_6418(string var_83_string, bool var_84_bool)
{
	object var_86_object;
	@FindActor(var_86_object, var_83_string);
	if(!var_86_object) //@nz
		@Trace(("Door " + var_83_string) + " not found");
	var_86_object->SetProperty("locked", var_84_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4373(object var_2_object, string var_171_string)
{
	bool var_172_bool;
	func_6501(var_172_bool);
	if(!var_172_bool) //@nz
		return 0;
	if(var_171_string == var_2_object)
		return 0;
	string var_175_string;
	func_6378(var_175_string);
	var_2_object = var_175_string;
}


// @pe
void func_6937(void)
{
0x1b19: PushEmpty()
0x1b1a: PushEmpty(int, string)
0x1b1b: Stack[-1] = "ood2Grif1" // @poff=650
0x1b1c: Call 0x190d
}


void func_6434(object var_118_object, object var_119_object, int var_120_int)
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
void func_6949(bool var_212_bool)
{
	int var_214_int;
	func_6413(var_214_int, "ood2Grif2");
	if(var_214_int == 0) {
		var_212_bool = true;
		return 0;
	}
	var_212_bool = false;
}


// @pe
void func_1834(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_302_object, object var_303_object)
{
	var_0_bool = var_303_object;
	var_1_object = var_302_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_309_bool = false;
		bool var_310_bool = false;
		bool var_311_bool;
		func_6889(var_1_object);
		if(var_311_bool != 0) {
			bool var_317_bool;
			func_6913(var_1_object);
			if(!var_317_bool) //@nz
				var_310_bool = true;
		}
		if(var_310_bool != 0) {
			bool var_324_bool;
			func_6901(var_1_object);
			if(!var_324_bool) //@nz
				var_309_bool = true;
		}
		if(var_309_bool != 0) {
			func_1939(var_303_object, "Neutral");
			var_0_bool->SetMessage(6175); //@t
			var_0_bool->ClearReplies(); //@t
			bool var_337_bool;
			func_6877(var_1_object);
			if(!var_337_bool) //@nz
				var_0_bool->AddReply(6176, 6824, 6823); //@t
			bool var_347_bool;
			func_6877(var_1_object);
			if(!var_347_bool) //@nz
				var_0_bool->AddReply(6179, 6831, 6829); //@t
			bool var_353_bool;
			func_6877(var_1_object);
			if(var_353_bool != 0)
				var_0_bool->AddReply(6180, 6836, 6830); //@t
		} else {
				return 0;
		}
	}
	bool var_358_bool;
	func_6501(var_358_bool);
	if(var_358_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1938;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_1938:
		return 0;

	}
	
}
EMIT "GOTO 0x72e";


// @pe
void func_3882(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_738_object, object var_739_object)
{
	var_0_bool = var_739_object;
	var_1_object = var_738_object;
	var_3_object = false;
	if(1 != 0) {
		func_3960(var_739_object, "Neutral");
		var_0_bool->SetMessage(9843); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_751_bool;
		func_6997(var_751_bool, var_1_object);
		if(var_751_bool != 0)
			var_0_bool->AddReply(9844, 10844, 10843); //@t
		bool var_758_bool;
		func_6997(var_758_bool, var_1_object);
		if(var_758_bool != 0)
			var_0_bool->AddReply(9848, 10848, 10847); //@t
		var_0_bool->AddReply(14117, -1, 15331); //@t
		var_0_bool->AddReply(14118, -1, 15332); //@t
		goto Label_3930;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf2e";
	}
Label_3930:
	bool var_769_bool;
	func_6501(var_769_bool);
	if(var_769_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3959;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3959:
		return 0;

	}
	
}


void func_6447(object var_132_object, string var_133_string, int var_134_int)
{
	object var_136_object;
	@CreateInvItem(var_136_object);
	var_136_object->SetItemName(var_133_string);
	object var_137_object; object var_138_object; int var_139_int;
	var_132_object = var_137_object;
	var_136_object = var_138_object;
	var_134_int = var_139_int;
	func_6434(var_137_object, var_138_object, var_139_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6961(bool var_229_bool)
{
	int var_231_int;
	func_6413(var_231_int, "ood2Grif3");
	if(var_231_int == 0) {
		var_229_bool = true;
		return 0;
	}
	var_229_bool = false;
}


void func_5940(bool var_0_bool, int var_1298_int, object var_1299_object)
{
	var_0_bool = var_1299_object;
	bool var_1309_bool; object var_1310_object;
	var_1299_object = var_1310_object;
	func_6266(var_1309_bool, var_1310_object);
	if(!var_1309_bool) { //@nz
		var_1298_int = -2;
		return 8;
	}
	object var_1305_object;
	@CreateDialog(var_1305_object);
	int var_1312_int;
	func_6497(var_1312_int);
	var_1305_object->SetNPCName(var_1312_int);
	string var_1313_string;
	func_6499(var_1313_string);
	var_1305_object->SetPhoto(var_1313_string);
	int var_1314_int;
	func_7599(var_1314_int);
	var_1305_object->SetPlayerName(var_1314_int);
	bool var_1306_bool;
	@IsOverrideActive(var_1306_bool);
	if(var_1306_bool != 0) {
		var_1298_int = -2;
		return 8;
	}
	@DoDialog(var_1305_object);
	object var_1316_object; object var_1317_object;
	var_1299_object = var_1316_object;
	var_1305_object = var_1317_object;
	TaskCall(30);
	func_6003(var_1318_object, var_1319_object, var_1320_string, var_1321_bool, var_1316_object, var_1317_object);
	TaskReturn();
	bool var_1308_bool;
	var_1305_object->IsDialogEnd(var_1308_bool);
	
	for(;;) {
		var_1349_bool = !var_1308_bool; //@nz
		if(var_1349_bool == 0) goto Label_5992;
		@sync();
		var_1305_object->IsDialogEnd(var_1308_bool);
	}
	
Label_5992:
	object var_1350_object;
	var_1299_object = var_1350_object;
	func_6322();
	@StopDialog(var_1305_object);
	var_1305_object->GetReturnValue(-1);
	int var_1307_int = var_1298_int;
}
EMIT "Stack[-4] = 0";


void func_6460(float var_96_float)
{
	float var_98_float;
	@GetGameTime(var_98_float);
	var_98_float = var_96_float;
}


// @pe
void func_6973(bool var_241_bool)
{
	int var_243_int;
	func_6413(var_243_int, "ood2Grif4");
	if(var_243_int == 0) {
		var_241_bool = true;
		return 0;
	}
	var_241_bool = false;
}


void func_6465(int var_74_int)
{
	float var_76_float;
	@GetGameTime(var_76_float);
	var_74_int = 1 + (var_76_float / 24);
}


// @pe
void func_5442(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1212_object, object var_1213_object)
{
	var_0_bool = var_1213_object;
	var_1_object = var_1212_object;
	var_3_object = false;
	if(1 != 0) {
		func_5500(var_1213_object, "Neutral");
		var_0_bool->SetMessage(14134); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(14135, -1, 15349); //@t
		var_0_bool->AddReply(14136, -1, 15350); //@t
		goto Label_5470;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1546";
	}
Label_5470:
	bool var_1231_bool;
	func_6501(var_1231_bool);
	if(var_1231_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_5499;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5499:
		return 0;

	}
	
}


// @pe
void func_6985(bool var_220_bool)
{
	int var_222_int;
	func_6413(var_222_int, "d2q02");
	if(var_222_int == 6)
		var_220_bool = true;
	var_220_bool = false;
}


void func_6474(int var_237_int)
{
	float var_239_float;
	@GetGameTime(var_239_float);
	int var_240_int;
	var_239_float = var_240_int;
	var_237_int = var_240_int % 24;
}


// @pe
void func_4939(object var_2_object, string var_82_string)
{
	bool var_83_bool;
	func_6501(var_83_bool);
	if(!var_83_bool) //@nz
		return 0;
	if(var_82_string == var_2_object)
		return 0;
	string var_86_string;
	func_6378(var_86_string);
	var_2_object = var_86_string;
}


// @pe
void func_6482(bool var_275_bool, int var_276_int)
{
	int var_277_int;
	func_6465(var_277_int);
	var_275_bool = var_277_int == var_276_int;
}


// @pe
void func_6997(bool var_167_bool, object var_168_object)
{
	object var_170_object;
	var_168_object = var_170_object;
	func_7301(var_170_object);
	bool var_169_bool;
	if(var_169_bool != 0) {
		var_167_bool = true;
		return 0;
	}
	var_167_bool = false;
}


void func_6488(bool var_1353_bool)
{
	func_6378("No");
	bool var_1355_bool;
	@lshWaitForAnimEnd(var_1355_bool);
	var_1355_bool = var_1353_bool;
}


// @pe
void func_7007(bool var_348_bool)
{
	int var_350_int;
	func_6413(var_350_int, "KnowBurahDead");
	if(var_350_int == 1)
		var_348_bool = true;
	var_348_bool = false;
}


void func_6497(int var_217_int)
{
	var_217_int = 2860;
}


void func_6499(string var_218_string)
{
	var_218_string = "ui/NPC_Grif.png";
}


void func_6501(bool var_74_bool)
{
	var_74_bool = true;
}


// @pe
void func_6503(void)
{
	@SetVariable("ood1Grif1", 1);
}


void func_362(bool var_0_bool, int var_369_int, object var_370_object)
{
	var_0_bool = var_370_object;
	bool var_380_bool; object var_381_object;
	var_370_object = var_381_object;
	func_6266(var_380_bool, var_381_object);
	if(!var_380_bool) { //@nz
		var_369_int = -2;
		return 8;
	}
	object var_376_object;
	@CreateDialog(var_376_object);
	int var_383_int;
	func_6497(var_383_int);
	var_376_object->SetNPCName(var_383_int);
	string var_384_string;
	func_6499(var_384_string);
	var_376_object->SetPhoto(var_384_string);
	int var_385_int;
	func_7599(var_385_int);
	var_376_object->SetPlayerName(var_385_int);
	bool var_377_bool;
	@IsOverrideActive(var_377_bool);
	if(var_377_bool != 0) {
		var_369_int = -2;
		return 8;
	}
	@DoDialog(var_376_object);
	object var_387_object; object var_388_object;
	var_370_object = var_387_object;
	var_376_object = var_388_object;
	TaskCall(6);
	func_425(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object);
	TaskReturn();
	bool var_379_bool;
	var_376_object->IsDialogEnd(var_379_bool);
	
	for(;;) {
		var_592_bool = !var_379_bool; //@nz
		if(var_592_bool == 0) goto Label_414;
		@sync();
		var_376_object->IsDialogEnd(var_379_bool);
	}
	
Label_414:
	object var_593_object;
	var_370_object = var_593_object;
	func_6322();
	@StopDialog(var_376_object);
	var_376_object->GetReturnValue(-1);
	int var_378_int = var_369_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7019(bool var_274_bool)
{
	int var_276_int;
	func_6413(var_276_int, "ood1Grif4");
	if(var_276_int == 0) {
		var_274_bool = true;
		return 0;
	}
	var_274_bool = false;
}


// @pe
void func_6509(void)
{
	@SetVariable("ood1Grif2", 1);
}


// @pe
void func_6515(void)
{
	@SetVariable("ood1Grif3", 1);
}


// @pe
void func_6003(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1316_object, object var_1317_object)
{
	var_0_bool = var_1317_object;
	var_3_object = false;
	if(1 != 0) {
		func_6066(var_1317_object, "Neutral");
		var_0_bool->SetMessage(15251); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1329_bool;
		func_7265(var_1316_object);
		if(var_1329_bool != 0)
			var_0_bool->AddReply(15252, 16531, 16529); //@t
		var_0_bool->AddReply(15338, -1, 16561); //@t
		goto Label_6036;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1777";
	}
Label_6036:
	bool var_1341_bool;
	func_6501(var_1341_bool);
	if(var_1341_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_6065;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6065:
		return 0;

	}
	
}


// @pe
void func_7031(bool var_290_bool)
{
	int var_292_int;
	func_6413(var_292_int, "ood1Grif5");
	if(var_292_int == 0) {
		var_290_bool = true;
		return 0;
	}
	var_290_bool = false;
}


// @pe
void func_3960(object var_2_object, string var_82_string)
{
	bool var_83_bool;
	func_6501(var_83_bool);
	if(!var_83_bool) //@nz
		return 0;
	if(var_82_string == var_2_object)
		return 0;
	string var_86_string;
	func_6378(var_86_string);
	var_2_object = var_86_string;
}


// @pe
void func_6521(void)
{
	@SetVariable("KnowEpidemic", 1);
}


// @pe
void func_5500(object var_2_object, string var_82_string)
{
	bool var_83_bool;
	func_6501(var_83_bool);
	if(!var_83_bool) //@nz
		return 0;
	if(var_82_string == var_2_object)
		return 0;
	string var_86_string;
	func_6378(var_86_string);
	var_2_object = var_86_string;
}


// @pe
void func_6527(void)
{
	@SetVariable("ood1GrifMQ1", 1);
}


// @pe
void func_7043(bool var_306_bool)
{
	int var_308_int;
	func_6413(var_308_int, "ood1Grif6");
	if(var_308_int == 0) {
		var_306_bool = true;
		return 0;
	}
	var_306_bool = false;
}


// @pe
void func_6533(void)
{
	func_6418("warehouse_rubin@door1", false);
}


// @pe
void func_2442(object var_2_object, string var_195_string)
{
	bool var_196_bool;
	func_6501(var_196_bool);
	if(!var_196_bool) //@nz
		return 0;
	if(var_195_string == var_2_object)
		return 0;
	string var_199_string;
	func_6378(var_199_string);
	var_2_object = var_199_string;
}


// @pe
void func_6540(object var_149_object)
{
	@Trace("money10000 is given");
	object var_152_object;
	var_149_object = var_152_object;
	func_6242(var_152_object, "money", 10000);
}


void func_5005(bool var_0_bool, int var_1038_int, object var_1039_object)
{
	var_0_bool = var_1039_object;
	bool var_1049_bool; object var_1050_object;
	var_1039_object = var_1050_object;
	func_6266(var_1049_bool, var_1050_object);
	if(!var_1049_bool) { //@nz
		var_1038_int = -2;
		return 8;
	}
	object var_1045_object;
	@CreateDialog(var_1045_object);
	int var_1052_int;
	func_6497(var_1052_int);
	var_1045_object->SetNPCName(var_1052_int);
	string var_1053_string;
	func_6499(var_1053_string);
	var_1045_object->SetPhoto(var_1053_string);
	int var_1054_int;
	func_7599(var_1054_int);
	var_1045_object->SetPlayerName(var_1054_int);
	bool var_1046_bool;
	@IsOverrideActive(var_1046_bool);
	if(var_1046_bool != 0) {
		var_1038_int = -2;
		return 8;
	}
	@DoDialog(var_1045_object);
	object var_1056_object; object var_1057_object;
	var_1039_object = var_1056_object;
	var_1045_object = var_1057_object;
	TaskCall(20);
	func_5068(var_1058_object, var_1059_object, var_1060_string, var_1061_bool, var_1056_object, var_1057_object);
	TaskReturn();
	bool var_1048_bool;
	var_1045_object->IsDialogEnd(var_1048_bool);
	
	for(;;) {
		var_1083_bool = !var_1048_bool; //@nz
		if(var_1083_bool == 0) goto Label_5057;
		@sync();
		var_1045_object->IsDialogEnd(var_1048_bool);
	}
	
Label_5057:
	object var_1084_object;
	var_1039_object = var_1084_object;
	func_6322();
	@StopDialog(var_1045_object);
	var_1045_object->GetReturnValue(-1);
	int var_1047_int = var_1038_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7055(bool var_322_bool)
{
	int var_324_int;
	func_6413(var_324_int, "ood1Grif7");
	if(var_324_int == 0) {
		var_322_bool = true;
		return 0;
	}
	var_322_bool = false;
}


// @pe
void func_1939(object var_2_object, string var_171_string)
{
	bool var_172_bool;
	func_6501(var_172_bool);
	if(!var_172_bool) //@nz
		return 0;
	if(var_171_string == var_2_object)
		return 0;
	string var_175_string;
	func_6378(var_175_string);
	var_2_object = var_175_string;
}


// @pe
void func_6551(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_7067(bool var_355_bool)
{
	int var_357_int;
	func_6413(var_357_int, "ood1Grif8");
	if(var_357_int == 0) {
		var_355_bool = true;
		return 0;
	}
	var_355_bool = false;
}


// @pe
void func_6557(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_6563(void)
{
	@SetVariable("ood2Grif1", 1);
}


// @pe
void func_7079(bool var_338_bool)
{
	int var_340_int;
	func_6413(var_340_int, "ood1Grif9");
	if(var_340_int == 0) {
		var_338_bool = true;
		return 0;
	}
	var_338_bool = false;
}


// @pe
void func_425(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_387_object, object var_388_object)
{
	var_0_bool = var_388_object;
	var_1_object = var_387_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_394_bool;
		func_6841(var_1_object);
		if(var_394_bool != 0) {
			func_703(var_388_object, "Neutral");
			var_0_bool->SetMessage(5289); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(5290, 5832, 5831); //@t
			var_0_bool->AddReply(5300, 5836, 5841); //@t
			var_0_bool->AddReply(5301, -1, 5843); //@t
		} else {
					func_703(var_388_object, "Neutral");
					var_0_bool->SetMessage(7666); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_425_bool = false;
					bool var_426_bool;
					func_6853(var_1_object);
					if(var_426_bool != 0) {
						bool var_432_bool;
						func_6925(var_1_object);
						if(var_432_bool != 0)
							var_425_bool = true;
					}
					if(var_425_bool != 0)
						var_0_bool->AddReply(7667, 8496, 8462); //@t
					bool var_441_bool = true;
					bool var_442_bool = false;
					bool var_443_bool;
					func_7115(var_443_bool, var_1_object);
					if(var_443_bool != 0) {
						bool var_454_bool;
						func_6865(var_1_object);
						if(var_454_bool != 0)
							var_442_bool = true;
					}
					if(var_442_bool != 1) {
						bool var_460_bool = false;
						bool var_461_bool;
						func_7173(var_461_bool, var_1_object);
						if(var_461_bool != 0) {
							bool var_472_bool;
							func_6865(var_1_object);
							if(var_472_bool != 0)
								var_460_bool = true;
						}
						if(var_460_bool != 1)
							var_441_bool = false;
					}
					if(var_441_bool != 0)
						var_0_bool->AddReply(7668, 8504, 8463); //@t
					bool var_477_bool = false;
					bool var_478_bool;
					func_7229(var_1_object);
					if(var_478_bool != 0) {
						bool var_484_bool;
						func_7019(var_1_object);
						if(var_484_bool != 0)
							var_477_bool = true;
					}
					if(var_477_bool != 0)
						var_0_bool->AddReply(7681, 8498, 8476); //@t
					bool var_493_bool = false;
					bool var_494_bool;
					func_7289(var_1_object);
					if(var_494_bool != 0) {
						bool var_500_bool;
						func_7031(var_1_object);
						if(var_500_bool != 0)
							var_493_bool = true;
					}
					if(var_493_bool != 0)
						var_0_bool->AddReply(7686, 8499, 8481); //@t
					bool var_509_bool = false;
					bool var_510_bool;
					func_7103(var_1_object);
					if(var_510_bool != 0) {
						bool var_516_bool;
						func_7043(var_1_object);
						if(var_516_bool != 0)
							var_509_bool = true;
					}
					if(var_509_bool != 0)
						var_0_bool->AddReply(7687, 8500, 8482); //@t
					bool var_525_bool = false;
					bool var_526_bool;
					func_7277(var_1_object);
					if(var_526_bool != 0) {
						bool var_532_bool;
						func_7055(var_1_object);
						if(var_532_bool != 0)
							var_525_bool = true;
					}
					if(var_525_bool != 0)
						var_0_bool->AddReply(7691, 8501, 8486); //@t
					bool var_541_bool = false;
					bool var_542_bool;
					func_7253(var_1_object);
					if(var_542_bool != 0) {
						bool var_548_bool;
						func_7079(var_1_object);
						if(var_548_bool != 0)
							var_541_bool = true;
					}
					if(var_541_bool != 0)
						var_0_bool->AddReply(7692, 8502, 8487); //@t
					bool var_557_bool = false;
					bool var_558_bool;
					func_7007(var_1_object);
					if(!var_558_bool) { //@nz
						bool var_565_bool;
						func_7067(var_1_object);
						if(var_565_bool != 0)
							var_557_bool = true;
					}
					if(var_557_bool != 0)
						var_0_bool->AddReply(7693, 5818, 8488); //@t
					bool var_574_bool = false;
					bool var_575_bool;
					func_7007(var_1_object);
					if(var_575_bool != 0) {
						bool var_577_bool;
						func_7091(var_1_object);
						if(var_577_bool != 0)
							var_574_bool = true;
					}
					if(var_574_bool != 0)
						var_0_bool->AddReply(7694, 8491, 8489); //@t
					var_0_bool->AddReply(14114, -1, 15328); //@t
					var_0_bool->AddReply(8702, -1, 9539); //@t
		}
	}
	for(;;) {
		bool var_415_bool;
		func_6501(var_415_bool);
		if(var_415_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6378(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_702;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_702:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1ad";


// @pe
void func_6569(void)
{
	@SetVariable("ood2Grif2", 1);
}


void func_7594(int var_89_int, string var_90_string)
{
	int var_92_int;
	@GetInvItemByName(var_92_int, var_90_string);
	var_92_int = var_89_int;
}


void func_2987(bool var_0_bool, int var_784_int, object var_785_object)
{
	var_0_bool = var_785_object;
	bool var_795_bool; object var_796_object;
	var_785_object = var_796_object;
	func_6266(var_795_bool, var_796_object);
	if(!var_795_bool) { //@nz
		var_784_int = -2;
		return 8;
	}
	object var_791_object;
	@CreateDialog(var_791_object);
	int var_798_int;
	func_6497(var_798_int);
	var_791_object->SetNPCName(var_798_int);
	string var_799_string;
	func_6499(var_799_string);
	var_791_object->SetPhoto(var_799_string);
	int var_800_int;
	func_7599(var_800_int);
	var_791_object->SetPlayerName(var_800_int);
	bool var_792_bool;
	@IsOverrideActive(var_792_bool);
	if(var_792_bool != 0) {
		var_784_int = -2;
		return 8;
	}
	@DoDialog(var_791_object);
	object var_802_object; object var_803_object;
	var_785_object = var_802_object;
	var_791_object = var_803_object;
	TaskCall(12);
	func_3050(var_804_object, var_805_object, var_806_string, var_807_bool, var_802_object, var_803_object);
	TaskReturn();
	bool var_794_bool;
	var_791_object->IsDialogEnd(var_794_bool);
	
	for(;;) {
		var_881_bool = !var_794_bool; //@nz
		if(var_881_bool == 0) goto Label_3039;
		@sync();
		var_791_object->IsDialogEnd(var_794_bool);
	}
	
Label_3039:
	object var_882_object;
	var_785_object = var_882_object;
	func_6322();
	@StopDialog(var_791_object);
	var_791_object->GetReturnValue(-1);
	int var_793_int = var_784_int;
}
EMIT "Stack[-4] = 0";


void func_7599(int var_219_int)
{
	int var_221_int;
	@GetVariable("player", var_221_int);
	if(var_221_int == 0) {
		var_219_int = 200001;
		return 2;
	EMIT "GOTO 0x1dbe";
	}
	if(var_221_int == 1) {
		var_219_int = 200002;
		return 2;
	}
	var_219_int = 200003;
}


// @pe
void func_6575(void)
{
	@SetVariable("ood2Grif3", 1);
}


// @pe
void func_6066(object var_2_object, string var_83_string)
{
	bool var_84_bool;
	func_6501(var_84_bool);
	if(!var_84_bool) //@nz
		return 0;
	if(var_83_string == var_2_object)
		return 0;
	string var_87_string;
	func_6378(var_87_string);
	var_2_object = var_87_string;
}


// @pe
void func_7091(bool var_367_bool)
{
	int var_369_int;
	func_6413(var_369_int, "ood1Grif10");
	if(var_369_int == 0) {
		var_367_bool = true;
		return 0;
	}
	var_367_bool = false;
}


// @pe
void func_6581(void)
{
	@SetVariable("ood2Grif4", 1);
}


// @pe
void func_6587(void)
{
	@SetVariable("d2q02", 7);
	func_7616();
}


void func_5566(bool var_0_bool, int var_1142_int, object var_1143_object)
{
	var_0_bool = var_1143_object;
	bool var_1153_bool; object var_1154_object;
	var_1143_object = var_1154_object;
	func_6266(var_1153_bool, var_1154_object);
	if(!var_1153_bool) { //@nz
		var_1142_int = -2;
		return 8;
	}
	object var_1149_object;
	@CreateDialog(var_1149_object);
	int var_1156_int;
	func_6497(var_1156_int);
	var_1149_object->SetNPCName(var_1156_int);
	string var_1157_string;
	func_6499(var_1157_string);
	var_1149_object->SetPhoto(var_1157_string);
	int var_1158_int;
	func_7599(var_1158_int);
	var_1149_object->SetPlayerName(var_1158_int);
	bool var_1150_bool;
	@IsOverrideActive(var_1150_bool);
	if(var_1150_bool != 0) {
		var_1142_int = -2;
		return 8;
	}
	@DoDialog(var_1149_object);
	object var_1160_object; object var_1161_object;
	var_1143_object = var_1160_object;
	var_1149_object = var_1161_object;
	TaskCall(26);
	func_5629(var_1162_object, var_1163_object, var_1164_string, var_1165_bool, var_1160_object, var_1161_object);
	TaskReturn();
	bool var_1152_bool;
	var_1149_object->IsDialogEnd(var_1152_bool);
	
	for(;;) {
		var_1187_bool = !var_1152_bool; //@nz
		if(var_1187_bool == 0) goto Label_5618;
		@sync();
		var_1149_object->IsDialogEnd(var_1152_bool);
	}
	
Label_5618:
	object var_1188_object;
	var_1143_object = var_1188_object;
	func_6322();
	@StopDialog(var_1149_object);
	var_1149_object->GetReturnValue(-1);
	int var_1151_int = var_1142_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7103(bool var_300_bool)
{
	int var_302_int;
	func_6413(var_302_int, "KnowRubin");
	if(var_302_int == 1)
		var_300_bool = true;
	var_300_bool = false;
}


void func_7616(void)
{
	@Trace("Adding diary entry");
	object var_86_object;
	@CreateDiaryEntry(var_86_object, 132, 2, 15269);
	bool var_91_bool; object var_92_object;
	var_86_object = var_92_object;
	func_7360(var_91_bool, var_92_object, 11);
}
EMIT "Stack[-1] = 0";


void func_6596(object var_110_object)
{
	@Trace("Revolver is given");
	object var_113_object;
	@CreateInvItem(var_113_object);
	var_113_object->SetItemName("Revolver");
	var_113_object->SetProperty("durability", 30);
	object var_118_object; object var_119_object;
	var_110_object = var_118_object;
	var_113_object = var_119_object;
	func_6434(var_118_object, var_119_object, 1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7115(bool var_233_bool, object var_234_object)
{
	object var_236_object;
	var_234_object = var_236_object;
	func_7304(var_236_object);
	bool var_235_bool;
	if(var_235_bool != 0) {
		var_233_bool = true;
		return 0;
	}
	var_233_bool = false;
}


// @pe
void func_5068(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1056_object, object var_1057_object)
{
	var_0_bool = var_1057_object;
	var_1_object = var_1056_object;
	var_3_object = false;
	if(1 != 0) {
		func_5126(var_1057_object, "Neutral");
		var_0_bool->SetMessage(14126); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(14127, -1, 15341); //@t
		var_0_bool->AddReply(14128, -1, 15342); //@t
		goto Label_5096;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13d0";
	}
Label_5096:
	bool var_1075_bool;
	func_6501(var_1075_bool);
	if(var_1075_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_5125;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5125:
		return 0;

	}
	
}


void func_7632(void)
{
	@Trace("Adding diary entry");
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 97, 2, 12179);
	bool var_112_bool; object var_113_object;
	var_107_object = var_113_object;
	func_7360(var_112_bool, var_113_object, 22);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7125(bool var_178_bool)
{
	int var_180_int;
	func_6413(var_180_int, "d4q03");
	if(var_180_int == 1)
		var_178_bool = true;
	var_178_bool = false;
}


// @pe
void func_6617(object var_129_object)
{
	@Trace("revolver ammo2 is given");
	object var_132_object;
	var_129_object = var_132_object;
	func_6447(var_132_object, "revolver_ammo", 2);
}


void func_7648(void)
{
	@Trace("Adding diary entry");
	object var_126_object;
	@CreateDiaryEntry(var_126_object, 145, 1, 15345);
	bool var_131_bool; object var_132_object;
	var_126_object = var_132_object;
	func_7360(var_131_bool, var_132_object, 139);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7137(bool var_186_bool)
{
	int var_188_int;
	func_6413(var_188_int, "ood4Grif1");
	if(var_188_int == 0) {
		var_186_bool = true;
		return 0;
	}
	var_186_bool = false;
}


// @pe
void func_6628(void)
{
	@SetVariable("KnowBurahDead", 1);
}


// @pe
void func_6634(void)
{
	@SetVariable("ood1Grif4", 1);
}


// @pe
void func_3050(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_802_object, object var_803_object)
{
	var_0_bool = var_803_object;
	var_1_object = var_802_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_809_bool = false;
		bool var_810_bool;
		func_7125(var_1_object);
		if(var_810_bool != 0) {
			bool var_816_bool;
			func_7137(var_1_object);
			if(var_816_bool != 0)
				var_809_bool = true;
		}
		if(var_809_bool != 0) {
			func_3191(var_803_object, "Neutral");
			var_0_bool->SetMessage(10952); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(10953, 12113, 12112); //@t
			var_0_bool->AddReply(10960, 12113, 12119); //@t
		} else {
					func_3191(var_803_object, "Neutral");
					var_0_bool->SetMessage(9615); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_844_bool = false;
					bool var_845_bool;
					func_7149(var_1_object);
					if(var_845_bool != 0) {
						bool var_851_bool;
						func_7161(var_1_object);
						if(var_851_bool != 0)
							var_844_bool = true;
					}
					if(var_844_bool != 0)
						var_0_bool->AddReply(10970, 12133, 12132); //@t
					bool var_860_bool;
					func_6997(var_860_bool, var_1_object);
					if(var_860_bool != 0)
						var_0_bool->AddReply(10948, 12108, 12107); //@t
					bool var_865_bool;
					func_6997(var_865_bool, var_1_object);
					if(var_865_bool != 0)
						var_0_bool->AddReply(9640, 10581, 10608); //@t
					bool var_870_bool;
					func_6997(var_870_bool, var_1_object);
					if(var_870_bool != 0)
						var_0_bool->AddReply(10947, 10612, 12106); //@t
					var_0_bool->AddReply(14119, -1, 15333); //@t
					var_0_bool->AddReply(9616, -1, 10580); //@t
		}
	}
	for(;;) {
		bool var_834_bool;
		func_6501(var_834_bool);
		if(var_834_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6378(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3190;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3190:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xbee";


// @pe
void func_7149(bool var_217_bool)
{
	int var_219_int;
	func_6413(var_219_int, "ood4Grif2");
	if(var_219_int == 0) {
		var_217_bool = true;
		return 0;
	}
	var_217_bool = false;
}


void func_7664(void)
{
	var_71_bool = GlobalVars[1];
	GlobalVars[1] = false;
	var_72_int = GlobalVars[2];
	GlobalVars[2] = -1;
}


// @pe
void func_6640(void)
{
	@SetVariable("ood1Grif5", 1);
}


// @pe
void func_6646(void)
{
	@SetVariable("ood1Grif6", 1);
}


// @pe
void func_7671(object var_595_object)
{
	object var_597_object;
	var_595_object = var_597_object;
	bool var_596_bool;
	func_6326(var_596_bool, var_597_object);
	if(!var_596_bool) { //@nz
	}
	object var_626_object;
	var_595_object = var_626_object;
	TaskCall(1);
	func_6(var_626_object);
	TaskReturn();
	object var_630_object;
	var_595_object = var_630_object;
	func_6374();
}


// @pe
void func_7161(bool var_223_bool)
{
	int var_225_int;
	func_6413(var_225_int, "d4q03_alldead");
	if(var_225_int == 1)
		var_223_bool = true;
	var_223_bool = false;
}


// @pe
void func_6652(void)
{
	@SetVariable("ood1Grif7", 1);
}


// @pe
void func_5629(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1160_object, object var_1161_object)
{
	var_0_bool = var_1161_object;
	var_1_object = var_1160_object;
	var_3_object = false;
	if(1 != 0) {
		func_5687(var_1161_object, "Neutral");
		var_0_bool->SetMessage(14138); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(14139, -1, 15353); //@t
		var_0_bool->AddReply(14140, -1, 15354); //@t
		goto Label_5657;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1601";
	}
Label_5657:
	bool var_1179_bool;
	func_6501(var_1179_bool);
	if(var_1179_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6378(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_5686;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5686:
		return 0;

	}
	
}


