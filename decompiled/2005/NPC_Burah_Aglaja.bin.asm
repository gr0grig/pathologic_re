GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Confusion
	Threat
	Isee
	Arrogance
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	.bin
	Door 
	 not found
	locked
	SetProperty
	HasItem
	ui/NPC_Aglaja.png
	ui/NPC_Aglaja_b.png
	boiny@door1
	b7q01
	b7q01AglajaGotoStarshina
	pt_map_starshina
	AddMark
	quest_b7_01
	completed
	b7q03
	b7q03AglajaGotoTheater
	pt_map_theater
	quest_b7_03
	place_birdmask
	oob7Aglaja1
	b8q01
	oob8Aglaja1
	quest_b8_01
	oob8Aglaja2
	oob11Aglaja1
	oob9Aglaja1
	oob9Aglaja2
	map_chertez_state
	map_chertez_force
	pt_map_aglaja
	ShowMap
	b7q03SerumWorks
	b8q03
	b11q01
	b9q03BadInit
	b9q03BonefiresCount
	burah_serum
	disease
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	mt_aglaja

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xf3b
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x16c Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x270 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3fc Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x595 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa65 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xde2 Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xf84 Vars = (int)
		EVENT_6 Op = 0xfaa Vars = ()
		EVENT_5 Op = 0xfb9 Vars = ()
		EVENT_45 Op = 0xfc6 Vars = (bool)
		EVENT_0 Op = 0xfd2 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x105b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x11f4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x11f2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x11f6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x11f8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x148a

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x116f

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x10b0

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x109f

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 529922)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 529923)
0x61: Push((int) -1)
0x62: Push((int) 31306)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 529924)
0x66: Push((int) -1)
0x67: Push((int) 31307)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x11fa

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x113a

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x11fa

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x114a

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x1168

0xa6: Pop(0)
0xa7: Push((int) 31305)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 529922)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 529923)
0xb4: Push((int) -1)
0xb5: Push((int) 31306)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 529924)
0xb9: Push((int) -1)
0xba: Push((int) 31307)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbf: PushEmpty(bool)
0xc0: Call2 0x11fa

0xc1: Pop(0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc3: @ lshStopAnimation()
0xc4: Pop(0)
0xc5: GOTO 0xc8

0xc6: @ StopAnimation()
0xc7: Pop(0)
0xc8: Return(); Pop(0)

0xc9: GOTO 0xa2

0xca: Return(); Pop(0)

0xcb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcd: PushEmpty(bool, object, float)
0xce: Stack[-2] = Stack[-12]
0xcf: Stack[-1] = (float) 70.0
0xd0: Call2 0x105b

0xd1: Pop(2)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-10] = (int) -2
0xd5: Return(); Pop(8)

0xd6: @ CreateDialog(Stack[-4])
0xd7: Pop(0)
0xd8: PushEmpty(int)
0xd9: Call2 0x11f4

0xda: Pop(0)
0xdb: @@ SetNPCName(Stack[-1])
0xdc: Pop(1)
0xdd: PushEmpty(int)
0xde: Call2 0x11f2

0xdf: Pop(0)
0xe0: @@ SetNPCDescription(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(string)
0xe3: Call2 0x11f6

0xe4: Pop(0)
0xe5: @@ SetPhoto(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(string)
0xe8: Call2 0x11f8

0xe9: Pop(0)
0xea: @@ SetPhoto2(Stack[-1])
0xeb: Pop(1)
0xec: PushEmpty(int)
0xed: Call2 0x148a

0xee: Pop(0)
0xef: @@ SetPlayerName(Stack[-1])
0xf0: Pop(1)
0xf1: Stack[-2] = (int) -1
0xf2: @ IsOverrideActive(Stack[-3])
0xf3: Pop(0)
0xf4: Push(Stack[-3])
0xf5: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf6: Stack[-10] = (int) -2
0xf7: Return(); Pop(8)

0xf8: @ DoDialog(Stack[-4])
0xf9: Pop(0)
0xfa: PushEmpty(bool, object)
0xfb: PushEmpty(object)
0xfc: Call2 0x116f

0xfd: Stack[-2] = Stack[-1]
0xfe: Pop(1)
0xff: Call2 0x10b0

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[-11]
0x103: Stack[-1] = Stack[-6]
0x104: Push(-2, 4); TaskCall(3)
0x105: Call2 0x11c

0x106: Pop(-2, 4); TaskReturn
0x107: Pop(2)
0x108: @@ IsDialogEnd(Stack[-1])
0x109: Pop(0)
0x10a: Pop(0); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: @ sync()
0x10d: Pop(0)
0x10e: @@ IsDialogEnd(Stack[-1])
0x10f: Pop(0)
0x110: GOTO 0x10a

0x111: PushEmpty(object)
0x112: Stack[-1] = Stack[-10]
0x113: Call2 0x109f

0x114: Pop(1)
0x115: @ StopDialog(Stack[-4])
0x116: Pop(0)
0x117: @@ GetReturnValue(Stack[-2])
0x118: Pop(0)
0x119: Stack[-10] = Stack[-2]
0x11a: Return(); Pop(8)

0x11b: Stack[-4] = 0
0x11c: PushEmpty()
0x11d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x11e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x11f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x120: Push((int) 1)
0x121: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Confusion"
0x124: Call2 0x156

0x125: Pop(1)
0x126: Push((int) 529942)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 529943)
0x12c: Push((int) -1)
0x12d: Push((int) 31326)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 529944)
0x131: Push((int) -1)
0x132: Push((int) 31327)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: GOTO 0x138

0x136: Return(); Pop(0)

0x137: GOTO 0x120

0x138: PushEmpty(bool)
0x139: Call2 0x11fa

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x13c: @ lshWaitForAnimEnd()
0x13d: Pop(0)
0x13e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: GOTO 0x146

0x141: PushEmpty(string)
0x142: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x143: Call2 0x113a

0x144: Pop(1)
0x145: GOTO 0x13c

0x146: GOTO 0x155

0x147: Push("all")
0x148: Push("idle")
0x149: @ PlayAnimation(Stack[-2], Stack[-1])
0x14a: Pop(2)
0x14b: @ WaitForAnimEnd()
0x14c: Pop(0)
0x14d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x14e: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14f: GOTO 0x155

0x150: Push("all")
0x151: Push("idle")
0x152: @ PlayAnimation(Stack[-2], Stack[-1])
0x153: Pop(2)
0x154: GOTO 0x14b

0x155: Return(); Pop(0)

0x156: PushEmpty()
0x157: PushEmpty(bool)
0x158: Call2 0x11fa

0x159: Pop(0)
0x15a: Pop(1); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Return(); Pop(0)

0x15d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Return(); Pop(0)

0x160: PushEmpty(string, bool)
0x161: Stack[-2] = Stack[-3]
0x162: Push("")
0x163: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x165: Stack[-1] = (bool) 0
0x166: GOTO 0x168

0x167: Stack[-1] = (bool) 1
0x168: Call2 0x114a

0x169: Pop(2)
0x16a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x16b: Return(); Pop(0)

0x16c: PushEmpty()
0x16d: Push((int) 1)
0x16e: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x16f: PushEmpty()
0x170: Call2 0x1168

0x171: Pop(0)
0x172: Push((int) 31325)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Confusion"
0x177: Call2 0x156

0x178: Pop(1)
0x179: Push((int) 529942)
0x17a: @@ SetMessage(Stack[-1])
0x17b: Pop(1)
0x17c: @@ ClearReplies()
0x17d: Pop(0)
0x17e: Push((int) 529943)
0x17f: Push((int) -1)
0x180: Push((int) 31326)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Push((int) 529944)
0x184: Push((int) -1)
0x185: Push((int) 31327)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18a: PushEmpty(bool)
0x18b: Call2 0x11fa

0x18c: Pop(0)
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: @ lshStopAnimation()
0x18f: Pop(0)
0x190: GOTO 0x193

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: Return(); Pop(0)

0x194: GOTO 0x16d

0x195: Return(); Pop(0)

0x196: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x197: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x198: PushEmpty(bool, object, float)
0x199: Stack[-2] = Stack[-12]
0x19a: Stack[-1] = (float) 70.0
0x19b: Call2 0x105b

0x19c: Pop(2)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19f: Stack[-10] = (int) -2
0x1a0: Return(); Pop(8)

0x1a1: @ CreateDialog(Stack[-4])
0x1a2: Pop(0)
0x1a3: PushEmpty(int)
0x1a4: Call2 0x11f4

0x1a5: Pop(0)
0x1a6: @@ SetNPCName(Stack[-1])
0x1a7: Pop(1)
0x1a8: PushEmpty(int)
0x1a9: Call2 0x11f2

0x1aa: Pop(0)
0x1ab: @@ SetNPCDescription(Stack[-1])
0x1ac: Pop(1)
0x1ad: PushEmpty(string)
0x1ae: Call2 0x11f6

0x1af: Pop(0)
0x1b0: @@ SetPhoto(Stack[-1])
0x1b1: Pop(1)
0x1b2: PushEmpty(string)
0x1b3: Call2 0x11f8

0x1b4: Pop(0)
0x1b5: @@ SetPhoto2(Stack[-1])
0x1b6: Pop(1)
0x1b7: PushEmpty(int)
0x1b8: Call2 0x148a

0x1b9: Pop(0)
0x1ba: @@ SetPlayerName(Stack[-1])
0x1bb: Pop(1)
0x1bc: Stack[-2] = (int) -1
0x1bd: @ IsOverrideActive(Stack[-3])
0x1be: Pop(0)
0x1bf: Push(Stack[-3])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-10] = (int) -2
0x1c2: Return(); Pop(8)

0x1c3: @ DoDialog(Stack[-4])
0x1c4: Pop(0)
0x1c5: PushEmpty(bool, object)
0x1c6: PushEmpty(object)
0x1c7: Call2 0x116f

0x1c8: Stack[-2] = Stack[-1]
0x1c9: Pop(1)
0x1ca: Call2 0x10b0

0x1cb: Pop(2)
0x1cc: PushEmpty(object, object)
0x1cd: Stack[-2] = Stack[-11]
0x1ce: Stack[-1] = Stack[-6]
0x1cf: Push(-2, 4); TaskCall(5)
0x1d0: Call2 0x1e7

0x1d1: Pop(-2, 4); TaskReturn
0x1d2: Pop(2)
0x1d3: @@ IsDialogEnd(Stack[-1])
0x1d4: Pop(0)
0x1d5: Pop(0); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: @ sync()
0x1d8: Pop(0)
0x1d9: @@ IsDialogEnd(Stack[-1])
0x1da: Pop(0)
0x1db: GOTO 0x1d5

0x1dc: PushEmpty(object)
0x1dd: Stack[-1] = Stack[-10]
0x1de: Call2 0x109f

0x1df: Pop(1)
0x1e0: @ StopDialog(Stack[-4])
0x1e1: Pop(0)
0x1e2: @@ GetReturnValue(Stack[-2])
0x1e3: Pop(0)
0x1e4: Stack[-10] = Stack[-2]
0x1e5: Return(); Pop(8)

0x1e6: Stack[-4] = 0
0x1e7: PushEmpty()
0x1e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1e9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1ea: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Push((int) 1)
0x1ec: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x1ed: PushEmpty(string)
0x1ee: Stack[-1] = "Neutral"
0x1ef: Call2 0x25a

0x1f0: Pop(1)
0x1f1: Push((int) 530357)
0x1f2: @@ SetMessage(Stack[-1])
0x1f3: Pop(1)
0x1f4: @@ ClearReplies()
0x1f5: Pop(0)
0x1f6: PushEmpty(bool)
0x1f7: Stack[-1] = (bool) 0
0x1f8: PushEmpty(bool)
0x1f9: Stack[-1] = (bool) 0
0x1fa: PushEmpty(bool, object)
0x1fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fc: Call2 0x136f

0x1fd: Pop(1)
0x1fe: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1ff: PushEmpty(bool, object)
0x200: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x201: Call2 0x1363

