GlobalVarCount = 0

Strings:
	light
	Switch
	fire_loc
	scripted
	bonfire.xml
	cleanup
	restore
	GetLocator
	Locator 
	 doesn't exist

Import:
	GetProperty (2 args)
	FindActor (2 args)
	SetVisibility (1 args)
	GetScene (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	self (1 args)
	Trace (1 args)
	AddActorByType (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object) Params = 0
		EVENT_32 Op = 0x23 Vars = ()
		EVENT_26 Op = 0x31 Vars = (string)
		EVENT_6 Op = 0x4d Vars = ()


0x0: PushEmpty(string, string)
0x1: Push("light")
0x2: @ GetProperty(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: @ FindActor(Stack[-1], Stack[-1])
0x5: Pop(0)
0x6: Push((bool) 1)
0x7: @@ Switch(Stack[-1])
0x8: Pop(1)
0x9: Push((bool) 1)
0xa: @ SetVisibility(Stack[-1])
0xb: Pop(1)
0xc: PushEmpty()
0xd: Call2 0x13

0xe: Pop(0)
0xf: PushEmpty()
0x10: Call2 0x2d

0x11: Pop(0)
0x12: Return(); Pop(2)

0x13: PushEmpty(object, string, object, string)
0x14: @ GetScene(Stack[-2])
0x15: Pop(0)
0x16: Push("fire_loc")
0x17: @ GetProperty(Stack[-1], Stack[-2])
0x18: Pop(1)
0x19: PushEmpty(object, object, string, string, string)
0x1a: Stack[-4] = Stack[-7]
0x1b: Stack[-3] = Stack[-6]
0x1c: Stack[-2] = "scripted"
0x1d: Stack[-1] = "bonfire.xml"
0x1e: Call2 0x65

0x1f: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x20: Pop(5)
0x21: Return(); Pop(4)

0x22: Stack[-2] = 0
0x23: Push( Stack[2 + Tasks[-1].StackPointer] )
0x24: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x25: @ RemoveActor(Stack[-2])
0x26: Pop(0)
0x27: Push( Stack[1 + Tasks[-1].StackPointer] )
0x28: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x29: Push((bool) 0)
0x2a: @@ Switch(Stack[-1])
0x2b: Pop(1)
0x2c: Return(); Pop(0)

0x2d: @ Hold()
0x2e: Pop(0)
0x2f: GOTO 0x2d

0x30: Return(); Pop(0)

0x31: PushEmpty(bool, bool)
0x32: Push("cleanup")
0x33: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x35: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x36: @ IsLoaded(Stack[-1])
0x37: Pop(0)
0x38: PushEmpty(bool)
0x39: Stack[-1] = (bool) 0
0x3a: Pop(0); Push((bool) Stack[-2] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3c: PushEmpty(bool)
0x3d: Call2 0x5d

0x3e: Pop(0)
0x3f: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x40: Stack[-1] = (bool) 1
0x41: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x42: PushEmpty(object)
0x43: Call2 0x5f

0x44: Pop(0)
0x45: @ RemoveActor(Stack[-1])
0x46: Pop(1)
0x47: GOTO 0x4c

0x48: Push("restore")
0x49: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4c: Return(); Pop(2)

0x4d: PushEmpty(bool)
0x4e: Stack[-1] = (bool) 0
0x4f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x50: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x51: PushEmpty(bool)
0x52: Call2 0x5d

0x53: Pop(0)
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: Stack[-1] = (bool) 1
0x56: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x57: PushEmpty(object)
0x58: Call2 0x5f

0x59: Pop(0)
0x5a: @ RemoveActor(Stack[-1])
0x5b: Pop(1)
0x5c: Return(); Pop(0)

0x5d: Stack[-1] = (bool) 1
0x5e: Return(); Pop(0)

0x5f: PushEmpty(object, object)
0x60: @ self(Stack[-1])
0x61: Pop(0)
0x62: Stack[-3] = Stack[-1]
0x63: Return(); Pop(2)

0x64: Stack[-1] = 0
0x65: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x66: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x67: Pop(0)
0x68: Pop(0); Push((bool) Stack[-4] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6a: Push("Locator ")
0x6b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x6c: Push(" doesn't exist")
0x6d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e: @ Trace(Stack[-1])
0x6f: Pop(1)
0x70: Stack[-1] = 0
0x71: GOTO 0x74

0x72: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x73: Pop(0)
0x74: Stack[-13] = Stack[-1]
0x75: Return(); Pop(8)

0x76: Stack[-1] = 0
