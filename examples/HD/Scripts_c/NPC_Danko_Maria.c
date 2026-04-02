// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_56_bool == 84) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_6780();
				func_154(var_57_cvector, "Staring");
				var_0_object->SetMessage(500072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500073, 87, 85); //@t
				var_0_object->AddReply(500074, 88, 86); //@t
				var_0_object->AddReply(500086, 87, 98); //@t
				var_0_object->AddReply(500087, 87, 99); //@t
				return 0;
			}
			if(var_56_bool == 88) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_6750();
				func_154(var_57_cvector, "Neutral");
				var_0_object->SetMessage(500076); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500085, 87, 97); //@t
				return 0;
			}
			if(var_56_bool == 87) {
				func_154(var_57_cvector, "Staring");
				var_0_object->SetMessage(500075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500077, 93, 89); //@t
				var_0_object->AddReply(500078, 91, 90); //@t
				return 0;
			}
			if(var_56_bool == 91) {
				func_154(var_57_cvector, "Staring");
				var_0_object->SetMessage(500079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500080, -1, 92); //@t
				return 0;
			}
			if(var_56_bool == 93) {
				func_154(var_57_cvector, "Staring");
				var_0_object->SetMessage(500081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500083, -1, 95); //@t
				var_0_object->AddReply(500084, -1, 96); //@t
				return 0;
			}
			var_3_string = true;
			bool var_134_bool;
			func_6611(var_134_bool);
			if(var_134_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb1";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_57_cvector == 13313) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_6768();
			}
			if(var_56_bool == 3539) {
				bool var_68_bool = false;
				bool var_69_bool;
				func_7052(var_1_object);
				if(var_69_bool != 0) {
					bool var_77_bool;
					func_7064(var_1_object);
					if(var_77_bool != 0)
						var_68_bool = true;
				}
				if(var_68_bool != 0) {
					object var_83_object; object var_84_object;
					var_83_object = var_1_object;
					var_84_object = var_0_object;
					func_6762();
					object var_87_object; object var_88_object;
					var_87_object = var_1_object;
					var_88_object = var_0_object;
					func_6806();
					func_513(var_57_cvector, "Angry");
					var_0_object->SetMessage(503206); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(503207, 3543, 3540); //@t
					var_0_object->AddReply(503208, 3542, 3541); //@t
					return 0;
				}
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_6806();
				func_513(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(512086); //@t
				var_0_object->ClearReplies(); //@t
				bool var_119_bool;
				func_7076(var_1_object);
				if(var_119_bool != 0)
					var_0_object->AddReply(512087, 13314, 13313); //@t
				var_0_object->AddReply(512094, -1, 13320); //@t
				return 0;
			}
			if(var_56_bool == 13314) {
				func_513(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(512088); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512089, 13316, 13315); //@t
				return 0;
			}
			if(var_56_bool == 13316) {
				func_513(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512090); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512091, 13318, 13317); //@t
				return 0;
			}
			if(var_56_bool == 13318) {
				func_513(var_57_cvector, "Neutral");
				var_0_object->SetMessage(512092); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512093, -1, 13319); //@t
				return 0;
			}
			if(var_56_bool == 3542) {
				func_513(var_57_cvector, "Rage");
				var_0_object->SetMessage(503209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503215, 3543, 3549); //@t
				var_0_object->AddReply(503216, 3543, 3551); //@t
				return 0;
			}
			if(var_56_bool == 3543) {
				func_513(var_57_cvector, "Rage");
				var_0_object->SetMessage(503210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503211, 3545, 3544); //@t
				var_0_object->AddReply(503214, 3545, 3547); //@t
				return 0;
			}
			if(var_56_bool == 3545) {
				func_513(var_57_cvector, "Rage");
				var_0_object->SetMessage(503212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503213, -1, 3546); //@t
				var_0_object->AddReply(503217, 3554, 3553); //@t
				return 0;
			}
			if(var_56_bool == 3554) {
				func_513(var_57_cvector, "Staring");
				var_0_object->SetMessage(503218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503219, -1, 3555); //@t
				var_0_object->AddReply(503220, -1, 3556); //@t
				return 0;
			}
			var_3_string = true;
			bool var_192_bool;
			func_6611(var_192_bool);
			if(var_192_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x218";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_57_cvector == 26327) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_6786();
				object var_100_object = var_1_object;
				func_6795(var_0_object);
			}
			if(var_57_cvector == 26345) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_6786();
				object var_107_object = var_1_object;
				func_6795(var_0_object);
			}
			if(var_57_cvector == 26346) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_6786();
				object var_113_object = var_1_object;
				func_6795(var_0_object);
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_6619();
			}
			if(var_57_cvector == 26333) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_6786();
				object var_123_object = var_1_object;
				func_6795(var_0_object);
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_6619();
			}
			if(var_57_cvector == 26337) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_6786();
				object var_131_object = var_1_object;
				func_6795(var_0_object);
			}
			if(var_57_cvector == 23003) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_6638();
			}
			if(var_57_cvector == 6183) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_6613();
			}
			if(var_57_cvector == 6184) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_6613();
			}
			if(var_57_cvector == 8934) {
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_6800();
			}
			if(var_57_cvector == 23019) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_6800();
			}
			if(var_56_bool == 6919) {
				bool var_161_bool;
				func_6872(var_1_object);
				if(!var_161_bool) { //@nz
					func_1028(var_57_cvector, "Staring");
					var_0_object->SetMessage(506253); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(506254, 6921, 6920); //@t
					var_0_object->AddReply(506259, 6926, 6925); //@t
					return 0;
				}
				bool var_194_bool;
				func_6848(var_1_object);
				if(var_194_bool != 0) {
					object var_200_object; object var_201_object;
					var_200_object = var_1_object;
					var_201_object = var_0_object;
					func_6632();
					object var_204_object; object var_205_object;
					var_204_object = var_1_object;
					var_205_object = var_0_object;
					func_6625();
					func_1028(var_57_cvector, "Mysterious");
					var_0_object->SetMessage(524928); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524944, 26279, 26278); //@t
					var_0_object->AddReply(524952, 26279, 26286); //@t
					return 0;
				}
				func_1028(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(508097); //@t
				var_0_object->ClearReplies(); //@t
				bool var_222_bool = false;
				bool var_223_bool;
				func_6824(var_1_object);
				if(var_223_bool != 0) {
					bool var_229_bool;
					func_6860(var_1_object);
					if(var_229_bool != 0)
						var_222_bool = true;
				}
				if(var_222_bool != 0)
					var_0_object->AddReply(521832, 23004, 23003); //@t
				bool var_238_bool;
				func_6836(var_1_object);
				if(var_238_bool != 0)
					var_0_object->AddReply(505605, 6180, 6179); //@t
				bool var_247_bool = false;
				bool var_248_bool;
				func_7100(var_1_object);
				if(var_248_bool != 0) {
					bool var_254_bool;
					func_7124(var_1_object);
					if(var_254_bool != 0)
						var_247_bool = true;
				}
				if(var_247_bool != 0)
					var_0_object->AddReply(508111, 23011, 8934); //@t
				var_0_object->AddReply(505611, -1, 6185); //@t
				return 0;
			}
			if(var_56_bool == 23011) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(521840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521841, 8948, 23012); //@t
				return 0;
			}
			if(var_56_bool == 8948) {
				object var_275_object; object var_276_object;
				var_275_object = var_1_object;
				var_276_object = var_0_object;
				func_6756();
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(508125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521842, 23014, 23013); //@t
				var_0_object->AddReply(521846, 23016, 23017); //@t
				return 0;
			}
			if(var_56_bool == 23014) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(521843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521844, 23016, 23015); //@t
				return 0;
			}
			if(var_56_bool == 23016) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(521845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521847, -1, 23019); //@t
				return 0;
			}
			if(var_56_bool == 6180) {
				func_1028(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(505606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505607, 6182, 6181); //@t
				var_0_object->AddReply(524933, 6182, 26264); //@t
				return 0;
			}
			if(var_56_bool == 6182) {
				func_1028(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(505608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505609, -1, 6183); //@t
				var_0_object->AddReply(505610, -1, 6184); //@t
				return 0;
			}
			if(var_56_bool == 23004) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(521833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505529, 6187, 6093); //@t
				var_0_object->AddReply(521834, -1, 23005); //@t
				return 0;
			}
			if(var_56_bool == 6187) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(505612); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524934, 26267, 26266); //@t
				return 0;
			}
			if(var_56_bool == 26267) {
				func_1028(var_57_cvector, "Rage");
				var_0_object->SetMessage(524935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524936, 26269, 26268); //@t
				var_0_object->AddReply(524938, 26269, 26270); //@t
				return 0;
			}
			if(var_56_bool == 26269) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(524937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524939, 26273, 26272); //@t
				return 0;
			}
			if(var_56_bool == 26273) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(524940); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505528, 6901, 6092); //@t
				var_0_object->AddReply(505613, 26274, 6188); //@t
				return 0;
			}
			if(var_56_bool == 26274) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(524941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524942, 6901, 26275); //@t
				var_0_object->AddReply(524943, -1, 26276); //@t
				return 0;
			}
			if(var_56_bool == 6901) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(506238); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506239, -1, 6902); //@t
				var_0_object->AddReply(506240, -1, 6903); //@t
				var_0_object->AddReply(506241, -1, 6904); //@t
				return 0;
			}
			if(var_56_bool == 26279) {
				func_1028(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(524945); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524946, 26281, 26280); //@t
				var_0_object->AddReply(524953, 26281, 26288); //@t
				return 0;
			}
			if(var_56_bool == 26281) {
				func_1028(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(524947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524948, 26283, 26282); //@t
				var_0_object->AddReply(524954, 26291, 26290); //@t
				return 0;
			}
			if(var_56_bool == 26291) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(524955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524956, 26294, 26292); //@t
				var_0_object->AddReply(524957, 26301, 26293); //@t
				return 0;
			}
			if(var_56_bool == 26301) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(524965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524966, 26309, 26302); //@t
				var_0_object->AddReply(524968, 26298, 26307); //@t
				var_0_object->AddReply(533662, 26283, 35192); //@t
				return 0;
			}
			if(var_56_bool == 26309) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(524969); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524970, 26283, 26310); //@t
				var_0_object->AddReply(524972, 26314, 26313); //@t
				var_0_object->AddReply(524971, -1, 26312); //@t
				return 0;
			}
			if(var_56_bool == 26314) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(524973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524974, 26283, 26315); //@t
				var_0_object->AddReply(524975, 26283, 26316); //@t
				return 0;
			}
			if(var_56_bool == 26294) {
				func_1028(var_57_cvector, "Rage");
				var_0_object->SetMessage(524958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524959, 26296, 26295); //@t
				var_0_object->AddReply(524967, 26298, 26303); //@t
				return 0;
			}
			if(var_56_bool == 26296) {
				func_1028(var_57_cvector, "Rage");
				var_0_object->SetMessage(524960); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524961, 26298, 26297); //@t
				return 0;
			}
			if(var_56_bool == 26298) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(524962); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524963, 26283, 26299); //@t
				var_0_object->AddReply(524964, 26283, 26300); //@t
				return 0;
			}
			if(var_56_bool == 26283) {
				func_1028(var_57_cvector, "Rage");
				var_0_object->SetMessage(524949); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524976, 26322, 26319); //@t
				var_0_object->AddReply(533663, 26329, 35194); //@t
				return 0;
			}
			if(var_56_bool == 26322) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(524979); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524981, 26326, 26325); //@t
				var_0_object->AddReply(524992, 26339, 26338); //@t
				return 0;
			}
			if(var_56_bool == 26339) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(524993); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524994, 26326, 26340); //@t
				return 0;
			}
			if(var_56_bool == 26326) {
				func_1028(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(524982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524984, 26329, 26328); //@t
				var_0_object->AddReply(524990, 26329, 26335); //@t
				return 0;
			}
			if(var_56_bool == 26329) {
				func_1028(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(524985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524987, 26332, 26331); //@t
				var_0_object->AddReply(524986, 26332, 26330); //@t
				return 0;
			}
			if(var_56_bool == 26332) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(524988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524983, -1, 26327); //@t
				var_0_object->AddReply(524996, 26344, 26343); //@t
				var_0_object->AddReply(524989, -1, 26333); //@t
				var_0_object->AddReply(524991, -1, 26337); //@t
				return 0;
			}
			if(var_56_bool == 26344) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(524997); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524998, -1, 26345); //@t
				var_0_object->AddReply(524999, -1, 26346); //@t
				return 0;
			}
			if(var_56_bool == 6926) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(506260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506261, 6924, 6927); //@t
				return 0;
			}
			if(var_56_bool == 6921) {
				func_1028(var_57_cvector, "Staring");
				var_0_object->SetMessage(506255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506256, -1, 6922); //@t
				var_0_object->AddReply(506257, 6924, 6923); //@t
				return 0;
			}
			if(var_56_bool == 6924) {
				func_1028(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506262, -1, 6929); //@t
				return 0;
			}
			var_3_string = true;
			bool var_578_bool;
			func_6611(var_578_bool);
			if(var_578_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x41b";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_57_cvector == 7594) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_6709();
			}
			if(var_57_cvector == 8183) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_6721();
			}
			if(var_57_cvector == 8187) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_6699();
			}
			if(var_57_cvector == 8171) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_6715();
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_6744();
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_6654();
				object var_143_object = var_1_object;
				func_6644(var_0_object);
			}
			if(var_57_cvector == 8170) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_6715();
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_object;
				func_6654();
				object var_170_object = var_1_object;
				func_6644(var_0_object);
			}
			if(var_56_bool == 7593) {
				func_2204(var_57_cvector, "Staring");
				var_0_object->SetMessage(506887); //@t
				var_0_object->ClearReplies(); //@t
				bool var_192_bool = false;
				bool var_193_bool;
				func_6980(var_1_object);
				if(var_193_bool != 0) {
					bool var_201_bool;
					func_7004(var_1_object);
					if(var_201_bool != 0)
						var_192_bool = true;
				}
				if(var_192_bool != 0)
					var_0_object->AddReply(506888, 7595, 7594); //@t
				bool var_210_bool = false;
				bool var_211_bool;
				func_6992(var_1_object);
				if(var_211_bool != 0) {
					bool var_217_bool;
					func_7016(var_1_object);
					if(var_217_bool != 0)
						var_210_bool = true;
				}
				if(var_210_bool != 0)
					var_0_object->AddReply(506918, 7625, 7624); //@t
				var_0_object->AddReply(507400, -1, 8166); //@t
				return 0;
			}
			if(var_56_bool == 7625) {
				func_2204(var_57_cvector, "Staring");
				var_0_object->SetMessage(506919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507401, 8168, 8167); //@t
				return 0;
			}
			if(var_56_bool == 8168) {
				func_2204(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507402); //@t
				var_0_object->ClearReplies(); //@t
				bool var_240_bool;
				func_7112(var_1_object);
				if(var_240_bool != 0)
					var_0_object->AddReply(506920, 7628, 7626); //@t
				var_0_object->AddReply(506921, 8169, 7627); //@t
				return 0;
			}
			if(var_56_bool == 8169) {
				func_2204(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507403); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507404, -1, 8170); //@t
				return 0;
			}
			if(var_56_bool == 7628) {
				func_2204(var_57_cvector, "Neutral");
				var_0_object->SetMessage(506922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507405, -1, 8171); //@t
				return 0;
			}
			if(var_56_bool == 7595) {
				func_2204(var_57_cvector, "Staring");
				var_0_object->SetMessage(506889); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507406, 35516, 8172); //@t
				var_0_object->AddReply(506890, 7597, 7596); //@t
				return 0;
			}
			if(var_56_bool == 7597) {
				func_2204(var_57_cvector, "Rage");
				var_0_object->SetMessage(506891); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507407, 8184, 8173); //@t
				var_0_object->AddReply(507417, 8184, 8185); //@t
				var_0_object->AddReply(533958, 8182, 35524); //@t
				return 0;
			}
			if(var_56_bool == 8184) {
				func_2204(var_57_cvector, "Rage");
				var_0_object->SetMessage(507416); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507418, -1, 8187); //@t
				return 0;
			}
			if(var_56_bool == 35516) {
				func_2204(var_57_cvector, "Staring");
				var_0_object->SetMessage(533952); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533953, 8174, 35517); //@t
				var_0_object->AddReply(533954, 35519, 35518); //@t
				return 0;
			}
			if(var_56_bool == 35519) {
				func_2204(var_57_cvector, "Neutral");
				var_0_object->SetMessage(533955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533956, 8182, 35520); //@t
				var_0_object->AddReply(534427, 8182, 36054); //@t
				return 0;
			}
			if(var_56_bool == 8174) {
				func_2204(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507408); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507409, 8178, 8175); //@t
				var_0_object->AddReply(507410, 8178, 8176); //@t
				var_0_object->AddReply(507411, 8178, 8177); //@t
				return 0;
			}
			if(var_56_bool == 8178) {
				func_2204(var_57_cvector, "Neutral");
				var_0_object->SetMessage(507412); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507413, 8182, 8181); //@t
				var_0_object->AddReply(534430, 36051, 36059); //@t
				return 0;
			}
			if(var_56_bool == 8182) {
				func_2204(var_57_cvector, "Staring");
				var_0_object->SetMessage(507414); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534424, 36051, 36050); //@t
				var_0_object->AddReply(534426, 36051, 36052); //@t
				return 0;
			}
			if(var_56_bool == 36051) {
				func_2204(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(534425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507415, -1, 8183); //@t
				return 0;
			}
			var_3_string = true;
			bool var_356_bool;
			func_6611(var_356_bool);
			if(var_356_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8b3";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_57_cvector == 11467) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_6675();
			}
			if(var_57_cvector == 11241) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_6681();
			}
			if(var_56_bool == 11240) {
				func_2827(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(510194); //@t
				var_0_object->ClearReplies(); //@t
				bool var_92_bool = false;
				bool var_93_bool;
				func_7028(var_1_object);
				if(var_93_bool != 0) {
					bool var_101_bool;
					func_6932(var_1_object);
					if(var_101_bool != 0)
						var_92_bool = true;
				}
				if(var_92_bool != 0)
					var_0_object->AddReply(510401, 11468, 11467); //@t
				bool var_110_bool = false;
				bool var_111_bool;
				func_6920(var_1_object);
				if(var_111_bool != 0) {
					bool var_117_bool;
					func_6944(var_1_object);
					if(var_117_bool != 0)
						var_110_bool = true;
				}
				if(var_110_bool != 0)
					var_0_object->AddReply(510195, 11242, 11241); //@t
				var_0_object->AddReply(534399, -1, 36018); //@t
				return 0;
			}
			if(var_56_bool == 11242) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510197, 11244, 11243); //@t
				return 0;
			}
			if(var_56_bool == 11244) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510198); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510199, 36021, 11245); //@t
				var_0_object->AddReply(534401, 11246, 36020); //@t
				return 0;
			}
			if(var_56_bool == 11246) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510200); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510400, 10992, 11466); //@t
				return 0;
			}
			if(var_56_bool == 10992) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(509974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509975, 36019, 10993); //@t
				var_0_object->AddReply(509976, -1, 10994); //@t
				return 0;
			}
			if(var_56_bool == 36019) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(534400); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541611, -1, 43782); //@t
				return 0;
			}
			if(var_56_bool == 36021) {
				func_2827(var_57_cvector, "Angry");
				var_0_object->SetMessage(534402); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534403, -1, 36022); //@t
				return 0;
			}
			if(var_56_bool == 11468) {
				func_2827(var_57_cvector, "Staring");
				var_0_object->SetMessage(510402); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510403, 11470, 11469); //@t
				var_0_object->AddReply(510418, 11472, 11485); //@t
				return 0;
			}
			if(var_56_bool == 11470) {
				func_2827(var_57_cvector, "Staring");
				var_0_object->SetMessage(510404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534404, 36024, 36023); //@t
				var_0_object->AddReply(510405, 11472, 11471); //@t
				return 0;
			}
			if(var_56_bool == 11472) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510406); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510407, 11474, 11473); //@t
				var_0_object->AddReply(510409, 11476, 11475); //@t
				return 0;
			}
			if(var_56_bool == 11476) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510410); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510412, 11474, 11478); //@t
				return 0;
			}
			if(var_56_bool == 11474) {
				func_2827(var_57_cvector, "Rage");
				var_0_object->SetMessage(510408); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510411, 11480, 11477); //@t
				var_0_object->AddReply(510414, 11482, 11481); //@t
				return 0;
			}
			if(var_56_bool == 11482) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510417, -1, 11484); //@t
				return 0;
			}
			if(var_56_bool == 11480) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(510413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510416, -1, 11483); //@t
				var_0_object->AddReply(534421, -1, 36048); //@t
				return 0;
			}
			if(var_56_bool == 36024) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(534405); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534406, 36029, 36025); //@t
				var_0_object->AddReply(534407, 36027, 36026); //@t
				return 0;
			}
			if(var_56_bool == 36027) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(534408); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534409, 11474, 36028); //@t
				return 0;
			}
			if(var_56_bool == 36029) {
				func_2827(var_57_cvector, "Neutral");
				var_0_object->SetMessage(534410); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534411, 11474, 36030); //@t
				var_0_object->AddReply(534412, 11474, 36031); //@t
				return 0;
			}
			var_3_string = true;
			bool var_268_bool;
			func_6611(var_268_bool);
			if(var_268_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb22";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_57_cvector == 38005) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_6687();
			}
			if(var_57_cvector == 38008) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_6693();
			}
			if(var_56_bool == 36875) {
				func_3437(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(535203); //@t
				var_0_object->ClearReplies(); //@t
				bool var_92_bool;
				func_6956(var_1_object);
				if(var_92_bool != 0)
					var_0_object->AddReply(536230, 38006, 38005); //@t
				bool var_103_bool = false;
				bool var_104_bool;
				func_6968(var_1_object);
				if(var_104_bool != 0) {
					bool var_110_bool;
					func_7040(var_1_object);
					if(!var_110_bool) //@nz
						var_103_bool = true;
				}
				if(var_103_bool != 0)
					var_0_object->AddReply(536233, 12417, 38008); //@t
				var_0_object->AddReply(536232, -1, 38007); //@t
				return 0;
			}
			if(var_56_bool == 12417) {
				func_3437(var_57_cvector, "Rage");
				var_0_object->SetMessage(511227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511228, 12419, 12418); //@t
				var_0_object->AddReply(536229, 36888, 38004); //@t
				return 0;
			}
			if(var_56_bool == 36888) {
				func_3437(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535215, 36890, 36889); //@t
				var_0_object->AddReply(535223, 36898, 36897); //@t
				return 0;
			}
			if(var_56_bool == 36898) {
				func_3437(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(535224); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535225, 36900, 36899); //@t
				var_0_object->AddReply(535228, 36890, 36902); //@t
				return 0;
			}
			if(var_56_bool == 36900) {
				func_3437(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(535226); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535227, -1, 36901); //@t
				return 0;
			}
			if(var_56_bool == 36890) {
				func_3437(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535217, 36892, 36891); //@t
				var_0_object->AddReply(535220, 36895, 36894); //@t
				return 0;
			}
			if(var_56_bool == 36895) {
				func_3437(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(535221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535222, -1, 36896); //@t
				return 0;
			}
			if(var_56_bool == 36892) {
				func_3437(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535219, -1, 36893); //@t
				return 0;
			}
			if(var_56_bool == 12419) {
				func_3437(var_57_cvector, "Rage");
				var_0_object->SetMessage(511229); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511230, 12421, 12420); //@t
				var_0_object->AddReply(536234, 38010, 38009); //@t
				return 0;
			}
			if(var_56_bool == 38010) {
				func_3437(var_57_cvector, "Neutral");
				var_0_object->SetMessage(536235); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536236, 38012, 38011); //@t
				var_0_object->AddReply(536238, 38012, 38013); //@t
				return 0;
			}
			if(var_56_bool == 38012) {
				func_3437(var_57_cvector, "Neutral");
				var_0_object->SetMessage(536237); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536239, -1, 38015); //@t
				var_0_object->AddReply(536240, -1, 38016); //@t
				return 0;
			}
			if(var_56_bool == 12421) {
				func_3437(var_57_cvector, "Neutral");
				var_0_object->SetMessage(511231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511232, -1, 12422); //@t
				var_0_object->AddReply(536228, -1, 38003); //@t
				return 0;
			}
			if(var_56_bool == 38006) {
				func_3437(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(536231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535204, 36877, 36876); //@t
				var_0_object->AddReply(535213, 36877, 36886); //@t
				return 0;
			}
			if(var_56_bool == 36877) {
				func_3437(var_57_cvector, "Rage");
				var_0_object->SetMessage(535205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535206, 36879, 36878); //@t
				var_0_object->AddReply(535211, 36879, 36883); //@t
				var_0_object->AddReply(535212, -1, 36885); //@t
				return 0;
			}
			if(var_56_bool == 36879) {
				func_3437(var_57_cvector, "Rage");
				var_0_object->SetMessage(535207); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535208, -1, 36880); //@t
				var_0_object->AddReply(535209, -1, 36881); //@t
				var_0_object->AddReply(535210, -1, 36882); //@t
				return 0;
			}
			var_3_string = true;
			bool var_260_bool;
			func_6611(var_260_bool);
			if(var_260_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd84";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_57_cvector == 34757) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_6660();
			}
			if(var_57_cvector == 37459) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_6660();
			}
			if(var_57_cvector == 37458) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_6660();
			}
			if(var_56_bool == 34750) {
				func_4008(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(533236); //@t
				var_0_object->ClearReplies(); //@t
				bool var_117_bool;
				func_6884(var_1_object);
				if(var_117_bool != 0)
					var_0_object->AddReply(533237, 34752, 34751); //@t
				var_0_object->AddReply(533244, -1, 34758); //@t
				var_0_object->AddReply(535757, -1, 37438); //@t
				return 0;
			}
			if(var_56_bool == 34752) {
				func_4008(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(533238); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535764, 37446, 37445); //@t
				var_0_object->AddReply(533239, 37440, 34753); //@t
				return 0;
			}
			if(var_56_bool == 37446) {
				func_4008(var_57_cvector, "Angry");
				var_0_object->SetMessage(535765); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535766, 34754, 37447); //@t
				return 0;
			}
			if(var_56_bool == 34754) {
				func_4008(var_57_cvector, "Rage");
				var_0_object->SetMessage(533240); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533241, 34756, 34755); //@t
				var_0_object->AddReply(535767, 37440, 37448); //@t
				return 0;
			}
			if(var_56_bool == 34756) {
				func_4008(var_57_cvector, "Rage");
				var_0_object->SetMessage(533242); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535758, 37440, 37439); //@t
				return 0;
			}
			if(var_56_bool == 37440) {
				func_4008(var_57_cvector, "Rage");
				var_0_object->SetMessage(535759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535760, 37442, 37441); //@t
				var_0_object->AddReply(535770, 37442, 37453); //@t
				return 0;
			}
			if(var_56_bool == 37442) {
				func_4008(var_57_cvector, "Rage");
				var_0_object->SetMessage(535761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535762, 37444, 37443); //@t
				var_0_object->AddReply(535771, -1, 37455); //@t
				return 0;
			}
			if(var_56_bool == 37444) {
				func_4008(var_57_cvector, "Staring");
				var_0_object->SetMessage(535763); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535772, 37457, 37456); //@t
				var_0_object->AddReply(535774, -1, 37458); //@t
				return 0;
			}
			if(var_56_bool == 37457) {
				func_4008(var_57_cvector, "Staring");
				var_0_object->SetMessage(535773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533243, -1, 34757); //@t
				var_0_object->AddReply(535775, -1, 37459); //@t
				return 0;
			}
			var_3_string = true;
			bool var_208_bool;
			func_6611(var_208_bool);
			if(var_208_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfbf";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_56_bool == 13469) {
				bool var_62_bool;
				func_7088(var_1_object);
				if(var_62_bool != 0) {
					object var_70_object; object var_71_object;
					var_70_object = var_1_object;
					var_71_object = var_0_object;
					func_6774();
					func_4449(var_57_cvector, "Mysterious");
					var_0_object->SetMessage(512310); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512311, 13471, 13470); //@t
					var_0_object->AddReply(512313, 13473, 13472); //@t
					return 0;
				}
				func_4449(var_57_cvector, "Staring");
				var_0_object->SetMessage(513777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513778, -1, 15014); //@t
				var_0_object->AddReply(541597, -1, 43761); //@t
				return 0;
			}
			if(var_56_bool == 13473) {
				func_4449(var_57_cvector, "Staring");
				var_0_object->SetMessage(512314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512315, 13475, 13474); //@t
				return 0;
			}
			if(var_56_bool == 13475) {
				func_4449(var_57_cvector, "Rage");
				var_0_object->SetMessage(512316); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512317, 13477, 13476); //@t
				return 0;
			}
			if(var_56_bool == 13477) {
				func_4449(var_57_cvector, "Rage");
				var_0_object->SetMessage(512318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512319, 13482, 13478); //@t
				return 0;
			}
			if(var_56_bool == 13482) {
				func_4449(var_57_cvector, "Rage");
				var_0_object->SetMessage(512323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512324, 13484, 13483); //@t
				return 0;
			}
			if(var_56_bool == 13484) {
				func_4449(var_57_cvector, "Rage");
				var_0_object->SetMessage(512325); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512326, 13486, 13485); //@t
				return 0;
			}
			if(var_56_bool == 13486) {
				func_4449(var_57_cvector, "Rage");
				var_0_object->SetMessage(512327); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512328, -1, 13487); //@t
				return 0;
			}
			if(var_56_bool == 13471) {
				func_4449(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(512312); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512320, 13480, 13479); //@t
				return 0;
			}
			if(var_56_bool == 13480) {
				func_4449(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(512321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512322, -1, 13481); //@t
				return 0;
			}
			var_3_string = true;
			bool var_162_bool;
			func_6611(var_162_bool);
			if(var_162_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1178";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_57_cvector == 14178) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_6818();
			}
			if(var_57_cvector == 41435) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_6818();
			}
			if(var_57_cvector == 35690) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_6669();
			}
			if(var_56_bool == 14094) {
				bool var_78_bool = false;
				bool var_79_bool = false;
				bool var_80_bool;
				func_7160(var_1_object);
				if(var_80_bool != 0) {
					bool var_88_bool;
					func_7148(var_1_object);
					if(!var_88_bool) //@nz
						var_79_bool = true;
				}
				if(var_79_bool != 0) {
					bool var_95_bool;
					func_7136(var_1_object);
					if(!var_95_bool) //@nz
						var_78_bool = true;
				}
				if(var_78_bool != 0) {
					object var_102_object; object var_103_object;
					var_102_object = var_1_object;
					var_103_object = var_0_object;
					func_6812();
					func_4895(var_57_cvector, "Mysterious");
					var_0_object->SetMessage(512892); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539495, 41421, 41420); //@t
					var_0_object->AddReply(539501, 41427, 41426); //@t
					return 0;
				}
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(512974); //@t
				var_0_object->ClearReplies(); //@t
				bool var_132_bool = false;
				bool var_133_bool;
				func_6896(var_1_object);
				if(var_133_bool != 0) {
					bool var_139_bool;
					func_6908(var_1_object);
					if(var_139_bool != 0)
						var_132_bool = true;
				}
				if(var_132_bool != 0)
					var_0_object->AddReply(534097, 38198, 35690); //@t
				var_0_object->AddReply(536416, -1, 38196); //@t
				var_0_object->AddReply(512975, -1, 14180); //@t
				return 0;
			}
			if(var_56_bool == 38198) {
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(536418); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536419, 38200, 38199); //@t
				var_0_object->AddReply(536427, 36081, 38209); //@t
				return 0;
			}
			if(var_56_bool == 38200) {
				func_4895(var_57_cvector, "Staring");
				var_0_object->SetMessage(536420); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536421, 38202, 38201); //@t
				return 0;
			}
			if(var_56_bool == 38202) {
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(536422); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536423, 35691, 38203); //@t
				var_0_object->AddReply(536424, 35691, 38204); //@t
				return 0;
			}
			if(var_56_bool == 35691) {
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(534098); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534447, 36081, 36080); //@t
				var_0_object->AddReply(536417, 38216, 38197); //@t
				return 0;
			}
			if(var_56_bool == 38216) {
				func_4895(var_57_cvector, "Neutral");
				var_0_object->SetMessage(536431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536432, 38212, 38217); //@t
				return 0;
			}
			if(var_56_bool == 36081) {
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(534448); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534099, 38212, 35692); //@t
				return 0;
			}
			if(var_56_bool == 38212) {
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(536429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536428, 38206, 38211); //@t
				var_0_object->AddReply(536430, 38206, 38214); //@t
				return 0;
			}
			if(var_56_bool == 38206) {
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(536425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536426, -1, 38207); //@t
				return 0;
			}
			if(var_56_bool == 41427) {
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(539502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539503, 41421, 41428); //@t
				return 0;
			}
			if(var_56_bool == 41421) {
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(539496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539497, 41423, 41422); //@t
				return 0;
			}
			if(var_56_bool == 41423) {
				func_4895(var_57_cvector, "Rage");
				var_0_object->SetMessage(539498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539499, 41425, 41424); //@t
				var_0_object->AddReply(539504, 41431, 41430); //@t
				return 0;
			}
			if(var_56_bool == 41431) {
				func_4895(var_57_cvector, "Staring");
				var_0_object->SetMessage(539505); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539506, 14175, 41432); //@t
				var_0_object->AddReply(539507, 14175, 41433); //@t
				return 0;
			}
			if(var_56_bool == 41425) {
				func_4895(var_57_cvector, "Angry");
				var_0_object->SetMessage(539500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512893, 14175, 14095); //@t
				var_0_object->AddReply(512969, 14175, 14174); //@t
				return 0;
			}
			if(var_56_bool == 14175) {
				func_4895(var_57_cvector, "Angry");
				var_0_object->SetMessage(512970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512971, 14177, 14176); //@t
				return 0;
			}
			if(var_56_bool == 14177) {
				func_4895(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(512972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512973, -1, 14178); //@t
				var_0_object->AddReply(539508, -1, 41435); //@t
				return 0;
			}
			var_3_string = true;
			bool var_283_bool;
			func_6611(var_283_bool);
			if(var_283_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1336";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_56_bool == 37357) {
				func_5501(var_57_cvector, "Staring");
				var_0_object->SetMessage(535671); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535672, 42114, 37358); //@t
				var_0_object->AddReply(540141, -1, 42113); //@t
				return 0;
			}
			if(var_56_bool == 42114) {
				func_5501(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(540142); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540143, 42117, 42115); //@t
				var_0_object->AddReply(540144, 42117, 42116); //@t
				return 0;
			}
			if(var_56_bool == 42117) {
				func_5501(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(540145); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540146, 42120, 42119); //@t
				var_0_object->AddReply(540150, 42128, 42123); //@t
				return 0;
			}
			if(var_56_bool == 42120) {
				func_5501(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540148, 42122, 42121); //@t
				return 0;
			}
			if(var_56_bool == 42122) {
				func_5501(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540149); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540151, 42126, 42124); //@t
				var_0_object->AddReply(540154, 42128, 42127); //@t
				return 0;
			}
			if(var_56_bool == 42128) {
				func_5501(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540155); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540156, 42132, 42130); //@t
				return 0;
			}
			if(var_56_bool == 42126) {
				func_5501(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540153); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540157, 42132, 42131); //@t
				return 0;
			}
			if(var_56_bool == 42132) {
				func_5501(var_57_cvector, "Staring");
				var_0_object->SetMessage(540158); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540159, -1, 42133); //@t
				var_0_object->AddReply(540160, -1, 42134); //@t
				var_0_object->AddReply(540161, -1, 42136); //@t
				return 0;
			}
			var_3_string = true;
			bool var_150_bool;
			func_6611(var_150_bool);
			if(var_150_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1594";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, int var_55_int, int var_56_int, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_6488();
			if(var_56_int == 42557) {
				func_5855(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_86_bool;
			func_6611(var_86_bool);
			if(var_86_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x16f6";
	
	}

}


maintask task_22
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		var_56_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_5926(var_55_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, int var_56_int)
	{
		if(var_56_int == 10) {
			func_5991();
			bool var_60_bool = false;
			bool var_61_bool;
			func_6212(var_61_bool);
			if(var_61_bool != 0) {
				bool var_64_bool;
				func_5960(var_64_bool);
				if(var_64_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool != 0) {
				bool var_81_bool;
				func_5940(var_81_bool);
				if(var_81_bool != 0) {
					bool var_100_bool; object var_101_object;
					object var_102_object;
					func_6495(var_102_object);
					var_102_object = var_101_object;
					func_6362(var_100_bool, var_101_object);
				}
			} else {
				func_5955(var_56_int);
				func_5982();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		func_6173();
		func_5991();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		@StopGroup0();
		func_5991();
		func_6442("Neutral");
		func_5982();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, bool var_56_bool)
	{
		if(var_56_bool != 0)
			func_5982();
		else
			func_6442("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, object var_56_object)
	{
		bool var_58_bool;
		@IsOverrideActive(var_58_bool);
		if(!var_58_bool) { //@nz
			disable OnUse;
			func_6173();
			bool var_60_bool; object var_61_object;
			var_56_object = var_61_object;
			func_6203(var_60_bool, var_61_object);
			enable OnUse;
			object var_74_object;
			var_56_object = var_74_object;
			func_7360(var_58_bool, var_74_object);
			func_6442("Neutral");
			func_5991();
			func_5982();
		}
	}

}


void func_0(object var_0_object, int var_77_int, object var_78_object)
{
	var_0_object = var_78_object;
	bool var_88_bool; object var_89_object;
	var_78_object = var_89_object;
	func_6217(var_88_bool, var_89_object, 70.0);
	if(!var_88_bool) { //@nz
		var_77_int = -2;
		return 8;
	}
	object var_84_object;
	@CreateDialog(var_84_object);
	int var_136_int;
	func_6605(var_136_int);
	var_84_object->SetNPCName(var_136_int);
	int var_137_int;
	func_6603(var_137_int);
	var_84_object->SetNPCDescription(var_137_int);
	string var_138_string;
	func_6607(var_138_string);
	var_84_object->SetPhoto(var_138_string);
	string var_139_string;
	func_6609(var_139_string);
	var_84_object->SetPhoto2(var_139_string);
	int var_140_int;
	func_7269(var_140_int);
	var_84_object->SetPlayerName(var_140_int);
	bool var_85_bool;
	@IsOverrideActive(var_85_bool);
	if(var_85_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	@DoDialog(var_84_object);
	bool var_149_bool; object var_150_object;
	object var_151_object;
	func_6495(var_151_object);
	var_151_object = var_150_object;
	func_6304(var_149_bool, var_150_object);
	object var_244_object; object var_245_object;
	var_78_object = var_244_object;
	var_84_object = var_245_object;
	TaskCall(1);
	func_81(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object);
	TaskReturn();
	bool var_87_bool;
	var_84_object->IsDialogEnd(var_87_bool);
	
	for(;;) {
		var_303_bool = !var_87_bool; //@nz
		if(var_303_bool == 0) goto Label_70;
		@sync();
		var_84_object->IsDialogEnd(var_87_bool);
	}
	
Label_70:
	object var_304_object;
	var_78_object = var_304_object;
	func_6286();
	@StopDialog(var_84_object);
	var_84_object->GetReturnValue(-1);
	int var_86_int = var_77_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_513(object var_2_object, string var_766_string)
{
	bool var_767_bool;
	func_6611(var_767_bool);
	if(!var_767_bool) //@nz
		return 0;
	if(var_766_string == var_2_object)
		return 0;
	string var_770_string; bool var_771_bool;
	var_766_string = var_770_string;
	if(var_766_string == "")
		var_771_bool = false;
	else
		var_771_bool = true;
	func_6458(var_770_string, var_771_bool);
	var_2_object = var_766_string;
	
}


// @pe
void func_1028(object var_2_object, string var_357_string)
{
	bool var_358_bool;
	func_6611(var_358_bool);
	if(!var_358_bool) //@nz
		return 0;
	if(var_357_string == var_2_object)
		return 0;
	string var_361_string; bool var_362_bool;
	var_357_string = var_361_string;
	if(var_357_string == "")
		var_362_bool = false;
	else
		var_362_bool = true;
	func_6458(var_361_string, var_362_bool);
	var_2_object = var_357_string;
	
}


// @pe
void func_6660(void)
{
	@SetVariable("d7q03", 2);
	func_7198();
}


void func_7172(void)
{
	object var_116_object;
	@CreateDiaryEntry(var_116_object, 781, 2, 542086);
	bool var_120_bool; object var_121_object;
	var_116_object = var_121_object;
	func_7224(var_120_bool, var_121_object, 11);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6669(void)
{
	@SetVariable("ood10Maria2", 1);
}


void func_7185(void)
{
	object var_89_object;
	@CreateDiaryEntry(var_89_object, 134, 2, 515285);
	bool var_93_bool; object var_94_object;
	var_89_object = var_94_object;
	func_7224(var_93_bool, var_94_object, 11);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6675(void)
{
	@SetVariable("ood3Maria1", 1);
}


// @pe
void func_6681(void)
{
	@SetVariable("ood3Maria2", 1);
}


void func_6171(bool var_95_bool)
{
	var_95_bool = true;
}


void func_6173(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_7198(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 643, 2, 533277);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_7224(var_71_bool, var_72_object, 641);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6687(void)
{
	@SetVariable("ood4Maria1", 1);
}


void func_6178(float var_71_float, object var_72_object)
{
	cvector var_76_cvector;
	@GetPosition(var_76_cvector);
	cvector var_77_cvector;
	var_72_object->GetPosition(var_77_cvector);
	var_71_float = (var_77_cvector - var_76_cvector) | (var_77_cvector - var_76_cvector);
}


// @pe
void func_6693(void)
{
	@SetVariable("ood4Maria2", 1);
}


void func_6186(object var_150_object, string var_151_string, int var_152_int)
{
	int var_154_int;
	var_150_object->GetProperty(var_151_string, var_154_int);
	var_150_object->SetProperty(var_151_string, (var_154_int + var_152_int));
}


// @pe
void func_6699(void)
{
	func_7172();
	bool var_123_bool;
	func_6547(var_123_bool, "quest_d2_02", "fail");
}


void func_7211(object var_80_object)
{
	object var_82_object;
	@GetDiaryRoot(var_82_object);
	if(!var_82_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_80_object = false;
	}
	var_82_object = var_80_object;
}
EMIT "Stack[-1] = 0";


void func_6193(bool var_64_bool, cvector var_65_cvector)
{
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	cvector var_70_cvector = var_65_cvector - var_69_cvector;
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_70_cvector, 2);
	bool var_71_bool;
	@Rotate(var_72_float, var_73_float, var_71_bool);
	var_71_bool = var_64_bool;
}


// @pe
void func_6709(void)
{
	@SetVariable("ood2Maria1", 1);
}


void func_7224(bool var_71_bool, object var_72_object, int var_73_int)
{
	object var_80_object;
	func_7211(var_80_object);
	object var_77_object;
	var_80_object = var_77_object;
	object var_78_object;
	var_77_object->Find(var_73_int, var_78_object);
	if(!var_78_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_73_int);
		var_71_bool = false;
	}
	var_78_object->AddChild(var_72_object);
	@SendWorldWndMessage(7);
	int var_79_int;
	var_72_object->GetCategory(var_79_int);
	@SetDiarySection(var_79_int);
	var_71_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_6715(void)
{
	@SetVariable("ood2Maria2", 1);
}


void func_6203(bool var_60_bool, object var_61_object)
{
	cvector var_63_cvector;
	var_61_object->GetPosition(var_63_cvector);
	bool var_64_bool; cvector var_65_cvector;
	var_63_cvector = var_65_cvector;
	func_6193(var_64_bool, var_65_cvector);
	var_64_bool = var_60_bool;
}


// @pe
void func_2113(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_483_object, object var_484_object)
{
	var_0_object = var_484_object;
	var_1_object = var_483_object;
	var_3_string = false;
	if(1 != 0) {
		func_2204(var_484_object, "Staring");
		var_0_object->SetMessage(506887); //@t
		var_0_object->ClearReplies(); //@t
		bool var_499_bool = false;
		bool var_500_bool;
		func_6980(var_1_object);
		if(var_500_bool != 0) {
			bool var_506_bool;
			func_7004(var_1_object);
			if(var_506_bool != 0)
				var_499_bool = true;
		}
		if(var_499_bool != 0)
			var_0_object->AddReply(506888, 7595, 7594); //@t
		bool var_515_bool = false;
		bool var_516_bool;
		func_6992(var_1_object);
		if(var_516_bool != 0) {
			bool var_522_bool;
			func_7016(var_1_object);
			if(var_522_bool != 0)
				var_515_bool = true;
		}
		if(var_515_bool != 0)
			var_0_object->AddReply(506918, 7625, 7624); //@t
		var_0_object->AddReply(507400, -1, 8166); //@t
		goto Label_2174;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x845";
	}
Label_2174:
	bool var_534_bool;
	func_6611(var_534_bool);
	if(var_534_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6442(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2203;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2203:
		return 0;

	}
	
}


void func_6721(void)
{
	@SetVariable("d2q02", 4);
	object var_74_object;
	func_7252(var_74_object);
	object var_71_object;
	var_74_object = var_71_object;
	float var_85_float;
	func_6559(var_85_float);
	var_71_object->AddMark("d2q02MariaGotoPetr", "pt_map_petr", 0, 515275, var_85_float);
	func_7185();
}
EMIT "Stack[-1] = 0";


void func_6212(bool var_57_bool)
{
	bool var_59_bool;
	@IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
}


void func_6217(bool var_88_bool, object var_89_object, float var_90_float)
{
	cvector var_101_cvector; bool var_108_bool;
	var_89_object->GetPosition(var_101_cvector);
	float var_100_float;
	var_89_object->GetEyesHeight(var_100_float);
	var_109_float = GetByIndex(var_101_cvector, 1);
	SetByIndex(var_101_cvector, 1) = (var_109_float + var_100_float);
	cvector var_102_cvector;
	@GetPosition(var_102_cvector);
	@GetEyesHeight(var_100_float);
	var_110_float = GetByIndex(var_102_cvector, 1);
	SetByIndex(var_102_cvector, 1) = (var_110_float + var_100_float);
	cvector var_103_cvector = var_101_cvector - var_102_cvector;
	var_111_float = GetByIndex(var_103_cvector, 1);
	SetByIndex(var_103_cvector, 1) = (float)0;
	var_113_float = sqrt(var_103_cvector | var_103_cvector);
	var_103_cvector /= var_113_float;
	cvector var_104_cvector = -var_103_cvector;
	cvector var_115_cvector;
	func_6501(var_115_cvector, (var_104_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_105_cvector = ((var_103_cvector * var_90_float) + (var_115_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_107_bool;
	@IsOverrideActive(var_107_bool);
	if(var_107_bool != 0)
		var_88_bool = false;
	@StopWorld();
	@CameraTransit((var_102_cvector + var_105_cvector), var_104_cvector, true);
	var_129_float = GetByIndex(var_105_cvector, 0);
	var_130_float = GetByIndex(var_105_cvector, 2);
	@Rotate(var_129_float, var_130_float);
	bool var_131_bool;
	func_6611(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		@HasAnimationTrack(var_108_bool, "head");
		if(var_108_bool == 0) goto Label_6280;
		@LookAsyncCamera("head");
	}
Label_6280:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_88_bool = true;
	
}


void func_4687(object var_0_object, int var_952_int, object var_953_object)
{
	var_0_object = var_953_object;
	bool var_963_bool; object var_964_object;
	var_953_object = var_964_object;
	func_6217(var_963_bool, var_964_object, 70.0);
	if(!var_963_bool) { //@nz
		var_952_int = -2;
		return 8;
	}
	object var_959_object;
	@CreateDialog(var_959_object);
	int var_967_int;
	func_6605(var_967_int);
	var_959_object->SetNPCName(var_967_int);
	int var_968_int;
	func_6603(var_968_int);
	var_959_object->SetNPCDescription(var_968_int);
	string var_969_string;
	func_6607(var_969_string);
	var_959_object->SetPhoto(var_969_string);
	string var_970_string;
	func_6609(var_970_string);
	var_959_object->SetPhoto2(var_970_string);
	int var_971_int;
	func_7269(var_971_int);
	var_959_object->SetPlayerName(var_971_int);
	bool var_960_bool;
	@IsOverrideActive(var_960_bool);
	if(var_960_bool != 0) {
		var_952_int = -2;
		return 8;
	}
	@DoDialog(var_959_object);
	bool var_973_bool; object var_974_object;
	object var_975_object;
	func_6495(var_975_object);
	var_975_object = var_974_object;
	func_6304(var_973_bool, var_974_object);
	object var_976_object; object var_977_object;
	var_953_object = var_976_object;
	var_959_object = var_977_object;
	TaskCall(17);
	func_4768(var_978_object, var_979_object, var_980_string, var_981_bool, var_976_object, var_977_object);
	TaskReturn();
	bool var_962_bool;
	var_959_object->IsDialogEnd(var_962_bool);
	
	for(;;) {
		var_1056_bool = !var_962_bool; //@nz
		if(var_1056_bool == 0) goto Label_4757;
		@sync();
		var_959_object->IsDialogEnd(var_962_bool);
	}
	
Label_4757:
	object var_1057_object;
	var_953_object = var_1057_object;
	func_6286();
	@StopDialog(var_959_object);
	var_959_object->GetReturnValue(-1);
	int var_961_int = var_952_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_244_object, object var_245_object)
{
	var_0_object = var_245_object;
	var_3_string = false;
	if(1 != 0) {
		object var_251_object; object var_252_object;
		var_251_object = var_244_object;
		var_252_object = var_0_object;
		func_6780();
		func_154(var_245_object, "Staring");
		var_0_object->SetMessage(500072); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(500073, 87, 85); //@t
		var_0_object->AddReply(500074, 88, 86); //@t
		var_0_object->AddReply(500086, 87, 98); //@t
		var_0_object->AddReply(500087, 87, 99); //@t
		goto Label_124;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_124:
	bool var_285_bool;
	func_6611(var_285_bool);
	if(var_285_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6442(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_153;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_153:
		return 0;

	}
	
}


void func_7252(object var_74_object)
{
	object var_77_object; object var_78_object;
	@GetMainOutdoorScene(var_77_object);
	if(var_77_object == null) {
		@Trace("Can't find main outdoor scene");
		var_78_object = null;
		var_78_object = var_74_object;
	}
	var_77_object->GetMap(var_78_object);
	var_78_object = var_74_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_5716(object var_0_object, int var_1116_int, object var_1117_object)
{
	var_0_object = var_1117_object;
	bool var_1127_bool; object var_1128_object;
	var_1117_object = var_1128_object;
	func_6217(var_1127_bool, var_1128_object, 70.0);
	if(!var_1127_bool) { //@nz
		var_1116_int = -2;
		return 8;
	}
	object var_1123_object;
	@CreateDialog(var_1123_object);
	int var_1131_int;
	func_6605(var_1131_int);
	var_1123_object->SetNPCName(var_1131_int);
	int var_1132_int;
	func_6603(var_1132_int);
	var_1123_object->SetNPCDescription(var_1132_int);
	string var_1133_string;
	func_6607(var_1133_string);
	var_1123_object->SetPhoto(var_1133_string);
	string var_1134_string;
	func_6609(var_1134_string);
	var_1123_object->SetPhoto2(var_1134_string);
	int var_1135_int;
	func_7269(var_1135_int);
	var_1123_object->SetPlayerName(var_1135_int);
	bool var_1124_bool;
	@IsOverrideActive(var_1124_bool);
	if(var_1124_bool != 0) {
		var_1116_int = -2;
		return 8;
	}
	@DoDialog(var_1123_object);
	bool var_1137_bool; object var_1138_object;
	object var_1139_object;
	func_6495(var_1139_object);
	var_1139_object = var_1138_object;
	func_6304(var_1137_bool, var_1138_object);
	object var_1140_object; object var_1141_object;
	var_1117_object = var_1140_object;
	var_1123_object = var_1141_object;
	TaskCall(21);
	func_5797(var_1142_object, var_1143_object, var_1144_string, var_1145_bool, var_1140_object, var_1141_object);
	TaskReturn();
	bool var_1126_bool;
	var_1123_object->IsDialogEnd(var_1126_bool);
	
	for(;;) {
		var_1170_bool = !var_1126_bool; //@nz
		if(var_1170_bool == 0) goto Label_5786;
		@sync();
		var_1123_object->IsDialogEnd(var_1126_bool);
	}
	
Label_5786:
	object var_1171_object;
	var_1117_object = var_1171_object;
	func_6286();
	@StopDialog(var_1123_object);
	var_1123_object->GetReturnValue(-1);
	int var_1125_int = var_1116_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6744(void)
{
	@SetVariable("d2q03MariaGotoViktor", 1);
}


// @pe
void func_6750(void)
{
	@SetVariable("KnowViktor", 1);
}


void func_2655(object var_0_object, int var_546_int, object var_547_object)
{
	var_0_object = var_547_object;
	bool var_557_bool; object var_558_object;
	var_547_object = var_558_object;
	func_6217(var_557_bool, var_558_object, 70.0);
	if(!var_557_bool) { //@nz
		var_546_int = -2;
		return 8;
	}
	object var_553_object;
	@CreateDialog(var_553_object);
	int var_561_int;
	func_6605(var_561_int);
	var_553_object->SetNPCName(var_561_int);
	int var_562_int;
	func_6603(var_562_int);
	var_553_object->SetNPCDescription(var_562_int);
	string var_563_string;
	func_6607(var_563_string);
	var_553_object->SetPhoto(var_563_string);
	string var_564_string;
	func_6609(var_564_string);
	var_553_object->SetPhoto2(var_564_string);
	int var_565_int;
	func_7269(var_565_int);
	var_553_object->SetPlayerName(var_565_int);
	bool var_554_bool;
	@IsOverrideActive(var_554_bool);
	if(var_554_bool != 0) {
		var_546_int = -2;
		return 8;
	}
	@DoDialog(var_553_object);
	bool var_567_bool; object var_568_object;
	object var_569_object;
	func_6495(var_569_object);
	var_569_object = var_568_object;
	func_6304(var_567_bool, var_568_object);
	object var_570_object; object var_571_object;
	var_547_object = var_570_object;
	var_553_object = var_571_object;
	TaskCall(9);
	func_2736(var_572_object, var_573_object, var_574_string, var_575_bool, var_570_object, var_571_object);
	TaskReturn();
	bool var_556_bool;
	var_553_object->IsDialogEnd(var_556_bool);
	
	for(;;) {
		var_629_bool = !var_556_bool; //@nz
		if(var_629_bool == 0) goto Label_2725;
		@sync();
		var_553_object->IsDialogEnd(var_556_bool);
	}
	
Label_2725:
	object var_630_object;
	var_547_object = var_630_object;
	func_6286();
	@StopDialog(var_553_object);
	var_553_object->GetReturnValue(-1);
	int var_555_int = var_546_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6756(void)
{
	@SetVariable("KnowAlexandr", 1);
}


void func_7269(int var_140_int)
{
	int var_142_int;
	@GetVariable("branch", var_142_int);
	if(var_142_int == 0) {
		var_140_int = 1;
		return 2;
	EMIT "GOTO 0x1c74";
	}
	if(var_142_int == 1) {
		var_140_int = 2;
		return 2;
	}
	var_140_int = 3;
}


// @pe
void func_6762(void)
{
	@SetVariable("ood6Maria1", 1);
}


// @pe
void func_6768(void)
{
	@SetVariable("ood6Maria2", 1);
}


// @pe
void func_6774(void)
{
	@SetVariable("ood8Maria1", 1);
}


// @pe
void func_7286(object var_74_object, bool var_75_bool, int var_76_int)
{
	var_74_object->add(6);
	var_74_object->add(26);
	var_74_object->add(2);
	var_74_object->add(22);
	if(var_75_bool == false) {
		var_74_object->add(15);
		var_74_object->add(5);
		var_74_object->add(16);
	} else if(var_76_int != 0) {
		var_74_object->add(15);
	}
	
}


// @pe
void func_6780(void)
{
	@SetVariable("KnowMaria", 1);
}


// @pe
void func_6786(void)
{
	@SetVariable("resque_list", 1);
	func_7356();
}


// @pe
void func_6795(object var_101_object)
{
	var_101_object->SetReturnValue(2000);
}


void func_6286(void)
{
	bool var_306_bool;
	@CameraSwitchToNormal(true);
	bool var_308_bool;
	func_6611(var_308_bool);
	if(var_308_bool != 0) {
	} else {
		@HasAnimationTrack(var_306_bool, "head");
		if(var_306_bool == 0) goto Label_6303;
		@UnlookAsync("head");
	}
Label_6303:
	
}


// @pe
void func_6800(void)
{
	@SetVariable("ood1Maria5", 1);
}


// @pe
void func_6806(void)
{
	@SetVariable("d6MariaVisit", 1);
}


void func_7319(int var_90_int)
{
	int var_92_int;
	@GetVariable(("vol_" + var_90_int), var_92_int);
	@SetVariable(("vol_" + var_90_int), (var_92_int | 8));
}


// @pe
void func_154(object var_2_object, string var_255_string)
{
	bool var_256_bool;
	func_6611(var_256_bool);
	if(!var_256_bool) //@nz
		return 0;
	if(var_255_string == var_2_object)
		return 0;
	string var_259_string; bool var_260_bool;
	var_255_string = var_259_string;
	if(var_255_string == "")
		var_260_bool = false;
	else
		var_260_bool = true;
	func_6458(var_259_string, var_260_bool);
	var_2_object = var_255_string;
	
}


// @pe
void func_2204(object var_2_object, string var_490_string)
{
	bool var_491_bool;
	func_6611(var_491_bool);
	if(!var_491_bool) //@nz
		return 0;
	if(var_490_string == var_2_object)
		return 0;
	string var_494_string; bool var_495_bool;
	var_490_string = var_494_string;
	if(var_490_string == "")
		var_495_bool = false;
	else
		var_495_bool = true;
	func_6458(var_494_string, var_495_bool);
	var_2_object = var_490_string;
	
}


// @pe
void func_6812(void)
{
	@SetVariable("ood10Maria1", 1);
}


void func_6304(bool var_149_bool, object var_150_object)
{
	int var_156_int; int var_157_int;
	@GetVariable("voice_common", var_156_int);
	if(var_156_int != 0) {
		bool var_160_bool; object var_161_object;
		var_150_object = var_161_object;
		func_6362(var_160_bool, var_161_object);
		if(!var_160_bool) { //@nz
			bool var_191_bool; object var_192_object;
			var_150_object = var_192_object;
			func_6399(var_191_bool, var_192_object);
			if(!var_191_bool) { //@nz
				var_149_bool = false;
				return 4;
			}
		}
		@irand(var_157_int, 2);
		if(var_157_int != 0)
			@SetVariable("voice_common", ((var_156_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_236_bool; object var_237_object;
		var_150_object = var_237_object;
		func_6399(var_236_bool, var_237_object);
		if(!var_236_bool) { //@nz
			bool var_239_bool; object var_240_object;
			var_150_object = var_240_object;
			func_6362(var_239_bool, var_240_object);
			if(!var_239_bool) { //@nz
				var_149_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_6360;
	
Label_6360:
	var_149_bool = true;
	
}


// @pe
void func_4768(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_976_object, object var_977_object)
{
	var_0_object = var_977_object;
	var_1_object = var_976_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_983_bool = false;
		bool var_984_bool = false;
		bool var_985_bool;
		func_7160(var_1_object);
		if(var_985_bool != 0) {
			bool var_991_bool;
			func_7148(var_1_object);
			if(!var_991_bool) //@nz
				var_984_bool = true;
		}
		if(var_984_bool != 0) {
			bool var_998_bool;
			func_7136(var_1_object);
			if(!var_998_bool) //@nz
				var_983_bool = true;
		}
		if(var_983_bool != 0) {
			object var_1005_object; object var_1006_object;
			var_1005_object = var_1_object;
			var_1006_object = var_0_object;
			func_6812();
			func_4895(var_977_object, "Mysterious");
			var_0_object->SetMessage(512892); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(539495, 41421, 41420); //@t
			var_0_object->AddReply(539501, 41427, 41426); //@t
		} else {
					func_4895(var_977_object, "Mysterious");
					var_0_object->SetMessage(512974); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1034_bool = false;
					bool var_1035_bool;
					func_6896(var_1_object);
					if(var_1035_bool != 0) {
						bool var_1041_bool;
						func_6908(var_1_object);
						if(var_1041_bool != 0)
							var_1034_bool = true;
					}
					if(var_1034_bool != 0)
						var_0_object->AddReply(534097, 38198, 35690); //@t
					var_0_object->AddReply(536416, -1, 38196); //@t
					var_0_object->AddReply(512975, -1, 14180); //@t
		}
	}
	for(;;) {
		bool var_1024_bool;
		func_6611(var_1024_bool);
		if(var_1024_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6442(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4894;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4894:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x12a4";


// @pe
void func_6818(void)
{
	@SetVariable("d10q01MariaSavePetr", 1);
}


void func_7331(void)
{
	object var_70_object; int var_73_int;
	@CreateIntVector(var_70_object);
	object var_74_object;
	var_70_object = var_74_object;
	func_7286(var_74_object, false, -1);
	int var_71_int;
	var_70_object->size(var_71_int);
	int var_72_int = 0;
	
	while(var_72_int < var_71_int) {
		var_70_object->get(var_73_int, var_72_int);
		int var_90_int;
		var_73_int = var_90_int;
		func_7319(var_90_int);
		var_72_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_5797(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1140_object, object var_1141_object)
{
	var_0_object = var_1141_object;
	var_1_object = var_1140_object;
	var_3_string = false;
	if(1 != 0) {
		func_5855(var_1141_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_5825;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16a9";
	}
Label_5825:
	bool var_1162_bool;
	func_6611(var_1162_bool);
	if(var_1162_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6442(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5854;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5854:
		return 0;

	}
	
}


// @pe
void func_6824(bool var_409_bool)
{
	int var_411_int;
	func_6511(var_411_int, "d1q01RescueListBadReply");
	if(var_411_int != 0) {
		var_409_bool = true;
		return 0;
	}
	var_409_bool = false;
}


// @pe
void func_2736(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_570_object, object var_571_object)
{
	var_0_object = var_571_object;
	var_1_object = var_570_object;
	var_3_string = false;
	if(1 != 0) {
		func_2827(var_571_object, "Mysterious");
		var_0_object->SetMessage(510194); //@t
		var_0_object->ClearReplies(); //@t
		bool var_586_bool = false;
		bool var_587_bool;
		func_7028(var_1_object);
		if(var_587_bool != 0) {
			bool var_593_bool;
			func_6932(var_1_object);
			if(var_593_bool != 0)
				var_586_bool = true;
		}
		if(var_586_bool != 0)
			var_0_object->AddReply(510401, 11468, 11467); //@t
		bool var_602_bool = false;
		bool var_603_bool;
		func_6920(var_1_object);
		if(var_603_bool != 0) {
			bool var_609_bool;
			func_6944(var_1_object);
			if(var_609_bool != 0)
				var_602_bool = true;
		}
		if(var_602_bool != 0)
			var_0_object->AddReply(510195, 11242, 11241); //@t
		var_0_object->AddReply(534399, -1, 36018); //@t
		goto Label_2797;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xab4";
	}
Label_2797:
	bool var_621_bool;
	func_6611(var_621_bool);
	if(var_621_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6442(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2826;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2826:
		return 0;

	}
	
}


// @pe
void func_6836(bool var_424_bool)
{
	int var_426_int;
	func_6511(var_426_int, "ood1Maria1");
	if(var_426_int == 0) {
		var_424_bool = true;
		return 0;
	}
	var_424_bool = false;
}


void func_4280(object var_0_object, int var_876_int, object var_877_object)
{
	var_0_object = var_877_object;
	bool var_887_bool; object var_888_object;
	var_877_object = var_888_object;
	func_6217(var_887_bool, var_888_object, 70.0);
	if(!var_887_bool) { //@nz
		var_876_int = -2;
		return 8;
	}
	object var_883_object;
	@CreateDialog(var_883_object);
	int var_891_int;
	func_6605(var_891_int);
	var_883_object->SetNPCName(var_891_int);
	int var_892_int;
	func_6603(var_892_int);
	var_883_object->SetNPCDescription(var_892_int);
	string var_893_string;
	func_6607(var_893_string);
	var_883_object->SetPhoto(var_893_string);
	string var_894_string;
	func_6609(var_894_string);
	var_883_object->SetPhoto2(var_894_string);
	int var_895_int;
	func_7269(var_895_int);
	var_883_object->SetPlayerName(var_895_int);
	bool var_884_bool;
	@IsOverrideActive(var_884_bool);
	if(var_884_bool != 0) {
		var_876_int = -2;
		return 8;
	}
	@DoDialog(var_883_object);
	bool var_897_bool; object var_898_object;
	object var_899_object;
	func_6495(var_899_object);
	var_899_object = var_898_object;
	func_6304(var_897_bool, var_898_object);
	object var_900_object; object var_901_object;
	var_877_object = var_900_object;
	var_883_object = var_901_object;
	TaskCall(15);
	func_4361(var_902_object, var_903_object, var_904_string, var_905_bool, var_900_object, var_901_object);
	TaskReturn();
	bool var_886_bool;
	var_883_object->IsDialogEnd(var_886_bool);
	
	for(;;) {
		var_948_bool = !var_886_bool; //@nz
		if(var_948_bool == 0) goto Label_4350;
		@sync();
		var_883_object->IsDialogEnd(var_886_bool);
	}
	
Label_4350:
	object var_949_object;
	var_877_object = var_949_object;
	func_6286();
	@StopDialog(var_883_object);
	var_883_object->GetReturnValue(-1);
	int var_885_int = var_876_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7356(void)
{
	func_7331();
}


// @pe
void func_6848(bool var_380_bool)
{
	int var_382_int;
	func_6511(var_382_int, "ood1Maria2");
	if(var_382_int == 0) {
		var_380_bool = true;
		return 0;
	}
	var_380_bool = false;
}


// @pe
void func_7360(object var_74_object, object var_319_object)
{
	var_75_bool = GlobalVars[1];
	if(!var_75_bool) { //@nz
		int var_77_int; object var_78_object;
		var_74_object = var_78_object;
		TaskCall(0);
		func_0(var_79_object, var_77_int, var_78_object);
		TaskReturn();
		var_312_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_313_bool;
	func_6573(var_313_bool, 1);
	if(var_313_bool != 0) {
		int var_317_int; object var_318_object;
		var_74_object = var_318_object;
		TaskCall(4);
		func_785(var_319_object, var_317_int, var_318_object);
		TaskReturn();
		if(2000 == var_319_object)
			@ShowWindow("people.xml", true);
		return 0;
	}
	bool var_457_bool;
	func_6573(var_457_bool, 2);
	if(var_457_bool != 0) {
		int var_459_int; object var_460_object;
		var_74_object = var_460_object;
		TaskCall(6);
		func_2032(var_461_object, var_459_int, var_460_object);
		TaskReturn();
		return 0;
	}
	bool var_544_bool;
	func_6573(var_544_bool, 3);
	if(var_544_bool != 0) {
		int var_546_int; object var_547_object;
		var_74_object = var_547_object;
		TaskCall(8);
		func_2655(var_548_object, var_546_int, var_547_object);
		TaskReturn();
		return 0;
	}
	bool var_631_bool;
	func_6573(var_631_bool, 4);
	if(var_631_bool != 0) {
		int var_633_int; object var_634_object;
		var_74_object = var_634_object;
		TaskCall(10);
		func_3273(var_635_object, var_633_int, var_634_object);
		TaskReturn();
		return 0;
	}
	bool var_712_bool;
	func_6573(var_712_bool, 6);
	if(var_712_bool != 0) {
		int var_714_int; object var_715_object;
		var_74_object = var_715_object;
		TaskCall(2);
		func_320(var_716_object, var_714_int, var_715_object);
		TaskReturn();
		return 0;
	}
	bool var_807_bool;
	func_6573(var_807_bool, 7);
	if(var_807_bool != 0) {
		int var_809_int; object var_810_object;
		var_74_object = var_810_object;
		TaskCall(12);
		func_3859(var_811_object, var_809_int, var_810_object);
		TaskReturn();
		return 0;
	}
	bool var_874_bool;
	func_6573(var_874_bool, 8);
	if(var_874_bool != 0) {
		int var_876_int; object var_877_object;
		var_74_object = var_877_object;
		TaskCall(14);
		func_4280(var_878_object, var_876_int, var_877_object);
		TaskReturn();
		return 0;
	}
	bool var_950_bool;
	func_6573(var_950_bool, 10);
	if(var_950_bool != 0) {
		int var_952_int; object var_953_object;
		var_74_object = var_953_object;
		TaskCall(16);
		func_4687(var_954_object, var_952_int, var_953_object);
		TaskReturn();
		return 0;
	}
	bool var_1058_bool;
	func_6573(var_1058_bool, 12);
	if(var_1058_bool != 0) {
		int var_1060_int; object var_1061_object;
		var_74_object = var_1061_object;
		TaskCall(18);
		func_5362(var_1062_object, var_1060_int, var_1061_object);
		TaskReturn();
		return 0;
	}
	int var_1116_int; object var_1117_object;
	var_74_object = var_1117_object;
	TaskCall(20);
	func_5716(var_1118_object, var_1116_int, var_1117_object);
	TaskReturn();
}


void func_3273(object var_0_object, int var_633_int, object var_634_object)
{
	var_0_object = var_634_object;
	bool var_644_bool; object var_645_object;
	var_634_object = var_645_object;
	func_6217(var_644_bool, var_645_object, 70.0);
	if(!var_644_bool) { //@nz
		var_633_int = -2;
		return 8;
	}
	object var_640_object;
	@CreateDialog(var_640_object);
	int var_648_int;
	func_6605(var_648_int);
	var_640_object->SetNPCName(var_648_int);
	int var_649_int;
	func_6603(var_649_int);
	var_640_object->SetNPCDescription(var_649_int);
	string var_650_string;
	func_6607(var_650_string);
	var_640_object->SetPhoto(var_650_string);
	string var_651_string;
	func_6609(var_651_string);
	var_640_object->SetPhoto2(var_651_string);
	int var_652_int;
	func_7269(var_652_int);
	var_640_object->SetPlayerName(var_652_int);
	bool var_641_bool;
	@IsOverrideActive(var_641_bool);
	if(var_641_bool != 0) {
		var_633_int = -2;
		return 8;
	}
	@DoDialog(var_640_object);
	bool var_654_bool; object var_655_object;
	object var_656_object;
	func_6495(var_656_object);
	var_656_object = var_655_object;
	func_6304(var_654_bool, var_655_object);
	object var_657_object; object var_658_object;
	var_634_object = var_657_object;
	var_640_object = var_658_object;
	TaskCall(11);
	func_3354(var_659_object, var_660_object, var_661_string, var_662_bool, var_657_object, var_658_object);
	TaskReturn();
	bool var_643_bool;
	var_640_object->IsDialogEnd(var_643_bool);
	
	for(;;) {
		var_710_bool = !var_643_bool; //@nz
		if(var_710_bool == 0) goto Label_3343;
		@sync();
		var_640_object->IsDialogEnd(var_643_bool);
	}
	
Label_3343:
	object var_711_object;
	var_634_object = var_711_object;
	func_6286();
	@StopDialog(var_640_object);
	var_640_object->GetReturnValue(-1);
	int var_642_int = var_633_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6860(bool var_415_bool)
{
	int var_417_int;
	func_6511(var_417_int, "ood1Maria3");
	if(var_417_int == 0) {
		var_415_bool = true;
		return 0;
	}
	var_415_bool = false;
}


// @pe
void func_6872(bool var_348_bool)
{
	int var_350_int;
	func_6511(var_350_int, "d1q01FirstGeorgVisit");
	if(var_350_int == 1)
		var_348_bool = true;
	var_348_bool = false;
}


void func_6362(bool var_160_bool, object var_161_object)
{
	string var_167_string; bool var_169_bool; int var_170_int; string var_171_string;
	var_167_string = "c";
	int var_168_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_161_object->HasProperty((var_167_string + (var_168_int + 1)), var_169_bool);
			if(!var_169_bool) { //@nz
			} else {
				var_168_int += 1;
			}
		}
		if(!var_168_int) { //@nz
			var_160_bool = false;
			return 10;
		}
		var_170_int = 0;
		if(var_168_int > 1)
			@irand(var_170_int, var_168_int);
		var_161_object->GetProperty((var_167_string + (var_170_int + 1)), var_171_string);
		bool var_183_bool; string var_184_string;
		var_171_string = var_184_string;
		func_6473(var_183_bool, var_184_string);
		var_183_bool = var_160_bool;
		return 10;

	}
}


// @pe
void func_5855(object var_2_object, string var_1147_string)
{
	bool var_1148_bool;
	func_6611(var_1148_bool);
	if(!var_1148_bool) //@nz
		return 0;
	if(var_1147_string == var_2_object)
		return 0;
	string var_1151_string; bool var_1152_bool;
	var_1147_string = var_1151_string;
	if(var_1147_string == "")
		var_1152_bool = false;
	else
		var_1152_bool = true;
	func_6458(var_1151_string, var_1152_bool);
	var_2_object = var_1147_string;
	
}


// @pe
void func_6884(bool var_849_bool)
{
	int var_851_int;
	func_6511(var_851_int, "d7q03");
	if(var_851_int == 1)
		var_849_bool = true;
	var_849_bool = false;
}


// @pe
void func_6896(bool var_1035_bool)
{
	int var_1037_int;
	func_6511(var_1037_int, "d10q02");
	if(var_1037_int == 2)
		var_1035_bool = true;
	var_1035_bool = false;
}


void func_5362(object var_0_object, int var_1060_int, object var_1061_object)
{
	var_0_object = var_1061_object;
	bool var_1071_bool; object var_1072_object;
	var_1061_object = var_1072_object;
	func_6217(var_1071_bool, var_1072_object, 70.0);
	if(!var_1071_bool) { //@nz
		var_1060_int = -2;
		return 8;
	}
	object var_1067_object;
	@CreateDialog(var_1067_object);
	int var_1075_int;
	func_6605(var_1075_int);
	var_1067_object->SetNPCName(var_1075_int);
	int var_1076_int;
	func_6603(var_1076_int);
	var_1067_object->SetNPCDescription(var_1076_int);
	string var_1077_string;
	func_6607(var_1077_string);
	var_1067_object->SetPhoto(var_1077_string);
	string var_1078_string;
	func_6609(var_1078_string);
	var_1067_object->SetPhoto2(var_1078_string);
	int var_1079_int;
	func_7269(var_1079_int);
	var_1067_object->SetPlayerName(var_1079_int);
	bool var_1068_bool;
	@IsOverrideActive(var_1068_bool);
	if(var_1068_bool != 0) {
		var_1060_int = -2;
		return 8;
	}
	@DoDialog(var_1067_object);
	bool var_1081_bool; object var_1082_object;
	object var_1083_object;
	func_6495(var_1083_object);
	var_1083_object = var_1082_object;
	func_6304(var_1081_bool, var_1082_object);
	object var_1084_object; object var_1085_object;
	var_1061_object = var_1084_object;
	var_1067_object = var_1085_object;
	TaskCall(19);
	func_5443(var_1086_object, var_1087_object, var_1088_string, var_1089_bool, var_1084_object, var_1085_object);
	TaskReturn();
	bool var_1070_bool;
	var_1067_object->IsDialogEnd(var_1070_bool);
	
	for(;;) {
		var_1114_bool = !var_1070_bool; //@nz
		if(var_1114_bool == 0) goto Label_5432;
		@sync();
		var_1067_object->IsDialogEnd(var_1070_bool);
	}
	
Label_5432:
	object var_1115_object;
	var_1061_object = var_1115_object;
	func_6286();
	@StopDialog(var_1067_object);
	var_1067_object->GetReturnValue(-1);
	int var_1069_int = var_1060_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6908(bool var_1041_bool)
{
	int var_1043_int;
	func_6511(var_1043_int, "ood10Maria2");
	if(var_1043_int == 0) {
		var_1041_bool = true;
		return 0;
	}
	var_1041_bool = false;
}


void func_6399(bool var_191_bool, object var_192_object)
{
	bool var_200_bool; int var_201_int; string var_202_string;
	int var_204_int;
	func_6564(var_204_int);
	string var_198_string = ("d" + var_204_int) + "m";
	int var_199_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_192_object->HasProperty((var_198_string + (var_199_int + 1)), var_200_bool);
			if(!var_200_bool) { //@nz
			} else {
				var_199_int += 1;
			}
		}
		if(!var_199_int) { //@nz
			var_191_bool = false;
			return 10;
		}
		var_201_int = 0;
		if(var_199_int > 1)
			@irand(var_201_int, var_199_int);
		var_192_object->GetProperty((var_198_string + (var_201_int + 1)), var_202_string);
		bool var_223_bool; string var_224_string;
		var_202_string = var_224_string;
		func_6473(var_223_bool, var_224_string);
		var_223_bool = var_191_bool;
		return 10;

	}
}


// @pe
void func_6920(bool var_603_bool)
{
	int var_605_int;
	func_6511(var_605_int, "d3KaterinaAboutKills");
	if(var_605_int != 0) {
		var_603_bool = true;
		return 0;
	}
	var_603_bool = false;
}


// @pe
void func_4361(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_900_object, object var_901_object)
{
	var_0_object = var_901_object;
	var_1_object = var_900_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_907_bool;
		func_7088(var_1_object);
		if(var_907_bool != 0) {
			object var_913_object; object var_914_object;
			var_913_object = var_1_object;
			var_914_object = var_0_object;
			func_6774();
			func_4449(var_901_object, "Mysterious");
			var_0_object->SetMessage(512310); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(512311, 13471, 13470); //@t
			var_0_object->AddReply(512313, 13473, 13472); //@t
		} else {
					func_4449(var_901_object, "Staring");
					var_0_object->SetMessage(513777); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513778, -1, 15014); //@t
					var_0_object->AddReply(541597, -1, 43761); //@t
		}
	}
	for(;;) {
		bool var_932_bool;
		func_6611(var_932_bool);
		if(var_932_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6442(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4448;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4448:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x110d";


// @pe
void func_2827(object var_2_object, string var_577_string)
{
	bool var_578_bool;
	func_6611(var_578_bool);
	if(!var_578_bool) //@nz
		return 0;
	if(var_577_string == var_2_object)
		return 0;
	string var_581_string; bool var_582_bool;
	var_577_string = var_581_string;
	if(var_577_string == "")
		var_582_bool = false;
	else
		var_582_bool = true;
	func_6458(var_581_string, var_582_bool);
	var_2_object = var_577_string;
	
}


void func_785(object var_0_object, int var_317_int, object var_318_object)
{
	var_0_object = var_318_object;
	bool var_328_bool; object var_329_object;
	var_318_object = var_329_object;
	func_6217(var_328_bool, var_329_object, 70.0);
	if(!var_328_bool) { //@nz
		var_317_int = -2;
		return 8;
	}
	object var_324_object;
	@CreateDialog(var_324_object);
	int var_332_int;
	func_6605(var_332_int);
	var_324_object->SetNPCName(var_332_int);
	int var_333_int;
	func_6603(var_333_int);
	var_324_object->SetNPCDescription(var_333_int);
	string var_334_string;
	func_6607(var_334_string);
	var_324_object->SetPhoto(var_334_string);
	string var_335_string;
	func_6609(var_335_string);
	var_324_object->SetPhoto2(var_335_string);
	int var_336_int;
	func_7269(var_336_int);
	var_324_object->SetPlayerName(var_336_int);
	bool var_325_bool;
	@IsOverrideActive(var_325_bool);
	if(var_325_bool != 0) {
		var_317_int = -2;
		return 8;
	}
	@DoDialog(var_324_object);
	bool var_338_bool; object var_339_object;
	object var_340_object;
	func_6495(var_340_object);
	var_340_object = var_339_object;
	func_6304(var_338_bool, var_339_object);
	object var_341_object; object var_342_object;
	var_318_object = var_341_object;
	var_324_object = var_342_object;
	TaskCall(5);
	func_866(var_343_object, var_344_object, var_345_string, var_346_bool, var_341_object, var_342_object);
	TaskReturn();
	bool var_327_bool;
	var_324_object->IsDialogEnd(var_327_bool);
	
	for(;;) {
		var_452_bool = !var_327_bool; //@nz
		if(var_452_bool == 0) goto Label_855;
		@sync();
		var_324_object->IsDialogEnd(var_327_bool);
	}
	
Label_855:
	object var_453_object;
	var_318_object = var_453_object;
	func_6286();
	@StopDialog(var_324_object);
	var_324_object->GetReturnValue(-1);
	int var_326_int = var_317_int;
}
EMIT "Stack[-4] = 0";


void func_3859(object var_0_object, int var_809_int, object var_810_object)
{
	var_0_object = var_810_object;
	bool var_820_bool; object var_821_object;
	var_810_object = var_821_object;
	func_6217(var_820_bool, var_821_object, 70.0);
	if(!var_820_bool) { //@nz
		var_809_int = -2;
		return 8;
	}
	object var_816_object;
	@CreateDialog(var_816_object);
	int var_824_int;
	func_6605(var_824_int);
	var_816_object->SetNPCName(var_824_int);
	int var_825_int;
	func_6603(var_825_int);
	var_816_object->SetNPCDescription(var_825_int);
	string var_826_string;
	func_6607(var_826_string);
	var_816_object->SetPhoto(var_826_string);
	string var_827_string;
	func_6609(var_827_string);
	var_816_object->SetPhoto2(var_827_string);
	int var_828_int;
	func_7269(var_828_int);
	var_816_object->SetPlayerName(var_828_int);
	bool var_817_bool;
	@IsOverrideActive(var_817_bool);
	if(var_817_bool != 0) {
		var_809_int = -2;
		return 8;
	}
	@DoDialog(var_816_object);
	bool var_830_bool; object var_831_object;
	object var_832_object;
	func_6495(var_832_object);
	var_832_object = var_831_object;
	func_6304(var_830_bool, var_831_object);
	object var_833_object; object var_834_object;
	var_810_object = var_833_object;
	var_816_object = var_834_object;
	TaskCall(13);
	func_3940(var_835_object, var_836_object, var_837_string, var_838_bool, var_833_object, var_834_object);
	TaskReturn();
	bool var_819_bool;
	var_816_object->IsDialogEnd(var_819_bool);
	
	for(;;) {
		var_872_bool = !var_819_bool; //@nz
		if(var_872_bool == 0) goto Label_3929;
		@sync();
		var_816_object->IsDialogEnd(var_819_bool);
	}
	
Label_3929:
	object var_873_object;
	var_810_object = var_873_object;
	func_6286();
	@StopDialog(var_816_object);
	var_816_object->GetReturnValue(-1);
	int var_818_int = var_809_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6932(bool var_593_bool)
{
	int var_595_int;
	func_6511(var_595_int, "ood3Maria1");
	if(var_595_int == 0) {
		var_593_bool = true;
		return 0;
	}
	var_593_bool = false;
}


// @pe
void func_3354(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_657_object, object var_658_object)
{
	var_0_object = var_658_object;
	var_1_object = var_657_object;
	var_3_string = false;
	if(1 != 0) {
		func_3437(var_658_object, "Mysterious");
		var_0_object->SetMessage(535203); //@t
		var_0_object->ClearReplies(); //@t
		bool var_673_bool;
		func_6956(var_1_object);
		if(var_673_bool != 0)
			var_0_object->AddReply(536230, 38006, 38005); //@t
		bool var_682_bool = false;
		bool var_683_bool;
		func_6968(var_1_object);
		if(var_683_bool != 0) {
			bool var_689_bool;
			func_7040(var_1_object);
			if(!var_689_bool) //@nz
				var_682_bool = true;
		}
		if(var_682_bool != 0)
			var_0_object->AddReply(536233, 12417, 38008); //@t
		var_0_object->AddReply(536232, -1, 38007); //@t
		goto Label_3407;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd1e";
	}
Label_3407:
	bool var_702_bool;
	func_6611(var_702_bool);
	if(var_702_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6442(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3436;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3436:
		return 0;

	}
	
}


// @pe
void func_4895(object var_2_object, string var_1009_string)
{
	bool var_1010_bool;
	func_6611(var_1010_bool);
	if(!var_1010_bool) //@nz
		return 0;
	if(var_1009_string == var_2_object)
		return 0;
	string var_1013_string; bool var_1014_bool;
	var_1009_string = var_1013_string;
	if(var_1009_string == "")
		var_1014_bool = false;
	else
		var_1014_bool = true;
	func_6458(var_1013_string, var_1014_bool);
	var_2_object = var_1009_string;
	
}


// @pe
void func_6944(bool var_609_bool)
{
	int var_611_int;
	func_6511(var_611_int, "ood3Maria2");
	if(var_611_int == 0) {
		var_609_bool = true;
		return 0;
	}
	var_609_bool = false;
}


void func_5926(object var_0_object)
{
	bool var_57_bool;
	func_6212(var_57_bool);
	if(!var_57_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_6102();
	}
}
EMIT "Return(); Pop(0)";


void func_6442(string var_287_string)
{
	bool var_291_bool; float var_292_float; float var_293_float;
	@lshHasAnimation(var_291_bool, var_287_string);
	if(var_291_bool != 0) {
		@lshGetAnimTimes(var_287_string, var_292_float, var_293_float);
		@lshPlayAnimation(var_292_float, var_293_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_287_string);
	}
	
}


// @pe
void func_6956(bool var_673_bool)
{
	int var_675_int;
	func_6511(var_675_int, "ood4Maria1");
	if(var_675_int == 1)
		var_673_bool = true;
	var_673_bool = false;
}


void func_5940(bool var_81_bool)
{
	object var_83_object;
	@FindActor(var_83_object, "player");
	if(!var_83_object) //@nz
		var_81_bool = false;
	bool var_86_bool; object var_87_object;
	var_83_object = var_87_object;
	func_6203(var_86_bool, var_87_object);
	var_86_bool = var_81_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6968(bool var_683_bool)
{
	int var_685_int;
	func_6511(var_685_int, "ood4Maria2");
	if(var_685_int == 0) {
		var_683_bool = true;
		return 0;
	}
	var_683_bool = false;
}


void func_6458(string var_259_string, bool var_260_bool)
{
	bool var_266_bool; float var_267_float; float var_268_float;
	@lshHasAnimation(var_266_bool, var_259_string);
	if(var_266_bool != 0) {
		@lshGetAnimTimes(var_259_string, var_267_float, var_268_float);
		@lshPlayAnimation(var_267_float, var_268_float, var_260_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_259_string);
	}
	
}


void func_320(object var_0_object, int var_714_int, object var_715_object)
{
	var_0_object = var_715_object;
	bool var_725_bool; object var_726_object;
	var_715_object = var_726_object;
	func_6217(var_725_bool, var_726_object, 70.0);
	if(!var_725_bool) { //@nz
		var_714_int = -2;
		return 8;
	}
	object var_721_object;
	@CreateDialog(var_721_object);
	int var_729_int;
	func_6605(var_729_int);
	var_721_object->SetNPCName(var_729_int);
	int var_730_int;
	func_6603(var_730_int);
	var_721_object->SetNPCDescription(var_730_int);
	string var_731_string;
	func_6607(var_731_string);
	var_721_object->SetPhoto(var_731_string);
	string var_732_string;
	func_6609(var_732_string);
	var_721_object->SetPhoto2(var_732_string);
	int var_733_int;
	func_7269(var_733_int);
	var_721_object->SetPlayerName(var_733_int);
	bool var_722_bool;
	@IsOverrideActive(var_722_bool);
	if(var_722_bool != 0) {
		var_714_int = -2;
		return 8;
	}
	@DoDialog(var_721_object);
	bool var_735_bool; object var_736_object;
	object var_737_object;
	func_6495(var_737_object);
	var_737_object = var_736_object;
	func_6304(var_735_bool, var_736_object);
	object var_738_object; object var_739_object;
	var_715_object = var_738_object;
	var_721_object = var_739_object;
	TaskCall(3);
	func_401(var_740_object, var_741_object, var_742_string, var_743_bool, var_738_object, var_739_object);
	TaskReturn();
	bool var_724_bool;
	var_721_object->IsDialogEnd(var_724_bool);
	
	for(;;) {
		var_805_bool = !var_724_bool; //@nz
		if(var_805_bool == 0) goto Label_390;
		@sync();
		var_721_object->IsDialogEnd(var_724_bool);
	}
	
Label_390:
	object var_806_object;
	var_715_object = var_806_object;
	func_6286();
	@StopDialog(var_721_object);
	var_721_object->GetReturnValue(-1);
	int var_723_int = var_714_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5443(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1084_object, object var_1085_object)
{
	var_0_object = var_1085_object;
	var_1_object = var_1084_object;
	var_3_string = false;
	if(1 != 0) {
		func_5501(var_1085_object, "Staring");
		var_0_object->SetMessage(535671); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535672, 42114, 37358); //@t
		var_0_object->AddReply(540141, -1, 42113); //@t
		goto Label_5471;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1547";
	}
Label_5471:
	bool var_1106_bool;
	func_6611(var_1106_bool);
	if(var_1106_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6442(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5500;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5500:
		return 0;

	}
	
}


// @pe
void func_6980(bool var_500_bool)
{
	int var_502_int;
	func_6511(var_502_int, "ood2Maria1");
	if(var_502_int == 0) {
		var_500_bool = true;
		return 0;
	}
	var_500_bool = false;
}


void func_5955(object var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0);
	var_134_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_133_float, var_134_float);
}


void func_5960(bool var_64_bool)
{
	object var_67_object;
	@FindActor(var_67_object, "player");
	if(!var_67_object) { //@nz
		var_64_bool = false;
		return 4;
	}
	float var_71_float; object var_72_object;
	func_6178(var_71_float, var_72_object);
	if(var_71_float > 90000.0) {
		var_64_bool = false;
		return 4;
	}
	bool var_68_bool;
	@CanSee(var_68_bool, var_72_object);
	var_68_bool = var_64_bool;
}
EMIT "Stack[-2] = 0";


void func_6473(bool var_183_bool, string var_184_string)
{
	bool var_186_bool;
	bool var_187_bool;
	func_6611(var_187_bool);
	if(var_187_bool != 0) {
		@lshHasSpeech(var_186_bool, var_184_string);
		if(var_186_bool != 0) {
			@lshPlaySpeech(var_184_string);
			var_183_bool = true;
		}
	}
	var_183_bool = false;
}


// @pe
void func_6992(bool var_516_bool)
{
	int var_518_int;
	func_6511(var_518_int, "ood2Maria2");
	if(var_518_int == 0) {
		var_516_bool = true;
		return 0;
	}
	var_516_bool = false;
}


void func_6488(void)
{
	bool var_59_bool;
	func_6611(var_59_bool);
	if(var_59_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_7004(bool var_506_bool)
{
	int var_508_int;
	func_6511(var_508_int, "d2q02");
	if(var_508_int == 3)
		var_506_bool = true;
	var_506_bool = false;
}


void func_5982(void)
{
	float var_1175_float;
	@rand(var_1175_float, 8, 16);
	@SetTimer(10, var_1175_float);
}


void func_6495(object var_151_object)
{
	object var_153_object;
	@self(var_153_object);
	var_153_object = var_151_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4449(object var_2_object, string var_917_string)
{
	bool var_918_bool;
	func_6611(var_918_bool);
	if(!var_918_bool) //@nz
		return 0;
	if(var_917_string == var_2_object)
		return 0;
	string var_921_string; bool var_922_bool;
	var_917_string = var_921_string;
	if(var_917_string == "")
		var_922_bool = false;
	else
		var_922_bool = true;
	func_6458(var_921_string, var_922_bool);
	var_2_object = var_917_string;
	
}


// @pe
void func_866(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_341_object, object var_342_object)
{
	var_0_object = var_342_object;
	var_1_object = var_341_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_348_bool;
		func_6872(var_1_object);
		if(!var_348_bool) { //@nz
			func_1028(var_342_object, "Staring");
			var_0_object->SetMessage(506253); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(506254, 6921, 6920); //@t
			var_0_object->AddReply(506259, 6926, 6925); //@t
		} else {
					bool var_380_bool;
					func_6848(var_1_object);
					if(var_380_bool == 0) goto Label_933;
					object var_386_object; object var_387_object;
					var_386_object = var_1_object;
					var_387_object = var_0_object;
					func_6632();
					object var_390_object; object var_391_object;
					var_390_object = var_1_object;
					var_391_object = var_0_object;
					func_6625();
					func_1028(var_342_object, "Mysterious");
					var_0_object->SetMessage(524928); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524944, 26279, 26278); //@t
					var_0_object->AddReply(524952, 26279, 26286); //@t
		}
	}
Label_998:
	for(;;) {
		bool var_372_bool;
		func_6611(var_372_bool);
		if(var_372_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6442(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1027;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1027:
			return 0;

		}

	}
	
Label_933:
	func_1028(var_342_object, "Mysterious");
	var_0_object->SetMessage(508097); //@t
	var_0_object->ClearReplies(); //@t
	bool var_408_bool = false;
	bool var_409_bool;
	func_6824(var_1_object);
	if(var_409_bool != 0) {
		bool var_415_bool;
		func_6860(var_1_object);
		if(var_415_bool != 0)
			var_408_bool = true;
	}
	if(var_408_bool != 0)
		var_0_object->AddReply(521832, 23004, 23003); //@t
	bool var_424_bool;
	func_6836(var_1_object);
	if(var_424_bool != 0)
		var_0_object->AddReply(505605, 6180, 6179); //@t
	bool var_433_bool = false;
	bool var_434_bool;
	func_7100(var_1_object);
	if(var_434_bool != 0) {
		bool var_440_bool;
		func_7124(var_1_object);
		if(var_440_bool != 0)
			var_433_bool = true;
	}
	if(var_433_bool != 0)
		var_0_object->AddReply(508111, 23011, 8934); //@t
	var_0_object->AddReply(505611, -1, 6185); //@t
	goto Label_998;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x366";


// @pe
void func_3940(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_833_object, object var_834_object)
{
	var_0_object = var_834_object;
	var_3_string = false;
	if(1 != 0) {
		func_4008(var_834_object, "Mysterious");
		var_0_object->SetMessage(533236); //@t
		var_0_object->ClearReplies(); //@t
		bool var_849_bool;
		func_6884(var_833_object);
		if(var_849_bool != 0)
			var_0_object->AddReply(533237, 34752, 34751); //@t
		var_0_object->AddReply(533244, -1, 34758); //@t
		var_0_object->AddReply(535757, -1, 37438); //@t
		goto Label_3978;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf68";
	}
Label_3978:
	bool var_864_bool;
	func_6611(var_864_bool);
	if(var_864_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6442(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4007;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4007:
		return 0;

	}
	
}


void func_6501(cvector var_115_cvector, cvector var_116_cvector)
{
	float var_119_float = sqrt(var_116_cvector | var_116_cvector);
	if(var_119_float < 0.000001)
		var_115_cvector = [0.0, 0.0, 0.0];
	var_115_cvector = var_116_cvector / var_119_float;
}


void func_5991(void)
{
	@KillTimer(10);
}


// @pe
void func_7016(bool var_522_bool)
{
	int var_524_int;
	func_6511(var_524_int, "d2q03");
	if(var_524_int == 1)
		var_522_bool = true;
	var_522_bool = false;
}


// @pe
void func_3437(object var_2_object, string var_664_string)
{
	bool var_665_bool;
	func_6611(var_665_bool);
	if(!var_665_bool) //@nz
		return 0;
	if(var_664_string == var_2_object)
		return 0;
	string var_668_string; bool var_669_bool;
	var_664_string = var_668_string;
	if(var_664_string == "")
		var_669_bool = false;
	else
		var_669_bool = true;
	func_6458(var_668_string, var_669_bool);
	var_2_object = var_664_string;
	
}


void func_6511(int var_350_int, string var_351_string)
{
	int var_353_int;
	@GetVariable(var_351_string, var_353_int);
	var_353_int = var_350_int;
}


// @pe
void func_7028(bool var_587_bool)
{
	int var_589_int;
	func_6511(var_589_int, "d3q02");
	if(var_589_int == 3)
		var_587_bool = true;
	var_587_bool = false;
}


void func_6516(int var_159_int, int var_160_int)
{
	object var_162_object;
	@CreateIntVector(var_162_object);
	var_162_object->add(var_159_int);
	var_162_object->add(var_160_int);
	@SendWorldWndMessage(3, var_162_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5501(object var_2_object, string var_1091_string)
{
	bool var_1092_bool;
	func_6611(var_1092_bool);
	if(!var_1092_bool) //@nz
		return 0;
	if(var_1091_string == var_2_object)
		return 0;
	string var_1095_string; bool var_1096_bool;
	var_1091_string = var_1095_string;
	if(var_1091_string == "")
		var_1096_bool = false;
	else
		var_1096_bool = true;
	func_6458(var_1095_string, var_1096_bool);
	var_2_object = var_1091_string;
	
}


// @pe
void func_7040(bool var_689_bool)
{
	int var_691_int;
	func_6511(var_691_int, "d4q03");
	if(var_691_int == 0) {
		var_689_bool = true;
		return 0;
	}
	var_689_bool = false;
}


void func_6528(object var_146_object, int var_147_int)
{
	int var_149_int;
	object var_150_object;
	var_146_object = var_150_object;
	int var_152_int;
	func_6186(var_150_object, "money", var_152_int);
	if(var_152_int > 0) {
		@GetInvItemByName(var_149_int, "Money");
		int var_159_int; int var_160_int;
		var_149_int = var_159_int;
		var_147_int = var_160_int;
		func_6516(var_159_int, var_160_int);
	}
}


// @pe
void func_7052(bool var_746_bool)
{
	int var_748_int;
	func_6511(var_748_int, "d6q01");
	if(var_748_int == 0) {
		var_746_bool = true;
		return 0;
	}
	var_746_bool = false;
}


// @pe
void func_401(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_738_object, object var_739_object)
{
	var_0_object = var_739_object;
	var_1_object = var_738_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_745_bool = false;
		bool var_746_bool;
		func_7052(var_1_object);
		if(var_746_bool != 0) {
			bool var_752_bool;
			func_7064(var_1_object);
			if(var_752_bool != 0)
				var_745_bool = true;
		}
		if(var_745_bool != 0) {
			object var_758_object; object var_759_object;
			var_758_object = var_1_object;
			var_759_object = var_0_object;
			func_6762();
			object var_762_object; object var_763_object;
			var_762_object = var_1_object;
			var_763_object = var_0_object;
			func_6806();
			func_513(var_739_object, "Angry");
			var_0_object->SetMessage(503206); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(503207, 3543, 3540); //@t
			var_0_object->AddReply(503208, 3542, 3541); //@t
		} else {
					object var_789_object; object var_790_object;
					var_789_object = var_1_object;
					var_790_object = var_0_object;
					func_6806();
					func_513(var_739_object, "Mysterious");
					var_0_object->SetMessage(512086); //@t
					var_0_object->ClearReplies(); //@t
					bool var_793_bool;
					func_7076(var_1_object);
					if(var_793_bool != 0)
						var_0_object->AddReply(512087, 13314, 13313); //@t
					var_0_object->AddReply(512094, -1, 13320); //@t
		}
	}
	for(;;) {
		bool var_781_bool;
		func_6611(var_781_bool);
		if(var_781_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6442(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_512;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_512:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x195";


void func_6547(bool var_392_bool, string var_393_string, string var_394_string)
{
	object var_396_object;
	@FindActor(var_396_object, var_393_string);
	if(var_396_object == null)
		var_392_bool = false;
	@Trigger(var_396_object, var_394_string);
	var_392_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7064(bool var_752_bool)
{
	int var_754_int;
	func_6511(var_754_int, "ood6Maria1");
	if(var_754_int == 0) {
		var_752_bool = true;
		return 0;
	}
	var_752_bool = false;
}


void func_6559(float var_85_float)
{
	float var_87_float;
	@GetGameTime(var_87_float);
	var_87_float = var_85_float;
}


// @pe
void func_7076(bool var_793_bool)
{
	int var_795_int;
	func_6511(var_795_int, "ood6Maria2");
	if(var_795_int == 0) {
		var_793_bool = true;
		return 0;
	}
	var_793_bool = false;
}


void func_6564(int var_204_int)
{
	float var_206_float;
	@GetGameTime(var_206_float);
	var_204_int = 1 + (var_206_float / 24);
}


// @pe
void func_4008(object var_2_object, string var_840_string)
{
	bool var_841_bool;
	func_6611(var_841_bool);
	if(!var_841_bool) //@nz
		return 0;
	if(var_840_string == var_2_object)
		return 0;
	string var_844_string; bool var_845_bool;
	var_840_string = var_844_string;
	if(var_840_string == "")
		var_845_bool = false;
	else
		var_845_bool = true;
	func_6458(var_844_string, var_845_bool);
	var_2_object = var_840_string;
	
}


// @pe
void func_6573(bool var_313_bool, int var_314_int)
{
	int var_315_int;
	func_6564(var_315_int);
	var_313_bool = var_315_int == var_314_int;
}


// @pe
void func_7088(bool var_907_bool)
{
	int var_909_int;
	func_6511(var_909_int, "ood8Maria1");
	if(var_909_int == 0) {
		var_907_bool = true;
		return 0;
	}
	var_907_bool = false;
}


void func_6579(string var_81_string, int var_82_int)
{
	string var_84_string = "idle";
	if(var_82_int != 0)
		var_84_string += var_82_int;
	var_84_string = var_81_string;
}


void func_6586(int var_75_int)
{
	int var_78_int; bool var_79_bool;
	var_78_int = 0;
	
	for(;;) {
		string var_81_string; int var_82_int;
		var_78_int = var_82_int;
		func_6579(var_81_string, var_82_int);
		@HasAnimation(var_79_bool, "all", var_81_string);
		if(!var_79_bool) //@nz
			break;
		var_78_int += 1;
	}
	var_78_int = var_75_int;
}


// @pe
void func_7100(bool var_434_bool)
{
	int var_436_int;
	func_6511(var_436_int, "KnowGeorg");
	if(var_436_int == 1)
		var_434_bool = true;
	var_434_bool = false;
}


// @pe
void func_7112(bool var_240_bool)
{
	int var_242_int;
	func_6511(var_242_int, "d2q01");
	if(var_242_int >= 5)
		var_240_bool = true;
	var_240_bool = false;
}


void func_6603(int var_137_int)
{
	var_137_int = 515543;
}


void func_6605(int var_136_int)
{
	var_136_int = 502868;
}


void func_6607(string var_138_string)
{
	var_138_string = "ui/NPC_Maria.png";
}


void func_6609(string var_139_string)
{
	var_139_string = "ui/NPC_Maria_b.png";
}


void func_6611(bool var_131_bool)
{
	var_131_bool = true;
}


// @pe
void func_7124(bool var_440_bool)
{
	int var_442_int;
	func_6511(var_442_int, "ood1Maria5");
	if(var_442_int == 0) {
		var_440_bool = true;
		return 0;
	}
	var_440_bool = false;
}


// @pe
void func_6613(void)
{
	@SetVariable("ood1Maria1", 1);
}


void func_6102(void)
{
	bool var_69_bool; int var_70_int; int var_71_int; bool var_72_bool;
	@WaitForAnimEnd();
	bool var_73_bool;
	func_6212(var_73_bool);
	if(!var_73_bool) //@nz
		return 12;
	int var_75_int;
	func_6586(var_75_int);
	int var_67_int;
	var_75_int = var_67_int;
	int var_68_int = 0;
	
	for(;;) {
		bool var_88_bool = false;
		if(var_68_int < 5) {
			bool var_91_bool;
			func_6212(var_91_bool);
			if(var_91_bool != 0)
				var_88_bool = true;
		}
		if(var_88_bool != 0) {
			if(!var_67_int) { //@nz
				@Sleep(3, var_69_bool);
				if(!var_69_bool) { //@nz
				} else {
			} else {
			@irand(var_70_int, var_67_int);
			@irand(var_71_int, 5);
			if(var_71_int != 0)
				var_70_int = 0;
			string var_102_string; int var_103_int;
			var_70_int = var_103_int;
			func_6579(var_102_string, var_103_int);
			@PlayAnimation("all", var_102_string);
			@WaitForAnimEnd(var_72_bool);
			var_104_bool = !var_72_bool; //@nz
			if(var_104_bool == 0) goto Label_6157;
			goto Label_6168;
			}
				Label_6157:
					bool var_95_bool;
					func_6171(var_95_bool);
					var_96_bool = !var_95_bool; //@nz
					if(var_96_bool == 0) goto Label_6163;
			}
		}
	Label_6168:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_6163:
		@ResetAAS();
		var_68_int += 1;
	}
	
}


// @pe
void func_6619(void)
{
	@SetVariable("d1q01RescueListBadReply", 1);
}


// @pe
void func_7136(bool var_998_bool)
{
	int var_1000_int;
	func_6511(var_1000_int, "d10q01");
	if(var_1000_int == 0) {
		var_998_bool = true;
		return 0;
	}
	var_998_bool = false;
}


// @pe
void func_6625(void)
{
	bool var_392_bool;
	func_6547(var_392_bool, "quest_d1_01", "place_masks");
}


// @pe
void func_6632(void)
{
	@SetVariable("ood1Maria2", 1);
}


// @pe
void func_7148(bool var_991_bool)
{
	int var_993_int;
	func_6511(var_993_int, "d10q01");
	if(var_993_int == 1000)
		var_991_bool = true;
	var_991_bool = false;
}


// @pe
void func_6638(void)
{
	@SetVariable("ood1Maria3", 1);
}


void func_2032(object var_0_object, int var_459_int, object var_460_object)
{
	var_0_object = var_460_object;
	bool var_470_bool; object var_471_object;
	var_460_object = var_471_object;
	func_6217(var_470_bool, var_471_object, 70.0);
	if(!var_470_bool) { //@nz
		var_459_int = -2;
		return 8;
	}
	object var_466_object;
	@CreateDialog(var_466_object);
	int var_474_int;
	func_6605(var_474_int);
	var_466_object->SetNPCName(var_474_int);
	int var_475_int;
	func_6603(var_475_int);
	var_466_object->SetNPCDescription(var_475_int);
	string var_476_string;
	func_6607(var_476_string);
	var_466_object->SetPhoto(var_476_string);
	string var_477_string;
	func_6609(var_477_string);
	var_466_object->SetPhoto2(var_477_string);
	int var_478_int;
	func_7269(var_478_int);
	var_466_object->SetPlayerName(var_478_int);
	bool var_467_bool;
	@IsOverrideActive(var_467_bool);
	if(var_467_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	@DoDialog(var_466_object);
	bool var_480_bool; object var_481_object;
	object var_482_object;
	func_6495(var_482_object);
	var_482_object = var_481_object;
	func_6304(var_480_bool, var_481_object);
	object var_483_object; object var_484_object;
	var_460_object = var_483_object;
	var_466_object = var_484_object;
	TaskCall(7);
	func_2113(var_485_object, var_486_object, var_487_string, var_488_bool, var_483_object, var_484_object);
	TaskReturn();
	bool var_469_bool;
	var_466_object->IsDialogEnd(var_469_bool);
	
	for(;;) {
		var_542_bool = !var_469_bool; //@nz
		if(var_542_bool == 0) goto Label_2102;
		@sync();
		var_466_object->IsDialogEnd(var_469_bool);
	}
	
Label_2102:
	object var_543_object;
	var_460_object = var_543_object;
	func_6286();
	@StopDialog(var_466_object);
	var_466_object->GetReturnValue(-1);
	int var_468_int = var_459_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6644(object var_143_object)
{
	@Trace("money2000 is given");
	object var_146_object;
	var_143_object = var_146_object;
	func_6528(var_146_object, 2000);
}


// @pe
void func_7160(bool var_985_bool)
{
	int var_987_int;
	func_6511(var_987_int, "ood10Maria1");
	if(var_987_int == 0) {
		var_985_bool = true;
		return 0;
	}
	var_985_bool = false;
}


// @pe
void func_6654(void)
{
	@TriggerWorld("playsound", "givemoney");
}