0x202: Pop(1)
0x203: Pop(1); Push((bool) Stack[-1] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: Stack[-1] = (bool) 1
0x206: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x207: PushEmpty(bool, object)
0x208: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x209: Call2 0x137b

0x20a: Pop(1)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Stack[-1] = (bool) 1
0x20d: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20e: Push((int) 530358)
0x20f: Push((int) 32319)
0x210: Push((int) 31732)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: PushEmpty(bool)
0x214: Stack[-1] = (bool) 0
0x215: PushEmpty(bool)
0x216: Stack[-1] = (bool) 0
0x217: PushEmpty(bool, object)
0x218: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x219: Call2 0x136f

0x21a: Pop(1)
0x21b: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21c: PushEmpty(bool, object)
0x21d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21e: Call2 0x1363

0x21f: Pop(1)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: Stack[-1] = (bool) 1
0x222: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x1387

0x226: Pop(1)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Stack[-1] = (bool) 1
0x229: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22a: Push((int) 530361)
0x22b: Push((int) 31736)
0x22c: Push((int) 31735)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Push((int) 530916)
0x230: Push((int) -1)
0x231: Push((int) 32243)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Push((int) 530917)
0x235: Push((int) -1)
0x236: Push((int) 32244)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: GOTO 0x23c

0x23a: Return(); Pop(0)

0x23b: GOTO 0x1eb

0x23c: PushEmpty(bool)
0x23d: Call2 0x11fa

0x23e: Pop(0)
0x23f: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x240: @ lshWaitForAnimEnd()
0x241: Pop(0)
0x242: Push( Stack[3 + Tasks[-1].StackPointer] )
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x24a

0x245: PushEmpty(string)
0x246: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x247: Call2 0x113a

0x248: Pop(1)
0x249: GOTO 0x240

0x24a: GOTO 0x259

0x24b: Push("all")
0x24c: Push("idle")
0x24d: @ PlayAnimation(Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: @ WaitForAnimEnd()
0x250: Pop(0)
0x251: Push( Stack[3 + Tasks[-1].StackPointer] )
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: GOTO 0x259

0x254: Push("all")
0x255: Push("idle")
0x256: @ PlayAnimation(Stack[-2], Stack[-1])
0x257: Pop(2)
0x258: GOTO 0x24f

0x259: Return(); Pop(0)

0x25a: PushEmpty()
0x25b: PushEmpty(bool)
0x25c: Call2 0x11fa

0x25d: Pop(0)
0x25e: Pop(1); Push((bool) Stack[-1] == 0)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: Return(); Pop(0)

0x261: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: Return(); Pop(0)

0x264: PushEmpty(string, bool)
0x265: Stack[-2] = Stack[-3]
0x266: Push("")
0x267: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x269: Stack[-1] = (bool) 0
0x26a: GOTO 0x26c

0x26b: Stack[-1] = (bool) 1
0x26c: Call2 0x114a

0x26d: Pop(2)
0x26e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x26f: Return(); Pop(0)

0x270: PushEmpty()
0x271: Push((int) 1)
0x272: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x273: PushEmpty()
0x274: Call2 0x1168

0x275: Pop(0)
0x276: Push((int) 31732)
0x277: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x279: PushEmpty(object, object)
0x27a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27c: Call2 0x127f

0x27d: Pop(2)
0x27e: Push((int) 31735)
0x27f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x281: PushEmpty(object, object)
0x282: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x1285

0x285: Pop(2)
0x286: Push((int) 31731)
0x287: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x289: PushEmpty(string)
0x28a: Stack[-1] = "Neutral"
0x28b: Call2 0x25a

0x28c: Pop(1)
0x28d: Push((int) 530357)
0x28e: @@ SetMessage(Stack[-1])
0x28f: Pop(1)
0x290: @@ ClearReplies()
0x291: Pop(0)
0x292: PushEmpty(bool)
0x293: Stack[-1] = (bool) 0
0x294: PushEmpty(bool)
0x295: Stack[-1] = (bool) 0
0x296: PushEmpty(bool, object)
0x297: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x298: Call2 0x136f

0x299: Pop(1)
0x29a: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29b: PushEmpty(bool, object)
0x29c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29d: Call2 0x1363

0x29e: Pop(1)
0x29f: Pop(1); Push((bool) Stack[-1] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: Stack[-1] = (bool) 1
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a3: PushEmpty(bool, object)
0x2a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a5: Call2 0x137b

0x2a6: Pop(1)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: Stack[-1] = (bool) 1
0x2a9: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2aa: Push((int) 530358)
0x2ab: Push((int) 32319)
0x2ac: Push((int) 31732)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: PushEmpty(bool)
0x2b0: Stack[-1] = (bool) 0
0x2b1: PushEmpty(bool)
0x2b2: Stack[-1] = (bool) 0
0x2b3: PushEmpty(bool, object)
0x2b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b5: Call2 0x136f

0x2b6: Pop(1)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ba: Call2 0x1363

0x2bb: Pop(1)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: Stack[-1] = (bool) 1
0x2be: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2bf: PushEmpty(bool, object)
0x2c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c1: Call2 0x1387

0x2c2: Pop(1)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: Stack[-1] = (bool) 1
0x2c5: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c6: Push((int) 530361)
0x2c7: Push((int) 31736)
0x2c8: Push((int) 31735)
0x2c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ca: Pop(3)
0x2cb: Push((int) 530916)
0x2cc: Push((int) -1)
0x2cd: Push((int) 32243)
0x2ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cf: Pop(3)
0x2d0: Push((int) 530917)
0x2d1: Push((int) -1)
0x2d2: Push((int) 32244)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Push((int) 31736)
0x2d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2d9: PushEmpty(string)
0x2da: Stack[-1] = "Confusion"
0x2db: Call2 0x25a

0x2dc: Pop(1)
0x2dd: Push((int) 530362)
0x2de: @@ SetMessage(Stack[-1])
0x2df: Pop(1)
0x2e0: @@ ClearReplies()
0x2e1: Pop(0)
0x2e2: Push((int) 530363)
0x2e3: Push((int) 32326)
0x2e4: Push((int) 31737)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Push((int) 530998)
0x2e8: Push((int) -1)
0x2e9: Push((int) 32325)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Return(); Pop(0)

0x2ed: Push((int) 32326)
0x2ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Confusion"
0x2f2: Call2 0x25a

0x2f3: Pop(1)
0x2f4: Push((int) 530999)
0x2f5: @@ SetMessage(Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ ClearReplies()
0x2f8: Pop(0)
0x2f9: Push((int) 531000)
0x2fa: Push((int) 32329)
0x2fb: Push((int) 32327)
0x2fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(3)
0x2fe: Push((int) 531001)
0x2ff: Push((int) -1)
0x300: Push((int) 32328)
0x301: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(3)
0x303: Return(); Pop(0)

0x304: Push((int) 32329)
0x305: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x307: PushEmpty(string)
0x308: Stack[-1] = "Threat"
0x309: Call2 0x25a

0x30a: Pop(1)
0x30b: Push((int) 531002)
0x30c: @@ SetMessage(Stack[-1])
0x30d: Pop(1)
0x30e: @@ ClearReplies()
0x30f: Pop(0)
0x310: Push((int) 531003)
0x311: Push((int) -1)
0x312: Push((int) 32330)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: Push((int) 531004)
0x316: Push((int) -1)
0x317: Push((int) 32331)
0x318: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(3)
0x31a: Return(); Pop(0)

0x31b: Push((int) 32319)
0x31c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x31e: PushEmpty(string)
0x31f: Stack[-1] = "Neutral"
0x320: Call2 0x25a

0x321: Pop(1)
0x322: Push((int) 530994)
0x323: @@ SetMessage(Stack[-1])
0x324: Pop(1)
0x325: @@ ClearReplies()
0x326: Pop(0)
0x327: Push((int) 530996)
0x328: Push((int) 31733)
0x329: Push((int) 32321)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Push((int) 530997)
0x32d: Push((int) 31733)
0x32e: Push((int) 32323)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Push((int) 530995)
0x332: Push((int) -1)
0x333: Push((int) 32320)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Return(); Pop(0)

0x337: Push((int) 31733)
0x338: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x33a: PushEmpty(string)
0x33b: Stack[-1] = "Confusion"
0x33c: Call2 0x25a

0x33d: Pop(1)
0x33e: Push((int) 530359)
0x33f: @@ SetMessage(Stack[-1])
0x340: Pop(1)
0x341: @@ ClearReplies()
0x342: Pop(0)
0x343: Push((int) 530360)
0x344: Push((int) -1)
0x345: Push((int) 31734)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Push((int) 530993)
0x349: Push((int) -1)
0x34a: Push((int) 32318)
0x34b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Return(); Pop(0)

0x34e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x34f: PushEmpty(bool)
0x350: Call2 0x11fa

0x351: Pop(0)
0x352: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x353: @ lshStopAnimation()
0x354: Pop(0)
0x355: GOTO 0x358

0x356: @ StopAnimation()
0x357: Pop(0)
0x358: Return(); Pop(0)

0x359: GOTO 0x271

0x35a: Return(); Pop(0)

0x35b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x35c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x35d: PushEmpty(bool, object, float)
0x35e: Stack[-2] = Stack[-12]
0x35f: Stack[-1] = (float) 70.0
0x360: Call2 0x105b

0x361: Pop(2)
0x362: Pop(1); Push((bool) Stack[-1] == 0)
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-10] = (int) -2
0x365: Return(); Pop(8)

0x366: @ CreateDialog(Stack[-4])
0x367: Pop(0)
0x368: PushEmpty(int)
0x369: Call2 0x11f4

0x36a: Pop(0)
0x36b: @@ SetNPCName(Stack[-1])
0x36c: Pop(1)
0x36d: PushEmpty(int)
0x36e: Call2 0x11f2

0x36f: Pop(0)
0x370: @@ SetNPCDescription(Stack[-1])
0x371: Pop(1)
0x372: PushEmpty(string)
0x373: Call2 0x11f6

0x374: Pop(0)
0x375: @@ SetPhoto(Stack[-1])
0x376: Pop(1)
0x377: PushEmpty(string)
0x378: Call2 0x11f8

0x379: Pop(0)
0x37a: @@ SetPhoto2(Stack[-1])
0x37b: Pop(1)
0x37c: PushEmpty(int)
0x37d: Call2 0x148a

0x37e: Pop(0)
0x37f: @@ SetPlayerName(Stack[-1])
0x380: Pop(1)
0x381: Stack[-2] = (int) -1
0x382: @ IsOverrideActive(Stack[-3])
0x383: Pop(0)
0x384: Push(Stack[-3])
0x385: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x386: Stack[-10] = (int) -2
0x387: Return(); Pop(8)

0x388: @ DoDialog(Stack[-4])
0x389: Pop(0)
0x38a: PushEmpty(bool, object)
0x38b: PushEmpty(object)
0x38c: Call2 0x116f

0x38d: Stack[-2] = Stack[-1]
0x38e: Pop(1)
0x38f: Call2 0x10b0

0x390: Pop(2)
0x391: PushEmpty(object, object)
0x392: Stack[-2] = Stack[-11]
0x393: Stack[-1] = Stack[-6]
0x394: Push(-2, 4); TaskCall(7)
0x395: Call2 0x3ac

0x396: Pop(-2, 4); TaskReturn
0x397: Pop(2)
0x398: @@ IsDialogEnd(Stack[-1])
0x399: Pop(0)
0x39a: Pop(0); Push((bool) Stack[-1] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39c: @ sync()
0x39d: Pop(0)
0x39e: @@ IsDialogEnd(Stack[-1])
0x39f: Pop(0)
0x3a0: GOTO 0x39a

0x3a1: PushEmpty(object)
0x3a2: Stack[-1] = Stack[-10]
0x3a3: Call2 0x109f

0x3a4: Pop(1)
0x3a5: @ StopDialog(Stack[-4])
0x3a6: Pop(0)
0x3a7: @@ GetReturnValue(Stack[-2])
0x3a8: Pop(0)
0x3a9: Stack[-10] = Stack[-2]
0x3aa: Return(); Pop(8)

0x3ab: Stack[-4] = 0
0x3ac: PushEmpty()
0x3ad: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3ae: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3af: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3b0: Push((int) 1)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3b2: PushEmpty(string)
0x3b3: Stack[-1] = "Threat"
0x3b4: Call2 0x3e6

0x3b5: Pop(1)
0x3b6: Push((int) 530682)
0x3b7: @@ SetMessage(Stack[-1])
0x3b8: Pop(1)
0x3b9: @@ ClearReplies()
0x3ba: Pop(0)
0x3bb: Push((int) 530683)
0x3bc: Push((int) 31974)
0x3bd: Push((int) 31973)
0x3be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bf: Pop(3)
0x3c0: Push((int) 530688)
0x3c1: Push((int) 31974)
0x3c2: Push((int) 31978)
0x3c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(3)
0x3c5: GOTO 0x3c8

0x3c6: Return(); Pop(0)

0x3c7: GOTO 0x3b0

0x3c8: PushEmpty(bool)
0x3c9: Call2 0x11fa

0x3ca: Pop(0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3cc: @ lshWaitForAnimEnd()
0x3cd: Pop(0)
0x3ce: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: GOTO 0x3d6

0x3d1: PushEmpty(string)
0x3d2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3d3: Call2 0x113a

0x3d4: Pop(1)
0x3d5: GOTO 0x3cc

0x3d6: GOTO 0x3e5

0x3d7: Push("all")
0x3d8: Push("idle")
0x3d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x3da: Pop(2)
0x3db: @ WaitForAnimEnd()
0x3dc: Pop(0)
0x3dd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: GOTO 0x3e5

0x3e0: Push("all")
0x3e1: Push("idle")
0x3e2: @ PlayAnimation(Stack[-2], Stack[-1])
0x3e3: Pop(2)
0x3e4: GOTO 0x3db

0x3e5: Return(); Pop(0)

0x3e6: PushEmpty()
0x3e7: PushEmpty(bool)
0x3e8: Call2 0x11fa

0x3e9: Pop(0)
0x3ea: Pop(1); Push((bool) Stack[-1] == 0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: Return(); Pop(0)

0x3ed: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ef: Return(); Pop(0)

0x3f0: PushEmpty(string, bool)
0x3f1: Stack[-2] = Stack[-3]
0x3f2: Push("")
0x3f3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: Stack[-1] = (bool) 0
0x3f6: GOTO 0x3f8

0x3f7: Stack[-1] = (bool) 1
0x3f8: Call2 0x114a

0x3f9: Pop(2)
0x3fa: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3fb: Return(); Pop(0)

0x3fc: PushEmpty()
0x3fd: Push((int) 1)
0x3fe: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x3ff: PushEmpty()
0x400: Call2 0x1168

0x401: Pop(0)
0x402: Push((int) 31972)
0x403: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x405: PushEmpty(string)
0x406: Stack[-1] = "Threat"
0x407: Call2 0x3e6

0x408: Pop(1)
0x409: Push((int) 530682)
0x40a: @@ SetMessage(Stack[-1])
0x40b: Pop(1)
0x40c: @@ ClearReplies()
0x40d: Pop(0)
0x40e: Push((int) 530683)
0x40f: Push((int) 31974)
0x410: Push((int) 31973)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Push((int) 530688)
0x414: Push((int) 31974)
0x415: Push((int) 31978)
0x416: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x417: Pop(3)
0x418: Return(); Pop(0)

0x419: Push((int) 31974)
0x41a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x41c: PushEmpty(string)
0x41d: Stack[-1] = "Threat"
0x41e: Call2 0x3e6

0x41f: Pop(1)
0x420: Push((int) 530684)
0x421: @@ SetMessage(Stack[-1])
0x422: Pop(1)
0x423: @@ ClearReplies()
0x424: Pop(0)
0x425: Push((int) 530685)
0x426: Push((int) 31976)
0x427: Push((int) 31975)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Push((int) 530689)
0x42b: Push((int) 31976)
0x42c: Push((int) 31979)
0x42d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42e: Pop(3)
0x42f: Return(); Pop(0)

0x430: Push((int) 31976)
0x431: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x433: PushEmpty(string)
0x434: Stack[-1] = "Threat"
0x435: Call2 0x3e6

0x436: Pop(1)
0x437: Push((int) 530686)
0x438: @@ SetMessage(Stack[-1])
0x439: Pop(1)
0x43a: @@ ClearReplies()
0x43b: Pop(0)
0x43c: Push((int) 530687)
0x43d: Push((int) -1)
0x43e: Push((int) 31977)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: Push((int) 530690)
0x442: Push((int) -1)
0x443: Push((int) 31980)
0x444: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(3)
0x446: Return(); Pop(0)

0x447: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x448: PushEmpty(bool)
0x449: Call2 0x11fa

0x44a: Pop(0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44c: @ lshStopAnimation()
0x44d: Pop(0)
0x44e: GOTO 0x451

0x44f: @ StopAnimation()
0x450: Pop(0)
0x451: Return(); Pop(0)

0x452: GOTO 0x3fd

0x453: Return(); Pop(0)

0x454: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x455: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x456: PushEmpty(bool, object, float)
0x457: Stack[-2] = Stack[-12]
0x458: Stack[-1] = (float) 70.0
0x459: Call2 0x105b

0x45a: Pop(2)
0x45b: Pop(1); Push((bool) Stack[-1] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45d: Stack[-10] = (int) -2
0x45e: Return(); Pop(8)

0x45f: @ CreateDialog(Stack[-4])
0x460: Pop(0)
0x461: PushEmpty(int)
0x462: Call2 0x11f4

0x463: Pop(0)
0x464: @@ SetNPCName(Stack[-1])
0x465: Pop(1)
0x466: PushEmpty(int)
0x467: Call2 0x11f2

0x468: Pop(0)
0x469: @@ SetNPCDescription(Stack[-1])
0x46a: Pop(1)
0x46b: PushEmpty(string)
0x46c: Call2 0x11f6

0x46d: Pop(0)
0x46e: @@ SetPhoto(Stack[-1])
0x46f: Pop(1)
0x470: PushEmpty(string)
0x471: Call2 0x11f8

0x472: Pop(0)
0x473: @@ SetPhoto2(Stack[-1])
0x474: Pop(1)
0x475: PushEmpty(int)
0x476: Call2 0x148a

0x477: Pop(0)
0x478: @@ SetPlayerName(Stack[-1])
0x479: Pop(1)
0x47a: Stack[-2] = (int) -1
0x47b: @ IsOverrideActive(Stack[-3])
0x47c: Pop(0)
0x47d: Push(Stack[-3])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-10] = (int) -2
0x480: Return(); Pop(8)

0x481: @ DoDialog(Stack[-4])
0x482: Pop(0)
0x483: PushEmpty(bool, object)
0x484: PushEmpty(object)
0x485: Call2 0x116f

0x486: Stack[-2] = Stack[-1]
0x487: Pop(1)
0x488: Call2 0x10b0

0x489: Pop(2)
0x48a: PushEmpty(object, object)
0x48b: Stack[-2] = Stack[-11]
0x48c: Stack[-1] = Stack[-6]
0x48d: Push(-2, 4); TaskCall(9)
0x48e: Call2 0x4a5

0x48f: Pop(-2, 4); TaskReturn
0x490: Pop(2)
0x491: @@ IsDialogEnd(Stack[-1])
0x492: Pop(0)
0x493: Pop(0); Push((bool) Stack[-1] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x495: @ sync()
0x496: Pop(0)
0x497: @@ IsDialogEnd(Stack[-1])
0x498: Pop(0)
0x499: GOTO 0x493

0x49a: PushEmpty(object)
0x49b: Stack[-1] = Stack[-10]
0x49c: Call2 0x109f

0x49d: Pop(1)
0x49e: @ StopDialog(Stack[-4])
0x49f: Pop(0)
0x4a0: @@ GetReturnValue(Stack[-2])
0x4a1: Pop(0)
0x4a2: Stack[-10] = Stack[-2]
0x4a3: Return(); Pop(8)

0x4a4: Stack[-4] = 0
0x4a5: PushEmpty()
0x4a6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4a7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4a8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4a9: Push((int) 1)
0x4aa: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x4ab: PushEmpty(bool, object)
0x4ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ad: Call2 0x139d

0x4ae: Pop(1)
0x4af: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4b0: PushEmpty(string)
0x4b1: Stack[-1] = "Threat"
0x4b2: Call2 0x57f

0x4b3: Pop(1)
0x4b4: Push((int) 521012)
0x4b5: @@ SetMessage(Stack[-1])
0x4b6: Pop(1)
0x4b7: @@ ClearReplies()
0x4b8: Pop(0)
0x4b9: Push((int) 530692)
0x4ba: Push((int) 29681)
0x4bb: Push((int) 31984)
0x4bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(3)
0x4be: Push((int) 528310)
0x4bf: Push((int) -1)
0x4c0: Push((int) 29680)
0x4c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c2: Pop(3)
0x4c3: GOTO 0x561

0x4c4: PushEmpty(bool)
0x4c5: Stack[-1] = (bool) 0
0x4c6: PushEmpty(bool)
0x4c7: Stack[-1] = (bool) 0
0x4c8: PushEmpty(bool, object)
0x4c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ca: Call2 0x12bd

0x4cb: Pop(1)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4cd: PushEmpty(bool, object)
0x4ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4cf: Call2 0x12c9

0x4d0: Pop(1)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d2: Stack[-1] = (bool) 1
0x4d3: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d4: PushEmpty(bool, object)
0x4d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d6: Call2 0x13a9

0x4d7: Pop(1)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: Stack[-1] = (bool) 1
0x4da: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4db: PushEmpty(object, object)
0x4dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4de: Call2 0x1247

0x4df: Pop(2)
0x4e0: PushEmpty(string)
0x4e1: Stack[-1] = "Neutral"
0x4e2: Call2 0x57f

0x4e3: Pop(1)
0x4e4: Push((int) 521347)
0x4e5: @@ SetMessage(Stack[-1])
0x4e6: Pop(1)
0x4e7: @@ ClearReplies()
0x4e8: Pop(0)
0x4e9: Push((int) 530713)
0x4ea: Push((int) 32015)
0x4eb: Push((int) 32014)
0x4ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ed: Pop(3)
0x4ee: Push((int) 530721)
0x4ef: Push((int) 32015)
0x4f0: Push((int) 32022)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: GOTO 0x561

0x4f4: PushEmpty(string)
0x4f5: Stack[-1] = "Neutral"
0x4f6: Call2 0x57f

0x4f7: Pop(1)
0x4f8: Push((int) 521014)
0x4f9: @@ SetMessage(Stack[-1])
0x4fa: Pop(1)
0x4fb: @@ ClearReplies()
0x4fc: Pop(0)
0x4fd: PushEmpty(bool)
0x4fe: Stack[-1] = (bool) 0
0x4ff: PushEmpty(bool, object)
0x500: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x501: Call2 0x13a9

0x502: Pop(1)
0x503: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x504: PushEmpty(bool, object)
0x505: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x506: Call2 0x13b4

0x507: Pop(1)
0x508: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x509: Stack[-1] = (bool) 1
0x50a: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50b: Push((int) 521043)
0x50c: Push((int) 22240)
0x50d: Push((int) 22239)
0x50e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50f: Pop(3)
0x510: PushEmpty(bool)
0x511: Stack[-1] = (bool) 1
0x512: PushEmpty(bool)
0x513: Stack[-1] = (bool) 0
0x514: PushEmpty(bool)
0x515: Stack[-1] = (bool) 0
0x516: PushEmpty(bool, object)
0x517: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x518: Call2 0x12d5

0x519: Pop(1)
0x51a: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51b: PushEmpty(bool, object)
0x51c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51d: Call2 0x1393

0x51e: Pop(1)
0x51f: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x520: Stack[-1] = (bool) 1
0x521: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x522: PushEmpty(bool, object)
0x523: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x524: Call2 0x12ed

0x525: Pop(1)
0x526: Pop(1); Push((bool) Stack[-1] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x528: Stack[-1] = (bool) 1
0x529: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x52a: PushEmpty(bool)
0x52b: Stack[-1] = (bool) 0
0x52c: PushEmpty(bool, object)
0x52d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52e: Call2 0x12e1

0x52f: Pop(1)
0x530: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x531: PushEmpty(bool, object)
0x532: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x533: Call2 0x12ed

0x534: Pop(1)
0x535: Pop(1); Push((bool) Stack[-1] == 0)
0x536: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x537: Stack[-1] = (bool) 1
0x538: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x539: Stack[-1] = (bool) 0
0x53a: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53b: Push((int) 521348)
0x53c: Push((int) 22536)
0x53d: Push((int) 22535)
0x53e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53f: Pop(3)
0x540: PushEmpty(bool)
0x541: Stack[-1] = (bool) 0
0x542: PushEmpty(bool, object)
0x543: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x544: Call2 0x12d5

0x545: Pop(1)
0x546: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x547: PushEmpty(bool, object)
0x548: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x549: Call2 0x1393

0x54a: Pop(1)
0x54b: Pop(1); Push((bool) Stack[-1] == 0)
0x54c: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54d: Stack[-1] = (bool) 1
0x54e: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x54f: Push((int) 521360)
0x550: Push((int) 22548)
0x551: Push((int) 22547)
0x552: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x553: Pop(3)
0x554: Push((int) 521015)
0x555: Push((int) -1)
0x556: Push((int) 22228)
0x557: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x558: Pop(3)
0x559: Push((int) 528324)
0x55a: Push((int) -1)
0x55b: Push((int) 29694)
0x55c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55d: Pop(3)
0x55e: GOTO 0x561

0x55f: Return(); Pop(0)

0x560: GOTO 0x4a9

0x561: PushEmpty(bool)
0x562: Call2 0x11fa

0x563: Pop(0)
0x564: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x565: @ lshWaitForAnimEnd()
0x566: Pop(0)
0x567: Push( Stack[3 + Tasks[-1].StackPointer] )
0x568: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x569: GOTO 0x56f

0x56a: PushEmpty(string)
0x56b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x56c: Call2 0x113a

0x56d: Pop(1)
0x56e: GOTO 0x565

0x56f: GOTO 0x57e

0x570: Push("all")
0x571: Push("idle")
0x572: @ PlayAnimation(Stack[-2], Stack[-1])
0x573: Pop(2)
0x574: @ WaitForAnimEnd()
0x575: Pop(0)
0x576: Push( Stack[3 + Tasks[-1].StackPointer] )
0x577: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x578: GOTO 0x57e

0x579: Push("all")
0x57a: Push("idle")
0x57b: @ PlayAnimation(Stack[-2], Stack[-1])
0x57c: Pop(2)
0x57d: GOTO 0x574

0x57e: Return(); Pop(0)

0x57f: PushEmpty()
0x580: PushEmpty(bool)
0x581: Call2 0x11fa

0x582: Pop(0)
0x583: Pop(1); Push((bool) Stack[-1] == 0)
0x584: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x585: Return(); Pop(0)

0x586: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x587: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x588: Return(); Pop(0)

0x589: PushEmpty(string, bool)
0x58a: Stack[-2] = Stack[-3]
0x58b: Push("")
0x58c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58e: Stack[-1] = (bool) 0
0x58f: GOTO 0x591

0x590: Stack[-1] = (bool) 1
0x591: Call2 0x114a

0x592: Pop(2)
0x593: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x594: Return(); Pop(0)

0x595: PushEmpty()
0x596: Push((int) 1)
0x597: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x598: PushEmpty()
0x599: Call2 0x1168

0x59a: Pop(0)
0x59b: Push((int) 22226)
0x59c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59d: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x59e: PushEmpty(object, object)
0x59f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a1: Call2 0x1203

0x5a2: Pop(2)
0x5a3: PushEmpty(object, object)
0x5a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a6: Call2 0x11fc

0x5a7: Pop(2)
0x5a8: PushEmpty(object, object)
0x5a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ab: Call2 0x128b

0x5ac: Pop(2)
0x5ad: PushEmpty(object, object)
0x5ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b0: Call2 0x12ad

0x5b1: Pop(2)
0x5b2: Push((int) 22533)
0x5b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b5: PushEmpty(object, object)
0x5b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b8: Call2 0x1224

0x5b9: Pop(2)
0x5ba: Push((int) 22241)
0x5bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5bd: PushEmpty(object, object)
0x5be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c0: Call2 0x121a

0x5c1: Pop(2)
0x5c2: PushEmpty(object, object)
0x5c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c5: Call2 0x129c

0x5c6: Pop(2)
0x5c7: PushEmpty(object, object)
0x5c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ca: Call2 0x12ad

0x5cb: Pop(2)
0x5cc: Push((int) 32055)
0x5cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5cf: PushEmpty(object, object)
0x5d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d2: Call2 0x121a

0x5d3: Pop(2)
0x5d4: PushEmpty(object, object)
0x5d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d7: Call2 0x129c

0x5d8: Pop(2)
0x5d9: PushEmpty(object, object)
0x5da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5dc: Call2 0x12ad

0x5dd: Pop(2)
0x5de: Push((int) 22537)
0x5df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e1: PushEmpty(object, object)
0x5e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e4: Call2 0x124d

0x5e5: Pop(2)
0x5e6: Push((int) 32066)
0x5e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5e9: PushEmpty(object, object)
0x5ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ec: Call2 0x124d

0x5ed: Pop(2)
0x5ee: Push((int) 22225)
0x5ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x5f1: PushEmpty(bool, object)
0x5f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f3: Call2 0x139d

0x5f4: Pop(1)
0x5f5: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x5f6: PushEmpty(string)
0x5f7: Stack[-1] = "Threat"
0x5f8: Call2 0x57f

0x5f9: Pop(1)
0x5fa: Push((int) 521012)
0x5fb: @@ SetMessage(Stack[-1])
0x5fc: Pop(1)
0x5fd: @@ ClearReplies()
0x5fe: Pop(0)
0x5ff: Push((int) 530692)
0x600: Push((int) 29681)
0x601: Push((int) 31984)
0x602: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x603: Pop(3)
0x604: Push((int) 528310)
0x605: Push((int) -1)
0x606: Push((int) 29680)
0x607: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x608: Pop(3)
0x609: Return(); Pop(0)

0x60a: PushEmpty(bool)
0x60b: Stack[-1] = (bool) 0
0x60c: PushEmpty(bool)
0x60d: Stack[-1] = (bool) 0
0x60e: PushEmpty(bool, object)
0x60f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x610: Call2 0x12bd

0x611: Pop(1)
0x612: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x613: PushEmpty(bool, object)
0x614: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x615: Call2 0x12c9

0x616: Pop(1)
0x617: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x618: Stack[-1] = (bool) 1
0x619: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61a: PushEmpty(bool, object)
0x61b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61c: Call2 0x13a9

0x61d: Pop(1)
0x61e: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61f: Stack[-1] = (bool) 1
0x620: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x621: PushEmpty(object, object)
0x622: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x623: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x624: Call2 0x1247

0x625: Pop(2)
0x626: PushEmpty(string)
0x627: Stack[-1] = "Neutral"
0x628: Call2 0x57f

0x629: Pop(1)
0x62a: Push((int) 521347)
0x62b: @@ SetMessage(Stack[-1])
0x62c: Pop(1)
0x62d: @@ ClearReplies()
0x62e: Pop(0)
0x62f: Push((int) 530713)
0x630: Push((int) 32015)
0x631: Push((int) 32014)
0x632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: Push((int) 530721)
0x635: Push((int) 32015)
0x636: Push((int) 32022)
0x637: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x638: Pop(3)
0x639: Return(); Pop(0)

0x63a: PushEmpty(string)
0x63b: Stack[-1] = "Neutral"
0x63c: Call2 0x57f

0x63d: Pop(1)
0x63e: Push((int) 521014)
0x63f: @@ SetMessage(Stack[-1])
0x640: Pop(1)
0x641: @@ ClearReplies()
0x642: Pop(0)
0x643: PushEmpty(bool)
0x644: Stack[-1] = (bool) 0
0x645: PushEmpty(bool, object)
0x646: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x647: Call2 0x13a9

0x648: Pop(1)
0x649: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64a: PushEmpty(bool, object)
0x64b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64c: Call2 0x13b4

0x64d: Pop(1)
0x64e: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64f: Stack[-1] = (bool) 1
0x650: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x651: Push((int) 521043)
0x652: Push((int) 22240)
0x653: Push((int) 22239)
0x654: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x655: Pop(3)
0x656: PushEmpty(bool)
0x657: Stack[-1] = (bool) 1
0x658: PushEmpty(bool)
0x659: Stack[-1] = (bool) 0
0x65a: PushEmpty(bool)
0x65b: Stack[-1] = (bool) 0
0x65c: PushEmpty(bool, object)
0x65d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65e: Call2 0x12d5

0x65f: Pop(1)
0x660: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x661: PushEmpty(bool, object)
0x662: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x663: Call2 0x1393

0x664: Pop(1)
0x665: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x666: Stack[-1] = (bool) 1
0x667: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x668: PushEmpty(bool, object)
0x669: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66a: Call2 0x12ed

0x66b: Pop(1)
0x66c: Pop(1); Push((bool) Stack[-1] == 0)
0x66d: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66e: Stack[-1] = (bool) 1
0x66f: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x670: PushEmpty(bool)
0x671: Stack[-1] = (bool) 0
0x672: PushEmpty(bool, object)
0x673: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x674: Call2 0x12e1

0x675: Pop(1)
0x676: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x677: PushEmpty(bool, object)
0x678: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x679: Call2 0x12ed

0x67a: Pop(1)
0x67b: Pop(1); Push((bool) Stack[-1] == 0)
0x67c: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67d: Stack[-1] = (bool) 1
0x67e: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67f: Stack[-1] = (bool) 0
0x680: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x681: Push((int) 521348)
0x682: Push((int) 22536)
0x683: Push((int) 22535)
0x684: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x685: Pop(3)
0x686: PushEmpty(bool)
0x687: Stack[-1] = (bool) 0
0x688: PushEmpty(bool, object)
0x689: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68a: Call2 0x12d5

0x68b: Pop(1)
0x68c: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x68d: PushEmpty(bool, object)
0x68e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68f: Call2 0x1393

0x690: Pop(1)
0x691: Pop(1); Push((bool) Stack[-1] == 0)
0x692: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x693: Stack[-1] = (bool) 1
0x694: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x695: Push((int) 521360)
0x696: Push((int) 22548)
0x697: Push((int) 22547)
0x698: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x699: Pop(3)
0x69a: Push((int) 521015)
0x69b: Push((int) -1)
0x69c: Push((int) 22228)
0x69d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69e: Pop(3)
0x69f: Push((int) 528324)
0x6a0: Push((int) -1)
0x6a1: Push((int) 29694)
0x6a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a3: Pop(3)
0x6a4: Return(); Pop(0)

0x6a5: Push((int) 22548)
0x6a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6a8: PushEmpty(string)
0x6a9: Stack[-1] = "Threat"
0x6aa: Call2 0x57f

0x6ab: Pop(1)
0x6ac: Push((int) 521361)
0x6ad: @@ SetMessage(Stack[-1])
0x6ae: Pop(1)
0x6af: @@ ClearReplies()
0x6b0: Pop(0)
0x6b1: Push((int) 521362)
0x6b2: Push((int) 32067)
0x6b3: Push((int) 22549)
0x6b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b5: Pop(3)
0x6b6: Push((int) 530760)
0x6b7: Push((int) 32069)
0x6b8: Push((int) 32068)
0x6b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ba: Pop(3)
0x6bb: Return(); Pop(0)

0x6bc: Push((int) 32067)
0x6bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6bf: PushEmpty(string)
0x6c0: Stack[-1] = "Threat"
0x6c1: Call2 0x57f

0x6c2: Pop(1)
0x6c3: Push((int) 530759)
0x6c4: @@ SetMessage(Stack[-1])
0x6c5: Pop(1)
0x6c6: @@ ClearReplies()
0x6c7: Pop(0)
0x6c8: Push((int) 530762)
0x6c9: Push((int) 32069)
0x6ca: Push((int) 32070)
0x6cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cc: Pop(3)
0x6cd: Push((int) 530763)
0x6ce: Push((int) 32069)
0x6cf: Push((int) 32071)
0x6d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d1: Pop(3)
0x6d2: Return(); Pop(0)

0x6d3: Push((int) 32069)
0x6d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6d6: PushEmpty(string)
0x6d7: Stack[-1] = "Neutral"
0x6d8: Call2 0x57f

0x6d9: Pop(1)
0x6da: Push((int) 530761)
0x6db: @@ SetMessage(Stack[-1])
0x6dc: Pop(1)
0x6dd: @@ ClearReplies()
0x6de: Pop(0)
0x6df: Push((int) 530764)
0x6e0: Push((int) -1)
0x6e1: Push((int) 32074)
0x6e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e3: Pop(3)
0x6e4: Push((int) 530765)
0x6e5: Push((int) -1)
0x6e6: Push((int) 32075)
0x6e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(3)
0x6e9: Return(); Pop(0)

0x6ea: Push((int) 22536)
0x6eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ec: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6ed: PushEmpty(string)
0x6ee: Stack[-1] = "Neutral"
0x6ef: Call2 0x57f

0x6f0: Pop(1)
0x6f1: Push((int) 521349)
0x6f2: @@ SetMessage(Stack[-1])
0x6f3: Pop(1)
0x6f4: @@ ClearReplies()
0x6f5: Pop(0)
0x6f6: Push((int) 530749)
0x6f7: Push((int) 32057)
0x6f8: Push((int) 32056)
0x6f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fa: Pop(3)
0x6fb: Return(); Pop(0)

0x6fc: Push((int) 32057)
0x6fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x6ff: PushEmpty(string)
0x700: Stack[-1] = "Isee"
0x701: Call2 0x57f

0x702: Pop(1)
0x703: Push((int) 530750)
0x704: @@ SetMessage(Stack[-1])
0x705: Pop(1)
0x706: @@ ClearReplies()
0x707: Pop(0)
0x708: Push((int) 530751)
0x709: Push((int) 32062)
0x70a: Push((int) 32058)
0x70b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70c: Pop(3)
0x70d: Push((int) 530752)
0x70e: Push((int) 32060)
0x70f: Push((int) 32059)
0x710: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: Return(); Pop(0)

0x713: Push((int) 32062)
0x714: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x716: PushEmpty(string)
0x717: Stack[-1] = "Isee"
0x718: Call2 0x57f

0x719: Pop(1)
0x71a: Push((int) 530754)
0x71b: @@ SetMessage(Stack[-1])
0x71c: Pop(1)
0x71d: @@ ClearReplies()
0x71e: Pop(0)
0x71f: Push((int) 530755)
0x720: Push((int) 32060)
0x721: Push((int) 32063)
0x722: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x723: Pop(3)
0x724: Push((int) 530756)
0x725: Push((int) 32065)
0x726: Push((int) 32064)
0x727: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x728: Pop(3)
0x729: Return(); Pop(0)

0x72a: Push((int) 32065)
0x72b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72c: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x72d: PushEmpty(string)
0x72e: Stack[-1] = "Threat"
0x72f: Call2 0x57f

0x730: Pop(1)
0x731: Push((int) 530757)
0x732: @@ SetMessage(Stack[-1])
0x733: Pop(1)
0x734: @@ ClearReplies()
0x735: Pop(0)
0x736: Push((int) 530758)
0x737: Push((int) -1)
0x738: Push((int) 32066)
0x739: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73a: Pop(3)
0x73b: Return(); Pop(0)

0x73c: Push((int) 32060)
0x73d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x73f: PushEmpty(string)
0x740: Stack[-1] = "Threat"
0x741: Call2 0x57f

0x742: Pop(1)
0x743: Push((int) 530753)
0x744: @@ SetMessage(Stack[-1])
0x745: Pop(1)
0x746: @@ ClearReplies()
0x747: Pop(0)
0x748: Push((int) 521350)
0x749: Push((int) -1)
0x74a: Push((int) 22537)
0x74b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: Return(); Pop(0)

0x74e: Push((int) 22240)
0x74f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x751: PushEmpty(string)
0x752: Stack[-1] = "Isee"
0x753: Call2 0x57f

0x754: Pop(1)
0x755: Push((int) 521044)
0x756: @@ SetMessage(Stack[-1])
0x757: Pop(1)
0x758: @@ ClearReplies()
0x759: Pop(0)
0x75a: Push((int) 530731)
0x75b: Push((int) 32036)
0x75c: Push((int) 32035)
0x75d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75e: Pop(3)
0x75f: Return(); Pop(0)

0x760: Push((int) 32036)
0x761: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x763: PushEmpty(string)
0x764: Stack[-1] = "Isee"
0x765: Call2 0x57f

0x766: Pop(1)
0x767: Push((int) 530732)
0x768: @@ SetMessage(Stack[-1])
0x769: Pop(1)
0x76a: @@ ClearReplies()
0x76b: Pop(0)
0x76c: Push((int) 530733)
0x76d: Push((int) 32038)
0x76e: Push((int) 32037)
0x76f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x770: Pop(3)
0x771: Push((int) 530741)
0x772: Push((int) 32046)
0x773: Push((int) 32045)
0x774: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(3)
0x776: Return(); Pop(0)

0x777: Push((int) 32046)
0x778: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x77a: PushEmpty(string)
0x77b: Stack[-1] = "Neutral"
0x77c: Call2 0x57f

0x77d: Pop(1)
0x77e: Push((int) 530742)
0x77f: @@ SetMessage(Stack[-1])
0x780: Pop(1)
0x781: @@ ClearReplies()
0x782: Pop(0)
0x783: Push((int) 530743)
0x784: Push((int) 32048)
0x785: Push((int) 32047)
0x786: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x787: Pop(3)
0x788: Push((int) 530745)
0x789: Push((int) 32048)
0x78a: Push((int) 32049)
0x78b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(3)
0x78d: Return(); Pop(0)

0x78e: Push((int) 32048)
0x78f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x791: PushEmpty(string)
0x792: Stack[-1] = "Neutral"
0x793: Call2 0x57f

0x794: Pop(1)
0x795: Push((int) 530744)
0x796: @@ SetMessage(Stack[-1])
0x797: Pop(1)
0x798: @@ ClearReplies()
0x799: Pop(0)
0x79a: Push((int) 530746)
0x79b: Push((int) 32038)
0x79c: Push((int) 32051)
0x79d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79e: Pop(3)
0x79f: Push((int) 530747)
0x7a0: Push((int) 32038)
0x7a1: Push((int) 32052)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: Return(); Pop(0)

0x7a5: Push((int) 32038)
0x7a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7a8: PushEmpty(string)
0x7a9: Stack[-1] = "Neutral"
0x7aa: Call2 0x57f

0x7ab: Pop(1)
0x7ac: Push((int) 530734)
0x7ad: @@ SetMessage(Stack[-1])
0x7ae: Pop(1)
0x7af: @@ ClearReplies()
0x7b0: Pop(0)
0x7b1: Push((int) 530735)
0x7b2: Push((int) 32041)
0x7b3: Push((int) 32039)
0x7b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b5: Pop(3)
0x7b6: Return(); Pop(0)

0x7b7: Push((int) 32041)
0x7b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7ba: PushEmpty(string)
0x7bb: Stack[-1] = "Neutral"
0x7bc: Call2 0x57f

0x7bd: Pop(1)
0x7be: Push((int) 530737)
0x7bf: @@ SetMessage(Stack[-1])
0x7c0: Pop(1)
0x7c1: @@ ClearReplies()
0x7c2: Pop(0)
0x7c3: Push((int) 530738)
0x7c4: Push((int) 32043)
0x7c5: Push((int) 32042)
0x7c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c7: Pop(3)
0x7c8: Return(); Pop(0)

0x7c9: Push((int) 32043)
0x7ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7cc: PushEmpty(string)
0x7cd: Stack[-1] = "Isee"
0x7ce: Call2 0x57f

0x7cf: Pop(1)
0x7d0: Push((int) 530739)
0x7d1: @@ SetMessage(Stack[-1])
0x7d2: Pop(1)
0x7d3: @@ ClearReplies()
0x7d4: Pop(0)
0x7d5: Push((int) 530740)
0x7d6: Push((int) 32040)
0x7d7: Push((int) 32044)
0x7d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d9: Pop(3)
0x7da: Return(); Pop(0)

0x7db: Push((int) 32040)
0x7dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7de: PushEmpty(string)
0x7df: Stack[-1] = "Isee"
0x7e0: Call2 0x57f

0x7e1: Pop(1)
0x7e2: Push((int) 530736)
0x7e3: @@ SetMessage(Stack[-1])
0x7e4: Pop(1)
0x7e5: @@ ClearReplies()
0x7e6: Pop(0)
0x7e7: Push((int) 521045)
0x7e8: Push((int) -1)
0x7e9: Push((int) 22241)
0x7ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7eb: Pop(3)
0x7ec: Push((int) 530748)
0x7ed: Push((int) -1)
0x7ee: Push((int) 32055)
0x7ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f0: Pop(3)
0x7f1: Return(); Pop(0)

0x7f2: Push((int) 32015)
0x7f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x7f5: PushEmpty(string)
0x7f6: Stack[-1] = "Isee"
0x7f7: Call2 0x57f

0x7f8: Pop(1)
0x7f9: Push((int) 530714)
0x7fa: @@ SetMessage(Stack[-1])
0x7fb: Pop(1)
0x7fc: @@ ClearReplies()
0x7fd: Pop(0)
0x7fe: Push((int) 530722)
0x7ff: Push((int) 32024)
0x800: Push((int) 32023)
0x801: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x802: Pop(3)
0x803: Push((int) 530715)
0x804: Push((int) 32017)
0x805: Push((int) 32016)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: Return(); Pop(0)

0x809: Push((int) 32024)
0x80a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x80c: PushEmpty(string)
0x80d: Stack[-1] = "Isee"
0x80e: Call2 0x57f

0x80f: Pop(1)
0x810: Push((int) 530723)
0x811: @@ SetMessage(Stack[-1])
0x812: Pop(1)
0x813: @@ ClearReplies()
0x814: Pop(0)
0x815: Push((int) 530724)
0x816: Push((int) 32026)
0x817: Push((int) 32025)
0x818: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x819: Pop(3)
0x81a: Return(); Pop(0)

0x81b: Push((int) 32026)
0x81c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81d: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x81e: PushEmpty(string)
0x81f: Stack[-1] = "Threat"
0x820: Call2 0x57f

0x821: Pop(1)
0x822: Push((int) 530725)
0x823: @@ SetMessage(Stack[-1])
0x824: Pop(1)
0x825: @@ ClearReplies()
0x826: Pop(0)
0x827: Push((int) 530726)
0x828: Push((int) 32029)
0x829: Push((int) 32027)
0x82a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82b: Pop(3)
0x82c: Return(); Pop(0)

0x82d: Push((int) 32029)
0x82e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x844; Pop(1)

0x830: PushEmpty(string)
0x831: Stack[-1] = "Threat"
0x832: Call2 0x57f

0x833: Pop(1)
0x834: Push((int) 530728)
0x835: @@ SetMessage(Stack[-1])
0x836: Pop(1)
0x837: @@ ClearReplies()
0x838: Pop(0)
0x839: Push((int) 530729)
0x83a: Push((int) 32017)
0x83b: Push((int) 32030)
0x83c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83d: Pop(3)
0x83e: Push((int) 530730)
0x83f: Push((int) -1)
0x840: Push((int) 32031)
0x841: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x842: Pop(3)
0x843: Return(); Pop(0)

0x844: Push((int) 32017)
0x845: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x846: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x847: PushEmpty(string)
0x848: Stack[-1] = "Threat"
0x849: Call2 0x57f

0x84a: Pop(1)
0x84b: Push((int) 530716)
0x84c: @@ SetMessage(Stack[-1])
0x84d: Pop(1)
0x84e: @@ ClearReplies()
0x84f: Pop(0)
0x850: Push((int) 530717)
0x851: Push((int) 32019)
0x852: Push((int) 32018)
0x853: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x854: Pop(3)
0x855: Return(); Pop(0)

0x856: Push((int) 32019)
0x857: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x858: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x859: PushEmpty(string)
0x85a: Stack[-1] = "Neutral"
0x85b: Call2 0x57f

0x85c: Pop(1)
0x85d: Push((int) 530718)
0x85e: @@ SetMessage(Stack[-1])
0x85f: Pop(1)
0x860: @@ ClearReplies()
0x861: Pop(0)
0x862: Push((int) 521346)
0x863: Push((int) -1)
0x864: Push((int) 22533)
0x865: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: Return(); Pop(0)

0x868: Push((int) 29681)
0x869: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86a: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x86b: PushEmpty(string)
0x86c: Stack[-1] = "Threat"
0x86d: Call2 0x57f

0x86e: Pop(1)
0x86f: Push((int) 528311)
0x870: @@ SetMessage(Stack[-1])
0x871: Pop(1)
0x872: @@ ClearReplies()
0x873: Pop(0)
0x874: Push((int) 528312)
0x875: Push((int) 29683)
0x876: Push((int) 29682)
0x877: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x878: Pop(3)
0x879: Push((int) 530693)
0x87a: Push((int) 29683)
0x87b: Push((int) 31985)
0x87c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87d: Pop(3)
0x87e: Return(); Pop(0)

0x87f: Push((int) 29683)
0x880: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x881: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x882: PushEmpty(string)
0x883: Stack[-1] = "Isee"
0x884: Call2 0x57f

0x885: Pop(1)
0x886: Push((int) 528313)
0x887: @@ SetMessage(Stack[-1])
0x888: Pop(1)
0x889: @@ ClearReplies()
0x88a: Pop(0)
0x88b: Push((int) 528314)
0x88c: Push((int) 29685)
0x88d: Push((int) 29684)
0x88e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88f: Pop(3)
0x890: Push((int) 530694)
0x891: Push((int) 29685)
0x892: Push((int) 31986)
0x893: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: Return(); Pop(0)

0x896: Push((int) 29685)
0x897: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x898: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x899: PushEmpty(string)
0x89a: Stack[-1] = "Isee"
0x89b: Call2 0x57f

0x89c: Pop(1)
0x89d: Push((int) 528315)
0x89e: @@ SetMessage(Stack[-1])
0x89f: Pop(1)
0x8a0: @@ ClearReplies()
0x8a1: Pop(0)
0x8a2: Push((int) 528316)
0x8a3: Push((int) 29687)
0x8a4: Push((int) 29686)
0x8a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a6: Pop(3)
0x8a7: Push((int) 530695)
0x8a8: Push((int) 29687)
0x8a9: Push((int) 31988)
0x8aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ab: Pop(3)
0x8ac: Return(); Pop(0)

0x8ad: Push((int) 29687)
0x8ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8b0: PushEmpty(string)
0x8b1: Stack[-1] = "Isee"
0x8b2: Call2 0x57f

0x8b3: Pop(1)
0x8b4: Push((int) 528317)
0x8b5: @@ SetMessage(Stack[-1])
0x8b6: Pop(1)
0x8b7: @@ ClearReplies()
0x8b8: Pop(0)
0x8b9: Push((int) 528318)
0x8ba: Push((int) 29689)
0x8bb: Push((int) 29688)
0x8bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bd: Pop(3)
0x8be: Push((int) 530696)
0x8bf: Push((int) 31991)
0x8c0: Push((int) 31990)
0x8c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c2: Pop(3)
0x8c3: Return(); Pop(0)

0x8c4: Push((int) 31991)
0x8c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c6: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8c7: PushEmpty(string)
0x8c8: Stack[-1] = "Threat"
0x8c9: Call2 0x57f

0x8ca: Pop(1)
0x8cb: Push((int) 530697)
0x8cc: @@ SetMessage(Stack[-1])
0x8cd: Pop(1)
0x8ce: @@ ClearReplies()
0x8cf: Pop(0)
0x8d0: Push((int) 530698)
0x8d1: Push((int) 29689)
0x8d2: Push((int) 31992)
0x8d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d4: Pop(3)
0x8d5: Return(); Pop(0)

0x8d6: Push((int) 29689)
0x8d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8d9: PushEmpty(string)
0x8da: Stack[-1] = "Threat"
0x8db: Call2 0x57f

0x8dc: Pop(1)
0x8dd: Push((int) 528319)
0x8de: @@ SetMessage(Stack[-1])
0x8df: Pop(1)
0x8e0: @@ ClearReplies()
0x8e1: Pop(0)
0x8e2: Push((int) 528320)
0x8e3: Push((int) 29691)
0x8e4: Push((int) 29690)
0x8e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e6: Pop(3)
0x8e7: Push((int) 530699)
0x8e8: Push((int) 29691)
0x8e9: Push((int) 31995)
0x8ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8eb: Pop(3)
0x8ec: Return(); Pop(0)

0x8ed: Push((int) 29691)
0x8ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ef: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x8f0: PushEmpty(string)
0x8f1: Stack[-1] = "Threat"
0x8f2: Call2 0x57f

0x8f3: Pop(1)
0x8f4: Push((int) 528321)
0x8f5: @@ SetMessage(Stack[-1])
0x8f6: Pop(1)
0x8f7: @@ ClearReplies()
0x8f8: Pop(0)
0x8f9: Push((int) 528322)
0x8fa: Push((int) 29693)
0x8fb: Push((int) 29692)
0x8fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fd: Pop(3)
0x8fe: Push((int) 530704)
0x8ff: Push((int) 29693)
0x900: Push((int) 32001)
0x901: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x902: Pop(3)
0x903: Return(); Pop(0)

0x904: Push((int) 29693)
0x905: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x906: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x907: PushEmpty(string)
0x908: Stack[-1] = "Confusion"
0x909: Call2 0x57f

0x90a: Pop(1)
0x90b: Push((int) 528323)
0x90c: @@ SetMessage(Stack[-1])
0x90d: Pop(1)
0x90e: @@ ClearReplies()
0x90f: Pop(0)
0x910: Push((int) 530700)
0x911: Push((int) 31998)
0x912: Push((int) 31997)
0x913: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x914: Pop(3)
0x915: Push((int) 530705)
0x916: Push((int) 31998)
0x917: Push((int) 32003)
0x918: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x919: Pop(3)
0x91a: Return(); Pop(0)

0x91b: Push((int) 31998)
0x91c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x91e: PushEmpty(string)
0x91f: Stack[-1] = "Confusion"
0x920: Call2 0x57f

0x921: Pop(1)
0x922: Push((int) 530701)
0x923: @@ SetMessage(Stack[-1])
0x924: Pop(1)
0x925: @@ ClearReplies()
0x926: Pop(0)
0x927: Push((int) 530702)
0x928: Push((int) 32000)
0x929: Push((int) 31999)
0x92a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92b: Pop(3)
0x92c: Push((int) 530710)
0x92d: Push((int) 32000)
0x92e: Push((int) 32008)
0x92f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x930: Pop(3)
0x931: Return(); Pop(0)

0x932: Push((int) 32000)
0x933: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x935: PushEmpty(string)
0x936: Stack[-1] = "Confusion"
0x937: Call2 0x57f

0x938: Pop(1)
0x939: Push((int) 530703)
0x93a: @@ SetMessage(Stack[-1])
0x93b: Pop(1)
0x93c: @@ ClearReplies()
0x93d: Pop(0)
0x93e: Push((int) 530706)
0x93f: Push((int) 32005)
0x940: Push((int) 32004)
0x941: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: Push((int) 530711)
0x944: Push((int) 32005)
0x945: Push((int) 32010)
0x946: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x947: Pop(3)
0x948: Return(); Pop(0)

0x949: Push((int) 32005)
0x94a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94b: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x94c: PushEmpty(string)
0x94d: Stack[-1] = "Confusion"
0x94e: Call2 0x57f

0x94f: Pop(1)
0x950: Push((int) 530707)
0x951: @@ SetMessage(Stack[-1])
0x952: Pop(1)
0x953: @@ ClearReplies()
0x954: Pop(0)
0x955: Push((int) 530708)
0x956: Push((int) 32007)
0x957: Push((int) 32006)
0x958: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x959: Pop(3)
0x95a: Push((int) 530712)
0x95b: Push((int) 32007)
0x95c: Push((int) 32011)
0x95d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95e: Pop(3)
0x95f: Return(); Pop(0)

0x960: Push((int) 32007)
0x961: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x962: IF (Stack[-1] == 0) GOTO 0x972; Pop(1)

0x963: PushEmpty(string)
0x964: Stack[-1] = "Confusion"
0x965: Call2 0x57f

0x966: Pop(1)
0x967: Push((int) 530709)
0x968: @@ SetMessage(Stack[-1])
0x969: Pop(1)
0x96a: @@ ClearReplies()
0x96b: Pop(0)
0x96c: Push((int) 521013)
0x96d: Push((int) -1)
0x96e: Push((int) 22226)
0x96f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x970: Pop(3)
0x971: Return(); Pop(0)

0x972: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x973: PushEmpty(bool)
0x974: Call2 0x11fa

0x975: Pop(0)
0x976: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x977: @ lshStopAnimation()
0x978: Pop(0)
0x979: GOTO 0x97c

0x97a: @ StopAnimation()
0x97b: Pop(0)
0x97c: Return(); Pop(0)

0x97d: GOTO 0x596

0x97e: Return(); Pop(0)

0x97f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x980: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x981: PushEmpty(bool, object, float)
0x982: Stack[-2] = Stack[-12]
0x983: Stack[-1] = (float) 70.0
0x984: Call2 0x105b

0x985: Pop(2)
0x986: Pop(1); Push((bool) Stack[-1] == 0)
0x987: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x988: Stack[-10] = (int) -2
0x989: Return(); Pop(8)

0x98a: @ CreateDialog(Stack[-4])
0x98b: Pop(0)
0x98c: PushEmpty(int)
0x98d: Call2 0x11f4

0x98e: Pop(0)
0x98f: @@ SetNPCName(Stack[-1])
0x990: Pop(1)
0x991: PushEmpty(int)
0x992: Call2 0x11f2

0x993: Pop(0)
0x994: @@ SetNPCDescription(Stack[-1])
0x995: Pop(1)
0x996: PushEmpty(string)
0x997: Call2 0x11f6

0x998: Pop(0)
0x999: @@ SetPhoto(Stack[-1])
0x99a: Pop(1)
0x99b: PushEmpty(string)
0x99c: Call2 0x11f8

0x99d: Pop(0)
0x99e: @@ SetPhoto2(Stack[-1])
0x99f: Pop(1)
0x9a0: PushEmpty(int)
0x9a1: Call2 0x148a

0x9a2: Pop(0)
0x9a3: @@ SetPlayerName(Stack[-1])
0x9a4: Pop(1)
0x9a5: Stack[-2] = (int) -1
0x9a6: @ IsOverrideActive(Stack[-3])
0x9a7: Pop(0)
0x9a8: Push(Stack[-3])
0x9a9: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9aa: Stack[-10] = (int) -2
0x9ab: Return(); Pop(8)

0x9ac: @ DoDialog(Stack[-4])
0x9ad: Pop(0)
0x9ae: PushEmpty(bool, object)
0x9af: PushEmpty(object)
0x9b0: Call2 0x116f

0x9b1: Stack[-2] = Stack[-1]
0x9b2: Pop(1)
0x9b3: Call2 0x10b0

0x9b4: Pop(2)
0x9b5: PushEmpty(object, object)
0x9b6: Stack[-2] = Stack[-11]
0x9b7: Stack[-1] = Stack[-6]
0x9b8: Push(-2, 4); TaskCall(11)
0x9b9: Call2 0x9d0

0x9ba: Pop(-2, 4); TaskReturn
0x9bb: Pop(2)
0x9bc: @@ IsDialogEnd(Stack[-1])
0x9bd: Pop(0)
0x9be: Pop(0); Push((bool) Stack[-1] == 0)
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9c0: @ sync()
0x9c1: Pop(0)
0x9c2: @@ IsDialogEnd(Stack[-1])
0x9c3: Pop(0)
0x9c4: GOTO 0x9be

0x9c5: PushEmpty(object)
0x9c6: Stack[-1] = Stack[-10]
0x9c7: Call2 0x109f

0x9c8: Pop(1)
0x9c9: @ StopDialog(Stack[-4])
0x9ca: Pop(0)
0x9cb: @@ GetReturnValue(Stack[-2])
0x9cc: Pop(0)
0x9cd: Stack[-10] = Stack[-2]
0x9ce: Return(); Pop(8)

0x9cf: Stack[-4] = 0
0x9d0: PushEmpty()
0x9d1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9d2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9d3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9d4: Push((int) 1)
0x9d5: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0x9d6: PushEmpty(bool, object)
0x9d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d8: Call2 0x12f9

0x9d9: Pop(1)
0x9da: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9db: PushEmpty(object, object)
0x9dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9de: Call2 0x1263

0x9df: Pop(2)
0x9e0: PushEmpty(string)
0x9e1: Stack[-1] = "Threat"
0x9e2: Call2 0xa4f

0x9e3: Pop(1)
0x9e4: Push((int) 521373)
0x9e5: @@ SetMessage(Stack[-1])
0x9e6: Pop(1)
0x9e7: @@ ClearReplies()
0x9e8: Pop(0)
0x9e9: Push((int) 530766)
0x9ea: Push((int) 32077)
0x9eb: Push((int) 32076)
0x9ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ed: Pop(3)
0x9ee: Push((int) 530781)
0x9ef: Push((int) 32077)
0x9f0: Push((int) 32091)
0x9f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f2: Pop(3)
0x9f3: GOTO 0xa31

0x9f4: PushEmpty(string)
0x9f5: Stack[-1] = "Neutral"
0x9f6: Call2 0xa4f

0x9f7: Pop(1)
0x9f8: Push((int) 521376)
0x9f9: @@ SetMessage(Stack[-1])
0x9fa: Pop(1)
0x9fb: @@ ClearReplies()
0x9fc: Pop(0)
0x9fd: PushEmpty(bool, object)
0x9fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ff: Call2 0x1305

0xa00: Pop(1)
0xa01: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa02: Push((int) 521377)
0xa03: Push((int) 22556)
0xa04: Push((int) 22555)
0xa05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa06: Pop(3)
0xa07: PushEmpty(bool, object)
0xa08: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa09: Call2 0x1311

0xa0a: Pop(1)
0xa0b: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa0c: Push((int) 521436)
0xa0d: Push((int) 22615)
0xa0e: Push((int) 22614)
0xa0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa10: Pop(3)
0xa11: PushEmpty(bool)
0xa12: Stack[-1] = (bool) 0
0xa13: PushEmpty(bool, object)
0xa14: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa15: Call2 0x131d

0xa16: Pop(1)
0xa17: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa18: PushEmpty(bool, object)
0xa19: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1a: Call2 0x133f

0xa1b: Pop(1)
0xa1c: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa1d: Stack[-1] = (bool) 1
0xa1e: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa1f: Push((int) 521510)
0xa20: Push((int) 22672)
0xa21: Push((int) 22671)
0xa22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa23: Pop(3)
0xa24: Push((int) 521380)
0xa25: Push((int) -1)
0xa26: Push((int) 22558)
0xa27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa28: Pop(3)
0xa29: Push((int) 530775)
0xa2a: Push((int) -1)
0xa2b: Push((int) 32085)
0xa2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2d: Pop(3)
0xa2e: GOTO 0xa31

0xa2f: Return(); Pop(0)

0xa30: GOTO 0x9d4

0xa31: PushEmpty(bool)
0xa32: Call2 0x11fa

0xa33: Pop(0)
0xa34: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa35: @ lshWaitForAnimEnd()
0xa36: Pop(0)
0xa37: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa38: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa39: GOTO 0xa3f

0xa3a: PushEmpty(string)
0xa3b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa3c: Call2 0x113a

0xa3d: Pop(1)
0xa3e: GOTO 0xa35

0xa3f: GOTO 0xa4e

0xa40: Push("all")
0xa41: Push("idle")
0xa42: @ PlayAnimation(Stack[-2], Stack[-1])
0xa43: Pop(2)
0xa44: @ WaitForAnimEnd()
0xa45: Pop(0)
0xa46: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa47: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa48: GOTO 0xa4e

0xa49: Push("all")
0xa4a: Push("idle")
0xa4b: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4c: Pop(2)
0xa4d: GOTO 0xa44

0xa4e: Return(); Pop(0)

0xa4f: PushEmpty()
0xa50: PushEmpty(bool)
0xa51: Call2 0x11fa

0xa52: Pop(0)
0xa53: Pop(1); Push((bool) Stack[-1] == 0)
0xa54: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa55: Return(); Pop(0)

0xa56: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa57: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa58: Return(); Pop(0)

0xa59: PushEmpty(string, bool)
0xa5a: Stack[-2] = Stack[-3]
0xa5b: Push("")
0xa5c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa5d: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5e: Stack[-1] = (bool) 0
0xa5f: GOTO 0xa61

0xa60: Stack[-1] = (bool) 1
0xa61: Call2 0x114a

0xa62: Pop(2)
0xa63: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa64: Return(); Pop(0)

0xa65: PushEmpty()
0xa66: Push((int) 1)
0xa67: IF (Stack[-1] == 0) GOTO 0xd22; Pop(1)

0xa68: PushEmpty()
0xa69: Call2 0x1168

0xa6a: Pop(0)
0xa6b: Push((int) 22552)
0xa6c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa6d: IF (Stack[-1] == 0) GOTO 0xa73; Pop(1)

0xa6e: PushEmpty(object, object)
0xa6f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa70: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa71: Call2 0x1257

0xa72: Pop(2)
0xa73: Push((int) 22557)
0xa74: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa75: IF (Stack[-1] == 0) GOTO 0xa7b; Pop(1)

0xa76: PushEmpty(object, object)
0xa77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa79: Call2 0x1257

0xa7a: Pop(2)
0xa7b: Push((int) 22616)
0xa7c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7d: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa7e: PushEmpty(object, object)
0xa7f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa80: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa81: Call2 0x1269

0xa82: Pop(2)
0xa83: Push((int) 22671)
0xa84: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa85: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa86: PushEmpty(object, object)
0xa87: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa88: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa89: Call2 0x1273

0xa8a: Pop(2)
0xa8b: Push((int) 22551)
0xa8c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8d: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xa8e: PushEmpty(bool, object)
0xa8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa90: Call2 0x12f9

0xa91: Pop(1)
0xa92: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xa93: PushEmpty(object, object)
0xa94: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa95: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa96: Call2 0x1263

0xa97: Pop(2)
0xa98: PushEmpty(string)
0xa99: Stack[-1] = "Threat"
0xa9a: Call2 0xa4f

0xa9b: Pop(1)
0xa9c: Push((int) 521373)
0xa9d: @@ SetMessage(Stack[-1])
0xa9e: Pop(1)
0xa9f: @@ ClearReplies()
0xaa0: Pop(0)
0xaa1: Push((int) 530766)
0xaa2: Push((int) 32077)
0xaa3: Push((int) 32076)
0xaa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa5: Pop(3)
0xaa6: Push((int) 530781)
0xaa7: Push((int) 32077)
0xaa8: Push((int) 32091)
0xaa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaaa: Pop(3)
0xaab: Return(); Pop(0)

0xaac: PushEmpty(string)
0xaad: Stack[-1] = "Neutral"
0xaae: Call2 0xa4f

0xaaf: Pop(1)
0xab0: Push((int) 521376)
0xab1: @@ SetMessage(Stack[-1])
0xab2: Pop(1)
0xab3: @@ ClearReplies()
0xab4: Pop(0)
0xab5: PushEmpty(bool, object)
0xab6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab7: Call2 0x1305

0xab8: Pop(1)
0xab9: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xaba: Push((int) 521377)
0xabb: Push((int) 22556)
0xabc: Push((int) 22555)
0xabd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabe: Pop(3)
0xabf: PushEmpty(bool, object)
0xac0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac1: Call2 0x1311

0xac2: Pop(1)
0xac3: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac4: Push((int) 521436)
0xac5: Push((int) 22615)
0xac6: Push((int) 22614)
0xac7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac8: Pop(3)
0xac9: PushEmpty(bool)
0xaca: Stack[-1] = (bool) 0
0xacb: PushEmpty(bool, object)
0xacc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xacd: Call2 0x131d

0xace: Pop(1)
0xacf: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad0: PushEmpty(bool, object)
0xad1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad2: Call2 0x133f

0xad3: Pop(1)
0xad4: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad5: Stack[-1] = (bool) 1
0xad6: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xad7: Push((int) 521510)
0xad8: Push((int) 22672)
0xad9: Push((int) 22671)
0xada: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadb: Pop(3)
0xadc: Push((int) 521380)
0xadd: Push((int) -1)
0xade: Push((int) 22558)
0xadf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae0: Pop(3)
0xae1: Push((int) 530775)
0xae2: Push((int) -1)
0xae3: Push((int) 32085)
0xae4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae5: Pop(3)
0xae6: Return(); Pop(0)

0xae7: Push((int) 22672)
0xae8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae9: IF (Stack[-1] == 0) GOTO 0xafe; Pop(1)

0xaea: PushEmpty(string)
0xaeb: Stack[-1] = "Arrogance"
0xaec: Call2 0xa4f

0xaed: Pop(1)
0xaee: Push((int) 521511)
0xaef: @@ SetMessage(Stack[-1])
0xaf0: Pop(1)
0xaf1: @@ ClearReplies()
0xaf2: Pop(0)
0xaf3: Push((int) 521512)
0xaf4: Push((int) 32155)
0xaf5: Push((int) 22673)
0xaf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf7: Pop(3)
0xaf8: Push((int) 530845)
0xaf9: Push((int) 32157)
0xafa: Push((int) 32159)
0xafb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafc: Pop(3)
0xafd: Return(); Pop(0)

0xafe: Push((int) 32155)
0xaff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb00: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xb01: PushEmpty(string)
0xb02: Stack[-1] = "Arrogance"
0xb03: Call2 0xa4f

0xb04: Pop(1)
0xb05: Push((int) 530841)
0xb06: @@ SetMessage(Stack[-1])
0xb07: Pop(1)
0xb08: @@ ClearReplies()
0xb09: Pop(0)
0xb0a: Push((int) 530842)
0xb0b: Push((int) 32157)
0xb0c: Push((int) 32156)
0xb0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0e: Pop(3)
0xb0f: Push((int) 530846)
0xb10: Push((int) 32166)
0xb11: Push((int) 32161)
0xb12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb13: Pop(3)
0xb14: Return(); Pop(0)

0xb15: Push((int) 32157)
0xb16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb17: IF (Stack[-1] == 0) GOTO 0xb2c; Pop(1)

0xb18: PushEmpty(string)
0xb19: Stack[-1] = "Threat"
0xb1a: Call2 0xa4f

0xb1b: Pop(1)
0xb1c: Push((int) 530843)
0xb1d: @@ SetMessage(Stack[-1])
0xb1e: Pop(1)
0xb1f: @@ ClearReplies()
0xb20: Pop(0)
0xb21: Push((int) 530844)
0xb22: Push((int) 32163)
0xb23: Push((int) 32158)
0xb24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb25: Pop(3)
0xb26: Push((int) 530847)
0xb27: Push((int) 32166)
0xb28: Push((int) 32162)
0xb29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2a: Pop(3)
0xb2b: Return(); Pop(0)

0xb2c: Push((int) 32163)
0xb2d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb2e: IF (Stack[-1] == 0) GOTO 0xb43; Pop(1)

0xb2f: PushEmpty(string)
0xb30: Stack[-1] = "Threat"
0xb31: Call2 0xa4f

0xb32: Pop(1)
0xb33: Push((int) 530848)
0xb34: @@ SetMessage(Stack[-1])
0xb35: Pop(1)
0xb36: @@ ClearReplies()
0xb37: Pop(0)
0xb38: Push((int) 530849)
0xb39: Push((int) 32166)
0xb3a: Push((int) 32164)
0xb3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3c: Pop(3)
0xb3d: Push((int) 530850)
0xb3e: Push((int) 32166)
0xb3f: Push((int) 32165)
0xb40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb41: Pop(3)
0xb42: Return(); Pop(0)

0xb43: Push((int) 32166)
0xb44: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb45: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb46: PushEmpty(string)
0xb47: Stack[-1] = "Threat"
0xb48: Call2 0xa4f

0xb49: Pop(1)
0xb4a: Push((int) 530851)
0xb4b: @@ SetMessage(Stack[-1])
0xb4c: Pop(1)
0xb4d: @@ ClearReplies()
0xb4e: Pop(0)
0xb4f: Push((int) 530852)
0xb50: Push((int) -1)
0xb51: Push((int) 32170)
0xb52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb53: Pop(3)
0xb54: Push((int) 530853)
0xb55: Push((int) -1)
0xb56: Push((int) 32171)
0xb57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb58: Pop(3)
0xb59: Return(); Pop(0)

0xb5a: Push((int) 22615)
0xb5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5c: IF (Stack[-1] == 0) GOTO 0xb6c; Pop(1)

0xb5d: PushEmpty(string)
0xb5e: Stack[-1] = "Arrogance"
0xb5f: Call2 0xa4f

0xb60: Pop(1)
0xb61: Push((int) 521437)
0xb62: @@ SetMessage(Stack[-1])
0xb63: Pop(1)
0xb64: @@ ClearReplies()
0xb65: Pop(0)
0xb66: Push((int) 530824)
0xb67: Push((int) 32136)
0xb68: Push((int) 32135)
0xb69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6a: Pop(3)
0xb6b: Return(); Pop(0)

0xb6c: Push((int) 32136)
0xb6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6e: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb6f: PushEmpty(string)
0xb70: Stack[-1] = "Arrogance"
0xb71: Call2 0xa4f

0xb72: Pop(1)
0xb73: Push((int) 530825)
0xb74: @@ SetMessage(Stack[-1])
0xb75: Pop(1)
0xb76: @@ ClearReplies()
0xb77: Pop(0)
0xb78: Push((int) 530826)
0xb79: Push((int) 32141)
0xb7a: Push((int) 32137)
0xb7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7c: Pop(3)
0xb7d: Return(); Pop(0)

0xb7e: Push((int) 32141)
0xb7f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb80: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb81: PushEmpty(string)
0xb82: Stack[-1] = "Confusion"
0xb83: Call2 0xa4f

0xb84: Pop(1)
0xb85: Push((int) 530830)
0xb86: @@ SetMessage(Stack[-1])
0xb87: Pop(1)
0xb88: @@ ClearReplies()
0xb89: Pop(0)
0xb8a: Push((int) 530831)
0xb8b: Push((int) 32143)
0xb8c: Push((int) 32142)
0xb8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8e: Pop(3)
0xb8f: Push((int) 530834)
0xb90: Push((int) 32150)
0xb91: Push((int) 32145)
0xb92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb93: Pop(3)
0xb94: Return(); Pop(0)

0xb95: Push((int) 32150)
0xb96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb97: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xb98: PushEmpty(string)
0xb99: Stack[-1] = "Neutral"
0xb9a: Call2 0xa4f

0xb9b: Pop(1)
0xb9c: Push((int) 530838)
0xb9d: @@ SetMessage(Stack[-1])
0xb9e: Pop(1)
0xb9f: @@ ClearReplies()
0xba0: Pop(0)
0xba1: Push((int) 530839)
0xba2: Push((int) 32143)
0xba3: Push((int) 32151)
0xba4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba5: Pop(3)
0xba6: Return(); Pop(0)

0xba7: Push((int) 32143)
0xba8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbaa: PushEmpty(string)
0xbab: Stack[-1] = "Confusion"
0xbac: Call2 0xa4f

0xbad: Pop(1)
0xbae: Push((int) 530832)
0xbaf: @@ SetMessage(Stack[-1])
0xbb0: Pop(1)
0xbb1: @@ ClearReplies()
0xbb2: Pop(0)
0xbb3: Push((int) 530833)
0xbb4: Push((int) 32138)
0xbb5: Push((int) 32144)
0xbb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb7: Pop(3)
0xbb8: Return(); Pop(0)

0xbb9: Push((int) 32138)
0xbba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbbb: IF (Stack[-1] == 0) GOTO 0xbd0; Pop(1)

0xbbc: PushEmpty(string)
0xbbd: Stack[-1] = "Neutral"
0xbbe: Call2 0xa4f

0xbbf: Pop(1)
0xbc0: Push((int) 530827)
0xbc1: @@ SetMessage(Stack[-1])
0xbc2: Pop(1)
0xbc3: @@ ClearReplies()
0xbc4: Pop(0)
0xbc5: Push((int) 530828)
0xbc6: Push((int) 32140)
0xbc7: Push((int) 32139)
0xbc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc9: Pop(3)
0xbca: Push((int) 530840)
0xbcb: Push((int) 32140)
0xbcc: Push((int) 32153)
0xbcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbce: Pop(3)
0xbcf: Return(); Pop(0)

0xbd0: Push((int) 32140)
0xbd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd2: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbd3: PushEmpty(string)
0xbd4: Stack[-1] = "Neutral"
0xbd5: Call2 0xa4f

0xbd6: Pop(1)
0xbd7: Push((int) 530829)
0xbd8: @@ SetMessage(Stack[-1])
0xbd9: Pop(1)
0xbda: @@ ClearReplies()
0xbdb: Pop(0)
0xbdc: Push((int) 521438)
0xbdd: Push((int) -1)
0xbde: Push((int) 22616)
0xbdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe0: Pop(3)
0xbe1: Return(); Pop(0)

0xbe2: Push((int) 22556)
0xbe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe4: IF (Stack[-1] == 0) GOTO 0xbf4; Pop(1)

0xbe5: PushEmpty(string)
0xbe6: Stack[-1] = "Neutral"
0xbe7: Call2 0xa4f

0xbe8: Pop(1)
0xbe9: Push((int) 521378)
0xbea: @@ SetMessage(Stack[-1])
0xbeb: Pop(1)
0xbec: @@ ClearReplies()
0xbed: Pop(0)
0xbee: Push((int) 530790)
0xbef: Push((int) 32104)
0xbf0: Push((int) 32103)
0xbf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf2: Pop(3)
0xbf3: Return(); Pop(0)

0xbf4: Push((int) 32104)
0xbf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf6: IF (Stack[-1] == 0) GOTO 0xc06; Pop(1)

0xbf7: PushEmpty(string)
0xbf8: Stack[-1] = "Neutral"
0xbf9: Call2 0xa4f

0xbfa: Pop(1)
0xbfb: Push((int) 530791)
0xbfc: @@ SetMessage(Stack[-1])
0xbfd: Pop(1)
0xbfe: @@ ClearReplies()
0xbff: Pop(0)
0xc00: Push((int) 530792)
0xc01: Push((int) 32106)
0xc02: Push((int) 32105)
0xc03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc04: Pop(3)
0xc05: Return(); Pop(0)

0xc06: Push((int) 32106)
0xc07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc08: IF (Stack[-1] == 0) GOTO 0xc18; Pop(1)

0xc09: PushEmpty(string)
0xc0a: Stack[-1] = "Isee"
0xc0b: Call2 0xa4f

0xc0c: Pop(1)
0xc0d: Push((int) 530793)
0xc0e: @@ SetMessage(Stack[-1])
0xc0f: Pop(1)
0xc10: @@ ClearReplies()
0xc11: Pop(0)
0xc12: Push((int) 530794)
0xc13: Push((int) 32108)
0xc14: Push((int) 32107)
0xc15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc16: Pop(3)
0xc17: Return(); Pop(0)

0xc18: Push((int) 32108)
0xc19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1a: IF (Stack[-1] == 0) GOTO 0xc2a; Pop(1)

0xc1b: PushEmpty(string)
0xc1c: Stack[-1] = "Neutral"
0xc1d: Call2 0xa4f

0xc1e: Pop(1)
0xc1f: Push((int) 530795)
0xc20: @@ SetMessage(Stack[-1])
0xc21: Pop(1)
0xc22: @@ ClearReplies()
0xc23: Pop(0)
0xc24: Push((int) 521379)
0xc25: Push((int) -1)
0xc26: Push((int) 22557)
0xc27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc28: Pop(3)
0xc29: Return(); Pop(0)

0xc2a: Push((int) 32077)
0xc2b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2c: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc2d: PushEmpty(string)
0xc2e: Stack[-1] = "Threat"
0xc2f: Call2 0xa4f

0xc30: Pop(1)
0xc31: Push((int) 530767)
0xc32: @@ SetMessage(Stack[-1])
0xc33: Pop(1)
0xc34: @@ ClearReplies()
0xc35: Pop(0)
0xc36: Push((int) 530768)
0xc37: Push((int) 32079)
0xc38: Push((int) 32078)
0xc39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3a: Pop(3)
0xc3b: Push((int) 530787)
0xc3c: Push((int) 32100)
0xc3d: Push((int) 32099)
0xc3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3f: Pop(3)
0xc40: Return(); Pop(0)

0xc41: Push((int) 32100)
0xc42: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc43: IF (Stack[-1] == 0) GOTO 0xc53; Pop(1)

0xc44: PushEmpty(string)
0xc45: Stack[-1] = "Neutral"
0xc46: Call2 0xa4f

0xc47: Pop(1)
0xc48: Push((int) 530788)
0xc49: @@ SetMessage(Stack[-1])
0xc4a: Pop(1)
0xc4b: @@ ClearReplies()
0xc4c: Pop(0)
0xc4d: Push((int) 530789)
0xc4e: Push((int) 32079)
0xc4f: Push((int) 32101)
0xc50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc51: Pop(3)
0xc52: Return(); Pop(0)

0xc53: Push((int) 32079)
0xc54: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc55: IF (Stack[-1] == 0) GOTO 0xc65; Pop(1)

0xc56: PushEmpty(string)
0xc57: Stack[-1] = "Neutral"
0xc58: Call2 0xa4f

0xc59: Pop(1)
0xc5a: Push((int) 530769)
0xc5b: @@ SetMessage(Stack[-1])
0xc5c: Pop(1)
0xc5d: @@ ClearReplies()
0xc5e: Pop(0)
0xc5f: Push((int) 530770)
0xc60: Push((int) 32081)
0xc61: Push((int) 32080)
0xc62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc63: Pop(3)
0xc64: Return(); Pop(0)

0xc65: Push((int) 32081)
0xc66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc67: IF (Stack[-1] == 0) GOTO 0xc77; Pop(1)

0xc68: PushEmpty(string)
0xc69: Stack[-1] = "Neutral"
0xc6a: Call2 0xa4f

0xc6b: Pop(1)
0xc6c: Push((int) 530771)
0xc6d: @@ SetMessage(Stack[-1])
0xc6e: Pop(1)
0xc6f: @@ ClearReplies()
0xc70: Pop(0)
0xc71: Push((int) 530772)
0xc72: Push((int) 32083)
0xc73: Push((int) 32082)
0xc74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc75: Pop(3)
0xc76: Return(); Pop(0)

0xc77: Push((int) 32083)
0xc78: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc79: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc7a: PushEmpty(string)
0xc7b: Stack[-1] = "Confusion"
0xc7c: Call2 0xa4f

0xc7d: Pop(1)
0xc7e: Push((int) 530773)
0xc7f: @@ SetMessage(Stack[-1])
0xc80: Pop(1)
0xc81: @@ ClearReplies()
0xc82: Pop(0)
0xc83: Push((int) 530774)
0xc84: Push((int) 32086)
0xc85: Push((int) 32084)
0xc86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc87: Pop(3)
0xc88: Push((int) 530782)
0xc89: Push((int) 32086)
0xc8a: Push((int) 32093)
0xc8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8c: Pop(3)
0xc8d: Return(); Pop(0)

0xc8e: Push((int) 32086)
0xc8f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc90: IF (Stack[-1] == 0) GOTO 0xca0; Pop(1)

0xc91: PushEmpty(string)
0xc92: Stack[-1] = "Confusion"
0xc93: Call2 0xa4f

0xc94: Pop(1)
0xc95: Push((int) 530776)
0xc96: @@ SetMessage(Stack[-1])
0xc97: Pop(1)
0xc98: @@ ClearReplies()
0xc99: Pop(0)
0xc9a: Push((int) 530777)
0xc9b: Push((int) 32088)
0xc9c: Push((int) 32087)
0xc9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9e: Pop(3)
0xc9f: Return(); Pop(0)

0xca0: Push((int) 32088)
0xca1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca2: IF (Stack[-1] == 0) GOTO 0xcb2; Pop(1)

0xca3: PushEmpty(string)
0xca4: Stack[-1] = "Isee"
0xca5: Call2 0xa4f

0xca6: Pop(1)
0xca7: Push((int) 530778)
0xca8: @@ SetMessage(Stack[-1])
0xca9: Pop(1)
0xcaa: @@ ClearReplies()
0xcab: Pop(0)
0xcac: Push((int) 530779)
0xcad: Push((int) 32090)
0xcae: Push((int) 32089)
0xcaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb0: Pop(3)
0xcb1: Return(); Pop(0)

0xcb2: Push((int) 32090)
0xcb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb4: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcb5: PushEmpty(string)
0xcb6: Stack[-1] = "Isee"
0xcb7: Call2 0xa4f

0xcb8: Pop(1)
0xcb9: Push((int) 530780)
0xcba: @@ SetMessage(Stack[-1])
0xcbb: Pop(1)
0xcbc: @@ ClearReplies()
0xcbd: Pop(0)
0xcbe: Push((int) 530783)
0xcbf: Push((int) 32096)
0xcc0: Push((int) 32095)
0xcc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc2: Pop(3)
0xcc3: Return(); Pop(0)

0xcc4: Push((int) 32096)
0xcc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc6: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcc7: PushEmpty(string)
0xcc8: Stack[-1] = "Isee"
0xcc9: Call2 0xa4f

0xcca: Pop(1)
0xccb: Push((int) 530784)
0xccc: @@ SetMessage(Stack[-1])
0xccd: Pop(1)
0xcce: @@ ClearReplies()
0xccf: Pop(0)
0xcd0: Push((int) 530796)
0xcd1: Push((int) 32110)
0xcd2: Push((int) 32109)
0xcd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd4: Pop(3)
0xcd5: Push((int) 521375)
0xcd6: Push((int) 32113)
0xcd7: Push((int) 22553)
0xcd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd9: Pop(3)
0xcda: Return(); Pop(0)

0xcdb: Push((int) 32113)
0xcdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcdd: IF (Stack[-1] == 0) GOTO 0xcf2; Pop(1)

0xcde: PushEmpty(string)
0xcdf: Stack[-1] = "Confusion"
0xce0: Call2 0xa4f

0xce1: Pop(1)
0xce2: Push((int) 530800)
0xce3: @@ SetMessage(Stack[-1])
0xce4: Pop(1)
0xce5: @@ ClearReplies()
0xce6: Pop(0)
0xce7: Push((int) 530801)
0xce8: Push((int) -1)
0xce9: Push((int) 32114)
0xcea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xceb: Pop(3)
0xcec: Push((int) 530802)
0xced: Push((int) -1)
0xcee: Push((int) 32115)
0xcef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf0: Pop(3)
0xcf1: Return(); Pop(0)

0xcf2: Push((int) 32110)
0xcf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf4: IF (Stack[-1] == 0) GOTO 0xd04; Pop(1)

0xcf5: PushEmpty(string)
0xcf6: Stack[-1] = "Threat"
0xcf7: Call2 0xa4f

0xcf8: Pop(1)
0xcf9: Push((int) 530797)
0xcfa: @@ SetMessage(Stack[-1])
0xcfb: Pop(1)
0xcfc: @@ ClearReplies()
0xcfd: Pop(0)
0xcfe: Push((int) 530798)
0xcff: Push((int) 32112)
0xd00: Push((int) 32111)
0xd01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd02: Pop(3)
0xd03: Return(); Pop(0)

0xd04: Push((int) 32112)
0xd05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd06: IF (Stack[-1] == 0) GOTO 0xd16; Pop(1)

0xd07: PushEmpty(string)
0xd08: Stack[-1] = "Threat"
0xd09: Call2 0xa4f

0xd0a: Pop(1)
0xd0b: Push((int) 530799)
0xd0c: @@ SetMessage(Stack[-1])
0xd0d: Pop(1)
0xd0e: @@ ClearReplies()
0xd0f: Pop(0)
0xd10: Push((int) 521374)
0xd11: Push((int) -1)
0xd12: Push((int) 22552)
0xd13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd14: Pop(3)
0xd15: Return(); Pop(0)

0xd16: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd17: PushEmpty(bool)
0xd18: Call2 0x11fa

0xd19: Pop(0)
0xd1a: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd1b: @ lshStopAnimation()
0xd1c: Pop(0)
0xd1d: GOTO 0xd20

0xd1e: @ StopAnimation()
0xd1f: Pop(0)
0xd20: Return(); Pop(0)

0xd21: GOTO 0xa66

0xd22: Return(); Pop(0)

0xd23: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd24: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd25: PushEmpty(bool, object, float)
0xd26: Stack[-2] = Stack[-12]
0xd27: Stack[-1] = (float) 70.0
0xd28: Call2 0x105b

0xd29: Pop(2)
0xd2a: Pop(1); Push((bool) Stack[-1] == 0)
0xd2b: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd2c: Stack[-10] = (int) -2
0xd2d: Return(); Pop(8)

0xd2e: @ CreateDialog(Stack[-4])
0xd2f: Pop(0)
0xd30: PushEmpty(int)
0xd31: Call2 0x11f4

0xd32: Pop(0)
0xd33: @@ SetNPCName(Stack[-1])
0xd34: Pop(1)
0xd35: PushEmpty(int)
0xd36: Call2 0x11f2

0xd37: Pop(0)
0xd38: @@ SetNPCDescription(Stack[-1])
0xd39: Pop(1)
0xd3a: PushEmpty(string)
0xd3b: Call2 0x11f6

0xd3c: Pop(0)
0xd3d: @@ SetPhoto(Stack[-1])
0xd3e: Pop(1)
0xd3f: PushEmpty(string)
0xd40: Call2 0x11f8

0xd41: Pop(0)
0xd42: @@ SetPhoto2(Stack[-1])
0xd43: Pop(1)
0xd44: PushEmpty(int)
0xd45: Call2 0x148a

0xd46: Pop(0)
0xd47: @@ SetPlayerName(Stack[-1])
0xd48: Pop(1)
0xd49: Stack[-2] = (int) -1
0xd4a: @ IsOverrideActive(Stack[-3])
0xd4b: Pop(0)
0xd4c: Push(Stack[-3])
0xd4d: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd4e: Stack[-10] = (int) -2
0xd4f: Return(); Pop(8)

0xd50: @ DoDialog(Stack[-4])
0xd51: Pop(0)
0xd52: PushEmpty(bool, object)
0xd53: PushEmpty(object)
0xd54: Call2 0x116f

0xd55: Stack[-2] = Stack[-1]
0xd56: Pop(1)
0xd57: Call2 0x10b0

0xd58: Pop(2)
0xd59: PushEmpty(object, object)
0xd5a: Stack[-2] = Stack[-11]
0xd5b: Stack[-1] = Stack[-6]
0xd5c: Push(-2, 4); TaskCall(13)
0xd5d: Call2 0xd74

0xd5e: Pop(-2, 4); TaskReturn
0xd5f: Pop(2)
0xd60: @@ IsDialogEnd(Stack[-1])
0xd61: Pop(0)
0xd62: Pop(0); Push((bool) Stack[-1] == 0)
0xd63: IF (Stack[-1] == 0) GOTO 0xd69; Pop(1)

0xd64: @ sync()
0xd65: Pop(0)
0xd66: @@ IsDialogEnd(Stack[-1])
0xd67: Pop(0)
0xd68: GOTO 0xd62

0xd69: PushEmpty(object)
0xd6a: Stack[-1] = Stack[-10]
0xd6b: Call2 0x109f

0xd6c: Pop(1)
0xd6d: @ StopDialog(Stack[-4])
0xd6e: Pop(0)
0xd6f: @@ GetReturnValue(Stack[-2])
0xd70: Pop(0)
0xd71: Stack[-10] = Stack[-2]
0xd72: Return(); Pop(8)

0xd73: Stack[-4] = 0
0xd74: PushEmpty()
0xd75: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd76: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd77: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd78: Push((int) 1)
0xd79: IF (Stack[-1] == 0) GOTO 0xdae; Pop(1)

0xd7a: PushEmpty(bool, object)
0xd7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7c: Call2 0x1357

0xd7d: Pop(1)
0xd7e: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd7f: PushEmpty(object, object)
0xd80: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd81: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd82: Call2 0x1279

0xd83: Pop(2)
0xd84: PushEmpty(string)
0xd85: Stack[-1] = "Neutral"
0xd86: Call2 0xdcc

0xd87: Pop(1)
0xd88: Push((int) 522067)
0xd89: @@ SetMessage(Stack[-1])
0xd8a: Pop(1)
0xd8b: @@ ClearReplies()
0xd8c: Pop(0)
0xd8d: Push((int) 523208)
0xd8e: Push((int) 24405)
0xd8f: Push((int) 24404)
0xd90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd91: Pop(3)
0xd92: Push((int) 523226)
0xd93: Push((int) 24424)
0xd94: Push((int) 24423)
0xd95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd96: Pop(3)
0xd97: Push((int) 523222)
0xd98: Push((int) -1)
0xd99: Push((int) 24418)
0xd9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9b: Pop(3)
0xd9c: GOTO 0xdae

0xd9d: PushEmpty(string)
0xd9e: Stack[-1] = "Neutral"
0xd9f: Call2 0xdcc

0xda0: Pop(1)
0xda1: Push((int) 522071)
0xda2: @@ SetMessage(Stack[-1])
0xda3: Pop(1)
0xda4: @@ ClearReplies()
0xda5: Pop(0)
0xda6: Push((int) 522072)
0xda7: Push((int) -1)
0xda8: Push((int) 23241)
0xda9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdaa: Pop(3)
0xdab: GOTO 0xdae

0xdac: Return(); Pop(0)

0xdad: GOTO 0xd78

0xdae: PushEmpty(bool)
0xdaf: Call2 0x11fa

0xdb0: Pop(0)
0xdb1: IF (Stack[-1] == 0) GOTO 0xdbd; Pop(1)

0xdb2: @ lshWaitForAnimEnd()
0xdb3: Pop(0)
0xdb4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdb5: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb6: GOTO 0xdbc

0xdb7: PushEmpty(string)
0xdb8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdb9: Call2 0x113a

0xdba: Pop(1)
0xdbb: GOTO 0xdb2

0xdbc: GOTO 0xdcb

0xdbd: Push("all")
0xdbe: Push("idle")
0xdbf: @ PlayAnimation(Stack[-2], Stack[-1])
0xdc0: Pop(2)
0xdc1: @ WaitForAnimEnd()
0xdc2: Pop(0)
0xdc3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdc4: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdc5: GOTO 0xdcb

0xdc6: Push("all")
0xdc7: Push("idle")
0xdc8: @ PlayAnimation(Stack[-2], Stack[-1])
0xdc9: Pop(2)
0xdca: GOTO 0xdc1

0xdcb: Return(); Pop(0)

0xdcc: PushEmpty()
0xdcd: PushEmpty(bool)
0xdce: Call2 0x11fa

0xdcf: Pop(0)
0xdd0: Pop(1); Push((bool) Stack[-1] == 0)
0xdd1: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdd2: Return(); Pop(0)

0xdd3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdd4: IF (Stack[-1] == 0) GOTO 0xdd6; Pop(1)

0xdd5: Return(); Pop(0)

0xdd6: PushEmpty(string, bool)
0xdd7: Stack[-2] = Stack[-3]
0xdd8: Push("")
0xdd9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdda: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xddb: Stack[-1] = (bool) 0
0xddc: GOTO 0xdde

0xddd: Stack[-1] = (bool) 1
0xdde: Call2 0x114a

0xddf: Pop(2)
0xde0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde1: Return(); Pop(0)

0xde2: PushEmpty()
0xde3: Push((int) 1)
0xde4: IF (Stack[-1] == 0) GOTO 0xf3a; Pop(1)

0xde5: PushEmpty()
0xde6: Call2 0x1168

0xde7: Pop(0)
0xde8: Push((int) 23236)
0xde9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdea: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xdeb: PushEmpty(bool, object)
0xdec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xded: Call2 0x1357

0xdee: Pop(1)
0xdef: IF (Stack[-1] == 0) GOTO 0xe0e; Pop(1)

0xdf0: PushEmpty(object, object)
0xdf1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf3: Call2 0x1279

0xdf4: Pop(2)
0xdf5: PushEmpty(string)
0xdf6: Stack[-1] = "Neutral"
0xdf7: Call2 0xdcc

0xdf8: Pop(1)
0xdf9: Push((int) 522067)
0xdfa: @@ SetMessage(Stack[-1])
0xdfb: Pop(1)
0xdfc: @@ ClearReplies()
0xdfd: Pop(0)
0xdfe: Push((int) 523208)
0xdff: Push((int) 24405)
0xe00: Push((int) 24404)
0xe01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe02: Pop(3)
0xe03: Push((int) 523226)
0xe04: Push((int) 24424)
0xe05: Push((int) 24423)
0xe06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe07: Pop(3)
0xe08: Push((int) 523222)
0xe09: Push((int) -1)
0xe0a: Push((int) 24418)
0xe0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0c: Pop(3)
0xe0d: Return(); Pop(0)

0xe0e: PushEmpty(string)
0xe0f: Stack[-1] = "Neutral"
0xe10: Call2 0xdcc

0xe11: Pop(1)
0xe12: Push((int) 522071)
0xe13: @@ SetMessage(Stack[-1])
0xe14: Pop(1)
0xe15: @@ ClearReplies()
0xe16: Pop(0)
0xe17: Push((int) 522072)
0xe18: Push((int) -1)
0xe19: Push((int) 23241)
0xe1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1b: Pop(3)
0xe1c: Return(); Pop(0)

0xe1d: Push((int) 24425)
0xe1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1f: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe20: Push((int) 24428)
0xe21: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe22: IF (Stack[-1] == 0) GOTO 0xe32; Pop(1)

0xe23: PushEmpty(string)
0xe24: Stack[-1] = "Confusion"
0xe25: Call2 0xdcc

0xe26: Pop(1)
0xe27: Push((int) 523231)
0xe28: @@ SetMessage(Stack[-1])
0xe29: Pop(1)
0xe2a: @@ ClearReplies()
0xe2b: Pop(0)
0xe2c: Push((int) 523232)
0xe2d: Push((int) -1)
0xe2e: Push((int) 24429)
0xe2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe30: Pop(3)
0xe31: Return(); Pop(0)

0xe32: Push((int) 24424)
0xe33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe34: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe35: PushEmpty(string)
0xe36: Stack[-1] = "Arrogance"
0xe37: Call2 0xdcc

0xe38: Pop(1)
0xe39: Push((int) 523227)
0xe3a: @@ SetMessage(Stack[-1])
0xe3b: Pop(1)
0xe3c: @@ ClearReplies()
0xe3d: Pop(0)
0xe3e: Push((int) 523235)
0xe3f: Push((int) 24411)
0xe40: Push((int) 24433)
0xe41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe42: Pop(3)
0xe43: Push((int) 523236)
0xe44: Push((int) -1)
0xe45: Push((int) 24434)
0xe46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe47: Pop(3)
0xe48: Return(); Pop(0)

0xe49: Push((int) 24405)
0xe4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4b: IF (Stack[-1] == 0) GOTO 0xe60; Pop(1)

0xe4c: PushEmpty(string)
0xe4d: Stack[-1] = "Confusion"
0xe4e: Call2 0xdcc

0xe4f: Pop(1)
0xe50: Push((int) 523209)
0xe51: @@ SetMessage(Stack[-1])
0xe52: Pop(1)
0xe53: @@ ClearReplies()
0xe54: Pop(0)
0xe55: Push((int) 523210)
0xe56: Push((int) 24409)
0xe57: Push((int) 24406)
0xe58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe59: Pop(3)
0xe5a: Push((int) 523214)
0xe5b: Push((int) 24411)
0xe5c: Push((int) 24410)
0xe5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5e: Pop(3)
0xe5f: Return(); Pop(0)

0xe60: Push((int) 24411)
0xe61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe62: IF (Stack[-1] == 0) GOTO 0xe77; Pop(1)

0xe63: PushEmpty(string)
0xe64: Stack[-1] = "Threat"
0xe65: Call2 0xdcc

0xe66: Pop(1)
0xe67: Push((int) 523215)
0xe68: @@ SetMessage(Stack[-1])
0xe69: Pop(1)
0xe6a: @@ ClearReplies()
0xe6b: Pop(0)
0xe6c: Push((int) 523216)
0xe6d: Push((int) 24413)
0xe6e: Push((int) 24412)
0xe6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe70: Pop(3)
0xe71: Push((int) 523237)
0xe72: Push((int) 24437)
0xe73: Push((int) 24436)
0xe74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe75: Pop(3)
0xe76: Return(); Pop(0)

0xe77: Push((int) 24437)
0xe78: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe79: IF (Stack[-1] == 0) GOTO 0xe89; Pop(1)

0xe7a: PushEmpty(string)
0xe7b: Stack[-1] = "Confusion"
0xe7c: Call2 0xdcc

0xe7d: Pop(1)
0xe7e: Push((int) 523238)
0xe7f: @@ SetMessage(Stack[-1])
0xe80: Pop(1)
0xe81: @@ ClearReplies()
0xe82: Pop(0)
0xe83: Push((int) 523239)
0xe84: Push((int) 24439)
0xe85: Push((int) 24438)
0xe86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe87: Pop(3)
0xe88: Return(); Pop(0)

0xe89: Push((int) 24439)
0xe8a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8b: IF (Stack[-1] == 0) GOTO 0xe9b; Pop(1)

0xe8c: PushEmpty(string)
0xe8d: Stack[-1] = "Isee"
0xe8e: Call2 0xdcc

0xe8f: Pop(1)
0xe90: Push((int) 523240)
0xe91: @@ SetMessage(Stack[-1])
0xe92: Pop(1)
0xe93: @@ ClearReplies()
0xe94: Pop(0)
0xe95: Push((int) 523241)
0xe96: Push((int) 24417)
0xe97: Push((int) 24440)
0xe98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe99: Pop(3)
0xe9a: Return(); Pop(0)

0xe9b: Push((int) 24413)
0xe9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9d: IF (Stack[-1] == 0) GOTO 0xead; Pop(1)

0xe9e: PushEmpty(string)
0xe9f: Stack[-1] = "Arrogance"
0xea0: Call2 0xdcc

0xea1: Pop(1)
0xea2: Push((int) 523217)
0xea3: @@ SetMessage(Stack[-1])
0xea4: Pop(1)
0xea5: @@ ClearReplies()
0xea6: Pop(0)
0xea7: Push((int) 523218)
0xea8: Push((int) 24415)
0xea9: Push((int) 24414)
0xeaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeab: Pop(3)
0xeac: Return(); Pop(0)

0xead: Push((int) 24415)
0xeae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeaf: IF (Stack[-1] == 0) GOTO 0xebf; Pop(1)

0xeb0: PushEmpty(string)
0xeb1: Stack[-1] = "Arrogance"
0xeb2: Call2 0xdcc

0xeb3: Pop(1)
0xeb4: Push((int) 523219)
0xeb5: @@ SetMessage(Stack[-1])
0xeb6: Pop(1)
0xeb7: @@ ClearReplies()
0xeb8: Pop(0)
0xeb9: Push((int) 522068)
0xeba: Push((int) 23238)
0xebb: Push((int) 23237)
0xebc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xebd: Pop(3)
0xebe: Return(); Pop(0)

0xebf: Push((int) 23238)
0xec0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec1: IF (Stack[-1] == 0) GOTO 0xee1; Pop(1)

0xec2: PushEmpty(string)
0xec3: Stack[-1] = "Confusion"
0xec4: Call2 0xdcc

0xec5: Pop(1)
0xec6: Push((int) 522069)
0xec7: @@ SetMessage(Stack[-1])
0xec8: Pop(1)
0xec9: @@ ClearReplies()
0xeca: Pop(0)
0xecb: PushEmpty(bool, object)
0xecc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xecd: Call2 0x134b

0xece: Pop(1)
0xecf: IF (Stack[-1] == 0) GOTO 0xed5; Pop(1)

0xed0: Push((int) 522073)
0xed1: Push((int) 23243)
0xed2: Push((int) 23242)
0xed3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed4: Pop(3)
0xed5: PushEmpty(bool, object)
0xed6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed7: Call2 0x134b

0xed8: Pop(1)
0xed9: Pop(1); Push((bool) Stack[-1] == 0)
0xeda: IF (Stack[-1] == 0) GOTO 0xee0; Pop(1)

0xedb: Push((int) 522070)
0xedc: Push((int) -1)
0xedd: Push((int) 23239)
0xede: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xedf: Pop(3)
0xee0: Return(); Pop(0)

0xee1: Push((int) 23243)
0xee2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee3: IF (Stack[-1] == 0) GOTO 0xef8; Pop(1)

0xee4: PushEmpty(string)
0xee5: Stack[-1] = "Threat"
0xee6: Call2 0xdcc

0xee7: Pop(1)
0xee8: Push((int) 522074)
0xee9: @@ SetMessage(Stack[-1])
0xeea: Pop(1)
0xeeb: @@ ClearReplies()
0xeec: Pop(0)
0xeed: Push((int) 522075)
0xeee: Push((int) 24408)
0xeef: Push((int) 23244)
0xef0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef1: Pop(3)
0xef2: Push((int) 523211)
0xef3: Push((int) -1)
0xef4: Push((int) 24407)
0xef5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef6: Pop(3)
0xef7: Return(); Pop(0)

0xef8: Push((int) 24408)
0xef9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xefa: IF (Stack[-1] == 0) GOTO 0xf0a; Pop(1)

0xefb: PushEmpty(string)
0xefc: Stack[-1] = "Confusion"
0xefd: Call2 0xdcc

0xefe: Pop(1)
0xeff: Push((int) 523212)
0xf00: @@ SetMessage(Stack[-1])
0xf01: Pop(1)
0xf02: @@ ClearReplies()
0xf03: Pop(0)
0xf04: Push((int) 523234)
0xf05: Push((int) -1)
0xf06: Push((int) 24432)
0xf07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf08: Pop(3)
0xf09: Return(); Pop(0)

0xf0a: Push((int) 24409)
0xf0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0c: IF (Stack[-1] == 0) GOTO 0xf1c; Pop(1)

0xf0d: PushEmpty(string)
0xf0e: Stack[-1] = "Confusion"
0xf0f: Call2 0xdcc

0xf10: Pop(1)
0xf11: Push((int) 523213)
0xf12: @@ SetMessage(Stack[-1])
0xf13: Pop(1)
0xf14: @@ ClearReplies()
0xf15: Pop(0)
0xf16: Push((int) 523220)
0xf17: Push((int) 24417)
0xf18: Push((int) 24416)
0xf19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1a: Pop(3)
0xf1b: Return(); Pop(0)

0xf1c: Push((int) 24417)
0xf1d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1e: IF (Stack[-1] == 0) GOTO 0xf2e; Pop(1)

0xf1f: PushEmpty(string)
0xf20: Stack[-1] = "Threat"
0xf21: Call2 0xdcc

0xf22: Pop(1)
0xf23: Push((int) 523221)
0xf24: @@ SetMessage(Stack[-1])
0xf25: Pop(1)
0xf26: @@ ClearReplies()
0xf27: Pop(0)
0xf28: Push((int) 523233)
0xf29: Push((int) 23238)
0xf2a: Push((int) 24430)
0xf2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2c: Pop(3)
0xf2d: Return(); Pop(0)

0xf2e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf2f: PushEmpty(bool)
0xf30: Call2 0x11fa

0xf31: Pop(0)
0xf32: IF (Stack[-1] == 0) GOTO 0xf36; Pop(1)

0xf33: @ lshStopAnimation()
0xf34: Pop(0)
0xf35: GOTO 0xf38

0xf36: @ StopAnimation()
0xf37: Pop(0)
0xf38: Return(); Pop(0)

0xf39: GOTO 0xde3

0xf3a: Return(); Pop(0)

0xf3b: PushEmpty()
0xf3c: Call2 0xf3f

0xf3d: Pop(0)
0xf3e: Return(); Pop(0)

0xf3f: PushEmpty(bool)
0xf40: Call2 0x1056

0xf41: Pop(0)
0xf42: Pop(1); Push((bool) Stack[-1] == 0)
0xf43: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf44: @ Hold()
0xf45: Pop(0)
0xf46: @ GetDirection(Stack[-0])
0xf47: Pop(0)
0xf48: PushEmpty()
0xf49: Call2 0xfef

0xf4a: Pop(0)
0xf4b: GOTO 0xf48

0xf4c: Return(); Pop(0)

0xf4d: PushEmpty(object, object)
0xf4e: Push("player")
0xf4f: @ FindActor(Stack[-2], Stack[-1])
0xf50: Pop(1)
0xf51: Pop(0); Push((bool) Stack[-1] == 0)
0xf52: IF (Stack[-1] == 0) GOTO 0xf55; Pop(1)

0xf53: Stack[-3] = (bool) 0
0xf54: Return(); Pop(2)

0xf55: PushEmpty(bool, object)
0xf56: Stack[-1] = Stack[-3]
0xf57: Call2 0x104d

0xf58: Stack[-5] = Stack[-2]
0xf59: Pop(2)
0xf5a: Return(); Pop(2)

0xf5b: Stack[-1] = 0
0xf5c: Push(CvectorIndex(Stack[-0], 0))
0xf5d: Push(CvectorIndex(Stack[-0], 2))
0xf5e: @ RotateAsync(Stack[-2], Stack[-1])
0xf5f: Pop(2)
0xf60: Return(); Pop(0)

0xf61: PushEmpty(object, bool, object, bool)
0xf62: Push("player")
0xf63: @ FindActor(Stack[-3], Stack[-1])
0xf64: Pop(1)
0xf65: Pop(0); Push((bool) Stack[-2] == 0)
0xf66: IF (Stack[-1] == 0) GOTO 0xf69; Pop(1)

0xf67: Stack[-5] = (bool) 0
0xf68: Return(); Pop(4)

0xf69: PushEmpty(float, object)
0xf6a: Stack[-1] = Stack[-4]
0xf6b: Call2 0x103b

0xf6c: Pop(1)
0xf6d: Push((float)90000.0)
0xf6e: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xf6f: IF (Stack[-1] == 0) GOTO 0xf72; Pop(1)

0xf70: Stack[-5] = (bool) 0
0xf71: Return(); Pop(4)

0xf72: @ CanSee(Stack[-1], Stack[-2])
0xf73: Pop(0)
0xf74: Stack[-5] = Stack[-1]
0xf75: Return(); Pop(4)

0xf76: Stack[-2] = 0
0xf77: PushEmpty(float, float)
0xf78: Push((int) 8)
0xf79: Push((int) 16)
0xf7a: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xf7b: Pop(2)
0xf7c: Push((int) 10)
0xf7d: @ SetTimer(Stack[-1], Stack[-2])
0xf7e: Pop(1)
0xf7f: Return(); Pop(2)

0xf80: Push((int) 10)
0xf81: @ KillTimer(Stack[-1])
0xf82: Pop(1)
0xf83: Return(); Pop(0)

0xf84: PushEmpty()
0xf85: Push((int) 10)
0xf86: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf87: IF (Stack[-1] == 0) GOTO 0xfa9; Pop(1)

0xf88: PushEmpty()
0xf89: Call2 0xf80

0xf8a: Pop(0)
0xf8b: PushEmpty(bool)
0xf8c: Stack[-1] = (bool) 0
0xf8d: PushEmpty(bool)
0xf8e: Call2 0x1056

0xf8f: Pop(0)
0xf90: IF (Stack[-1] == 0) GOTO 0xf96; Pop(1)

0xf91: PushEmpty(bool)
0xf92: Call2 0xf61

0xf93: Pop(0)
0xf94: IF (Stack[-1] == 0) GOTO 0xf96; Pop(1)

0xf95: Stack[-1] = (bool) 1
0xf96: IF (Stack[-1] == 0) GOTO 0xfa3; Pop(1)

0xf97: PushEmpty(bool)
0xf98: Call2 0xf4d

0xf99: Pop(0)
0xf9a: IF (Stack[-1] == 0) GOTO 0xfa2; Pop(1)

0xf9b: PushEmpty(bool, object)
0xf9c: PushEmpty(object)
0xf9d: Call2 0x116f

0xf9e: Stack[-2] = Stack[-1]
0xf9f: Pop(1)
0xfa0: Call2 0x10ea

0xfa1: Pop(2)
0xfa2: GOTO 0xfa9

0xfa3: PushEmpty()
0xfa4: Call2 0xf5c

0xfa5: Pop(0)
0xfa6: PushEmpty()
0xfa7: Call2 0xf77

0xfa8: Pop(0)
0xfa9: Return(); Pop(0)

0xfaa: PushEmpty()
0xfab: Call2 0x1036

0xfac: Pop(0)
0xfad: PushEmpty()
0xfae: Call2 0xf80

0xfaf: Pop(0)
0xfb0: @ lshStopSpeech()
0xfb1: Pop(0)
0xfb2: @ lshStopAnimation()
0xfb3: Pop(0)
0xfb4: @ StopAsync()
0xfb5: Pop(0)
0xfb6: @ Hold()
0xfb7: Pop(0)
0xfb8: Return(); Pop(0)

0xfb9: @ StopGroup0()
0xfba: Pop(0)
0xfbb: PushEmpty()
0xfbc: Call2 0xf80

0xfbd: Pop(0)
0xfbe: PushEmpty(string)
0xfbf: Stack[-1] = "Neutral"
0xfc0: Call2 0x113a

0xfc1: Pop(1)
0xfc2: PushEmpty()
0xfc3: Call2 0xf77

0xfc4: Pop(0)
0xfc5: Return(); Pop(0)

0xfc6: PushEmpty()
0xfc7: Push(Stack[-1])
0xfc8: IF (Stack[-1] == 0) GOTO 0xfcd; Pop(1)

0xfc9: PushEmpty()
0xfca: Call2 0xf77

0xfcb: Pop(0)
0xfcc: GOTO 0xfd1

0xfcd: PushEmpty(string)
0xfce: Stack[-1] = "Neutral"
0xfcf: Call2 0x113a

0xfd0: Pop(1)
0xfd1: Return(); Pop(0)

0xfd2: PushEmpty(bool, bool)
0xfd3: @ IsOverrideActive(Stack[-1])
0xfd4: Pop(0)
0xfd5: Pop(0); Push((bool) Stack[-1] == 0)
0xfd6: IF (Stack[-1] == 0) GOTO 0xfee; Pop(1)

0xfd7: EventDisable(0)
0xfd8: PushEmpty()
0xfd9: Call2 0x1036

0xfda: Pop(0)
0xfdb: PushEmpty(bool, object)
0xfdc: Stack[-1] = Stack[-5]
0xfdd: Call2 0x104d

0xfde: Pop(2)
0xfdf: EventEnable(0)
0xfe0: PushEmpty(object)
0xfe1: Stack[-1] = Stack[-4]
0xfe2: Call2 0x149b

0xfe3: Pop(1)
0xfe4: PushEmpty(string)
0xfe5: Stack[-1] = "Neutral"
0xfe6: Call2 0x113a

0xfe7: Pop(1)
0xfe8: PushEmpty()
0xfe9: Call2 0xf80

0xfea: Pop(0)
0xfeb: PushEmpty()
0xfec: Call2 0xf77

0xfed: Pop(0)
0xfee: Return(); Pop(2)

0xfef: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xff0: @ WaitForAnimEnd()
0xff1: Pop(0)
0xff2: PushEmpty(bool)
0xff3: Call2 0x1056

0xff4: Pop(0)
0xff5: Pop(1); Push((bool) Stack[-1] == 0)
0xff6: IF (Stack[-1] == 0) GOTO 0xff8; Pop(1)

0xff7: Return(); Pop(12)

0xff8: PushEmpty(int)
0xff9: Call2 0x11e1

0xffa: Stack[-7] = Stack[-1]
0xffb: Pop(1)
0xffc: Stack[-5] = (int) 0
0xffd: PushEmpty(bool)
0xffe: Stack[-1] = (bool) 0
0xfff: Push((int) 5)
0x1000: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1001: IF (Stack[-1] == 0) GOTO 0x1007; Pop(1)

0x1002: PushEmpty(bool)
0x1003: Call2 0x1056

0x1004: Pop(0)
0x1005: IF (Stack[-1] == 0) GOTO 0x1007; Pop(1)

0x1006: Stack[-1] = (bool) 1
0x1007: IF (Stack[-1] == 0) GOTO 0x1031; Pop(1)

0x1008: Pop(0); Push((bool) Stack[-6] == 0)
0x1009: IF (Stack[-1] == 0) GOTO 0x1011; Pop(1)

0x100a: Push((int) 3)
0x100b: @ Sleep(Stack[-1], Stack[-5])
0x100c: Pop(1)
0x100d: Pop(0); Push((bool) Stack[-4] == 0)
0x100e: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0x100f: GOTO 0x1031

0x1010: GOTO 0x1026

0x1011: @ irand(Stack[-3], Stack[-6])
0x1012: Pop(0)
0x1013: Push((int) 5)
0x1014: @ irand(Stack[-3], Stack[-1])
0x1015: Pop(1)
0x1016: Push((int) 0)
0x1017: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1018: IF (Stack[-1] == 0) GOTO 0x101a; Pop(1)

0x1019: Stack[-3] = (int) 0
0x101a: Push("all")
0x101b: PushEmpty(string, int)
0x101c: Stack[-1] = Stack[-6]
0x101d: Call2 0x11da

0x101e: Pop(1)
0x101f: @ PlayAnimation(Stack[-2], Stack[-1])
0x1020: Pop(2)
0x1021: @ WaitForAnimEnd(Stack[-1])
0x1022: Pop(0)
0x1023: Pop(0); Push((bool) Stack[-1] == 0)
0x1024: IF (Stack[-1] == 0) GOTO 0x1026; Pop(1)

0x1025: GOTO 0x1031

0x1026: PushEmpty(bool)
0x1027: Call2 0x1034

0x1028: Pop(0)
0x1029: Pop(1); Push((bool) Stack[-1] == 0)
0x102a: IF (Stack[-1] == 0) GOTO 0x102c; Pop(1)

0x102b: GOTO 0x1031

0x102c: @ ResetAAS()
0x102d: Pop(0)
0x102e: Push((int) 1)
0x102f: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1030: GOTO 0xffd

0x1031: @ ResetAAS()
0x1032: Pop(0)
0x1033: Return(); Pop(12)

0x1034: Stack[-1] = (bool) 1
0x1035: Return(); Pop(0)

0x1036: @ StopAnimation()
0x1037: Pop(0)
0x1038: @ StopGroup0()
0x1039: Pop(0)
0x103a: Return(); Pop(0)

0x103b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x103c: @ GetPosition(Stack[-3])
0x103d: Pop(0)
0x103e: @@ GetPosition(Stack[-2])
0x103f: Pop(0)
0x1040: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1041: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1042: Return(); Pop(6)

0x1043: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1044: @ GetPosition(Stack[-3])
0x1045: Pop(0)
0x1046: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x1047: Push(CvectorIndex(Stack[-2], 0))
0x1048: Push(CvectorIndex(Stack[-3], 2))
0x1049: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x104a: Pop(2)
0x104b: Stack[-8] = Stack[-1]
0x104c: Return(); Pop(6)

0x104d: PushEmpty(cvector, cvector)
0x104e: @@ GetPosition(Stack[-1])
0x104f: Pop(0)
0x1050: PushEmpty(bool, cvector)
0x1051: Stack[-1] = Stack[-3]
0x1052: Call2 0x1043

0x1053: Stack[-6] = Stack[-2]
0x1054: Pop(2)
0x1055: Return(); Pop(2)

0x1056: PushEmpty(bool, bool)
0x1057: @ IsLoaded(Stack[-1])
0x1058: Pop(0)
0x1059: Stack[-3] = Stack[-1]
0x105a: Return(); Pop(2)

0x105b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x105c: @@ GetPosition(Stack[-8])
0x105d: Pop(0)
0x105e: @@ GetEyesHeight(Stack[-9])
0x105f: Pop(0)
0x1060: Push(CvectorIndex(Stack[-8], 1))
0x1061: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1062: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1063: @ GetPosition(Stack[-7])
0x1064: Pop(0)
0x1065: @ GetEyesHeight(Stack[-9])
0x1066: Pop(0)
0x1067: Push(CvectorIndex(Stack[-7], 1))
0x1068: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1069: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x106a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x106b: Push(CvectorIndex(Stack[-6], 1))
0x106c: Stack[-1] = (int) 0
0x106d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x106e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x106f: Pop(1); Push(Sqrt(Stack[-1]))
0x1070: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1071: Stack[-5] = -Stack[-6]; Pop(0);
0x1072: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1073: PushEmpty(cvector, cvector)
0x1074: Push(CVector(0.0, 1.0, 0.0))
0x1075: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1076: Call2 0x1175

0x1077: Pop(1)
0x1078: Push((int) 25)
0x1079: Pop(2); Push(Stack[-2] * Stack[-1]);
0x107a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x107b: Push(CVector(0.0, 10.0, 0.0))
0x107c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x107d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x107e: @ IsOverrideActive(Stack[-2])
0x107f: Pop(0)
0x1080: Push(Stack[-2])
0x1081: IF (Stack[-1] == 0) GOTO 0x1084; Pop(1)

0x1082: Stack[-21] = (bool) 0
0x1083: Return(); Pop(18)

0x1084: @ StopWorld()
0x1085: Pop(0)
0x1086: @ CameraTransit(Stack[-3], Stack[-5])
0x1087: Pop(0)
0x1088: Push(CvectorIndex(Stack[-4], 0))
0x1089: Push(CvectorIndex(Stack[-5], 2))
0x108a: @ Rotate(Stack[-2], Stack[-1])
0x108b: Pop(2)
0x108c: PushEmpty(bool)
0x108d: Call2 0x11fa

0x108e: Pop(0)
0x108f: IF (Stack[-1] == 0) GOTO 0x1091; Pop(1)

0x1090: GOTO 0x1099

0x1091: Push("head")
0x1092: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1093: Pop(1)
0x1094: Push(Stack[-1])
0x1095: IF (Stack[-1] == 0) GOTO 0x1099; Pop(1)

0x1096: Push("head")
0x1097: @ LookAsyncCamera(Stack[-1])
0x1098: Pop(1)
0x1099: @ CameraWaitForPlayFinish()
0x109a: Pop(0)
0x109b: @ ResumeWorld()
0x109c: Pop(0)
0x109d: Stack[-21] = (bool) 1
0x109e: Return(); Pop(18)

0x109f: PushEmpty(bool, bool)
0x10a0: @ CameraSwitchToNormal()
0x10a1: Pop(0)
0x10a2: PushEmpty(bool)
0x10a3: Call2 0x11fa

0x10a4: Pop(0)
0x10a5: IF (Stack[-1] == 0) GOTO 0x10a7; Pop(1)

0x10a6: GOTO 0x10af

0x10a7: Push("head")
0x10a8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x10a9: Pop(1)
0x10aa: Push(Stack[-1])
0x10ab: IF (Stack[-1] == 0) GOTO 0x10af; Pop(1)

0x10ac: Push("head")
0x10ad: @ UnlookAsync(Stack[-1])
0x10ae: Pop(1)
0x10af: Return(); Pop(2)

0x10b0: PushEmpty(int, int, int, int)
0x10b1: Push("voice_common")
0x10b2: @ GetVariable(Stack[-1], Stack[-3])
0x10b3: Pop(1)
0x10b4: Push(Stack[-2])
0x10b5: IF (Stack[-1] == 0) GOTO 0x10d6; Pop(1)

0x10b6: PushEmpty(bool, object)
0x10b7: Stack[-1] = Stack[-7]
0x10b8: Call2 0x10ea

0x10b9: Pop(1)
0x10ba: Pop(1); Push((bool) Stack[-1] == 0)
0x10bb: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10bc: PushEmpty(bool, object)
0x10bd: Stack[-1] = Stack[-7]
0x10be: Call2 0x110f

0x10bf: Pop(1)
0x10c0: Pop(1); Push((bool) Stack[-1] == 0)
0x10c1: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10c2: Stack[-6] = (bool) 0
0x10c3: Return(); Pop(4)

0x10c4: Push((int) 2)
0x10c5: @ irand(Stack[-2], Stack[-1])
0x10c6: Pop(1)
0x10c7: Push(Stack[-1])
0x10c8: IF (Stack[-1] == 0) GOTO 0x10d1; Pop(1)

0x10c9: Push("voice_common")
0x10ca: Push((int) 1)
0x10cb: Pop(1); Push(Stack[-4] + Stack[-1]);
0x10cc: Push((int) 3)
0x10cd: Pop(2); Push(Stack[-2] % Stack[-1]);
0x10ce: @ SetVariable(Stack[-2], Stack[-1])
0x10cf: Pop(2)
0x10d0: GOTO 0x10d5

0x10d1: Push("voice_common")
0x10d2: Push((int) 0)
0x10d3: @ SetVariable(Stack[-2], Stack[-1])
0x10d4: Pop(2)
0x10d5: GOTO 0x10e8

0x10d6: PushEmpty(bool, object)
0x10d7: Stack[-1] = Stack[-7]
0x10d8: Call2 0x110f

0x10d9: Pop(1)
0x10da: Pop(1); Push((bool) Stack[-1] == 0)
0x10db: IF (Stack[-1] == 0) GOTO 0x10e4; Pop(1)

0x10dc: PushEmpty(bool, object)
0x10dd: Stack[-1] = Stack[-7]
0x10de: Call2 0x10ea

0x10df: Pop(1)
0x10e0: Pop(1); Push((bool) Stack[-1] == 0)
0x10e1: IF (Stack[-1] == 0) GOTO 0x10e4; Pop(1)

0x10e2: Stack[-6] = (bool) 0
0x10e3: Return(); Pop(4)

0x10e4: Push("voice_common")
0x10e5: Push((int) 1)
0x10e6: @ SetVariable(Stack[-2], Stack[-1])
0x10e7: Pop(2)
0x10e8: Stack[-6] = (bool) 1
0x10e9: Return(); Pop(4)

0x10ea: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x10eb: Stack[-5] = "c"
0x10ec: Stack[-4] = (int) 0
0x10ed: Push((int) 1)
0x10ee: IF (Stack[-1] == 0) GOTO 0x10fa; Pop(1)

0x10ef: Push((int) 1)
0x10f0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x10f1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x10f2: @@ HasProperty(Stack[-1], Stack[-4])
0x10f3: Pop(1)
0x10f4: Pop(0); Push((bool) Stack[-3] == 0)
0x10f5: IF (Stack[-1] == 0) GOTO 0x10f7; Pop(1)

0x10f6: GOTO 0x10fa

0x10f7: Push((int) 1)
0x10f8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x10f9: GOTO 0x10ed

0x10fa: Pop(0); Push((bool) Stack[-4] == 0)
0x10fb: IF (Stack[-1] == 0) GOTO 0x10fe; Pop(1)

0x10fc: Stack[-12] = (bool) 0
0x10fd: Return(); Pop(10)

0x10fe: Stack[-2] = (int) 0
0x10ff: Push((int) 1)
0x1100: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1101: IF (Stack[-1] == 0) GOTO 0x1104; Pop(1)

0x1102: @ irand(Stack[-2], Stack[-4])
0x1103: Pop(0)
0x1104: Push((int) 1)
0x1105: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1106: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1107: @@ GetProperty(Stack[-1], Stack[-2])
0x1108: Pop(1)
0x1109: PushEmpty(bool, string)
0x110a: Stack[-1] = Stack[-3]
0x110b: Call2 0x1159

0x110c: Stack[-14] = Stack[-2]
0x110d: Pop(2)
0x110e: Return(); Pop(10)

0x110f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1110: Push("d")
0x1111: PushEmpty(int)
0x1112: Call2 0x11b8

0x1113: Pop(0)
0x1114: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1115: Push("m")
0x1116: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1117: Stack[-4] = (int) 0
0x1118: Push((int) 1)
0x1119: IF (Stack[-1] == 0) GOTO 0x1125; Pop(1)

0x111a: Push((int) 1)
0x111b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x111c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x111d: @@ HasProperty(Stack[-1], Stack[-4])
0x111e: Pop(1)
0x111f: Pop(0); Push((bool) Stack[-3] == 0)
0x1120: IF (Stack[-1] == 0) GOTO 0x1122; Pop(1)

0x1121: GOTO 0x1125

0x1122: Push((int) 1)
0x1123: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1124: GOTO 0x1118

0x1125: Pop(0); Push((bool) Stack[-4] == 0)
0x1126: IF (Stack[-1] == 0) GOTO 0x1129; Pop(1)

0x1127: Stack[-12] = (bool) 0
0x1128: Return(); Pop(10)

0x1129: Stack[-2] = (int) 0
0x112a: Push((int) 1)
0x112b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x112c: IF (Stack[-1] == 0) GOTO 0x112f; Pop(1)

0x112d: @ irand(Stack[-2], Stack[-4])
0x112e: Pop(0)
0x112f: Push((int) 1)
0x1130: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1131: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1132: @@ GetProperty(Stack[-1], Stack[-2])
0x1133: Pop(1)
0x1134: PushEmpty(bool, string)
0x1135: Stack[-1] = Stack[-3]
0x1136: Call2 0x1159

0x1137: Stack[-14] = Stack[-2]
0x1138: Pop(2)
0x1139: Return(); Pop(10)

0x113a: PushEmpty(bool, float, float, bool, float, float)
0x113b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x113c: Pop(0)
0x113d: Push(Stack[-3])
0x113e: IF (Stack[-1] == 0) GOTO 0x1145; Pop(1)

0x113f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1140: Pop(0)
0x1141: Push((bool) 0)
0x1142: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1143: Pop(1)
0x1144: GOTO 0x1149

0x1145: Push("Can't find lsh animation : ")
0x1146: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1147: @ Trace(Stack[-1])
0x1148: Pop(1)
0x1149: Return(); Pop(6)

0x114a: PushEmpty(bool, float, float, bool, float, float)
0x114b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x114c: Pop(0)
0x114d: Push(Stack[-3])
0x114e: IF (Stack[-1] == 0) GOTO 0x1154; Pop(1)

0x114f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1150: Pop(0)
0x1151: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1152: Pop(0)
0x1153: GOTO 0x1158

0x1154: Push("Can't find lsh animation : ")
0x1155: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1156: @ Trace(Stack[-1])
0x1157: Pop(1)
0x1158: Return(); Pop(6)

0x1159: PushEmpty(bool, bool)
0x115a: PushEmpty(bool)
0x115b: Call2 0x11fa

0x115c: Pop(0)
0x115d: IF (Stack[-1] == 0) GOTO 0x1166; Pop(1)

0x115e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x115f: Pop(0)
0x1160: Push(Stack[-1])
0x1161: IF (Stack[-1] == 0) GOTO 0x1166; Pop(1)

0x1162: @ lshPlaySpeech(Stack[-3])
0x1163: Pop(0)
0x1164: Stack[-4] = (bool) 1
0x1165: Return(); Pop(2)

0x1166: Stack[-4] = (bool) 0
0x1167: Return(); Pop(2)

0x1168: PushEmpty(bool)
0x1169: Call2 0x11fa

0x116a: Pop(0)
0x116b: IF (Stack[-1] == 0) GOTO 0x116e; Pop(1)

0x116c: @ lshStopSpeech()
0x116d: Pop(0)
0x116e: Return(); Pop(0)

0x116f: PushEmpty(object, object)
0x1170: @ self(Stack[-1])
0x1171: Pop(0)
0x1172: Stack[-3] = Stack[-1]
0x1173: Return(); Pop(2)

0x1174: Stack[-1] = 0
0x1175: PushEmpty(float, float)
0x1176: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1177: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1178: Push((float)0.0)
0x1179: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x117a: IF (Stack[-1] == 0) GOTO 0x117d; Pop(1)

0x117b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x117c: Return(); Pop(2)

0x117d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x117e: Return(); Pop(2)

0x117f: PushEmpty(int, int)
0x1180: @ GetVariable(Stack[-3], Stack[-1])
0x1181: Pop(0)
0x1182: Stack[-4] = Stack[-1]
0x1183: Return(); Pop(2)

0x1184: PushEmpty(object, object, object, object)
0x1185: @ GetMainOutdoorScene(Stack[-2])
0x1186: Pop(0)
0x1187: Push(".bin")
0x1188: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1189: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x118a: Pop(1)
0x118b: Stack[-6] = Stack[-1]
0x118c: Return(); Pop(4)

0x118d: Stack[-1] = 0
0x118e: Stack[-2] = 0
0x118f: PushEmpty(object, object)
0x1190: @ FindActor(Stack[-1], Stack[-4])
0x1191: Pop(0)
0x1192: Pop(0); Push((bool) Stack[-1] == 0)
0x1193: IF (Stack[-1] == 0) GOTO 0x119b; Pop(1)

0x1194: Push("Door ")
0x1195: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1196: Push(" not found")
0x1197: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1198: @ Trace(Stack[-1])
0x1199: Pop(1)
0x119a: GOTO 0x119e

0x119b: Push("locked")
0x119c: @@ SetProperty(Stack[-1], Stack[-4])
0x119d: Pop(1)
0x119e: Return(); Pop(2)

0x119f: Stack[-1] = 0
0x11a0: PushEmpty(int, bool, int, bool)
0x11a1: @ GetInvItemByName(Stack[-2], Stack[-5])
0x11a2: Pop(0)
0x11a3: @@ HasItem(Stack[-2], Stack[-1])
0x11a4: Pop(0)
0x11a5: Stack[-7] = Stack[-1]
0x11a6: Return(); Pop(4)

0x11a7: PushEmpty(object, object)
0x11a8: @ FindActor(Stack[-1], Stack[-4])
0x11a9: Pop(0)
0x11aa: Pop(0); Push((bool) Stack[-1] == 0)
0x11ab: IF (Stack[-1] == 0) GOTO 0x11ae; Pop(1)

0x11ac: Stack[-5] = (bool) 0
0x11ad: Return(); Pop(2)

0x11ae: @ Trigger(Stack[-1], Stack[-3])
0x11af: Pop(0)
0x11b0: Stack[-5] = (bool) 1
0x11b1: Return(); Pop(2)

0x11b2: Stack[-1] = 0
0x11b3: PushEmpty(float, float)
0x11b4: @ GetGameTime(Stack[-1])
0x11b5: Pop(0)
0x11b6: Stack[-3] = Stack[-1]
0x11b7: Return(); Pop(2)

0x11b8: PushEmpty(float, float)
0x11b9: @ GetGameTime(Stack[-1])
0x11ba: Pop(0)
0x11bb: Push((int) 1)
0x11bc: PushEmpty(int)
0x11bd: Push((int) 24)
0x11be: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x11bf: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x11c0: Return(); Pop(2)

0x11c1: PushEmpty()
0x11c2: PushEmpty(int)
0x11c3: Call2 0x11b8

0x11c4: Pop(0)
0x11c5: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x11c6: Return(); Pop(0)

0x11c7: PushEmpty(float, int, int, float, int, int)
0x11c8: @ GetGameTime(Stack[-3])
0x11c9: Pop(0)
0x11ca: Push((int) 1)
0x11cb: PushEmpty(int)
0x11cc: Push((int) 24)
0x11cd: Stack[-2] = Stack[-6] / Stack[-1]; Pop(1);
0x11ce: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x11cf: Pop(0); Push((bool) Stack[-2] != Stack[-7])
0x11d0: IF (Stack[-1] == 0) GOTO 0x11d3; Pop(1)

0x11d1: Stack[-8] = (bool) 0
0x11d2: Return(); Pop(6)

0x11d3: PushEmpty(int)
0x11d4: Stack[-1] = Stack[-4]
0x11d5: Push((int) 24)
0x11d6: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x11d7: Push((int) 7)
0x11d8: Stack[-9] = Stack[-2] < Stack[-1]; Pop(1);
0x11d9: Return(); Pop(6)

0x11da: PushEmpty(string, string)
0x11db: Stack[-1] = "idle"
0x11dc: Push(Stack[-3])
0x11dd: IF (Stack[-1] == 0) GOTO 0x11df; Pop(1)

0x11de: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x11df: Stack[-4] = Stack[-1]
0x11e0: Return(); Pop(2)

0x11e1: PushEmpty(int, bool, int, bool)
0x11e2: Stack[-2] = (int) 0
0x11e3: Push("all")
0x11e4: PushEmpty(string, int)
0x11e5: Stack[-1] = Stack[-5]
0x11e6: Call2 0x11da

0x11e7: Pop(1)
0x11e8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x11e9: Pop(2)
0x11ea: Pop(0); Push((bool) Stack[-1] == 0)
0x11eb: IF (Stack[-1] == 0) GOTO 0x11ed; Pop(1)

0x11ec: GOTO 0x11f0

0x11ed: Push((int) 1)
0x11ee: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x11ef: GOTO 0x11e3

0x11f0: Stack[-5] = Stack[-2]
0x11f1: Return(); Pop(4)

0x11f2: Stack[-1] = (int) 515527
0x11f3: Return(); Pop(0)

0x11f4: Stack[-1] = (int) 513334
0x11f5: Return(); Pop(0)

0x11f6: Stack[-1] = "ui/NPC_Aglaja.png"
0x11f7: Return(); Pop(0)

0x11f8: Stack[-1] = "ui/NPC_Aglaja_b.png"
0x11f9: Return(); Pop(0)

0x11fa: Stack[-1] = (bool) 1
0x11fb: Return(); Pop(0)

0x11fc: PushEmpty()
0x11fd: PushEmpty(string, bool)
0x11fe: Stack[-2] = "boiny@door1"
0x11ff: Stack[-1] = (bool) 0
0x1200: Call2 0x118f

0x1201: Pop(2)
0x1202: Return(); Pop(0)

0x1203: PushEmpty(object, object)
0x1204: Push("b7q01")
0x1205: Push((int) 7)
0x1206: @ SetVariable(Stack[-2], Stack[-1])
0x1207: Pop(2)
0x1208: PushEmpty(object)
0x1209: Call2 0x1458

0x120a: Stack[-2] = Stack[-1]
0x120b: Pop(1)
0x120c: Push("b7q01AglajaGotoStarshina")
0x120d: Push("pt_map_starshina")
0x120e: Push((int) 1)
0x120f: Push((int) 521027)
0x1210: PushEmpty(float)
0x1211: Call2 0x11b3

0x1212: Pop(0)
0x1213: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1214: Pop(5)
0x1215: PushEmpty()
0x1216: Call2 0x13c7

0x1217: Pop(0)
0x1218: Return(); Pop(2)

0x1219: Stack[-1] = 0
0x121a: PushEmpty()
0x121b: PushEmpty()
0x121c: Call2 0x13d4

0x121d: Pop(0)
0x121e: PushEmpty(bool, string, string)
0x121f: Stack[-2] = "quest_b7_01"
0x1220: Stack[-1] = "completed"
0x1221: Call2 0x11a7

0x1222: Pop(3)
0x1223: Return(); Pop(0)

0x1224: PushEmpty(object, object)
0x1225: Push("b7q03")
0x1226: Push((int) 1)
0x1227: @ SetVariable(Stack[-2], Stack[-1])
0x1228: Pop(2)
0x1229: PushEmpty(object)
0x122a: Call2 0x1458

0x122b: Stack[-2] = Stack[-1]
0x122c: Pop(1)
0x122d: Push("b7q03AglajaGotoTheater")
0x122e: Push("pt_map_theater")
0x122f: Push((int) 0)
0x1230: Push((int) 521367)
0x1231: PushEmpty(float)
0x1232: Call2 0x11b3

0x1233: Pop(0)
0x1234: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1235: Pop(5)
0x1236: PushEmpty()
0x1237: Call2 0x13e1

0x1238: Pop(0)
0x1239: PushEmpty()
0x123a: Call2 0x13ee

0x123b: Pop(0)
0x123c: PushEmpty(object, string)
0x123d: Stack[-1] = "quest_b7_03"
0x123e: Call2 0x1184

0x123f: Pop(2)
0x1240: PushEmpty(bool, string, string)
0x1241: Stack[-2] = "quest_b7_03"
0x1242: Stack[-1] = "place_birdmask"
0x1243: Call2 0x11a7

0x1244: Pop(3)
0x1245: Return(); Pop(2)

0x1246: Stack[-1] = 0
0x1247: PushEmpty()
0x1248: Push("oob7Aglaja1")
0x1249: Push((int) 1)
0x124a: @ SetVariable(Stack[-2], Stack[-1])
0x124b: Pop(2)
0x124c: Return(); Pop(0)

0x124d: PushEmpty()
0x124e: PushEmpty()
0x124f: Call2 0x13fb

0x1250: Pop(0)
0x1251: PushEmpty(bool, string, string)
0x1252: Stack[-2] = "quest_b7_03"
0x1253: Stack[-1] = "completed"
0x1254: Call2 0x11a7

0x1255: Pop(3)
0x1256: Return(); Pop(0)

0x1257: PushEmpty()
0x1258: Push("b8q01")
0x1259: Push((int) 1)
0x125a: @ SetVariable(Stack[-2], Stack[-1])
0x125b: Pop(2)
0x125c: PushEmpty()
0x125d: Call2 0x1408

0x125e: Pop(0)
0x125f: PushEmpty()
0x1260: Call2 0x1415

0x1261: Pop(0)
0x1262: Return(); Pop(0)

0x1263: PushEmpty()
0x1264: Push("oob8Aglaja1")
0x1265: Push((int) 1)
0x1266: @ SetVariable(Stack[-2], Stack[-1])
0x1267: Pop(2)
0x1268: Return(); Pop(0)

0x1269: PushEmpty()
0x126a: PushEmpty()
0x126b: Call2 0x1422

0x126c: Pop(0)
0x126d: PushEmpty(bool, string, string)
0x126e: Stack[-2] = "quest_b8_01"
0x126f: Stack[-1] = "completed"
0x1270: Call2 0x11a7

0x1271: Pop(3)
0x1272: Return(); Pop(0)

0x1273: PushEmpty()
0x1274: Push("oob8Aglaja2")
0x1275: Push((int) 1)
0x1276: @ SetVariable(Stack[-2], Stack[-1])
0x1277: Pop(2)
0x1278: Return(); Pop(0)

0x1279: PushEmpty()
0x127a: Push("oob11Aglaja1")
0x127b: Push((int) 1)
0x127c: @ SetVariable(Stack[-2], Stack[-1])
0x127d: Pop(2)
0x127e: Return(); Pop(0)

0x127f: PushEmpty()
0x1280: Push("oob9Aglaja1")
0x1281: Push((int) 1)
0x1282: @ SetVariable(Stack[-2], Stack[-1])
0x1283: Pop(2)
0x1284: Return(); Pop(0)

0x1285: PushEmpty()
0x1286: Push("oob9Aglaja2")
0x1287: Push((int) 1)
0x1288: @ SetVariable(Stack[-2], Stack[-1])
0x1289: Pop(2)
0x128a: Return(); Pop(0)

0x128b: PushEmpty()
0x128c: PushEmpty(int, string)
0x128d: Stack[-1] = "map_chertez_state"
0x128e: Call2 0x117f

0x128f: Pop(1)
0x1290: Push((int) 1)
0x1291: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1292: IF (Stack[-1] == 0) GOTO 0x129b; Pop(1)

0x1293: Push("map_chertez_state")
0x1294: Push((int) 1)
0x1295: @ SetVariable(Stack[-2], Stack[-1])
0x1296: Pop(2)
0x1297: Push("map_chertez_force")
0x1298: Push((int) 1)
0x1299: @ SetVariable(Stack[-2], Stack[-1])
0x129a: Pop(2)
0x129b: Return(); Pop(0)

0x129c: PushEmpty()
0x129d: PushEmpty(int, string)
0x129e: Stack[-1] = "map_chertez_state"
0x129f: Call2 0x117f

0x12a0: Pop(1)
0x12a1: Push((int) 2)
0x12a2: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x12a3: IF (Stack[-1] == 0) GOTO 0x12ac; Pop(1)

0x12a4: Push("map_chertez_state")
0x12a5: Push((int) 2)
0x12a6: @ SetVariable(Stack[-2], Stack[-1])
0x12a7: Pop(2)
0x12a8: Push("map_chertez_force")
0x12a9: Push((int) 1)
0x12aa: @ SetVariable(Stack[-2], Stack[-1])
0x12ab: Pop(2)
0x12ac: Return(); Pop(0)

0x12ad: PushEmpty()
0x12ae: PushEmpty(object, string, float)
0x12af: PushEmpty(object)
0x12b0: Call2 0x1458

0x12b1: Stack[-4] = Stack[-1]
0x12b2: Pop(1)
0x12b3: Stack[-2] = "pt_map_aglaja"
0x12b4: Stack[-1] = (int) -1
0x12b5: Call2 0x1469

0x12b6: Pop(3)
0x12b7: PushEmpty(object)
0x12b8: Call2 0x1458

0x12b9: Pop(0)
0x12ba: @@ ShowMap(Stack[-1])
0x12bb: Pop(1)
0x12bc: Return(); Pop(0)

0x12bd: PushEmpty()
0x12be: PushEmpty(int, string)
0x12bf: Stack[-1] = "b7q01"
0x12c0: Call2 0x117f

0x12c1: Pop(1)
0x12c2: Push((int) 1000)
0x12c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12c4: IF (Stack[-1] == 0) GOTO 0x12c7; Pop(1)

0x12c5: Stack[-2] = (bool) 1
0x12c6: Return(); Pop(0)

0x12c7: Stack[-2] = (bool) 0
0x12c8: Return(); Pop(0)

0x12c9: PushEmpty()
0x12ca: PushEmpty(int, string)
0x12cb: Stack[-1] = "oob7Aglaja1"
0x12cc: Call2 0x117f

0x12cd: Pop(1)
0x12ce: Push((int) 0)
0x12cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12d0: IF (Stack[-1] == 0) GOTO 0x12d3; Pop(1)

0x12d1: Stack[-2] = (bool) 1
0x12d2: Return(); Pop(0)

0x12d3: Stack[-2] = (bool) 0
0x12d4: Return(); Pop(0)

0x12d5: PushEmpty()
0x12d6: PushEmpty(int, string)
0x12d7: Stack[-1] = "b7q03"
0x12d8: Call2 0x117f

0x12d9: Pop(1)
0x12da: Push((int) 2)
0x12db: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12dc: IF (Stack[-1] == 0) GOTO 0x12df; Pop(1)

0x12dd: Stack[-2] = (bool) 1
0x12de: Return(); Pop(0)

0x12df: Stack[-2] = (bool) 0
0x12e0: Return(); Pop(0)

0x12e1: PushEmpty()
0x12e2: PushEmpty(int, string)
0x12e3: Stack[-1] = "b7q03SerumWorks"
0x12e4: Call2 0x117f

0x12e5: Pop(1)
0x12e6: Push((int) 0)
0x12e7: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12e8: IF (Stack[-1] == 0) GOTO 0x12eb; Pop(1)

0x12e9: Stack[-2] = (bool) 1
0x12ea: Return(); Pop(0)

0x12eb: Stack[-2] = (bool) 0
0x12ec: Return(); Pop(0)

0x12ed: PushEmpty()
0x12ee: PushEmpty(int, string)
0x12ef: Stack[-1] = "b7q03"
0x12f0: Call2 0x117f

0x12f1: Pop(1)
0x12f2: Push((int) 1000)
0x12f3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12f4: IF (Stack[-1] == 0) GOTO 0x12f7; Pop(1)

0x12f5: Stack[-2] = (bool) 1
0x12f6: Return(); Pop(0)

0x12f7: Stack[-2] = (bool) 0
0x12f8: Return(); Pop(0)

0x12f9: PushEmpty()
0x12fa: PushEmpty(int, string)
0x12fb: Stack[-1] = "oob8Aglaja1"
0x12fc: Call2 0x117f

0x12fd: Pop(1)
0x12fe: Push((int) 0)
0x12ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1300: IF (Stack[-1] == 0) GOTO 0x1303; Pop(1)

0x1301: Stack[-2] = (bool) 1
0x1302: Return(); Pop(0)

0x1303: Stack[-2] = (bool) 0
0x1304: Return(); Pop(0)

0x1305: PushEmpty()
0x1306: PushEmpty(int, string)
0x1307: Stack[-1] = "b8q01"
0x1308: Call2 0x117f

0x1309: Pop(1)
0x130a: Push((int) 0)
0x130b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x130c: IF (Stack[-1] == 0) GOTO 0x130f; Pop(1)

0x130d: Stack[-2] = (bool) 1
0x130e: Return(); Pop(0)

0x130f: Stack[-2] = (bool) 0
0x1310: Return(); Pop(0)

0x1311: PushEmpty()
0x1312: PushEmpty(int, string)
0x1313: Stack[-1] = "b8q01"
0x1314: Call2 0x117f

0x1315: Pop(1)
0x1316: Push((int) 7)
0x1317: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1318: IF (Stack[-1] == 0) GOTO 0x131b; Pop(1)

0x1319: Stack[-2] = (bool) 1
0x131a: Return(); Pop(0)

0x131b: Stack[-2] = (bool) 0
0x131c: Return(); Pop(0)

0x131d: PushEmpty()
0x131e: PushEmpty(bool)
0x131f: Stack[-1] = (bool) 0
0x1320: PushEmpty(bool)
0x1321: Stack[-1] = (bool) 0
0x1322: PushEmpty(int, string)
0x1323: Stack[-1] = "b8q03"
0x1324: Call2 0x117f

0x1325: Pop(1)
0x1326: Push((int) 0)
0x1327: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1328: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x1329: PushEmpty(int, string)
0x132a: Stack[-1] = "b8q03"
0x132b: Call2 0x117f

0x132c: Pop(1)
0x132d: Push((int) 1000)
0x132e: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x132f: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x1330: Stack[-1] = (bool) 1
0x1331: IF (Stack[-1] == 0) GOTO 0x133a; Pop(1)

0x1332: PushEmpty(int, string)
0x1333: Stack[-1] = "b8q03"
0x1334: Call2 0x117f

0x1335: Pop(1)
0x1336: Push((int) -1)
0x1337: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1338: IF (Stack[-1] == 0) GOTO 0x133a; Pop(1)

0x1339: Stack[-1] = (bool) 1
0x133a: IF (Stack[-1] == 0) GOTO 0x133d; Pop(1)

0x133b: Stack[-2] = (bool) 1
0x133c: Return(); Pop(0)

0x133d: Stack[-2] = (bool) 0
0x133e: Return(); Pop(0)

0x133f: PushEmpty()
0x1340: PushEmpty(int, string)
0x1341: Stack[-1] = "oob8Aglaja2"
0x1342: Call2 0x117f

0x1343: Pop(1)
0x1344: Push((int) 0)
0x1345: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1346: IF (Stack[-1] == 0) GOTO 0x1349; Pop(1)

0x1347: Stack[-2] = (bool) 1
0x1348: Return(); Pop(0)

0x1349: Stack[-2] = (bool) 0
0x134a: Return(); Pop(0)

0x134b: PushEmpty()
0x134c: PushEmpty(int, string)
0x134d: Stack[-1] = "b11q01"
0x134e: Call2 0x117f

0x134f: Pop(1)
0x1350: Push((int) 1000)
0x1351: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1352: IF (Stack[-1] == 0) GOTO 0x1355; Pop(1)

0x1353: Stack[-2] = (bool) 1
0x1354: Return(); Pop(0)

0x1355: Stack[-2] = (bool) 0
0x1356: Return(); Pop(0)

0x1357: PushEmpty()
0x1358: PushEmpty(int, string)
0x1359: Stack[-1] = "oob11Aglaja1"
0x135a: Call2 0x117f

0x135b: Pop(1)
0x135c: Push((int) 0)
0x135d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x135e: IF (Stack[-1] == 0) GOTO 0x1361; Pop(1)

0x135f: Stack[-2] = (bool) 1
0x1360: Return(); Pop(0)

0x1361: Stack[-2] = (bool) 0
0x1362: Return(); Pop(0)

0x1363: PushEmpty()
0x1364: PushEmpty(int, string)
0x1365: Stack[-1] = "b9q03BadInit"
0x1366: Call2 0x117f

0x1367: Pop(1)
0x1368: Push((int) 0)
0x1369: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x136a: IF (Stack[-1] == 0) GOTO 0x136d; Pop(1)

0x136b: Stack[-2] = (bool) 1
0x136c: Return(); Pop(0)

0x136d: Stack[-2] = (bool) 0
0x136e: Return(); Pop(0)

0x136f: PushEmpty()
0x1370: PushEmpty(int, string)
0x1371: Stack[-1] = "b9q03BonefiresCount"
0x1372: Call2 0x117f

0x1373: Pop(1)
0x1374: Push((int) 4)
0x1375: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1376: IF (Stack[-1] == 0) GOTO 0x1379; Pop(1)

0x1377: Stack[-2] = (bool) 1
0x1378: Return(); Pop(0)

0x1379: Stack[-2] = (bool) 0
0x137a: Return(); Pop(0)

0x137b: PushEmpty()
0x137c: PushEmpty(int, string)
0x137d: Stack[-1] = "oob9Aglaja1"
0x137e: Call2 0x117f

0x137f: Pop(1)
0x1380: Push((int) 0)
0x1381: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1382: IF (Stack[-1] == 0) GOTO 0x1385; Pop(1)

0x1383: Stack[-2] = (bool) 1
0x1384: Return(); Pop(0)

0x1385: Stack[-2] = (bool) 0
0x1386: Return(); Pop(0)

0x1387: PushEmpty()
0x1388: PushEmpty(int, string)
0x1389: Stack[-1] = "oob9Aglaja2"
0x138a: Call2 0x117f

0x138b: Pop(1)
0x138c: Push((int) 0)
0x138d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x138e: IF (Stack[-1] == 0) GOTO 0x1391; Pop(1)

0x138f: Stack[-2] = (bool) 1
0x1390: Return(); Pop(0)

0x1391: Stack[-2] = (bool) 0
0x1392: Return(); Pop(0)

0x1393: PushEmpty()
0x1394: PushEmpty(bool, object)
0x1395: Stack[-1] = Stack[-3]
0x1396: Call2 0x13c0

0x1397: Pop(1)
0x1398: IF (Stack[-1] == 0) GOTO 0x139b; Pop(1)

0x1399: Stack[-2] = (bool) 1
0x139a: Return(); Pop(0)

0x139b: Stack[-2] = (bool) 0
0x139c: Return(); Pop(0)

0x139d: PushEmpty()
0x139e: PushEmpty(int, string)
0x139f: Stack[-1] = "b7q01"
0x13a0: Call2 0x117f

0x13a1: Pop(1)
0x13a2: Push((int) 6)
0x13a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13a4: IF (Stack[-1] == 0) GOTO 0x13a7; Pop(1)

0x13a5: Stack[-2] = (bool) 1
0x13a6: Return(); Pop(0)

0x13a7: Stack[-2] = (bool) 0
0x13a8: Return(); Pop(0)

0x13a9: PushEmpty()
0x13aa: PushEmpty(bool, object, string)
0x13ab: Stack[-2] = Stack[-4]
0x13ac: Stack[-1] = "burah_serum"
0x13ad: Call2 0x11a0

0x13ae: Pop(2)
0x13af: IF (Stack[-1] == 0) GOTO 0x13b2; Pop(1)

0x13b0: Stack[-2] = (bool) 1
0x13b1: Return(); Pop(0)

0x13b2: Stack[-2] = (bool) 0
0x13b3: Return(); Pop(0)

0x13b4: PushEmpty()
0x13b5: PushEmpty(int, string)
0x13b6: Stack[-1] = "b7q01"
0x13b7: Call2 0x117f

0x13b8: Pop(1)
0x13b9: Push((int) 8)
0x13ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13bb: IF (Stack[-1] == 0) GOTO 0x13be; Pop(1)

0x13bc: Stack[-2] = (bool) 1
0x13bd: Return(); Pop(0)

0x13be: Stack[-2] = (bool) 0
0x13bf: Return(); Pop(0)

0x13c0: PushEmpty(float, float)
0x13c1: Push("disease")
0x13c2: @@ GetProperty(Stack[-1], Stack[-2])
0x13c3: Pop(1)
0x13c4: Push((int) 0)
0x13c5: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x13c6: Return(); Pop(2)

0x13c7: PushEmpty(object, object)
0x13c8: Push((int) 259)
0x13c9: Push((int) 1)
0x13ca: Push((int) 521031)
0x13cb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13cc: Pop(3)
0x13cd: PushEmpty(bool, object, int)
0x13ce: Stack[-2] = Stack[-4]
0x13cf: Stack[-1] = (int) 253
0x13d0: Call2 0x143c

0x13d1: Pop(3)
0x13d2: Return(); Pop(2)

0x13d3: Stack[-1] = 0
0x13d4: PushEmpty(object, object)
0x13d5: Push((int) 261)
0x13d6: Push((int) 1)
0x13d7: Push((int) 521033)
0x13d8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13d9: Pop(3)
0x13da: PushEmpty(bool, object, int)
0x13db: Stack[-2] = Stack[-4]
0x13dc: Stack[-1] = (int) 253
0x13dd: Call2 0x143c

0x13de: Pop(3)
0x13df: Return(); Pop(2)

0x13e0: Stack[-1] = 0
0x13e1: PushEmpty(object, object)
0x13e2: Push((int) 280)
0x13e3: Push((int) 2)
0x13e4: Push((int) 521363)
0x13e5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13e6: Pop(3)
0x13e7: PushEmpty(bool, object, int)
0x13e8: Stack[-2] = Stack[-4]
0x13e9: Stack[-1] = (int) -1
0x13ea: Call2 0x143c

0x13eb: Pop(3)
0x13ec: Return(); Pop(2)

0x13ed: Stack[-1] = 0
0x13ee: PushEmpty(object, object)
0x13ef: Push((int) 281)
0x13f0: Push((int) 2)
0x13f1: Push((int) 521364)
0x13f2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13f3: Pop(3)
0x13f4: PushEmpty(bool, object, int)
0x13f5: Stack[-2] = Stack[-4]
0x13f6: Stack[-1] = (int) 280
0x13f7: Call2 0x143c

0x13f8: Pop(3)
0x13f9: Return(); Pop(2)

0x13fa: Stack[-1] = 0
0x13fb: PushEmpty(object, object)
0x13fc: Push((int) 283)
0x13fd: Push((int) 2)
0x13fe: Push((int) 521366)
0x13ff: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1400: Pop(3)
0x1401: PushEmpty(bool, object, int)
0x1402: Stack[-2] = Stack[-4]
0x1403: Stack[-1] = (int) 280
0x1404: Call2 0x143c

0x1405: Pop(3)
0x1406: Return(); Pop(2)

0x1407: Stack[-1] = 0
0x1408: PushEmpty(object, object)
0x1409: Push((int) 284)
0x140a: Push((int) 1)
0x140b: Push((int) 521455)
0x140c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x140d: Pop(3)
0x140e: PushEmpty(bool, object, int)
0x140f: Stack[-2] = Stack[-4]
0x1410: Stack[-1] = (int) -1
0x1411: Call2 0x143c

0x1412: Pop(3)
0x1413: Return(); Pop(2)

0x1414: Stack[-1] = 0
0x1415: PushEmpty(object, object)
0x1416: Push((int) 285)
0x1417: Push((int) 1)
0x1418: Push((int) 521456)
0x1419: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x141a: Pop(3)
0x141b: PushEmpty(bool, object, int)
0x141c: Stack[-2] = Stack[-4]
0x141d: Stack[-1] = (int) 284
0x141e: Call2 0x143c

0x141f: Pop(3)
0x1420: Return(); Pop(2)

0x1421: Stack[-1] = 0
0x1422: PushEmpty(object, object)
0x1423: Push((int) 292)
0x1424: Push((int) 1)
0x1425: Push((int) 521463)
0x1426: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1427: Pop(3)
0x1428: PushEmpty(bool, object, int)
0x1429: Stack[-2] = Stack[-4]
0x142a: Stack[-1] = (int) 284
0x142b: Call2 0x143c

0x142c: Pop(3)
0x142d: Return(); Pop(2)

0x142e: Stack[-1] = 0
0x142f: PushEmpty(object, object)
0x1430: @ GetDiaryRoot(Stack[-1])
0x1431: Pop(0)
0x1432: Pop(0); Push((bool) Stack[-1] == 0)
0x1433: IF (Stack[-1] == 0) GOTO 0x1439; Pop(1)

0x1434: Push("Can't retrieve diary root")
0x1435: @ Trace(Stack[-1])
0x1436: Pop(1)
0x1437: Stack[-3] = (bool) 0
0x1438: Return(); Pop(2)

0x1439: Stack[-3] = Stack[-1]
0x143a: Return(); Pop(2)

0x143b: Stack[-1] = 0
0x143c: PushEmpty(object, object, int, object, object, int)
0x143d: PushEmpty(object)
0x143e: Call2 0x142f

0x143f: Stack[-4] = Stack[-1]
0x1440: Pop(1)
0x1441: @@ Find(Stack[-7], Stack[-2])
0x1442: Pop(0)
0x1443: Pop(0); Push((bool) Stack[-2] == 0)
0x1444: IF (Stack[-1] == 0) GOTO 0x144b; Pop(1)

0x1445: Push("Can't find diary parent with id: ")
0x1446: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1447: @ Trace(Stack[-1])
0x1448: Pop(1)
0x1449: Stack[-9] = (bool) 0
0x144a: Return(); Pop(6)

0x144b: @@ AddChild(Stack[-8])
0x144c: Pop(0)
0x144d: Push((int) 7)
0x144e: @ SendWorldWndMessage(Stack[-1])
0x144f: Pop(1)
0x1450: @@ GetCategory(Stack[-1])
0x1451: Pop(0)
0x1452: @ SetDiarySection(Stack[-1])
0x1453: Pop(0)
0x1454: Stack[-9] = (bool) 0
0x1455: Return(); Pop(6)

0x1456: Stack[-2] = 0
0x1457: Stack[-3] = 0
0x1458: PushEmpty(object, object, object, object)
0x1459: @ GetMainOutdoorScene(Stack[-2])
0x145a: Pop(0)
0x145b: Pop(0); Push((bool) Stack[-2] == 0)
0x145c: IF (Stack[-1] == 0) GOTO 0x1463; Pop(1)

0x145d: Push("Can't find main outdoor scene")
0x145e: @ Trace(Stack[-1])
0x145f: Pop(1)
0x1460: Stack[-1] = 0
0x1461: Stack[-5] = Stack[-1]
0x1462: Return(); Pop(4)

0x1463: @@ GetMap(Stack[-1])
0x1464: Pop(0)
0x1465: Stack[-5] = Stack[-1]
0x1466: Return(); Pop(4)

0x1467: Stack[-1] = 0
0x1468: Stack[-2] = 0
0x1469: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x146a: @ GetMainOutdoorScene(Stack[-2])
0x146b: Pop(0)
0x146c: Pop(0); Push((bool) Stack[-2] == 0)
0x146d: IF (Stack[-1] == 0) GOTO 0x1472; Pop(1)

0x146e: Push("Can't find main outdoor scene")
0x146f: @ Trace(Stack[-1])
0x1470: Pop(1)
0x1471: Return(); Pop(8)

0x1472: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1473: Pop(0)
0x1474: Pop(0); Push((bool) Stack[-1] == 0)
0x1475: IF (Stack[-1] == 0) GOTO 0x147c; Pop(1)

0x1476: Push("Warning: outdoor scene locator ")
0x1477: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1478: Push(" doesnt exist")
0x1479: Pop(2); Push(Stack[-2] + Stack[-1]);
0x147a: @ Trace(Stack[-1])
0x147b: Pop(1)
0x147c: @@ GetMap(Stack[-11])
0x147d: Pop(0)
0x147e: Pop(0); Push((bool) Stack[-11] == 0)
0x147f: IF (Stack[-1] == 0) GOTO 0x1484; Pop(1)

0x1480: Push("Can't find map")
0x1481: @ Trace(Stack[-1])
0x1482: Pop(1)
0x1483: Return(); Pop(8)

0x1484: Push(CvectorIndex(Stack[-4], 0))
0x1485: Push(CvectorIndex(Stack[-5], 2))
0x1486: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1487: Pop(2)
0x1488: Return(); Pop(8)

0x1489: Stack[-2] = 0
0x148a: PushEmpty(int, int)
0x148b: Push("branch")
0x148c: @ GetVariable(Stack[-1], Stack[-2])
0x148d: Pop(1)
0x148e: Push((int) 0)
0x148f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1490: IF (Stack[-1] == 0) GOTO 0x1494; Pop(1)

0x1491: Stack[-3] = (int) 1
0x1492: Return(); Pop(2)

0x1493: GOTO 0x1499

0x1494: Push((int) 1)
0x1495: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1496: IF (Stack[-1] == 0) GOTO 0x1499; Pop(1)

0x1497: Stack[-3] = (int) 2
0x1498: Return(); Pop(2)

0x1499: Stack[-3] = (int) 3
0x149a: Return(); Pop(2)

0x149b: PushEmpty(int, int)
0x149c: Push("mt_aglaja")
0x149d: @ GetVariable(Stack[-1], Stack[-2])
0x149e: Pop(1)
0x149f: Pop(0); Push((bool) Stack[-1] == 0)
0x14a0: IF (Stack[-1] == 0) GOTO 0x14ab; Pop(1)

0x14a1: PushEmpty(int, object)
0x14a2: Stack[-1] = Stack[-5]
0x14a3: Push(-2, 1); TaskCall(6)
0x14a4: Call2 0x35b

0x14a5: Pop(-2, 1); TaskReturn
0x14a6: Pop(2)
0x14a7: Push("mt_aglaja")
0x14a8: Push((int) 1)
0x14a9: @ SetVariable(Stack[-2], Stack[-1])
0x14aa: Pop(2)
0x14ab: PushEmpty(bool, int)
0x14ac: Stack[-1] = (int) 8
0x14ad: Call2 0x11c7

0x14ae: Pop(1)
0x14af: IF (Stack[-1] == 0) GOTO 0x14b7; Pop(1)

0x14b0: PushEmpty(int, object)
0x14b1: Stack[-1] = Stack[-5]
0x14b2: Push(-2, 1); TaskCall(0)
0x14b3: Call2 0x0

0x14b4: Pop(-2, 1); TaskReturn
0x14b5: Pop(2)
0x14b6: Return(); Pop(2)

0x14b7: PushEmpty(bool, int)
0x14b8: Stack[-1] = (int) 12
0x14b9: Call2 0x11c7

0x14ba: Pop(1)
0x14bb: IF (Stack[-1] == 0) GOTO 0x14c3; Pop(1)

0x14bc: PushEmpty(int, object)
0x14bd: Stack[-1] = Stack[-5]
0x14be: Push(-2, 1); TaskCall(2)
0x14bf: Call2 0xcb

0x14c0: Pop(-2, 1); TaskReturn
0x14c1: Pop(2)
0x14c2: Return(); Pop(2)

0x14c3: PushEmpty(bool, int)
0x14c4: Stack[-1] = (int) 7
0x14c5: Call2 0x11c1

0x14c6: Pop(1)
0x14c7: IF (Stack[-1] == 0) GOTO 0x14cf; Pop(1)

0x14c8: PushEmpty(int, object)
0x14c9: Stack[-1] = Stack[-5]
0x14ca: Push(-2, 1); TaskCall(8)
0x14cb: Call2 0x454

0x14cc: Pop(-2, 1); TaskReturn
0x14cd: Pop(2)
0x14ce: Return(); Pop(2)

0x14cf: PushEmpty(bool, int)
0x14d0: Stack[-1] = (int) 8
0x14d1: Call2 0x11c1

0x14d2: Pop(1)
0x14d3: IF (Stack[-1] == 0) GOTO 0x14db; Pop(1)

0x14d4: PushEmpty(int, object)
0x14d5: Stack[-1] = Stack[-5]
0x14d6: Push(-2, 1); TaskCall(10)
0x14d7: Call2 0x97f

0x14d8: Pop(-2, 1); TaskReturn
0x14d9: Pop(2)
0x14da: Return(); Pop(2)

0x14db: PushEmpty(bool, int)
0x14dc: Stack[-1] = (int) 9
0x14dd: Call2 0x11c1

0x14de: Pop(1)
0x14df: IF (Stack[-1] == 0) GOTO 0x14e7; Pop(1)

0x14e0: PushEmpty(int, object)
0x14e1: Stack[-1] = Stack[-5]
0x14e2: Push(-2, 1); TaskCall(4)
0x14e3: Call2 0x196

0x14e4: Pop(-2, 1); TaskReturn
0x14e5: Pop(2)
0x14e6: Return(); Pop(2)

0x14e7: PushEmpty(bool, int)
0x14e8: Stack[-1] = (int) 11
0x14e9: Call2 0x11c1

0x14ea: Pop(1)
0x14eb: IF (Stack[-1] == 0) GOTO 0x14f3; Pop(1)

0x14ec: PushEmpty(int, object)
0x14ed: Stack[-1] = Stack[-5]
0x14ee: Push(-2, 1); TaskCall(12)
0x14ef: Call2 0xd23

0x14f0: Pop(-2, 1); TaskReturn
0x14f1: Pop(2)
0x14f2: Return(); Pop(2)

0x14f3: Return(); Pop(2)

