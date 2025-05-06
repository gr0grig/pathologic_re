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
	cleanup
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	b3q01
	b3q01ButcherGotoBigVlad
	pt_map_bigvlad
	AddMark
	oob3Butcher1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch

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
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x244
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x239 Vars = (object)
		EVENT_26 Op = 0x26d Vars = (string)
		EVENT_5 Op = 0x275 Vars = ()
		EVENT_6 Op = 0x27a Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2e7

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x422

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x420

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x424

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x426

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4be

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
0x31: Call2 0x3fd

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x33e

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
0x48: Call2 0x32c

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
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x46b

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0xa9

0x5f: Pop(1)
0x60: Push((int) 519294)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 519295)
0x66: Push((int) 20450)
0x67: Push((int) 20449)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 519300)
0x6b: Push((int) 20455)
0x6c: Push((int) 20454)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x8b

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xa9

0x73: Pop(1)
0x74: Push((int) 519643)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x45f

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: Push((int) 519644)
0x7f: Push((int) 20823)
0x80: Push((int) 20821)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 519645)
0x84: Push((int) -1)
0x85: Push((int) 20822)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x428

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x3c8

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all")
0x9b: Push("idle")
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x428

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-2] = Stack[-3]
0xb5: Push("")
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0x3d8

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x3f6

0xc4: Pop(0)
0xc5: Push((int) 20471)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x442

0xcc: Pop(2)
0xcd: Push((int) 20472)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x442

0xd4: Pop(2)
0xd5: Push((int) 20821)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x459

0xdc: Pop(2)
0xdd: Push((int) 20448)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x46b

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0xa9

0xe8: Pop(1)
0xe9: Push((int) 519294)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 519295)
0xef: Push((int) 20450)
0xf0: Push((int) 20449)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Push((int) 519300)
0xf4: Push((int) 20455)
0xf5: Push((int) 20454)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral"
0xfb: Call2 0xa9

0xfc: Pop(1)
0xfd: Push((int) 519643)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104: Call2 0x45f

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x107: Push((int) 519644)
0x108: Push((int) 20823)
0x109: Push((int) 20821)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Push((int) 519645)
0x10d: Push((int) -1)
0x10e: Push((int) 20822)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 20823)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral"
0x117: Call2 0xa9

0x118: Pop(1)
0x119: Push((int) 519646)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 519647)
0x11f: Push((int) 20825)
0x120: Push((int) 20824)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Push((int) 527865)
0x124: Push((int) 20825)
0x125: Push((int) 29210)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 20825)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Neutral"
0x12e: Call2 0xa9

0x12f: Pop(1)
0x130: Push((int) 519648)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: Push((int) 519649)
0x136: Push((int) -1)
0x137: Push((int) 20826)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Return(); Pop(0)

0x13b: Push((int) 20455)
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x13e: PushEmpty(string)
0x13f: Stack[-1] = "Neutral"
0x140: Call2 0xa9

0x141: Pop(1)
0x142: Push((int) 519301)
0x143: @@ SetMessage(Stack[-1])
0x144: Pop(1)
0x145: @@ ClearReplies()
0x146: Pop(0)
0x147: Push((int) 519304)
0x148: Push((int) 20459)
0x149: Push((int) 20458)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 20450)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral"
0x152: Call2 0xa9

0x153: Pop(1)
0x154: Push((int) 519296)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 519297)
0x15a: Push((int) 20452)
0x15b: Push((int) 20451)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 20452)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral"
0x164: Call2 0xa9

0x165: Pop(1)
0x166: Push((int) 519298)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 519299)
0x16c: Push((int) 20456)
0x16d: Push((int) 20453)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 519317)
0x171: Push((int) 20474)
0x172: Push((int) 20473)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 20474)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral"
0x17b: Call2 0xa9

