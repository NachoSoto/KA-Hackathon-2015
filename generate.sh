#!/bin/bash

DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd)
DJINNI="$DIR/../djinni/src/run"

GENERATED_FOLDER="$DIR/generated"
CPP_FOLDER="$GENERATED_FOLDER/cpp/core"
OBJC_FOLDER="$GENERATED_FOLDER/objc"
JAVA_FOLDER="$GENERATED_FOLDER/java/org/khanacademy/core/shared"
JNI_FOLDER="$GENERATED_FOLDER/cpp/jni"

IDL_FILE="$DIR/records.idl"

rm -rf "$GENERATED_FOLDER" 2> /dev/null
mkdir -p "$GENERATED_FOLDER"

"$DJINNI" \
   --java-out "$JAVA_FOLDER" \
   --java-package org.khanacademy.core.shared \
   --java-cpp-exception RuntimeException \
   --java-nullable-annotation "javax.annotation.Nullable" \
   --ident-java-field mFooBar \
   --cpp-namespace Khan \
   --cpp-out "$CPP_FOLDER" \
   --jni-out "$JNI_FOLDER" \
   --ident-jni-class NativeFooBar \
   --ident-jni-file NativeFooBar \
   --objc-out "$OBJC_FOLDER" \
   --objcpp-out "$OBJC_FOLDER" \
   --objc-type-prefix KHA \
   --idl "$IDL_FILE"