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
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x214
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb5 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x209 Vars = (object)
		EVENT_26 Op = 0x23d Vars = (string)
		EVENT_5 Op = 0x245 Vars = ()
		EVENT_6 Op = 0x24a Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2b7

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3f0

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3ee

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3f2

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3f4

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x47a

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
0x31: Call2 0x3cb

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x30c

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
0x48: Call2 0x2fb

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
0x56: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x427

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0x9f

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
0x6f: GOTO 0x81

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0x9f

0x73: Pop(1)
0x74: Push((int) 519643)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 519645)
0x7a: Push((int) -1)
0x7b: Push((int) 20822)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: GOTO 0x81

0x7f: Return(); Pop(0)

0x80: GOTO 0x55

0x81: PushEmpty(bool)
0x82: Call2 0x3f6

0x83: Pop(0)
0x84: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x85: @ lshWaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: PushEmpty(string)
0x8b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8c: Call2 0x396

0x8d: Pop(1)
0x8e: GOTO 0x85

0x8f: GOTO 0x9e

0x90: Push("all")
0x91: Push("idle")
0x92: @ PlayAnimation(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: @ WaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: Push("all")
0x9a: Push("idle")
0x9b: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c: Pop(2)
0x9d: GOTO 0x94

0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: PushEmpty(bool)
0xa1: Call2 0x3f6

0xa2: Pop(0)
0xa3: Pop(1); Push((bool) Stack[-1] == 0)
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: Return(); Pop(0)

0xa6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: PushEmpty(string, bool)
0xaa: Stack[-2] = Stack[-3]
0xab: Push("")
0xac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xae: Stack[-1] = (bool) 0
0xaf: GOTO 0xb1

0xb0: Stack[-1] = (bool) 1
0xb1: Call2 0x3a6

0xb2: Pop(2)
0xb3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: Push((int) 1)
0xb7: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0x3c4

0xba: Pop(0)
0xbb: Push((int) 20471)
0xbc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: PushEmpty(object, object)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Call2 0x410

0xc2: Pop(2)
0xc3: Push((int) 20472)
0xc4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x410

0xca: Pop(2)
0xcb: Push((int) 20448)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x427

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0x9f

0xd6: Pop(1)
0xd7: Push((int) 519294)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 519295)
0xdd: Push((int) 20450)
0xde: Push((int) 20449)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 519300)
0xe2: Push((int) 20455)
0xe3: Push((int) 20454)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral"
0xe9: Call2 0x9f

0xea: Pop(1)
0xeb: Push((int) 519643)
0xec: @@ SetMessage(Stack[-1])
0xed: Pop(1)
0xee: @@ ClearReplies()
0xef: Pop(0)
0xf0: Push((int) 519645)
0xf1: Push((int) -1)
0xf2: Push((int) 20822)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 20823)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf9: Push((int) 20825)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral"
0xfe: Call2 0x9f

0xff: Pop(1)
0x100: Push((int) 519648)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: Push((int) 519649)
0x106: Push((int) -1)
0x107: Push((int) 20826)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Push((int) 20455)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral"
0x110: Call2 0x9f

0x111: Pop(1)
0x112: Push((int) 519301)
0x113: @@ SetMessage(Stack[-1])
0x114: Pop(1)
0x115: @@ ClearReplies()
0x116: Pop(0)
0x117: Push((int) 519304)
0x118: Push((int) 20459)
0x119: Push((int) 20458)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 20450)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0x9f

0x123: Pop(1)
0x124: Push((int) 519296)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 519297)
0x12a: Push((int) 20452)
0x12b: Push((int) 20451)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 20452)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral"
0x134: Call2 0x9f

0x135: Pop(1)
0x136: Push((int) 519298)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 519299)
0x13c: Push((int) 20456)
0x13d: Push((int) 20453)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Push((int) 519317)
0x141: Push((int) 20474)
0x142: Push((int) 20473)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 20474)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral"
0x14b: Call2 0x9f

0x14c: Pop(1)
0x14d: Push((int) 519318)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: Push((int) 519319)
0x153: Push((int) 20476)
0x154: Push((int) 20475)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Push((int) 519322)
0x158: Push((int) 20456)
0x159: Push((int) 20479)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 20476)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral"
0x162: Call2 0x9f