0x17c: Pop(1)
0x17d: Push((int) 519318)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 519319)
0x183: Push((int) 20476)
0x184: Push((int) 20475)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 519322)
0x188: Push((int) 20456)
0x189: Push((int) 20479)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 20476)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral"
0x192: Call2 0xa9

0x193: Pop(1)
0x194: Push((int) 519320)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 519321)
0x19a: Push((int) 20456)
0x19b: Push((int) 20477)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 20456)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral"
0x1a4: Call2 0xa9

0x1a5: Pop(1)
0x1a6: Push((int) 519302)
0x1a7: @@ SetMessage(Stack[-1])
0x1a8: Pop(1)
0x1a9: @@ ClearReplies()
0x1aa: Pop(0)
0x1ab: Push((int) 519303)
0x1ac: Push((int) 20459)
0x1ad: Push((int) 20457)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 20459)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral"
0x1b6: Call2 0xa9

0x1b7: Pop(1)
0x1b8: Push((int) 519305)
0x1b9: @@ SetMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ ClearReplies()
0x1bc: Pop(0)
0x1bd: Push((int) 519306)
0x1be: Push((int) 20462)
0x1bf: Push((int) 20461)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Push((int) 519638)
0x1c3: Push((int) 20817)
0x1c4: Push((int) 20816)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 20817)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral"
0x1cd: Call2 0xa9

0x1ce: Pop(1)
0x1cf: Push((int) 519639)
0x1d0: @@ SetMessage(Stack[-1])
0x1d1: Pop(1)
0x1d2: @@ ClearReplies()
0x1d3: Pop(0)
0x1d4: Push((int) 519640)
0x1d5: Push((int) 20470)
0x1d6: Push((int) 20818)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 20462)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral"
0x1df: Call2 0xa9

0x1e0: Pop(1)
0x1e1: Push((int) 519307)
0x1e2: @@ SetMessage(Stack[-1])
0x1e3: Pop(1)
0x1e4: @@ ClearReplies()
0x1e5: Pop(0)
0x1e6: Push((int) 519308)
0x1e7: Push((int) 20464)
0x1e8: Push((int) 20463)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Return(); Pop(0)

0x1ec: Push((int) 20464)
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ef: PushEmpty(string)
0x1f0: Stack[-1] = "Neutral"
0x1f1: Call2 0xa9

0x1f2: Pop(1)
0x1f3: Push((int) 519309)
0x1f4: @@ SetMessage(Stack[-1])
0x1f5: Pop(1)
0x1f6: @@ ClearReplies()
0x1f7: Pop(0)
0x1f8: Push((int) 519310)
0x1f9: Push((int) 20467)
0x1fa: Push((int) 20465)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: Push((int) 519311)
0x1fe: Push((int) 20467)
0x1ff: Push((int) 20466)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: Push((int) 20467)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral"
0x208: Call2 0xa9

0x209: Pop(1)
0x20a: Push((int) 519312)
0x20b: @@ SetMessage(Stack[-1])
0x20c: Pop(1)
0x20d: @@ ClearReplies()
0x20e: Pop(0)
0x20f: Push((int) 519313)
0x210: Push((int) 20470)
0x211: Push((int) 20469)
0x212: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x213: Pop(3)
0x214: Return(); Pop(0)

0x215: Push((int) 20470)
0x216: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x218: PushEmpty(string)
0x219: Stack[-1] = "Neutral"
0x21a: Call2 0xa9

0x21b: Pop(1)
0x21c: Push((int) 519314)
0x21d: @@ SetMessage(Stack[-1])
0x21e: Pop(1)
0x21f: @@ ClearReplies()
0x220: Pop(0)
0x221: Push((int) 519315)
0x222: Push((int) -1)
0x223: Push((int) 20471)
0x224: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x225: Pop(3)
0x226: Push((int) 519316)
0x227: Push((int) -1)
0x228: Push((int) 20472)
0x229: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22a: Pop(3)
0x22b: Return(); Pop(0)

0x22c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22d: PushEmpty(bool)
0x22e: Call2 0x428

