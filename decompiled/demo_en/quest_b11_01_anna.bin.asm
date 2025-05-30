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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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

RunOp = 0x24d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xed Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_6 Op = 0x25e Vars = ()
		EVENT_5 Op = 0x261 Vars = ()
		EVENT_0 Op = 0x264 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x28c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3d8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3da

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3dc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x467

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
0x31: Call2 0x3a0

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2e1

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
0x48: Call2 0x2d0

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
0x5b: Call2 0x40d

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x419

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x3fc

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
0x7c: Call2 0x40d

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
0xa4: Call2 0x425

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa7: Push((int) 522602)
0xa8: Push((int) -1)
0xa9: Push((int) 23788)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0x425

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
0xba: Call2 0x3de

0xbb: Pop(0)
0xbc: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xbd: @ lshWaitForAnimEnd()
0xbe: Pop(0)
0xbf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: GOTO 0xc7

0xc2: PushEmpty(string)
0xc3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc4: Call2 0x36b

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
0xd9: Call2 0x3de

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
0xe9: Call2 0x37b

0xea: Pop(2)
0xeb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xec: Return(); Pop(0)

0xed: PushEmpty()
0xee: Push((int) 1)
0xef: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0xf0: PushEmpty()
0xf1: Call2 0x399

0xf2: Pop(0)
0xf3: Push((int) 23207)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x3e9

0xfa: Pop(2)
0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x402

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x3e0

0x104: Pop(2)
0x105: Push((int) 23210)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x3e9

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x402

0x111: Pop(2)
0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x3e0

0x116: Pop(2)
0x117: Push((int) 23204)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x11a: PushEmpty(bool)
0x11b: Stack[-1] = (bool) 0
0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Call2 0x40d

0x11f: Pop(1)
0x120: Pop(1); Push((bool) Stack[-1] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x122: PushEmpty(bool, object)
0x123: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x124: Call2 0x419

0x125: Pop(1)
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Stack[-1] = (bool) 1
0x128: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x3fc

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
0x13f: Call2 0x40d

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
0x167: Call2 0x425

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: Push((int) 522602)
0x16b: Push((int) -1)
0x16c: Push((int) 23788)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call2 0x425

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
0x198: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

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
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 24548)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1ab: Push((int) 24555)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Dream"
0x1b0: Call2 0xd7

0x1b1: Pop(1)
0x1b2: Push((int) 523340)
0x1b3: @@ SetMessage(Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ ClearReplies()
0x1b6: Pop(0)
0x1b7: Push((int) 523341)
0x1b8: Push((int) 24550)
0x1b9: Push((int) 24556)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 24538)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Dream"
0x1c2: Call2 0xd7

0x1c3: Pop(1)
0x1c4: Push((int) 523324)
0x1c5: @@ SetMessage(Stack[-1])
0x1c6: Pop(1)
0x1c7: @@ ClearReplies()
0x1c8: Pop(0)
0x1c9: Push((int) 523325)
0x1ca: Push((int) 23214)
0x1cb: Push((int) 24539)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Push((int) 23214)
0x1d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Dream"
0x1d4: Call2 0xd7

0x1d5: Pop(1)
0x1d6: Push((int) 522044)
0x1d7: @@ SetMessage(Stack[-1])
0x1d8: Pop(1)
0x1d9: @@ ClearReplies()
0x1da: Pop(0)
0x1db: Push((int) 522045)
0x1dc: Push((int) -1)
0x1dd: Push((int) 23215)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Push((int) 523321)
0x1e1: Push((int) 24550)
0x1e2: Push((int) 24535)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Return(); Pop(0)

0x1e6: Push((int) 24550)
0x1e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1e9: PushEmpty(string)
0x1ea: Stack[-1] = "Dream"
0x1eb: Call2 0xd7

0x1ec: Pop(1)
0x1ed: Push((int) 523336)
0x1ee: @@ SetMessage(Stack[-1])
0x1ef: Pop(1)
0x1f0: @@ ClearReplies()
0x1f1: Pop(0)
0x1f2: Push((int) 523338)
0x1f3: Push((int) -1)
0x1f4: Push((int) 24553)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Push((int) 523339)
0x1f8: Push((int) -1)
0x1f9: Push((int) 24554)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Return(); Pop(0)