0x163: Pop(1)
0x164: Push((int) 519320)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: Push((int) 519321)
0x16a: Push((int) 20456)
0x16b: Push((int) 20477)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 20456)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call2 0x9f

0x175: Pop(1)
0x176: Push((int) 519302)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 519303)
0x17c: Push((int) 20459)
0x17d: Push((int) 20457)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 20459)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral"
0x186: Call2 0x9f

0x187: Pop(1)
0x188: Push((int) 519305)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 519306)
0x18e: Push((int) 20462)
0x18f: Push((int) 20461)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 519638)
0x193: Push((int) 20817)
0x194: Push((int) 20816)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 20817)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral"
0x19d: Call2 0x9f

0x19e: Pop(1)
0x19f: Push((int) 519639)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 519640)
0x1a5: Push((int) 20470)
0x1a6: Push((int) 20818)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 20462)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0x9f

0x1b0: Pop(1)
0x1b1: Push((int) 519307)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 519308)
0x1b7: Push((int) 20464)
0x1b8: Push((int) 20463)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 20464)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral"
0x1c1: Call2 0x9f

0x1c2: Pop(1)
0x1c3: Push((int) 519309)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 519310)
0x1c9: Push((int) 20467)
0x1ca: Push((int) 20465)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Push((int) 519311)
0x1ce: Push((int) 20467)
0x1cf: Push((int) 20466)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 20467)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Neutral"
0x1d8: Call2 0x9f

0x1d9: Pop(1)
0x1da: Push((int) 519312)
0x1db: @@ SetMessage(Stack[-1])
0x1dc: Pop(1)
0x1dd: @@ ClearReplies()
0x1de: Pop(0)
0x1df: Push((int) 519313)
0x1e0: Push((int) 20470)
0x1e1: Push((int) 20469)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Push((int) 20470)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = "Neutral"
0x1ea: Call2 0x9f

0x1eb: Pop(1)
0x1ec: Push((int) 519314)
0x1ed: @@ SetMessage(Stack[-1])
0x1ee: Pop(1)
0x1ef: @@ ClearReplies()
0x1f0: Pop(0)
0x1f1: Push((int) 519315)
0x1f2: Push((int) -1)
0x1f3: Push((int) 20471)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Push((int) 519316)
0x1f7: Push((int) -1)
0x1f8: Push((int) 20472)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Return(); Pop(0)

0x1fc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1fd: PushEmpty(bool)
0x1fe: Call2 0x3f6

0x1ff: Pop(0)
0x200: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x201: @ lshStopAnimation()
0x202: Pop(0)
0x203: GOTO 0x206

0x204: @ StopAnimation()
0x205: Pop(0)
0x206: Return(); Pop(0)

0x207: GOTO 0xb6

0x208: Return(); Pop(0)

0x209: PushEmpty()
0x20a: PushEmpty()
0x20b: Call2 0x2ad

0x20c: Pop(0)
0x20d: PushEmpty(int, object)
0x20e: Stack[-1] = Stack[-3]
0x20f: Push(-2, 1); TaskCall(0)
0x210: Call2 0x0

0x211: Pop(-2, 1); TaskReturn
0x212: Pop(2)
0x213: Return(); Pop(0)

0x214: PushEmpty(float, float)
0x215: PushEmpty(bool)
0x216: Call2 0x2b2

0x217: Pop(0)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21a: @ Hold()
0x21b: Pop(0)
0x21c: GOTO 0x215

0x21d: Push((int) 3)
0x21e: @ rand(Stack[-2], Stack[-1])
0x21f: Pop(1)
0x220: Push((int) 3)
0x221: Pop(1); Push(Stack[-2] + Stack[-1]);
0x222: @ Sleep(Stack[-1])
0x223: Pop(1)
0x224: PushEmpty()
0x225: Call2 0x25c

0x226: Pop(0)
0x227: GOTO 0x215

0x228: Return(); Pop(2)

