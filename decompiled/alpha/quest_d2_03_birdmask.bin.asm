GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	d2q03
	cleanup
	restore
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	ood2Birdmask1
	d2q03BirdmaskGotoLara
	pt_map_lara
	AddMark
	d2q03BirdmaskGotoLaraSelf
	KnowTheater
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	player
	Adding diary entry
	ui/NPC_Black.png

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
	GetVariable (2 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x19f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x93 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x1a4 Vars = (object)
		EVENT_26 Op = 0x1ba Vars = (string)
		EVENT_6 Op = 0x1d6 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1e8

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x2fd

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x2ff

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x2dc

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x220

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x289

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0x83

0x4d: Pop(1)
0x4e: Push((int) 6910)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 6911)
0x54: Push((int) 7618)
0x55: Push((int) 7617)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: PushEmpty(bool, object)
0x59: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a: Call 0x27d

0x5b: Pop(1)
0x5c: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5d: Push((int) 7249)
0x5e: Push((int) 7993)
0x5f: Push((int) 7989)
0x60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61: Pop(3)
0x62: GOTO 0x65

0x63: Return(); Pop(0)

0x64: GOTO 0x43

0x65: PushEmpty(bool)
0x66: Call 0x301

0x67: Pop(0)
0x68: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x69: @ lshWaitForAnimEnd()
0x6a: Pop(0)
0x6b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: GOTO 0x73

0x6e: PushEmpty(string)
0x6f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x70: Call 0x224

0x71: Pop(1)
0x72: GOTO 0x69

0x73: GOTO 0x82

0x74: Push("all")
0x75: Push("idle")
0x76: @ PlayAnimation(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: @ WaitForAnimEnd()
0x79: Pop(0)
0x7a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: GOTO 0x82

0x7d: Push("all")
0x7e: Push("idle")
0x7f: @ PlayAnimation(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: GOTO 0x78

0x82: Return(); Pop(0)

0x83: PushEmpty()
0x84: PushEmpty(bool)
0x85: Call 0x301

0x86: Pop(0)
0x87: Pop(1); Push((bool) Stack[-1] == 0)
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Return(); Pop(0)

0x8a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Return(); Pop(0)

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[-2]
0x8f: Call 0x224

0x90: Pop(1)
0x91: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Push((int) 1)
0x95: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x96: PushEmpty()
0x97: Call 0x236

0x98: Pop(0)
0x99: Push((int) 7988)
0x9a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x9c: PushEmpty(object, object)
0x9d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f: Call 0x257

0xa0: Pop(2)
0xa1: PushEmpty(object, object)
0xa2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa4: Call 0x25d

0xa5: Pop(2)
0xa6: Push((int) 7990)
0xa7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xa9: PushEmpty(object, object)
0xaa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xac: Call 0x257

0xad: Pop(2)
0xae: PushEmpty(object, object)
0xaf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb1: Call 0x25d

0xb2: Pop(2)
0xb3: Push((int) 7991)
0xb4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb6: PushEmpty(object, object)
0xb7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Call 0x257

0xba: Pop(2)
0xbb: PushEmpty(object, object)
0xbc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe: Call 0x25d

0xbf: Pop(2)
0xc0: Push((int) 7992)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call 0x257

0xc7: Pop(2)
0xc8: Push((int) 7616)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call 0x289

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xd0: PushEmpty(string)
0xd1: Stack[-1] = "Neutral"
0xd2: Call 0x83

0xd3: Pop(1)
0xd4: Push((int) 6910)
0xd5: @@ SetMessage(Stack[-1])
0xd6: Pop(1)
0xd7: @@ ClearReplies()
0xd8: Pop(0)
0xd9: Push((int) 6911)
0xda: Push((int) 7618)
0xdb: Push((int) 7617)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: PushEmpty(bool, object)
0xdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Call 0x27d

0xe1: Pop(1)
0xe2: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe3: Push((int) 7249)
0xe4: Push((int) 7993)
0xe5: Push((int) 7989)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: Push((int) 7993)
0xea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral"
0xee: Call 0x83

0xef: Pop(1)
0xf0: Push((int) 7253)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 7254)
0xf6: Push((int) 7995)
0xf7: Push((int) 7994)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 7995)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral"
0x100: Call 0x83