0x1fd: Push((int) 24540)
0x1fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x200: PushEmpty(string)
0x201: Stack[-1] = "Dream"
0x202: Call2 0xd7

0x203: Pop(1)
0x204: Push((int) 523326)
0x205: @@ SetMessage(Stack[-1])
0x206: Pop(1)
0x207: @@ ClearReplies()
0x208: Pop(0)
0x209: Push((int) 523327)
0x20a: Push((int) 24544)
0x20b: Push((int) 24541)
0x20c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(3)
0x20e: Return(); Pop(0)

0x20f: Push((int) 24544)
0x210: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x212: PushEmpty(string)
0x213: Stack[-1] = "Dream"
0x214: Call2 0xd7

0x215: Pop(1)
0x216: Push((int) 523330)
0x217: @@ SetMessage(Stack[-1])
0x218: Pop(1)
0x219: @@ ClearReplies()
0x21a: Pop(0)
0x21b: Push((int) 523331)
0x21c: Push((int) 23206)
0x21d: Push((int) 24545)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 23206)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Dream"
0x226: Call2 0xd7

0x227: Pop(1)
0x228: Push((int) 522036)
0x229: @@ SetMessage(Stack[-1])
0x22a: Pop(1)
0x22b: @@ ClearReplies()
0x22c: Pop(0)
0x22d: Push((int) 522037)
0x22e: Push((int) -1)
0x22f: Push((int) 23207)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Push((int) 522038)
0x233: Push((int) -1)
0x234: Push((int) 23208)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x239: PushEmpty(bool)
0x23a: Call2 0x3de

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23d: @ lshStopAnimation()
0x23e: Pop(0)
0x23f: GOTO 0x242

0x240: @ StopAnimation()
0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: GOTO 0xee

0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: PushEmpty(int, object)
0x247: Stack[-1] = Stack[-3]
0x248: Push(-2, 1); TaskCall(0)
0x249: Call2 0x0

0x24a: Pop(-2, 1); TaskReturn
0x24b: Pop(2)
0x24c: Return(); Pop(0)

0x24d: PushEmpty(bool)
0x24e: Call2 0x287

0x24f: Pop(0)
0x250: Pop(1); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x252: @ Hold()
0x253: Pop(0)
0x254: PushEmpty(string)
0x255: Stack[-1] = "Neutral"
0x256: Call2 0x36b

0x257: Pop(1)
0x258: @ lshWaitForAnimEnd()
0x259: Pop(0)
0x25a: GOTO 0x254

0x25b: @ Hold()
0x25c: Pop(0)
0x25d: Return(); Pop(0)

0x25e: @ Hold()
0x25f: Pop(0)
0x260: Return(); Pop(0)

