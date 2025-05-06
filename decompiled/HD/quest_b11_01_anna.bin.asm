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
	Dream
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	ui/NPC_Anna.png
	ui/NPC_Anna_b.png
	b11q01KnowWhoKilled
	b11q01VictimChoosed
	b11q01KillAnna
	volonteers_burah
	disease
	anna
	Anna is diseased
	oob11Anna1
	b11q01
	quest_b11_01
	open_well_exit
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	StopGroup0 (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
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
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x261
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xed Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_6 Op = 0x272 Vars = ()
		EVENT_5 Op = 0x275 Vars = ()
		EVENT_0 Op = 0x278 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2a0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3ee

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3ec

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3f0

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3f2

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x47d

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
0x31: Call2 0x3b6

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2f7

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
0x48: Call2 0x2e5

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
0x56: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x423

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x42f

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x412

0x6a: Pop(2)
0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Dream"
0x6d: Call2 0xd7

0x6e: Pop(1)
0x6f: Push((int) 522034)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: Push((int) 523328)
0x75: Push((int) 24543)
0x76: Push((int) 24542)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: GOTO 0xb9

0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x423

0x7d: Pop(1)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x80: PushEmpty(string)
0x81: Stack[-1] = "Neutral"
0x82: Call2 0xd7

0x83: Pop(1)
0x84: Push((int) 522039)
0x85: @@ SetMessage(Stack[-1])
0x86: Pop(1)
0x87: @@ ClearReplies()
0x88: Pop(0)
0x89: Push((int) 522040)
0x8a: Push((int) -1)
0x8b: Push((int) 23210)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 522041)
0x8f: Push((int) -1)
0x90: Push((int) 23211)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0xb9

0x94: PushEmpty(string)
0x95: Stack[-1] = "Neutral"
0x96: Call2 0xd7

0x97: Pop(1)
0x98: Push((int) 522042)
0x99: @@ SetMessage(Stack[-1])
0x9a: Pop(1)
0x9b: @@ ClearReplies()
0x9c: Pop(0)
0x9d: Push((int) 522043)
0x9e: Push((int) -1)
0x9f: Push((int) 23213)
0xa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(3)
0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x43b

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa7: Push((int) 522602)
0xa8: Push((int) -1)
0xa9: Push((int) 23788)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0x43b

0xaf: Pop(1)
0xb0: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb1: Push((int) 522603)
0xb2: Push((int) -1)
0xb3: Push((int) 23789)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: GOTO 0xb9

0xb7: Return(); Pop(0)

0xb8: GOTO 0x55

0xb9: PushEmpty(bool)
0xba: Call2 0x3f4

0xbb: Pop(0)
0xbc: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xbd: @ lshWaitForAnimEnd()
0xbe: Pop(0)
0xbf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: GOTO 0xc7

0xc2: PushEmpty(string)
0xc3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc4: Call2 0x381

0xc5: Pop(1)
0xc6: GOTO 0xbd

0xc7: GOTO 0xd6

0xc8: Push("all")
0xc9: Push("idle")
0xca: @ PlayAnimation(Stack[-2], Stack[-1])
0xcb: Pop(2)
0xcc: @ WaitForAnimEnd()
0xcd: Pop(0)
0xce: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: GOTO 0xd6

0xd1: Push("all")
0xd2: Push("idle")
0xd3: @ PlayAnimation(Stack[-2], Stack[-1])
0xd4: Pop(2)
0xd5: GOTO 0xcc

0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: PushEmpty(bool)
0xd9: Call2 0x3f4

0xda: Pop(0)
0xdb: Pop(1); Push((bool) Stack[-1] == 0)
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Return(); Pop(0)

0xde: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Return(); Pop(0)

0xe1: PushEmpty(string, bool)
0xe2: Stack[-2] = Stack[-3]
0xe3: Push("")
0xe4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe6: Stack[-1] = (bool) 0
0xe7: GOTO 0xe9