0x101: Pop(1)
0x102: Push((int) 7255)
0x103: @@ SetMessage(Stack[-1])
0x104: Pop(1)
0x105: @@ ClearReplies()
0x106: Pop(0)
0x107: Push((int) 7256)
0x108: Push((int) 7997)
0x109: Push((int) 7996)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 7997)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral"
0x112: Call 0x83

0x113: Pop(1)
0x114: Push((int) 7257)
0x115: @@ SetMessage(Stack[-1])
0x116: Pop(1)
0x117: @@ ClearReplies()
0x118: Pop(0)
0x119: Push((int) 7258)
0x11a: Push((int) 7999)
0x11b: Push((int) 7998)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Push((int) 7261)
0x11f: Push((int) 7618)
0x120: Push((int) 8002)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 7999)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call 0x83

0x12a: Pop(1)
0x12b: Push((int) 7259)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 7260)
0x131: Push((int) 7618)
0x132: Push((int) 8000)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 7618)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call 0x83

0x13c: Pop(1)
0x13d: Push((int) 6912)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 7242)
0x143: Push((int) 7983)
0x144: Push((int) 7982)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149: Call 0x295

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14c: Push((int) 7252)
0x14d: Push((int) -1)
0x14e: Push((int) 7992)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Push((int) 7983)
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x155: PushEmpty(string)
0x156: Stack[-1] = "Neutral"
0x157: Call 0x83

0x158: Pop(1)
0x159: Push((int) 7243)
0x15a: @@ SetMessage(Stack[-1])
0x15b: Pop(1)
0x15c: @@ ClearReplies()
0x15d: Pop(0)
0x15e: Push((int) 7244)
0x15f: Push((int) 7985)
0x160: Push((int) 7984)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 7251)
0x164: Push((int) -1)
0x165: Push((int) 7991)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 7985)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call 0x83

0x16f: Pop(1)
0x170: Push((int) 7245)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 7246)
0x176: Push((int) 7987)
0x177: Push((int) 7986)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Push((int) 7250)
0x17b: Push((int) -1)
0x17c: Push((int) 7990)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 7987)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral"
0x185: Call 0x83

0x186: Pop(1)
0x187: Push((int) 7247)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 7248)
0x18d: Push((int) -1)
0x18e: Push((int) 7988)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x193: PushEmpty(bool)
0x194: Call 0x301

0x195: Pop(0)
0x196: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x197: @ lshStopAnimation()
0x198: Pop(0)
0x199: GOTO 0x19c

0x19a: @ StopAnimation()
0x19b: Pop(0)
0x19c: Return(); Pop(0)

0x19d: GOTO 0x94

0x19e: Return(); Pop(0)

0x19f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1a0: PushEmpty()
0x1a1: Call 0x1b6

0x1a2: Pop(0)
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty(int, int)
0x1a5: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Return(); Pop(2)

0x1a8: Push("d2q03")
0x1a9: @ GetVariable(Stack[-1], Stack[-2])
0x1aa: Pop(1)
0x1ab: Push((int) -1)
0x1ac: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1ae: PushEmpty(int, object)
0x1af: Stack[-1] = Stack[-5]
0x1b0: Push(-2, 1); TaskCall(0)
0x1b1: Call 0x0

0x1b2: Pop(-2, 1); TaskReturn
0x1b3: Pop(2)
0x1b4: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1b5: Return(); Pop(2)

0x1b6: @ Hold()
0x1b7: Pop(0)
0x1b8: GOTO 0x1b6

0x1b9: Return(); Pop(0)