0x22f: Pop(0)
0x230: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x231: @ lshStopAnimation()
0x232: Pop(0)
0x233: GOTO 0x236

0x234: @ StopAnimation()
0x235: Pop(0)
0x236: Return(); Pop(0)

0x237: GOTO 0xc0

0x238: Return(); Pop(0)

0x239: PushEmpty()
0x23a: PushEmpty()
0x23b: Call2 0x2dd

0x23c: Pop(0)
0x23d: PushEmpty(int, object)
0x23e: Stack[-1] = Stack[-3]
0x23f: Push(-2, 1); TaskCall(0)
0x240: Call2 0x0

0x241: Pop(-2, 1); TaskReturn
0x242: Pop(2)
0x243: Return(); Pop(0)

0x244: PushEmpty(float, float)
0x245: PushEmpty(bool)
0x246: Call2 0x2e2

0x247: Pop(0)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24a: @ Hold()
0x24b: Pop(0)
0x24c: GOTO 0x245

0x24d: Push((int) 3)
0x24e: @ rand(Stack[-2], Stack[-1])
0x24f: Pop(1)
0x250: Push((int) 3)
0x251: Pop(1); Push(Stack[-2] + Stack[-1]);
0x252: @ Sleep(Stack[-1])
0x253: Pop(1)
0x254: PushEmpty()
0x255: Call2 0x28c

0x256: Pop(0)
0x257: GOTO 0x245

0x258: Return(); Pop(2)