0xe8: Stack[-1] = (bool) 1
0xe9: Call2 0x391

0xea: Pop(2)
0xeb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xec: Return(); Pop(0)

0xed: PushEmpty()
0xee: Push((int) 1)
0xef: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0xf0: PushEmpty()
0xf1: Call2 0x3af

0xf2: Pop(0)
0xf3: Push((int) 23207)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x3ff

0xfa: Pop(2)
0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x418

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x3f6

0x104: Pop(2)
0x105: Push((int) 23210)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x3ff

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x418

0x111: Pop(2)
0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x3f6

0x116: Pop(2)
0x117: Push((int) 23204)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x11a: PushEmpty(bool)
0x11b: Stack[-1] = (bool) 0
0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Call2 0x423

0x11f: Pop(1)
0x120: Pop(1); Push((bool) Stack[-1] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x122: PushEmpty(bool, object)
0x123: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x124: Call2 0x42f

0x125: Pop(1)
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Stack[-1] = (bool) 1
0x128: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x412

0x12d: Pop(2)
0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Dream"
0x130: Call2 0xd7

0x131: Pop(1)
0x132: Push((int) 522034)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 523328)
0x138: Push((int) 24543)
0x139: Push((int) 24542)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Call2 0x423

0x140: Pop(1)
0x141: Pop(1); Push((bool) Stack[-1] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0xd7

0x146: Pop(1)
0x147: Push((int) 522039)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 522040)
0x14d: Push((int) -1)
0x14e: Push((int) 23210)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Push((int) 522041)
0x152: Push((int) -1)
0x153: Push((int) 23211)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: PushEmpty(string)
0x158: Stack[-1] = "Neutral"
0x159: Call2 0xd7

0x15a: Pop(1)
0x15b: Push((int) 522042)
0x15c: @@ SetMessage(Stack[-1])
0x15d: Pop(1)
0x15e: @@ ClearReplies()
0x15f: Pop(0)
0x160: Push((int) 522043)
0x161: Push((int) -1)
0x162: Push((int) 23213)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x43b

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: Push((int) 522602)
0x16b: Push((int) -1)
0x16c: Push((int) 23788)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call2 0x43b

0x172: Pop(1)
0x173: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x174: Push((int) 522603)
0x175: Push((int) -1)
0x176: Push((int) 23789)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 24543)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Dream"
0x17f: Call2 0xd7

0x180: Pop(1)
0x181: Push((int) 523329)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 523323)
0x187: Push((int) 24540)
0x188: Push((int) 24537)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 523322)
0x18c: Push((int) 24538)
0x18d: Push((int) 24536)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Push((int) 522035)
0x191: Push((int) 24546)
0x192: Push((int) 23205)
0x193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: Return(); Pop(0)

0x196: Push((int) 24546)
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x199: PushEmpty(string)
0x19a: Stack[-1] = "Dream"
0x19b: Call2 0xd7

0x19c: Pop(1)
0x19d: Push((int) 523332)
0x19e: @@ SetMessage(Stack[-1])
0x19f: Pop(1)
0x1a0: @@ ClearReplies()
0x1a1: Pop(0)
0x1a2: Push((int) 523337)
0x1a3: Push((int) 24555)
0x1a4: Push((int) 24551)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Push((int) 541843)
0x1a8: Push((int) 24548)
0x1a9: Push((int) 44061)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: Return(); Pop(0)

0x1ad: Push((int) 24548)
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b0: PushEmpty(string)
0x1b1: Stack[-1] = "Dream"
0x1b2: Call2 0xd7

0x1b3: Pop(1)
0x1b4: Push((int) 523334)
0x1b5: @@ SetMessage(Stack[-1])
0x1b6: Pop(1)
0x1b7: @@ ClearReplies()
0x1b8: Pop(0)
0x1b9: Push((int) 523335)
0x1ba: Push((int) 24550)
0x1bb: Push((int) 24549)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Return(); Pop(0)

