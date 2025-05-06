GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	pt_eva
	NPC_Eva
	NPC_Danko_Eva.xml
	pers_nudegirl
	nudegirl_danko.xml
	OnGameTime
	 
	quest_d8_02
	noeva
	.bin
	GetLocator
	Locator 
	 doesn't exist

Import:
	SetTimeEvent (2 args)
	Hold (0 args)
	Trace (1 args)
	GetGameTime (1 args)
	RemoveActor (1 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	AddMessage (4 args)
	SendWorldWndMessage (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, object, object) Params = 0
		EVENT_5 Op = 0x1c Vars = ()
		EVENT_9 Op = 0x37 Vars = (int, float)
		EVENT_6 Op = 0x82 Vars = ()
		EVENT_26 Op = 0x8b Vars = (string)


0x0: Push((int) 1)
0x1: Push((int) 151)
0x2: @ SetTimeEvent(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: Push((int) 2)
0x5: Push((float)151.5)
0x6: @ SetTimeEvent(Stack[-2], Stack[-1])
0x7: Pop(2)
0x8: Push((int) 3)
0x9: Push((int) 180)
0xa: @ SetTimeEvent(Stack[-2], Stack[-1])
0xb: Pop(2)
0xc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xd: PushEmpty(object, object, string, string, string)
0xe: PushEmpty(object)
0xf: Call2 0x96

0x10: Stack[-5] = Stack[-1]
0x11: Pop(1)
0x12: Stack[-3] = "pt_eva"
0x13: Stack[-2] = "NPC_Eva"
0x14: Stack[-1] = "NPC_Danko_Eva.xml"
0x15: Call2 0xa7

0x16: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x17: Pop(5)
0x18: @ Hold()
0x19: Pop(0)
0x1a: GOTO 0x18

0x1b: Return(); Pop(0)

0x1c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x1e: PushEmpty(object, object, string, string, string)
0x1f: PushEmpty(object)
0x20: Call2 0x96

0x21: Stack[-5] = Stack[-1]
0x22: Pop(1)
0x23: Stack[-3] = "pt_eva"
0x24: Stack[-2] = "NPC_Eva"
0x25: Stack[-1] = "NPC_Danko_Eva.xml"
0x26: Call2 0xa7

0x27: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x28: Pop(5)
0x29: Push( Stack[1 + Tasks[-1].StackPointer] )
0x2a: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x2b: PushEmpty(object, object, string, string, string)
0x2c: PushEmpty(object)
0x2d: Call2 0x96

0x2e: Stack[-5] = Stack[-1]
0x2f: Pop(1)
0x30: Stack[-3] = "pt_eva"
0x31: Stack[-2] = "pers_nudegirl"
0x32: Stack[-1] = "nudegirl_danko.xml"
0x33: Call2 0xa7

0x34: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x35: Pop(5)
0x36: Return(); Pop(0)

0x37: PushEmpty(float, float, float, float, float, float)
0x38: Push("OnGameTime")
0x39: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3a: Push(" ")
0x3b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d: @ Trace(Stack[-1])
0x3e: Pop(1)
0x3f: Push((int) 1)
0x40: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x42: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x43: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x44: GOTO 0x81

0x45: Push((int) 2)
0x46: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x48: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x4a: PushEmpty(int, float)
0x4b: Stack[-1] = Stack[-9]
0x4c: Call2 0xb9

0x4d: Pop(2)
0x4e: @ GetGameTime(Stack[-3])
0x4f: Pop(0)
0x50: Push((int) 1)
0x51: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x52: Push((int) 4)
0x53: @ SetTimeEvent(Stack[-1], Stack[-4])
0x54: Pop(1)
0x55: GOTO 0x5f

0x56: @ GetGameTime(Stack[-2])
0x57: Pop(0)
0x58: Push((float)0.3)
0x59: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5a: Push((int) 190)
0x5b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5d: @ SetTimeEvent(Stack[-8], Stack[-2])
0x5e: Pop(0)
0x5f: GOTO 0x81

0x60: Push((int) 3)
0x61: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x63: PushEmpty(bool)
0x64: Stack[-1] = (bool) 0
0x65: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x66: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x67: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x69: Stack[-1] = (bool) 1
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: PushEmpty(object, string)
0x6c: Stack[-1] = "quest_d8_02"
0x6d: Call2 0x9c

0x6e: Pop(2)
0x6f: GOTO 0x79

0x70: @ GetGameTime(Stack[-1])
0x71: Pop(0)
0x72: Push((float)0.3)
0x73: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x74: Push((int) 189)
0x75: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x77: @ SetTimeEvent(Stack[-8], Stack[-1])
0x78: Pop(0)
0x79: GOTO 0x81

0x7a: Push((int) 4)
0x7b: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7d: PushEmpty(int, float)
0x7e: Stack[-1] = Stack[-9]
0x7f: Call2 0xc2

0x80: Pop(2)
0x81: Return(); Pop(6)

0x82: Push( Stack[2 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x84: @ RemoveActor(Stack[-2])
0x85: Pop(0)
0x86: Push( Stack[3 + Tasks[-1].StackPointer] )
0x87: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x88: @ RemoveActor(Stack[-3])
0x89: Pop(0)
0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: Push("noeva")
0x8d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x90: GOTO 0x95

0x91: Push("eva")
0x92: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x95: Return(); Pop(0)

0x96: PushEmpty(object, object)
0x97: @ self(Stack[-1])
0x98: Pop(0)
0x99: Stack[-3] = Stack[-1]
0x9a: Return(); Pop(2)

0x9b: Stack[-1] = 0
0x9c: PushEmpty(object, object, object, object)
0x9d: @ GetMainOutdoorScene(Stack[-2])
0x9e: Pop(0)
0x9f: Push(".bin")
0xa0: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa1: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xa2: Pop(1)
0xa3: Stack[-6] = Stack[-1]
0xa4: Return(); Pop(4)

0xa5: Stack[-1] = 0
0xa6: Stack[-2] = 0
0xa7: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa8: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xa9: Pop(0)
0xaa: Pop(0); Push((bool) Stack[-4] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xac: Push("Locator ")
0xad: Pop(1); Push(Stack[-1] + Stack[-12]);
0xae: Push(" doesn't exist")
0xaf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb0: @ Trace(Stack[-1])
0xb1: Pop(1)
0xb2: Stack[-1] = 0
0xb3: GOTO 0xb6

0xb4: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xb5: Pop(0)
0xb6: Stack[-13] = Stack[-1]
0xb7: Return(); Pop(8)

0xb8: Stack[-1] = 0
0xb9: PushEmpty()
0xba: PushEmpty(int, int, int, float)
0xbb: Stack[-3] = (int) 533094
0xbc: Stack[-2] = (int) 533093
0xbd: Stack[-1] = Stack[-5]
0xbe: Call2 0xcb

0xbf: Stack[-6] = Stack[-4]
0xc0: Pop(4)
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: PushEmpty(int, int, int, float)
0xc4: Stack[-3] = (int) 533228
0xc5: Stack[-2] = (int) 533227
0xc6: Stack[-1] = Stack[-5]
0xc7: Call2 0xcb

0xc8: Stack[-6] = Stack[-4]
0xc9: Pop(4)
0xca: Return(); Pop(0)

0xcb: PushEmpty(int, int)
0xcc: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0xcd: Pop(0)
0xce: Push((int) 6)
0xcf: @ SendWorldWndMessage(Stack[-1])
0xd0: Pop(1)
0xd1: Stack[-6] = Stack[-1]
0xd2: Return(); Pop(2)