0x259: PushEmpty(bool, bool)
0x25a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x25b: @ IsLoaded(Stack[-1])
0x25c: Pop(0)
0x25d: PushEmpty(bool)
0x25e: Stack[-1] = (bool) 0
0x25f: Pop(0); Push((bool) Stack[-2] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x261: PushEmpty(bool)
0x262: Call2 0x28a

0x263: Pop(0)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: Stack[-1] = (bool) 1
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: PushEmpty(object)
0x268: Call2 0x3fd

0x269: Pop(0)
0x26a: @ RemoveActor(Stack[-1])
0x26b: Pop(1)
0x26c: Return(); Pop(2)

0x26d: PushEmpty()
0x26e: Push("cleanup")
0x26f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x271: PushEmpty()
0x272: Call2 0x259

0x273: Pop(0)
0x274: Return(); Pop(0)

0x275: @ StopGroup0()
0x276: Pop(0)
0x277: @ sync()
0x278: Pop(0)
0x279: Return(); Pop(0)

0x27a: PushEmpty(bool)
0x27b: Stack[-1] = (bool) 0
0x27c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x27d: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27e: PushEmpty(bool)
0x27f: Call2 0x28a

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Stack[-1] = (bool) 1
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: PushEmpty(object)
0x285: Call2 0x3fd

0x286: Pop(0)
0x287: @ RemoveActor(Stack[-1])
0x288: Pop(1)
0x289: Return(); Pop(0)

0x28a: Stack[-1] = (bool) 1
0x28b: Return(); Pop(0)

0x28c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x28d: @ WaitForAnimEnd()
0x28e: Pop(0)
0x28f: PushEmpty(bool)
0x290: Call2 0x2e2

0x291: Pop(0)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Return(); Pop(14)

0x295: PushEmpty(int)
0x296: Call2 0x431

0x297: Stack[-8] = Stack[-1]
0x298: Pop(1)
0x299: Stack[-6] = (int) 0
0x29a: PushEmpty(bool)
0x29b: Stack[-1] = (bool) 0
0x29c: Push((int) 5)
0x29d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29f: PushEmpty(bool)
0x2a0: Call2 0x2e2

0x2a1: Pop(0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = (bool) 1
0x2a4: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2a5: Push((int) 3)
0x2a6: @ irand(Stack[-6], Stack[-1])
0x2a7: Pop(1)
0x2a8: Push((int) 0)
0x2a9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ab: Push(Stack[-7])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ad: @ irand(Stack[-4], Stack[-7])
0x2ae: Pop(0)
0x2af: Push("all")
0x2b0: PushEmpty(string, int)
0x2b1: Stack[-1] = Stack[-7]
0x2b2: Call2 0x42a

0x2b3: Pop(1)
0x2b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: @ WaitForAnimEnd(Stack[-3])
0x2b7: Pop(0)
0x2b8: Pop(0); Push((bool) Stack[-3] == 0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: GOTO 0x2d8

0x2bb: GOTO 0x2cd

0x2bc: Push((int) 1)
0x2bd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2bf: Push((int) 4)
0x2c0: @ rand(Stack[-3], Stack[-1])
0x2c1: Pop(1)
0x2c2: Push((int) 1)
0x2c3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2c4: @ Sleep(Stack[-1], Stack[-2])
0x2c5: Pop(1)
0x2c6: Pop(0); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: GOTO 0x2d8

0x2c9: GOTO 0x2cd

0x2ca: Push(Stack[-6])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: GOTO 0x2d8

0x2cd: PushEmpty(bool)
0x2ce: Call2 0x2db

0x2cf: Pop(0)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: GOTO 0x2d8

0x2d3: @ ResetAAS()
0x2d4: Pop(0)
0x2d5: Push((int) 1)
0x2d6: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2d7: GOTO 0x29a

0x2d8: @ ResetAAS()
0x2d9: Pop(0)
0x2da: Return(); Pop(14)

0x2db: Stack[-1] = (bool) 1
0x2dc: Return(); Pop(0)

0x2dd: @ StopAnimation()
0x2de: Pop(0)
0x2df: @ StopGroup0()
0x2e0: Pop(0)
0x2e1: Return(); Pop(0)

0x2e2: PushEmpty(bool, bool)
0x2e3: @ IsLoaded(Stack[-1])
0x2e4: Pop(0)
0x2e5: Stack[-3] = Stack[-1]
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2e8: @@ GetPosition(Stack[-8])
0x2e9: Pop(0)
0x2ea: @@ GetEyesHeight(Stack[-9])
0x2eb: Pop(0)
0x2ec: Push(CvectorIndex(Stack[-8], 1))
0x2ed: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ee: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2ef: @ GetPosition(Stack[-7])
0x2f0: Pop(0)
0x2f1: @ GetEyesHeight(Stack[-9])
0x2f2: Pop(0)
0x2f3: Push(CvectorIndex(Stack[-7], 1))
0x2f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2f6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2f7: Push(CvectorIndex(Stack[-6], 1))
0x2f8: Stack[-1] = (int) 0
0x2f9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2fa: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2fb: Pop(1); Push(Sqrt(Stack[-1]))
0x2fc: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2fd: Stack[-5] = -Stack[-6]; Pop(0);
0x2fe: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ff: PushEmpty(cvector, cvector)
0x300: Push(CVector(0.0, 1.0, 0.0))
0x301: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x302: Call2 0x403

0x303: Pop(1)
0x304: Push((int) 25)
0x305: Pop(2); Push(Stack[-2] * Stack[-1]);
0x306: Pop(2); Push(Stack[-2] + Stack[-1]);
0x307: Push(CVector(0.0, 10.0, 0.0))
0x308: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x309: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x30a: @ IsOverrideActive(Stack[-2])
0x30b: Pop(0)
0x30c: Push(Stack[-2])
0x30d: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30e: Stack[-21] = (bool) 0
0x30f: Return(); Pop(18)

0x310: @ StopWorld()
0x311: Pop(0)
0x312: Push((bool) 1)
0x313: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x314: Pop(1)
0x315: Push(CvectorIndex(Stack[-4], 0))
0x316: Push(CvectorIndex(Stack[-5], 2))
0x317: @ Rotate(Stack[-2], Stack[-1])
0x318: Pop(2)
0x319: PushEmpty(bool)
0x31a: Call2 0x428

0x31b: Pop(0)
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: GOTO 0x326

0x31e: Push("head")
0x31f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x320: Pop(1)
0x321: Push(Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x323: Push("head")
0x324: @ LookAsyncCamera(Stack[-1])
0x325: Pop(1)
0x326: @ CameraWaitForPlayFinish()
0x327: Pop(0)
0x328: @ ResumeWorld()
0x329: Pop(0)
0x32a: Stack[-21] = (bool) 1
0x32b: Return(); Pop(18)

0x32c: PushEmpty(bool, bool)
0x32d: Push((bool) 1)
0x32e: @ CameraSwitchToNormal(Stack[-1])
0x32f: Pop(1)
0x330: PushEmpty(bool)
0x331: Call2 0x428

0x332: Pop(0)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: GOTO 0x33d

0x335: Push("head")
0x336: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x337: Pop(1)
0x338: Push(Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33a: Push("head")
0x33b: @ UnlookAsync(Stack[-1])
0x33c: Pop(1)
0x33d: Return(); Pop(2)

0x33e: PushEmpty(int, int, int, int)
0x33f: Push("voice_common")
0x340: @ GetVariable(Stack[-1], Stack[-3])
0x341: Pop(1)
0x342: Push(Stack[-2])
0x343: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x344: PushEmpty(bool, object)
0x345: Stack[-1] = Stack[-7]
0x346: Call2 0x378

0x347: Pop(1)
0x348: Pop(1); Push((bool) Stack[-1] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34a: PushEmpty(bool, object)
0x34b: Stack[-1] = Stack[-7]
0x34c: Call2 0x39d

0x34d: Pop(1)
0x34e: Pop(1); Push((bool) Stack[-1] == 0)
0x34f: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x350: Stack[-6] = (bool) 0
0x351: Return(); Pop(4)

0x352: Push((int) 2)
0x353: @ irand(Stack[-2], Stack[-1])
0x354: Pop(1)
0x355: Push(Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x357: Push("voice_common")
0x358: Push((int) 1)
0x359: Pop(1); Push(Stack[-4] + Stack[-1]);
0x35a: Push((int) 3)
0x35b: Pop(2); Push(Stack[-2] % Stack[-1]);
0x35c: @ SetVariable(Stack[-2], Stack[-1])
0x35d: Pop(2)
0x35e: GOTO 0x363

0x35f: Push("voice_common")
0x360: Push((int) 0)
0x361: @ SetVariable(Stack[-2], Stack[-1])
0x362: Pop(2)
0x363: GOTO 0x376

0x364: PushEmpty(bool, object)
0x365: Stack[-1] = Stack[-7]
0x366: Call2 0x39d

0x367: Pop(1)
0x368: Pop(1); Push((bool) Stack[-1] == 0)
0x369: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36a: PushEmpty(bool, object)
0x36b: Stack[-1] = Stack[-7]
0x36c: Call2 0x378

0x36d: Pop(1)
0x36e: Pop(1); Push((bool) Stack[-1] == 0)
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-6] = (bool) 0
0x371: Return(); Pop(4)

0x372: Push("voice_common")
0x373: Push((int) 1)
0x374: @ SetVariable(Stack[-2], Stack[-1])
0x375: Pop(2)
0x376: Stack[-6] = (bool) 1
0x377: Return(); Pop(4)

0x378: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x379: Stack[-5] = "c"
0x37a: Stack[-4] = (int) 0
0x37b: Push((int) 1)
0x37c: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x37d: Push((int) 1)
0x37e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x37f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x380: @@ HasProperty(Stack[-1], Stack[-4])
0x381: Pop(1)
0x382: Pop(0); Push((bool) Stack[-3] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: GOTO 0x388

0x385: Push((int) 1)
0x386: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x387: GOTO 0x37b

0x388: Pop(0); Push((bool) Stack[-4] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-12] = (bool) 0
0x38b: Return(); Pop(10)

0x38c: Stack[-2] = (int) 0
0x38d: Push((int) 1)
0x38e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x390: @ irand(Stack[-2], Stack[-4])
0x391: Pop(0)
0x392: Push((int) 1)
0x393: Pop(1); Push(Stack[-3] + Stack[-1]);
0x394: Pop(1); Push(Stack[-6] + Stack[-1]);
0x395: @@ GetProperty(Stack[-1], Stack[-2])
0x396: Pop(1)
0x397: PushEmpty(bool, string)
0x398: Stack[-1] = Stack[-3]
0x399: Call2 0x3e7

0x39a: Stack[-14] = Stack[-2]
0x39b: Pop(2)
0x39c: Return(); Pop(10)

0x39d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x39e: Push("d")
0x39f: PushEmpty(int)
0x3a0: Call2 0x417

0x3a1: Pop(0)
0x3a2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a3: Push("m")
0x3a4: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3a5: Stack[-4] = (int) 0
0x3a6: Push((int) 1)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3a8: Push((int) 1)
0x3a9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3aa: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ab: @@ HasProperty(Stack[-1], Stack[-4])
0x3ac: Pop(1)
0x3ad: Pop(0); Push((bool) Stack[-3] == 0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3af: GOTO 0x3b3

0x3b0: Push((int) 1)
0x3b1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b2: GOTO 0x3a6

0x3b3: Pop(0); Push((bool) Stack[-4] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b5: Stack[-12] = (bool) 0
0x3b6: Return(); Pop(10)

0x3b7: Stack[-2] = (int) 0
0x3b8: Push((int) 1)
0x3b9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bb: @ irand(Stack[-2], Stack[-4])
0x3bc: Pop(0)
0x3bd: Push((int) 1)
0x3be: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3bf: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c0: @@ GetProperty(Stack[-1], Stack[-2])
0x3c1: Pop(1)
0x3c2: PushEmpty(bool, string)
0x3c3: Stack[-1] = Stack[-3]
0x3c4: Call2 0x3e7

0x3c5: Stack[-14] = Stack[-2]
0x3c6: Pop(2)
0x3c7: Return(); Pop(10)

0x3c8: PushEmpty(bool, float, float, bool, float, float)
0x3c9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3ca: Pop(0)
0x3cb: Push(Stack[-3])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cd: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3ce: Pop(0)
0x3cf: Push((bool) 0)
0x3d0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(1)
0x3d2: GOTO 0x3d7

0x3d3: Push("Can't find lsh animation : ")
0x3d4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d5: @ Trace(Stack[-1])
0x3d6: Pop(1)
0x3d7: Return(); Pop(6)

0x3d8: PushEmpty(bool, float, float, bool, float, float)
0x3d9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3da: Pop(0)
0x3db: Push(Stack[-3])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3dd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3de: Pop(0)
0x3df: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3e0: Pop(0)
0x3e1: GOTO 0x3e6

0x3e2: Push("Can't find lsh animation : ")
0x3e3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3e4: @ Trace(Stack[-1])
0x3e5: Pop(1)
0x3e6: Return(); Pop(6)

0x3e7: PushEmpty(bool, bool)
0x3e8: PushEmpty(bool)
0x3e9: Call2 0x428

0x3ea: Pop(0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ec: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3ed: Pop(0)
0x3ee: Push(Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f0: @ lshPlaySpeech(Stack[-3])
0x3f1: Pop(0)
0x3f2: Stack[-4] = (bool) 1
0x3f3: Return(); Pop(2)

0x3f4: Stack[-4] = (bool) 0
0x3f5: Return(); Pop(2)

0x3f6: PushEmpty(bool)
0x3f7: Call2 0x428

0x3f8: Pop(0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: @ lshStopSpeech()
0x3fb: Pop(0)
0x3fc: Return(); Pop(0)

0x3fd: PushEmpty(object, object)
0x3fe: @ self(Stack[-1])
0x3ff: Pop(0)
0x400: Stack[-3] = Stack[-1]
0x401: Return(); Pop(2)

0x402: Stack[-1] = 0
0x403: PushEmpty(float, float)
0x404: Pop(0); Push(Stack[-3] | Stack[-3]);
0x405: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x406: Push((float)0.0)
0x407: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x40a: Return(); Pop(2)

0x40b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x40c: Return(); Pop(2)

0x40d: PushEmpty(int, int)
0x40e: @ GetVariable(Stack[-3], Stack[-1])
0x40f: Pop(0)
0x410: Stack[-4] = Stack[-1]
0x411: Return(); Pop(2)

0x412: PushEmpty(float, float)
0x413: @ GetGameTime(Stack[-1])
0x414: Pop(0)
0x415: Stack[-3] = Stack[-1]
0x416: Return(); Pop(2)

0x417: PushEmpty(float, float)
0x418: @ GetGameTime(Stack[-1])
0x419: Pop(0)
0x41a: Push((int) 1)
0x41b: PushEmpty(int)
0x41c: Push((int) 24)
0x41d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x41e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x41f: Return(); Pop(2)

0x420: Stack[-1] = (int) 515562
0x421: Return(); Pop(0)

0x422: Stack[-1] = (int) 503347
0x423: Return(); Pop(0)

0x424: Stack[-1] = "ui/NPC_Citizen1.png"
0x425: Return(); Pop(0)

0x426: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x427: Return(); Pop(0)

0x428: Stack[-1] = (bool) 0
0x429: Return(); Pop(0)

0x42a: PushEmpty(string, string)
0x42b: Stack[-1] = "idle"
0x42c: Push(Stack[-3])
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x42f: Stack[-4] = Stack[-1]
0x430: Return(); Pop(2)

0x431: PushEmpty(int, bool, int, bool)
0x432: Stack[-2] = (int) 0
0x433: Push("all")
0x434: PushEmpty(string, int)
0x435: Stack[-1] = Stack[-5]
0x436: Call2 0x42a

0x437: Pop(1)
0x438: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x439: Pop(2)
0x43a: Pop(0); Push((bool) Stack[-1] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: GOTO 0x440

0x43d: Push((int) 1)
0x43e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x43f: GOTO 0x433

0x440: Stack[-5] = Stack[-2]
0x441: Return(); Pop(4)

0x442: PushEmpty(object, object)
0x443: Push("b3q01")
0x444: Push((int) 3)
0x445: @ SetVariable(Stack[-2], Stack[-1])
0x446: Pop(2)
0x447: PushEmpty(object)
0x448: Call2 0x4ad

0x449: Stack[-2] = Stack[-1]
0x44a: Pop(1)
0x44b: Push("b3q01ButcherGotoBigVlad")
0x44c: Push("pt_map_bigvlad")
0x44d: Push((int) 1)
0x44e: Push((int) 519641)
0x44f: PushEmpty(float)
0x450: Call2 0x412

0x451: Pop(0)
0x452: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x453: Pop(5)
0x454: PushEmpty()
0x455: Call2 0x477

0x456: Pop(0)
0x457: Return(); Pop(2)

0x458: Stack[-1] = 0
0x459: PushEmpty()
0x45a: Push("oob3Butcher1")
0x45b: Push((int) 1)
0x45c: @ SetVariable(Stack[-2], Stack[-1])
0x45d: Pop(2)
0x45e: Return(); Pop(0)

0x45f: PushEmpty()
0x460: PushEmpty(int, string)
0x461: Stack[-1] = "oob3Butcher1"
0x462: Call2 0x40d

0x463: Pop(1)
0x464: Push((int) 0)
0x465: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-2] = (bool) 1
0x468: Return(); Pop(0)

0x469: Stack[-2] = (bool) 0
0x46a: Return(); Pop(0)

0x46b: PushEmpty()
0x46c: PushEmpty(int, string)
0x46d: Stack[-1] = "b3q01"
0x46e: Call2 0x40d

0x46f: Pop(1)
0x470: Push((int) 2)
0x471: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-2] = (bool) 1
0x474: Return(); Pop(0)

0x475: Stack[-2] = (bool) 0
0x476: Return(); Pop(0)

0x477: PushEmpty(object, object)
0x478: Push((int) 224)
0x479: Push((int) 1)
0x47a: Push((int) 519642)
0x47b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x47c: Pop(3)
0x47d: PushEmpty(bool, object, int)
0x47e: Stack[-2] = Stack[-4]
0x47f: Stack[-1] = (int) 221
0x480: Call2 0x491

0x481: Pop(3)
0x482: Return(); Pop(2)

0x483: Stack[-1] = 0
0x484: PushEmpty(object, object)
0x485: @ GetDiaryRoot(Stack[-1])
0x486: Pop(0)
0x487: Pop(0); Push((bool) Stack[-1] == 0)
0x488: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x489: Push("Can't retrieve diary root")
0x48a: @ Trace(Stack[-1])
0x48b: Pop(1)
0x48c: Stack[-3] = (bool) 0
0x48d: Return(); Pop(2)

0x48e: Stack[-3] = Stack[-1]
0x48f: Return(); Pop(2)

0x490: Stack[-1] = 0
0x491: PushEmpty(object, object, int, object, object, int)
0x492: PushEmpty(object)
0x493: Call2 0x484

0x494: Stack[-4] = Stack[-1]
0x495: Pop(1)
0x496: @@ Find(Stack[-7], Stack[-2])
0x497: Pop(0)
0x498: Pop(0); Push((bool) Stack[-2] == 0)
0x499: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49a: Push("Can't find diary parent with id: ")
0x49b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x49c: @ Trace(Stack[-1])
0x49d: Pop(1)
0x49e: Stack[-9] = (bool) 0
0x49f: Return(); Pop(6)

0x4a0: @@ AddChild(Stack[-8])
0x4a1: Pop(0)
0x4a2: Push((int) 7)
0x4a3: @ SendWorldWndMessage(Stack[-1])
0x4a4: Pop(1)
0x4a5: @@ GetCategory(Stack[-1])
0x4a6: Pop(0)
0x4a7: @ SetDiarySection(Stack[-1])
0x4a8: Pop(0)
0x4a9: Stack[-9] = (bool) 0
0x4aa: Return(); Pop(6)

0x4ab: Stack[-2] = 0
0x4ac: Stack[-3] = 0
0x4ad: PushEmpty(object, object, object, object)
0x4ae: @ GetMainOutdoorScene(Stack[-2])
0x4af: Pop(0)
0x4b0: Pop(0); Push((bool) Stack[-2] == 0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b2: Push("Can't find main outdoor scene")
0x4b3: @ Trace(Stack[-1])
0x4b4: Pop(1)
0x4b5: Stack[-1] = 0
0x4b6: Stack[-5] = Stack[-1]
0x4b7: Return(); Pop(4)

0x4b8: @@ GetMap(Stack[-1])
0x4b9: Pop(0)
0x4ba: Stack[-5] = Stack[-1]
0x4bb: Return(); Pop(4)

0x4bc: Stack[-1] = 0
0x4bd: Stack[-2] = 0
0x4be: PushEmpty(int, int)
0x4bf: Push("branch")
0x4c0: @ GetVariable(Stack[-1], Stack[-2])
0x4c1: Pop(1)
0x4c2: Push((int) 0)
0x4c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c5: Stack[-3] = (int) 1
0x4c6: Return(); Pop(2)

0x4c7: GOTO 0x4cd

0x4c8: Push((int) 1)
0x4c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cb: Stack[-3] = (int) 2
0x4cc: Return(); Pop(2)

0x4cd: Stack[-3] = (int) 3
0x4ce: Return(); Pop(2)