0x1bf: Push((int) 24555)
0x1c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c2: PushEmpty(string)
0x1c3: Stack[-1] = "Dream"
0x1c4: Call2 0xd7

0x1c5: Pop(1)
0x1c6: Push((int) 523340)
0x1c7: @@ SetMessage(Stack[-1])
0x1c8: Pop(1)
0x1c9: @@ ClearReplies()
0x1ca: Pop(0)
0x1cb: Push((int) 523341)
0x1cc: Push((int) 24550)
0x1cd: Push((int) 24556)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 24538)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Dream"
0x1d6: Call2 0xd7

0x1d7: Pop(1)
0x1d8: Push((int) 523324)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: Push((int) 523325)
0x1de: Push((int) 23214)
0x1df: Push((int) 24539)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Return(); Pop(0)

0x1e3: Push((int) 23214)
0x1e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Dream"
0x1e8: Call2 0xd7

0x1e9: Pop(1)
0x1ea: Push((int) 522044)
0x1eb: @@ SetMessage(Stack[-1])
0x1ec: Pop(1)
0x1ed: @@ ClearReplies()
0x1ee: Pop(0)
0x1ef: Push((int) 522045)
0x1f0: Push((int) -1)
0x1f1: Push((int) 23215)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Push((int) 523321)
0x1f5: Push((int) 24550)
0x1f6: Push((int) 24535)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 24550)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Dream"
0x1ff: Call2 0xd7

0x200: Pop(1)
0x201: Push((int) 523336)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 523338)
0x207: Push((int) -1)
0x208: Push((int) 24553)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Push((int) 523339)
0x20c: Push((int) -1)
0x20d: Push((int) 24554)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: Return(); Pop(0)

0x211: Push((int) 24540)
0x212: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x214: PushEmpty(string)
0x215: Stack[-1] = "Dream"
0x216: Call2 0xd7

0x217: Pop(1)
0x218: Push((int) 523326)
0x219: @@ SetMessage(Stack[-1])
0x21a: Pop(1)
0x21b: @@ ClearReplies()
0x21c: Pop(0)
0x21d: Push((int) 523327)
0x21e: Push((int) 24544)
0x21f: Push((int) 24541)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: Push((int) 24544)
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Dream"
0x228: Call2 0xd7

0x229: Pop(1)
0x22a: Push((int) 523330)
0x22b: @@ SetMessage(Stack[-1])
0x22c: Pop(1)
0x22d: @@ ClearReplies()
0x22e: Pop(0)
0x22f: Push((int) 523331)
0x230: Push((int) 23206)
0x231: Push((int) 24545)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: Push((int) 23206)
0x236: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x238: PushEmpty(string)
0x239: Stack[-1] = "Dream"
0x23a: Call2 0xd7

0x23b: Pop(1)
0x23c: Push((int) 522036)
0x23d: @@ SetMessage(Stack[-1])
0x23e: Pop(1)
0x23f: @@ ClearReplies()
0x240: Pop(0)
0x241: Push((int) 522037)
0x242: Push((int) -1)
0x243: Push((int) 23207)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Push((int) 522038)
0x247: Push((int) -1)
0x248: Push((int) 23208)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Return(); Pop(0)

0x24c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x24d: PushEmpty(bool)
0x24e: Call2 0x3f4

0x24f: Pop(0)
0x250: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x251: @ lshStopAnimation()
0x252: Pop(0)
0x253: GOTO 0x256

0x254: @ StopAnimation()
0x255: Pop(0)
0x256: Return(); Pop(0)

0x257: GOTO 0xee

0x258: Return(); Pop(0)

0x259: PushEmpty()
0x25a: PushEmpty(int, object)
0x25b: Stack[-1] = Stack[-3]
0x25c: Push(-2, 1); TaskCall(0)
0x25d: Call2 0x0

0x25e: Pop(-2, 1); TaskReturn
0x25f: Pop(2)
0x260: Return(); Pop(0)

0x261: PushEmpty(bool)
0x262: Call2 0x29b

