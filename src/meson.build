bootvm_sources = [
  'main.c',
]

bootvm_deps = [
]

executable('bootvm', bootvm_sources,
  dependencies: bootvm_deps,
  c_args: ['-Wno-expansion-to-defined','-O3'],
  install: true,
)