0x261: @ StopGroup0()
0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: PushEmpty(bool, bool)
0x265: @ IsOverrideActive(Stack[-1])
0x266: Pop(0)
0x267: Pop(0); Push((bool) Stack[-1] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x269: EventDisable(0)
0x26a: PushEmpty(bool, object)
0x26b: Stack[-1] = Stack[-5]
0x26c: Call2 0x27e

0x26d: Pop(2)
0x26e: EventEnable(0)
0x26f: PushEmpty(object)
0x270: Stack[-1] = Stack[-4]
0x271: Call2 0x245

0x272: Pop(1)
0x273: Return(); Pop(2)

0x274: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x275: @ GetPosition(Stack[-3])
0x276: Pop(0)
0x277: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x278: Push(CvectorIndex(Stack[-2], 0))
0x279: Push(CvectorIndex(Stack[-3], 2))
0x27a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x27b: Pop(2)
0x27c: Stack[-8] = Stack[-1]
0x27d: Return(); Pop(6)

0x27e: PushEmpty(cvector, cvector)
0x27f: @@ GetPosition(Stack[-1])
0x280: Pop(0)
0x281: PushEmpty(bool, cvector)
0x282: Stack[-1] = Stack[-3]
0x283: Call2 0x274

0x284: Stack[-6] = Stack[-2]
0x285: Pop(2)
0x286: Return(); Pop(2)

0x287: PushEmpty(bool, bool)
0x288: @ IsLoaded(Stack[-1])
0x289: Pop(0)
0x28a: Stack[-3] = Stack[-1]
0x28b: Return(); Pop(2)

0x28c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x28d: @@ GetPosition(Stack[-8])
0x28e: Pop(0)
0x28f: @@ GetEyesHeight(Stack[-9])
0x290: Pop(0)
0x291: Push(CvectorIndex(Stack[-8], 1))
0x292: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x293: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x294: @ GetPosition(Stack[-7])
0x295: Pop(0)
0x296: @ GetEyesHeight(Stack[-9])
0x297: Pop(0)
0x298: Push(CvectorIndex(Stack[-7], 1))
0x299: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x29b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x29c: Push(CvectorIndex(Stack[-6], 1))
0x29d: Stack[-1] = (int) 0
0x29e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x29f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a0: Pop(1); Push(Sqrt(Stack[-1]))
0x2a1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a2: Stack[-5] = -Stack[-6]; Pop(0);
0x2a3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2a4: PushEmpty(cvector, cvector)
0x2a5: Push(CVector(0.0, 1.0, 0.0))
0x2a6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a7: Call2 0x3a6

0x2a8: Pop(1)
0x2a9: Push((int) 25)
0x2aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ac: Push(CVector(0.0, 10.0, 0.0))
0x2ad: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ae: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2af: @ IsOverrideActive(Stack[-2])
0x2b0: Pop(0)
0x2b1: Push(Stack[-2])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: Stack[-21] = (bool) 0
0x2b4: Return(); Pop(18)

0x2b5: @ StopWorld()
0x2b6: Pop(0)
0x2b7: @ CameraTransit(Stack[-3], Stack[-5])
0x2b8: Pop(0)
0x2b9: Push(CvectorIndex(Stack[-4], 0))
0x2ba: Push(CvectorIndex(Stack[-5], 2))
0x2bb: @ Rotate(Stack[-2], Stack[-1])
0x2bc: Pop(2)
0x2bd: PushEmpty(bool)
0x2be: Call2 0x3de

0x2bf: Pop(0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: GOTO 0x2ca

0x2c2: Push("head")
0x2c3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c4: Pop(1)
0x2c5: Push(Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: Push("head")
0x2c8: @ LookAsyncCamera(Stack[-1])
0x2c9: Pop(1)
0x2ca: @ CameraWaitForPlayFinish()
0x2cb: Pop(0)
0x2cc: @ ResumeWorld()
0x2cd: Pop(0)
0x2ce: Stack[-21] = (bool) 1
0x2cf: Return(); Pop(18)

0x2d0: PushEmpty(bool, bool)
0x2d1: @ CameraSwitchToNormal()
0x2d2: Pop(0)
0x2d3: PushEmpty(bool)
0x2d4: Call2 0x3de

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2e0

0x2d8: Push("head")
0x2d9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2da: Pop(1)
0x2db: Push(Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2dd: Push("head")
0x2de: @ UnlookAsync(Stack[-1])
0x2df: Pop(1)
0x2e0: Return(); Pop(2)

0x2e1: PushEmpty(int, int, int, int)
0x2e2: Push("voice_common")
0x2e3: @ GetVariable(Stack[-1], Stack[-3])
0x2e4: Pop(1)
0x2e5: Push(Stack[-2])
0x2e6: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2e7: PushEmpty(bool, object)
0x2e8: Stack[-1] = Stack[-7]
0x2e9: Call2 0x31b

0x2ea: Pop(1)
0x2eb: Pop(1); Push((bool) Stack[-1] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2ed: PushEmpty(bool, object)
0x2ee: Stack[-1] = Stack[-7]
0x2ef: Call2 0x340

0x2f0: Pop(1)
0x2f1: Pop(1); Push((bool) Stack[-1] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-6] = (bool) 0
0x2f4: Return(); Pop(4)

0x2f5: Push((int) 2)
0x2f6: @ irand(Stack[-2], Stack[-1])
0x2f7: Pop(1)
0x2f8: Push(Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2fa: Push("voice_common")
0x2fb: Push((int) 1)
0x2fc: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2fd: Push((int) 3)
0x2fe: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2ff: @ SetVariable(Stack[-2], Stack[-1])
0x300: Pop(2)
0x301: GOTO 0x306

0x302: Push("voice_common")
0x303: Push((int) 0)
0x304: @ SetVariable(Stack[-2], Stack[-1])
0x305: Pop(2)
0x306: GOTO 0x319

0x307: PushEmpty(bool, object)
0x308: Stack[-1] = Stack[-7]
0x309: Call2 0x340

0x30a: Pop(1)
0x30b: Pop(1); Push((bool) Stack[-1] == 0)
0x30c: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x30d: PushEmpty(bool, object)
0x30e: Stack[-1] = Stack[-7]
0x30f: Call2 0x31b

0x310: Pop(1)
0x311: Pop(1); Push((bool) Stack[-1] == 0)
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: Stack[-6] = (bool) 0
0x314: Return(); Pop(4)

0x315: Push("voice_common")
0x316: Push((int) 1)
0x317: @ SetVariable(Stack[-2], Stack[-1])
0x318: Pop(2)
0x319: Stack[-6] = (bool) 1
0x31a: Return(); Pop(4)

0x31b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x31c: Stack[-5] = "c"
0x31d: Stack[-4] = (int) 0
0x31e: Push((int) 1)
0x31f: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x320: Push((int) 1)
0x321: Pop(1); Push(Stack[-5] + Stack[-1]);
0x322: Pop(1); Push(Stack[-6] + Stack[-1]);
0x323: @@ HasProperty(Stack[-1], Stack[-4])
0x324: Pop(1)
0x325: Pop(0); Push((bool) Stack[-3] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: GOTO 0x32b

0x328: Push((int) 1)
0x329: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x32a: GOTO 0x31e

0x32b: Pop(0); Push((bool) Stack[-4] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: Stack[-12] = (bool) 0
0x32e: Return(); Pop(10)

0x32f: Stack[-2] = (int) 0
0x330: Push((int) 1)
0x331: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: @ irand(Stack[-2], Stack[-4])
0x334: Pop(0)
0x335: Push((int) 1)
0x336: Pop(1); Push(Stack[-3] + Stack[-1]);
0x337: Pop(1); Push(Stack[-6] + Stack[-1]);
0x338: @@ GetProperty(Stack[-1], Stack[-2])
0x339: Pop(1)
0x33a: PushEmpty(bool, string)
0x33b: Stack[-1] = Stack[-3]
0x33c: Call2 0x38a

0x33d: Stack[-14] = Stack[-2]
0x33e: Pop(2)
0x33f: Return(); Pop(10)

0x340: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x341: Push("d")
0x342: PushEmpty(int)
0x343: Call2 0x3cd

0x344: Pop(0)
0x345: Pop(2); Push(Stack[-2] + Stack[-1]);
0x346: Push("m")
0x347: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
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
0x367: Call2 0x38a

0x368: Stack[-14] = Stack[-2]
0x369: Pop(2)
0x36a: Return(); Pop(10)

0x36b: PushEmpty(bool, float, float, bool, float, float)
0x36c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x36d: Pop(0)
0x36e: Push(Stack[-3])
0x36f: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x370: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x371: Pop(0)
0x372: Push((bool) 0)
0x373: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x374: Pop(1)
0x375: GOTO 0x37a

0x376: Push("Can't find lsh animation : ")
0x377: Pop(1); Push(Stack[-1] + Stack[-8]);
0x378: @ Trace(Stack[-1])
0x379: Pop(1)
0x37a: Return(); Pop(6)

0x37b: PushEmpty(bool, float, float, bool, float, float)
0x37c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x37d: Pop(0)
0x37e: Push(Stack[-3])
0x37f: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x380: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x381: Pop(0)
0x382: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x383: Pop(0)
0x384: GOTO 0x389

0x385: Push("Can't find lsh animation : ")
0x386: Pop(1); Push(Stack[-1] + Stack[-9]);
0x387: @ Trace(Stack[-1])
0x388: Pop(1)
0x389: Return(); Pop(6)

0x38a: PushEmpty(bool, bool)
0x38b: PushEmpty(bool)
0x38c: Call2 0x3de

0x38d: Pop(0)
0x38e: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x38f: @ lshHasSpeech(Stack[-1], Stack[-3])
0x390: Pop(0)
0x391: Push(Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x393: @ lshPlaySpeech(Stack[-3])
0x394: Pop(0)
0x395: Stack[-4] = (bool) 1
0x396: Return(); Pop(2)

0x397: Stack[-4] = (bool) 0
0x398: Return(); Pop(2)

0x399: PushEmpty(bool)
0x39a: Call2 0x3de

0x39b: Pop(0)
0x39c: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39d: @ lshStopSpeech()
0x39e: Pop(0)
0x39f: Return(); Pop(0)

0x3a0: PushEmpty(object, object)
0x3a1: @ self(Stack[-1])
0x3a2: Pop(0)
0x3a3: Stack[-3] = Stack[-1]
0x3a4: Return(); Pop(2)

0x3a5: Stack[-1] = 0
0x3a6: PushEmpty(float, float)
0x3a7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3a8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3a9: Push((float)0.0)
0x3aa: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ac: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3ad: Return(); Pop(2)

0x3ae: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3af: Return(); Pop(2)

0x3b0: PushEmpty(int, int)
0x3b1: @ GetVariable(Stack[-3], Stack[-1])
0x3b2: Pop(0)
0x3b3: Stack[-4] = Stack[-1]
0x3b4: Return(); Pop(2)

0x3b5: PushEmpty(object, object)
0x3b6: @ FindActor(Stack[-1], Stack[-4])
0x3b7: Pop(0)
0x3b8: Pop(0); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-5] = (bool) 0
0x3bb: Return(); Pop(2)

0x3bc: @ Trigger(Stack[-1], Stack[-3])
0x3bd: Pop(0)
0x3be: Stack[-5] = (bool) 1
0x3bf: Return(); Pop(2)

0x3c0: Stack[-1] = 0
0x3c1: PushEmpty(object, object)
0x3c2: @ FindActor(Stack[-1], Stack[-5])
0x3c3: Pop(0)
0x3c4: Pop(0); Push((bool) Stack[-1] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-6] = (bool) 0
0x3c7: Return(); Pop(2)

0x3c8: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x3c9: Pop(0)
0x3ca: Stack[-6] = (bool) 1
0x3cb: Return(); Pop(2)

0x3cc: Stack[-1] = 0
0x3cd: PushEmpty(float, float)
0x3ce: @ GetGameTime(Stack[-1])
0x3cf: Pop(0)
0x3d0: Push((int) 1)
0x3d1: PushEmpty(int)
0x3d2: Push((int) 24)
0x3d3: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3d4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3d5: Return(); Pop(2)

0x3d6: Stack[-1] = (int) 515530
0x3d7: Return(); Pop(0)

0x3d8: Stack[-1] = (int) 502856
0x3d9: Return(); Pop(0)

0x3da: Stack[-1] = "ui/NPC_Anna.png"
0x3db: Return(); Pop(0)

0x3dc: Stack[-1] = "ui/NPC_Anna_b.png"
0x3dd: Return(); Pop(0)

0x3de: Stack[-1] = (bool) 1
0x3df: Return(); Pop(0)

0x3e0: PushEmpty()
0x3e1: Push("b11q01KnowWhoKilled")
0x3e2: Push((int) 1)
0x3e3: @ SetVariable(Stack[-2], Stack[-1])
0x3e4: Pop(2)
0x3e5: PushEmpty()
0x3e6: Call2 0x431

0x3e7: Pop(0)
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty()
0x3ea: Push("b11q01VictimChoosed")
0x3eb: Push((int) 1)
0x3ec: @ SetVariable(Stack[-2], Stack[-1])
0x3ed: Pop(2)
0x3ee: Push("b11q01KillAnna")
0x3ef: Push((int) 1)
0x3f0: @ SetVariable(Stack[-2], Stack[-1])
0x3f1: Pop(2)
0x3f2: PushEmpty(bool, string, string, string)
0x3f3: Stack[-3] = "volonteers_burah"
0x3f4: Stack[-2] = "disease"
0x3f5: Stack[-1] = "anna"
0x3f6: Call2 0x3c1

0x3f7: Pop(4)
0x3f8: Push("Anna is diseased")
0x3f9: @ Trace(Stack[-1])
0x3fa: Pop(1)
0x3fb: Return(); Pop(0)

0x3fc: PushEmpty()
0x3fd: Push("oob11Anna1")
0x3fe: Push((int) 1)
0x3ff: @ SetVariable(Stack[-2], Stack[-1])
0x400: Pop(2)
0x401: Return(); Pop(0)

0x402: PushEmpty()
0x403: Push("b11q01")
0x404: Push((int) 2)
0x405: @ SetVariable(Stack[-2], Stack[-1])
0x406: Pop(2)
0x407: PushEmpty(bool, string, string)
0x408: Stack[-2] = "quest_b11_01"
0x409: Stack[-1] = "open_well_exit"
0x40a: Call2 0x3b5

0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: PushEmpty()
0x40e: PushEmpty(int, string)
0x40f: Stack[-1] = "b11q01VictimChoosed"
0x410: Call2 0x3b0

0x411: Pop(1)
0x412: Push((int) 0)
0x413: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x415: Stack[-2] = (bool) 1
0x416: Return(); Pop(0)

0x417: Stack[-2] = (bool) 0
0x418: Return(); Pop(0)

0x419: PushEmpty()
0x41a: PushEmpty(int, string)
0x41b: Stack[-1] = "oob11Anna1"
0x41c: Call2 0x3b0

0x41d: Pop(1)
0x41e: Push((int) 0)
0x41f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x421: Stack[-2] = (bool) 1
0x422: Return(); Pop(0)

0x423: Stack[-2] = (bool) 0
0x424: Return(); Pop(0)

0x425: PushEmpty()
0x426: PushEmpty(int, string)
0x427: Stack[-1] = "b11q01KillAnna"
0x428: Call2 0x3b0

0x429: Pop(1)
0x42a: Push((int) 0)
0x42b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-2] = (bool) 1
0x42e: Return(); Pop(0)

0x42f: Stack[-2] = (bool) 0
0x430: Return(); Pop(0)

0x431: PushEmpty(object, object)
0x432: Push((int) 315)
0x433: Push((int) 1)
0x434: Push((int) 522057)
0x435: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(3)
0x437: PushEmpty(bool, object, int)
0x438: Stack[-2] = Stack[-4]
0x439: Stack[-1] = (int) 313
0x43a: Call2 0x44b

0x43b: Pop(3)
0x43c: Return(); Pop(2)

0x43d: Stack[-1] = 0
0x43e: PushEmpty(object, object)
0x43f: @ GetDiaryRoot(Stack[-1])
0x440: Pop(0)
0x441: Pop(0); Push((bool) Stack[-1] == 0)
0x442: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x443: Push("Can't retrieve diary root")
0x444: @ Trace(Stack[-1])
0x445: Pop(1)
0x446: Stack[-3] = (bool) 0
0x447: Return(); Pop(2)

0x448: Stack[-3] = Stack[-1]
0x449: Return(); Pop(2)

0x44a: Stack[-1] = 0
0x44b: PushEmpty(object, object, int, object, object, int)
0x44c: PushEmpty(object)
0x44d: Call2 0x43e

0x44e: Stack[-4] = Stack[-1]
0x44f: Pop(1)
0x450: @@ Find(Stack[-7], Stack[-2])
0x451: Pop(0)
0x452: Pop(0); Push((bool) Stack[-2] == 0)
0x453: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x454: Push("Can't find diary parent with id: ")
0x455: Pop(1); Push(Stack[-1] + Stack[-8]);
0x456: @ Trace(Stack[-1])
0x457: Pop(1)
0x458: Stack[-9] = (bool) 0
0x459: Return(); Pop(6)

0x45a: @@ AddChild(Stack[-8])
0x45b: Pop(0)
0x45c: Push((int) 7)
0x45d: @ SendWorldWndMessage(Stack[-1])
0x45e: Pop(1)
0x45f: @@ GetCategory(Stack[-1])
0x460: Pop(0)
0x461: @ SetDiarySection(Stack[-1])
0x462: Pop(0)
0x463: Stack[-9] = (bool) 0
0x464: Return(); Pop(6)

0x465: Stack[-2] = 0
0x466: Stack[-3] = 0
0x467: PushEmpty(int, int)
0x468: Push("branch")
0x469: @ GetVariable(Stack[-1], Stack[-2])
0x46a: Pop(1)
0x46b: Push((int) 0)
0x46c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46e: Stack[-3] = (int) 1
0x46f: Return(); Pop(2)

0x470: GOTO 0x476

0x471: Push((int) 1)
0x472: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x474: Stack[-3] = (int) 2
0x475: Return(); Pop(2)

0x476: Stack[-3] = (int) 3
0x477: Return(); Pop(2)