0x263: Pop(0)
0x264: Pop(1); Push((bool) Stack[-1] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x266: @ Hold()
0x267: Pop(0)
0x268: PushEmpty(string)
0x269: Stack[-1] = "Neutral"
0x26a: Call2 0x381

0x26b: Pop(1)
0x26c: @ lshWaitForAnimEnd()
0x26d: Pop(0)
0x26e: GOTO 0x268

0x26f: @ Hold()
0x270: Pop(0)
0x271: Return(); Pop(0)

0x272: @ Hold()
0x273: Pop(0)
0x274: Return(); Pop(0)

0x275: @ StopGroup0()
0x276: Pop(0)
0x277: Return(); Pop(0)

0x278: PushEmpty(bool, bool)
0x279: @ IsOverrideActive(Stack[-1])
0x27a: Pop(0)
0x27b: Pop(0); Push((bool) Stack[-1] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x27d: EventDisable(0)
0x27e: PushEmpty(bool, object)
0x27f: Stack[-1] = Stack[-5]
0x280: Call2 0x292

0x281: Pop(2)
0x282: EventEnable(0)
0x283: PushEmpty(object)
0x284: Stack[-1] = Stack[-4]
0x285: Call2 0x259

0x286: Pop(1)
0x287: Return(); Pop(2)

0x288: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x289: @ GetPosition(Stack[-3])
0x28a: Pop(0)
0x28b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x28c: Push(CvectorIndex(Stack[-2], 0))
0x28d: Push(CvectorIndex(Stack[-3], 2))
0x28e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x28f: Pop(2)
0x290: Stack[-8] = Stack[-1]
0x291: Return(); Pop(6)

0x292: PushEmpty(cvector, cvector)
0x293: @@ GetPosition(Stack[-1])
0x294: Pop(0)
0x295: PushEmpty(bool, cvector)
0x296: Stack[-1] = Stack[-3]
0x297: Call2 0x288

0x298: Stack[-6] = Stack[-2]
0x299: Pop(2)
0x29a: Return(); Pop(2)

0x29b: PushEmpty(bool, bool)
0x29c: @ IsLoaded(Stack[-1])
0x29d: Pop(0)
0x29e: Stack[-3] = Stack[-1]
0x29f: Return(); Pop(2)

0x2a0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a1: @@ GetPosition(Stack[-8])
0x2a2: Pop(0)
0x2a3: @@ GetEyesHeight(Stack[-9])
0x2a4: Pop(0)
0x2a5: Push(CvectorIndex(Stack[-8], 1))
0x2a6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2a8: @ GetPosition(Stack[-7])
0x2a9: Pop(0)
0x2aa: @ GetEyesHeight(Stack[-9])
0x2ab: Pop(0)
0x2ac: Push(CvectorIndex(Stack[-7], 1))
0x2ad: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ae: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2af: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b0: Push(CvectorIndex(Stack[-6], 1))
0x2b1: Stack[-1] = (int) 0
0x2b2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2b3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b4: Pop(1); Push(Sqrt(Stack[-1]))
0x2b5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b6: Stack[-5] = -Stack[-6]; Pop(0);
0x2b7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2b8: PushEmpty(cvector, cvector)
0x2b9: Push(CVector(0.0, 1.0, 0.0))
0x2ba: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2bb: Call2 0x3bc

0x2bc: Pop(1)
0x2bd: Push((int) 25)
0x2be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c0: Push(CVector(0.0, 10.0, 0.0))
0x2c1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2c2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2c3: @ IsOverrideActive(Stack[-2])
0x2c4: Pop(0)
0x2c5: Push(Stack[-2])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c7: Stack[-21] = (bool) 0
0x2c8: Return(); Pop(18)

0x2c9: @ StopWorld()
0x2ca: Pop(0)
0x2cb: Push((bool) 1)
0x2cc: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2cd: Pop(1)
0x2ce: Push(CvectorIndex(Stack[-4], 0))
0x2cf: Push(CvectorIndex(Stack[-5], 2))
0x2d0: @ Rotate(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: PushEmpty(bool)
0x2d3: Call2 0x3f4

0x2d4: Pop(0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: GOTO 0x2df

0x2d7: Push("head")
0x2d8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d9: Pop(1)
0x2da: Push(Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dc: Push("head")
0x2dd: @ LookAsyncCamera(Stack[-1])
0x2de: Pop(1)
0x2df: @ CameraWaitForPlayFinish()
0x2e0: Pop(0)
0x2e1: @ ResumeWorld()
0x2e2: Pop(0)
0x2e3: Stack[-21] = (bool) 1
0x2e4: Return(); Pop(18)

0x2e5: PushEmpty(bool, bool)
0x2e6: Push((bool) 1)
0x2e7: @ CameraSwitchToNormal(Stack[-1])
0x2e8: Pop(1)
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x3f4

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: GOTO 0x2f6

0x2ee: Push("head")
0x2ef: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f0: Pop(1)
0x2f1: Push(Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: Push("head")
0x2f4: @ UnlookAsync(Stack[-1])
0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int, int, int)
0x2f8: Push("voice_common")
0x2f9: @ GetVariable(Stack[-1], Stack[-3])
0x2fa: Pop(1)
0x2fb: Push(Stack[-2])
0x2fc: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x2fd: PushEmpty(bool, object)
0x2fe: Stack[-1] = Stack[-7]
0x2ff: Call2 0x331

0x300: Pop(1)
0x301: Pop(1); Push((bool) Stack[-1] == 0)
0x302: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x303: PushEmpty(bool, object)
0x304: Stack[-1] = Stack[-7]
0x305: Call2 0x356

0x306: Pop(1)
0x307: Pop(1); Push((bool) Stack[-1] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x309: Stack[-6] = (bool) 0
0x30a: Return(); Pop(4)

0x30b: Push((int) 2)
0x30c: @ irand(Stack[-2], Stack[-1])
0x30d: Pop(1)
0x30e: Push(Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x310: Push("voice_common")
0x311: Push((int) 1)
0x312: Pop(1); Push(Stack[-4] + Stack[-1]);
0x313: Push((int) 3)
0x314: Pop(2); Push(Stack[-2] % Stack[-1]);
0x315: @ SetVariable(Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: GOTO 0x31c

0x318: Push("voice_common")
0x319: Push((int) 0)
0x31a: @ SetVariable(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: GOTO 0x32f

0x31d: PushEmpty(bool, object)
0x31e: Stack[-1] = Stack[-7]
0x31f: Call2 0x356

0x320: Pop(1)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x323: PushEmpty(bool, object)
0x324: Stack[-1] = Stack[-7]
0x325: Call2 0x331

0x326: Pop(1)
0x327: Pop(1); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-6] = (bool) 0
0x32a: Return(); Pop(4)

0x32b: Push("voice_common")
0x32c: Push((int) 1)
0x32d: @ SetVariable(Stack[-2], Stack[-1])
0x32e: Pop(2)
0x32f: Stack[-6] = (bool) 1
0x330: Return(); Pop(4)

0x331: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x332: Stack[-5] = "c"
0x333: Stack[-4] = (int) 0
0x334: Push((int) 1)
0x335: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x336: Push((int) 1)
0x337: Pop(1); Push(Stack[-5] + Stack[-1]);
0x338: Pop(1); Push(Stack[-6] + Stack[-1]);
0x339: @@ HasProperty(Stack[-1], Stack[-4])
0x33a: Pop(1)
0x33b: Pop(0); Push((bool) Stack[-3] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: GOTO 0x341

0x33e: Push((int) 1)
0x33f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x340: GOTO 0x334

0x341: Pop(0); Push((bool) Stack[-4] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-12] = (bool) 0
0x344: Return(); Pop(10)

0x345: Stack[-2] = (int) 0
0x346: Push((int) 1)
0x347: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: @ irand(Stack[-2], Stack[-4])
0x34a: Pop(0)
0x34b: Push((int) 1)
0x34c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x34d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x34e: @@ GetProperty(Stack[-1], Stack[-2])
0x34f: Pop(1)
0x350: PushEmpty(bool, string)
0x351: Stack[-1] = Stack[-3]
0x352: Call2 0x3a0

0x353: Stack[-14] = Stack[-2]
0x354: Pop(2)
0x355: Return(); Pop(10)

0x356: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x357: Push("d")
0x358: PushEmpty(int)
0x359: Call2 0x3e3

0x35a: Pop(0)
0x35b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35c: Push("m")
0x35d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x35e: Stack[-4] = (int) 0
0x35f: Push((int) 1)
0x360: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x361: Push((int) 1)
0x362: Pop(1); Push(Stack[-5] + Stack[-1]);
0x363: Pop(1); Push(Stack[-6] + Stack[-1]);
0x364: @@ HasProperty(Stack[-1], Stack[-4])
0x365: Pop(1)
0x366: Pop(0); Push((bool) Stack[-3] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: GOTO 0x36c

0x369: Push((int) 1)
0x36a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x36b: GOTO 0x35f

0x36c: Pop(0); Push((bool) Stack[-4] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: Stack[-12] = (bool) 0
0x36f: Return(); Pop(10)

0x370: Stack[-2] = (int) 0
0x371: Push((int) 1)
0x372: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x374: @ irand(Stack[-2], Stack[-4])
0x375: Pop(0)
0x376: Push((int) 1)
0x377: Pop(1); Push(Stack[-3] + Stack[-1]);
0x378: Pop(1); Push(Stack[-6] + Stack[-1]);
0x379: @@ GetProperty(Stack[-1], Stack[-2])
0x37a: Pop(1)
0x37b: PushEmpty(bool, string)
0x37c: Stack[-1] = Stack[-3]
0x37d: Call2 0x3a0

0x37e: Stack[-14] = Stack[-2]
0x37f: Pop(2)
0x380: Return(); Pop(10)

0x381: PushEmpty(bool, float, float, bool, float, float)
0x382: @ lshHasAnimation(Stack[-3], Stack[-7])
0x383: Pop(0)
0x384: Push(Stack[-3])
0x385: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x386: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x387: Pop(0)
0x388: Push((bool) 0)
0x389: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(1)
0x38b: GOTO 0x390

0x38c: Push("Can't find lsh animation : ")
0x38d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x38e: @ Trace(Stack[-1])
0x38f: Pop(1)
0x390: Return(); Pop(6)

0x391: PushEmpty(bool, float, float, bool, float, float)
0x392: @ lshHasAnimation(Stack[-3], Stack[-8])
0x393: Pop(0)
0x394: Push(Stack[-3])
0x395: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x396: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x397: Pop(0)
0x398: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x399: Pop(0)
0x39a: GOTO 0x39f

0x39b: Push("Can't find lsh animation : ")
0x39c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x39d: @ Trace(Stack[-1])
0x39e: Pop(1)
0x39f: Return(); Pop(6)

0x3a0: PushEmpty(bool, bool)
0x3a1: PushEmpty(bool)
0x3a2: Call2 0x3f4

0x3a3: Pop(0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a5: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3a6: Pop(0)
0x3a7: Push(Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a9: @ lshPlaySpeech(Stack[-3])
0x3aa: Pop(0)
0x3ab: Stack[-4] = (bool) 1
0x3ac: Return(); Pop(2)

0x3ad: Stack[-4] = (bool) 0
0x3ae: Return(); Pop(2)

0x3af: PushEmpty(bool)
0x3b0: Call2 0x3f4

0x3b1: Pop(0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: @ lshStopSpeech()
0x3b4: Pop(0)
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty(object, object)
0x3b7: @ self(Stack[-1])
0x3b8: Pop(0)
0x3b9: Stack[-3] = Stack[-1]
0x3ba: Return(); Pop(2)

0x3bb: Stack[-1] = 0
0x3bc: PushEmpty(float, float)
0x3bd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3be: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3bf: Push((float)0.0)
0x3c0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3c3: Return(); Pop(2)

0x3c4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3c5: Return(); Pop(2)

0x3c6: PushEmpty(int, int)
0x3c7: @ GetVariable(Stack[-3], Stack[-1])
0x3c8: Pop(0)
0x3c9: Stack[-4] = Stack[-1]
0x3ca: Return(); Pop(2)

0x3cb: PushEmpty(object, object)
0x3cc: @ FindActor(Stack[-1], Stack[-4])
0x3cd: Pop(0)
0x3ce: Pop(0); Push((bool) Stack[-1] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d0: Stack[-5] = (bool) 0
0x3d1: Return(); Pop(2)

0x3d2: @ Trigger(Stack[-1], Stack[-3])
0x3d3: Pop(0)
0x3d4: Stack[-5] = (bool) 1
0x3d5: Return(); Pop(2)

0x3d6: Stack[-1] = 0
0x3d7: PushEmpty(object, object)
0x3d8: @ FindActor(Stack[-1], Stack[-5])
0x3d9: Pop(0)
0x3da: Pop(0); Push((bool) Stack[-1] == 0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: Stack[-6] = (bool) 0
0x3dd: Return(); Pop(2)

0x3de: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x3df: Pop(0)
0x3e0: Stack[-6] = (bool) 1
0x3e1: Return(); Pop(2)

0x3e2: Stack[-1] = 0
0x3e3: PushEmpty(float, float)
0x3e4: @ GetGameTime(Stack[-1])
0x3e5: Pop(0)
0x3e6: Push((int) 1)
0x3e7: PushEmpty(int)
0x3e8: Push((int) 24)
0x3e9: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3ea: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3eb: Return(); Pop(2)

0x3ec: Stack[-1] = (int) 515530
0x3ed: Return(); Pop(0)

0x3ee: Stack[-1] = (int) 502856
0x3ef: Return(); Pop(0)

0x3f0: Stack[-1] = "ui/NPC_Anna.png"
0x3f1: Return(); Pop(0)

0x3f2: Stack[-1] = "ui/NPC_Anna_b.png"
0x3f3: Return(); Pop(0)

0x3f4: Stack[-1] = (bool) 1
0x3f5: Return(); Pop(0)

0x3f6: PushEmpty()
0x3f7: Push("b11q01KnowWhoKilled")
0x3f8: Push((int) 1)
0x3f9: @ SetVariable(Stack[-2], Stack[-1])
0x3fa: Pop(2)
0x3fb: PushEmpty()
0x3fc: Call2 0x447

0x3fd: Pop(0)
0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: Push("b11q01VictimChoosed")
0x401: Push((int) 1)
0x402: @ SetVariable(Stack[-2], Stack[-1])
0x403: Pop(2)
0x404: Push("b11q01KillAnna")
0x405: Push((int) 1)
0x406: @ SetVariable(Stack[-2], Stack[-1])
0x407: Pop(2)
0x408: PushEmpty(bool, string, string, string)
0x409: Stack[-3] = "volonteers_burah"
0x40a: Stack[-2] = "disease"
0x40b: Stack[-1] = "anna"
0x40c: Call2 0x3d7

0x40d: Pop(4)
0x40e: Push("Anna is diseased")
0x40f: @ Trace(Stack[-1])
0x410: Pop(1)
0x411: Return(); Pop(0)

0x412: PushEmpty()
0x413: Push("oob11Anna1")
0x414: Push((int) 1)
0x415: @ SetVariable(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: Return(); Pop(0)

0x418: PushEmpty()
0x419: Push("b11q01")
0x41a: Push((int) 2)
0x41b: @ SetVariable(Stack[-2], Stack[-1])
0x41c: Pop(2)
0x41d: PushEmpty(bool, string, string)
0x41e: Stack[-2] = "quest_b11_01"
0x41f: Stack[-1] = "open_well_exit"
0x420: Call2 0x3cb

0x421: Pop(3)
0x422: Return(); Pop(0)

0x423: PushEmpty()
0x424: PushEmpty(int, string)
0x425: Stack[-1] = "b11q01VictimChoosed"
0x426: Call2 0x3c6

0x427: Pop(1)
0x428: Push((int) 0)
0x429: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: Stack[-2] = (bool) 1
0x42c: Return(); Pop(0)

0x42d: Stack[-2] = (bool) 0
0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: PushEmpty(int, string)
0x431: Stack[-1] = "oob11Anna1"
0x432: Call2 0x3c6

0x433: Pop(1)
0x434: Push((int) 0)
0x435: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-2] = (bool) 1
0x438: Return(); Pop(0)

0x439: Stack[-2] = (bool) 0
0x43a: Return(); Pop(0)

0x43b: PushEmpty()
0x43c: PushEmpty(int, string)
0x43d: Stack[-1] = "b11q01KillAnna"
0x43e: Call2 0x3c6

0x43f: Pop(1)
0x440: Push((int) 0)
0x441: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-2] = (bool) 1
0x444: Return(); Pop(0)

0x445: Stack[-2] = (bool) 0
0x446: Return(); Pop(0)

0x447: PushEmpty(object, object)
0x448: Push((int) 315)
0x449: Push((int) 1)
0x44a: Push((int) 522057)
0x44b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x44c: Pop(3)
0x44d: PushEmpty(bool, object, int)
0x44e: Stack[-2] = Stack[-4]
0x44f: Stack[-1] = (int) 313
0x450: Call2 0x461

0x451: Pop(3)
0x452: Return(); Pop(2)

0x453: Stack[-1] = 0
0x454: PushEmpty(object, object)
0x455: @ GetDiaryRoot(Stack[-1])
0x456: Pop(0)
0x457: Pop(0); Push((bool) Stack[-1] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x459: Push("Can't retrieve diary root")
0x45a: @ Trace(Stack[-1])
0x45b: Pop(1)
0x45c: Stack[-3] = (bool) 0
0x45d: Return(); Pop(2)

0x45e: Stack[-3] = Stack[-1]
0x45f: Return(); Pop(2)

0x460: Stack[-1] = 0
0x461: PushEmpty(object, object, int, object, object, int)
0x462: PushEmpty(object)
0x463: Call2 0x454

0x464: Stack[-4] = Stack[-1]
0x465: Pop(1)
0x466: @@ Find(Stack[-7], Stack[-2])
0x467: Pop(0)
0x468: Pop(0); Push((bool) Stack[-2] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46a: Push("Can't find diary parent with id: ")
0x46b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x46c: @ Trace(Stack[-1])
0x46d: Pop(1)
0x46e: Stack[-9] = (bool) 0
0x46f: Return(); Pop(6)

0x470: @@ AddChild(Stack[-8])
0x471: Pop(0)
0x472: Push((int) 7)
0x473: @ SendWorldWndMessage(Stack[-1])
0x474: Pop(1)
0x475: @@ GetCategory(Stack[-1])
0x476: Pop(0)
0x477: @ SetDiarySection(Stack[-1])
0x478: Pop(0)
0x479: Stack[-9] = (bool) 0
0x47a: Return(); Pop(6)

0x47b: Stack[-2] = 0
0x47c: Stack[-3] = 0
0x47d: PushEmpty(int, int)
0x47e: Push("branch")
0x47f: @ GetVariable(Stack[-1], Stack[-2])
0x480: Pop(1)
0x481: Push((int) 0)
0x482: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x484: Stack[-3] = (int) 1
0x485: Return(); Pop(2)

0x486: GOTO 0x48c

0x487: Push((int) 1)
0x488: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48a: Stack[-3] = (int) 2
0x48b: Return(); Pop(2)

0x48c: Stack[-3] = (int) 3
0x48d: Return(); Pop(2)