0x229: PushEmpty(bool, bool)
0x22a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x22b: @ IsLoaded(Stack[-1])
0x22c: Pop(0)
0x22d: PushEmpty(bool)
0x22e: Stack[-1] = (bool) 0
0x22f: Pop(0); Push((bool) Stack[-2] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x231: PushEmpty(bool)
0x232: Call2 0x25a

0x233: Pop(0)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Stack[-1] = (bool) 1
0x236: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x237: PushEmpty(object)
0x238: Call2 0x3cb

0x239: Pop(0)
0x23a: @ RemoveActor(Stack[-1])
0x23b: Pop(1)
0x23c: Return(); Pop(2)

0x23d: PushEmpty()
0x23e: Push("cleanup")
0x23f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x241: PushEmpty()
0x242: Call2 0x229

0x243: Pop(0)
0x244: Return(); Pop(0)

0x245: @ StopGroup0()
0x246: Pop(0)
0x247: @ sync()
0x248: Pop(0)
0x249: Return(); Pop(0)

0x24a: PushEmpty(bool)
0x24b: Stack[-1] = (bool) 0
0x24c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: PushEmpty(bool)
0x24f: Call2 0x25a

0x250: Pop(0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: Stack[-1] = (bool) 1
0x253: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x254: PushEmpty(object)
0x255: Call2 0x3cb

0x256: Pop(0)
0x257: @ RemoveActor(Stack[-1])
0x258: Pop(1)
0x259: Return(); Pop(0)

0x25a: Stack[-1] = (bool) 1
0x25b: Return(); Pop(0)

0x25c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x25d: @ WaitForAnimEnd()
0x25e: Pop(0)
0x25f: PushEmpty(bool)
0x260: Call2 0x2b2

0x261: Pop(0)
0x262: Pop(1); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: Return(); Pop(14)

0x265: PushEmpty(int)
0x266: Call2 0x3ff

0x267: Stack[-8] = Stack[-1]
0x268: Pop(1)
0x269: Stack[-6] = (int) 0
0x26a: PushEmpty(bool)
0x26b: Stack[-1] = (bool) 0
0x26c: Push((int) 5)
0x26d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x26f: PushEmpty(bool)
0x270: Call2 0x2b2

0x271: Pop(0)
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: Stack[-1] = (bool) 1
0x274: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x275: Push((int) 3)
0x276: @ irand(Stack[-6], Stack[-1])
0x277: Pop(1)
0x278: Push((int) 0)
0x279: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x27b: Push(Stack[-7])
0x27c: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x27d: @ irand(Stack[-4], Stack[-7])
0x27e: Pop(0)
0x27f: Push("all")
0x280: PushEmpty(string, int)
0x281: Stack[-1] = Stack[-7]
0x282: Call2 0x3f8

0x283: Pop(1)
0x284: @ PlayAnimation(Stack[-2], Stack[-1])
0x285: Pop(2)
0x286: @ WaitForAnimEnd(Stack[-3])
0x287: Pop(0)
0x288: Pop(0); Push((bool) Stack[-3] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x2a8

0x28b: GOTO 0x29d

0x28c: Push((int) 1)
0x28d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x28f: Push((int) 4)
0x290: @ rand(Stack[-3], Stack[-1])
0x291: Pop(1)
0x292: Push((int) 1)
0x293: Pop(1); Push(Stack[-3] + Stack[-1]);
0x294: @ Sleep(Stack[-1], Stack[-2])
0x295: Pop(1)
0x296: Pop(0); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: GOTO 0x2a8

0x299: GOTO 0x29d

0x29a: Push(Stack[-6])
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: GOTO 0x2a8

0x29d: PushEmpty(bool)
0x29e: Call2 0x2ab

0x29f: Pop(0)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: GOTO 0x2a8

0x2a3: @ ResetAAS()
0x2a4: Pop(0)
0x2a5: Push((int) 1)
0x2a6: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2a7: GOTO 0x26a

0x2a8: @ ResetAAS()
0x2a9: Pop(0)
0x2aa: Return(); Pop(14)

0x2ab: Stack[-1] = (bool) 1
0x2ac: Return(); Pop(0)

0x2ad: @ StopAnimation()
0x2ae: Pop(0)
0x2af: @ StopGroup0()
0x2b0: Pop(0)
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(bool, bool)
0x2b3: @ IsLoaded(Stack[-1])
0x2b4: Pop(0)
0x2b5: Stack[-3] = Stack[-1]
0x2b6: Return(); Pop(2)

0x2b7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2b8: @@ GetPosition(Stack[-8])
0x2b9: Pop(0)
0x2ba: @@ GetEyesHeight(Stack[-9])
0x2bb: Pop(0)
0x2bc: Push(CvectorIndex(Stack[-8], 1))
0x2bd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2be: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2bf: @ GetPosition(Stack[-7])
0x2c0: Pop(0)
0x2c1: @ GetEyesHeight(Stack[-9])
0x2c2: Pop(0)
0x2c3: Push(CvectorIndex(Stack[-7], 1))
0x2c4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2c6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2c7: Push(CvectorIndex(Stack[-6], 1))
0x2c8: Stack[-1] = (int) 0
0x2c9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ca: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2cb: Pop(1); Push(Sqrt(Stack[-1]))
0x2cc: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2cd: Stack[-5] = -Stack[-6]; Pop(0);
0x2ce: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2cf: PushEmpty(cvector, cvector)
0x2d0: Push(CVector(0.0, 1.0, 0.0))
0x2d1: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2d2: Call2 0x3d1

0x2d3: Pop(1)
0x2d4: Push((int) 25)
0x2d5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d7: Push(CVector(0.0, 10.0, 0.0))
0x2d8: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2d9: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2da: @ IsOverrideActive(Stack[-2])
0x2db: Pop(0)
0x2dc: Push(Stack[-2])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2de: Stack[-21] = (bool) 0
0x2df: Return(); Pop(18)

0x2e0: @ StopWorld()
0x2e1: Pop(0)
0x2e2: @ CameraTransit(Stack[-3], Stack[-5])
0x2e3: Pop(0)
0x2e4: Push(CvectorIndex(Stack[-4], 0))
0x2e5: Push(CvectorIndex(Stack[-5], 2))
0x2e6: @ Rotate(Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: PushEmpty(bool)
0x2e9: Call2 0x3f6

0x2ea: Pop(0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x2f5

0x2ed: Push("head")
0x2ee: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ef: Pop(1)
0x2f0: Push(Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f2: Push("head")
0x2f3: @ LookAsyncCamera(Stack[-1])
0x2f4: Pop(1)
0x2f5: @ CameraWaitForPlayFinish()
0x2f6: Pop(0)
0x2f7: @ ResumeWorld()
0x2f8: Pop(0)
0x2f9: Stack[-21] = (bool) 1
0x2fa: Return(); Pop(18)

0x2fb: PushEmpty(bool, bool)
0x2fc: @ CameraSwitchToNormal()
0x2fd: Pop(0)
0x2fe: PushEmpty(bool)
0x2ff: Call2 0x3f6

0x300: Pop(0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x30b

0x303: Push("head")
0x304: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x305: Pop(1)
0x306: Push(Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x308: Push("head")
0x309: @ UnlookAsync(Stack[-1])
0x30a: Pop(1)
0x30b: Return(); Pop(2)

0x30c: PushEmpty(int, int, int, int)
0x30d: Push("voice_common")
0x30e: @ GetVariable(Stack[-1], Stack[-3])
0x30f: Pop(1)
0x310: Push(Stack[-2])
0x311: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x312: PushEmpty(bool, object)
0x313: Stack[-1] = Stack[-7]
0x314: Call2 0x346

0x315: Pop(1)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x318: PushEmpty(bool, object)
0x319: Stack[-1] = Stack[-7]
0x31a: Call2 0x36b

0x31b: Pop(1)
0x31c: Pop(1); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-6] = (bool) 0
0x31f: Return(); Pop(4)

0x320: Push((int) 2)
0x321: @ irand(Stack[-2], Stack[-1])
0x322: Pop(1)
0x323: Push(Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x325: Push("voice_common")
0x326: Push((int) 1)
0x327: Pop(1); Push(Stack[-4] + Stack[-1]);
0x328: Push((int) 3)
0x329: Pop(2); Push(Stack[-2] % Stack[-1]);
0x32a: @ SetVariable(Stack[-2], Stack[-1])
0x32b: Pop(2)
0x32c: GOTO 0x331

0x32d: Push("voice_common")
0x32e: Push((int) 0)
0x32f: @ SetVariable(Stack[-2], Stack[-1])
0x330: Pop(2)
0x331: GOTO 0x344

0x332: PushEmpty(bool, object)
0x333: Stack[-1] = Stack[-7]
0x334: Call2 0x36b

0x335: Pop(1)
0x336: Pop(1); Push((bool) Stack[-1] == 0)
0x337: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x338: PushEmpty(bool, object)
0x339: Stack[-1] = Stack[-7]
0x33a: Call2 0x346

0x33b: Pop(1)
0x33c: Pop(1); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-6] = (bool) 0
0x33f: Return(); Pop(4)

0x340: Push("voice_common")
0x341: Push((int) 1)
0x342: @ SetVariable(Stack[-2], Stack[-1])
0x343: Pop(2)
0x344: Stack[-6] = (bool) 1
0x345: Return(); Pop(4)

0x346: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x347: Stack[-5] = "c"
0x348: Stack[-4] = (int) 0
0x349: Push((int) 1)
0x34a: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x34b: Push((int) 1)
0x34c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x34d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x34e: @@ HasProperty(Stack[-1], Stack[-4])
0x34f: Pop(1)
0x350: Pop(0); Push((bool) Stack[-3] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: GOTO 0x356

0x353: Push((int) 1)
0x354: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x355: GOTO 0x349

0x356: Pop(0); Push((bool) Stack[-4] == 0)
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: Stack[-12] = (bool) 0
0x359: Return(); Pop(10)

0x35a: Stack[-2] = (int) 0
0x35b: Push((int) 1)
0x35c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35e: @ irand(Stack[-2], Stack[-4])
0x35f: Pop(0)
0x360: Push((int) 1)
0x361: Pop(1); Push(Stack[-3] + Stack[-1]);
0x362: Pop(1); Push(Stack[-6] + Stack[-1]);
0x363: @@ GetProperty(Stack[-1], Stack[-2])
0x364: Pop(1)
0x365: PushEmpty(bool, string)
0x366: Stack[-1] = Stack[-3]
0x367: Call2 0x3b5

0x368: Stack[-14] = Stack[-2]
0x369: Pop(2)
0x36a: Return(); Pop(10)

0x36b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x36c: Push("d")
0x36d: PushEmpty(int)
0x36e: Call2 0x3e5

0x36f: Pop(0)
0x370: Pop(2); Push(Stack[-2] + Stack[-1]);
0x371: Push("m")
0x372: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x373: Stack[-4] = (int) 0
0x374: Push((int) 1)
0x375: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x376: Push((int) 1)
0x377: Pop(1); Push(Stack[-5] + Stack[-1]);
0x378: Pop(1); Push(Stack[-6] + Stack[-1]);
0x379: @@ HasProperty(Stack[-1], Stack[-4])
0x37a: Pop(1)
0x37b: Pop(0); Push((bool) Stack[-3] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: GOTO 0x381

0x37e: Push((int) 1)
0x37f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x380: GOTO 0x374

0x381: Pop(0); Push((bool) Stack[-4] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x383: Stack[-12] = (bool) 0
0x384: Return(); Pop(10)

0x385: Stack[-2] = (int) 0
0x386: Push((int) 1)
0x387: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x389: @ irand(Stack[-2], Stack[-4])
0x38a: Pop(0)
0x38b: Push((int) 1)
0x38c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x38d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x38e: @@ GetProperty(Stack[-1], Stack[-2])
0x38f: Pop(1)
0x390: PushEmpty(bool, string)
0x391: Stack[-1] = Stack[-3]
0x392: Call2 0x3b5

0x393: Stack[-14] = Stack[-2]
0x394: Pop(2)
0x395: Return(); Pop(10)

0x396: PushEmpty(bool, float, float, bool, float, float)
0x397: @ lshHasAnimation(Stack[-3], Stack[-7])
0x398: Pop(0)
0x399: Push(Stack[-3])
0x39a: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x39c: Pop(0)
0x39d: Push((bool) 0)
0x39e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x39f: Pop(1)
0x3a0: GOTO 0x3a5

0x3a1: Push("Can't find lsh animation : ")
0x3a2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3a3: @ Trace(Stack[-1])
0x3a4: Pop(1)
0x3a5: Return(); Pop(6)

0x3a6: PushEmpty(bool, float, float, bool, float, float)
0x3a7: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3a8: Pop(0)
0x3a9: Push(Stack[-3])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ab: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3ac: Pop(0)
0x3ad: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3ae: Pop(0)
0x3af: GOTO 0x3b4

0x3b0: Push("Can't find lsh animation : ")
0x3b1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3b2: @ Trace(Stack[-1])
0x3b3: Pop(1)
0x3b4: Return(); Pop(6)

0x3b5: PushEmpty(bool, bool)
0x3b6: PushEmpty(bool)
0x3b7: Call2 0x3f6

0x3b8: Pop(0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3ba: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3bb: Pop(0)
0x3bc: Push(Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3be: @ lshPlaySpeech(Stack[-3])
0x3bf: Pop(0)
0x3c0: Stack[-4] = (bool) 1
0x3c1: Return(); Pop(2)

0x3c2: Stack[-4] = (bool) 0
0x3c3: Return(); Pop(2)

0x3c4: PushEmpty(bool)
0x3c5: Call2 0x3f6

0x3c6: Pop(0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: @ lshStopSpeech()
0x3c9: Pop(0)
0x3ca: Return(); Pop(0)

0x3cb: PushEmpty(object, object)
0x3cc: @ self(Stack[-1])
0x3cd: Pop(0)
0x3ce: Stack[-3] = Stack[-1]
0x3cf: Return(); Pop(2)

0x3d0: Stack[-1] = 0
0x3d1: PushEmpty(float, float)
0x3d2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3d3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3d4: Push((float)0.0)
0x3d5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3d8: Return(); Pop(2)

0x3d9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3da: Return(); Pop(2)

0x3db: PushEmpty(int, int)
0x3dc: @ GetVariable(Stack[-3], Stack[-1])
0x3dd: Pop(0)
0x3de: Stack[-4] = Stack[-1]
0x3df: Return(); Pop(2)

0x3e0: PushEmpty(float, float)
0x3e1: @ GetGameTime(Stack[-1])
0x3e2: Pop(0)
0x3e3: Stack[-3] = Stack[-1]
0x3e4: Return(); Pop(2)

0x3e5: PushEmpty(float, float)
0x3e6: @ GetGameTime(Stack[-1])
0x3e7: Pop(0)
0x3e8: Push((int) 1)
0x3e9: PushEmpty(int)
0x3ea: Push((int) 24)
0x3eb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3ec: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3ed: Return(); Pop(2)

0x3ee: Stack[-1] = (int) 515562
0x3ef: Return(); Pop(0)

0x3f0: Stack[-1] = (int) 503347
0x3f1: Return(); Pop(0)

0x3f2: Stack[-1] = "ui/NPC_Citizen1.png"
0x3f3: Return(); Pop(0)

0x3f4: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x3f5: Return(); Pop(0)

0x3f6: Stack[-1] = (bool) 0
0x3f7: Return(); Pop(0)

0x3f8: PushEmpty(string, string)
0x3f9: Stack[-1] = "idle"
0x3fa: Push(Stack[-3])
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3fd: Stack[-4] = Stack[-1]
0x3fe: Return(); Pop(2)

0x3ff: PushEmpty(int, bool, int, bool)
0x400: Stack[-2] = (int) 0
0x401: Push("all")
0x402: PushEmpty(string, int)
0x403: Stack[-1] = Stack[-5]
0x404: Call2 0x3f8

0x405: Pop(1)
0x406: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x407: Pop(2)
0x408: Pop(0); Push((bool) Stack[-1] == 0)
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: GOTO 0x40e

0x40b: Push((int) 1)
0x40c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x40d: GOTO 0x401

0x40e: Stack[-5] = Stack[-2]
0x40f: Return(); Pop(4)

0x410: PushEmpty(object, object)
0x411: Push("b3q01")
0x412: Push((int) 3)
0x413: @ SetVariable(Stack[-2], Stack[-1])
0x414: Pop(2)
0x415: PushEmpty(object)
0x416: Call2 0x469

0x417: Stack[-2] = Stack[-1]
0x418: Pop(1)
0x419: Push("b3q01ButcherGotoBigVlad")
0x41a: Push("pt_map_bigvlad")
0x41b: Push((int) 1)
0x41c: Push((int) 519641)
0x41d: PushEmpty(float)
0x41e: Call2 0x3e0

0x41f: Pop(0)
0x420: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x421: Pop(5)
0x422: PushEmpty()
0x423: Call2 0x433

0x424: Pop(0)
0x425: Return(); Pop(2)

0x426: Stack[-1] = 0
0x427: PushEmpty()
0x428: PushEmpty(int, string)
0x429: Stack[-1] = "b3q01"
0x42a: Call2 0x3db

0x42b: Pop(1)
0x42c: Push((int) 2)
0x42d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-2] = (bool) 1
0x430: Return(); Pop(0)

0x431: Stack[-2] = (bool) 0
0x432: Return(); Pop(0)

0x433: PushEmpty(object, object)
0x434: Push((int) 224)
0x435: Push((int) 1)
0x436: Push((int) 519642)
0x437: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x438: Pop(3)
0x439: PushEmpty(bool, object, int)
0x43a: Stack[-2] = Stack[-4]
0x43b: Stack[-1] = (int) 221
0x43c: Call2 0x44d

0x43d: Pop(3)
0x43e: Return(); Pop(2)

0x43f: Stack[-1] = 0
0x440: PushEmpty(object, object)
0x441: @ GetDiaryRoot(Stack[-1])
0x442: Pop(0)
0x443: Pop(0); Push((bool) Stack[-1] == 0)
0x444: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x445: Push("Can't retrieve diary root")
0x446: @ Trace(Stack[-1])
0x447: Pop(1)
0x448: Stack[-3] = (bool) 0
0x449: Return(); Pop(2)

0x44a: Stack[-3] = Stack[-1]
0x44b: Return(); Pop(2)

0x44c: Stack[-1] = 0
0x44d: PushEmpty(object, object, int, object, object, int)
0x44e: PushEmpty(object)
0x44f: Call2 0x440

0x450: Stack[-4] = Stack[-1]
0x451: Pop(1)
0x452: @@ Find(Stack[-7], Stack[-2])
0x453: Pop(0)
0x454: Pop(0); Push((bool) Stack[-2] == 0)
0x455: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x456: Push("Can't find diary parent with id: ")
0x457: Pop(1); Push(Stack[-1] + Stack[-8]);
0x458: @ Trace(Stack[-1])
0x459: Pop(1)
0x45a: Stack[-9] = (bool) 0
0x45b: Return(); Pop(6)

0x45c: @@ AddChild(Stack[-8])
0x45d: Pop(0)
0x45e: Push((int) 7)
0x45f: @ SendWorldWndMessage(Stack[-1])
0x460: Pop(1)
0x461: @@ GetCategory(Stack[-1])
0x462: Pop(0)
0x463: @ SetDiarySection(Stack[-1])
0x464: Pop(0)
0x465: Stack[-9] = (bool) 0
0x466: Return(); Pop(6)

0x467: Stack[-2] = 0
0x468: Stack[-3] = 0
0x469: PushEmpty(object, object, object, object)
0x46a: @ GetMainOutdoorScene(Stack[-2])
0x46b: Pop(0)
0x46c: Pop(0); Push((bool) Stack[-2] == 0)
0x46d: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x46e: Push("Can't find main outdoor scene")
0x46f: @ Trace(Stack[-1])
0x470: Pop(1)
0x471: Stack[-1] = 0
0x472: Stack[-5] = Stack[-1]
0x473: Return(); Pop(4)

0x474: @@ GetMap(Stack[-1])
0x475: Pop(0)
0x476: Stack[-5] = Stack[-1]
0x477: Return(); Pop(4)

0x478: Stack[-1] = 0
0x479: Stack[-2] = 0
0x47a: PushEmpty(int, int)
0x47b: Push("branch")
0x47c: @ GetVariable(Stack[-1], Stack[-2])
0x47d: Pop(1)
0x47e: Push((int) 0)
0x47f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x480: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x481: Stack[-3] = (int) 1
0x482: Return(); Pop(2)

0x483: GOTO 0x489

0x484: Push((int) 1)
0x485: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-3] = (int) 2
0x488: Return(); Pop(2)

0x489: Stack[-3] = (int) 3
0x48a: Return(); Pop(2)