0x1ba: PushEmpty(bool, bool)
0x1bb: Push("cleanup")
0x1bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1be: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1bf: @ IsLoaded(Stack[-1])
0x1c0: Pop(0)
0x1c1: PushEmpty(bool)
0x1c2: Stack[-1] = (bool) 0
0x1c3: Pop(0); Push((bool) Stack[-2] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c5: PushEmpty(bool)
0x1c6: Call 0x1e6

0x1c7: Pop(0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Stack[-1] = (bool) 1
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: PushEmpty(object)
0x1cc: Call 0x23d

0x1cd: Pop(0)
0x1ce: @ RemoveActor(Stack[-1])
0x1cf: Pop(1)
0x1d0: GOTO 0x1d5

0x1d1: Push("restore")
0x1d2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1d5: Return(); Pop(2)

0x1d6: PushEmpty(bool)
0x1d7: Stack[-1] = (bool) 0
0x1d8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d9: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1da: PushEmpty(bool)
0x1db: Call 0x1e6

0x1dc: Pop(0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Stack[-1] = (bool) 1
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: PushEmpty(object)
0x1e1: Call 0x23d

0x1e2: Pop(0)
0x1e3: @ RemoveActor(Stack[-1])
0x1e4: Pop(1)
0x1e5: Return(); Pop(0)

0x1e6: Stack[-1] = (bool) 1
0x1e7: Return(); Pop(0)

0x1e8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1e9: @@ GetPosition(Stack[-7])
0x1ea: Pop(0)
0x1eb: @@ GetEyesHeight(Stack[-8])
0x1ec: Pop(0)
0x1ed: Push(CvectorIndex(Stack[-7], 1))
0x1ee: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1ef: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1f0: @ GetPosition(Stack[-6])
0x1f1: Pop(0)
0x1f2: @ GetEyesHeight(Stack[-8])
0x1f3: Pop(0)
0x1f4: Push(CvectorIndex(Stack[-6], 1))
0x1f5: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1f6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1f7: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1f8: Push(CvectorIndex(Stack[-5], 1))
0x1f9: Stack[-1] = (int) 0
0x1fa: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1fb: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1fc: Pop(1); Push(Sqrt(Stack[-1]))
0x1fd: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1fe: Stack[-4] = -Stack[-5]; Pop(0);
0x1ff: Push((int) 70)
0x200: Pop(1); Push(Stack[-6] * Stack[-1]);
0x201: PushEmpty(cvector, cvector)
0x202: Push(CVector(0.0, 1.0, 0.0))
0x203: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x204: Call 0x243

0x205: Pop(1)
0x206: Push((int) 25)
0x207: Pop(2); Push(Stack[-2] * Stack[-1]);
0x208: Pop(2); Push(Stack[-2] + Stack[-1]);
0x209: Push(CVector(0.0, 10.0, 0.0))
0x20a: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x20b: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x20c: @ IsOverrideActive(Stack[-1])
0x20d: Pop(0)
0x20e: Push(Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-18] = (bool) 0
0x211: Return(); Pop(16)

0x212: @ StopWorld()
0x213: Pop(0)
0x214: @ CameraTransit(Stack[-2], Stack[-4])
0x215: Pop(0)
0x216: Push(CvectorIndex(Stack[-3], 0))
0x217: Push(CvectorIndex(Stack[-4], 2))
0x218: @ Rotate(Stack[-2], Stack[-1])
0x219: Pop(2)
0x21a: @ CameraWaitForPlayFinish()
0x21b: Pop(0)
0x21c: @ ResumeWorld()
0x21d: Pop(0)
0x21e: Stack[-18] = (bool) 1
0x21f: Return(); Pop(16)

0x220: PushEmpty()
0x221: @ CameraSwitchToNormal()
0x222: Pop(0)
0x223: Return(); Pop(0)

0x224: PushEmpty(float, float, float, float)
0x225: Push("playing ")
0x226: Pop(1); Push(Stack[-1] + Stack[-6]);
0x227: @ Trace(Stack[-1])
0x228: Pop(1)
0x229: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x22a: Pop(0)
0x22b: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x22c: Pop(0)
0x22d: Push("start: ")
0x22e: Pop(1); Push(Stack[-1] + Stack[-3]);
0x22f: @ Trace(Stack[-1])
0x230: Pop(1)
0x231: Push("end: ")
0x232: Pop(1); Push(Stack[-1] + Stack[-2]);
0x233: @ Trace(Stack[-1])
0x234: Pop(1)
0x235: Return(); Pop(4)

0x236: PushEmpty(bool)
0x237: Call 0x301

0x238: Pop(0)
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: @ lshStopSpeech()
0x23b: Pop(0)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(object, object)
0x23e: @ self(Stack[-1])
0x23f: Pop(0)
0x240: Stack[-3] = Stack[-1]
0x241: Return(); Pop(2)

0x242: Stack[-1] = 0
0x243: PushEmpty(float, float)
0x244: Pop(0); Push(Stack[-3] | Stack[-3]);
0x245: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x246: Push((float)0.0)
0x247: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x249: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x24a: Return(); Pop(2)

0x24b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x24c: Return(); Pop(2)

0x24d: PushEmpty(int, int)
0x24e: @ GetVariable(Stack[-3], Stack[-1])
0x24f: Pop(0)
0x250: Stack[-4] = Stack[-1]
0x251: Return(); Pop(2)

0x252: PushEmpty(float, float)
0x253: @ GetGameTime(Stack[-1])
0x254: Pop(0)
0x255: Stack[-3] = Stack[-1]
0x256: Return(); Pop(2)

0x257: PushEmpty()
0x258: Push("ood2Birdmask1")
0x259: Push((int) 1)
0x25a: @ SetVariable(Stack[-2], Stack[-1])
0x25b: Pop(2)
0x25c: Return(); Pop(0)

0x25d: PushEmpty(object, object)
0x25e: Push("d2q03")
0x25f: Push((int) 3)
0x260: @ SetVariable(Stack[-2], Stack[-1])
0x261: Pop(2)
0x262: PushEmpty(object)
0x263: Call 0x2cb

0x264: Stack[-2] = Stack[-1]
0x265: Pop(1)
0x266: Push("d2q03BirdmaskGotoLara")
0x267: Push("pt_map_lara")
0x268: Push((int) 0)
0x269: Push((int) 15293)
0x26a: PushEmpty(float)
0x26b: Call 0x252

0x26c: Pop(0)
0x26d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(5)
0x26f: Push("d2q03BirdmaskGotoLaraSelf")
0x270: Push("")
0x271: Push((int) 0)
0x272: Push((int) 15292)
0x273: PushEmpty(float)
0x274: Call 0x252

0x275: Pop(0)
0x276: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(5)
0x278: PushEmpty()
0x279: Call 0x2ed

0x27a: Pop(0)
0x27b: Return(); Pop(2)

0x27c: Stack[-1] = 0
0x27d: PushEmpty()
0x27e: PushEmpty(int, string)
0x27f: Stack[-1] = "KnowTheater"
0x280: Call 0x24d

0x281: Pop(1)
0x282: Push((int) 1)
0x283: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x285: Stack[-2] = (bool) 1
0x286: Return(); Pop(0)

0x287: Stack[-2] = (bool) 0
0x288: Return(); Pop(0)

0x289: PushEmpty()
0x28a: PushEmpty(int, string)
0x28b: Stack[-1] = "ood2Birdmask1"
0x28c: Call 0x24d

0x28d: Pop(1)
0x28e: Push((int) 0)
0x28f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x291: Stack[-2] = (bool) 1
0x292: Return(); Pop(0)

0x293: Stack[-2] = (bool) 0
0x294: Return(); Pop(0)

0x295: PushEmpty()
0x296: PushEmpty(int, string)
0x297: Stack[-1] = "d2q03"
0x298: Call 0x24d

0x299: Pop(1)
0x29a: Push((int) 3)
0x29b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-2] = (bool) 1
0x29e: Return(); Pop(0)

0x29f: Stack[-2] = (bool) 0
0x2a0: Return(); Pop(0)

0x2a1: PushEmpty(object, object)
0x2a2: @ GetDiaryRoot(Stack[-1])
0x2a3: Pop(0)
0x2a4: Pop(0); Push((bool) Stack[-1] == 0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a6: Push("Can't retrieve diary root")
0x2a7: @ Trace(Stack[-1])
0x2a8: Pop(1)
0x2a9: Stack[-3] = (bool) 0
0x2aa: Return(); Pop(2)

0x2ab: Stack[-3] = Stack[-1]
0x2ac: Return(); Pop(2)

0x2ad: Stack[-1] = 0
0x2ae: PushEmpty(object, object, int, object, object, int)
0x2af: PushEmpty(object)
0x2b0: Call 0x2a1

0x2b1: Stack[-4] = Stack[-1]
0x2b2: Pop(1)
0x2b3: @@ Find(Stack[-7], Stack[-2])
0x2b4: Pop(0)
0x2b5: Pop(0); Push((bool) Stack[-2] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b7: Push("Can't find diary parent with id: ")
0x2b8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2b9: @ Trace(Stack[-1])
0x2ba: Pop(1)
0x2bb: Stack[-9] = (bool) 0
0x2bc: Return(); Pop(6)

0x2bd: @@ AddChild(Stack[-8])
0x2be: Pop(0)
0x2bf: Push("player_diary")
0x2c0: Push((int) 1)
0x2c1: @ SetVariable(Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: @@ GetCategory(Stack[-1])
0x2c4: Pop(0)
0x2c5: @ SetDiarySection(Stack[-1])
0x2c6: Pop(0)
0x2c7: Stack[-9] = (bool) 0
0x2c8: Return(); Pop(6)

0x2c9: Stack[-2] = 0
0x2ca: Stack[-3] = 0
0x2cb: PushEmpty(object, object, object, object)
0x2cc: @ GetMainOutdoorScene(Stack[-2])
0x2cd: Pop(0)
0x2ce: Pop(0); Push((bool) Stack[-2] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d0: Push("Can't find main outdoor scene")
0x2d1: @ Trace(Stack[-1])
0x2d2: Pop(1)
0x2d3: Stack[-1] = 0
0x2d4: Stack[-5] = Stack[-1]
0x2d5: Return(); Pop(4)

0x2d6: @@ GetMap(Stack[-1])
0x2d7: Pop(0)
0x2d8: Stack[-5] = Stack[-1]
0x2d9: Return(); Pop(4)

0x2da: Stack[-1] = 0
0x2db: Stack[-2] = 0
0x2dc: PushEmpty(int, int)
0x2dd: Push("player")
0x2de: @ GetVariable(Stack[-1], Stack[-2])
0x2df: Pop(1)
0x2e0: Push((int) 0)
0x2e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e3: Stack[-3] = (int) 200001
0x2e4: Return(); Pop(2)

0x2e5: GOTO 0x2eb

0x2e6: Push((int) 1)
0x2e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e9: Stack[-3] = (int) 200002
0x2ea: Return(); Pop(2)

0x2eb: Stack[-3] = (int) 200003
0x2ec: Return(); Pop(2)

0x2ed: PushEmpty(object, object)
0x2ee: Push("Adding diary entry")
0x2ef: @ Trace(Stack[-1])
0x2f0: Pop(1)
0x2f1: Push((int) 133)
0x2f2: Push((int) 2)
0x2f3: Push((int) 15270)
0x2f4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2f5: Pop(3)
0x2f6: PushEmpty(bool, object, int)
0x2f7: Stack[-2] = Stack[-4]
0x2f8: Stack[-1] = (int) 12
0x2f9: Call 0x2ae

0x2fa: Pop(3)
0x2fb: Return(); Pop(2)

0x2fc: Stack[-1] = 0
0x2fd: Stack[-1] = (int) 4029
0x2fe: Return(); Pop(0)

0x2ff: Stack[-1] = "ui/NPC_Black.png"
0x300: Return(); Pop(0)

0x301: Stack[-1] = (bool) 0
0x302: Return(); Pop(0)

